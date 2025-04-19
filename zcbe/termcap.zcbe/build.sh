#!/bin/sh
cp "${ZCTOP}/zcbe/termcap.zcbe/Makefile.am" .
cp "${ZCTOP}/zcbe/termcap.zcbe/configure.ac" .
autoreconf -fi
./configure --host=${ZCHOST} --prefix=${ZCPREF}
make CFLAGS=-fno-stack-protector\ -Wno-implicit-function-declaration\ -DSTDC_HEADERS
make install
install -d -m 755 "${ZCPREF}/etc/termcap"
install -c -m 644 termcap.src "${ZCPREF}/etc/termcap"
make maintainer-clean
exit 0
