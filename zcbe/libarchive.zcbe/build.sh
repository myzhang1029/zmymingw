#!/bin/sh
autoreconf -fi
LDFLAGS="-L${ZCPREF}"/lib CFLAGS=-I"${ZCPREF}"/include ./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --with-zstd --with-zlib --with-xml2 --with-lzma --with-bz2lib
make
make install
make distclean
exit 0
