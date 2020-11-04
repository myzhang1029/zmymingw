#!/bin/sh

autoreconf -if
LIBS=-lpthread ./configure --host=${ZCHOST} --prefix=${ZCPREF}
make
make install
make distclean
exit 0
