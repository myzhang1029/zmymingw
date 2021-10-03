#!/bin/sh
"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"

mv src/nvim/CMakeLists.txt src/nvim/CMakeLists.txt.bak
# We have all DLLs, no need to bother
sed 's/add_dependencies(nvim_runtime_deps nvim_dll_deps)//' src/nvim/CMakeLists.txt.bak > src/nvim/CMakeLists.txt
mv runtime/CMakeLists.txt runtime/CMakeLists.txt.bak
# Cross build, cannot run this
sed 's,\${PROJECT_BINARY_DIR}/bin/nvim,nvim,' runtime/CMakeLists.txt.bak > runtime/CMakeLists.txt
mkdir -p zbuild/windows_runtime_deps

# Let shell split ${CMAKEFLAGS}
cmake -S . -B zbuild \
    -G "${ninja}" \
    -DCMAKE_TOOLCHAIN_FILE="${ZCTOP}"/toolchain.cmake \
    -DCMAKE_INSTALL_PREFIX="${ZCPREF}" \
    -DLIBLUV_INCLUDE_DIR="${ZCPREF}/include" -DLIBLUV_LIBRARY="${ZCPREF}/lib/libluv.dll.a" \
    -DWINPTY_INCLUDE_DIR="${ZCPREF}/include/winpty" -DWINPTY_LIBRARY="${ZCPREF}/lib/libwinpty.dll.a" \
    -DLUAJIT_INCLUDE_DIR="${ZCPREF}/include" -DLUAJIT_LIBRARY="${ZCPREF}/lib/libluajit-5.1.dll.a" \
    -DCMAKE_C_FLAGS_INIT=-DLUA_COMPAT_MODULE=1

:> zbuild/external_blobs.cmake

cmake --build zbuild

mkdir -p .deps/usr/share/nvim-qt/runtime/plugin
touch .deps/usr/share/nvim-qt/runtime/plugin/nvim_gui_shim.vim

(cd zbuild; cmake -P cmake_install.cmake)
rm -rf zbuild
cp -r runtime "${ZCPREF}/share/nvim"
mv runtime/CMakeLists.txt.bak runtime/CMakeLists.txt
mv src/nvim/CMakeLists.txt.bak src/nvim/CMakeLists.txt
exit 0
