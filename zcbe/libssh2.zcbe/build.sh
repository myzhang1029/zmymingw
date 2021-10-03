#!/bin/sh

mv configure.ac configure.ac.bak
sed 's/m4_undefine(\[backend\])/#m4_undefine([backend])/' configure.ac.bak > configure.ac
autoreconf -fi
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-static --enable-shared
make
make install
make distclean
mv configure.ac.bak configure.ac
exit 0
