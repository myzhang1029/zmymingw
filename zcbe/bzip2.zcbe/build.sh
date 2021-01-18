#!/bin/sh

make CC="${ZCHOST}-gcc" AR="${ZCHOST}-ar" RANLIB="${ZCHOST}-ranlib" PREFIX="${ZCPREF}" libbz2.a bzip2 bzip2recover
make -f "${ZCTOP}/zcbe/bzip2.zcbe/Makefile.install" CC="${ZCHOST}-gcc" AR="${ZCHOST}-ar" RANLIB="${ZCHOST}-ranlib" PREFIX="${ZCPREF}" EXESUF=.exe install
make distclean
"${ZCHOST}-gcc" -shared -o libbz2.dll -Wl,--out-implib,libbz2.dll.a blocksort.c huffman.c crctable.c randtable.c compress.c decompress.c bzlib.c
cp libbz2.dll libbz2.dll.a ${ZCPREF}/lib
rm *.exe
exit 0
