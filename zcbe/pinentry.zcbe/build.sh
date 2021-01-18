#!/bin/sh
./autogen.sh
./configure --enable-maintainer-mode --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --with-libgpg-error-prefix="${ZCPREF}" --with-libassuan-prefix="${ZCPREF}" --with-libiconv-prefix="${ZCPREF}" --disable-pinentry-fltk
make
make install
make distclean
cp "${ZCPREF}"/bin/pinentry-w32.exe "${ZCPREF}"/bin/pinentry.exe
exit 0
