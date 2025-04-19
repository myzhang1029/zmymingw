#!/bin/sh
sed -i.zcbak "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
sed -i.zcbak "s/aclocal-[0-9]*\.[0-9]*/aclocal/" libcharset/Makefile.devel
GNULIB_SRCDIR="${ZCTOP}/libraries/gnulib" ./autogen.sh
# Make sure CC doesn't affect autogen.sh
CC="${ZCHOST}-gcc" ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make
make install
make distclean
mv libcharset/Makefile.devel.zcbak libcharset/Makefile.devel
mv configure.ac.zcbak configure.ac
exit 0
