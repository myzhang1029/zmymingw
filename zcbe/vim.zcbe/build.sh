#!/bin/sh
make -C src -f Make_cyg.mak CROSS_COMPILE=${ZCHOST}-
mkdir -p ${ZCPREF}/opt/vim
cp -r src/*.exe src/xxd/xxd.exe ${ZCPREF}/opt/vim
cp -r runtime/* ${ZCPREF}/opt/vim
make -C src -f Make_cyg.mak CROSS_COMPILE=${ZCHOST}- clean
exit 0
