#!/bin/sh

dir=$(mktemp -d)
cp -r $PWD/* $dir
cd $dir

patch -p1 < "${ZCTOP}/zcbe/zip.zcbe/build.patch"
if sed --version > /dev/null 2>&1
then
    # GNU sed uses \<\>
    ised='sed -i s/\<CR\>/CCR/'
    sed -i.zcbak 's/LDFLAGS=-o\$@ -s$/LDFLAGS=-o$@ -s $(LOC_LD)/' win32/makefile.gcc
else
    # BSD sed uses [[:<:]] [[:>:]]
    ised='sed -i "" s/[[:<:]]CR[[:>:]]/CCR/g'
    sed -i.zcbak 's/LDFLAGS=-o\$@ -s$/LDFLAGS=-o$@ -s $(LOC_LD)/' win32/makefile.gcc
fi

# Mingw's headers have conflicting CR
find . -name '*.[ch]' -exec $ised {} \;
make -f win32/makefile.gcc CC="${ZCHOST}-gcc" RC=${ZCHOST}-windres USEZLIB=1 LOC="-isystem ${ZCPREF}/include -Wno-incompatible-pointer-types" LOC_LD="-L${ZCPREF}/lib -lz"
make -B -f "${ZCTOP}"/zcbe/zip.zcbe/makefile.install prefix="${ZCPREF}"
make -f win32/makefile.gcc clean
cd -
rm -rf "$dir"
exit 0
