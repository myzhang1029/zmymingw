#!/bin/sh
./autogen.sh
CFLAGS=-DDBL_EPSILON=__DBL_EPSILON__ ./configure --enable-maintainer-mode --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --with-libgpg-error-prefix=${ZCPREF} --with-libassuan-prefix=${ZCPREF}
make
make install
make distclean
exit 0
