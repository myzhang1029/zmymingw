#!/bin/sh
make HOST_CC="gcc -m32" TARGET_SYS=Windows CROSS="${ZCHOST}"- PREFIX="${ZCPREF}"
make HOST_CC="gcc -m32" TARGET_SYS=Windows CROSS="${ZCHOST}"- PREFIX="${ZCPREF}" EX=.exe install
exit 0
