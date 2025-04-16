#!/bin/sh

"${ZCTOP}/zcbe/fix_cmake_version.sh" ./gr2fonttest/CMakeLists.txt ./tests/nametabletest/CMakeLists.txt ./tests/endian/CMakeLists.txt ./tests/sparsetest/CMakeLists.txt ./tests/utftest/CMakeLists.txt ./tests/fuzz-tests/CMakeLists.txt ./tests/featuremap/CMakeLists.txt ./tests/vm/CMakeLists.txt ./tests/json/CMakeLists.txt ./tests/bittwiddling/CMakeLists.txt ./tests/examples/CMakeLists.txt ./tests/comparerenderer/CMakeLists.txt ./tests/grlist/CMakeLists.txt ./tests/CMakeLists.txt ./doc/CMakeLists.txt ./CMakeLists.txt ./src/CMakeLists.txt
"${ZCTOP}"/zcbe/gen_toolchainfile.sh

cmake -DCMAKE_TOOLCHAIN_FILE=${ZCTOP}/toolchain.cmake -DCMAKE_INSTALL_PREFIX=${ZCPREF} -S . -B build
cmake --build build
cmake --install build
rm -rf build
exit 0
