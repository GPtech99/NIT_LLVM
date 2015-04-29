/*
	Extern implementation of Nit module time
*/
#ifndef STANDARD__TIME_NITG_NITNI_H
#define STANDARD__TIME_NITG_NITNI_H

#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_FlatString
#define NIT_TYPE_FlatString 1
typedef struct nitni_instance *FlatString;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_FlatString
#define NIT_TYPE_FlatString 1
typedef struct nitni_instance *FlatString;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#include "standard__time._ffi.h"
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
#ifndef FlatString_incr_ref
	#define FlatString_incr_ref(from) nitni_global_ref_incr((FlatString)(from))
#endif
#ifndef FlatString_decr_ref
	#define FlatString_decr_ref(from) nitni_global_ref_decr((FlatString)(from))
#endif
extern struct nitni_instance * time___NativeString_to_s_with_copy( char* recv );
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
#ifndef FlatString_incr_ref
	#define FlatString_incr_ref(from) nitni_global_ref_incr((FlatString)(from))
#endif
#ifndef FlatString_decr_ref
	#define FlatString_decr_ref(from) nitni_global_ref_decr((FlatString)(from))
#endif
extern struct nitni_instance * time___NativeString_to_s_with_copy( char* recv );
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern char* time___String_to_cstring( struct nitni_instance * recv );
extern struct nitni_instance * time___NativeString_to_s( char* recv );
#endif
