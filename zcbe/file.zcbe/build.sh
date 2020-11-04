#!/bin/sh

autoreconf -i
dir=$(mktemp -d)
# First build a native version of file
./configure --prefix=$dir
make install distclean

# Then build the cross version
CFLAGS=-I${ZCPREF}/include LDFLAGS=-L${ZCPREF}/lib ./configure --host=${ZCHOST} --prefix=${ZCPREF}
make FILE_COMPILE=$dir/bin/file
make install
make distclean
exit 0
