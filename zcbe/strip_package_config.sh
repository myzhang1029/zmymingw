#!/bin/sh

set -e

target="${PKG_CONFIG_SYSROOT_DIR}/lib/pkgconfig/$1.pc"
tmp="$(mktemp)"
# shellcheck disable=SC2064
trap "rm -f '$tmp'" EXIT

if [ -z "${PKG_CONFIG_SYSROOT_DIR+set}" ] || [ "$PKG_CONFIG_SYSROOT_DIR" = "/" ]; then
    # Nothing needed
    exit 0
fi

# First deal with PKG_CONFIG_SYSROOT_DIR followed by more path segments
# Then deal with it by itself
awk '{gsub("'"$PKG_CONFIG_SYSROOT_DIR"'/","/"); gsub("'"$PKG_CONFIG_SYSROOT_DIR"'","/"); print}' "$target" > "$tmp"
mv "$tmp" "$target"

exit 0
