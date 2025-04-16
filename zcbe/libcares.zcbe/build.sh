#!/bin/sh

autoreconf -fi
./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --disable-static
make
make install
make clean
make distclean -i
