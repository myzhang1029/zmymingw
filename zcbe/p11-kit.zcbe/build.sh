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
#!/bin/sh
"${ZCTOP}/zcbe/gen_mesoncrossfile.sh"
PKG_CONFIG=$(which pkg-config) CMAKE=$(which cmake) meson setup zcbe_build . --cross-file "${ZCPREF}/tmp/mesoncross.txt"
ninja -C zcbe_build install
rm -rf zcbe_build
exit 0
