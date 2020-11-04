/* lock.c - Implement basic file locking for GDBM. */

/* This file is part of GDBM, the GNU data base manager.
   Copyright (C) 2008, 2011, 2013, 2017 Free Software Foundation, Inc.

   GDBM is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GDBM is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GDBM. If not, see <http://www.gnu.org/licenses/>.   */

/* Include system configuration before all else. */
#include "autoconf.h"

#include "gdbmdefs.h"

#include <errno.h>

#if HAVE_FLOCK || defined(_WIN32)
# ifndef LOCK_SH
#  define LOCK_SH 1
# endif

# ifndef LOCK_EX
#  define LOCK_EX 2
# endif

# ifndef LOCK_NB
#  define LOCK_NB 4
# endif

# ifndef LOCK_UN
#  define LOCK_UN 8
# endif
#endif

#ifdef _WIN32
#include <errno.h>
#include <limits.h>

/*
 * flock support code for windows
 *
 * This code is derived from ruby (http://www.ruby-lang.org/).
 * Original copyright notice is below.
 */
/*
 *  Copyright (c) 1993, Intergraph Corporation
 *
 *  You may distribute under the terms of either the GNU General Public
 *  License or the Artistic License, as specified in the perl README file.
 *
 *  Various Unix compatibility functions and NT specific functions.
 *
 *  Some of this code was derived from the MSDOS port(s) and the OS/2 port.
 *
 */

#ifndef EWOULDBLOCK
#define EWOULDBLOCK 10035 /* EBASEERR + 35 (winsock.h) */
#endif

#define LK_ERR(f,i) ((f) ? (i = 0) : (errno = GetLastError() == ERROR_LOCK_VIOLATION ? EWOULDBLOCK : EACCES))
#define LK_LEN      ULONG_MAX

static int
flock_winnt(HANDLE fh, int oper)
{
    OVERLAPPED o;
    int i = -1;

    memset(&o, 0, sizeof(o));

    switch(oper) {
      case LOCK_SH:		/* shared lock */
	LK_ERR(LockFileEx(fh, 0, 0, LK_LEN, LK_LEN, &o), i);
	break;
      case LOCK_EX:		/* exclusive lock */
	LK_ERR(LockFileEx(fh, LOCKFILE_EXCLUSIVE_LOCK, 0, LK_LEN, LK_LEN, &o), i);
	break;
      case LOCK_SH|LOCK_NB:	/* non-blocking shared lock */
	LK_ERR(LockFileEx(fh, LOCKFILE_FAIL_IMMEDIATELY, 0, LK_LEN, LK_LEN, &o), i);
	break;
      case LOCK_EX|LOCK_NB:	/* non-blocking exclusive lock */
	LK_ERR(LockFileEx(fh,
			  LOCKFILE_EXCLUSIVE_LOCK|LOCKFILE_FAIL_IMMEDIATELY,
			  0, LK_LEN, LK_LEN, &o), i);
	break;
      case LOCK_UN:		/* unlock lock */
	LK_ERR(UnlockFileEx(fh, 0, LK_LEN, LK_LEN, &o), i);
	break;
      default:            /* unknown */
	errno = EINVAL;
	break;
    }
    return i;
}

#undef LK_ERR

int
flock(int fd, int oper)
{
    static int (*locker)(HANDLE, int) = NULL;

    if (!locker) {
	locker = flock_winnt;
    }

    return locker((HANDLE)_get_osfhandle(fd), oper);
}
#endif /* _WIN32 */

#if defined(F_SETLK) && defined(F_RDLCK) && defined(F_WRLCK)
# define HAVE_FCNTL_LOCK 1
#else
# define HAVE_FCNTL_LOCK 0
#endif

#if 0
int
gdbm_locked (GDBM_FILE dbf)
{
  return (dbf->lock_type != LOCKING_NONE);
}
#endif

void
_gdbm_unlock_file (GDBM_FILE dbf)
{
#if HAVE_FCNTL_LOCK
  struct flock fl;
#endif

  switch (dbf->lock_type)
    {
      case LOCKING_FLOCK:
#if HAVE_FLOCK || defined(_WIN32)
	flock (dbf->desc, LOCK_UN);
#endif
	break;

      case LOCKING_LOCKF:
#if HAVE_LOCKF
	lockf (dbf->desc, F_ULOCK, (off_t)0L);
#endif
	break;

      case LOCKING_FCNTL:
#if HAVE_FCNTL_LOCK
	fl.l_type = F_UNLCK;
	fl.l_whence = SEEK_SET;
	fl.l_start = fl.l_len = (off_t)0L;
	fcntl (dbf->desc, F_SETLK, &fl);
#endif
	break;

      case LOCKING_NONE:
        break;
    }

  dbf->lock_type = LOCKING_NONE;
}

/* Try each supported locking mechanism. */
int
_gdbm_lock_file (GDBM_FILE dbf)
{
#if HAVE_FCNTL_LOCK
  struct flock fl;
#endif
  int lock_val = -1;

#if HAVE_FLOCK || defined(_WIN32)
  if (dbf->read_write == GDBM_READER)
    lock_val = flock (dbf->desc, LOCK_SH + LOCK_NB);
  else
    lock_val = flock (dbf->desc, LOCK_EX + LOCK_NB);

  if ((lock_val == -1) && (errno == EWOULDBLOCK))
    {
      dbf->lock_type = LOCKING_NONE;
      return lock_val;
    }
  else if (lock_val != -1)
    {
      dbf->lock_type = LOCKING_FLOCK;
      return lock_val;
    }
#endif

#if HAVE_LOCKF
  /* Mask doesn't matter for lockf. */
  lock_val = lockf (dbf->desc, F_LOCK, (off_t)0L);
  if ((lock_val == -1) && (errno == EDEADLK))
    {
      dbf->lock_type = LOCKING_NONE;
      return lock_val;
    }
  else if (lock_val != -1)
    {
      dbf->lock_type = LOCKING_LOCKF;
      return lock_val;
    }
#endif

#if HAVE_FCNTL_LOCK
  /* If we're still here, try fcntl. */
  if (dbf->read_write == GDBM_READER)
    fl.l_type = F_RDLCK;
  else
    fl.l_type = F_WRLCK;
  fl.l_whence = SEEK_SET;
  fl.l_start = fl.l_len = (off_t)0L;
  lock_val = fcntl (dbf->desc, F_SETLK, &fl);

  if (lock_val != -1)
    dbf->lock_type = LOCKING_FCNTL;
#endif

  if (lock_val == -1)
    dbf->lock_type = LOCKING_NONE;
  return lock_val;
}
