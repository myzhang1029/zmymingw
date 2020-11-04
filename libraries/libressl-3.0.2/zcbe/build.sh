#!/bin/sh
CFLAGS=-I${ZCPREF}/include ./configure --host=${ZCHOST} --prefix=${ZCPREF}
make
make install
make distclean
exit 0
