#!/bin/sh
./bootstrap --gnulib-refdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS="-std=gnu99 -w" ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --disable-gcc-warnings
make
make install
make distclean
exit 0
