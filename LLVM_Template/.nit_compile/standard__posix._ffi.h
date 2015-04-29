/*
	Extern implementation of Nit module posix
*/
#ifndef STANDARD__POSIX_NIT_H
#define STANDARD__POSIX_NIT_H

#include "standard__posix._nitni.h"
#line 21 "/home/ouajdi/Desktop/nit/lib/standard/posix.nit"


#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#include "standard__math._ffi.h"
int posix___Sys_uid__assign___impl( Sys recv, long uid );
long posix___Sys_uid___impl( Sys recv );
int posix___Sys_gid__assign___impl( Sys recv, long gid );
long posix___Sys_gid___impl( Sys recv );
int posix___Sys_euid__assign___impl( Sys recv, long uid );
long posix___Sys_euid___impl( Sys recv );
int posix___Sys_egid__assign___impl( Sys recv, long gid );
long posix___Sys_egid___impl( Sys recv );
struct passwd* posix___new_Passwd_from_uid___impl( long uid );
struct passwd* posix___new_Passwd_from_name___impl( String name );
String posix___Passwd_name___impl( struct passwd* recv );
String posix___Passwd_passwd___impl( struct passwd* recv );
long posix___Passwd_uid___impl( struct passwd* recv );
long posix___Passwd_gid___impl( struct passwd* recv );
String posix___Passwd_dir___impl( struct passwd* recv );
String posix___Passwd_shell___impl( struct passwd* recv );
struct group* posix___new_Group_from_gid___impl( long gid );
struct group* posix___new_Group_from_name___impl( String name );
String posix___Group_name___impl( struct group* recv );
String posix___Group_passwd___impl( struct group* recv );
long posix___Group_gid___impl( struct group* recv );
Array_of_String posix___Group_mem___impl( struct group* recv );
#endif
