/* Message catalogs for internationalization.
   Copyright (C) 1995-2002, 2004, 2005 Free Software Foundation, Inc.
   Copyright (C) 2017 Zhang Maiyun
   This file is part of the GNU C Library.
   This file is derived from the file libgettext.h in the GNU gettext package.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _LIBINTL_H
#define _LIBINTL_H	1

#ifdef __cplusplus
# define __BEGIN_DECLS extern "C"{
# define __END_DECLS }
#else
# define __BEGIN_DECLS
# define __END_DECLS
#endif
#define __USE_GNU_GETTEXT 1
#define __set_errno(errn) errno=errn
/* Provide information about the supported file formats.  Returns the
   maximum minor revision number supported for a given major revision.  */
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) \
  ((major) == 0 ? 1 : -1)

#include <locale.h>
#ifndef LC_CTYPE
#define LC_CTYPE		 0
#endif
#ifndef LC_NUMERIC
#define LC_NUMERIC		 1
#endif
#ifndef LC_TIME
#define LC_TIME			 2
#endif
#ifndef LC_COLLATE
#define LC_COLLATE		 3
#endif
#ifndef LC_MONETARY
#define LC_MONETARY		 4
#endif
#ifndef LC_MESSAGES
#define LC_MESSAGES		 5
#endif
#ifndef LC_ALL
#define LC_ALL			 6
#endif
#ifndef LC_PAPER
#define LC_PAPER		 7
#endif
#ifndef LC_NAME
#define LC_NAME			 8
#endif
#ifndef LC_ADDRESS
#define LC_ADDRESS		 9
#endif
#ifndef LC_TELEPHONE
#define LC_TELEPHONE		10
#endif
#ifndef LC_MEASURMENT
#define LC_MEASUREMENT		11
#endif
#ifndef LC_IDENTIFICATION
#define LC_IDENTIFICATION	12
#endif
__BEGIN_DECLS

/* Look up MSGID in the current default message catalog for the current
   LC_MESSAGES locale.  If not found, returns MSGID itself (the default
   text).  */
extern char *gettext (const char *__msgid);

/* Look up MSGID in the DOMAINNAME message catalog for the current
   LC_MESSAGES locale.  */
extern char *dgettext (const char *__domainname, const char *__msgid);

extern char *__dgettext (const char *__domainname, const char *__msgid);

/* Look up MSGID in the DOMAINNAME message catalog for the current CATEGORY
   locale.  */
extern char *dcgettext (const char *__domainname,
			const char *__msgid, int __category);

extern char *__dcgettext (const char *__domainname,
			  const char *__msgid, int __category);


/* Similar to `gettext' but select the plural form corresponding to the
   number N.  */
extern char *ngettext (const char *__msgid1, const char *__msgid2,
		       unsigned long int __n);

/* Similar to `dgettext' but select the plural form corresponding to the
   number N.  */
extern char *dngettext (const char *__domainname, const char *__msgid1,
			const char *__msgid2, unsigned long int __n);

/* Similar to `dcgettext' but select the plural form corresponding to the
   number N.  */
extern char *dcngettext (const char *__domainname, const char *__msgid1,
			 const char *__msgid2, unsigned long int __n,
			 int __category);


/* Set the current default message catalog to DOMAINNAME.
   If DOMAINNAME is null, return the current default.
   If DOMAINNAME is "", reset to the default of "messages".  */
extern char *textdomain (const char *__domainname);

/* Specify that the DOMAINNAME message catalog will be found
   in DIRNAME rather than in the system locale data base.  */
extern char *bindtextdomain (const char *__domainname,
			     const char *__dirname);

/* Specify the character encoding in which the messages from the
   DOMAINNAME message catalog will be returned.  */
extern char *bind_textdomain_codeset (const char *__domainname,
				      const char *__codeset);

__END_DECLS

#ifdef _LIBC
# define _(x) gettext(x)
# define N_(x) x
#endif

#endif /* libintl.h */
