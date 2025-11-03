#!/bin/sh
autoreconf -fi
LDFLAGS="-L${ZCPREF}/lib" CFLAGS="-I${ZCPREF}/include -std=gnu99" ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" hogweed nettle
make distclean
exit 0
