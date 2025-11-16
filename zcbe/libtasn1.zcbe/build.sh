#!/bin/sh
patch -p1 < "${ZCTOP}/zcbe/libtasn1.zcbe/build.patch"
unpatch() {
    patch -R -p1 < "${ZCTOP}/zcbe/libtasn1.zcbe/build.patch"
}
trap unpatch exit

./bootstrap --gnulib-refdir="${ZCTOP}"/libraries/gnulib
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --disable-doc
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libtasn1
make distclean
exit 0
