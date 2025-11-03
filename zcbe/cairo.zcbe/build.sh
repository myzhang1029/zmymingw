#!/bin/sh
"${ZCTOP}/zcbe/gen_mesoncrossfile.sh"
PKG_CONFIG=$(which pkg-config) CMAKE=$(which cmake) meson setup zcbe_build . --cross-file "${ZCPREF}/tmp/mesoncross.txt"
ninja -C zcbe_build install
"${ZCTOP}/zcbe/strip_package_config.sh" cairo-dwrite-font cairo-gobject cairo-pdf cairo-png cairo-ps cairo-script-interpreter cairo-script cairo-svg cairo-tee cairo-win32-font cairo-win32 cairo
rm -rf zcbe_build
exit 0
