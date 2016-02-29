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


(
	cat /usr/include/X11/Xatom.h \
	| sed -ne 's/^[ 	]*#[ 	]*define[ 	]\+\(XA_.*\)[ 	]\+([ 	]*([ 	]*Atom[ 	]*)[ 	]\+\([0-9][0-9]*\)[ 	]*)[ 	]*$/\2 \1/p' \
	| awk '
		BEGIN {
			min = "first";
			max = "first";
		}
		{
			n = $1;
			a = $2;
			if (n in atom) {
				# ignore
			} else {
				atom[n] = a;
			}
			if (min == "first" || n < min) {
				min = n;
			}
			if (max == "first" || n > max) {
				max = n;
			}
		}
		END {
			print "#include \"libxlibtrace-atoms.h\"";
			print "char * atom_name[] = {";
			for (i = 0; i <= max; i++) {
				if (i in atom) {
					print "/*", i, "*/", "\"" atom[i] "\"", (i < max)?",":"";
				} else {
					print "/*", i, "*/", "\"" "UNKNOWN_ATOM" "\"", (i < max)?",":"";
				}
			}
			print "};";
			print "unsigned int max_atom_name = " max ";";
		}
		'
) > libxlibtrace-atoms.c

