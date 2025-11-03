#!/bin/sh

set -e

if [ -z "${PKG_CONFIG_SYSROOT_DIR+set}" ] || [ "$PKG_CONFIG_SYSROOT_DIR" = "/" ]; then
    # Nothing needed
    exit 0
fi

tmp="$(mktemp)"
# shellcheck disable=SC2064
trap "rm -f '$tmp'" EXIT

while [ $# -gt 0 ]
do
    target="${PKG_CONFIG_SYSROOT_DIR}/lib/pkgconfig/$1.pc"
    # First deal with PKG_CONFIG_SYSROOT_DIR followed by more path segments
    # Then deal with it by itself
    awk '{gsub("'"$PKG_CONFIG_SYSROOT_DIR"'/","/"); gsub("'"$PKG_CONFIG_SYSROOT_DIR"'","/"); print}' "$target" > "$tmp"
    cp "$tmp" "$target"
    shift
done

exit 0
