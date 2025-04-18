#!/bin/sh
"${ZCTOP}"/zcbe/gen_toolchainfile.sh
cmake -DCMAKE_TOOLCHAIN_FILE=${ZCTOP}/toolchain.cmake -DCMAKE_INSTALL_PREFIX=${ZCPREF} -S . -B build -DCMAKE_C_FLAGS_INIT=-w
cmake --build build
cmake --install build
rm -rf build
exit 0
