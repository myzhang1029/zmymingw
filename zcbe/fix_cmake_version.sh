#!/bin/sh

cmake_ver="$(cmake -P "${ZCTOP}/zcbe/print_version.cmake" 2>&1)"
exp='s/CMAKE_MINIMUM_REQUIRED(VERSION \([0-9.]*\)\( *\)\(.*\))/CMAKE_MINIMUM_REQUIRED(VERSION '"$cmake_ver"'\2\3)/Ig'

for file in "$@"
do
    if sed --version > /dev/null 2>&1
    then
        # GNU sed takes -i without an argument
        sed -i "$exp" "$file"
    else
        # BSD sed's -i needs a postfix
        sed -i "" "$exp" "$file"
    fi
done
