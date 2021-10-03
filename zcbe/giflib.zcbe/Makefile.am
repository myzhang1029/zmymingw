AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4

include_HEADERS = gif_lib.h
noinst_HEADERS = getarg.h gif_hash.h gif_lib_private.h

bin_PROGRAMS = gif2rgb gifbuild giffix giftext giftool gifclrmp
lib_LTLIBRARIES = libgif.la
noinst_LIBRARIES = libutil.a

libgif_la_SOURCES = dgif_lib.c egif_lib.c gifalloc.c gif_err.c gif_font.c \
					gif_hash.c openbsd-reallocarray.c
libgif_la_LDFLAGS = -version-info 7:2:0 -no-undefined
libutil_a_SOURCES = qprintf.c quantize.c getarg.c

LDADD = libutil.a libgif.la
gif2rgb_SOURCES = gif2rgb.c
gifbuild_SOURCES = gifbuild.c
giffix_SOURCES = giffix.c
giftext_SOURCES = giftext.c
giftool_SOURCES = giftool.c
gifclrmp_SOURCES = gifclrmp.c
