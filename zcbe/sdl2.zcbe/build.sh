#!/bin/sh
CFLAGS="-DDBL_EPSILON=__DBL_EPSILON__" ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make
make install
make distclean
exit 0
