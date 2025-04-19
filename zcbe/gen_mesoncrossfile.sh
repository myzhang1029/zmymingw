#!/bin/sh
if [ "$(echo "${ZCHOST}"|cut -f1 -d-)" = "x86_64" ]
then
    cpufamily="x86_64"
else
    cpufamily="x86"
fi

mkdir -p "${ZCPREF}/tmp"
cat > "${ZCPREF}/tmp/mesoncross.txt" << EOF
[binaries]
exe_wrapper = 'wine' # A command used to run generated executables.
c = '${ZCHOST}-gcc'
cpp = '${ZCHOST}-g++'
ar = '${ZCHOST}-ar'
windres = '${ZCHOST}-windres'
strip = '${ZCHOST}-strip'
objcopy = '${ZCHOST}-objcopy'
ld = '${ZCHOST}-ld'

[built-in options]
prefix = '${ZCPREF}'

[properties]
has_function_printf = true
sys_root = '${ZCPREF}'
pkg_config_libdir = '${ZCPREF}/lib/pkgconfig'

[host_machine]
system = 'windows'
cpu_family = '$cpufamily'
cpu = '$(echo "${ZCHOST}"|cut -f1 -d-)'
endian = 'little'
EOF
