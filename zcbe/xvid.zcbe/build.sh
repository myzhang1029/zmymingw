#!/bin/sh
cd build/generic
autoreconf -i
./configure --prefix=${ZCPREF} --host=${ZCHOST}
make
make install
make distclean
exit 0
