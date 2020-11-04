#!/bin/sh

autoreconf -i
./configure --host=${ZCHOST} --prefix=${ZCPREF}
make||make
make install
make distclean
exit 0
