#!/bin/sh
CPPFLAGS=-DDBL_EPSILON=__DBL_EPSILON__\ -I${ZCPREF}/include LDFLAGS=-L${ZCPREF}/lib ./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)"
make
make install
make distclean
exit 0
