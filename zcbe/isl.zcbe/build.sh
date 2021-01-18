#!/bin/sh

autoreconf -i
./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --with-gmp-prefix=${ZCPREF} --enable-static --enable-shared
make
make install
make distclean
exit 0
