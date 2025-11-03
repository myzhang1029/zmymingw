#!/bin/sh
./autogen.sh
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libpkgconf
make distclean
exit 0
