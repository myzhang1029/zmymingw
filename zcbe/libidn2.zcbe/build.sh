#!/bin/sh

patch -p1 < "${ZCTOP}/zcbe/libidn2.zcbe/build.patch"
unpatch() {
    patch -R -p1 < "${ZCTOP}/zcbe/libidn2.zcbe/build.patch"
}
trap unpatch exit

./bootstrap --gnulib-refdir="${ZCTOP}"/libraries/gnulib --bootstrap-sync
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --with-libunistring-prefix="${ZCPREF}" --with-libintl-prefix="${ZCPREF}" --with-libiconv-prefix="${ZCPREF}"
touch doc/idn2.1
make EXE_WRAPPER=wine
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libidn2
make distclean
exit 0
