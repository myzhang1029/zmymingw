#!/bin/sh
test -f libatomic_ops||ln -s ../libatomic_ops libatomic_ops
./autogen.sh
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make
make install
make distclean
rm -f libatomic_ops
exit 0
