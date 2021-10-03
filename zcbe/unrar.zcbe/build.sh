#!/bin/sh
make CXX=${ZCHOST}-g++ STRIP=${ZCHOST}-strip AR=${ZCHOST}-ar E=.exe
install -m 755 unrar.exe "${ZCPREF}/bin/unrar.exe"
make clean
rm *.exe
exit 0
