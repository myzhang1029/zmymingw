#!/bin/sh

./autogen.sh
./configure --prefix=${ZCPREF} --host=${ZCHOST} --with-libgpg-error-prefix=${ZCPREF}
make
make install
make distclean
exit 0
