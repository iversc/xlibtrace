#!/bin/bash

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


awk -v max_va="${1:-32}" '
	BEGIN {
		print "#define __MAX_VA__ " max_va;
		print "#define __VA_ENTRIES_0__";
		for (i = 1; i <= max_va; i++) {
			print "#define __VA_ENTRIES_"i"__ __VA_ENTRIES_"(i-1)"__ __VA_ENTRY__("(i-1)")";
		}

		print "#define __DO_VA_CASES_0__(retstyle, funcname) __DO_VA_CASE__(retstyle, funcname, 0)";
		for (i = 1; i <= max_va; i++) {
			print "#define __DO_VA_CASES_"i"__(retstyle, funcname) __DO_VA_CASES_"(i-1)"__(retstyle, funcname) __DO_VA_CASE__(retstyle, funcname, "i")";
		}

		print "#define __DO_ALL_VA_CASES__(retstyle, funcname) __DO_VA_CASES_"max_va"__(retstyle, funcname)";
	}
' > libxlibtrace-varargs.h

