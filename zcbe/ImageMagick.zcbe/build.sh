#!/bin/sh

./autogen.sh
CFLAGS=-I"${ZCPREF}"/include\ -I"${ZCPREF}"/include/libheif\ -I"${ZCPREF}"/include/libxml2 LDFLAGS=-L"${ZCPREF}"/lib ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --without-x --without-pango --enable-static --disable-shared
make
make install
make distclean
exit 0
