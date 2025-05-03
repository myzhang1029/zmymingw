#!/bin/sh

autoreconf -i
CFLAGS=-std=gnu89 ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make FLEX=flex.exe
make FLEX=flex.exe install
make FLEX=flex.exe distclean
exit 0
