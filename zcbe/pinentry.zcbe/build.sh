#!/bin/sh

sed -i.zcbak 's,\$(COMMON_CFLAGS) -I\$(top_srcdir)/secmem,-I$(top_srcdir)/secmem $(COMMON_CFLAGS),' pinentry/Makefile.am
./autogen.sh
./configure --enable-maintainer-mode --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --with-libgpg-error-prefix="${ZCPREF}" --with-libassuan-prefix="${ZCPREF}" --with-libiconv-prefix="${ZCPREF}" --disable-pinentry-fltk --disable-pinentry-gtk2
# Pinentry's configure makes mistakes
echo "#undef HAVE_NCURSESW" >> config.h
make
make install
make distclean
if [ -L "${ZCPREF}"/bin/pinentry.exe ]; then
    rm -f "${ZCPREF}"/bin/pinentry.exe
    cp -l "${ZCPREF}"/bin/pinentry-w32.exe "${ZCPREF}"/bin/pinentry.exe
fi
mv pinentry/Makefile.am.zcbak pinentry/Makefile.am
exit 0
