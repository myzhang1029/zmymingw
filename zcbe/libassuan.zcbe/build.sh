#!/bin/sh
./autogen.sh
./configure --enable-maintainer-mode --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --with-libgpg-error-prefix="${ZCPREF}"
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libassuan
make distclean
exit 0
