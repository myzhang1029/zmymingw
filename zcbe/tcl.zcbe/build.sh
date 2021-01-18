#!/bin/sh

(cd win; autoreconf -i)
if echo "${ZCHOST}" | grep "x86_64";
then
    win/configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-64bit
else
    win/configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
fi
make
make install
make distclean
exit 0
