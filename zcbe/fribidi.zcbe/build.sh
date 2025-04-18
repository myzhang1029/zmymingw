#!/bin/sh
mkdir -p build
cd build
"${ZCTOP}/zcbe/gen_mesoncrossfile.sh"
PKG_CONFIG=$(which pkg-config) CMAKE=$(which cmake) meson setup . .. --cross-file "${ZCTOP}/mesoncross.txt" -Ddocs=false
ninja install
cd ..
rm -rf build
exit 0
