#!/bin/sh
autoreconf -i
LDFLAGS=-lgcc ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make HOST_LINK=gcc
make install
make distclean
exit 0
