#!/bin/sh

autoreconf -i
#export gmp_cv_prog_exeext_for_build=.exe
./configure --host=${ZCHOST} --prefix=${ZCPREF}
make
make install
make distclean
exit 0
