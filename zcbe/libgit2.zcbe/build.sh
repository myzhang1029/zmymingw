#!/bin/sh

if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s/ dlltool / ${ZCHOST}-dlltool /" deps/winhttp/CMakeLists.txt
else
    # BSD sed's -i needs a postfix
    sed -i "" "s/ dlltool / ${ZCHOST}-dlltool /" deps/winhttp/CMakeLists.txt
fi

# Create a dummy library for CMake to "resolve"
g()
{
    for p in $(LC_MESSAGES=C "${ZCHOST}-gcc" --print-search-dirs|grep libraries|cut -f2 -d=|tr : ' ')
    do
        ls "$p/$1" 2>/dev/null && return 0 || true
    done
    return 1
}
cp "$(g libws2_32.a)" "${ZCPREF}/lib"

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"
LDFLAGS="-L${ZCPREF}/lib -lssl" cmake -DCMAKE_TOOLCHAIN_FILE="${ZCPREF}"/tmp/toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -DBUILD_SHARED_LIBS=ON -G "${ninja}" -DCMAKE_C_FLAGS_INIT=-w -S . -B zcbe_build
cmake --build zcbe_build
cmake --install zcbe_build
rm -rf zcbe_build

exit 0
