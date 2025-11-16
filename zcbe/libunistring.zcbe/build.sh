#!/bin/sh
GNULIB_SRCDIR="${ZCTOP}"/libraries/gnulib ./autogen.sh
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
