#!/bin/sh

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"
CFLAGS=-w cmake -DCMAKE_TOOLCHAIN_FILE="${ZCPREF}"/tmp/toolchain.cmake -DLLVM_ENABLE_PROJECTS=clang -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -G "${ninja}" -S llvm -B zcbe_build
cmake --build zcbe_build
cmake --install zcbe_build
rm -rf zcbe_build

exit 0
