SUBDIRS = tests

ACLOCAL_AMFLAGS = -I m4

ivartjlibdir = $(libdir)/ivartj
ivartjincludedir = $(includedir)/ivartj
ivartjlib_LTLIBRARIES = libnet.la
ivartjinclude_HEADERS = net.h

libnet_la_SOURCES = net.h net.c

if WIN32
libnet_la_SOURCES += win32.c
endif

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = ivartjnet.pc
