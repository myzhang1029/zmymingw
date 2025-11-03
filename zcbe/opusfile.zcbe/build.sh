#!/bin/sh

patch -p1 < "${ZCTOP}/zcbe/opusfile.zcbe/openssl.patch"
unpatch () {
    patch -R -p1 < "${ZCTOP}/zcbe/opusfile.zcbe/openssl.patch"
}
trap unpatch exit

./autogen.sh
# Include DEPS_* because we're using git's opus
DEPS_CFLAGS="-isystem ${ZCPREF}/include -I${ZCPREF}/include/opus" DEPS_LIBS="-L${ZCPREF}/lib -lopus -logg" ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-static --enable-shared
# This thing causes problem with MinGW's C++ comments
sed -i.zcbak "s/-std=c89//" Makefile
rm -f Makefile.zcbak
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" opusfile opusurl
make distclean
exit 0
