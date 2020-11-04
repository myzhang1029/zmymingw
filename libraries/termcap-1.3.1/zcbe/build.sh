#!/bin/sh
./configure --host=${ZCHOST} --prefix=${ZCPREF} --enable-shared --enable-static
make
make install
make distclean
exit 0
