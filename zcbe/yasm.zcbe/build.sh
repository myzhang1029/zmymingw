#!/bin/sh

./autogen.sh --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
# Re-run to avoid setting wrong toolchain
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-maintainer-mode
make
make install
make distclean
exit 0
