#!/bin/sh
./autogen.sh
CFLAGS="-DDBL_EPSILON=__DBL_EPSILON__ -I${ZCPREF}/include" LDFLAGS="-L${ZCPREF}/lib -lpixman-1 -lfontconfig" ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --enable-static --enable-shared --without-x --enable-xml --enable-win32
make
make install
make distclean
exit 0
