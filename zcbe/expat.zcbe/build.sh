#!/bin/sh
cd expat
./buildconf.sh
./configure --host="${ZCHOST}" --prefix="${ZCPREF}"
make DOCBOOK_TO_MAN=docbook2man -i
make install
make distclean
exit 0
