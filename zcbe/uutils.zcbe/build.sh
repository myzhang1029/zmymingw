#!/bin/sh
arch="$(echo "$ZCHOST" | cut -f1 -d-)"
cargo install --root "$ZCPREF" coreutils --target "$arch-pc-windows-gnu" --features windows
