#!/bin/sh

autoreconf -i
LDFLAGS=-L"${ZCPREF}"/lib CFLAGS=-I"${ZCPREF}"/include ./configure --host="${ZCHOST}" --target="${ZCHOST}" --prefix="${ZCPREF}" --with-zlib="${ZCPREF}" \
--with-mpfr="${ZCPREF}" --with-gmp="${ZCPREF}" --with-mpc="${ZCPREF}" \
--enable-languages=c,c++,fortran,lto --disable-multilib --disable-nls
make -j16
make install
cp "${ZCPREF}"/lib/libgcc_s_sjlj-1.dll "${ZCPREF}"/bin || true
make distclean
exit 0
