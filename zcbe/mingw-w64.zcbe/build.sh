#!/bin/sh

autoreconf -i
# Install the headers before everything else
(
cd mingw-w64-headers
./configure --host="${ZCHOST}" --build="$($ZCTOP/zcbe/config.guess)" --prefix="${ZCPREF}"
make install
)

CFLAGS=-I"${ZCPREF}/include -Wno-expansion-to-defined" LDFLAGS=-I"${ZCPREF}/lib" ./configure --host="${ZCHOST}" --build="$($ZCTOP/zcbe/config.guess)" --prefix="${ZCPREF}" --with-libraries=libmangle,winpthreads --with-tools=all
# Don't use a -j flag because there is a data race
make
make install
make -i distclean
make -C mingw-w64-tools/genidl distclean
make -C mingw-w64-tools/gendef distclean
make -C mingw-w64-libraries/winpthreads distclean
rm -f config.h stamp-h1
exit 0
