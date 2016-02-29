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


#ifndef __LIBXLIBTRACE_COMMON_H__
#define __LIBXLIBTRACE_COMMON_H__

#define __STRINGIFY__(x) #x

#define __REALTYPE__(t) __REALTYPE_##t##__
#define __REALTYPE_INDIRECT__(t) __REALTYPE__(t)

#define __CONSTRUCT_CALL_3__(t1,t2,t3) t1##t2##t3
#define __INDIRECT_CALL_3__(t1,t2,t3) __CONSTRUCT_CALL_3__(t1,t2,t3)


// Option testing functions
int _show_implementation_dependent_structs();
int _prompt();
int _sleep_amount();
int _xflush();
int _xsync();
int _fflush();

#include <stdio.h>

// For output
extern FILE *out;
void dofflush();

#endif

