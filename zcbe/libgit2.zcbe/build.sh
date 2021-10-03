#!/bin/sh

"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"

if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s/ dlltool / ${ZCHOST}-dlltool /" deps/winhttp/CMakeLists.txt
else
    # BSD sed's -i needs a postfix
    sed -i "" "s/ dlltool / ${ZCHOST}-dlltool /" deps/winhttp/CMakeLists.txt
fi

mkdir build || true
cd build

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
LDFLAGS="-L${ZCPREF}/lib -lssl" cmake .. -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -G "${ninja}"
if [ "${ninja}" = "Ninja" ];
then
    ninja
    ninja install
else
    make
    make install
fi
cd ..
rm -rf build
exit 0
