#!/bin/sh
patch -u < "${ZCTOP}/zcbe/gdbm.zcbe/mingw.patch"
autoreconf -fi
LDFLAGS=-lws2_32 ./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
patch -R -u < "${ZCTOP}/zcbe/gdbm.zcbe/mingw.patch"
exit 0
