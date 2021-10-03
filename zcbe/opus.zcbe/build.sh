#!/bin/sh
./autogen.sh
LDFLAGS="-L${ZCPREF}/lib -lssp" ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --enable-static --enable-shared
make
make install
make distclean
exit 0
