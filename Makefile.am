SUBDIRS = tests

ivartjlibdir = $(libdir)/ivartj
ivartjincludedir = $(includedir)/ivartj
ivartjlib_LIBRARIES = libnet.a
ivartjinclude_HEADERS = net.h

libnet_a_SOURCES = net.h net.c

if WIN32
libnet_a_SOURCES += win32.c
endif

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = ivartjnet.pc
