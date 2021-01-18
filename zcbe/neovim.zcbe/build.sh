#!/bin/sh
"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"

mkdir build || true
cd build

cmake .. \
    -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake \
    -DCMAKE_INSTALL_PREFIX="${ZCPREF}" \
    -G "${ninja}" \
    -DLIBLUV_INCLUDE_DIR="${ZCPREF}/include" -DLIBLUV_LIBRARY="${ZCPREF}/lib/libluv.dll.a" \
    -DWINPTY_INCLUDE_DIR="${ZCPREF}/include/winpty" -DWINPTY_LIBRARY="${ZCPREF}/lib/libwinpty.dll.a" \
    -DLUAJIT_INCLUDE_DIR="${ZCPREF}/include" -DLUAJIT_LIBRARY="${ZCPREF}/lib/libluajit-5.1.dll.a" \
    -DCMAKE_C_FLAGS_INIT=-DLUA_COMPAT_MODULE=1

# We have all DLLs, no need to bother
:>external_blobs.cmake
cp ../cmake/WindowsDllCopy.cmake ../cmake/WindowsDllCopy.cmake.mk
:>../cmake/WindowsDllCopy.cmake

if [ "${ninja}" = "Ninja" ]
then
    ninja || (:>bin/nvim;chmod +x bin/nvim) && ninja
else
    make || (:>bin/nvim;chmod +x bin/nvim) && make
fi
mkdir -p /home/zmy/Git/zmymingw/user/neovim/.deps/usr/share/nvim-qt/runtime/plugin
touch /home/zmy/Git/zmymingw/user/neovim/.deps/usr/share/nvim-qt/runtime/plugin/nvim_gui_shim.vim
touch /home/zmy/Git/zmymingw/user/neovim/build/runtime/pack/dist/opt/matchit/doc/tags
touch /home/zmy/Git/zmymingw/user/neovim/build/runtime/pack/dist/opt/vimball/doc/tags
touch /home/zmy/Git/zmymingw/user/neovim/build/runtime/doc/tags
cmake -P cmake_install.cmake
mv ../cmake/WindowsDllCopy.cmake.mk ../cmake/WindowsDllCopy.cmake
cd ..
rm -rf zbuild
cp -r runtime "${ZCPREF}/share/nvim"
exit 0
