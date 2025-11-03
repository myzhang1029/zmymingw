#!/bin/sh
"${ZCTOP}/zcbe/gen_mesoncrossfile.sh"
PKG_CONFIG=$(which pkg-config) CMAKE=$(which cmake) meson setup zcbe_build . --cross-file "${ZCPREF}/tmp/mesoncross.txt"
ninja -C zcbe_build install
"${ZCTOP}/zcbe/strip_package_config.sh" pixman-1
rm -rf zcbe_build
exit 0
