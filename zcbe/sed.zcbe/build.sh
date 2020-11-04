#!/bin/sh

./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS=-U_FORTIFY_SOURCE ./configure --host=${ZCHOST} --prefix=${ZCPREF}
make
make install
make distclean
exit 0
