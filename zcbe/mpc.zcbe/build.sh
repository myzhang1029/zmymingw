#!/bin/sh
autoreconf -fi
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --with-gmp=${ZCPREF} --with-mpfr=${ZCPREF} --disable-shared --enable-static
make
make install
make distclean
exit 0
