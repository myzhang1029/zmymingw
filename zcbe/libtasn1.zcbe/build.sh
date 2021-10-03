#!/bin/sh
autoreconf -fi
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --disable-doc
make
make install
make distclean
exit 0
