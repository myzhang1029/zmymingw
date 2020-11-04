#!/bin/sh
LDFLAGS=-L${ZCPREF}/lib ./configure --host=${ZCHOST} --prefix=${ZCPREF} --enable-shared --enable-static
make
make install
make distclean
rm -f readline-8.0/shlib/libhistory8.dll.a readline-8.0/shlib/libreadline8.dll.a
exit 0
