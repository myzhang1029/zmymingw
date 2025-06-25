#!/bin/sh

rm -f *.exe *.dll *.o wincon/*.exe wincon/*.dll wincon/*.o
make -C wincon CC="${ZCHOST}"-gcc AR="${ZCHOST}"-ar STRIP="${ZCHOST}"-strip LINK="${ZCHOST}"-gcc WINDRES="${ZCHOST}"-windres DLL=Y all demos
install -d -m 755 "${ZCPREF}/bin"
install -d -m 755 "${ZCPREF}/lib"
install -d -m 755 "${ZCPREF}/include"
(
cd wincon
install -m 755 pdcurses.dll "${ZCPREF}/bin"
install -m 755 firework.exe ozdemo.exe ptest.exe rain.exe testcurs.exe tuidemo.exe worm.exe xmas.exe "${ZCPREF}/bin"
install -m 644 pdcurses.a "${ZCPREF}/lib/libpdcurses.dll.a"
install -m 644 pdcwin.h "${ZCPREF}/include"
)
install -m 644 panel.h "${ZCPREF}/include"
install -m 644 curses.h "${ZCPREF}/include"
install -m 644 curspriv.h "${ZCPREF}/include"


exit 0
