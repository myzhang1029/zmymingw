#!/bin/sh
test -d "${ZCTOP}/.git" && git submodule update --init
autoreconf -fi
CFLAGS=-std=gnu99 ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libjq oniguruma
make distclean
exit 0
