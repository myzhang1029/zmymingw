#!/bin/sh
cp "${ZCTOP}/zcbe/pdcurses.zcbe/Makefilea" wincon
make -C wincon -f Makefilea CROSS=${ZCHOST}- all demos
make -C wincon -f Makefilea install_static PREFIX=${ZCPREF}
make -C wincon -f Makefilea clean
make -C wincon -f Makefilea CROSS=${ZCHOST}- DLL=Y all demos
make -C wincon -f Makefilea install_shared PREFIX=${ZCPREF} DLL=Y
make -C wincon -f Makefilea clean DLL=Y
rm wincon/Makefilea
exit 0
