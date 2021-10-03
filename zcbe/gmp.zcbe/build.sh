#!/bin/sh

autoreconf -i
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
