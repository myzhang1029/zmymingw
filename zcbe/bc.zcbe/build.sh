#!/bin/sh
sed -i.zcbak 's,\t./fbc,\tbc,' bc/Makefile.am
sed -i.zcbak 's/random()/rand()/' bc/execute.c
sed -i.zcbak 's/srand(time(NULL))/srand(time(NULL))/' bc/main.c
autoreconf -i

CFLAGS=-std=gnu99 LDFLAGS=-lgcc ./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
PATH="$dir/bin:$PATH" make HOST_LINK=gcc
make install
make distclean
mv bc/main.c.zcbak bc/main.c
mv bc/execute.c.zcbak bc/execute.c
mv bc/Makefile.am.zcbak bc/Makefile.am
exit 0
