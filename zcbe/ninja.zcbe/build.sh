#!/bin/sh

AR="${ZCHOST}-ar" CXX="${ZCHOST}-g++" ./configure.py --host=mingw --platform=mingw
ninja
install -m 755 ninja.exe "${ZCPREF}/bin"
rm -rf build ninja.exe build.ninja

exit 0
