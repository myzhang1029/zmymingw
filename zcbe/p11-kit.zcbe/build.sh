#!/bin/sh

test -d "${ZCTOP}/.git" && git submodule update --init

sed -i.zcbak "s,/usr/bin/python,$(which python)," subprojects/pkcs11-json/gen.py
"${ZCTOP}/zcbe/gen_mesoncrossfile.sh"
PKG_CONFIG=$(which pkg-config) CMAKE=$(which cmake) meson setup zcbe_build . --cross-file "${ZCPREF}/tmp/mesoncross.txt"
ninja -C zcbe_build install
"${ZCTOP}/zcbe/strip_package_config.sh" p11-kit-1
rm -rf zcbe_build
mv subprojects/pkcs11-json/gen.py.zcbak subprojects/pkcs11-json/gen.py
exit 0
