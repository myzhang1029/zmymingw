#!/bin/sh

AC_VERSION="$(LC_ALL=C autoconf --version|head -n1|rev|cut -d\  -f1|rev)"
sed -i.zcbak "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_VERSION}])/" configure.ac
sed -i.zcbak "s/^getopt$/getopt-gnu/" bootstrap.conf

patch -p1 < "${ZCTOP}/zcbe/diffutils.zcbe/build.patch"

./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
LIBS=-lbcrypt ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --without-doc
make || touch man/cmp.1 man/diff.1 man/diff3.1 man/sdiff.1 && make
make install
make distclean

patch -R -p1 < "${ZCTOP}/zcbe/diffutils.zcbe/build.patch"
mv bootstrap.conf.zcbak bootstrap.conf
mv configure.ac.zcbak configure.ac

exit 0
