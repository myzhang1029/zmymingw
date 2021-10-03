#!/bin/sh
mkdir build || true
cd build
"${ZCTOP}"/zcbe/gen_toolchainfile.sh
cmake .. -DCMAKE_TOOLCHAIN_FILE=${ZCTOP}/toolchain.cmake -DCMAKE_INSTALL_PREFIX=${ZCPREF} || cmake .. -DCMAKE_TOOLCHAIN_FILE=${ZCTOP}/toolchain.cmake -DCMAKE_INSTALL_PREFIX=${ZCPREF}
make
make install
cd ..
rm -rf build
exit 0
