#!/bin/sh
./configure --prefix=${ZCPREF} CXX=${ZCHOST}-g++
make progname=lzip.exe
make install-bin progname=lzip.exe
make install-man
make install-info
make distclean progname=lzip.exe
exit 0
