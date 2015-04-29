/*
	Extern implementation of Nit module bitset
*/
#include <stdlib.h>
#include <stdio.h>
#include "standard__bitset._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif

long bitset___Int_setbit___impl( long recv, long index, long value )
{
#line 35 "/home/ouajdi/Desktop/nit/lib/standard/bitset.nit"


		assert(index >= 0 && index < 32);

		if(value == 1)
			return recv | (1 << index);
		else
			return recv & ~(1 << index);
	}

long bitset___Int_getbit___impl( long recv, long index )
{
#line 47 "/home/ouajdi/Desktop/nit/lib/standard/bitset.nit"


		assert(index >= 0 && index < 32);

		int op = 1 << index;
		
		if((recv & op) == 0)
			return 0;
		else
			return 1;
	}

long bitset___Int_number_bits___impl( long recv, long value )
{
#line 75 "/home/ouajdi/Desktop/nit/lib/standard/bitset.nit"


		assert(value == 0 || value == 1);

		long int bound = 1L << 31;
		int count = 0;
		long int i;

		if(value == 1)
		{
			for(i=bound; i>0; i/=2)
			{
				if(recv & i)
					count++;
			}
		}
		else
		{
			for(i=bound; i>0; i/=2)
			{
				if(!(recv & i))
					count++;
			}
		}
		return count;
	}

long bitset___Int_highest_bit___impl( long recv )
{
#line 105 "/home/ouajdi/Desktop/nit/lib/standard/bitset.nit"

 
		long int msb = 1L << 31;
		int pos = 31;
		
		while(msb > 0 && !(recv & msb))
		{
			msb /= 2;
			pos--;
		}
		
		return pos;
	}
