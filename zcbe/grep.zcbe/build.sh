#!/bin/sh

./bootstrap --gnulib-refdir="${ZCTOP}"/libraries/gnulib
LIBS=-lpthread ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
