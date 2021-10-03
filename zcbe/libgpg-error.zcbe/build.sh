#!/bin/sh
./autogen.sh
./configure --enable-maintainer-mode --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
# Some tests fail if another version is installed
unset PKG_CONFIG_LIBDIR
unset PKG_CONFIG_PATH
make
make install
make distclean
exit 0
