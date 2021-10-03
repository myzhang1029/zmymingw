#!/bin/sh

make CC="${ZCHOST}-gcc" AR="${ZCHOST}-ar" RANLIB="${ZCHOST}-ranlib" PREFIX="${ZCPREF}" libbz2.a bzip2 bzip2recover
[ -f bzip2 ] && mv bzip2 bzip2.exe
[ -f bzip2recover ] && mv bzip2recover bzip2recover.exe
make -f "${ZCTOP}/zcbe/bzip2.zcbe/Makefile.install" CC="${ZCHOST}-gcc" AR="${ZCHOST}-ar" RANLIB="${ZCHOST}-ranlib" PREFIX="${ZCPREF}" EXESUF=.exe install
make distclean
"${ZCHOST}-gcc" -shared -o libbz2.dll -Wl,--out-implib,libbz2.dll.a blocksort.c huffman.c crctable.c randtable.c compress.c decompress.c bzlib.c
cp libbz2.dll.a "${ZCPREF}"/lib
cp libbz2.dll "${ZCPREF}"/bin
rm *.exe
exit 0
