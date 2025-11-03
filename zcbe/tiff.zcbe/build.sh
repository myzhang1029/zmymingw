#!/bin/sh
./autogen.sh
CFLAGS="-isystem ${ZCPREF}/include" LDFLAGS=-L${ZCPREF}/lib ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --enable-static --enable-shared
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libtiff-4
make distclean
exit 0
