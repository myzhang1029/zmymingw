#!/bin/sh
autoreconf -i
CFLAGS=-I${ZCPREF}/include LDFLAGS=-L${ZCPREF}/lib ./configure --prefix=${ZCPREF} --host=${ZCHOST}
make
make install
make distclean
exit 0
