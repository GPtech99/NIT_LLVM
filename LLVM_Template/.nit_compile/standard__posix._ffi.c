/*
	Extern implementation of Nit module posix
*/
#include <stdlib.h>
#include <stdio.h>
#include "standard__posix._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define String_to_cstring posix___String_to_cstring
#define NativeString_to_s posix___NativeString_to_s
#define new_Array_of_String posix___new_Array_of_String
#define Array_of_String_add posix___Array_of_String_add

int posix___Sys_uid__assign___impl( Sys recv, long uid )
{
#line 30 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return setuid(uid); }

long posix___Sys_uid___impl( Sys recv )
{
#line 33 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return getuid(); }

int posix___Sys_gid__assign___impl( Sys recv, long gid )
{
#line 36 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return setgid(gid); }

long posix___Sys_gid___impl( Sys recv )
{
#line 39 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return getgid(); }

int posix___Sys_euid__assign___impl( Sys recv, long uid )
{
#line 42 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return seteuid(uid); }

long posix___Sys_euid___impl( Sys recv )
{
#line 45 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return geteuid(); }

int posix___Sys_egid__assign___impl( Sys recv, long gid )
{
#line 48 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return setegid(gid); }

long posix___Sys_egid___impl( Sys recv )
{
#line 51 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return getegid(); }

struct passwd* posix___new_Passwd_from_uid___impl( long uid )
{
#line 57 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return getpwuid(uid); }

struct passwd* posix___new_Passwd_from_name___impl( String name )
{
#line 60 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return getpwnam( String_to_cstring(name) ); }

String posix___Passwd_name___impl( struct passwd* recv )
{
#line 63 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return NativeString_to_s(recv->pw_name); }

String posix___Passwd_passwd___impl( struct passwd* recv )
{
#line 66 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return NativeString_to_s(recv->pw_passwd); }

long posix___Passwd_uid___impl( struct passwd* recv )
{
#line 69 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return recv->pw_uid; }

long posix___Passwd_gid___impl( struct passwd* recv )
{
#line 72 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return recv->pw_gid; }

String posix___Passwd_dir___impl( struct passwd* recv )
{
#line 75 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return NativeString_to_s(recv->pw_dir); }

String posix___Passwd_shell___impl( struct passwd* recv )
{
#line 78 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return NativeString_to_s(recv->pw_shell); }

struct group* posix___new_Group_from_gid___impl( long gid )
{
#line 84 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return getgrgid(gid); }

struct group* posix___new_Group_from_name___impl( String name )
{
#line 87 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return getgrnam( String_to_cstring(name) ); }

String posix___Group_name___impl( struct group* recv )
{
#line 90 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return NativeString_to_s(recv->gr_name); }

String posix___Group_passwd___impl( struct group* recv )
{
#line 93 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return NativeString_to_s(recv->gr_passwd); }

long posix___Group_gid___impl( struct group* recv )
{
#line 96 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"

 return recv->gr_gid; }

Array_of_String posix___Group_mem___impl( struct group* recv )
{
#line 99 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"


		char **mem;
		int m;
		Array_of_String ret;

		mem = recv->gr_mem;
		ret = new_Array_of_String();

		for (m = 0; mem[m] != NULL; m++)
			Array_of_String_add(ret, NativeString_to_s(mem[m]));

		return ret;
	}
