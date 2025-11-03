#!/bin/sh

sed -i.zcbak 's/^libisl_la_LDFLAGS = -version-info/libisl_la_LDFLAGS = -no-undefined -version-info/' Makefile.am
autoreconf -i
./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --with-gmp-prefix="${ZCPREF}" --enable-shared --disable-static
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" isl
make distclean
mv Makefile.am.zcbak Makefile.am
exit 0
