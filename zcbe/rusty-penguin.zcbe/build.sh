#!/bin/sh
arch="$(echo "$ZCHOST" | cut -f1 -d-)"
cargo install --root "$ZCPREF" rusty-penguin --target "$arch-pc-windows-gnu"
