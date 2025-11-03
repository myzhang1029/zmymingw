#!/bin/sh
arch="$(echo "$ZCHOST" | cut -f1 -d-)"
cargo install --root "$ZCPREF" sequoia-sq --target "$arch-pc-windows-gnu" --no-default-features --features crypto-openssl
