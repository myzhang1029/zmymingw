#!/bin/sh
"${ZCTOP}/zcbe/gen_mesoncrossfile.sh"
PKG_CONFIG=$(which pkg-config) CMAKE=$(which cmake) meson setup zcbe_build . --cross-file "${ZCPREF}/tmp/mesoncross.txt"
ninja -C zcbe_build install
"${ZCTOP}/zcbe/strip_package_config.sh" gio-2.0 gio-windows-2.0 girepository-2.0 glib-2.0 gmodule-2.0 gmodule-export-2.0 gmodule-no-export-2.0 gobject-2.0 gthread-2.0
rm -rf zcbe_build
exit 0
