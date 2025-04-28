#!/bin/sh
"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"
cmake -DCMAKE_TOOLCHAIN_FILE="${ZCPREF}"/tmp/toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -DBUILD_SHARED_LIBS=ON -DENABLE_OPENSSL=ON -DENABLE_LZMA=ON -DENABLE_ZSTD=ON -DENABLE_ZLIB=ON -DENABLE_BZip2=ON -DENABLE_LIBXML2=ON -DENABLE_EXPAT=ON -DENABLE_ICONV=ON -G "${ninja}" -S . -B zcbe_build
cmake --build zcbe_build
cmake --install zcbe_build
rm -rf zcbe_build

exit 0
