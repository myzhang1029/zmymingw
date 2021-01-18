#!/bin/sh
# Ask make to gegerate *.inc files for us
make CC=${ZCHOST}-gcc src/encoding.lo || true
rm -f src/*.o
"${ZCHOST}-gcc" -shared -Wl,--out-implib,libvterm.dll.a src/*.c -o libvterm.dll -Iinclude
"${ZCHOST}-gcc" -c src/*.c -Iinclude
"${ZCHOST}-ar" rcs libvterm.a *.o
"${ZCHOST}-gcc" bin/unterm.c -o unterm.exe libvterm.dll.a -Iinclude
install -d -m 755 "${ZCPREF}/bin" "${ZCPREF}/lib" "${ZCPREF}/include"
install -m 755 libvterm.dll unterm.exe "${ZCPREF}/bin"
install -m 644 libvterm.dll.a libvterm.a "${ZCPREF}/lib"
install -m 644 include/* "${ZCPREF}/include"
cat > "${ZCPREF}/lib/pkgconfig/vterm.pc" <<EOF
prefix=${ZCPREF}
libdir=\${prefix}/lib
includedir=\${prefix}/include

Name: vterm
Description: Abstract VT220/Xterm/ECMA-48 emulation library
Version: 0.1
Libs: -L\${libdir} -lvterm
Cflags: -I\${includedir}
EOF
rm -f unterm.exe libvterm.a libvterm.dll libvterm.dll.a *.o
exit 0
