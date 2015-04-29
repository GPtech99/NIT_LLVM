#include "standard__hash_collection.sep.0.h"
/* method hash_collection#Map#new for (self: Map[nullable Object, nullable Object]): Map[nullable Object, nullable Object] */
val* standard__hash_collection___Map___new(val* self) {
val* var /* : Map[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = NEW_standard__HashMap((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__HashMap__standard__Map___35dK__standard__Map___35dV]);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashMap[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#array for (self: HashCollection[nullable Object]): nullable NativeArray[nullable HashNode[nullable Object]] */
val* standard__hash_collection___standard__hash_collection__HashCollection___array(val* self) {
val* var /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
val* var1 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#array= for (self: HashCollection[nullable Object], nullable NativeArray[nullable HashNode[nullable Object]]) */
void standard__hash_collection___standard__hash_collection__HashCollection___array_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (array) <p0:nullable NativeArray[nullable HashNode[nullable Object]]> isa nullable NativeArray[nullable N] */
/* <p0:nullable NativeArray[nullable HashNode[nullable Object]]> isa nullable NativeArray[nullable N] */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__NativeArray__nullable__standard__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable NativeArray[nullable N]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 27);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___array].val = p0; /* _array on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#capacity for (self: HashCollection[nullable Object]): Int */
long standard__hash_collection___standard__hash_collection__HashCollection___capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#capacity= for (self: HashCollection[nullable Object], Int) */
void standard__hash_collection___standard__hash_collection__HashCollection___capacity_61d(val* self, long p0) {
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = p0; /* _capacity on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#the_length for (self: HashCollection[nullable Object]): Int */
long standard__hash_collection___standard__hash_collection__HashCollection___the_length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#the_length= for (self: HashCollection[nullable Object], Int) */
void standard__hash_collection___standard__hash_collection__HashCollection___the_length_61d(val* self, long p0) {
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = p0; /* _the_length on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#first_item for (self: HashCollection[nullable Object]): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashCollection___first_item(val* self) {
val* var /* : nullable HashNode[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#first_item= for (self: HashCollection[nullable Object], nullable HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashCollection___first_item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (first_item) <p0:nullable HashNode[nullable Object]> isa nullable N */
/* <p0:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 31);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = p0; /* _first_item on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#last_item for (self: HashCollection[nullable Object]): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashCollection___last_item(val* self) {
val* var /* : nullable HashNode[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#last_item= for (self: HashCollection[nullable Object], nullable HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashCollection___last_item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (last_item) <p0:nullable HashNode[nullable Object]> isa nullable N */
/* <p0:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 32);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = p0; /* _last_item on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#last_accessed_key for (self: HashCollection[nullable Object]): nullable Object */
val* standard__hash_collection___standard__hash_collection__HashCollection___last_accessed_key(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#last_accessed_key= for (self: HashCollection[nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashCollection___last_accessed_key_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (last_accessed_key) <p0:nullable Object> isa nullable K */
/* <p0:nullable Object> isa nullable K */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 34);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = p0; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#last_accessed_node for (self: HashCollection[nullable Object]): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashCollection___last_accessed_node(val* self) {
val* var /* : nullable HashNode[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#last_accessed_node= for (self: HashCollection[nullable Object], nullable HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashCollection___last_accessed_node_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (last_accessed_node) <p0:nullable HashNode[nullable Object]> isa nullable N */
/* <p0:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 37);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val = p0; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#index_at for (self: HashCollection[nullable Object], nullable Object): Int */
long standard__hash_collection___standard__hash_collection__HashCollection___index_at(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var_i /* var i: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var18 /* : Int */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 40);
fatal_exit(1);
}
var_k = p0;
if (var_k == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_k, ((val*)NULL)); /* == on <var_k:nullable Object>*/
var2 = var3;
}
if (var2){
var = 0l;
goto RET_LABEL;
} else {
}
{
var4 = ((long(*)(val* self))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_standard__kernel__Object__hash]))(var_k); /* hash on <var_k:nullable Object(Object)>*/
}
var5 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#% (var4,var5) on <var4:Int> */
var8 = var4 % var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_i = var6;
{
{ /* Inline kernel#Int#< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var15 = var_i < 0l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var18 = -var_i;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_i = var16;
} else {
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at for (self: HashCollection[nullable Object], nullable Object): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashCollection___node_at(val* self, val* p0) {
val* var /* : nullable HashNode[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable HashNode[nullable Object] */;
long var8 /* : Int */;
val* var9 /* : nullable HashNode[nullable Object] */;
val* var_res /* var res: nullable HashNode[nullable Object] */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 50);
fatal_exit(1);
}
var_k = p0;
var2 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
if (var_k == NULL) {
var3 = (var2 == NULL);
} else {
{ /* Inline kernel#Object#is_same_instance (var_k,var2) on <var_k:nullable Object> */
var6 = var_k == var2 || (var_k != NULL && var2 != NULL && (!((long)var_k&3)) && (!((long)var2&3)) && var_k->class == var2->class && ((var_k->class->box_kind == 4 && ((struct instance_standard__Float*)var_k)->value == ((struct instance_standard__Float*)var2)->value) || (var_k->class->box_kind == 5 && ((struct instance_standard__NativeString*)var_k)->value == ((struct instance_standard__NativeString*)var2)->value) || (var_k->class->box_kind == 6 && ((struct instance_standard__Pointer*)var_k)->value == ((struct instance_standard__Pointer*)var2)->value)));
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var7 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var = var7;
goto RET_LABEL;
} else {
}
{
var8 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__index_at]))(self, var_k); /* index_at on <self:HashCollection[nullable Object]>*/
}
{
var9 = ((val*(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_standard__hash_collection__HashCollection__node_at_idx]))(self, var8, var_k); /* node_at_idx on <self:HashCollection[nullable Object]>*/
}
var_res = var9;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var_k; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val = var_res; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at_idx for (self: HashCollection[nullable Object], Int, nullable Object): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx(val* self, long p0, val* p1) {
val* var /* : nullable HashNode[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var_i /* var i: Int */;
val* var_k /* var k: nullable Object */;
val* var2 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
val* var3 /* : nullable Object */;
val* var5 /* : Object */;
val* var_c /* var c: nullable HashNode[nullable Object] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_ck /* var ck: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable HashNode[nullable Object] */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const struct type* type_struct20;
const char* var_class_name21;
/* Covariant cast for argument 1 (k) <p1:nullable Object> isa K */
/* <p1:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 62);
fatal_exit(1);
}
var_i = p0;
var_k = p1;
var2 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 65);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[] (var2,var_i) on <var2:nullable NativeArray[nullable HashNode[nullable Object]]> */
var5 = ((struct instance_standard__NativeArray*)var2)->values[var_i];
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_c = var3;
for(;;) {
if (var_c == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_c, ((val*)NULL)); /* != on <var_c:nullable HashNode[nullable Object]>*/
var6 = var7;
}
if (var6){
var8 = var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_ck = var8;
if (var_ck == NULL) {
var10 = (var_k == NULL);
} else {
{ /* Inline kernel#Object#is_same_instance (var_ck,var_k) on <var_ck:nullable Object> */
var13 = var_ck == var_k || (var_ck != NULL && var_k != NULL && (!((long)var_ck&3)) && (!((long)var_k&3)) && var_ck->class == var_k->class && ((var_ck->class->box_kind == 4 && ((struct instance_standard__Float*)var_ck)->value == ((struct instance_standard__Float*)var_k)->value) || (var_ck->class->box_kind == 5 && ((struct instance_standard__NativeString*)var_ck)->value == ((struct instance_standard__NativeString*)var_k)->value) || (var_ck->class->box_kind == 6 && ((struct instance_standard__Pointer*)var_ck)->value == ((struct instance_standard__Pointer*)var_k)->value)));
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
var_ = var10;
if (var10){
var9 = var_;
} else {
if (var_ck == NULL) {
var14 = (var_k == NULL);
} else {
var15 = ((short int(*)(val* self, val* p0))((((long)var_ck&3)?class_info[((long)var_ck&3)]:var_ck->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ck, var_k); /* == on <var_ck:nullable Object>*/
var14 = var15;
}
var9 = var14;
}
if (var9){
goto BREAK_label;
} else {
}
var16 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_c = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_c:nullable HashNode[nullable Object]> isa nullable N */
type_struct20 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype18 = type_struct20->color;
idtype19 = type_struct20->id;
if(var_c == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_c->type->table_size) {
var17 = 0;
} else {
var17 = var_c->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
var_class_name21 = var_c == NULL ? "null" : var_c->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 73);
fatal_exit(1);
}
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#store for (self: HashCollection[nullable Object], Int, HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashCollection___store(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_node /* var node: HashNode[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable HashNode[nullable Object] */;
val* var5 /* : nullable HashNode[nullable Object] */;
val* var6 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
val* var7 /* : nullable Object */;
val* var9 /* : Object */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
val* var10 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const struct type* type_struct15;
const char* var_class_name16;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
long var20 /* : Int */;
long var_l /* var l: Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
short int var56 /* : Bool */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
/* Covariant cast for argument 1 (node) <p1:HashNode[nullable Object]> isa N */
/* <p1:HashNode[nullable Object]> isa N */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 76);
fatal_exit(1);
}
var_index = p0;
var_node = p1;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[nullable Object]> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable HashNode[nullable Object]>*/
var2 = var3;
}
if (var2){
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var_node; /* _first_item on <self:HashCollection[nullable Object]> */
} else {
var4 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 83);
fatal_exit(1);
}
var4->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = var_node; /* _next_item on <var4:nullable HashNode[nullable Object]> */
}
var5 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[nullable Object]> */
var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val = var5; /* _prev_item on <var_node:HashNode[nullable Object]> */
var_node->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = ((val*)NULL); /* _next_item on <var_node:HashNode[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var_node; /* _last_item on <self:HashCollection[nullable Object]> */
var6 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 90);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[] (var6,var_index) on <var6:nullable NativeArray[nullable HashNode[nullable Object]]> */
var9 = ((struct instance_standard__NativeArray*)var6)->values[var_index];
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_next = var7;
var10 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 91);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[]= (var10,var_index,var_node) on <var10:nullable NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_node:HashNode[nullable Object]> isa E */
/* <var_node:HashNode[nullable Object]> isa E */
type_struct15 = var10->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype13 = type_struct15->color;
idtype14 = type_struct15->id;
if(cltype13 >= var_node->type->table_size) {
var12 = 0;
} else {
var12 = var_node->type->type_table[cltype13] == idtype14;
}
if (unlikely(!var12)) {
var_class_name16 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 960);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var10)->values[var_index]=var_node;
RET_LABEL11:(void)0;
}
}
var_node->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:HashNode[nullable Object]> */
if (var_next == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_next, ((val*)NULL)); /* != on <var_next:nullable HashNode[nullable Object]>*/
var17 = var18;
}
if (var17){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
var19 = var_node->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_node:HashNode[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var19; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val = var_node; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var20 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
var_l = var20;
{
{ /* Inline kernel#Int#+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var27 = var_l + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var21; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#+ (var_l,5l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var30 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var34 = var_l + 5l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#* (var28,2l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var37 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var41 = var28 * 2l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var35,1l) on <var35:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var44 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var48 = var35 + 1l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_l = var42;
var49 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#>= (var_l,var49) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var49:Int> isa OTHER */
/* <var49:Int> isa OTHER */
var52 = 1; /* easy <var49:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var56 = var_l >= var49;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
{
{ /* Inline kernel#Int#* (var_l,3l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var59 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var63 = var_l * 3l;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var57,2l) on <var57:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var66 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var70 = var57 / 2l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var64,1l) on <var64:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var73 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var77 = var64 + 1l;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__enlarge]))(self, var71); /* enlarge on <self:HashCollection[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method hash_collection#HashCollection#remove_node for (self: HashCollection[nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashCollection___remove_node(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_node /* var node: nullable HashNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable HashNode[nullable Object] */;
val* var_prev /* var prev: nullable HashNode[nullable Object] */;
val* var6 /* : nullable HashNode[nullable Object] */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const struct type* type_struct19;
const char* var_class_name20;
val* var_ /* var : HashCollection[nullable Object] */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
val* var29 /* : nullable HashNode[nullable Object] */;
val* var30 /* : nullable HashNode[nullable Object] */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const struct type* type_struct38;
short int is_nullable39;
const char* var_class_name40;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 111);
fatal_exit(1);
}
var_k = p0;
{
var1 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__index_at]))(self, var_k); /* index_at on <self:HashCollection[nullable Object]>*/
}
var_i = var1;
{
var2 = ((val*(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_standard__hash_collection__HashCollection__node_at_idx]))(self, var_i, var_k); /* node_at_idx on <self:HashCollection[nullable Object]>*/
}
var_node = var2;
if (var_node == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, ((val*)NULL)); /* == on <var_node:nullable HashNode[nullable Object]>*/
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
var5 = var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val; /* _prev_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_prev = var5;
var6 = var_node->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_next = var6;
if (var_prev == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_prev->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_prev, ((val*)NULL)); /* != on <var_prev:nullable HashNode[nullable Object]>*/
var7 = var8;
}
if (var7){
var_prev->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = var_next; /* _next_item on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
/* <var_next:nullable HashNode[nullable Object]> isa nullable N */
type_struct12 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype10 = type_struct12->color;
idtype11 = type_struct12->id;
if(var_next == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_next->type->table_size) {
var9 = 0;
} else {
var9 = var_next->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
var_class_name13 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 124);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var_next; /* _first_item on <self:HashCollection[nullable Object]> */
}
if (var_next == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_next, ((val*)NULL)); /* != on <var_next:nullable HashNode[nullable Object]>*/
var14 = var15;
}
if (var14){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val = var_prev; /* _prev_item on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
/* <var_prev:nullable HashNode[nullable Object]> isa nullable N */
type_struct19 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype17 = type_struct19->color;
idtype18 = type_struct19->id;
if(var_prev == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_prev->type->table_size) {
var16 = 0;
} else {
var16 = var_prev->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
var_class_name20 = var_prev == NULL ? "null" : var_prev->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 129);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var_prev; /* _last_item on <self:HashCollection[nullable Object]> */
}
var_ = self;
var21 = var_->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <var_:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#- (var21,1l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var28 = var21 - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var22; /* _the_length on <var_:HashCollection[nullable Object]> */
var29 = var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val; /* _prev_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_prev = var29;
var30 = var_node->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_next = var30;
if (var_prev == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_prev->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_prev, ((val*)NULL)); /* != on <var_prev:nullable HashNode[nullable Object]>*/
var31 = var32;
}
if (var31){
var_prev->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
var33 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var33 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 139);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[]= (var33,var_i,var_next) on <var33:nullable NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_next:nullable HashNode[nullable Object]> isa E */
/* <var_next:nullable HashNode[nullable Object]> isa E */
type_struct38 = var33->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype36 = type_struct38->color;
idtype37 = type_struct38->id;
is_nullable39 = type_struct38->is_nullable;
if(var_next == NULL) {
var35 = is_nullable39;
} else {
if(cltype36 >= var_next->type->table_size) {
var35 = 0;
} else {
var35 = var_next->type->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
var_class_name40 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 960);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var33)->values[var_i]=var_next;
RET_LABEL34:(void)0;
}
}
}
if (var_next == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
var42 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_next, ((val*)NULL)); /* != on <var_next:nullable HashNode[nullable Object]>*/
var41 = var42;
}
if (var41){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var_prev; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = ((val*)NULL); /* _last_accessed_key on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#raz for (self: HashCollection[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashCollection___raz(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var_i /* var i: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
val* var12 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name17;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
var = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var4 = var - 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var11 = var_i >= 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var12 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 153);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[]= (var12,var_i,((val*)NULL)) on <var12:nullable NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <((val*)NULL):null> isa E */
/* <((val*)NULL):null> isa E */
type_struct = var12->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype15 = type_struct->color;
idtype16 = type_struct->id;
is_nullable = type_struct->is_nullable;
if(((val*)NULL) == NULL) {
var14 = is_nullable;
} else {
if(cltype15 >= ((val*)NULL)->type->table_size) {
var14 = 0;
} else {
var14 = ((val*)NULL)->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 960);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var12)->values[var_i]=((val*)NULL);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var24 = var_i - 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_i = var18;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = ((val*)NULL); /* _first_item on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = ((val*)NULL); /* _last_item on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = ((val*)NULL); /* _last_accessed_key on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#enlarge for (self: HashCollection[nullable Object], Int) */
void standard__hash_collection___standard__hash_collection__HashCollection___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_old_cap /* var old_cap: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
val* var29 /* : NativeArray[nullable HashNode[nullable Object]] */;
val* var_new_array /* var new_array: NativeArray[nullable HashNode[nullable Object]] */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var_i /* var i: Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name48;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
val* var64 /* : nullable HashNode[nullable Object] */;
val* var_node /* var node: nullable HashNode[nullable Object] */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
long var68 /* : Int */;
long var_index /* var index: Int */;
val* var69 /* : nullable Object */;
val* var71 /* : Object */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const struct type* type_struct76;
const char* var_class_name77;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : nullable HashNode[nullable Object] */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const struct type* type_struct84;
const char* var_class_name85;
var_cap = p0;
var = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
var_old_cap = var;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#+ (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var5 = var1 + 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_cap,var2) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var8 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var12 = var_cap < var2;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var13 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#+ (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var20 = var13 + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_cap = var14;
} else {
}
var21 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#<= (var_cap,var21) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var28 = var_cap <= var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
goto RET_LABEL;
} else {
}
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = var_cap; /* _capacity on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = ((val*)NULL); /* _last_accessed_key on <self:HashCollection[nullable Object]> */
var29 = NEW_standard__NativeArray(var_cap, self->type->resolution_table->types[COLOR_standard__NativeArray__nullable__standard__hash_collection__HashCollection__N]);
var_new_array = var29;
self->attrs[COLOR_standard__hash_collection__HashCollection___array].val = var_new_array; /* _array on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#- (var_cap,1l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var36 = var_cap - 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_i = var30;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var39 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var43 = var_i >= 0l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
{ /* Inline array#NativeArray#[]= (var_new_array,var_i,((val*)NULL)) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <((val*)NULL):null> isa E */
/* <((val*)NULL):null> isa E */
type_struct = var_new_array->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype46 = type_struct->color;
idtype47 = type_struct->id;
is_nullable = type_struct->is_nullable;
if(((val*)NULL) == NULL) {
var45 = is_nullable;
} else {
if(cltype46 >= ((val*)NULL)->type->table_size) {
var45 = 0;
} else {
var45 = ((val*)NULL)->type->type_table[cltype46] == idtype47;
}
}
if (unlikely(!var45)) {
var_class_name48 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 960);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var_new_array)->values[var_i]=((val*)NULL);
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var55 = var_i - 1l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_i = var49;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var56 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#<= (var56,var_old_cap) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var_old_cap:Int> isa OTHER */
/* <var_old_cap:Int> isa OTHER */
var59 = 1; /* easy <var_old_cap:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var63 = var56 <= var_old_cap;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
goto RET_LABEL;
} else {
}
var64 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[nullable Object]> */
var_node = var64;
for(;;) {
if (var_node == NULL) {
var65 = 0; /* is null */
} else {
var65 = 1; /* arg is null and recv is not */
}
if (0) {
var66 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable HashNode[nullable Object]>*/
var65 = var66;
}
if (var65){
var67 = var_node->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
{
var68 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__index_at]))(self, var67); /* index_at on <self:HashCollection[nullable Object]>*/
}
var_index = var68;
{
{ /* Inline array#NativeArray#[] (var_new_array,var_index) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
var71 = ((struct instance_standard__NativeArray*)var_new_array)->values[var_index];
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_next = var69;
{
{ /* Inline array#NativeArray#[]= (var_new_array,var_index,var_node) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> isa E */
/* <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> isa E */
type_struct76 = var_new_array->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype74 = type_struct76->color;
idtype75 = type_struct76->id;
if(cltype74 >= var_node->type->table_size) {
var73 = 0;
} else {
var73 = var_node->type->type_table[cltype74] == idtype75;
}
if (unlikely(!var73)) {
var_class_name77 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 960);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var_new_array)->values[var_index]=var_node;
RET_LABEL72:(void)0;
}
}
var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = ((val*)NULL); /* _prev_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_node->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
if (var_next == NULL) {
var78 = 0; /* is null */
} else {
var78 = 1; /* arg is null and recv is not */
}
if (0) {
var79 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_next, ((val*)NULL)); /* != on <var_next:nullable HashNode[nullable Object]>*/
var78 = var79;
}
if (var78){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
var80 = var_node->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
/* <var80:nullable HashNode[nullable Object]> isa nullable N */
type_struct84 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype82 = type_struct84->color;
idtype83 = type_struct84->id;
if(var80 == NULL) {
var81 = 1;
} else {
if(cltype82 >= var80->type->table_size) {
var81 = 0;
} else {
var81 = var80->type->type_table[cltype82] == idtype83;
}
}
if (unlikely(!var81)) {
var_class_name85 = var80 == NULL ? "null" : var80->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 195);
fatal_exit(1);
}
var_node = var80;
} else {
goto BREAK_label86;
}
}
BREAK_label86: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashNode#key for (self: HashNode[nullable Object]): nullable Object */
val* standard__hash_collection___standard__hash_collection__HashNode___key(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <self:HashNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashNode#key= for (self: HashNode[nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashNode___key_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashNode___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 201);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashNode___key].val = p0; /* _key on <self:HashNode[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#next_item for (self: HashNode[nullable Object]): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashNode___next_item(val* self) {
val* var /* : nullable HashNode[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <self:HashNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashNode#next_item= for (self: HashNode[nullable Object], nullable HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashNode___next_item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (next_item) <p0:nullable HashNode[nullable Object]> isa nullable N */
/* <p0:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashNode__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 203);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = p0; /* _next_item on <self:HashNode[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#prev_item for (self: HashNode[nullable Object]): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashNode___prev_item(val* self) {
val* var /* : nullable HashNode[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val; /* _prev_item on <self:HashNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashNode#prev_item= for (self: HashNode[nullable Object], nullable HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashNode___prev_item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (prev_item) <p0:nullable HashNode[nullable Object]> isa nullable N */
/* <p0:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashNode__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 204);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val = p0; /* _prev_item on <self:HashNode[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#prev_in_bucklet for (self: HashNode[nullable Object]): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashNode___prev_in_bucklet(val* self) {
val* var /* : nullable HashNode[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val; /* _prev_in_bucklet on <self:HashNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashNode#prev_in_bucklet= for (self: HashNode[nullable Object], nullable HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashNode___prev_in_bucklet_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (prev_in_bucklet) <p0:nullable HashNode[nullable Object]> isa nullable N */
/* <p0:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashNode__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 205);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = p0; /* _prev_in_bucklet on <self:HashNode[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#next_in_bucklet for (self: HashNode[nullable Object]): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashNode___next_in_bucklet(val* self) {
val* var /* : nullable HashNode[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <self:HashNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashNode#next_in_bucklet= for (self: HashNode[nullable Object], nullable HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashNode___next_in_bucklet_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (next_in_bucklet) <p0:nullable HashNode[nullable Object]> isa nullable N */
/* <p0:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashNode__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 206);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = p0; /* _next_in_bucklet on <self:HashNode[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#init for (self: HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init]))(self); /* init on <self:HashNode[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMap#[] for (self: HashMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 228);
fatal_exit(1);
}
var_key = p0;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__node_at]))(self, var_key); /* node_at on <self:HashMap[nullable Object, nullable Object]>*/
}
var_c = var2;
if (var_c == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, ((val*)NULL)); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object]>*/
var3 = var4;
}
if (var3){
{
var5 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__MapRead__provide_default_value]))(self, var_key); /* provide_default_value on <self:HashMap[nullable Object, nullable Object]>*/
}
var = var5;
goto RET_LABEL;
} else {
var6 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var = var6;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#get_or_null for (self: HashMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 238);
fatal_exit(1);
}
var_key = p0;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__node_at]))(self, var_key); /* node_at on <self:HashMap[nullable Object, nullable Object]>*/
}
var_c = var2;
if (var_c == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, ((val*)NULL)); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object]>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
var5 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var = var5;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#iterator for (self: HashMap[nullable Object, nullable Object]): HashMapIterator[nullable Object, nullable Object] */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__iterator(val* self) {
val* var /* : HashMapIterator[nullable Object, nullable Object] */;
val* var1 /* : HashMapIterator[nullable Object, nullable Object] */;
var1 = NEW_standard__HashMapIterator(self->type->resolution_table->types[COLOR_standard__HashMapIterator__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__hash_collection__HashMapIterator__map_61d]))(var1, self); /* map= on <var1:HashMapIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashMapIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#length for (self: HashMap[nullable Object, nullable Object]): Int */
long standard___standard__HashMap___standard__abstract_collection__MapRead__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#is_empty for (self: HashMap[nullable Object, nullable Object]): Bool */
short int standard___standard__HashMap___standard__abstract_collection__MapRead__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#[]= for (self: HashMap[nullable Object, nullable Object], nullable Object, nullable Object) */
void standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable5;
const char* var_class_name6;
val* var_key /* var key: nullable Object */;
val* var_v /* var v: nullable Object */;
long var7 /* : Int */;
long var_i /* var i: Int */;
val* var8 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : HashMapNode[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 254);
fatal_exit(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa V */
/* <p1:nullable Object> isa V */
type_struct4 = self->type->resolution_table->types[COLOR_standard__HashMap___35dV];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable5 = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable5;
} else {
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 254);
fatal_exit(1);
}
var_key = p0;
var_v = p1;
{
var7 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__index_at]))(self, var_key); /* index_at on <self:HashMap[nullable Object, nullable Object]>*/
}
var_i = var7;
{
var8 = ((val*(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_standard__hash_collection__HashCollection__node_at_idx]))(self, var_i, var_key); /* node_at_idx on <self:HashMap[nullable Object, nullable Object]>*/
}
var_c = var8;
if (var_c == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_c, ((val*)NULL)); /* != on <var_c:nullable HashMapNode[nullable Object, nullable Object]>*/
var9 = var10;
}
if (var9){
var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val = var_key; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val = var_v; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
} else {
var11 = NEW_standard__hash_collection__HashMapNode(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapNode__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__hash_collection__HashNode__key_61d]))(var11, var_key); /* key= on <var11:HashMapNode[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__hash_collection__HashMapNode__value_61d]))(var11, var_v); /* value= on <var11:HashMapNode[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:HashMapNode[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_standard__hash_collection__HashCollection__store]))(self, var_i, var11); /* store on <self:HashMap[nullable Object, nullable Object]>*/
}
}
RET_LABEL:;
}
/* method hash_collection#HashMap#clear for (self: HashMap[nullable Object, nullable Object]) */
void standard___standard__HashMap___standard__abstract_collection__Map__clear(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashCollection__raz]))(self); /* raz on <self:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMap#init for (self: HashMap[nullable Object, nullable Object]) */
void standard___standard__HashMap___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__HashMap___standard__kernel__Object__init]))(self); /* init on <self:HashMap[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashMap[nullable Object, nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__enlarge]))(self, 0l); /* enlarge on <self:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMap#keys for (self: HashMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__keys(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : RemovableCollection[nullable Object] */;
val* var3 /* : HashMapKeys[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMap___keys].val != NULL; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__hash_collection__HashMap___keys].val; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
fatal_exit(1);
}
} else {
var3 = NEW_standard__hash_collection__HashMapKeys(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__hash_collection__HashMapKeys__map_61d]))(var3, self); /* map= on <var3:HashMapKeys[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:HashMapKeys[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_standard__hash_collection__HashMap___keys].val = var3; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#keys= for (self: HashMap[nullable Object, nullable Object], RemovableCollection[nullable Object]) */
void standard___standard__HashMap___keys_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (keys) <p0:RemovableCollection[nullable Object]> isa RemovableCollection[K] */
/* <p0:RemovableCollection[nullable Object]> isa RemovableCollection[K] */
type_struct = self->type->resolution_table->types[COLOR_standard__RemovableCollection__standard__HashMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection[K]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashMap___keys].val = p0; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMap#values for (self: HashMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__values(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : RemovableCollection[nullable Object] */;
val* var3 /* : HashMapValues[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMap___values].val != NULL; /* _values on <self:HashMap[nullable Object, nullable Object]> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__hash_collection__HashMap___values].val; /* _values on <self:HashMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 276);
fatal_exit(1);
}
} else {
var3 = NEW_standard__hash_collection__HashMapValues(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__hash_collection__HashMapValues__map_61d]))(var3, self); /* map= on <var3:HashMapValues[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:HashMapValues[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_standard__hash_collection__HashMap___values].val = var3; /* _values on <self:HashMap[nullable Object, nullable Object]> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#values= for (self: HashMap[nullable Object, nullable Object], RemovableCollection[nullable Object]) */
void standard___standard__HashMap___values_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (values) <p0:RemovableCollection[nullable Object]> isa RemovableCollection[V] */
/* <p0:RemovableCollection[nullable Object]> isa RemovableCollection[V] */
type_struct = self->type->resolution_table->types[COLOR_standard__RemovableCollection__standard__HashMap___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection[V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 276);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashMap___values].val = p0; /* _values on <self:HashMap[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMap#has_key for (self: HashMap[nullable Object, nullable Object], nullable Object): Bool */
short int standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
val* var2 /* : nullable HashNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 277);
fatal_exit(1);
}
var_k = p0;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__node_at]))(self, var_k); /* node_at on <self:HashMap[nullable Object, nullable Object]>*/
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var2, ((val*)NULL)); /* != on <var2:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])>*/
var3 = var4;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#map for (self: HashMapKeys[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashMapKeys___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#map= for (self: HashMapKeys[nullable Object, nullable Object], HashMap[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
/* <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__standard__hash_collection__HashMapKeys___35dK__standard__hash_collection__HashMapKeys___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val = p0; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#count for (self: HashMapKeys[nullable Object, nullable Object], nullable Object): Int */
long standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 286);
fatal_exit(1);
}
var_k = p0;
{
var2 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__Collection__has]))(self, var_k); /* has on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
if (var2){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#first for (self: HashMapKeys[nullable Object, nullable Object]): nullable Object */
val* standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapKeys__map]))(self); /* map on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
var2 = var1->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 287);
fatal_exit(1);
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var2:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#has for (self: HashMapKeys[nullable Object, nullable Object], nullable Object): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : nullable HashNode[nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 288);
fatal_exit(1);
}
var_k = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapKeys__map]))(self); /* map on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__hash_collection__HashCollection__node_at]))(var2, var_k); /* node_at on <var2:HashMap[nullable Object, nullable Object]>*/
}
if (var3 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var3, ((val*)NULL)); /* != on <var3:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])>*/
var4 = var5;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#has_only for (self: HashMapKeys[nullable Object, nullable Object], nullable Object): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var_9 /* var : Bool */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 289);
fatal_exit(1);
}
var_k = p0;
{
var4 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__Collection__has]))(self, var_k); /* has on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
var_ = var4;
if (var4){
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
{
{ /* Inline kernel#Int#== (var5,1l) on <var5:Int> */
var8 = var5 == 1l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var3 = var6;
} else {
var3 = var_;
}
var_9 = var3;
if (var3){
var2 = var_9;
} else {
{
var10 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
var2 = var10;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#is_empty for (self: HashMapKeys[nullable Object, nullable Object]): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapKeys__map]))(self); /* map on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__is_empty]))(var1); /* is_empty on <var1:HashMap[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#length for (self: HashMapKeys[nullable Object, nullable Object]): Int */
long standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapKeys__map]))(self); /* map on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__length]))(var1); /* length on <var1:HashMap[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#iterator for (self: HashMapKeys[nullable Object, nullable Object]): Iterator[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapKeysIterator[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
var1 = NEW_standard__MapKeysIterator(self->type->resolution_table->types[COLOR_standard__MapKeysIterator__standard__hash_collection__HashMapKeys___35dK__standard__hash_collection__HashMapKeys___35dV]);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapKeys__map]))(self); /* map on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var2); /* iterator on <var2:HashMap[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapKeysIterator__original_iterator_61d]))(var1, var3); /* original_iterator= on <var1:MapKeysIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:MapKeysIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#clear for (self: HashMapKeys[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__RemovableCollection__clear(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapKeys__map]))(self); /* map on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__Map__clear]))(var); /* clear on <var:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#remove for (self: HashMapKeys[nullable Object, nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 297);
fatal_exit(1);
}
var_key = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapKeys__map]))(self); /* map on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__hash_collection__HashCollection__remove_node]))(var1, var_key); /* remove_node on <var1:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#remove_all for (self: HashMapKeys[nullable Object, nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__RemovableCollection__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 298);
fatal_exit(1);
}
var_key = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapKeys__map]))(self); /* map on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__hash_collection__HashCollection__remove_node]))(var1, var_key); /* remove_node on <var1:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#init for (self: HashMapKeys[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashMapKeys___standard__kernel__Object__init]))(self); /* init on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapValues#map for (self: HashMapValues[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashMapValues___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#map= for (self: HashMapValues[nullable Object, nullable Object], HashMap[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapValues___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
/* <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__standard__hash_collection__HashMapValues___35dK__standard__hash_collection__HashMapValues___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val = p0; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapValues#count for (self: HashMapValues[nullable Object, nullable Object], nullable Object): Int */
long standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_nb /* var nb: Int */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
val* var16 /* : nullable HashNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 307);
fatal_exit(1);
}
var_item = p0;
var_nb = 0l;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var2:HashMap[nullable Object, nullable Object]> */
var_c = var3;
for(;;) {
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_c, ((val*)NULL)); /* != on <var_c:nullable HashMapNode[nullable Object, nullable Object]>*/
var4 = var5;
}
if (var4){
var6 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var6 == NULL) {
var7 = (var_item == NULL);
} else {
var8 = ((short int(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var_item); /* == on <var6:nullable Object>*/
var7 = var8;
}
if (var7){
{
{ /* Inline kernel#Int#+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var15 = var_nb + 1l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_nb = var9;
} else {
}
var16 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#first for (self: HashMapValues[nullable Object, nullable Object]): nullable Object */
val* standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
var2 = var1->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 317);
fatal_exit(1);
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var2:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#has for (self: HashMapValues[nullable Object, nullable Object], nullable Object): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable HashNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 319);
fatal_exit(1);
}
var_item = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var2:HashMap[nullable Object, nullable Object]> */
var_c = var3;
for(;;) {
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_c, ((val*)NULL)); /* != on <var_c:nullable HashMapNode[nullable Object, nullable Object]>*/
var4 = var5;
}
if (var4){
var6 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var6 == NULL) {
var7 = (var_item == NULL);
} else {
var8 = ((short int(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var_item); /* == on <var6:nullable Object>*/
var7 = var8;
}
if (var7){
var = 1;
goto RET_LABEL;
} else {
}
var9 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var9;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#has_only for (self: HashMapValues[nullable Object, nullable Object], nullable Object): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable HashNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 329);
fatal_exit(1);
}
var_item = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var2:HashMap[nullable Object, nullable Object]> */
var_c = var3;
for(;;) {
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_c, ((val*)NULL)); /* != on <var_c:nullable HashMapNode[nullable Object, nullable Object]>*/
var4 = var5;
}
if (var4){
var6 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var6 == NULL) {
var7 = (var_item != NULL);
} else {
var8 = ((short int(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var6, var_item); /* != on <var6:nullable Object>*/
var7 = var8;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
var9 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var9;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#is_empty for (self: HashMapValues[nullable Object, nullable Object]): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__is_empty]))(var1); /* is_empty on <var1:HashMap[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#length for (self: HashMapValues[nullable Object, nullable Object]): Int */
long standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__length]))(var1); /* length on <var1:HashMap[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#iterator for (self: HashMapValues[nullable Object, nullable Object]): Iterator[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapValuesIterator[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
var1 = NEW_standard__MapValuesIterator(self->type->resolution_table->types[COLOR_standard__MapValuesIterator__standard__hash_collection__HashMapValues___35dK__standard__hash_collection__HashMapValues___35dV]);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var2); /* iterator on <var2:HashMap[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapValuesIterator__original_iterator_61d]))(var1, var3); /* original_iterator= on <var1:MapValuesIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:MapValuesIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#clear for (self: HashMapValues[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__RemovableCollection__clear(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__Map__clear]))(var); /* clear on <var:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapValues#remove for (self: HashMapValues[nullable Object, nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var_map /* var map: HashMap[nullable Object, nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable HashNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 346);
fatal_exit(1);
}
var_item = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
var_map = var1;
var2 = var_map->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var_map:HashMap[nullable Object, nullable Object]> */
var_c = var2;
for(;;) {
if (var_c == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_c, ((val*)NULL)); /* != on <var_c:nullable HashMapNode[nullable Object, nullable Object]>*/
var3 = var4;
}
if (var3){
var5 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var5 == NULL) {
var6 = (var_item == NULL);
} else {
var7 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_item); /* == on <var5:nullable Object>*/
var6 = var7;
}
if (var6){
var8 = var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
{
((void(*)(val* self, val* p0))(var_map->class->vft[COLOR_standard__hash_collection__HashCollection__remove_node]))(var_map, var8); /* remove_node on <var_map:HashMap[nullable Object, nullable Object]>*/
}
goto RET_LABEL;
} else {
}
var9 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var9;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashMapValues#remove_all for (self: HashMapValues[nullable Object, nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__RemovableCollection__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var_map /* var map: HashMap[nullable Object, nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable HashNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 359);
fatal_exit(1);
}
var_item = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapValues__map]))(self); /* map on <self:HashMapValues[nullable Object, nullable Object]>*/
}
var_map = var1;
var2 = var_map->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var_map:HashMap[nullable Object, nullable Object]> */
var_c = var2;
for(;;) {
if (var_c == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_c, ((val*)NULL)); /* != on <var_c:nullable HashMapNode[nullable Object, nullable Object]>*/
var3 = var4;
}
if (var3){
var5 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var5 == NULL) {
var6 = (var_item == NULL);
} else {
var7 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_item); /* == on <var5:nullable Object>*/
var6 = var7;
}
if (var6){
var8 = var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
{
((void(*)(val* self, val* p0))(var_map->class->vft[COLOR_standard__hash_collection__HashCollection__remove_node]))(var_map, var8); /* remove_node on <var_map:HashMap[nullable Object, nullable Object]>*/
}
} else {
}
var9 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var9;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashMapValues#init for (self: HashMapValues[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapValues___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashMapValues___standard__kernel__Object__init]))(self); /* init on <self:HashMapValues[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapNode#value for (self: HashMapNode[nullable Object, nullable Object]): nullable Object */
val* standard__hash_collection___standard__hash_collection__HashMapNode___value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <self:HashMapNode[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapNode#value= for (self: HashMapNode[nullable Object, nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashMapNode___value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapNode___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 375);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapNode___value].val = p0; /* _value on <self:HashMapNode[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapNode#init for (self: HashMapNode[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapNode___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashMapNode___standard__kernel__Object__init]))(self); /* init on <self:HashMapNode[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#is_ok for (self: HashMapIterator[nullable Object, nullable Object]): Bool */
short int standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable HashMapNode[nullable Object, nullable Object]>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#item for (self: HashMapIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__item(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(self); /* is_ok on <self:HashMapIterator[nullable Object, nullable Object]>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 385);
fatal_exit(1);
}
var2 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 386);
fatal_exit(1);
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var2:nullable HashMapNode[nullable Object, nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#key for (self: HashMapIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__key(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(self); /* is_ok on <self:HashMapIterator[nullable Object, nullable Object]>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 397);
fatal_exit(1);
}
var2 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 398);
fatal_exit(1);
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var2:nullable HashMapNode[nullable Object, nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#next for (self: HashMapIterator[nullable Object, nullable Object]) */
void standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(self); /* is_ok on <self:HashMapIterator[nullable Object, nullable Object]>*/
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 403);
fatal_exit(1);
}
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 404);
fatal_exit(1);
}
var2 = var1->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashMapNode[nullable Object, nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val = var2; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#map for (self: HashMapIterator[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* standard___standard__HashMapIterator___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 407);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#map= for (self: HashMapIterator[nullable Object, nullable Object], HashMap[nullable Object, nullable Object]) */
void standard___standard__HashMapIterator___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
/* <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__standard__HashMapIterator___35dK__standard__HashMapIterator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 407);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val = p0; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#node for (self: HashMapIterator[nullable Object, nullable Object]): nullable HashMapNode[nullable Object, nullable Object] */
val* standard___standard__HashMapIterator___node(val* self) {
val* var /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var1 /* : nullable HashMapNode[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#node= for (self: HashMapIterator[nullable Object, nullable Object], nullable HashMapNode[nullable Object, nullable Object]) */
void standard___standard__HashMapIterator___node_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (node) <p0:nullable HashMapNode[nullable Object, nullable Object]> isa nullable HashMapNode[K, V] */
/* <p0:nullable HashMapNode[nullable Object, nullable Object]> isa nullable HashMapNode[K, V] */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashMapNode__standard__HashMapIterator___35dK__standard__HashMapIterator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashMapNode[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 410);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val = p0; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#init for (self: HashMapIterator[nullable Object, nullable Object]) */
void standard___standard__HashMapIterator___standard__kernel__Object__init(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashMapIterator__map]))(self); /* map on <self:HashMapIterator[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val = var; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 416);
fatal_exit(1);
}
var2 = var1->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val = var2; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSet#length for (self: HashSet[nullable Object]): Int */
long standard___standard__HashSet___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#is_empty for (self: HashSet[nullable Object]): Bool */
short int standard___standard__HashSet___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#first for (self: HashSet[nullable Object]): nullable Object */
val* standard___standard__HashSet___standard__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : nullable HashNode[nullable Object] */;
val* var7 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
{
{ /* Inline kernel#Int#> (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var5 = var1 > 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 434);
fatal_exit(1);
}
var6 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashSet[nullable Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 435);
fatal_exit(1);
}
var7 = var6->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var6:nullable HashNode[nullable Object](nullable HashSetNode[nullable Object])> */
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#has for (self: HashSet[nullable Object], nullable Object): Bool */
short int standard___standard__HashSet___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var2 /* : nullable HashNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 438);
fatal_exit(1);
}
var_item = p0;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__node_at]))(self, var_item); /* node_at on <self:HashSet[nullable Object]>*/
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var2, ((val*)NULL)); /* != on <var2:nullable HashNode[nullable Object](nullable HashSetNode[nullable Object])>*/
var3 = var4;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#add for (self: HashSet[nullable Object], nullable Object) */
void standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashSetNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : HashSetNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 443);
fatal_exit(1);
}
var_item = p0;
{
var1 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__index_at]))(self, var_item); /* index_at on <self:HashSet[nullable Object]>*/
}
var_i = var1;
{
var2 = ((val*(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_standard__hash_collection__HashCollection__node_at_idx]))(self, var_i, var_item); /* node_at_idx on <self:HashSet[nullable Object]>*/
}
var_c = var2;
if (var_c == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_c, ((val*)NULL)); /* != on <var_c:nullable HashSetNode[nullable Object]>*/
var3 = var4;
}
if (var3){
var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val = var_item; /* _key on <var_c:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])> */
} else {
var5 = NEW_standard__hash_collection__HashSetNode(self->type->resolution_table->types[COLOR_standard__hash_collection__HashSetNode__standard__HashSet___35dE]);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__hash_collection__HashNode__key_61d]))(var5, var_item); /* key= on <var5:HashSetNode[nullable Object]>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:HashSetNode[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_standard__hash_collection__HashCollection__store]))(self, var_i, var5); /* store on <self:HashSet[nullable Object]>*/
}
}
RET_LABEL:;
}
/* method hash_collection#HashSet#remove for (self: HashSet[nullable Object], nullable Object) */
void standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 454);
fatal_exit(1);
}
var_item = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__remove_node]))(self, var_item); /* remove_node on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#clear for (self: HashSet[nullable Object]) */
void standard___standard__HashSet___standard__abstract_collection__RemovableCollection__clear(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection__HashCollection__raz]))(self); /* raz on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#iterator for (self: HashSet[nullable Object]): Iterator[nullable Object] */
val* standard___standard__HashSet___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : HashSetIterator[nullable Object] */;
var1 = NEW_standard__hash_collection__HashSetIterator(self->type->resolution_table->types[COLOR_standard__hash_collection__HashSetIterator__standard__HashSet___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__hash_collection__HashSetIterator__set_61d]))(var1, self); /* set= on <var1:HashSetIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSetIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#init for (self: HashSet[nullable Object]) */
void standard___standard__HashSet___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__HashSet___standard__kernel__Object__init]))(self); /* init on <self:HashSet[nullable Object]>*/
}
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashSet[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashSet[nullable Object]> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__hash_collection__HashCollection__enlarge]))(self, 0l); /* enlarge on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#from for (self: HashSet[nullable Object], Collection[nullable Object]) */
void standard___standard__HashSet___from(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__HashSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 467);
fatal_exit(1);
}
var_coll = p0;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:HashSet[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(self, var_coll); /* add_all on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#new_set for (self: HashSet[nullable Object]): Set[nullable Object] */
val* standard___standard__HashSet___standard__abstract_collection__Set__new_set(val* self) {
val* var /* : Set[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__standard__HashSet___35dE]);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#is_ok for (self: HashSetIterator[nullable Object]): Bool */
short int standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable HashSetNode[nullable Object]>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#item for (self: HashSetIterator[nullable Object]): nullable Object */
val* standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashSetNode[nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:HashSetIterator[nullable Object]>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 487);
fatal_exit(1);
}
var2 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 488);
fatal_exit(1);
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var2:nullable HashSetNode[nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#next for (self: HashSetIterator[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:HashSetIterator[nullable Object]>*/
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 493);
fatal_exit(1);
}
var1 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 494);
fatal_exit(1);
}
var2 = var1->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashSetNode[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val = var2; /* _node on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#set for (self: HashSetIterator[nullable Object]): HashSet[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashSetIterator___set(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___set].val; /* _set on <self:HashSetIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 497);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#set= for (self: HashSetIterator[nullable Object], HashSet[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashSetIterator___set_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (set) <p0:HashSet[nullable Object]> isa HashSet[E] */
/* <p0:HashSet[nullable Object]> isa HashSet[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet__standard__hash_collection__HashSetIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 497);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashSetIterator___set].val = p0; /* _set on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#node for (self: HashSetIterator[nullable Object]): nullable HashSetNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashSetIterator___node(val* self) {
val* var /* : nullable HashSetNode[nullable Object] */;
val* var1 /* : nullable HashSetNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#node= for (self: HashSetIterator[nullable Object], nullable HashSetNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashSetIterator___node_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (node) <p0:nullable HashSetNode[nullable Object]> isa nullable HashSetNode[E] */
/* <p0:nullable HashSetNode[nullable Object]> isa nullable HashSetNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashSetNode__standard__hash_collection__HashSetIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashSetNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 500);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val = p0; /* _node on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#init for (self: HashSetIterator[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashSetIterator___standard__kernel__Object__init(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
var = self->attrs[COLOR_standard__hash_collection__HashSetIterator___set].val; /* _set on <self:HashSetIterator[nullable Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 505);
fatal_exit(1);
}
var1 = var->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var:HashSet[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val = var1; /* _node on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
