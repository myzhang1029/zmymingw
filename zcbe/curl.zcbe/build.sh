#!/bin/sh

autoreconf -fi
(
mkdir -p zcbe_build && cd zcbe_build || exit 1
../configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --without-brotli --with-openssl="${ZCPREF}" --with-nghttp2 --with-libssh2 --with-zlib --enable-static --enable-shared
make
make install
)
rm -rf zcbe_build
exit 0
