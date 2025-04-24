#!/bin/sh
patch -p1 < "${ZCTOP}/zcbe/libtasn1.zcbe/build.patch"
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --disable-doc
make
make install
make distclean
patch -R -p1 < "${ZCTOP}/zcbe/libtasn1.zcbe/build.patch"
exit 0
