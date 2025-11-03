#!/bin/sh

autoreconf -fi
CFLAGS="-isystem ${ZCPREF}"/include\ -I"${ZCPREF}"/include/libheif\ -I"${ZCPREF}"/include/libxml2\ -DBZ_EXPORT \
    LDFLAGS=-L"${ZCPREF}"/lib \
    ./configure --prefix="${ZCPREF}" --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --without-x --without-pango --enable-static --enable-shared
make -j16
make install
"${ZCTOP}/zcbe/strip_package_config.sh" ImageMagick-7.Q16HDRI ImageMagick Magick++-7.Q16HDRI Magick++ MagickCore-7.Q16HDRI MagickCore MagickWand-7.Q16HDRI MagickWand
make distclean
exit 0
