#!/bin/sh

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"

mkdir zbuild || true
cd zbuild

cmake ../build/cmake -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -G "${ninja}"

if [ "${ninja}" = "Ninja" ]
then
    ninja
    ninja install
else
    make
    make install
fi
cd ..
rm -rf zbuild
exit 0
