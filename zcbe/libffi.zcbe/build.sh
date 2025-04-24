#!/bin/sh
patch -p1 < "${ZCTOP}/zcbe/libffi.zcbe/build.patch"
./autogen.sh
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
patch -R -p1 < "${ZCTOP}/zcbe/libffi.zcbe/build.patch"
exit 0
