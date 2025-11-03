#!/bin/sh
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-shared --enable-static
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" lcms2
make distclean
exit 0
