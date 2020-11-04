#!/bin/sh -e

ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"

mkdir build || true
cd build

CFLAGS=-w cmake .. -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -G "${ninja}"

if [ "${ninja}" = "Ninja" ]
then
    ninja
    ninja install
else
    make
    make install
fi

cd ..
rm -rf build
cp ${ZCPREF}/lib/libzlibstatic.a ${ZCPREF}/lib/libz.a
cp ${ZCPREF}/lib/libzlib.dll.a ${ZCPREF}/lib/libz.dll.a
cp ${ZCPREF}/bin/libzlib.dll ${ZCPREF}/bin/libz.dll
test -f zconf.h || mv zconf.h.included zconf.h
exit 0
