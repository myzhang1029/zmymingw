#!/bin/sh
for file in libctf/configure.ac libbacktrace/configure.ac gas/configure.ac gdb/configure.ac gprof/configure.ac ld/configure.ac binutils/configure.ac zlib/configure.ac gprofng/configure.ac libsframe/configure.ac opcodes/configure.ac
do
    sed -i.zcbak 's/^LT_INIT$/LT_INIT([win32-dll])/' $file
done
sed -i.zcbak 's/^LT_INIT(\[/LT_INIT([win32-dll,/' bfd/configure.ac
AC_VERSION="$(LC_ALL=C autoconf --version|head -n1|rev|cut -d\  -f1|rev)"
sed -i.zcbak 's/m4_define(\[_GCC_AUTOCONF_VERSION\], \[[0-9]*\.[0-9]*\])/m4_define([_GCC_AUTOCONF_VERSION], ['"$AC_VERSION])/" config/override.m4
autoreconf -fi

(
mkdir -p zcbe_build && cd zcbe_build || exit 1
LDFLAGS="-L${ZCPREF}/lib" LIBS=-ltermcap ../configure --host="${ZCHOST}" --build="$("${ZCTOP}"/zcbe/config.guess)" --prefix="${ZCPREF}" --disable-multilib --with-gmp="${ZCPREF}" --with-mpfr="${ZCPREF}" --with-mpc="${ZCPREF}" --with-target-bdw-gc="${ZCPREF}" --with-isl="${ZCPREF}" --with-zstd="${ZCPREF}" --with-system-readline --with-system-zlib
make
make install
make distclean
)
rm -rf zcbe_build

mv config/override.m4.zcbak config/override.m4
mv bfd/configure.ac.zcbak bfd/configure.ac
for file in libctf/configure.ac libbacktrace/configure.ac gas/configure.ac gdb/configure.ac gprof/configure.ac ld/configure.ac binutils/configure.ac zlib/configure.ac gprofng/configure.ac libsframe/configure.ac opcodes/configure.ac
do
    mv $file.zcbak $file
done

exit 0
