#!/bin/sh
patch -u < "${ZCTOP}/zcbe/libffi.zcbe/build.patch"
EOF
./autogen.sh
./configure --host=${ZCHOST} --build="$(${ZCTOP}/zcbe/config.guess)" --prefix=${ZCPREF}
make
make install
make distclean
patch -R -u < "${ZCTOP}/zcbe/libffi.zcbe/build.patch"
exit 0
