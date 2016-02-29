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


cat /usr/include/X11/keysymdef.h \
	| sed -ne 's/^[ 	]*#[ 	]*define[ 	]\+\(XK_[a-zA-Z_0-9]\+\)[ 	]\+\(0x[0-9a-f]\+\)[ 	]*\(\/\*[ 	]*.*[ 	]*\*\/\)\?[ 	]*$/\2 \1/p' \
	| sort -s -k 1 \
	| awk '{print $2, $1}' \
	| uniq -f 1 \
	| awk 'BEGIN{print"#define __PRINT_ALL_KEYSYM_CASES__ \\"} {printf("		__PRINT_KEYSYM_CASE__(%s) /* %s */ \\\n", $1, $2)} END{print""}' \
	> libxlibtrace-print-keysyms-gen.h

