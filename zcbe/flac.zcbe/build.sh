#!/bin/sh
./autogen.sh
CFLAGS=-U_FORTIFY_SOURCE ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make
make install
make distclean
exit 0
