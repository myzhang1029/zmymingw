#!/bin/sh
cd build/generic
autoreconf -i
CFLAGS=-std=gnu99 ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)"
sed -i.zcbak "s/-mno-cygwin//" platform.inc
rm -f platform.inc.zcbak
make
make install
make distclean
exit 0
