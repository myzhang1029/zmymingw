#!/bin/sh
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
else
    # BSD sed's -i needs a postfix
    sed -i "" "s/AC_PREREQ\(.*\)/AC_PREREQ([${AC_MINVER}])/" configure.ac
fi
GNULIB_TOOL="${ZCTOP}/libraries/gnulib/gnulib-tool" ./autogen.sh
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make
make install
make distclean
exit 0