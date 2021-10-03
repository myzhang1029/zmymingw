#!/bin/sh

autoreconf -fi
CFLAGS=-I"${ZCPREF}"/include\ -I"${ZCPREF}"/include/libheif\ -I"${ZCPREF}"/include/libxml2\ -DBZ_EXPORT \
    LDFLAGS=-L"${ZCPREF}"/lib \
    ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --without-x --without-pango --enable-static --enable-shared
make -j16
make install
make distclean
exit 0
