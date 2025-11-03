#!/bin/sh
patch -p1 < "${ZCTOP}/zcbe/gpgme.zcbe/build.patch"
unpatch () {
    patch -R -p1 < "${ZCTOP}/zcbe/gpgme.zcbe/openssl.patch"
}
./autogen.sh
CFLAGS=-DDBL_EPSILON=__DBL_EPSILON__ ./configure --enable-maintainer-mode --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --with-libgpg-error-prefix="${ZCPREF}" --with-libassuan-prefix="${ZCPREF}"
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" gpgme gpgme-glib
make distclean
exit 0
