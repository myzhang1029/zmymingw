dnl Process this file with autoconf to produce a configure script.

dnl Copyright (C) 2006, 2016-2018 Free Software Foundation, Inc.
dnl
dnl This program is free software; you can redistribute it and/or modify
dnl it under the terms of the GNU General Public License as published by
dnl the Free Software Foundation; either version 3, or (at your option)
dnl any later version.
dnl
dnl This program is distributed in the hope that it will be useful,
dnl but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl GNU General Public License for more details.
dnl
dnl You should have received a copy of the GNU General Public License
> dnl along with this program.  If not, see <http://www.gnu.org/licenses/>.

m4_define([bc_version], 1.08.1)
m4_define([dc_version], 1.5.1)

AC_INIT([bc],[bc_version])
AC_CONFIG_SRCDIR(doc/bc.1)
AM_INIT_AUTOMAKE([dist-xz])
AC_CONFIG_HEADERS(config.h)
AC_CONFIG_MACRO_DIRS([m4])

AC_DEFINE([DC_VERSION], "dc_version",
	  [Define the dc version number.])

AC_DEFINE([BC_COPYRIGHT],
	  ["Copyright 1991-1994, 1997, 1998, 2000, 2004, 2006, 2008, 2012-2018, 2024 Free Software Foundation, Inc."],
	  [Define the bc copyright line.])

AC_DEFINE([DC_COPYRIGHT], 
          ["Copyright 1994, 1997, 1998, 2000, 2001, 2003-2006, 2008, 2010, 2012-2018, 2022, 2024 Free Software Foundation, Inc."],
	  [Define the dc copyright line.])

AC_PROG_CC
AC_USE_SYSTEM_EXTENSIONS

AC_PROG_LEX(noyywrap)
AM_PROG_AR
AC_PROG_YACC
AC_PROG_INSTALL
AC_PROG_RANLIB
AC_PROG_MAKE_SET

AC_CHECK_HEADERS_ONCE(stdarg.h stddef.h stdlib.h string.h errno.h limits.h unistd.h lib.h)
AC_C_CONST
AC_TYPE_SIZE_T
AC_CHECK_TYPE(ptrdiff_t, size_t)
AX_C___ATTRIBUTE__

AC_FUNC_VPRINTF
AC_CHECK_FUNCS(isgraph setvbuf fstat strtol)

AC_ARG_ENABLE([dc-bang-shell],
    [AS_HELP_STRING([--disable-dc-bang-shell],
       [disable the '!' command-line escape in dc])])
case $enable_dc_bang_shell in
  no) ;;
  *) AC_DEFINE([ENABLE_DC_BANG_SHELL], 1, [Allow ! shell escapes out of dc]) ;;
esac

AC_ARG_WITH(pkg,
   AS_HELP_STRING([--with-pkg],[use software installed in /usr/pkg tree]),
   [case $withval in no) ;;
      *) CPPFLAGS="$CPPFLAGS -I/usr/pkg/include"
	 LDFLAGS="$LDFLAGS -L/usr/pkg/lib"
	 echo Using /usr/pkg/include and /usr/pkg/lib ;;
    esac])

bcle=n
AC_ARG_WITH(libedit,
   AS_HELP_STRING([--with-libedit],[support fancy BSD command input editing]),
   [case $withval in no) ;;
      *) LDSAVE=$LDFLAGS
	 AC_CHECK_LIB(termcap,tgetent,TERMLIB=-ltermcap)
	 LDFLAGS="$LDFLAGS $TERMLIB"
	 AC_CHECK_LIB(edit,el_gets,
	    [AC_CHECK_HEADER(histedit.h,
	     READLINELIB="-ledit $TERMLIB";bcle=y)],
	    READLINELIB="")
	 case $bcle in
	   y) AC_DEFINE(LIBEDIT,1, [Define if libedit is used])
	      echo Using the libedit library. ;;
	 esac
	 LDFLAGS=$LDSAVE
	 ;;
    esac])
 
bcrl=n
AC_ARG_WITH(readline,
   AS_HELP_STRING([--with-readline],[support fancy command input editing]),
   [case $withval in no) ;;
      *) LDSAVE=$LDFLAGS
	 AC_CHECK_LIB(ncurses,tparm,TERMLIB=-lncurses,
	    AC_CHECK_LIB(termcap,tgetent,TERMLIB=-ltermcap))
	 LDFLAGS="$LDFLAGS $TERMLIB"
	 AC_CHECK_LIB(readline,readline,
	    [AC_CHECK_HEADER(readline/readline.h,
	     READLINELIB="-lreadline $TERMLIB";bcrl=y)],
	    READLINELIB="")
	 case $bcrl in
	   y) AC_DEFINE(READLINE,1, [Define if readline is used])
	      echo Using the readline library. ;;
	 esac
	 LDFLAGS=$LDSAVE
	 ;;
    esac])

case $bcle-$bcrl-$LEX in
   y-y-*)
	AC_MSG_ERROR(Can not use both readline and libedit.  Aborting.) ;;
   ?-?-flex)
	LEX="flex -I -8" ;;
   ?-y-*)
	AC_MSG_ERROR(readline works only with flex.) ;;
esac

case $LEX-`uname -s` in
  lex-SunOS) LEXLIB=""; echo "SunOS using lex does not have a -ll." ;;
esac

case $GCC in
  yes) CFLAGS="$CFLAGS -Wall -funsigned-char"
       echo "Adding GCC specific compile flags." ;;
esac

AC_SUBST(READLINELIB)
AC_SUBST(BC_VERSION, bc_version)
AC_SUBST(DC_VERSION, dc_version)
AC_CONFIG_FILES(
    Makefile bc/Makefile dc/Makefile
    lib/Makefile
    doc/Makefile doc/texi-ver.incl
  )
AC_OUTPUT
