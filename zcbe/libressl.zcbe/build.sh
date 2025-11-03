#!/bin/sh
./autogen.sh
"${ZCTOP}"/zcbe/gen_toolchainfile.sh
ninja="$("${ZCTOP}"/zcbe/checkninja.sh)"
case "${ZCHOST}" in
    x86_64-*)
        arch="HOST_X86_64"
        ;;
    aarch64-*)
        arch="HOST_AARCH64"
        ;;
    i686-*)
        arch="HOST_I386"
        ;;
    *)
        echo "Unsupported architecture: ${ZCHOST}"
        exit 1
        ;;
esac
cmake -DCMAKE_TOOLCHAIN_FILE="${ZCPREF}"/tmp/toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="${ZCPREF}" -DBUILD_SHARED_LIBS=ON "-D${arch}=yes" -G "${ninja}" -S . -B zcbe_build
cmake --build zcbe_build
cmake --install zcbe_build
"${ZCTOP}/zcbe/strip_package_config.sh" libcrypto libssl libtls openssl
rm -rf zcbe_build

exit 0
