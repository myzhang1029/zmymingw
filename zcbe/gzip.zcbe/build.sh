#!/bin/sh
sed -i.zcbak "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS=-lssp ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
mv configure.ac.zcbak configure.ac
exit 0
