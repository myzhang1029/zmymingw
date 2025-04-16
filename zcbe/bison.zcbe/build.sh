#!/bin/sh

./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git || autoreconf -fi
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
# Sometimes this does not exist
touch doc/bison.help
# Doc builds are omitted
make || true
make install-exec-recursive
make distclean
exit 0
