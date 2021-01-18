#!/bin/sh

mkdir -p /home/runner/ccache_bin
CCACHE_LOC="$(which ccache)"
ln -s "${CCACHE_LOC}" /home/runner/ccache_bin/x86_64-w64-mingw32-gcc
ln -s "${CCACHE_LOC}" /home/runner/ccache_bin/x86_64-w64-mingw32-cc
ln -s "${CCACHE_LOC}" /home/runner/ccache_bin/x86_64-w64-mingw32-g++
ln -s "${CCACHE_LOC}" /home/runner/ccache_bin/x86_64-w64-mingw32-c++
ln -s "${CCACHE_LOC}" /home/runner/ccache_bin/i686-w64-mingw32-gcc
ln -s "${CCACHE_LOC}" /home/runner/ccache_bin/i686-w64-mingw32-cc
ln -s "${CCACHE_LOC}" /home/runner/ccache_bin/i686-w64-mingw32-g++
ln -s "${CCACHE_LOC}" /home/runner/ccache_bin/i686-w64-mingw32-c++
sed "s/@host_trip@/${HOST_TRIP}/" build_ghaction.toml.in > build.toml
exit 0
