#!/bin/sh
./autogen.sh
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --with-libiconv-prefix="${ZCPREF}" --with-libintl-prefix="${ZCPREF}"
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libpsl
make distclean
exit 0

