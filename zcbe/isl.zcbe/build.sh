#!/bin/sh

autoreconf -i
./configure --prefix=${ZCPREF} --host=${ZCHOST} --with-gmp-prefix=${ZCPREF}
make
make install
make distclean
exit 0
