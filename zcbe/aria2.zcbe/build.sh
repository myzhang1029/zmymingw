#!/bin/sh
sed -i.zcbak "s,^SUBDIRS =  po lib deps src doc test,SUBDIRS =  lib deps src doc test," Makefile.am
autoreconf -fi
CFLAGS="-isystem ${ZCPREF}/include" LDFLAGS="-L${ZCPREF}/lib" ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --enable-static --enable-shared --without-libxml2 --with-libexpat --with-libssh2 --with-libcares="${ZCPREF}" --with-libgcrypt="${ZCPREF}" --with-libnettle="${ZCPREF}"
make
make install
make distclean

mv Makefile.am.zcbak Makefile.am
exit 0
