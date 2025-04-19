#!/bin/sh
touch ChangeLog NEWS AUTHORS
sed -i.zcbak "s/-fforce-mem//" configure.ac
autoreconf -fi
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --enable-static --enable-shared
make
make install
make distclean
mv configure.ac.zcbak configure.ac
exit 0
