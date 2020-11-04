#!/bin/sh
./autogen.sh
CC=${ZCHOST}-gcc RC=${ZCHOST}-windres ./configure --host=${ZCHOST} --prefix=${ZCPREF}
make
make install
make distclean
rm -f ltmain.sh m4/extern-inline.m4
exit 0
