#!/bin/sh
cd expat
./buildconf.sh
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
make DOCBOOK_TO_MAN=docbook2man -i
make install
make distclean
exit 0
