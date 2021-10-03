#!/bin/sh
# Ask make to generate *.h files for us
make CC=${ZCHOST}-gcc termkey.h || true
"${ZCHOST}-gcc" -shared -Wl,--out-implib,libtermkey.dll.a driver-csi.c driver-ti.c termkey.c -o libtermkey.dll -I. -I"${ZCPREF}/include" -DHAVE_UNIBILIUM -L"${ZCPREF}/lib" -lunibilium
"${ZCHOST}-gcc" -c driver-csi.c driver-ti.c termkey.c -I. -I"${ZCPREF}/include" -DHAVE_UNIBILIUM -L"${ZCPREF}/lib" -lunibilium
"${ZCHOST}-ar" rcs libtermkey.a *.o
#"${ZCHOST}-gcc" bin/unterm.c -o unterm.exe libvterm.dll.a -Iinclude
install -d -m 755 "${ZCPREF}/bin" "${ZCPREF}/lib" "${ZCPREF}/include"
install -m 755 libtermkey.dll "${ZCPREF}/bin"
install -m 644 libtermkey.dll.a libtermkey.a "${ZCPREF}/lib"
install -m 644 termkey.h "${ZCPREF}/include"
INCDIR="${ZCPREF}/include" LIBDIR="${ZCPREF}/lib" sh ./termkey.pc.sh > "${ZCPREF}/lib/pkgconfig/termkey.pc"
rm -f *.dll *.a *.o
exit 0
