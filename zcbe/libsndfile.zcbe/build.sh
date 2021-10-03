#!/bin/sh

mkdir build || true
cd build

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
cmake .. -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -DCMAKE_C_FLAGS_INIT="-I${ZCPREF}/include -DFLAC__NO_DLL" -DCMAKE_EXE_LINKER_FLAGS_INIT="-fstack-protector"

make
make install

cd ..
rm -rf build
exit 0
