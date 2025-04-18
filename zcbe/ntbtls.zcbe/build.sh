#!/bin/sh
./autogen.sh
./configure --enable-maintainer-mode --prefix=${ZCPREF} --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --with-libgpg-error-prefix=${ZCPREF} --with-ksba-prefix=${ZCPREF} --with-libgcrypt-prefix=${ZCPREF}
make
make install
make distclean
exit 0
