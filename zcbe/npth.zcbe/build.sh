#!/bin/sh
./autogen.sh
./configure --enable-maintainer-mode --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" npth
make distclean
exit 0
