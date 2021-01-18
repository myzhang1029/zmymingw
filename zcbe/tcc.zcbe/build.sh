#!/bin/sh
./configure --prefix="${ZCPREF}"/opt/tcc --cross-prefix="${ZCHOST}"- --enable-cross --sysroot="${ZCPREF}" --enable-mingw32
make CC="${ZCHOST}"-gcc AR="${ZCHOST}"-ar WINE=wine TARGETOS=MINGW32
make install TARGETOS=MINGW32
make distclean
exit 0
