#!/bin/sh

if type git > /dev/null 2>&1
then
    git tag | grep 0.0 > /dev/null 2>&1 || git tag 0.0
fi

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"

mkdir xbuild || true
cd xbuild

CFLAGS=-w cmake ../source -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -G "${ninja}" -DX265_LATEST_TAG=3.0
if [ "${ninja}" = "Ninja" ]
then
    ninja
    ninja install
else
    make
    make install
fi
cd ..
rm -rf xbuild
exit 0
