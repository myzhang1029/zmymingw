#!/bin/sh

./autogen.sh
./configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --disable-static --enable-shared
make
make install
"${ZCTOP}/zcbe/strip_package_config.sh" vorbis vorbisenc vorbisfile
make distclean
exit 0
