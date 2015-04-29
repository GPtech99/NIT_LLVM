/*
	Extern implementation of Nit module file
*/
#ifndef STANDARD__FILE_NITG_NITNI_H
#define STANDARD__FILE_NITG_NITNI_H

#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_Array_of_String
#define NIT_TYPE_Array_of_String 1
typedef struct nitni_instance *Array_of_String;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_nullable_Int
#define NIT_TYPE_nullable_Int 1
typedef struct nitni_instance *nullable_Int;
#endif
#ifndef NIT_TYPE_Array_of_Int
#define NIT_TYPE_Array_of_Int 1
typedef struct nitni_instance *Array_of_Int;
#endif
#ifndef NIT_TYPE_nullable_Object
#define NIT_TYPE_nullable_Object 1
typedef struct nitni_instance *nullable_Object;
#endif
#include "standard__file._ffi.h"
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
#ifndef Array_of_String_incr_ref
	#define Array_of_String_incr_ref(from) nitni_global_ref_incr((Array_of_String)(from))
#endif
#ifndef Array_of_String_decr_ref
	#define Array_of_String_decr_ref(from) nitni_global_ref_decr((Array_of_String)(from))
#endif
extern struct nitni_instance * file___new_Array_of_String(  );
extern void file___Array_of_String_add( struct nitni_instance * recv, struct nitni_instance * item );
extern struct nitni_instance * file___NativeString_to_s( char* recv );
extern char* file___String_to_cstring( struct nitni_instance * recv );
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#ifndef nullable_Int_incr_ref
	#define nullable_Int_incr_ref(from) nitni_global_ref_incr((nullable_Int)(from))
#endif
#ifndef nullable_Int_decr_ref
	#define nullable_Int_decr_ref(from) nitni_global_ref_decr((nullable_Int)(from))
#endif
extern struct nitni_instance * NIT_NULL___null_Int();
#define null_Int NIT_NULL___null_Int
#ifndef Array_of_Int_incr_ref
	#define Array_of_Int_incr_ref(from) nitni_global_ref_incr((Array_of_Int)(from))
#endif
#ifndef Array_of_Int_decr_ref
	#define Array_of_Int_decr_ref(from) nitni_global_ref_decr((Array_of_Int)(from))
#endif
#ifndef nullable_Object_incr_ref
	#define nullable_Object_incr_ref(from) nitni_global_ref_incr((nullable_Object)(from))
#endif
#ifndef nullable_Object_decr_ref
	#define nullable_Object_decr_ref(from) nitni_global_ref_decr((nullable_Object)(from))
#endif
extern struct nitni_instance * NIT_NULL___null_Object();
#define null_Object NIT_NULL___null_Object
extern long file___Array_of_Int_length( struct nitni_instance * recv );
extern long file___Array_of_Int__index( struct nitni_instance * recv, long index );
extern int file___Int_is_a_nullable_Int(long);
#define Int_is_a_nullable_Int file___Int_is_a_nullable_Int
extern struct nitni_instance * file___Int_as_nullable_Int(long);
#define Int_as_nullable_Int file___Int_as_nullable_Int
#define Int_as_nullable Int_as_nullable_Int
#endif
