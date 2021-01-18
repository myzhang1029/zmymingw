#!/bin/sh
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s/^getopt$/getopt-gnu/" bootstrap.conf
else
    # BSD sed's -i needs a postfix
    sed -i "" "s/^getopt$/getopt-gnu/" bootstrap.conf
fi
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS=-U_FORTIFY_SOURCE ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --without-selinux
make
make install
make distclean
exit 0
