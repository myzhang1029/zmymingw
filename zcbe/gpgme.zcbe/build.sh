#!/bin/sh

./autogen.sh
CFLAGS=-DDBL_EPSILON=__DBL_EPSILON__ ./configure --prefix=${ZCPREF} --host=${ZCHOST} --with-libgpg-error-prefix=${ZCPREF} --with-libassuan-prefix=${ZCPREF}
make
make install
make distclean
exit 0
