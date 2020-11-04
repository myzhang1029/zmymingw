#!/bin/sh
CFLAGS=-I${ZCPREF}/include LDFLAGS=-L${ZCPREF}/lib ./configure --prefix=${ZCPREF} --host=${ZCHOST} --without-harfbuzz
make
make install
make distclean
exit 0
