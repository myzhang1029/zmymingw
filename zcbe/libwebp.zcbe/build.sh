#!/bin/sh
./autogen.sh
CFLAGS=-I${ZCPREF}/include LDFLAGS=-L${ZCPREF}/lib ./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --enable-static --enable-shared
make
make install
make distclean
exit 0
mkdir build
cd build
"${ZCTOP}"/zcbe/gen_toolchainfile.sh
cmake .. -DCMAKE_TOOLCHAIN_FILE=${ZCTOP}/toolchain.cmake -DCMAKE_INSTALL_PREFIX=${ZCPREF}
make
make install
cd ..
rm -rf build
exit 0
