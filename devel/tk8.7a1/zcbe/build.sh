#!/bin/sh

(cd win; autoreconf -i)
win/configure --host="${ZCHOST}" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
