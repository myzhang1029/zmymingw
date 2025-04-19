#!/bin/sh
sed -i.zcbak "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
#autopoint -f
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
./configure --host="${ZCHOST}" --prefix="${ZCPREF}"
make
make install
make distclean
mv configure.ac.zcbak configure.ac
exit 0
