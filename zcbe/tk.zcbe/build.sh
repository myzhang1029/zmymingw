#!/bin/sh

(cd win; autoreconf -i)
win/configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
