#!/bin/sh

mv config/override.m4 config/override.m4.bak
AC_VERSION="$(LC_ALL=C autoconf --version|head -n1|rev|cut -d\  -f1|rev)"
sed 's/m4_define(\[_GCC_AUTOCONF_VERSION\], \[[0-9]*\.[0-9]*\])/m4_define([_GCC_AUTOCONF_VERSION], ['"$AC_VERSION])/" config/override.m4.bak > config/override.m4
autoreconf -fi
mkdir -p build
cd build
LDFLAGS="-L${ZCPREF}/lib" LIBS=-ltermcap \
    ../configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --with-gmp="${ZCPREF}" --with-mpfr="${ZCPREF}" --with-mpc="${ZCPREF}"
# gdb/utils.c contains a false assumption about readline.h
LDFLAGS="-L${ZCPREF}/lib" LIBS=-ltermcap \
    make configure-gdb
echo "extern \"C\" { extern int tgetnum (const char *name); }" >> gdb/config.h
# actually make things
make
make install
make distclean
cd ..
rm -rf build
exit 0
