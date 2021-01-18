#!/bin/sh
make CXX=${ZCHOST}-g++ STRIP=${ZCHOST}-strip AR=${ZCHOST}-ar E=.exe
make DESTDIR=${ZCPREF} E=.exe install
make clean
rm *.exe
exit 0
