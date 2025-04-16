#!/bin/sh
git submodule update --init
patch -u < "${ZCTOP}/zcbe/p11-kit.zcbe/build.patch"
autoreconf -fi
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --without-trust-paths --enable-shared
make
make install
make distclean
patch -R -u < "${ZCTOP}/zcbe/p11-kit.zcbe/build.patch"
exit 0
