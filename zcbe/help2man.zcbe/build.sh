#!/bin/sh

autoreconf -fi
cp ../../libraries/gnulib/build-aux/mkinstalldirs build-aux || true
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
