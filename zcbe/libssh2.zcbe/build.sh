#!/bin/sh

sed -i.zcbak 's/m4_undefine(\[backend\])/#m4_undefine([backend])/' configure.ac
autoreconf -fi
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-static --enable-shared
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libssh2
make distclean
mv configure.ac.zcbak configure.ac
exit 0
