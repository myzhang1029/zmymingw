#!/bin/sh

./autogen.sh
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
make
touch nasm.1 ndisasm.1
make install
make distclean
exit 0
