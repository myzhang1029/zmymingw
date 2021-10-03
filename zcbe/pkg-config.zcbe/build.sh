#!/bin/sh
mv glib/m4macros/glib-gettext.m4 glib/m4macros/glib-gettext.m4.orig
sed 's/m4_copy/m4_copy_force/' glib/m4macros/glib-gettext.m4.orig > glib/m4macros/glib-gettext.m4
./autogen.sh
./configure --host="${ZCHOST}" --build="$(${ZCTOP}/zcbe/config.guess)" --prefix="${ZCPREF}"
make
make install
make distclean
mv glib/m4macros/glib-gettext.m4.orig glib/m4macros/glib-gettext.m4
exit 0
