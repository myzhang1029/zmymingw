#!/bin/sh
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
    sed -i "s/^getopt$/getopt-gnu/" bootstrap.conf
else
    # BSD sed's -i needs a postfix
    sed -i "" "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
    sed -i "" "s/^getopt$/getopt-gnu/" bootstrap.conf
fi

patch -u < "${ZCTOP}/zcbe/diffutils.zcbe/build.patch"

./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
LIBS=-lbcrypt ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF} --without-doc
make || touch man/cmp.1 man/diff.1 man/diff3.1 man/sdiff.1 && make
make install
make distclean

patch -R -u < "${ZCTOP}/zcbe/diffutils.zcbe/build.patch"
exit 0
