#!/bin/sh

"${ZCTOP}/zcbe/fix_cmake_version.sh" CMakeLists.txt
"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"
CFLAGS=-w cmake -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -G "${ninja}" -S . -B build
cmake --build build
cmake --install build
rm -rf build
exit 0
