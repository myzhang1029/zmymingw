#!/bin/sh
defaultcc="${ZCHOST}"-gcc
defaultranlib="${ZCHOST}"-ranlib
defaultstrip="${ZCHOST}"-strip
defaultar="${ZCHOST}"-ar
make CC="${CC:-${defaultcc}}" RANLIB="${RANLIB:-${defaultranlib}}" STRIP="${STRIP:-${defaultstrip}}" AR="${AR:-${defaultar}} rc" CFLAGS="-Wall -O2 -fno-stack-protector -fno-common -std=c99 -I${ZCPREF}/include -DLUA_USE_READLINE" MYLIBS="-lreadline -ltermcap -L${ZCPREF}/lib"
install -m 755 lua.exe "${ZCPREF}/bin/lua.exe"
install -m 644 liblua.a "${ZCPREF}/lib/liblua.a"
make clean
exit 0
