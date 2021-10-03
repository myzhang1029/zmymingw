#!/bin/sh
PKG_CONFIG_PATH="${ZCPREF}"/lib/pkgconfig CFLAGS=-I"${ZCPREF}"/include LDFLAGS=-L"${ZCPREF}"/lib ./autogen.sh --prefix=${ZCPREF} --host=${ZCHOST} --without-python
make
make install
make distclean
exit 0
