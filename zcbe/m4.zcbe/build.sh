#!/bin/sh
autoreconf -i
CFLAGS=-lssp ./configure --host="${ZCHOST}" --prefix="${ZCPREF}"
# Doc builds are omitted
make || true
make install-exec-recursive
make distclean
exit 0
