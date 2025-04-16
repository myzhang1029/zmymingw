#!/bin/sh
CFLAGS=-I"${ZCPREF}"/include ./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --disable-multilib --with-gmp="${ZCPREF}" --with-mpfr="${ZCPREF}"
make
make install
make distclean
exit 0
