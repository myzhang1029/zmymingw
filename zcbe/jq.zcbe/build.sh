#!/bin/sh
test -d "${ZCTOP}/.git" && git submodule update --init
autoreconf -fi
CFLAGS=-std=gnu99 ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
