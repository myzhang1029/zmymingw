#!/bin/sh
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
CFLAGS="-w -Isrc/w32/include" ./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
mv src/w32/compat/posixfcn.c src/w32/compat/posixfcn.c.bak
sed 's/^isatty/__isatty/' src/w32/compat/posixfcn.c.bak > src/w32/compat/posixfcn.c

# BSD sed dies with illegal byte seq
if which gsed > /dev/null 2>&1
then
    sed -e 's@%VERSION%@4.3.90@g' \
        -e 's@%PACKAGE%@make@g' \
        src/config.h-vms.template > src/config.h-vms
fi
make
make install
make distclean
mv src/w32/compat/posixfcn.c.bak src/w32/compat/posixfcn.c
exit 0
