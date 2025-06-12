#!/bin/sh
AC_VERSION="$(LC_ALL=C autoconf --version|head -n1|rev|cut -d\  -f1|rev)"
sed -i.zcbak "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_VERSION}])/" configure.ac
#autopoint -f
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
./configure --host="${ZCHOST}" --prefix="${ZCPREF}"
make
make install
make distclean
mv configure.ac.zcbak configure.ac
exit 0
