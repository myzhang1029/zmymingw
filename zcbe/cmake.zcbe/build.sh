#!/bin/sh

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"

mkdir build || true
cd build

CFLAGS=-w cmake .. -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake -DCMake_RUN_CXX_FILESYSTEM=0 -DCMake_RUN_CXX_FILESYSTEM__TRYRUN_OUTPUT="" -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -G "${ninja}"
if [ "${ninja}" = "Ninja" ];
then
    ninja
    ninja install
else
    make
    make install
fi
cd ..
rm -rf build
exit 0
