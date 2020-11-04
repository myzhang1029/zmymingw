#!/bin/sh
autoreconf -i
CFLAGS=-DDBL_EPSILON=__DBL_EPSILON__\ -I"${ZCPREF}"/include LDFLAGS=-L"${ZCPREF}"/lib --prefix="${ZCPREF}" --host="${ZCHOST}" --enable-static --disable-shared --without-x
make
make install
make distclean
exit 0
