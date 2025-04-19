#!/bin/sh

if type git > /dev/null 2>&1
then
    git tag | grep 0.0 > /dev/null 2>&1 || git tag 0.0
fi

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"
CFLAGS=-w cmake -DCMAKE_TOOLCHAIN_FILE="${ZCPREF}"/tmp/toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -DBUILD_SHARED_LIBS=ON -DX265_LATEST_TAG=3.0 -G "${ninja}" -S source -B zcbe_build
cmake --build zcbe_build
cmake --install zcbe_build
rm -rf zcbe_build

exit 0
