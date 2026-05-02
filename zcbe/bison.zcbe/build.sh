#!/bin/sh

patch -p1 < "${ZCTOP}/zcbe/bison.zcbe/build.patch"
unpatch() {
    patch -R -p1 < "${ZCTOP}/zcbe/bison.zcbe/build.patch"
}
trap unpatch exit

test -d "${ZCTOP}/.git" && git submodule update --init submodules/autoconf
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --bootstrap-sync
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
# Sometimes this does not exist
touch doc/bison.help
# Prevent bison from trying to run help2man
touch doc/bison.1
make
make install
make distclean
exit 0
