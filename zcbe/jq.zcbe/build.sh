#!/bin/sh
test -d "${ZCTOP}/.git" && git submodule update --init
autoreconf -fi
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
