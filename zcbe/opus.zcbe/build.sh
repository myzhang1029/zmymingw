#!/bin/sh
./autogen.sh
CFLAGS=-lssp ./configure --host=${ZCHOST} --prefix=${ZCPREF}
make
make install
make distclean
exit 0
