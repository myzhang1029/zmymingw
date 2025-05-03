AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4

include_HEADERS = termcap.h

lib_LTLIBRARIES = libtermcap.la
libtermcap_la_SOURCES = termcap.c
libtermcap_la_CFLAGS = -std=gnu89 -fno-stack-protector -Wno-implicit-function-declaration -DSTDC_HEADERS
libtermcap_la_LDFLAGS = -no-undefined

info_TEXINFOS = termcap.texi
