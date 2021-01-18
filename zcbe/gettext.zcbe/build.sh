#!/bin/sh
./autogen.sh
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --enable-static --disable-shared
make
make install
make distclean
exit 0
