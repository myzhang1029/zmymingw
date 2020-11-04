#!/bin/sh

./autogen.sh
./configure --host=${ZCHOST} --prefix=${ZCPREF}
make
make install
make distclean
exit 0
