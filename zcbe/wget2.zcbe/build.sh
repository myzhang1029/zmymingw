#!/bin/sh
sed -i.zcbak 's,^static BOOL HandleCtrlEvent(DWORD dwCtrlType),static BOOL WINAPI HandleCtrlEvent(DWORD dwCtrlType),' src/wget.c
./bootstrap --gnulib-srcdir="${ZCTOP}"/libraries/gnulib --no-git
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" libwget
make distclean
mv src/wget.c.zcbak src/wget.c
exit 0
