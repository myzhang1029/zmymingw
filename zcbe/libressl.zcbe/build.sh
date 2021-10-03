#!/bin/sh
autoreconf -fi
CFLAGS=-I${ZCPREF}/include ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --enable-static --enable-shared
make
make install
make distclean
exit 0
