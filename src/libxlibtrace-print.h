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


#ifndef __LIBXLIBTRACE_PRINT_H__
#define __LIBXLIBTRACE_PRINT_H__

#include <stdio.h>

#include "libxlibtrace-common.h"



// FIXME: this would be better hidden, but oh well...
extern int *prev_reprint;

void print_indent(FILE *f);
void increment_indent();
void decrement_indent();
int is_indented();
void print_arg_name(FILE *f, const char *funcname, const char *argname, const char *type);




#define __PRINT_COMMA__(f) fprintf(f, ", "); dofflush(f);


#define __TRACE_PRINT_STRUCT_MEMBER_SUB__(f, structname, value, argtype, safeargtype, argname) \
	print_arg_name(f, #structname, #argname, __STRINGIFY__(argtype)); \
	print_type_##safeargtype##_(f, #structname, #argname, __STRINGIFY__(argtype), (value).argname); \

#define __TRACE_PRINT_STRUCT_MEMBER__(f, structname, value, safeargtype, argname) \
	__TRACE_PRINT_STRUCT_MEMBER_SUB__(f, structname, value, __REALTYPE__(safeargtype), safeargtype, argname) \

#define __TRACE_PRINT_STRUCT_MEMBER_INDIRECT_SUB__(f, structname, value, argtype, safeargtype, argname) \
	print_arg_name(f, #structname, #argname, __STRINGIFY__(argtype)); \
	print_type_##safeargtype##_(f, #structname, #argname, __STRINGIFY__(argtype), &((value).argname)); \

#define __TRACE_PRINT_STRUCT_MEMBER_INDIRECT__(f, structname, value, safeargtype, argname) \
	__TRACE_PRINT_STRUCT_MEMBER_INDIRECT_SUB__(f, structname, value, __REALTYPE__(safeargtype), safeargtype, argname) \


#define __TRACE_PRINT_TYPE_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) value);

#define __TRACE_PRINT_TYPE_INDIRECT_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value);

#define __TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	void print_type_##safetype##_p_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value);

#define __TRACE_PRINT_TYPE_PP_PROTO__(safetype) \
	void print_type_##safetype##p_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value);

#define __TRACE_PRINT_TYPE_P__(safetype) \
	void print_type_##safetype##_p_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value) { \
		if (value) { \
			fprintf(f, "(%p) ", value); \
			dofflush(f); \
			print_type_##safetype##_(f, funcname, argname, type, *value); \
		} else { \
			fprintf(f, "%p", value); \
			dofflush(f); \
		} \
	} \

#define __TRACE_PRINT_TYPE_INDIRECT_P_PROTO__(safetype) \
	void print_type_##safetype##_p_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value);

#define __TRACE_PRINT_TYPE_INDIRECT_P__(safetype) \
	void print_type_##safetype##_p_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value) { \
		if (value) { \
			fprintf(f, "(%p) ", value); \
			dofflush(f); \
			print_type_##safetype##_(f, funcname, argname, type, value); \
		} else { \
			fprintf(f, "%p", value); \
			dofflush(f); \
		} \
	} \

#define __TRACE_PRINT_TYPE_PP__(safetype) \
	void print_type_##safetype##p_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value) { \
		if (value) { \
			fprintf(f, "(%p) ", value); \
			dofflush(f); \
			print_type_##safetype##_(f, funcname, argname, type, *value); \
		} else { \
			fprintf(f, "%p", value); \
			dofflush(f); \
		} \
	} \

