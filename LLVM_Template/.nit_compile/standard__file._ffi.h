/*
	Extern implementation of Nit module file
*/
#ifndef STANDARD__FILE_NIT_H
#define STANDARD__FILE_NIT_H

#include "standard__file._nitni.h"
#line 23 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"


	#include <dirent.h>
	#include <string.h>
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <unistd.h>
	#include <stdio.h>
	#include <poll.h>
	#include <errno.h>
#include "standard__math._ffi.h"
#include "standard__time._ffi.h"
Array_of_String file___String_files___impl( String recv );
 struct stat *  file___NativeString_file_lstat___impl( char* recv );
int file___NativeString_rmdir___impl( char* recv );
int file___NativeFileStat_is_reg___impl(  struct stat *  recv );
int file___NativeFileStat_is_dir___impl(  struct stat *  recv );
int file___NativeFileStat_is_chr___impl(  struct stat *  recv );
int file___NativeFileStat_is_blk___impl(  struct stat *  recv );
int file___NativeFileStat_is_fifo___impl(  struct stat *  recv );
int file___NativeFileStat_is_lnk___impl(  struct stat *  recv );
int file___NativeFileStat_is_sock___impl(  struct stat *  recv );
long file___NativeFile_fileno___impl(  FILE*  recv );
nullable_Int file___Sys_intern_poll___impl( Sys recv, Array_of_Int in_fds, Array_of_Int out_fds );
#endif
