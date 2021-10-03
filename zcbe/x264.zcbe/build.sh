#!/bin/sh
./configure --prefix="${ZCPREF}" --cross-prefix="${ZCHOST}"- --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --enable-static --enable-shared
make
make install install-lib-dev install-lib-static install-lib-shared
make distclean
exit 0
