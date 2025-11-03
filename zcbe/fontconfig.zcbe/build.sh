#!/bin/sh

autoreconf -i
CFLAGS="-isystem ${ZCPREF}/include" LDFLAGS=-L${ZCPREF}/lib\ -lintl ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --enable-static --enable-shared
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" fontconfig
make distclean
exit 0
