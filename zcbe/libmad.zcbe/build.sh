#!/bin/sh
# libmad's version is ancient
cp ${ZCTOP}/zcbe/config.guess .
cp ${ZCTOP}/zcbe/config.sub .
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --enable-static --enable-shared
make
make install
make distclean
exit 0
