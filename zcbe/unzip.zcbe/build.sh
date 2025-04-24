#!/bin/sh


dir=$(mktemp -d)
cp -r $PWD/* $dir
cd $dir

patch -p1 < "${ZCTOP}/zcbe/unzip.zcbe/build.patch"
make -f win32/Makefile.gcc CC=${ZCHOST}-gcc RC=${ZCHOST}-windres CC_CPU_OPT= NOASM=1
make -B -f ${ZCTOP}/zcbe/unzip.zcbe/Makefile.install prefix=${ZCPREF}
cd -
rm -rf $dir

exit 0
