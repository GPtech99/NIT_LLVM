#include "standard__posix.sep.0.h"
/* method posix#Sys#uid= for (self: Sys, Int): Bool */
short int standard__posix___Sys___uid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_uid__assign___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#uid for (self: Sys): Int */
long standard__posix___Sys___uid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_uid___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#gid= for (self: Sys, Int): Bool */
short int standard__posix___Sys___gid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_gid__assign___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#gid for (self: Sys): Int */
long standard__posix___Sys___gid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_gid___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#euid= for (self: Sys, Int): Bool */
short int standard__posix___Sys___euid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_euid__assign___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#euid for (self: Sys): Int */
long standard__posix___Sys___euid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_euid___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#egid= for (self: Sys, Int): Bool */
short int standard__posix___Sys___egid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_egid__assign___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#egid for (self: Sys): Int */
long standard__posix___Sys___egid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_egid___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#from_uid for (self: Passwd, Int): Passwd */
val* standard___standard__Passwd___from_uid(val* self, long p0) {
val* var /* : Passwd */;
val* var1 /* : Passwd */;
val* var2 /* : Passwd */;
var1 = posix___new_Passwd_from_uid___impl(p0);
/*no boxing of Passwd: Passwd is not live! */
PRINT_ERROR("Dead code executed!\n"); fatal_exit(1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#from_name for (self: Passwd, String): Passwd */
val* standard___standard__Passwd___from_name(val* self, val* p0) {
val* var /* : Passwd */;
val* var1 /* : Passwd */;
val* var2 /* : Passwd */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = p0;
var1 = posix___new_Passwd_from_name___impl(var_for_c_0);
/*no boxing of Passwd: Passwd is not live! */
PRINT_ERROR("Dead code executed!\n"); fatal_exit(1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::Text::to_cstring */
char* posix___String_to_cstring( struct nitni_instance * recv ) {
char* var /* : NativeString */;
{
var = ((char*(*)(val* self))(recv->value->class->vft[COLOR_standard__string__Text__to_cstring]))(recv->value); /* to_cstring on <recv->value:String>*/
}
return var;
}
/* method posix#Passwd#name for (self: Passwd): String */
val* standard___standard__Passwd___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Passwd for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Passwd */
struct nitni_instance* ret_var;
ret_var = posix___Passwd_name___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::Object::to_s */
struct nitni_instance * posix___NativeString_to_s( char* recv ) {
val* var /* : String */;
var = standard___standard__NativeString___Object__to_s(recv);
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* method posix#Passwd#passwd for (self: Passwd): String */
val* standard___standard__Passwd___passwd(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Passwd for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Passwd */
struct nitni_instance* ret_var;
ret_var = posix___Passwd_passwd___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#uid for (self: Passwd): Int */
long standard___standard__Passwd___uid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Passwd for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Passwd */
var1 = posix___Passwd_uid___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#gid for (self: Passwd): Int */
long standard___standard__Passwd___gid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Passwd for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Passwd */
var1 = posix___Passwd_gid___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#dir for (self: Passwd): String */
val* standard___standard__Passwd___dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Passwd for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Passwd */
struct nitni_instance* ret_var;
ret_var = posix___Passwd_dir___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#shell for (self: Passwd): String */
val* standard___standard__Passwd___shell(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Passwd for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Passwd */
struct nitni_instance* ret_var;
ret_var = posix___Passwd_shell___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#from_gid for (self: Group, Int): Group */
val* standard___standard__Group___from_gid(val* self, long p0) {
val* var /* : Group */;
val* var1 /* : Group */;
val* var2 /* : Group */;
var1 = posix___new_Group_from_gid___impl(p0);
/*no boxing of Group: Group is not live! */
PRINT_ERROR("Dead code executed!\n"); fatal_exit(1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#from_name for (self: Group, String): Group */
val* standard___standard__Group___from_name(val* self, val* p0) {
val* var /* : Group */;
val* var1 /* : Group */;
val* var2 /* : Group */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = p0;
var1 = posix___new_Group_from_name___impl(var_for_c_0);
/*no boxing of Group: Group is not live! */
PRINT_ERROR("Dead code executed!\n"); fatal_exit(1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#name for (self: Group): String */
val* standard___standard__Group___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Group for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Group */
struct nitni_instance* ret_var;
ret_var = posix___Group_name___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#passwd for (self: Group): String */
val* standard___standard__Group___passwd(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Group for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Group */
struct nitni_instance* ret_var;
ret_var = posix___Group_passwd___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#gid for (self: Group): Int */
long standard___standard__Group___gid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Group for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Group */
var1 = posix___Group_gid___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#mem for (self: Group): Array[String] */
val* standard___standard__Group___mem(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
void* var2 /* : Group for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Group */
struct nitni_instance* ret_var;
ret_var = posix___Group_mem___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::Object::init */
struct nitni_instance * posix___new_Array_of_String(  ) {
val* var /* : Array[String] */;
var = NEW_standard__Array(&type_standard__Array__standard__String);
val* recv /* var self: Array[String] */;
recv = var;
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[String]>*/
}
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* nitni callback for standard::SimpleCollection::add */
void posix___Array_of_String_add( struct nitni_instance * recv, struct nitni_instance * item ) {
{
((void(*)(val* self, val* p0))(recv->value->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(recv->value, item->value); /* add on <recv->value:Array[String]>*/
}
}
