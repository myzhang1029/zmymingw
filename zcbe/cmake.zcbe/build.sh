#!/bin/sh

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"
CFLAGS=-w cmake -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DCMake_RUN_CXX_FILESYSTEM=0 -DCMake_RUN_CXX_FILESYSTEM__TRYRUN_OUTPUT="" -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -G "${ninja}" -S . -B zcbe_build
cmake --build zcbe_build
cmake --install zcbe_build
rm -rf zcbe_build

exit 0
