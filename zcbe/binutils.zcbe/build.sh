#!/bin/sh
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --disable-multilib --with-gmp="${ZCPREF}" --with-mpfr="${ZCPREF}" --with-mpc="${ZCPREF}" --with-target-bdw-gc="${ZCPREF}" --with-isl="${ZCPREF}"
echo "extern \"C\" { extern int tgetnum (const char *name); }" >> gdb/config.h
make
make install
make distclean
exit 0
