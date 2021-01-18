#!/bin/sh

autoreconf -i
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --target="${ZCHOST}" --prefix="${ZCPREF}" --with-zlib="${ZCPREF}" \
--with-mpfr="${ZCPREF}" --with-gmp="${ZCPREF}" --with-mpc="${ZCPREF}" \
--enable-languages=c,c++,fortran,lto --disable-multilib --disable-nls
make -j16
make install
cp "${ZCPREF}"/lib/libgcc_s_sjlj-1.dll "${ZCPREF}"/bin || true
cp "${ZCPREF}"/lib/libgcc_s_seh-1.dll "${ZCPREF}"/bin || true
make distclean
exit 0
