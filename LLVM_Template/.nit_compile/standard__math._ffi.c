/*
	Extern implementation of Nit module math
*/
#include <stdlib.h>
#include <stdio.h>
#include "standard__math._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif

long math___Int_sqrt___impl( long recv )
{
#line 49 "/home/ouajdi/Desktop/nit/lib/standard/math.nit"

 return sqrt(recv); }

double math___Float_abs___impl( double recv )
{
#line 160 "/home/ouajdi/Desktop/nit/lib/standard/math.nit"

 return fabs(recv); }

double math___Float_ceil___impl( double recv )
{
#line 188 "/home/ouajdi/Desktop/nit/lib/standard/math.nit"

 return ceil(recv); }

double math___Float_floor___impl( double recv )
{
#line 194 "/home/ouajdi/Desktop/nit/lib/standard/math.nit"

 return floor(recv); }
