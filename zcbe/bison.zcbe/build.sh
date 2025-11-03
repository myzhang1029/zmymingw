#!/bin/sh

patch -p1 < "${ZCTOP}/zcbe/bison.zcbe/build.patch"
unpatch() {
    patch -R -p1 < "${ZCTOP}/zcbe/bison.zcbe/build.patch"
}
trap unpatch exit

test -d "${ZCTOP}/.git" && git submodule update --init submodules/autoconf
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
# Sometimes this does not exist
touch doc/bison.help
# Doc builds are omitted
make || true
make install-exec-recursive
make distclean
exit 0
