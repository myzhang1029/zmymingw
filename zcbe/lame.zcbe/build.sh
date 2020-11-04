#!/bin/sh

# Get include directory for target system
for option in $(${ZCHOST}-gcc -v 2>&1 | grep with-headers | cut -f2 -d:)
do
    if echo "$option" | grep with-headers > /dev/null
    then
        dir="$(echo "$option" | cut -f2 -d=)"
    fi
done

# lame includes Windef.h(capitalized), but mingw-w64 provides a lowercased one
ln -s $dir/windef.h include/Windef.h || true

CFLAGS="-DFLT_EPSILON=__FLT_EPSILON__ -DDBL_EPSILON=__DBL_EPSILON__ -DLDBL_EPSILON=__LDBL_EPSILON__" ./configure --prefix=${ZCPREF} --host=${ZCHOST} --enable-static --without-libiconv-prefix
make
make install
cd Dll
make -f Makefile.mingw32 CC=${ZCHOST}-g++ LD=${ZCHOST}-g++ DLLTOOL=${ZCHOST}-dlltool lame_enc.dll
cp lame_enc.dll ${ZCPREF}/bin
cp liblame_enc.a ${ZCPREF}/lib
make -f Makefile.mingw32 clean
rm liblame_enc.a
cd ..
make distclean
rm -f include/Windef.h
exit 0
