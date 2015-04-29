/*
	Extern implementation of Nit module re
*/
#ifndef STANDARD__RE_NIT_H
#define STANDARD__RE_NIT_H

#include "standard__re._nitni.h"
#line 27 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"


	#include <sys/types.h>
	#include <regex.h>
#include "standard__math._ffi.h"
 regex_t*  re___new_NativeRegex_malloc___impl(  );
long re___NativeRegex_regcomp___impl(  regex_t*  recv, char* regex, long cflags );
long re___NativeRegex_regexec___impl(  regex_t*  recv, char* string, long nmatch,  regmatch_t*  pmatch, long eflags );
long re___NativeRegex_regexec_match_only___impl(  regex_t*  recv, char* string, long eflags );
void re___NativeRegex_regfree___impl(  regex_t*  recv );
char* re___NativeRegex_regerror___impl(  regex_t*  recv, long errcode );
long re___NativeRegex_re_nsub___impl(  regex_t*  recv );
int re___Int_is_nomatch___impl( long recv );
 regmatch_t*  re___new_NativeMatchArray_malloc___impl( long length );
long re___NativeMatchArray_rm_so___impl(  regmatch_t*  recv );
long re___NativeMatchArray_rm_eo___impl(  regmatch_t*  recv );
 regmatch_t*  re___NativeMatchArray__index___impl(  regmatch_t*  recv, long index );
char* re___NativeString_substring_from___impl( char* recv, long index );
long re___Sys_flag_extended___impl( Sys recv );
long re___Sys_flag_icase___impl( Sys recv );
long re___Sys_flag_nosub___impl( Sys recv );
long re___Sys_flag_newline___impl( Sys recv );
long re___Sys_flag_notbol___impl( Sys recv );
long re___Sys_flag_noteol___impl( Sys recv );
long re___Sys_error_nomatch___impl( Sys recv );
long re___Sys_error_espace___impl( Sys recv );
#endif
