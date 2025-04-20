#!/bin/sh
make -C src -f Make_ming.mak CROSS_COMPILE="${ZCHOST}-" CROSS=yes XPM=no WINDRES="${ZCHOST}-windres" VIMRUNTIMEDIR=../share/vim
make -C src -f Make_ming.mak CROSS_COMPILE="${ZCHOST}-" CROSS=yes XPM=no WINDRES="${ZCHOST}-windres" GUI=no VIMRUNTIMEDIR=../share/vim
install -d -m 755 "${ZCPREF}/bin" "${ZCPREF}/share/vim"
cp -r src/vim.exe src/gvim.exe src/vimrun.exe src/xxd/xxd.exe "${ZCPREF}/bin"
cp -r runtime/* "${ZCPREF}/share/vim"
make -C src -f Make_ming.mak CROSS_COMPILE="${ZCHOST}-" CROSS=yes XPM=no WINDRES="${ZCHOST}-windres" GUI=no clean
make -C src -f Make_ming.mak CROSS_COMPILE="${ZCHOST}-" CROSS=yes XPM=no WINDRES="${ZCHOST}-windres" clean
exit 0
