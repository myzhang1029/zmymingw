#!/bin/sh
./configure --host=${ZCHOST} --prefix=${ZCPREF} --with-libraries=libmangle,winpthreads --with-tools=all
# Don't use a -j flag because there is a data race
make
make install
make -i distclean
make -C mingw-w64-tools/genidl distclean
make -C mingw-w64-tools/gendef distclean
make -C mingw-w64-libraries/winpthreads distclean
rm -f config.h stamp-h1
exit 0
