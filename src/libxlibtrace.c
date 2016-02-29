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


#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <stdarg.h>

#define __USE_GNU
#include <dlfcn.h>
#undef __USE_GNU

#include "libxlibtrace-common.h"
#include "libxlibtrace-print.h"
#include "libxlibtrace-print-basic.h"
#include "libxlibtrace-print-x.h"
#include "libxlibtrace-trace.h"

#include "libxlibtrace-functions.h"




static int __show_implementation_dependent_structs = 0;
static const char libxlibtrace_envvar_show_implementation_dependent_structs[] = "XLIBTRACE_SHOW_IMPLEMENTATION_DEPENDENT_STRUCTS";
int _show_implementation_dependent_structs() {
	return __show_implementation_dependent_structs;
}


static const char libxlibtrace_envvar_single[] = "XLIBTRACE_SINGLE";


static int __prompt = 0;
static const char libxlibtrace_envvar_prompt[] = "XLIBTRACE_PROMPT";
int _prompt() {
	return __prompt;
}


static unsigned long __sleep_amount = 0;
static const char libxlibtrace_envvar_sleep[] = "XLIBTRACE_SLEEP";
int _sleep_amount() {
	return __sleep_amount;
}


static int __xflush = 0;
static const char libxlibtrace_envvar_xflush[] = "XLIBTRACE_XFLUSH";
int _xflush() {
	return __xflush;
}


static int __xsync = 0;
static const char libxlibtrace_envvar_xsync[] = "XLIBTRACE_XSYNC";
int _xsync() {
	return __xsync;
}


static int __fflush = 0;
static const char libxlibtrace_envvar_fflush[] = "XLIBTRACE_FFLUSH";
int _fflush() {
	return __fflush;
}


static const char libxlibtrace_envvar_stdout[] = "XLIBTRACE_STDOUT";
static const char libxlibtrace_envvar_stderr[] = "XLIBTRACE_STDERR";
static const char libxlibtrace_envvar_output_file[] = "XLIBTRACE_OUTPUT_FILE";
static const char libxlibtrace_envvar_append[] = "XLIBTRACE_APPEND";
FILE *out = NULL;


void dofflush() {
	if (_fflush()) {
		fflush(out);
	}
}


static void _libxlibtrace_init(void) __attribute__ ((constructor));
static void _libxlibtrace_fini(void) __attribute__ ((destructor));


static void _libxlibtrace_init (void) {
	//printf("libxlibtrace: starting up\n");

	if (getenv(libxlibtrace_envvar_output_file)) {
		const char * output_filename = getenv(libxlibtrace_envvar_output_file);
		const char * output_mode = "w";
		if (getenv(libxlibtrace_envvar_append)) {
			output_mode = "a";
		}
		out = fopen(output_filename, output_mode);
		if (out == NULL) {
			fprintf(stderr, "xlibtrace: Error: Unable to open output file \"%s\"\n", output_filename);
			exit(1);
		}
	} else if (getenv(libxlibtrace_envvar_stderr)) {
		out = stderr;
	} else if (getenv(libxlibtrace_envvar_stdout)) {
		out = stdout;
	} else {
		out = stderr;
	}

	if (getenv(libxlibtrace_envvar_show_implementation_dependent_structs)) {
		__show_implementation_dependent_structs = 1;
	}

	if (getenv(libxlibtrace_envvar_single)) {
		const char *ld_preload = getenv("LD_PRELOAD");
		if (ld_preload == NULL) {
			// wtf?
		} else {
			unsigned int i = 0;
			while (ld_preload[i] && ld_preload[i] != ':' && !isspace(ld_preload[i])) {
				i++;
			}
			setenv("LD_PRELOAD", ld_preload + i, 1);
		}
	}

	if (getenv(libxlibtrace_envvar_prompt)) {
		__prompt = 1;
	}

	if (_prompt()) {
		// FIXME termios/readline
		setvbuf(stdin, NULL, _IONBF, 0);
	}

	if (getenv(libxlibtrace_envvar_sleep)) {
		const char *sleep_str = getenv(libxlibtrace_envvar_sleep);
		char *end;
		__sleep_amount = strtoul(sleep_str, &end, 10);
		// FIXME: check end/errno like I know I should...
	}

	if (getenv(libxlibtrace_envvar_xflush)) {
		__xflush = 1;
	}

	if (getenv(libxlibtrace_envvar_xsync)) {
		__xsync = 1;
	}

	if (getenv(libxlibtrace_envvar_fflush)) {
		__fflush = 1;
	}

}

static void _libxlibtrace_fini (void) {
	//printf("libxlibtrace: shutting down\n");
}


