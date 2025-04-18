#!/bin/sh
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s,/usr/bin/python,$(which python)," subprojects/pkcs11-json/gen.py
else
    # BSD sed's -i needs a postfix
    sed -i "" "s,/usr/bin/python,$(which python)," subprojects/pkcs11-json/gen.py
fi
git submodule update --init
mkdir -p build
cd build
"${ZCTOP}/zcbe/gen_mesoncrossfile.sh"
PKG_CONFIG=$(which pkg-config) CMAKE=$(which cmake) meson setup . .. --cross-file "${ZCTOP}/mesoncross.txt"
ninja install
cd ..
rm -rf build
exit 0
