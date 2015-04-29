/*
	Extern implementation of Nit module virtual_machine
*/
#include <stdlib.h>
#include <stdio.h>
#include "nit__virtual_machine._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define Array_of_Instance_length virtual_machine___Array_of_Instance_length
#define Array_of_Instance__index virtual_machine___Array_of_Instance__index
#define Array_of_Int_length virtual_machine___Array_of_Int_length
#define Array_of_Int__index virtual_machine___Array_of_Int__index
#define Array_of_MMethodDef_length virtual_machine___Array_of_MMethodDef_length
#define Array_of_MMethodDef__index virtual_machine___Array_of_MMethodDef__index

int virtual_machine___VirtualMachine_inter_is_subtype_ph___impl( VirtualMachine recv, long id, long mask, void* vtable )
{
#line 136 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"


		// hv is the position in hashtable
		int hv = id & mask;

		// Follow the pointer to somewhere in the vtable
		long unsigned int *offset = (long unsigned int*)(((long int *)vtable)[-hv]);

		// If the pointed value is corresponding to the identifier, the test is true, otherwise false
		return *offset == id;
	}

int virtual_machine___VirtualMachine_inter_is_subtype_sst___impl( VirtualMachine recv, long id, long position, void* vtable )
{
#line 151 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"


		// Direct access to the position given in parameter
		int tableid = (long unsigned int)((long int *)vtable)[position];

		return id == tableid;
	}

void* virtual_machine___VirtualMachine_init_internal_attributes___impl( VirtualMachine recv, Instance init_instance, long size )
{
#line 182 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"



		Instance* attributes = malloc(sizeof(Instance) * size);

		int i;
		for(i=0; i<size; i++)
			attributes[i] = init_instance;

		Instance_incr_ref(init_instance);
		return attributes;
	}

MMethodDef virtual_machine___VirtualMachine_method_dispatch_ph___impl( VirtualMachine recv, void* vtable, long mask, long id, long offset )
{
#line 227 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"


		// Perfect hashing position
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long int *)vtable)[-hv]);

		// pointer+2 is the position where methods are
		// Add the offset of property and get the method implementation
		MMethodDef propdef = (MMethodDef)*(pointer + 2 + offset);

		return propdef;
	}

MMethodDef virtual_machine___VirtualMachine_method_dispatch_sst___impl( VirtualMachine recv, void* vtable, long absolute_offset )
{
#line 242 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"


		// pointer+2 is the position where methods are
		// Add the offset of property and get the method implementation
		MMethodDef propdef = (MMethodDef)((long int *)vtable)[absolute_offset];

		return propdef;
	}

Instance virtual_machine___VirtualMachine_read_attribute_ph___impl( VirtualMachine recv, void* instance, void* vtable, long mask, long id, long offset )
{
#line 283 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"


		// Perfect hashing position
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long int *)vtable)[-hv]);

		// pointer+1 is the position where the delta of the class is
		int absolute_offset = *(pointer + 1);

		Instance res = ((Instance *)instance)[absolute_offset + offset];

		return res;
	}

Instance virtual_machine___VirtualMachine_read_attribute_sst___impl( VirtualMachine recv, void* instance, long offset )
{
#line 299 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"


		/* We can make a direct access to the attribute value
		   because this attribute is always at the same position
		   for the class of this receiver */
		Instance res = ((Instance *)instance)[offset];

		return res;
	}

void virtual_machine___VirtualMachine_write_attribute_ph___impl( VirtualMachine recv, void* instance, void* vtable, long mask, long id, long offset, Instance value )
{
#line 333 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"


		// Perfect hashing position
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long int *)vtable)[-hv]);

		// pointer+1 is the position where the delta of the class is
		int absolute_offset = *(pointer + 1);

		((Instance *)instance)[absolute_offset + offset] = value;
		Instance_incr_ref(value);
	}

void virtual_machine___VirtualMachine_write_attribute_sst___impl( VirtualMachine recv, void* instance, long offset, Instance value )
{
#line 349 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"


		// Direct access to the position with the absolute offset
		((Instance *)instance)[offset] = value;
		Instance_incr_ref(value);
	}

void* virtual_machine___MemoryManager_intern_init_vtable___impl( MemoryManager recv, Array_of_Int ids, Array_of_Int nb_methods, Array_of_Int deltas, long mask )
{
#line 747 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"



		// Allocate and fill current virtual table
		int i;
		int total_size = 0; // total size of this virtual table
		int nb_classes = Array_of_Int_length(nb_methods);
		for(i = 0; i<nb_classes; i++) {
			/* - One for each method of this class
			*  - One for the delta (offset of this group of attributes in objects)
			*  - One for the id
			*/
			total_size += Array_of_Int__index(nb_methods, i);
			total_size += 2;
		}

		// Add the size of the perfect hashtable (mask +1)
		// Add one because we start to fill the vtable at position 1 (0 is the init position)
		total_size += mask+2;
		long unsigned int* vtable = malloc(sizeof(long unsigned int)*total_size);

		// Initialisation to the first position of the virtual table (ie : Object)
		long unsigned int *init = vtable + mask + 2;
		for(i=0; i<total_size; i++)
			vtable[i] = (long unsigned int)init;

		// Set the virtual table to its position 0
		// ie: after the hashtable
		vtable = vtable + mask + 1;

		int current_size = 1;
		for(i = 0; i < nb_classes; i++) {
			/*
				vtable[hv] contains a pointer to the group of introduced methods
				For each superclasse we have in virtual table :
					(id | delta | introduced methods)
			*/
			int hv = mask & Array_of_Int__index(ids, i);

			vtable[current_size] = Array_of_Int__index(ids, i);
			vtable[current_size + 1] = Array_of_Int__index(deltas, i);
			vtable[-hv] = (long unsigned int)&(vtable[current_size]);

			current_size += 2;
			current_size += Array_of_Int__index(nb_methods, i);
		}

		return vtable;
	}

void virtual_machine___MemoryManager_put_methods___impl( MemoryManager recv, void* vtable, long mask, long id, Array_of_MMethodDef methods )
{
#line 802 "/home/ouajdi/Desktop/nit/src/vm/virtual_machine.nit"



		// Get the area to fill with methods by a sequence of perfect hashing
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long unsigned int *)vtable)[-hv]);

		// pointer+2 is the beginning of the area for methods implementation
		int length = Array_of_MMethodDef_length(methods);
		long unsigned int *area = (pointer + 2);
		int i;

		for(i=0; i<length; i++)
		{
			MMethodDef method = Array_of_MMethodDef__index(methods, i);
			area[i] = (long unsigned int)method;
			MMethodDef_incr_ref(method);
		}
	}
