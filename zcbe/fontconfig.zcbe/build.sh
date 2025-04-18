#!/bin/sh

autoreconf -i
CFLAGS=-I${ZCPREF}/include LDFLAGS=-L${ZCPREF}/lib\ -lintl ./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --enable-static --enable-shared
make
make install
make distclean
exit 0
