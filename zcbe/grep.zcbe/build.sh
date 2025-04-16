#!/bin/sh

./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
LIBS=-lpthread ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make
make install
make distclean
exit 0
