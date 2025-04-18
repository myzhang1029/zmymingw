#!/bin/sh

./autogen.sh
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --disable-static --enable-shared
make
make install
make distclean
exit 0
