/*
	Extern implementation of Nit module vm
*/
#ifndef NIT__VM_NIT_H
#define NIT__VM_NIT_H

#include "nit__vm._nitni.h"
#include "standard__math._ffi.h"
#include "standard__posix._ffi.h"
#include "standard__time._ffi.h"
#include "standard__file._ffi.h"
#include "standard__bitset._ffi.h"
#include "standard__re._ffi.h"
int vm___VirtualMachine_inter_is_subtype_ph___impl( VirtualMachine recv, long id, long mask, void* vtable );
int vm___VirtualMachine_inter_is_subtype_sst___impl( VirtualMachine recv, long id, long position, void* vtable );
void* vm___VirtualMachine_init_internal_attributes___impl( VirtualMachine recv, Instance init_instance, long size );
MMethodDef vm___VirtualMachine_method_dispatch_ph___impl( VirtualMachine recv, void* vtable, long mask, long id, long offset );
MMethodDef vm___VirtualMachine_method_dispatch_sst___impl( VirtualMachine recv, void* vtable, long absolute_offset );
Instance vm___VirtualMachine_read_attribute_ph___impl( VirtualMachine recv, void* instance, void* vtable, long mask, long id, long offset );
Instance vm___VirtualMachine_read_attribute_sst___impl( VirtualMachine recv, void* instance, long offset );
void vm___VirtualMachine_write_attribute_ph___impl( VirtualMachine recv, void* instance, void* vtable, long mask, long id, long offset, Instance value );
void vm___VirtualMachine_write_attribute_sst___impl( VirtualMachine recv, void* instance, long offset, Instance value );
void* vm___MemoryManager_intern_init_vtable___impl( MemoryManager recv, Array_of_Int ids, Array_of_Int nb_methods, Array_of_Int deltas, long mask );
void vm___MemoryManager_put_methods___impl( MemoryManager recv, void* vtable, long mask, long id, Array_of_MMethodDef methods );
#endif
