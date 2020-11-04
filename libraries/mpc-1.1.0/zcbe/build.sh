#!/bin/sh
./configure --host=${ZCHOST} --prefix=${ZCPREF} --with-gmp=${ZCPREF} --with-mpfr=${ZCPREF} --disable-shared --enable-static
make
make install
make distclean
exit 0
