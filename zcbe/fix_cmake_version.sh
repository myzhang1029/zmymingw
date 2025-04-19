#!/bin/sh

cmake_ver="$(cmake -P "${ZCTOP}/zcbe/print_version.cmake" 2>&1)"
exp='s/CMAKE_MINIMUM_REQUIRED\( \)*(VERSION \([0-9.]*\)\( *\)\(.*\))/CMAKE_MINIMUM_REQUIRED(VERSION '"$cmake_ver"'\3\4)/Ig'

for file in "$@"
do
    sed -i.zcbak "$exp" "$file"
done
