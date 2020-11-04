#!/bin/sh
./buildconf
./configure --host="${ZCHOST}" --prefix="${ZCPREF}" --without-brotli --with-ssl --with-libssh2 --with-zlib
make
make install
make clean
# Because there is a problem in distclean, don't do it.
exit 0
