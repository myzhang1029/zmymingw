#!/bin/sh
AC_VERSION="$(LC_ALL=C autoconf --version|head -n1|rev|cut -d\  -f1|rev)"
sed -i.zcbak "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_VERSION}])/" configure.ac
./bootstrap --gnulib-refdir="${ZCTOP}"/libraries/gnulib --bootstrap-sync
CFLAGS=-lssp ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
mv configure.ac.zcbak configure.ac
exit 0
