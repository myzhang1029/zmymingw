#!/bin/sh
CPPFLAGS=-I${ZCPREF}/include\ -L${ZCPREF}/lib ./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --enable-static --enable-shared
make
make install
make distclean
exit 0
