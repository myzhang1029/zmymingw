#!/bin/sh
ac_cv_header_stdc=yes ./autogen.sh --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
# Re-run to avoid setting wrong toolchain
ac_cv_header_stdc=yes ./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}" --enable-maintainer-mode
make
make install
make distclean
exit 0
