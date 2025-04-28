#!/bin/sh

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"
cmake --compile-no-warning-as-error -DCMAKE_TOOLCHAIN_FILE="${ZCPREF}"/tmp/toolchain.cmake -DLLVM_ENABLE_PROJECTS="clang;lldb;lld;clang-tools-extra" -DLLVM_ENABLE_RUNTIMES="compiler-rt" -DCMAKE_C_FLAGS_INIT=-w -DCMAKE_CXX_FLAGS_INIT=-w -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -DCOMPILER_RT_HAS_G_FLAG=ON -G "${ninja}" -S llvm -B zcbe_build
cmake --build zcbe_build
cmake --install zcbe_build
rm -rf zcbe_build

exit 0
