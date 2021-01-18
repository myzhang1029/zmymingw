#!/bin/sh

autoreconf -fi
mkdir -p build
cd build
LDFLAGS="-L${ZCPREF}/lib" LIBS=-ltermcap ../configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --with-gmp="${ZCPREF}" --with-mpfr="${ZCPREF}" --with-mpc="${ZCPREF}"
# gdb/utils.c contains a false assumption about readline.h
make configure-gdb
echo "extern int tgetnum (const char *name);" >> gdb/config.h
# actually make things
make
make install
make distclean
cd ..
rm -rf build
exit 0
