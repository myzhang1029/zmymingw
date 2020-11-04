#!/bin/sh

autoreconf -i
./configure --host=${ZCHOST} --prefix=${ZCPREF}
make
make uninstall || true
make install
make distclean
exit 0
