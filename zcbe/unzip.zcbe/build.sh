#!/bin/sh

patch -u < "${ZCTOP}/zcbe/unzip.zcbe/build.patch"

dir=$(mktemp -d)
cp -r $PWD/* $dir
cd $dir
make -f win32/Makefile.gcc CC=${ZCHOST}-gcc RC=${ZCHOST}-windres CC_CPU_OPT= NOASM=1
make -B -f ${ZCTOP}/zcbe/unzip.zcbe/Makefile.install prefix=${ZCPREF}
cd -
rm -rf $dir

patch -R -u < "${ZCTOP}/zcbe/unzip.zcbe/build.patch"
exit 0
