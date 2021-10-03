#!/bin/sh
mkdir -p build
cd build
"${ZCTOP}/zcbe/gen_mesoncrossfile.sh"
meson setup . .. --cross-file "${ZCTOP}/mesoncross.txt"
ninja install
cd ..
rm -rf build
exit 0

