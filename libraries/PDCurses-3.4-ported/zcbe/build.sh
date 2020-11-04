#!/bin/sh
make -C win32 -f gccwin32.mak CROSS=${ZCHOST}-
make -C win32 -f gccwin32.mak install PREFIX=${ZCPREF}
make -C win32 -f gccwin32.mak clean
exit 0
