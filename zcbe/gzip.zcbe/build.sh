#!/bin/sh
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "22s/2.60/2.63/" configure.ac
else
    # BSD sed's -i needs a postfix
    sed -i '' "22s/2.60/2.63/" configure.ac
fi
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS=-lssp ./configure --host="${ZCHOST}" --prefix="${ZCPREF}"
make
make install
make distclean
exit 0
