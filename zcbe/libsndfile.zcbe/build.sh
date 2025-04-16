#!/bin/sh

"${ZCTOP}/zcbe/fix_cmake_version.sh" CMakeLists.txt
"${ZCTOP}"/zcbe/gen_toolchainfile.sh

cmake -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -DCMAKE_C_FLAGS_INIT="-I${ZCPREF}/include -DFLAC__NO_DLL" -DCMAKE_EXE_LINKER_FLAGS_INIT="-fstack-protector" -S . -B build
cmake --build build
cmake --install build
rm -rf build
exit 0
