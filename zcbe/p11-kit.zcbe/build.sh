#!/bin/sh
autoreconf -fi
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --without-trust-paths --enable-shared
make
make install
make distclean
exit 0
