#!/bin/sh
patch -p1 < "${ZCTOP}/zcbe/gdbm.zcbe/mingw.patch"
sed -i.zcbak 's/^libgdbm_la_LDFLAGS = -version-info/libgdbm_la_LDFLAGS = -no-undefined -version-info/' src/Makefile.am
autoreconf -fi
CFLAGS=-std=gnu99 LDFLAGS=-lws2_32 ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-shared --enable-static
make
make install
make distclean
mv src/Makefile.am.zcbak src/Makefile.am
patch -R -p1 < "${ZCTOP}/zcbe/gdbm.zcbe/mingw.patch"
exit 0
