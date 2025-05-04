#!/bin/sh
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS="-std=gnu99 -w" ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --disable-gcc-warnings
make
make install
make distclean
exit 0
