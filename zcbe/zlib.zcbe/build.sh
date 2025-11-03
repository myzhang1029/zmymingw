#!/bin/sh
make -f win32/Makefile.gcc PREFIX=${ZCHOST}- DESTDIR=${ZCPREF} install prefix=${ZCPREF} LIBRARY_PATH=/lib INCLUDE_PATH=/include BINARY_PATH=/bin SHARED_MODE=1 CP=install
"${ZCTOP}/zcbe/strip_package_config.sh" zlib
make -f win32/Makefile.gcc clean
exit 0
