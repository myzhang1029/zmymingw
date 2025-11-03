#!/bin/sh
autoreconf -fi
CFLAGS="-DXMD_H -isystem ${ZCPREF}/include" LDFLAGS=-L${ZCPREF}/lib ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --enable-static --enable-shared
# src/annotate.c uses getline() dyn mem TR
cat "${ZCTOP}/zcbe/libgd.zcbe/getline.c" >> src/config.h
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" gdlib
make distclean
exit 0
