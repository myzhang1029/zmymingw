#!/bin/sh
sed -i.zcbak "s/^getopt$/getopt-gnu/" bootstrap.conf
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS=-U_FORTIFY_SOURCE LIBS=-lbcrypt ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --without-selinux
sed -i.zcbak 's,lib/netinet/in.h,#lib/netinet/in.h,' gnulib-tests/Makefile
rm -f gnulib-tests/Makefile.zcbak
make
make install
make distclean
mv bootstrap.conf.zcbak bootstrap.conf
exit 0
