#!/bin/sh

patch -u < "${ZCTOP}/zcbe/libsndfile.zcbe/build.patch"
"${ZCTOP}/zcbe/fix_cmake_version.sh" CMakeLists.txt
"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"
cmake -DCMAKE_TOOLCHAIN_FILE="${ZCPREF}"/tmp/toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -DBUILD_SHARED_LIBS=ON -DCMAKE_C_FLAGS_INIT="-I${ZCPREF}/include -DFLAC__NO_DLL" -DCMAKE_EXE_LINKER_FLAGS_INIT="-fstack-protector" -DPYTHON_EXECUTABLE="$(which python)" -G "${ninja}" -S . -B zcbe_build
cmake --build zcbe_build
cmake --install zcbe_build
rm -rf zcbe_build
patch -R -u < "${ZCTOP}/zcbe/libsndfile.zcbe/build.patch"

exit 0
