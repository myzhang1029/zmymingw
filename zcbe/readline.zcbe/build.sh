#!/bin/sh
LDFLAGS=-L${ZCPREF}/lib ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-shared --disable-static
echo 'struct winsize {};' >> config.h
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" history readline
make distclean
exit 0
