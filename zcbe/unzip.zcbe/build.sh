#!/bin/sh

patch -u < "${ZCTOP}/zcbe/unzip.zcbe/build.patch"
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    # GNU sed uses \<\>
    ised='sed -i s/\<CR\>/CCR/'
else
    # BSD sed's -i needs a postfix
    # BSD sed uses [[:<:]] [[:>:]]
    ised='sed -i "" s/[[:<:]]CR[[:>:]]/CCR/g'
fi

dir=$(mktemp -d)
cp -r $PWD/* $dir
cd $dir
# Mingw's headers have conflicting CR
find . -name '*.[ch]' -exec $ised {} \;
make -f win32/Makefile.gcc CC=${ZCHOST}-gcc RC=${ZCHOST}-windres CC_CPU_OPT= NOASM=1
make -B -f ${ZCTOP}/zcbe/unzip.zcbe/Makefile.install prefix=${ZCPREF}
make -f win32/Makefile.gcc clean
cd -
rm -rf $dir
patch -R -u < "${ZCTOP}/zcbe/unzip.zcbe/build.patch"
exit 0
