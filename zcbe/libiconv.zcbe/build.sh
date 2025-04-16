#!/bin/sh
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
    sed -i "s/aclocal-[0-9]*\.[0-9]*/aclocal/" libcharset/Makefile.devel
else
    # BSD sed's -i needs a postfix
    sed -i "" "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
    sed -i "" "s/aclocal-[0-9]*\.[0-9]*/aclocal/" libcharset/Makefile.devel
fi
GNULIB_SRCDIR="${ZCTOP}/libraries/gnulib" ./autogen.sh
# Make sure CC doesn't affect autogen.sh
CC="${ZCHOST}-gcc" ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make
make install
make distclean
exit 0