#define __TRACE_PRINT_TYPE_STRUCT_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_INDIRECT_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_STRUCT__(safetype) \
	__TRACE_PRINT_TYPE_STRUCT_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value) { \
		fprintf(f, "{ "); \
		dofflush(f); \
		__TRACE_PRINT_TYPE_STRUCT_BODY_##safetype##__(safetype) \
		fprintf(f, " }"); \
		dofflush(f); \
	} \
	__TRACE_PRINT_TYPE_INDIRECT_P__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_STRUCT_DIRECT_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_STRUCT_DIRECT__(safetype) \
	__TRACE_PRINT_TYPE_STRUCT_DIRECT_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) value) { \
		fprintf(f, "{ "); \
		dofflush(f); \
		__TRACE_PRINT_TYPE_STRUCT_BODY_##safetype##__(safetype) \
		fprintf(f, " }"); \
		dofflush(f); \
	} \
	__TRACE_PRINT_TYPE_P__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_OPAQUE_STRUCT_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_INDIRECT_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_OPAQUE_STRUCT__(safetype) \
	__TRACE_PRINT_TYPE_OPAQUE_STRUCT_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value) { \
		fprintf(f, "(opaque)"); \
		dofflush(f); \
	} \
	__TRACE_PRINT_TYPE_INDIRECT_P__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_OPAQUE_STRUCT_P_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, const __REALTYPE__(safetype) value); \
	void print_type_##safetype##_p_(FILE *f, const char *funcname, const char *argname, const char *type, const __REALTYPE__(safetype) const * value); \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_OPAQUE_STRUCT_P__(safetype) \
	__TRACE_PRINT_TYPE_OPAQUE_STRUCT_P_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, const __REALTYPE__(safetype) value) { \
		fprintf(f, "%p (opaque)", value); \
		dofflush(f); \
	} \
	void print_type_##safetype##_p_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value) { \
		if (value) { \
			fprintf(f, "(%p) ", value); \
			dofflush(f); \
			print_type_##safetype##_(f, funcname, argname, type, *value); \
		} else { \
			fprintf(f, "%p", value); \
			dofflush(f); \
		} \
	} \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_IMPL_DEP_STRUCT_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_INDIRECT_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_IMPL_DEP_STRUCT__(safetype) \
	__TRACE_PRINT_TYPE_IMPL_DEP_STRUCT_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value) { \
		if (_show_implementation_dependent_structs()) { \
			fprintf(f, "{ "); \
			dofflush(f); \
			__TRACE_PRINT_TYPE_STRUCT_BODY_##safetype##__(safetype) \
			fprintf(f, " }"); \
			dofflush(f); \
		} else { \
			fprintf(f, "(opaque (implementation dependent))"); \
			dofflush(f); \
		} \
	} \
	__TRACE_PRINT_TYPE_INDIRECT_P__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \


#define __TRACE_PRINT_SIMPLE_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_SIMPLE_TYPE_P__(safetype) \
	__TRACE_PRINT_TYPE_P__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \

#define __TRACE_PRINT_SIMPLE_TYPE_PP_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_SIMPLE_TYPE_PP__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \


#define __TRACE_PRINT_SIMPLE_TYPE_ALIAS_PROTO__(safetype, aliastype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, const __REALTYPE__(safetype) value); \

#define __TRACE_PRINT_SIMPLE_TYPE_ALIAS__(safetype, aliastype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, const __REALTYPE__(safetype) value) { \
		print_type_##aliastype##_(f, funcname, argname, type, (__REALTYPE__(aliastype))(value)); \
	} \

#define __TRACE_PRINT_SIMPLE_TYPE_ALIAS_P_PROTO__(safetype, aliastype) \
	void print_type_##safetype##p_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value); \

#define __TRACE_PRINT_SIMPLE_TYPE_ALIAS_P__(safetype, aliastype) \
	void print_type_##safetype##p_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value) { \
		print_type_##aliastype##p_(f, funcname, argname, type, (__REALTYPE__(aliastype) const *)(value)); \
	} \


#define __TRACE_PRINT_TYPE_ALIAS_PROTO__(safetype, aliastype) \
	__TRACE_PRINT_TYPE_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_ALIAS__(safetype, aliastype) \
	__TRACE_PRINT_TYPE_ALIAS_PROTO__(safetype, aliastype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) value) { \
		print_type_##aliastype##_(f, funcname, argname, type, (__REALTYPE__(aliastype))(value)); \
	} \
	__TRACE_PRINT_TYPE_P__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_INDIRECT_ALIAS_PROTO__(safetype, aliastype) \
	__TRACE_PRINT_TYPE_INDIRECT_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_INDIRECT_ALIAS__(safetype, aliastype) \
	__TRACE_PRINT_TYPE_INDIRECT_ALIAS_PROTO__(safetype, aliastype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) const * value) { \
		print_type_##aliastype##_(f, funcname, argname, type, (__REALTYPE__(aliastype) const *)(value)); \
	} \
	__TRACE_PRINT_TYPE_INDIRECT_P__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \


#define __TRACE_PRINT_ENUM_MEMBER__(f, structname, value, name) \
	if (value == name) { \
		if (flag) { \
			fprintf(f, " "); \
			dofflush(f); \
		} \
		fprintf(f, "%s", #name); \
		dofflush(f); \
		flag = 1; \
	}

#define __TRACE_PRINT_TYPE_ENUM_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_ENUM__(safetype) \
	__TRACE_PRINT_TYPE_ENUM_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) value) { \
		int flag = 0; \
		__TRACE_PRINT_TYPE_ENUM_BODY_##safetype##__(safetype) \
		if (!flag) { \
			fprintf(f, "%ld (Unknown)", (long)value); \
			dofflush(f); \
		} \
	} \
	__TRACE_PRINT_TYPE_P__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \


