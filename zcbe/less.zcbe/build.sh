#!/bin/sh

autoreconf -fi
LDFLAGS=-L${ZCPREF}/lib CFLAGS=-I${ZCPREF}/include LIBS=-ltermcap ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --with-regex=pcre

make -f Makefile.aut funcs.h less.nro lesskey.nro lessecho.nro
sed -i.zcbak "/MSDOS_COMPILER/d;" defines.h
echo "#define MSDOS_COMPILER WIN32C">>defines.h
echo "#define _MSC_VER 1910">>defines.h
echo "#define PCRE_STATIC 1">>defines.h
rm -f defines.h.zcbak
touch stamp-h
make
make install
make distclean
exit 0
