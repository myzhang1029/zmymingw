#!/bin/sh
sed -i.zcbak "s,/usr/bin/python,$(which python)," subprojects/pkcs11-json/gen.py
git submodule update --init
"${ZCTOP}/zcbe/gen_mesoncrossfile.sh"
PKG_CONFIG=$(which pkg-config) CMAKE=$(which cmake) meson setup zcbe_build . --cross-file "${ZCPREF}/tmp/mesoncross.txt"
ninja -C zcbe_build install
rm -rf zcbe_build
mv subprojects/pkcs11-json/gen.py.zcbak subprojects/pkcs11-json/gen.py
exit 0
