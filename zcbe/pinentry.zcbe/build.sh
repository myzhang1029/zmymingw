#!/bin/sh

./autogen.sh
./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --with-libgpg-error-prefix="${ZCPREF}" --with-libassuan-prefix="${ZCPREF}" --with-libiconv-prefix="${ZCPREF}" --disable-pinentry-fltk
make
make install
make distclean
cp "${ZCPREF}"/bin/pinentry-w32.exe "${ZCPREF}"/bin/pinentry.exe
exit 0
