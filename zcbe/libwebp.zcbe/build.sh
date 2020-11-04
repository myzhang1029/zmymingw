#!/bin/sh
mkdir build
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=${ZCTOP}/toolchain.cmake -DCMAKE_INSTALL_PREFIX=${ZCPREF}
make
make install
cd ..
rm -rf build
exit 0
