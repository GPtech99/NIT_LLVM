/*
	Extern implementation of Nit module file
*/
#include <stdlib.h>
#include <stdio.h>
#include "standard__file._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define new_Array_of_String file___new_Array_of_String
#define Array_of_String_add file___Array_of_String_add
#define NativeString_to_s file___NativeString_to_s
#define String_to_cstring file___String_to_cstring
#define Array_of_Int_length file___Array_of_Int_length
#define Array_of_Int__index file___Array_of_Int__index

Array_of_String file___String_files___impl( String recv )
{
#line 1006 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"


		char *dir_path;
		DIR *dir;

		dir_path = String_to_cstring( recv );
		if ((dir = opendir(dir_path)) == NULL)
		{
			//perror( dir_path );
			//exit( 1 );
			Array_of_String results;
			results = new_Array_of_String();
			return results;
		}
		else
		{
			Array_of_String results;
			String file_name;
			struct dirent *de;

			results = new_Array_of_String();

			while ( ( de = readdir( dir ) ) != NULL )
				if ( strcmp( de->d_name, ".." ) != 0 &&
					strcmp( de->d_name, "." ) != 0 )
				{
					file_name = NativeString_to_s( strdup( de->d_name ) );
					Array_of_String_add( results, file_name );
				}

			closedir( dir );
			return results;
		}
	}

 struct stat *  file___NativeString_file_lstat___impl( char* recv )
{
#line 1044 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"


		struct stat* stat_element;
		int res;
		stat_element = malloc(sizeof(struct stat));
		res = lstat(recv, stat_element);
		if (res == -1) return NULL;
		return stat_element;
	}

int file___NativeString_rmdir___impl( char* recv )
{
#line 1053 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"

 return !rmdir(recv); }

int file___NativeFileStat_is_reg___impl(  struct stat *  recv )
{
#line 1073 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"

 return S_ISREG(recv->st_mode); }

int file___NativeFileStat_is_dir___impl(  struct stat *  recv )
{
#line 1075 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"

 return S_ISDIR(recv->st_mode); }

int file___NativeFileStat_is_chr___impl(  struct stat *  recv )
{
#line 1077 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"

 return S_ISCHR(recv->st_mode); }

int file___NativeFileStat_is_blk___impl(  struct stat *  recv )
{
#line 1079 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"

 return S_ISBLK(recv->st_mode); }

int file___NativeFileStat_is_fifo___impl(  struct stat *  recv )
{
#line 1081 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"

 return S_ISFIFO(recv->st_mode); }

int file___NativeFileStat_is_lnk___impl(  struct stat *  recv )
{
#line 1083 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"

 return S_ISLNK(recv->st_mode); }

int file___NativeFileStat_is_sock___impl(  struct stat *  recv )
{
#line 1085 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"

 return S_ISSOCK(recv->st_mode); }

long file___NativeFile_fileno___impl(  FILE*  recv )
{
#line 1094 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"

 return fileno(recv); }

nullable_Int file___Sys_intern_poll___impl( Sys recv, Array_of_Int in_fds, Array_of_Int out_fds )
{
#line 1149 "/home/ouajdi/Desktop/nit/lib/standard/file.nit"


		int in_len, out_len, total_len;
		struct pollfd *c_fds;
		sigset_t sigmask;
		int i;
		int first_polled_fd = -1;
		int result;

		in_len = Array_of_Int_length( in_fds );
		out_len = Array_of_Int_length( out_fds );
		total_len = in_len + out_len;
		c_fds = malloc( sizeof(struct pollfd) * total_len );

		/* input streams */
		for ( i=0; i<in_len; i ++ ) {
			int fd;
			fd = Array_of_Int__index( in_fds, i );

			c_fds[i].fd = fd;
			c_fds[i].events = POLLIN;
		}

		/* output streams */
		for ( i=0; i<out_len; i ++ ) {
			int fd;
			fd = Array_of_Int__index( out_fds, i );

			c_fds[i].fd = fd;
			c_fds[i].events = POLLOUT;
		}

		/* poll all fds, unlimited timeout */
		result = poll( c_fds, total_len, -1 );

		if ( result > 0 ) {
			/* analyse results */
			for ( i=0; i<total_len; i++ )
				if ( c_fds[i].revents & c_fds[i].events || /* awaited event */
					 c_fds[i].revents & POLLHUP ) /* closed */
				{
					first_polled_fd = c_fds[i].fd;
					break;
				}

			return Int_as_nullable( first_polled_fd );
		}
		else if ( result < 0 )
			fprintf( stderr, "Error in Stream:poll: %s\n", strerror( errno ) );

		return null_Int();
	}
