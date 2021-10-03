#!/bin/sh
mv pinentry/Makefile.am pinentry/Makefile.am.bak
sed 's,\$(COMMON_CFLAGS) -I\$(top_srcdir)/secmem,-I$(top_srcdir)/secmem $(COMMON_CFLAGS),' pinentry/Makefile.am.bak > pinentry/Makefile.am
./autogen.sh
./configure --enable-maintainer-mode --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --with-libgpg-error-prefix="${ZCPREF}" --with-libassuan-prefix="${ZCPREF}" --with-libiconv-prefix="${ZCPREF}" --disable-pinentry-fltk
make
make install
make distclean
cp "${ZCPREF}"/bin/pinentry-w32.exe "${ZCPREF}"/bin/pinentry.exe
mv pinentry/Makefile.am.bak pinentry/Makefile.am
exit 0
