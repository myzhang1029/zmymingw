#!/bin/sh
set -xv
sed -i.zcbak "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
sed -i.zcbak "s/aclocal-[0-9]*\.[0-9]*/aclocal/" libcharset/Makefile.devel
GNULIB_SRCDIR="${ZCTOP}/libraries/gnulib" ./autogen.sh
# Tired of fighting autotools 
# Tried: gl_cv_iconv_nonconst=yes iconv_arg1='/*empty*/' ac_iconv_const='/*empty*/'
sed -i.zcbak "s/@ICONV_CONST@//" include/iconv.h.in
sed -i.zcbak "s/@ICONV_CONST@//" include/iconv.h.build.in
# Make sure CC doesn't affect autogen.sh
CC="${ZCHOST}-gcc" CFLAGS="-isystem ${ZCPREF}/include" ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-shared
make
make install
make distclean
mv include/iconv.h.build.in.zcbak include/iconv.h.build.in
mv include/iconv.h.in.zcbak include/iconv.h.in
mv libcharset/Makefile.devel.zcbak libcharset/Makefile.devel
mv configure.ac.zcbak configure.ac
exit 0
