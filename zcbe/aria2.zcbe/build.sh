#!/bin/sh
autoreconf -fi
CC=${ZCHOST}-gcc CFLAGS=-I${ZCPREF}/include LDFLAGS=-L${ZCPREF}/lib ./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --enable-static --enable-shared --without-libxml2 --with-libexpat --with-libssh2
make
make install
make distclean
exit 0
