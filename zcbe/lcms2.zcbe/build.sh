#!/bin/sh
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --enable-shared --enable-static
make
make install
make distclean
exit 0
