/*
	Extern implementation of Nit module bitset
*/
#ifndef STANDARD__BITSET_NIT_H
#define STANDARD__BITSET_NIT_H

#include "standard__bitset._nitni.h"
#line 22 "/home/ouajdi/Desktop/nit/lib/standard/bitset.nit"


	#include <assert.h>
#include "standard__math._ffi.h"
long bitset___Int_setbit___impl( long recv, long index, long value );
long bitset___Int_getbit___impl( long recv, long index );
long bitset___Int_number_bits___impl( long recv, long value );
long bitset___Int_highest_bit___impl( long recv );
#endif
