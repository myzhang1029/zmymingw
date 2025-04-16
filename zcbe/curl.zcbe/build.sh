#!/bin/sh

autoreconf -fi
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --without-brotli --with-openssl="${ZCPREF}" --with-libssh2 --with-zlib --enable-static --enable-shared
make
make install
make clean
# Because there is a problem in distclean, don't do it.
exit 0
