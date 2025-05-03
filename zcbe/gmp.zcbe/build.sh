#!/bin/sh

autoreconf -i
CFLAGS=-std=gnu99 ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-shared --disable-static
make
make install
make distclean
exit 0
