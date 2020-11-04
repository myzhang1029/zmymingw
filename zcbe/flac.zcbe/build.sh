#!/bin/sh
./autogen.sh
CFLAGS=-lssp ./configure --host=${ZCHOST} --prefix=${ZCPREF} --enable-static --disable-shared
make
make install
make distclean
exit 0
