#!/bin/sh

# A broken symlink in bison
if ! [ -f m4/m4.m4 ];
then
    rm -f m4/m4.m4
    cp "${ZCTOP}/zcbe/bison.zcbe/m4.m4" m4/m4.m4
fi

./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git || autoreconf -fi
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
# Sometimes this does not exist
touch doc/bison.help
make
make install
make distclean
exit 0
