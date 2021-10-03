#!/bin/sh

if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    # GNU sed uses \<\>
    ised='sed -i s/\<CR\>/CCR/'
    sed -i 's/LDFLAGS=-o\$@ -s$/LDFLAGS=-o$@ -s $(LOC_LD)/' win32/makefile.gcc
else
    # BSD sed's -i needs a postfix
    # BSD sed uses [[:<:]] [[:>:]]
    ised='sed -i "" s/[[:<:]]CR[[:>:]]/CCR/g'
    sed -i "" 's/LDFLAGS=-o\$@ -s$/LDFLAGS=-o$@ -s $(LOC_LD)/' win32/makefile.gcc
fi

dir=$(mktemp -d)
cp -r $PWD/* $dir
cd $dir
# Mingw's headers have conflicting CR
find . -name '*.[ch]' -exec $ised {} \;
make -f win32/makefile.gcc CC=${ZCHOST}-gcc RC=${ZCHOST}-windres USEZLIB=1 LOC="-I${ZCPREF}/include" LOC_LD="-L${ZCPREF}/lib"
make -B -f ${ZCTOP}/zcbe/zip.zcbe/makefile.install prefix=${ZCPREF}
make -f win32/makefile.gcc clean
cd -
rm -rf $dir
exit 0
exit 0
