#!/bin/sh
if sed --version > /dev/null 2>&1
then
    # GNU sed takes -i without an argument
    sed -i "s,install -m 755 -p -s build/\$(UNIX_ADAPTER_EXE) \$(PREFIX)/bin,," Makefile
    sed -i "s,include src/unix-adapter/subdir.mk,," src/subdir.mk
else
    # BSD sed's -i needs a postfix
    sed -i "" "s,install -m 755 -p -s build/\$(UNIX_ADAPTER_EXE) \$(PREFIX)/bin,," Makefile
    sed -i "" "s,include src/unix-adapter/subdir.mk,," src/subdir.mk
fi
echo UNIX_LDFLAGS_STATIC= > config.mk
echo MINGW_CXX=${ZCHOST}-g++ >> config.mk
echo UNIX_CXX=${ZCHOST}-g++ >> config.mk
echo UNIX_CXXFLAGS += -DWINPTY_TARGET_MSYS1 >> config.mk
echo MINGW_ENABLE_CXX11_FLAG := -std=gnu++11 >> config.mk
echo 'COMMIT_HASH = $(shell git rev-parse HEAD)' >> config.mk
echo 'COMMIT_HASH_DEP := config.mk' >> config.mk
make PREFIX=${ZCPREF} install
make PREFIX=${ZCPREF} clean
cp "${ZCPREF}/lib/winpty.lib" "${ZCPREF}/lib/libwinpty.dll.a"
exit 0
