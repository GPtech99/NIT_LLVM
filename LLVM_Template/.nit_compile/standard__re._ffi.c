/*
	Extern implementation of Nit module re
*/
#include <stdlib.h>
#include <stdio.h>
#include "standard__re._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif

 regex_t*  re___new_NativeRegex_malloc___impl(  )
{
#line 40 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return malloc(sizeof(regex_t)); }

long re___NativeRegex_regcomp___impl(  regex_t*  recv, char* regex, long cflags )
{
#line 43 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"


		return regcomp(recv, regex, cflags);
	}

long re___NativeRegex_regexec___impl(  regex_t*  recv, char* string, long nmatch,  regmatch_t*  pmatch, long eflags )
{
#line 51 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"


		return regexec(recv, string, nmatch, pmatch, eflags);
	}

long re___NativeRegex_regexec_match_only___impl(  regex_t*  recv, char* string, long eflags )
{
#line 58 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"


		return regexec(recv, string, 0, NULL, eflags);
	}

void re___NativeRegex_regfree___impl(  regex_t*  recv )
{
#line 65 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 regfree(recv); }

char* re___NativeRegex_regerror___impl(  regex_t*  recv, long errcode )
{
#line 68 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"


		size_t len = regerror(errcode, recv, NULL, 0);
		char *message = malloc(len);
		regerror(errcode, recv, message, len);

		return message;
	}

long re___NativeRegex_re_nsub___impl(  regex_t*  recv )
{
#line 77 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return recv->re_nsub; }

int re___Int_is_nomatch___impl( long recv )
{
#line 98 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return recv == REG_NOMATCH; }

 regmatch_t*  re___new_NativeMatchArray_malloc___impl( long length )
{
#line 104 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return malloc(length * sizeof(regmatch_t)); }

long re___NativeMatchArray_rm_so___impl(  regmatch_t*  recv )
{
#line 107 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return recv->rm_so; }

long re___NativeMatchArray_rm_eo___impl(  regmatch_t*  recv )
{
#line 110 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return recv->rm_eo; }

 regmatch_t*  re___NativeMatchArray__index___impl(  regmatch_t*  recv, long index )
{
#line 113 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return recv + index; }

char* re___NativeString_substring_from___impl( char* recv, long index )
{
#line 117 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return recv + index; }

long re___Sys_flag_extended___impl( Sys recv )
{
#line 82 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return REG_EXTENDED; }

long re___Sys_flag_icase___impl( Sys recv )
{
#line 83 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return REG_ICASE; }

long re___Sys_flag_nosub___impl( Sys recv )
{
#line 84 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return REG_NOSUB; }

long re___Sys_flag_newline___impl( Sys recv )
{
#line 85 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return REG_NEWLINE; }

long re___Sys_flag_notbol___impl( Sys recv )
{
#line 89 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return REG_NOTBOL; }

long re___Sys_flag_noteol___impl( Sys recv )
{
#line 90 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return REG_NOTEOL; }

long re___Sys_error_nomatch___impl( Sys recv )
{
#line 94 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return REG_NOMATCH; }

long re___Sys_error_espace___impl( Sys recv )
{
#line 95 "/home/ouajdi/Desktop/nit/lib/standard/re.nit"

 return REG_ESPACE; }
