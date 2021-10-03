#!/bin/sh

mv config/override.m4 config/override.m4.bak
AC_VERSION="$(LC_ALL=C autoconf --version|head -n1|rev|cut -d\  -f1|rev)"
sed 's/m4_define(\[_GCC_AUTOCONF_VERSION\], \[[0-9]*\.[0-9]*\])/m4_define([_GCC_AUTOCONF_VERSION], ['"$AC_VERSION])/" config/override.m4.bak > config/override.m4
mv configure.ac configure.ac.bak
sed 's/RAW_CXX_FOR_TARGET="\$CXX_FOR_TARGET"/RAW_CXX_FOR_TARGET="$CXX_FOR_TARGET -nostdinc++"/' configure.ac.bak > configure.ac
autoreconf -i
mkdir build
(
cd build
../configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --target="${ZCHOST}" --prefix="${ZCPREF}" --with-zlib="${ZCPREF}" \
--with-mpfr="${ZCPREF}" --with-gmp="${ZCPREF}" --with-mpc="${ZCPREF}" \
--enable-languages=c,c++,fortran,lto --disable-multilib --disable-nls
make
make install
cp "${ZCPREF}"/lib/libgcc_s_sjlj-1.dll "${ZCPREF}"/bin || true
cp "${ZCPREF}"/lib/libgcc_s_seh-1.dll "${ZCPREF}"/bin || true
)
rm -rf build
mv config/override.m4.bak config/override.m4
mv configure.ac.bak configure.ac
exit 0
