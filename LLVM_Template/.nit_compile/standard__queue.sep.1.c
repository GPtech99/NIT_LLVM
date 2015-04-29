#include "standard__queue.sep.0.h"
/* method queue#Queue#take for (self: Queue[nullable Object]): nullable Object */
val* standard___standard__Queue___take(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "take", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 42);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method queue#Queue#peek for (self: Queue[nullable Object]): nullable Object */
val* standard___standard__Queue___peek(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "peek", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 61);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method queue#Queue#first for (self: Queue[nullable Object]): nullable Object */
val* standard___standard__Queue___standard__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__queue__Queue__peek]))(self); /* peek on <self:Queue[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#Queue#take_all for (self: Queue[nullable Object]): Array[nullable Object] */
val* standard___standard__Queue___take_all(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
var1 = NEW_standard__Array((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__Queue___35dE]);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[nullable Object]>*/
}
var_res = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Queue[nullable Object]>*/
}
var3 = !var2;
if (var3){
{
var4 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__queue__Queue__take]))(self); /* take on <self:Queue[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var4); /* add on <var_res:Array[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#Sequence#as_lifo for (self: Sequence[nullable Object]): Queue[nullable Object] */
val* standard__queue___Sequence___as_lifo(val* self) {
val* var /* : Queue[nullable Object] */;
val* var1 /* : LifoQueue[nullable Object] */;
var1 = NEW_standard__queue__LifoQueue((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__queue__LifoQueue__standard__Sequence___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__queue__ProxyQueue__seq_61d]))(var1, self); /* seq= on <var1:LifoQueue[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:LifoQueue[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#Sequence#as_fifo for (self: Sequence[nullable Object]): Queue[nullable Object] */
val* standard__queue___Sequence___as_fifo(val* self) {
val* var /* : Queue[nullable Object] */;
val* var1 /* : FifoQueue[nullable Object] */;
var1 = NEW_standard__queue__FifoQueue((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__queue__FifoQueue__standard__Sequence___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__queue__ProxyQueue__seq_61d]))(var1, self); /* seq= on <var1:FifoQueue[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FifoQueue[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#ProxyQueue#seq for (self: ProxyQueue[nullable Object]): Sequence[nullable Object] */
val* standard__queue___standard__queue__ProxyQueue___seq(val* self) {
val* var /* : Sequence[nullable Object] */;
val* var1 /* : Sequence[nullable Object] */;
var1 = self->attrs[COLOR_standard__queue__ProxyQueue___seq].val; /* _seq on <self:ProxyQueue[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seq");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 141);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method queue#ProxyQueue#seq= for (self: ProxyQueue[nullable Object], Sequence[nullable Object]) */
void standard__queue___standard__queue__ProxyQueue___seq_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (seq) <p0:Sequence[nullable Object]> isa Sequence[E] */
/* <p0:Sequence[nullable Object]> isa Sequence[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Sequence__standard__queue__ProxyQueue___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 141);
fatal_exit(1);
}
self->attrs[COLOR_standard__queue__ProxyQueue___seq].val = p0; /* _seq on <self:ProxyQueue[nullable Object]> */
RET_LABEL:;
}
/* method queue#ProxyQueue#add for (self: ProxyQueue[nullable Object], nullable Object) */
void standard__queue___standard__queue__ProxyQueue___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : Sequence[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__queue__ProxyQueue___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 143);
fatal_exit(1);
}
var_e = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__ProxyQueue__seq]))(self); /* seq on <self:ProxyQueue[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var1, var_e); /* add on <var1:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method queue#ProxyQueue#length for (self: ProxyQueue[nullable Object]): Int */
long standard__queue___standard__queue__ProxyQueue___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Sequence[nullable Object] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__ProxyQueue__seq]))(self); /* seq on <self:ProxyQueue[nullable Object]>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var1); /* length on <var1:Sequence[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#ProxyQueue#is_empty for (self: ProxyQueue[nullable Object]): Bool */
short int standard__queue___standard__queue__ProxyQueue___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Sequence[nullable Object] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__ProxyQueue__seq]))(self); /* seq on <self:ProxyQueue[nullable Object]>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:Sequence[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#ProxyQueue#iterator for (self: ProxyQueue[nullable Object]): Iterator[nullable Object] */
val* standard__queue___standard__queue__ProxyQueue___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Sequence[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__ProxyQueue__seq]))(self); /* seq on <self:ProxyQueue[nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:Sequence[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#ProxyQueue#remove for (self: ProxyQueue[nullable Object], nullable Object) */
void standard__queue___standard__queue__ProxyQueue___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : Sequence[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__queue__ProxyQueue___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 147);
fatal_exit(1);
}
var_e = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__ProxyQueue__seq]))(self); /* seq on <self:ProxyQueue[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var1, var_e); /* remove on <var1:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method queue#ProxyQueue#init for (self: ProxyQueue[nullable Object]) */
void standard__queue___standard__queue__ProxyQueue___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__queue___standard__queue__ProxyQueue___standard__kernel__Object__init]))(self); /* init on <self:ProxyQueue[nullable Object]>*/
}
RET_LABEL:;
}
/* method queue#LifoQueue#take for (self: LifoQueue[nullable Object]): nullable Object */
val* standard__queue___standard__queue__LifoQueue___Queue__take(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Sequence[nullable Object] */;
val* var2 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__ProxyQueue__seq]))(self); /* seq on <self:LifoQueue[nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var1); /* pop on <var1:Sequence[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#LifoQueue#peek for (self: LifoQueue[nullable Object]): nullable Object */
val* standard__queue___standard__queue__LifoQueue___Queue__peek(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Sequence[nullable Object] */;
val* var2 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__ProxyQueue__seq]))(self); /* seq on <self:LifoQueue[nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var1); /* last on <var1:Sequence[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#FifoQueue#take for (self: FifoQueue[nullable Object]): nullable Object */
val* standard__queue___standard__queue__FifoQueue___Queue__take(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Sequence[nullable Object] */;
val* var2 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__ProxyQueue__seq]))(self); /* seq on <self:FifoQueue[nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Sequence__shift]))(var1); /* shift on <var1:Sequence[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#FifoQueue#peek for (self: FifoQueue[nullable Object]): nullable Object */
val* standard__queue___standard__queue__FifoQueue___Queue__peek(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Sequence[nullable Object] */;
val* var2 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__ProxyQueue__seq]))(self); /* seq on <self:FifoQueue[nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var1); /* first on <var1:Sequence[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#SimpleCollection#as_random for (self: SimpleCollection[nullable Object]): Queue[nullable Object] */
val* standard__queue___SimpleCollection___as_random(val* self) {
val* var /* : Queue[nullable Object] */;
val* var1 /* : RandQueue[nullable Object] */;
var1 = NEW_standard__queue__RandQueue((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__queue__RandQueue__standard__SimpleCollection___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__queue__RandQueue__seq_61d]))(var1, self); /* seq= on <var1:RandQueue[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:RandQueue[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#RandQueue#seq for (self: RandQueue[nullable Object]): SimpleCollection[nullable Object] */
val* standard__queue___standard__queue__RandQueue___seq(val* self) {
val* var /* : SimpleCollection[nullable Object] */;
val* var1 /* : SimpleCollection[nullable Object] */;
var1 = self->attrs[COLOR_standard__queue__RandQueue___seq].val; /* _seq on <self:RandQueue[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seq");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 179);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method queue#RandQueue#seq= for (self: RandQueue[nullable Object], SimpleCollection[nullable Object]) */
void standard__queue___standard__queue__RandQueue___seq_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (seq) <p0:SimpleCollection[nullable Object]> isa SimpleCollection[E] */
/* <p0:SimpleCollection[nullable Object]> isa SimpleCollection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__SimpleCollection__standard__queue__RandQueue___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SimpleCollection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 179);
fatal_exit(1);
}
self->attrs[COLOR_standard__queue__RandQueue___seq].val = p0; /* _seq on <self:RandQueue[nullable Object]> */
RET_LABEL:;
}
/* method queue#RandQueue#add for (self: RandQueue[nullable Object], nullable Object) */
void standard__queue___standard__queue__RandQueue___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : SimpleCollection[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__queue__RandQueue___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 180);
fatal_exit(1);
}
var_e = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__RandQueue__seq]))(self); /* seq on <self:RandQueue[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var1, var_e); /* add on <var1:SimpleCollection[nullable Object]>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__queue__RandQueue__peek_cached_61d]))(self, 0); /* peek_cached= on <self:RandQueue[nullable Object]>*/
}
RET_LABEL:;
}
/* method queue#RandQueue#take for (self: RandQueue[nullable Object]): nullable Object */
val* standard__queue___standard__queue__RandQueue___Queue__take(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
val* var2 /* : SimpleCollection[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__Queue__peek]))(self); /* peek on <self:RandQueue[nullable Object]>*/
}
var_res = var1;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__queue__RandQueue__peek_cached_61d]))(self, 0); /* peek_cached= on <self:RandQueue[nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__RandQueue__seq]))(self); /* seq on <self:RandQueue[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var2, var_res); /* remove on <var2:SimpleCollection[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#RandQueue#peek for (self: RandQueue[nullable Object]): nullable Object */
val* standard__queue___standard__queue__RandQueue___Queue__peek(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var3 /* : SimpleCollection[nullable Object] */;
val* var4 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__queue__RandQueue__peek_cached]))(self); /* peek_cached on <self:RandQueue[nullable Object]>*/
}
if (var1){
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__RandQueue__peek_cache]))(self); /* peek_cache on <self:RandQueue[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__RandQueue__seq]))(self); /* seq on <self:RandQueue[nullable Object]>*/
}
{
var4 = ((val*(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__math__Collection__rand]))(var3); /* rand on <var3:SimpleCollection[nullable Object]>*/
}
var_res = var4;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__queue__RandQueue__peek_cache_61d]))(self, var_res); /* peek_cache= on <self:RandQueue[nullable Object]>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__queue__RandQueue__peek_cached_61d]))(self, 1); /* peek_cached= on <self:RandQueue[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#RandQueue#peek_cached for (self: RandQueue[nullable Object]): Bool */
short int standard__queue___standard__queue__RandQueue___peek_cached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__queue__RandQueue___peek_cached].s; /* _peek_cached on <self:RandQueue[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method queue#RandQueue#peek_cached= for (self: RandQueue[nullable Object], Bool) */
void standard__queue___standard__queue__RandQueue___peek_cached_61d(val* self, short int p0) {
self->attrs[COLOR_standard__queue__RandQueue___peek_cached].s = p0; /* _peek_cached on <self:RandQueue[nullable Object]> */
RET_LABEL:;
}
/* method queue#RandQueue#peek_cache for (self: RandQueue[nullable Object]): nullable Object */
val* standard__queue___standard__queue__RandQueue___peek_cache(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__queue__RandQueue___peek_cache].val; /* _peek_cache on <self:RandQueue[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method queue#RandQueue#peek_cache= for (self: RandQueue[nullable Object], nullable Object) */
void standard__queue___standard__queue__RandQueue___peek_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (peek_cache) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__queue__RandQueue___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 201);
fatal_exit(1);
}
self->attrs[COLOR_standard__queue__RandQueue___peek_cache].val = p0; /* _peek_cache on <self:RandQueue[nullable Object]> */
RET_LABEL:;
}
/* method queue#RandQueue#length for (self: RandQueue[nullable Object]): Int */
long standard__queue___standard__queue__RandQueue___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : SimpleCollection[nullable Object] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__RandQueue__seq]))(self); /* seq on <self:RandQueue[nullable Object]>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var1); /* length on <var1:SimpleCollection[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#RandQueue#is_empty for (self: RandQueue[nullable Object]): Bool */
short int standard__queue___standard__queue__RandQueue___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : SimpleCollection[nullable Object] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__RandQueue__seq]))(self); /* seq on <self:RandQueue[nullable Object]>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:SimpleCollection[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#RandQueue#iterator for (self: RandQueue[nullable Object]): Iterator[nullable Object] */
val* standard__queue___standard__queue__RandQueue___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : SimpleCollection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__RandQueue__seq]))(self); /* seq on <self:RandQueue[nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:SimpleCollection[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#RandQueue#remove for (self: RandQueue[nullable Object], nullable Object) */
void standard__queue___standard__queue__RandQueue___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : SimpleCollection[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__queue__RandQueue___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 205);
fatal_exit(1);
}
var_e = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__RandQueue__seq]))(self); /* seq on <self:RandQueue[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var1, var_e); /* remove on <var1:SimpleCollection[nullable Object]>*/
}
RET_LABEL:;
}
/* method queue#RandQueue#init for (self: RandQueue[nullable Object]) */
void standard__queue___standard__queue__RandQueue___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__queue___standard__queue__RandQueue___standard__kernel__Object__init]))(self); /* init on <self:RandQueue[nullable Object]>*/
}
RET_LABEL:;
}
/* method queue#MinHeap#items for (self: MinHeap[Object]): Array[Object] */
val* standard___standard__MinHeap___items(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = self->attrs[COLOR_standard__queue__MinHeap___items].val; /* _items on <self:MinHeap[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 224);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method queue#MinHeap#items= for (self: MinHeap[Object], Array[Object]) */
void standard___standard__MinHeap___items_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (items) <p0:Array[Object]> isa Array[E] */
/* <p0:Array[Object]> isa Array[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Array__standard__MinHeap___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 224);
fatal_exit(1);
}
self->attrs[COLOR_standard__queue__MinHeap___items].val = p0; /* _items on <self:MinHeap[Object]> */
RET_LABEL:;
}
/* method queue#MinHeap#comparator for (self: MinHeap[Object]): Comparator */
val* standard___standard__MinHeap___comparator(val* self) {
val* var /* : Comparator */;
val* var1 /* : Comparator */;
var1 = self->attrs[COLOR_standard__queue__MinHeap___comparator].val; /* _comparator on <self:MinHeap[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _comparator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 226);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method queue#MinHeap#comparator= for (self: MinHeap[Object], Comparator) */
void standard___standard__MinHeap___comparator_61d(val* self, val* p0) {
self->attrs[COLOR_standard__queue__MinHeap___comparator].val = p0; /* _comparator on <self:MinHeap[Object]> */
RET_LABEL:;
}
/* method queue#MinHeap#default for (self: MinHeap[Object]) */
void standard___standard__MinHeap___default(val* self) {
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Sys */;
val* var2 /* : DefaultComparator */;
/* <self:MinHeap[Object]> isa MinHeap[Comparable] */
cltype = type_standard__MinHeap__standard__Comparable.color;
idtype = type_standard__MinHeap__standard__Comparable.id;
if(cltype >= self->type->table_size) {
var = 0;
} else {
var = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 234);
fatal_exit(1);
}
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__sorter__Sys__default_comparator]))(var1); /* default_comparator on <var1:Sys>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__queue__MinHeap__comparator_61d]))(self, var2); /* comparator= on <self:MinHeap[Object](MinHeap[Comparable])>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:MinHeap[Object](MinHeap[Comparable])>*/
}
RET_LABEL:;
}
/* method queue#MinHeap#is_empty for (self: MinHeap[Object]): Bool */
short int standard___standard__MinHeap___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Object] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:Array[Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#MinHeap#length for (self: MinHeap[Object]): Int */
long standard___standard__MinHeap___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var1); /* length on <var1:Array[Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#MinHeap#iterator for (self: MinHeap[Object]): Iterator[Object] */
val* standard___standard__MinHeap___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : Array[Object] */;
val* var2 /* : Iterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:Array[Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#MinHeap#peek for (self: MinHeap[Object]): Object */
val* standard___standard__MinHeap___Queue__peek(val* self) {
val* var /* : Object */;
val* var1 /* : Array[Object] */;
val* var2 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var1); /* first on <var1:Array[Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#MinHeap#add for (self: MinHeap[Object], Object) */
void standard___standard__MinHeap___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
long var9 /* : Int */;
long var_ei /* var ei: Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var_pi /* var pi: Int */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
val* var32 /* : nullable Object */;
val* var_p /* var p: Object */;
val* var33 /* : Comparator */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__MinHeap___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__queue, 243);
fatal_exit(1);
}
var_e = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var1); /* length on <var1:Array[Object]>*/
}
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var9 = var2 + 1l;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ei = var3;
for(;;) {
{
{ /* Inline kernel#Int#> (var_ei,1l) on <var_ei:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var16 = var_ei > 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline kernel#Int#/ (var_ei,2l) on <var_ei:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var19 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var23 = var_ei / 2l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_pi = var17;
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
{ /* Inline kernel#Int#- (var_pi,1l) on <var_pi:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var31 = var_pi - 1l;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
var32 = ((val*(*)(val* self, long p0))(var24->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var24, var25); /* [] on <var24:Array[Object]>*/
}
var_p = var32;
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__comparator]))(self); /* comparator on <self:MinHeap[Object]>*/
}
{
var34 = ((long(*)(val* self, val* p0, val* p1))((((long)var33&3)?class_info[((long)var33&3)]:var33->class)->vft[COLOR_standard__sorter__Comparator__compare]))(var33, var_p, var_e); /* compare on <var33:Comparator>*/
}
{
{ /* Inline kernel#Int#<= (var34,0l) on <var34:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var37 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var41 = var34 <= 0l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
goto BREAK_label;
} else {
}
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
{ /* Inline kernel#Int#- (var_ei,1l) on <var_ei:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var49 = var_ei - 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
((void(*)(val* self, long p0, val* p1))(var42->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var42, var43, var_p); /* []= on <var42:Array[Object]>*/
}
var_ei = var_pi;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var50 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
{ /* Inline kernel#Int#- (var_ei,1l) on <var_ei:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var57 = var_ei - 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
((void(*)(val* self, long p0, val* p1))(var50->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var50, var51, var_e); /* []= on <var50:Array[Object]>*/
}
RET_LABEL:;
}
/* method queue#MinHeap#take for (self: MinHeap[Object]): Object */
val* standard___standard__MinHeap___Queue__take(val* self) {
val* var /* : Object */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Array[Object] */;
val* var7 /* : nullable Object */;
val* var8 /* : Array[Object] */;
val* var9 /* : nullable Object */;
val* var_res /* var res: Object */;
long var_ei /* var ei: Int */;
val* var10 /* : Array[Object] */;
val* var11 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
long var_last /* var last: Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var_ci /* var ci: Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
val* var36 /* : nullable Object */;
val* var_c /* var c: Object */;
val* var37 /* : Comparator */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
short int var45 /* : Bool */;
short int var_upc /* var upc: Bool */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
long var_c2i /* var c2i: Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
short int var59 /* : Bool */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
val* var68 /* : nullable Object */;
val* var_c2 /* var c2: Object */;
val* var69 /* : Comparator */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var_ /* var : Bool */;
val* var79 /* : Comparator */;
long var80 /* : Int */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
val* var89 /* : Array[Object] */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:MinHeap[Object]>*/
}
{
{ /* Inline kernel#Int#< (var1,2l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var4 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var5 = var1 < 2l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var6); /* pop on <var6:Array[Object]>*/
}
var = var7;
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var8); /* first on <var8:Array[Object]>*/
}
var_res = var9;
var_ei = 1l;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var10); /* pop on <var10:Array[Object]>*/
}
var_e = var11;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
var13 = ((long(*)(val* self))(var12->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var12); /* length on <var12:Array[Object]>*/
}
var_last = var13;
for(;;) {
{
{ /* Inline kernel#Int#* (var_ei,2l) on <var_ei:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var16 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var20 = var_ei * 2l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_ci = var14;
{
{ /* Inline kernel#Int#> (var_ci,var_last) on <var_ci:Int> */
/* Covariant cast for argument 0 (i) <var_last:Int> isa OTHER */
/* <var_last:Int> isa OTHER */
var23 = 1; /* easy <var_last:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var27 = var_ci > var_last;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
goto BREAK_label;
} else {
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
{ /* Inline kernel#Int#- (var_ci,1l) on <var_ci:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var35 = var_ci - 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var36 = ((val*(*)(val* self, long p0))(var28->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var28, var29); /* [] on <var28:Array[Object]>*/
}
var_c = var36;
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__comparator]))(self); /* comparator on <self:MinHeap[Object]>*/
}
{
var38 = ((long(*)(val* self, val* p0, val* p1))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_standard__sorter__Comparator__compare]))(var37, var_e, var_c); /* compare on <var37:Comparator>*/
}
{
{ /* Inline kernel#Int#> (var38,0l) on <var38:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var41 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var45 = var38 > 0l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_upc = var39;
{
{ /* Inline kernel#Int#+ (var_ci,1l) on <var_ci:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var48 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var52 = var_ci + 1l;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var_c2i = var46;
{
{ /* Inline kernel#Int#<= (var_c2i,var_last) on <var_c2i:Int> */
/* Covariant cast for argument 0 (i) <var_last:Int> isa OTHER */
/* <var_last:Int> isa OTHER */
var55 = 1; /* easy <var_last:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var59 = var_c2i <= var_last;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
var60 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
{ /* Inline kernel#Int#- (var_c2i,1l) on <var_c2i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var67 = var_c2i - 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
var68 = ((val*(*)(val* self, long p0))(var60->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var60, var61); /* [] on <var60:Array[Object]>*/
}
var_c2 = var68;
{
var69 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__comparator]))(self); /* comparator on <self:MinHeap[Object]>*/
}
{
var70 = ((long(*)(val* self, val* p0, val* p1))((((long)var69&3)?class_info[((long)var69&3)]:var69->class)->vft[COLOR_standard__sorter__Comparator__compare]))(var69, var_e, var_c2); /* compare on <var69:Comparator>*/
}
{
{ /* Inline kernel#Int#<= (var70,0l) on <var70:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var73 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var77 = var70 <= 0l;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
goto BREAK_;
} else {
}
var_ = var_upc;
if (var_upc){
{
var79 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__comparator]))(self); /* comparator on <self:MinHeap[Object]>*/
}
{
var80 = ((long(*)(val* self, val* p0, val* p1))((((long)var79&3)?class_info[((long)var79&3)]:var79->class)->vft[COLOR_standard__sorter__Comparator__compare]))(var79, var_c2, var_c); /* compare on <var79:Comparator>*/
}
{
{ /* Inline kernel#Int#> (var80,0l) on <var80:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var83 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var87 = var80 > 0l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var78 = var81;
} else {
var78 = var_;
}
if (var78){
goto BREAK_;
} else {
}
var_upc = 1;
var_c = var_c2;
var_ci = var_c2i;
BREAK_: (void)0;
} else {
}
var88 = !var_upc;
if (var88){
goto BREAK_label;
} else {
}
{
var89 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
{ /* Inline kernel#Int#- (var_ei,1l) on <var_ei:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var92 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var96 = var_ei - 1l;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
((void(*)(val* self, long p0, val* p1))(var89->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var89, var90, var_c); /* []= on <var89:Array[Object]>*/
}
var_ei = var_ci;
}
BREAK_label: (void)0;
{
var97 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__items]))(self); /* items on <self:MinHeap[Object]>*/
}
{
{ /* Inline kernel#Int#- (var_ei,1l) on <var_ei:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var100 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var104 = var_ei - 1l;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
((void(*)(val* self, long p0, val* p1))(var97->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var97, var98, var_e); /* []= on <var97:Array[Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#MinHeap#assert_best for (self: MinHeap[Object]): Bool */
short int standard___standard__MinHeap___assert_best(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_b /* var b: Object */;
val* var_ /* var : MinHeap[Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_i /* var i: Object */;
val* var7 /* : Comparator */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var_13 /* var : MinHeap[Object] */;
val* var14 /* : Iterator[nullable Object] */;
val* var_15 /* var : Iterator[Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_j /* var j: Object */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:MinHeap[Object]>*/
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__Queue__peek]))(self); /* peek on <self:MinHeap[Object]>*/
}
var_b = var2;
var_ = self;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:MinHeap[Object]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[Object]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[Object]>*/
}
var_i = var6;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__queue__MinHeap__comparator]))(self); /* comparator on <self:MinHeap[Object]>*/
}
{
var8 = ((long(*)(val* self, val* p0, val* p1))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__sorter__Comparator__compare]))(var7, var_b, var_i); /* compare on <var7:Comparator>*/
}
{
{ /* Inline kernel#Int#> (var8,0l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var12 = var8 > 0l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var_13 = self;
{
var14 = ((val*(*)(val* self))(var_13->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_13); /* iterator on <var_13:MinHeap[Object]>*/
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:Iterator[Object]>*/
}
if (var16){
{
var17 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:Iterator[Object]>*/
}
var_j = var17;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:Iterator[Object]>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[Object]>*/
}
} else {
goto BREAK_label18;
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method queue#MinHeap#init for (self: MinHeap[Object]) */
void standard___standard__MinHeap___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__MinHeap___standard__kernel__Object__init]))(self); /* init on <self:MinHeap[Object]>*/
}
RET_LABEL:;
}
