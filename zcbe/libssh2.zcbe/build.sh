#!/bin/sh
./buildconf
./configure --host=${ZCHOST} --prefix=${ZCPREF}
make
make install
make distclean
exit 0