#define __TRACE_PRINT_BITMASK_MEMBER__(f, structname, value, name) \
	if (value & name) { \
		if (flag) { \
			fprintf(f, " | "); \
			dofflush(f); \
		} \
		fprintf(f, "%s", #name); \
		dofflush(f); \
		flag = 1; \
	}

#define __TRACE_PRINT_TYPE_BITMASK_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_P_PROTO__(safetype) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP_PROTO__(safetype##_pp) \

#define __TRACE_PRINT_TYPE_BITMASK__(safetype) \
	__TRACE_PRINT_TYPE_BITMASK_PROTO__(safetype) \
	void print_type_##safetype##_(FILE *f, const char *funcname, const char *argname, const char *type, __REALTYPE__(safetype) value) { \
		int flag = 0; \
		__TRACE_PRINT_TYPE_BITMASK_BODY_##safetype##__(safetype) \
		if (!flag) { \
			fprintf(f, "None"); \
			dofflush(f); \
		} \
	} \
	__TRACE_PRINT_TYPE_P__(safetype) \
	__TRACE_PRINT_TYPE_PP__(safetype##_p) \
	__TRACE_PRINT_TYPE_PP__(safetype##_pp) \










#define __TRACE_PRINTF_OPENING_SUB__(funcname, rettype) \
	fprintf(out, "[%d] ", getpid()); \
	dofflush(out); \
	print_indent(out); \
	fprintf(out, "%s %s(", __STRINGIFY__(rettype), #funcname); \
	dofflush(out); \

#define __TRACE_PRINTF_OPENING__(funcname) \
	__TRACE_PRINTF_OPENING_SUB__(funcname, __REALTYPE_INDIRECT__(__TRACE_SAFERETTYPE_##funcname##__)) \

#define __TRACE_PRINTF_ARG_SUB__(funcname, type, safetype, name) \
	print_arg_name(out, #funcname, #name, __STRINGIFY__(type)); \
	print_type_##safetype##_(out, #funcname, #name, __STRINGIFY__(type), name); \

#define __TRACE_PRINTF_ARG__(funcname, safetype, name) \
	__TRACE_PRINTF_ARG_SUB__(funcname, __REALTYPE__(safetype), safetype, name)

// FIXME: actually print the values, ie. the names and pointer addresses
#define __TRACE_PRINTF_VARARG__() \
	fprintf(out, "..."); \
	dofflush(out); \

#define __TRACE_PRINTF_ENTERING_BASE__(name) \
	if (is_indented() && prev_reprint && *prev_reprint == 0) { \
		fprintf(out, " = <unfinished...>\n"); \
		dofflush(out); \
		if (prev_reprint) { \
			*prev_reprint = 1; \
		} \
	} \
	__TRACE_PRINTF_OPENING__(name) \
	__TRACE_PRINTF_BODY_##name##__ \
	fprintf(out, ")"); \
	dofflush(out); \
	increment_indent(); \
	my_prev_reprint = prev_reprint; \
	prev_reprint = & reprint; \

#define __TRACE_PRINTF_ENTERING_TYPED__(name) \
	__TRACE_PRINTF_ENTERING_BASE__(name) \

#define __TRACE_PRINTF_ENTERING_VOID__(name) \
	__TRACE_PRINTF_ENTERING_BASE__(name) \

#define __TRACE_PRINTF_ENTERING_STYLE__(retstyle, argstyle, funcname) \
	__TRACE_PRINTF_ENTERING_##retstyle##__(funcname) \

#define __TRACE_PRINTF_LEAVING_BASE__(name) \
	decrement_indent(); \
	if (always_reprint && !reprint) { \
		fprintf(out, " = <unfinished...>\n"); \
		dofflush(out); \
		reprint = 1; \
	} \
	if (reprint) { \
		__TRACE_PRINTF_OPENING__(name) \
		__TRACE_PRINTF_BODY_##name##__ \
		fprintf(out, ")"); \
		dofflush(out); \
	} \
	prev_reprint = my_prev_reprint; \

#define __TRACE_PRINTF_LEAVING_TYPED_SUB2__(name, saferettype, rettype) \
	print_type_##saferettype##_(out, #name, #name, #rettype, retval); \

#define __TRACE_PRINTF_LEAVING_TYPED_SUB__(name, saferettype, rettype) \
	__TRACE_PRINTF_LEAVING_BASE__(name) \
	fprintf(out, " = "); \
	dofflush(out); \
	__TRACE_PRINTF_LEAVING_TYPED_SUB2__(name, saferettype, rettype) \
	fprintf(out, "\n"); \
	dofflush(out); \

#define __TRACE_PRINTF_LEAVING_TYPED__(name) \
	__TRACE_PRINTF_LEAVING_TYPED_SUB__(name, __TRACE_SAFERETTYPE_##name##__, __REALTYPE_INDIRECT__(__TRACE_SAFERETTYPE_##name##__)) \

#define __TRACE_PRINTF_LEAVING_VOID__(name) \
	__TRACE_PRINTF_LEAVING_BASE__(name) \
	fprintf(out, ": leaving\n"); \
	dofflush(out); \

#define __TRACE_PRINTF_LEAVING_STYLE__(retstyle, argstyle, funcname) \
	__TRACE_PRINTF_LEAVING_##retstyle##__(funcname) \



#endif

