#!/bin/sh

patch -p1 < "${ZCTOP}/zcbe/file.zcbe/build.patch"
unpatch() {
    patch -R -p1 < "${ZCTOP}/zcbe/file.zcbe/build.patch"
}
trap unpatch exit

autoreconf -i
dir=$(mktemp -d)
# First build a native version of file
./configure --prefix=$dir
make install distclean

# Then build the cross version
CFLAGS="-isystem ${ZCPREF}/include" LDFLAGS=-L${ZCPREF}/lib ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make FILE_COMPILE=$dir/bin/file
make install
make distclean
exit 0
