#!/bin/sh

./buildconf
./configure --prefix=${ZCPREF} --host=${ZCHOST} --enable-static
make
make install
make clean
make distclean -i
