#!/bin/sh
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS=-w ./configure --host="${ZCHOST}" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
