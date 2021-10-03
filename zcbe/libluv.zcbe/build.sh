#!/bin/sh
"${ZCHOST}"-gcc -shared -Wl,--out-implib,libluv.dll.a -o libluv.dll \
    -I../lua-compat-5.3/c-api -I${ZCPREF}/include \
    -include winsock2.h -include ws2tcpip.h \
    -D_WIN32_WINNT=0x0600 \
    ../lua-compat-5.3/c-api/compat-5.3.c src/luv.c "${ZCPREF}/lib/libluajit-5.1.dll.a" \
    -L${ZCPREF}/lib -luv -lws2_32
"${ZCHOST}"-gcc -I../lua-compat-5.3/c-api -I${ZCPREF}/include \
    -include winsock2.h -include ws2tcpip.h \
    -D_WIN32_WINNT=0x0600 -c \
    src/luv.c ../lua-compat-5.3/c-api/compat-5.3.c
"${ZCHOST}"-ar rcs libluv.a luv.o compat-5.3.o
install -d -m 755 "${ZCPREF}/bin" "${ZCPREF}/lib" "${ZCPREF}/include/luv"
install -m 755 libluv.dll "${ZCPREF}/bin"
install -m 755 libluv.a libluv.dll.a "${ZCPREF}/lib"
install -m 644 src/luv.h src/util.h src/lhandle.h src/lreq.h "${ZCPREF}/include/luv"
cat > "${ZCPREF}/lib/pkgconfig/libluv.pc" <<EOF
prefix=${ZCPREF}
exec_prefix=${ZCPREF}
libdir=${ZCPREF}/lib
includedir=${ZCPREF}/include

Name: libluv
Version: 1.36.0
Description: Bare and full libuv bindings for Lua/LuaJIT.
URL: https://github.com/luvit/luv

Libs: -L\${libdir} -lluv -luv -llua
Cflags: -I\${includedir}
EOF
rm *.o *.a *.dll
exit 0
