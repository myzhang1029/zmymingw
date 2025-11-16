#!/bin/sh
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS="-Wno-error -lssp" ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
touch doc/m4.1
make
make install
make distclean
exit 0
