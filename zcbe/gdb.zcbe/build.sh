#!/bin/sh

autoreconf -i
mkdir -p build
cd build
CFLAGS=-I"${ZCPREF}"/include LDFLAGS=-L"${ZCPREF}"/lib ../configure --host="${ZCHOST}" --prefix="${ZCPREF}" --with-gmp="${ZCPREF}" --with-mpfr="${ZCPREF}" --with-mpc="${ZCPREF}"
make
make install
make distclean
cd ..
rm -rf build
exit 0
