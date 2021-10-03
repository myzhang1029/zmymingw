#!/bin/sh
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    ised='sed -i'
else
    # BSD sed's -i needs a postfix
    ised='sed -i ""'
fi

autoreconf -fi
LDFLAGS=-L${ZCPREF}/lib CFLAGS=-I${ZCPREF}/include LIBS=-ltermcap ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --with-regex=pcre

make -f Makefile.aut funcs.h less.nro lesskey.nro lessecho.nro
$ised "/MSDOS_COMPILER/d;" defines.h
echo "#define MSDOS_COMPILER WIN32C">>defines.h
echo "#define _MSC_VER 1910">>defines.h
echo "#define PCRE_STATIC 1">>defines.h
touch stamp-h
make
make install
make distclean
exit 0
