/* xlibtrace: LD_PRELOAD library to trace libX11 calls
 * Copyright (C) 2007-2009 Kevin Pulo
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 * Contact:
 * Kevin Pulo
 * kev@pulo.com.au
 */



#include "libxlibtrace-print.h"


static unsigned int indent = 0;

int *prev_reprint = NULL;


void print_indent(FILE *f) {
	unsigned int i;
	fprintf(f, "(%d): ", indent);
	dofflush(f);
	for (i = 0; i < indent; i++) {
		fprintf(f, "    ");
		dofflush(f);
	}
}

void increment_indent() {
	indent++;
}

void decrement_indent() {
	if (indent > 0) {
		indent--;
	}
}

int is_indented() {
	return (indent > 0);
}


void print_arg_name(FILE *f, const char *funcname, const char *argname, const char *type) {
	fprintf(f, "%s %s = ", type, argname);
	dofflush(f);
}



