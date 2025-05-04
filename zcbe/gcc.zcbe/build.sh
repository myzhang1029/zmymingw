#!/bin/sh

AC_VERSION="$(LC_ALL=C autoconf --version|head -n1|rev|cut -d\  -f1|rev)"
sed -i.zcbak 's/m4_define(\[_GCC_AUTOCONF_VERSION\], \[[0-9]*\.[0-9]*\])/m4_define([_GCC_AUTOCONF_VERSION], ['"$AC_VERSION])/" config/override.m4
autoreconf -i
(
mkdir -p zcbe_build && cd zcbe_build || exit 1
../configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --target="${ZCHOST}" --prefix="${ZCPREF}" --with-zlib="${ZCPREF}" \
--with-mpfr="${ZCPREF}" --with-gmp="${ZCPREF}" --with-mpc="${ZCPREF}" --with-zstd="${ZCPREF}" --with-isl="${ZCPREF}" \
--enable-languages=c,c++,fortran,lto --disable-multilib
make
make install
cp "${ZCPREF}"/lib/libgcc_s_sjlj-1.dll "${ZCPREF}"/bin || true
cp "${ZCPREF}"/lib/libgcc_s_seh-1.dll "${ZCPREF}"/bin || true
)
rm -rf zcbe_build
mv config/override.m4.zcbak config/override.m4
exit 0
