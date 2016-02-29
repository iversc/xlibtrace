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


#ifndef __LIBXLIBTRACE_TRACE_H__
#define __LIBXLIBTRACE_TRACE_H__

#include "libxlibtrace-common.h"
#include "libxlibtrace-print.h"
#include "libxlibtrace-print-basic.h"
#include "libxlibtrace-print-x.h"


#define __TRACE_GET_RETSTYLE__(funcname) \
	__TRACE_RETSTYLE_##funcname##__

#define __TRACE_GET_ARGSTYLE__(funcname) \
	__TRACE_ARGSTYLE_##funcname##__

#define __TRACE_GET_RETSTYLE_INDIRECT__(funcname) \
	__TRACE_GET_RETSTYLE__(funcname)

#define __TRACE_GET_ARGSTYLE_INDIRECT__(funcname) \
	__TRACE_GET_ARGSTYLE__(funcname)


#define __TRACE_LOCAL_VARS__(funcname) \
		int reprint = 0; \
		int always_reprint = 0; \
		int *my_prev_reprint = NULL; \

#define __TRACE_LOCAL_VARS_VOID__(funcname) \

#define __TRACE_LOCAL_VARS_TYPED__(funcname) \

#define __TRACE_LOCAL_VARS_FIXED__(funcname) \

#define __TRACE_LOCAL_VARS_VAR__(funcname) \

