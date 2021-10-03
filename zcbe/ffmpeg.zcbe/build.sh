#!/bin/sh

mv ffbuild/common.mak ffbuild/common.mak.bak
# fix at rdp/ffmpeg-windows-build-helpers #558
sed 's/\$(WINDRES) \$(IFLAGS) --preprocessor "\$(DEPWINDRES) -E -xc-header -DRC_INVOKED \$(CC_DEPFLAGS)" -o \$@ \$</$(WINDRES) \$(IFLAGS) -o \$@ \$</' ffbuild/common.mak.bak > ffbuild/common.mak
./configure \
--enable-cross-compile \
--cross-prefix=${ZCHOST}- \
--prefix=${ZCPREF} \
--target-os=$(echo ${ZCHOST} | sed s/.\*-//) \
--arch=$(echo ${ZCHOST} | sed s/-.\*//) \
--pkg-config=pkg-config \
--enable-avresample \
--enable-libx264 \
--enable-libx265 \
--enable-libxvid \
--enable-libmp3lame \
--enable-gpl \
--enable-shared \
--enable-static \
--disable-htmlpages \
--disable-manpages \
--disable-txtpages \
--extra-ldflags="-L${ZCPREF}/lib" \
--extra-cflags="-I${ZCPREF}/include -I${ZCPREF}/SDL2 -DDBL_EPSILON=__DBL_EPSILON__ -DFLT_EPSILON=__FLT_EPSILON__ -DLDBL_EPSILON=__LDBL_EPSILON__" \
--extra-libs=-lSDL2
make
make install
make distclean
mv ffbuild/common.mak.bak ffbuild/common.mak
exit 0
