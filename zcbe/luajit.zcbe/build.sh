#!/bin/sh
cd src
make CROSS="${ZCHOST}-" TARGET_SYS=Windows
install -d -m 755 "${ZCPREF}/bin/lua/jit" "${ZCPREF}/lib" "${ZCPREF}/include"
install -m 755 luajit.exe lua51.dll "${ZCPREF}/bin"
install -m 644 libluajit-5.1.dll.a "${ZCPREF}/lib"
install -m 644 jit/*.lua "${ZCPREF}/bin/lua/jit"
install -m 644 lua.h lualib.h lauxlib.h luaconf.h lua.hpp luajit.h "${ZCPREF}/include"
make CROSS="${ZCHOST}-" TARGET_SYS=Windows clean
exit 0
