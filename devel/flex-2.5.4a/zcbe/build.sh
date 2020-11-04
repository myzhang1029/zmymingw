#!/bin/sh

autoreconf -i
./configure --host="${ZCHOST}" --prefix="${ZCPREF}"
make FLEX=flex.exe
make FLEX=flex.exe install
make FLEX=flex.exe distclean
exit 0
