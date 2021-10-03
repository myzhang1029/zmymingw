#!/bin/sh
make PREFIX="${ZCPREF}" CC="${ZCHOST}-gcc" AR="${ZCHOST}-ar" SOEXT=dll SOEXTVER_MAJOR=0.dll SOEXTVER=0.0.dll LINKSHARED="-shared -Wl,--out-implib,libtree-sitter.dll.a" install
cp "${ZCPREF}/lib/libtree-sitter.dll" "${ZCPREF}/bin/libtree-sitter.0.0.dll"
cp libtree-sitter.dll.a "${ZCPREF}/lib"
exit 0
