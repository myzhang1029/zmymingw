#!/bin/sh
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    ised='sed -i'
else
    # BSD sed's -i needs a postfix
    ised='sed -i ""'
fi
#$ised "s/^getopt$/getopt-gnu/" bootstrap.conf
#./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS=-U_FORTIFY_SOURCE LIBS=-lbcrypt ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --without-selinux
$ised 's,lib/netinet/in.h,#lib/netinet/in.h,' gnulib-tests/Makefile
make
make install
make distclean
exit 0
