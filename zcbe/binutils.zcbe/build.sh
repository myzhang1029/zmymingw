#!/bin/sh
CFLAGS=-I"${ZCPREF}"/include ./configure --host="${ZCHOST}" --prefix="${ZCPREF}" --disable-multilib
make
make install
make distclean
exit 0
