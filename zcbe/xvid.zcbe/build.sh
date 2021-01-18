#!/bin/sh
cd build/generic
autoreconf -i
./configure --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)"
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s/-mno-cygwin//" platform.inc
else
    # BSD sed's -i needs a postfix
    sed -i "" "s/-mno-cygwin//" platform.inc
fi
make
make install
make distclean
exit 0
