#!/bin/sh
autoreconf -fi
CFLAGS="-DDBL_EPSILON=__DBL_EPSILON__ -DFLT_EPSILON=__FLT_EPSILON__" ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --with-gmp=${ZCPREF} --disable-shared --enable-static
make
make install
make distclean
exit 0