#define __TRACE_BEGIN_BASE__(funcname, protoarglist) \
	__REALTYPE_INDIRECT__(__TRACE_SAFERETTYPE_##funcname##__) funcname protoarglist { \
		static __REALTYPE_INDIRECT__(__TRACE_SAFERETTYPE_##funcname##__) (*underlying)protoarglist = 0x0; \
		__TRACE_LOCAL_VARS__(funcname) \
		__TRACE_ADDITIONAL_LOCAL_VARS_##funcname##__ \

#define __TRACE_BEGIN_VOID__(funcname) \
	__TRACE_BEGIN_BASE__(funcname, __TRACE_PROTOARGLIST_##funcname##__) \
		__TRACE_LOCAL_VARS_VOID__(funcname) \

#define __TRACE_BEGIN_TYPED__(funcname) \
	__TRACE_BEGIN_BASE__(funcname, __TRACE_PROTOARGLIST_##funcname##__) \
		__REALTYPE_INDIRECT__(__TRACE_SAFERETTYPE_##funcname##__) retval; \
		__TRACE_LOCAL_VARS_TYPED__(funcname) \

#define __TRACE_BEGIN_FIXED__(funcname) \
		__TRACE_LOCAL_VARS_FIXED__(funcname) \

#define __TRACE_BEGIN_VAR__(funcname) \
	va_list ap; \
	unsigned int num_va; \
	unsigned int va_i; \
	char * va_this_name; \
	XPointer va_this_value; \
	char ** va_name; \
	XPointer * va_value; \
		__TRACE_LOCAL_VARS_VAR__(funcname) \

#define __TRACE_BEGIN_STYLE__(retstyle, argstyle, funcname) \
	__TRACE_BEGIN_##retstyle##__(funcname) \
	__TRACE_BEGIN_##argstyle##__(funcname) \

#define __TRACE_BEGIN_STYLE_INDIRECT__(retstyle, argstyle, funcname) \
	__TRACE_BEGIN_STYLE__(retstyle, argstyle, funcname) \

#define __TRACE_BEGIN__(funcname) \
	__TRACE_BEGIN_STYLE_INDIRECT__(__TRACE_GET_RETSTYLE__(funcname), __TRACE_GET_ARGSTYLE__(funcname), funcname) \







#define __TRACE_GET_UNDERLYING__(funcname) \
		if (!underlying) { \
			underlying = dlsym(RTLD_NEXT, #funcname); \
			if (!underlying) { \
				fprintf (stderr, "xlibtrace: Error: Unable to find the real " #funcname "(): %s\n", dlerror()); \
				exit(1); \
			} \
		} \

#define __TRACE_RUN_UNDERLYING_VOID__(funcname) \

#define __TRACE_RUN_UNDERLYING_TYPED__(funcname) \
		retval = \

#define __TRACE_RUN_UNDERLYING_FIXED__(retstyle, funcname) \
		__TRACE_RUN_UNDERLYING_##retstyle##__(funcname) (*underlying)__TRACE_ARGLIST_##funcname##__; \


#define __VA_ENTRY__(i) , va_name[i], va_value[i]

#define __VA__(i) __VA_ENTRIES_##i##__

#define __DO_VA_CASE__(retstyle, funcname, i) \
			case i: \
				__TRACE_RUN_UNDERLYING_##retstyle##__(funcname) (*underlying)__TRACE_FIXEDARGLISTSTART_##funcname##__ __VA__(i), NULL); \
				break; \


#include "libxlibtrace-varargs.h"

#define __TRACE_RUN_UNDERLYING_VAR__(retstyle, funcname) \
		num_va = 0; \
		va_start(ap, __TRACE_FINALFIXEDARGNAME_##funcname##__); \
		va_this_name = va_arg(ap, char *); \
		while (va_this_name) { \
			num_va++; \
			va_this_value = va_arg(ap, XPointer); \
			va_this_name = va_arg(ap, char *); \
		} \
		va_end(ap); \
		va_name = (char**) malloc(sizeof(char*) * num_va); \
		va_value = (XPointer*) malloc(sizeof(XPointer) * num_va); \
		va_i = 0; \
		va_start(ap, __TRACE_FINALFIXEDARGNAME_##funcname##__); \
		va_this_name = va_arg(ap, char *); \
		while (va_this_name) { \
			va_this_value = va_arg(ap, XPointer); \
			va_name[va_i] = va_this_name; \
			va_value[va_i] = va_this_value; \
			va_i++; \
			va_this_name = va_arg(ap, char *); \
		} \
		va_end(ap); \
		switch (num_va) { \
			__DO_ALL_VA_CASES__(retstyle, funcname)  \
			default: \
				fprintf(stderr, "xlibtrace: " #funcname ": Error: num_va = %d which is larger than the maximum of %d.\n", num_va, __MAX_VA__); \
				fprintf(stderr, "xlibtrace: " #funcname ": Recompile xlibtrace with a larger __MAX_VA__.\n"); \
				exit(1); \
				break; \
		} \
		free(va_name); \
		free(va_value); \

#define __TRACE_PRE_RUN_UNDERLYING_STYLE__(retstyle, argstyle, funcname) \
	if (_sleep_amount()) { \
		usleep(_sleep_amount()); \
	} \
	if (_prompt()) { \
		setvbuf(stdin, NULL, _IONBF, 0); \
		fgetc(stdin); \
	} \

#define __TRACE_PRE_RUN_UNDERLYING_STYLE_INDIRECT__(funcname) \
	__TRACE_PRE_RUN_UNDERLYING_STYLE__(funcname) \

#define __TRACE_PRE_RUN_UNDERLYING__(funcname) \
	__TRACE_PRE_RUN_UNDERLYING_STYLE_INDIRECT__(__TRACE_GET_RETSTYLE__(funcname), __TRACE_GET_ARGSTYLE__(funcname), funcname) \


#define __TRACE_POST_RUN_UNDERLYING_STYLE__(retstyle, argstyle, funcname) \

#define __TRACE_POST_RUN_UNDERLYING_STYLE_INDIRECT__(retstyle, argstyle, funcname) \
	__TRACE_POST_RUN_UNDERLYING_STYLE__(retstyle, argstyle, funcname) \

#define __TRACE_POST_RUN_UNDERLYING__(funcname) \
	__TRACE_POST_RUN_UNDERLYING_STYLE_INDIRECT__(__TRACE_GET_RETSTYLE__(funcname), __TRACE_GET_ARGSTYLE__(funcname), funcname) \


#define __TRACE_RUN_UNDERLYING_STYLE__(retstyle, argstyle, funcname) \
	__TRACE_GET_UNDERLYING__(funcname) \
	__TRACE_PRE_RUN_UNDERLYING_STYLE__(retstyle, argstyle, funcname) \
	__TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_##funcname##__ \
	__TRACE_RUN_UNDERLYING_##argstyle##__(retstyle, funcname) \
	__TRACE_POST_RUN_UNDERLYING_STYLE__(retstyle, argstyle, funcname) \
	__TRACE_ADDITIONAL_POST_RUN_UNDERLYING_##funcname##__ \

#define __TRACE_RUN_UNDERLYING_STYLE_INDIRECT__(retstyle, argstyle, funcname) \
	__TRACE_RUN_UNDERLYING_STYLE__(retstyle, argstyle, funcname) \

#define __TRACE_RUN_UNDERLYING__(funcname) \
	__TRACE_RUN_UNDERLYING_STYLE_INDIRECT__(__TRACE_GET_RETSTYLE__(funcname), __TRACE_GET_ARGSTYLE__(funcname), funcname) \







#define __TRACE_END_VOID__(funcname) \
		return; \
	} \

#define __TRACE_END_TYPED__(funcname) \
		return retval; \
	} \

#define __TRACE_END_STYLE__(retstyle, argstyle, funcname) \
	__TRACE_END_##retstyle##__(funcname) \

#define __TRACE_END_STYLE_INDIRECT__(retstyle, argstyle, funcname) \
	__TRACE_END_STYLE__(retstyle, argstyle, funcname) \

#define __TRACE_END__(funcname) \
	__TRACE_END_STYLE_INDIRECT__(__TRACE_GET_RETSTYLE__(funcname), __TRACE_GET_ARGSTYLE__(funcname), funcname) \









// FIXME: can XFlush/XSync return errors?  if so, handle them?
#define __TRACE_RUN_XFLUSH_XSYNC__(funcname, safeargtype, argname) \
	if (_xflush()) { \
		XFlush(argname); \
	} \
	if (_xsync()) { \
		XSync(argname, False); \
	} \








#define __TRACE_STYLE__(retstyle, argstyle, funcname) \
	__TRACE_BEGIN_STYLE__(retstyle, argstyle, funcname) \
	{ __TRACE_PRINTF_ENTERING_STYLE__(retstyle, argstyle, funcname) } \
	__TRACE_RUN_UNDERLYING_STYLE__(retstyle, argstyle, funcname) \
	{ __TRACE_PRINTF_LEAVING_STYLE__(retstyle, argstyle, funcname) } \
	__TRACE_RUN_UNDERLYING_EPILOGUE_##funcname##__ \
	__TRACE_END_STYLE__(retstyle, argstyle, funcname) \


#define __TRACE_STYLE_INDIRECT__(retstyle, argstyle, funcname) \
	__TRACE_STYLE__(retstyle, argstyle, funcname) \

#define __TRACE__(funcname) \
	__TRACE_STYLE_INDIRECT__(__TRACE_GET_RETSTYLE__(funcname), __TRACE_GET_ARGSTYLE__(funcname), funcname)



#endif

