#!/bin/sh
CPPFLAGS=-I${ZCPREF}/include\ -L${ZCPREF}/lib ./configure --prefix=${ZCPREF} --host=${ZCHOST}
make
make install
make distclean
exit 0
