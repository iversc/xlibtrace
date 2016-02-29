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


#ifndef __LIBXLIBTRACE_PRINT_KEYSYMS_H__
#define __LIBXLIBTRACE_PRINT_KEYSYMS_H__


#include <stdio.h>
#include <X11/Xlib.h>

#include "libxlibtrace-common.h"
#include "libxlibtrace-print.h"

#include "libxlibtrace-print-basic.h"

/* defaults from the keysym.h installed on my system */
#define XK_MISCELLANY
#define XK_XKB_KEYS
#define XK_LATIN1
#define XK_LATIN2
#define XK_LATIN3
#define XK_LATIN4
#define XK_LATIN8
#define XK_LATIN9
#define XK_CAUCASUS
#define XK_GREEK
#define XK_KATAKANA
#define XK_ARABIC
#define XK_CYRILLIC
#define XK_HEBREW
#define XK_THAI
#define XK_KOREAN
#define XK_ARMENIAN
#define XK_GEORGIAN
#define XK_VIETNAMESE
#define XK_CURRENCY
#define XK_MATHEMATICAL

/* extras */
#define XK_TECHNICAL
#define XK_SPECIAL
#define XK_PUBLISHING
#define XK_APL
#define XK_3270

#include <X11/keysym.h>


#if defined(__LIBXLIBTRACE_PRINT_KEYSYMS_INCLUDE_DEFINITIONS__)

/* Stuff for the .c file */

#  define __LIBXLIBTRACE_PRINT_KEYSYMS_BODY__(x) x
#  define __LIBXLIBTRACE_PRINT_KEYSYMS_SUFF__ 

#else

/* Stuff for the .h file */
#  define __LIBXLIBTRACE_PRINT_KEYSYMS_BODY__(x) ;
#  define __LIBXLIBTRACE_PRINT_KEYSYMS_SUFF__ _PROTO

#endif



#include "libxlibtrace-print-keysyms-gen.h"


#define __PRINT_KEYSYM_CASE__(keysym)  case keysym:  fprintf(f, "%s (0x%lx)", #keysym, value);  dofflush(f);  break;


#define __REALTYPE_KeySym__ KeySym
void print_type_KeySym_(FILE *f, const char *funcname, const char *argname, const char *type, const KeySym value) __LIBXLIBTRACE_PRINT_KEYSYMS_BODY__({
	switch (value) {
		__PRINT_KEYSYM_CASE__(NoSymbol)
		__PRINT_ALL_KEYSYM_CASES__
		default: fprintf(f, "UNKNOWN_KEYSYM (0x%lx)", value);  dofflush(f);  break;
	}
})
#define __REALTYPE_KeySym_p__ KeySym *
#define __REALTYPE_KeySym_pp__ KeySym * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_KEYSYMS_SUFF__,__)(KeySym)

#undef __PRINT_KEYSYM_CASE__

#undef __LIBXLIBTRACE_PRINT_KEYSYMS_BODY__
#undef __LIBXLIBTRACE_PRINT_KEYSYMS_SUFF__

#endif

