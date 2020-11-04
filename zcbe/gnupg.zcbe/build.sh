#!/bin/sh

./autogen.sh
./configure --prefix=${ZCPREF} --host=${ZCHOST} --with-libgpg-error-prefix=${ZCPREF} --with-ksba-prefix=${ZCPREF} --with-libgcrypt-prefix=${ZCPREF} --with-libassuan-prefix=${ZCPREF} --with-readline=${ZCPREF} --with-libiconv-prefix=${ZCPREF} --with-ntbtls-prefix=${ZCPREF} --with-npth-prefix=${ZCPREF} --with-libintl-prefix=${ZCPREF}
make
make install
make distclean
exit 0
