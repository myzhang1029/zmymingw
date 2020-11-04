#!/bin/sh

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
make -f win32/makefile.gcc CC=${ZCHOST}-gcc RC=${ZCHOST}-windres
make -B -f ${ZCTOP}/zcbe/zip.zcbe/makefile.install prefix=${ZCPREF}
make -f win32/makefile.gcc clean
cd -
rm -rf $dir
exit 0
exit 0
