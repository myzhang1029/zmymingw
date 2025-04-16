#!/bin/sh
patch -u < "${ZCTOP}/zcbe/aria2.zcbe/build.patch"
autoreconf -fi
CFLAGS="-I${ZCPREF}/include" LDFLAGS="-L${ZCPREF}/lib" ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --enable-static --enable-shared --without-libxml2 --with-libexpat --with-libssh2 --with-libcares="${ZCPREF}" --with-libgcrypt="${ZCPREF}" --with-libnettle="${ZCPREF}"
make
make install
make distclean

patch -R -u < "${ZCTOP}/zcbe/aria2.zcbe/build.patch"
exit 0
