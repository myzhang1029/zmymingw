#!/bin/sh

./buildconf
./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --enable-static
make
make install
make clean
make distclean -i
