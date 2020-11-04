#!/bin/sh
./configure --host=${ZCHOST} --prefix=${ZCPREF} --without-trust-paths
make
make install
make distclean
exit 0
