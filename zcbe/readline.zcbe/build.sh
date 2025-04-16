#!/bin/sh
patch -u < "${ZCTOP}/zcbe/readline.zcbe/build.patch"
LDFLAGS=-L${ZCPREF}/lib ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --disable-shared --enable-static
make
make install
make distclean
rm -f readline-8.0/shlib/libhistory8.dll.a readline-8.0/shlib/libreadline8.dll.a
patch -R -u < "${ZCTOP}/zcbe/readline.zcbe/build.patch"
exit 0
