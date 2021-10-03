#!/bin/sh
defaultcc="${ZCHOST}"-gcc
defaultranlib="${ZCHOST}"-ranlib
defaultstrip="${ZCHOST}"-strip
make mingw CC="${CC:-${defaultcc}}" RANLIB="${RANLIB:-${defaultranlib}}" STRIP="${STRIP:-${defaultstrip}}"
make install INSTALL_TOP="${ZCPREF}" EXESUF=.exe
make clean
exit 0
