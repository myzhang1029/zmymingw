#!/bin/sh
CFLAGS=-I${ZCPREF}/include LDFLAGS=-L${ZCPREF}/lib ./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --without-harfbuzz --enable-static --enable-shared
make
make install
make distclean
exit 0
