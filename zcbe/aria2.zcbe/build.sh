#!/bin/sh
autoreconf -i
CC=${ZCHOST}-gcc CFLAGS=-I${ZCPREF}/include LDFLAGS=-L${ZCPREF}/lib ./configure --prefix=${ZCPREF} --host=${ZCHOST} --enable-static --disable-shared --without-libxml2 --with-libexpat
make
make install
make distclean
exit 0
