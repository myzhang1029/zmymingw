#!/bin/sh
patch -p1 < "${ZCTOP}/zcbe/libffi.zcbe/build.patch"
unpatch() {
    patch -R -p1 < "${ZCTOP}/zcbe/libffi.zcbe/build.patch"
}
trap unpatch exit

./autogen.sh
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libffi
make distclean
exit 0
