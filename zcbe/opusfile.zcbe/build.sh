#!/bin/sh

patch -p1 < "${ZCTOP}/zcbe/opusfile.zcbe/openssl.patch"
./autogen.sh
# Include DEPS_* because we're using git's opus
DEPS_CFLAGS="-I${ZCPREF}/include -I${ZCPREF}/include/opus" DEPS_LIBS="-L${ZCPREF}/lib -lopus -logg" ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --enable-static --enable-shared
# This thing causes problem with MinGW's C++ comments
if sed --version > /dev/null
then
    # GNU sed takes -i without an argument
    sed -i "s/-std=c89//" Makefile
else
    # BSD sed's -i needs a postfix
    sed -i '' "s/-std=c89//" Makefile
fi
make
make install
make distclean
patch -R -p1 < "${ZCTOP}/zcbe/opusfile.zcbe/openssl.patch"
exit 0
