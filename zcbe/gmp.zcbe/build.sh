#!/bin/sh

autoreconf -i
CFLAGS=-std=gnu99 ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-shared --disable-static
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" gmp
make distclean
exit 0
