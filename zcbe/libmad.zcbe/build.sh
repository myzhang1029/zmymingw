#!/bin/sh
touch ChangeLog NEWS AUTHORS
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s/-fforce-mem//" configure.ac
else
    # BSD sed's -i needs a postfix
    sed -i "" "s/-fforce-mem//" configure.ac
fi
autoreconf -fi
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --enable-static --enable-shared
make
make install
make distclean
exit 0
