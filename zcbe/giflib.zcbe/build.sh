#!/bin/sh

cp "${ZCTOP}/zcbe/giflib.zcbe/Makefile.am" .
cp "${ZCTOP}/zcbe/giflib.zcbe/configure.ac" .
autoreconf -fi
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" 
make
make install
make maintainer-clean

exit 0
