/*
	Extern implementation of Nit module time
*/
#include <stdlib.h>
#include <stdio.h>
#include "standard__time._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define NativeString_to_s_with_copy time___NativeString_to_s_with_copy
#define String_to_cstring time___String_to_cstring
#define NativeString_to_s time___NativeString_to_s

time_t time___new_TimeT___impl(  )
{
#line 37 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return time(NULL); }

time_t time___new_TimeT_from_i___impl( long i )
{
#line 40 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return i; }

void time___TimeT_update___impl( time_t recv )
{
#line 43 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 time(&recv); }

String time___TimeT_ctime___impl( time_t recv )
{
#line 46 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"


		return NativeString_to_s_with_copy( ctime(&recv) );
	}

double time___TimeT_difftime___impl( time_t recv, time_t start )
{
#line 51 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return difftime(recv, start); }

long time___TimeT_to_i___impl( time_t recv )
{
#line 56 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return (int)recv; }

struct tm * time___new_Tm_gmtime___impl(  )
{
#line 63 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"


		struct tm *tm;
		time_t t = time(NULL);
		tm = gmtime(&t);
		return tm;
	}

struct tm * time___new_Tm_gmtime_from_timet___impl( time_t t )
{
#line 71 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"


		struct tm *tm;
		tm = gmtime(&t);
		return tm;
	}

struct tm * time___new_Tm_localtime___impl(  )
{
#line 78 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"


		struct tm *tm;
		time_t t = time(NULL);
		tm = localtime(&t);
		return tm;
	}

struct tm * time___new_Tm_localtime_from_timet___impl( time_t t )
{
#line 86 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"


		struct tm *tm;
		tm = localtime(&t);
		return tm;
	}

time_t time___Tm_to_timet___impl( struct tm * recv )
{
#line 93 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return mktime(recv); }

long time___Tm_sec___impl( struct tm * recv )
{
#line 96 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return recv->tm_sec; }

long time___Tm_min___impl( struct tm * recv )
{
#line 99 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return recv->tm_min; }

long time___Tm_hour___impl( struct tm * recv )
{
#line 102 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return recv->tm_hour; }

long time___Tm_mday___impl( struct tm * recv )
{
#line 105 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return recv->tm_mday; }

long time___Tm_mon___impl( struct tm * recv )
{
#line 108 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return recv->tm_mon; }

long time___Tm_year___impl( struct tm * recv )
{
#line 111 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return recv->tm_year; }

long time___Tm_wday___impl( struct tm * recv )
{
#line 114 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return recv->tm_wday; }

long time___Tm_yday___impl( struct tm * recv )
{
#line 117 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return recv->tm_yday; }

int time___Tm_is_dst___impl( struct tm * recv )
{
#line 120 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"

 return recv->tm_isdst; }

String time___Tm_asctime___impl( struct tm * recv )
{
#line 123 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"


		return NativeString_to_s_with_copy( asctime(recv) );
	}

String time___Tm_strftime___impl( struct tm * recv, String format )
{
#line 129 "/home/ouajdi/Desktop/nit/lib/standard/time.nit"


		char* buf, *c_format;
		size_t res;

		buf = (char*)malloc(100);
		c_format = String_to_cstring(format);

		res = strftime(buf, 100, c_format, recv);
		String s = NativeString_to_s_with_copy(buf);
		free(buf);
		return s;
	}
