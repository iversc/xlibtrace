# xlibtrace: LD_PRELOAD library to trace libX11 calls
# Copyright (C) 2007-2009 Kevin Pulo
# 
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
# 
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
# 
# Contact:
# Kevin Pulo
# kev@pulo.com.au


AUTOMAKE_OPTIONS  = 1.4 foreign

INCLUDES  = -I.

CFLAGS += -Wall
CFLAGS += -Werror

genfiles_c  = libxlibtrace-atoms.c

genfiles_h  = libxlibtrace-functions.h
genfiles_h += libxlibtrace-print-keysyms-gen.h
genfiles_h += libxlibtrace-varargs.h

genfiles = $(genfiles_c) $(genfiles_h)


headers  = libxlibtrace-common.h
headers += libxlibtrace-print.h
headers += libxlibtrace-print-basic.h
headers += libxlibtrace-print-x.h
headers += libxlibtrace-print-keysyms.h
headers += libxlibtrace-trace.h
headers += libxlibtrace-atoms.h


lib_LTLIBRARIES  = libxlibtrace.la

libxlibtrace_la_SOURCES  = libxlibtrace.c
libxlibtrace_la_SOURCES += libxlibtrace-print.c
libxlibtrace_la_SOURCES += libxlibtrace-print-basic.c
libxlibtrace_la_SOURCES += libxlibtrace-print-x.c
libxlibtrace_la_SOURCES += libxlibtrace-print-keysyms.c
libxlibtrace_la_SOURCES += $(headers)
nodist_libxlibtrace_la_SOURCES = $(genfiles)
libxlibtrace_la_CFLAGS  = -O1
libxlibtrace_la_LDFLAGS  = -O1
libxlibtrace_la_LIBADD  = -ldl

BUILT_SOURCES  = $(genfiles)

nodist_bin_SCRIPTS  = xlibtrace

#dist_man_MANS  = xlibtrace.1

dist_noinst_DATA  = xlibtrace.in
dist_noinst_DATA += libxlibtrace-functions-parameter-overrides
dist_noinst_DATA += $(subst .c,.c.sh,$(genfiles_c))
dist_noinst_DATA += $(subst .h,.h.sh,$(genfiles_h))

include_HEADERS  = $(headers)
include_HEADERS += $(genfiles_h)

CLEANFILES  = xlibtrace
CLEANFILES += $(genfiles)

edit = sed \
	-e 's,@PACKAGE_VERSION\@,$(PACKAGE_VERSION),g' \
	-e 's,@bindir\@,$(bindir),g' \
	-e 's,@mandir\@,$(mandir),g' \
	-e 's,@libdir\@,$(libdir),g' \
	-e 's,@datadir\@,$(datadir),g' \
	-e 's,@localstatedir\@,$(localstatedir),g'

xlibtrace: %: Makefile $(srcdir)/%.in
	rm -f $@ $@.tmp && \
	$(edit) $(srcdir)/$@.in > $@.tmp && \
	mv $@.tmp $@

$(genfiles): %: Makefile $(srcdir)/%.sh libxlibtrace-functions-parameter-overrides
	/bin/bash $(srcdir)/$@.sh

