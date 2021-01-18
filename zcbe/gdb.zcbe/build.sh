#!/bin/sh

autoreconf -fi
mkdir -p build
cd build
#CFLAGS=-I"${ZCPREF}"/include LDFLAGS=-L"${ZCPREF}"/lib
../configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --with-gmp="${ZCPREF}" --with-mpfr="${ZCPREF}" --with-mpc="${ZCPREF}"
make
make install
make distclean
cd ..
rm -rf build
exit 0
