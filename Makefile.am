SUBDIRS = tests

ACLOCAL_AMFLAGS = -I m4

ivartjincludedir = $(includedir)/ivartj
ivartjinclude_HEADERS = net.h

lib_LTLIBRARIES = libivartjnet.la
libivartjnet_la_SOURCES = net.h net.c

if WIN32
libivartjnet_la_SOURCES += win32.c
endif

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = ivartjnet.pc
