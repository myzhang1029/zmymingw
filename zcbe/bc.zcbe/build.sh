#!/bin/sh
mv bc/Makefile.am bc/Makefile.am.bak
sed 's,\t./fbc,\tbc,' bc/Makefile.am.bak > bc/Makefile.am
mv bc/execute.c bc/execute.c.bak
sed 's/random()/rand()/' bc/execute.c.bak > bc/execute.c
autoreconf -i
LDFLAGS=-lgcc ./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make HOST_LINK=gcc
make install
make distclean
mv bc/execute.c.bak bc/execute.c
mv bc/Makefile.am.bak bc/Makefile.am
exit 0
