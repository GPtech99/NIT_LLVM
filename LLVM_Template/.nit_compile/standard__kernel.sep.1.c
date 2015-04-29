#include "standard__kernel.sep.0.h"
/* method kernel#Object#object_id for (self: Object): Int */
long standard___standard__Object___object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#is_same_type for (self: Object, Object): Bool */
short int standard___standard__Object___is_same_type(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = (self == p0) || (self != NULL && p0 != NULL && (((long)self&3)?class_info[((long)self&3)]:self->class) == (((long)p0&3)?class_info[((long)p0&3)]:p0->class)); /* is_same_type_test */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#is_same_instance for (self: Object, nullable Object): Bool */
short int standard___standard__Object___is_same_instance(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self == p0 || (p0 != NULL && (!((long)self&3)) && (!((long)p0&3)) && self->class == p0->class && ((self->class->box_kind == 4 && ((struct instance_standard__Float*)self)->value == ((struct instance_standard__Float*)p0)->value) || (self->class->box_kind == 5 && ((struct instance_standard__NativeString*)self)->value == ((struct instance_standard__NativeString*)p0)->value) || (self->class->box_kind == 6 && ((struct instance_standard__Pointer*)self)->value == ((struct instance_standard__Pointer*)p0)->value)));
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#== for (self: Object, nullable Object): Bool */
short int standard___standard__Object____61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
var_other = p0;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other) on <self:Object> */
var3 = self == var_other || (var_other != NULL && (!((long)self&3)) && (!((long)var_other&3)) && self->class == var_other->class && ((self->class->box_kind == 4 && ((struct instance_standard__Float*)self)->value == ((struct instance_standard__Float*)var_other)->value) || (self->class->box_kind == 5 && ((struct instance_standard__NativeString*)self)->value == ((struct instance_standard__NativeString*)var_other)->value) || (self->class->box_kind == 6 && ((struct instance_standard__Pointer*)self)->value == ((struct instance_standard__Pointer*)var_other)->value)));
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#!= for (self: Object, nullable Object): Bool */
short int standard___standard__Object____33d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var_other = p0;
{
var1 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var_other); /* == on <self:Object>*/
}
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#output for (self: Object) */
void standard___standard__Object___output(val* self) {
long var /* : Int */;
{
{ /* Inline kernel#Char#output ('<') on <'<':Char> */
printf("%c", '<');
RET_LABEL1:(void)0;
}
}
{
var = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Object__object_id]))(self); /* object_id on <self:Object>*/
}
{
{ /* Inline kernel#Int#output (var) on <var:Int> */
printf("%ld\n", var);
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Char#output ('>') on <'>':Char> */
printf("%c", '>');
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method kernel#Object#output_class_name for (self: Object) */
void standard___standard__Object___output_class_name(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
printf("%s\n", var_class_name);
RET_LABEL:;
}
/* method kernel#Object#hash for (self: Object): Int */
long standard___standard__Object___hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Object__object_id]))(self); /* object_id on <self:Object>*/
}
{
{ /* Inline kernel#Int#/ (var1,8l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <8l:Int> isa OTHER */
/* <8l:Int> isa OTHER */
var4 = 1; /* easy <8l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var5 = var1 / 8l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#sys for (self: Object): Sys */
val* standard___standard__Object___sys(val* self) {
val* var /* : Sys */;
val* var1 /* : Sys */;
var1 = glob_sys;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#init for (self: Object) */
void standard___standard__Object___init(val* self) {
RET_LABEL:;
}
/* method kernel#Sys#main for (self: Sys) */
void standard___standard__Sys___main(val* self) {
RET_LABEL:;
}
/* method kernel#Sys#run for (self: Sys) */
void standard___standard__Sys___run(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Sys__main]))(self); /* main on <self:Sys>*/
}
RET_LABEL:;
}
/* method kernel#Sys#errno for (self: Sys): Int */
long standard___standard__Sys___errno(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = sys_errno(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Sys#exit for (self: Sys, Int) */
void standard___standard__Sys___exit(val* self, long p0) {
exit(p0);
RET_LABEL:;
}
/* method kernel#Comparable#< for (self: Comparable, Comparable): Bool */
short int standard___standard__Comparable____60d(val* self, val* p0) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "<", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 130);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Comparable#<= for (self: Comparable, Comparable): Bool */
short int standard___standard__Comparable____60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 133);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__kernel__Comparable___60d]))(var_other, self); /* < on <var_other:Comparable>*/
}
var3 = !var2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#>= for (self: Comparable, Comparable): Bool */
short int standard___standard__Comparable____62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 137);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Comparable___60d]))(self, var_other); /* < on <self:Comparable>*/
}
var3 = !var2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#> for (self: Comparable, Comparable): Bool */
short int standard___standard__Comparable____62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 141);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__kernel__Comparable___60d]))(var_other, self); /* < on <var_other:Comparable>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#<=> for (self: Comparable, Comparable): Int */
long standard___standard__Comparable____60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 144);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Comparable___60d]))(self, var_other); /* < on <self:Comparable>*/
}
if (var2){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var5 = -1l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
} else {
{
var6 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__kernel__Comparable___60d]))(var_other, self); /* < on <var_other:Comparable>*/
}
if (var6){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Comparable#is_between for (self: Comparable, Comparable, Comparable): Bool */
short int standard___standard__Comparable___is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_c /* var c: Comparable */;
val* var_d /* var d: Comparable */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 157);
fatal_exit(1);
}
/* Covariant cast for argument 1 (d) <p1:Comparable> isa OTHER */
/* <p1:Comparable> isa OTHER */
type_struct5 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 157);
fatal_exit(1);
}
var_c = p0;
var_d = p1;
{
var8 = ((short int(*)(val* self, val* p0))((((long)var_c&3)?class_info[((long)var_c&3)]:var_c->class)->vft[COLOR_standard__kernel__Comparable___60d_61d]))(var_c, self); /* <= on <var_c:Comparable>*/
}
var_ = var8;
if (var8){
{
var9 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Comparable___60d_61d]))(self, var_d); /* <= on <self:Comparable>*/
}
var7 = var9;
} else {
var7 = var_;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#max for (self: Comparable, Comparable): Comparable */
val* standard___standard__Comparable___max(val* self, val* p0) {
val* var /* : Comparable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
const char* var_class_name7;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 163);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Comparable___60d]))(self, var_other); /* < on <self:Comparable>*/
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
/* <self:Comparable> isa OTHER */
type_struct6 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
if(cltype4 >= (((long)self&3)?type_info[((long)self&3)]:self->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)self&3)?type_info[((long)self&3)]:self->type)->type_table[cltype4] == idtype5;
}
if (unlikely(!var3)) {
var_class_name7 = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 169);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Comparable#min for (self: Comparable, Comparable): Comparable */
val* standard___standard__Comparable___min(val* self, val* p0) {
val* var /* : Comparable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_c /* var c: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
const char* var_class_name7;
/* Covariant cast for argument 0 (c) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 173);
fatal_exit(1);
}
var_c = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)var_c&3)?class_info[((long)var_c&3)]:var_c->class)->vft[COLOR_standard__kernel__Comparable___60d]))(var_c, self); /* < on <var_c:Comparable>*/
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
/* <self:Comparable> isa OTHER */
type_struct6 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
if(cltype4 >= (((long)self&3)?type_info[((long)self&3)]:self->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)self&3)?type_info[((long)self&3)]:self->type)->type_table[cltype4] == idtype5;
}
if (unlikely(!var3)) {
var_class_name7 = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 179);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Discrete#successor for (self: Discrete, Int): Discrete */
val* standard___standard__Discrete___successor(val* self, long p0) {
val* var /* : Discrete */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "successor", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 190);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Discrete#predecessor for (self: Discrete, Int): Discrete */
val* standard___standard__Discrete___predecessor(val* self, long p0) {
val* var /* : Discrete */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "predecessor", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 193);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Discrete#distance for (self: Discrete, Discrete): Int */
long standard___standard__Discrete___distance(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_d /* var d: Discrete */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
const char* var_class_name7;
val* var_cursor /* var cursor: Discrete */;
val* var_stop /* var stop: Discrete */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct12;
const char* var_class_name13;
long var_nb /* var nb: Int */;
short int var14 /* : Bool */;
val* var15 /* : Discrete */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const struct type* type_struct19;
const char* var_class_name20;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
/* Covariant cast for argument 0 (d) <p0:Discrete> isa OTHER */
/* <p0:Discrete> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 196);
fatal_exit(1);
}
var_d = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Comparable___60d]))(self, var_d); /* < on <self:Discrete>*/
}
if (var2){
/* <self:Discrete> isa OTHER */
type_struct6 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
if(cltype4 >= (((long)self&3)?type_info[((long)self&3)]:self->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)self&3)?type_info[((long)self&3)]:self->type)->type_table[cltype4] == idtype5;
}
if (unlikely(!var3)) {
var_class_name7 = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 205);
fatal_exit(1);
}
var_cursor = self;
var_stop = var_d;
} else {
{
var8 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Comparable___62d]))(self, var_d); /* > on <self:Discrete>*/
}
if (var8){
var_cursor = var_d;
/* <self:Discrete> isa OTHER */
type_struct12 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype10 = type_struct12->color;
idtype11 = type_struct12->id;
if(cltype10 >= (((long)self&3)?type_info[((long)self&3)]:self->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)self&3)?type_info[((long)self&3)]:self->type)->type_table[cltype10] == idtype11;
}
if (unlikely(!var9)) {
var_class_name13 = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 209);
fatal_exit(1);
}
var_stop = self;
} else {
var = 0l;
goto RET_LABEL;
}
}
var_nb = 0l;
for(;;) {
{
var14 = ((short int(*)(val* self, val* p0))((((long)var_cursor&3)?class_info[((long)var_cursor&3)]:var_cursor->class)->vft[COLOR_standard__kernel__Comparable___60d]))(var_cursor, var_stop); /* < on <var_cursor:Discrete>*/
}
if (var14){
{
var15 = ((val*(*)(val* self, long p0))((((long)var_cursor&3)?class_info[((long)var_cursor&3)]:var_cursor->class)->vft[COLOR_standard__kernel__Discrete__successor]))(var_cursor, 1l); /* successor on <var_cursor:Discrete>*/
}
/* <var15:Discrete> isa OTHER */
type_struct19 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype17 = type_struct19->color;
idtype18 = type_struct19->id;
if(cltype17 >= (((long)var15&3)?type_info[((long)var15&3)]:var15->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var15&3)?type_info[((long)var15&3)]:var15->type)->type_table[cltype17] == idtype18;
}
if (unlikely(!var16)) {
var_class_name20 = var15 == NULL ? "null" : (((long)var15&3)?type_info[((long)var15&3)]:var15->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 216);
fatal_exit(1);
}
var_cursor = var15;
{
{ /* Inline kernel#Int#+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var27 = var_nb + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_nb = var21;
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
/* method kernel#Cloneable#clone for (self: Cloneable): Cloneable */
val* standard___standard__Cloneable___clone(val* self) {
val* var /* : Cloneable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clone", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 228);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Numeric#+ for (self: Numeric, Numeric): Numeric */
val* standard___standard__Numeric____43d(val* self, val* p0) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "+", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 248);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Numeric#- for (self: Numeric, Numeric): Numeric */
val* standard___standard__Numeric____45d(val* self, val* p0) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "-", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 251);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Numeric#unary - for (self: Numeric): Numeric */
val* standard___standard__Numeric___unary_32d_45d(val* self) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "unary -", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 254);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Numeric#* for (self: Numeric, Numeric): Numeric */
val* standard___standard__Numeric____42d(val* self, val* p0) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "*", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 257);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Numeric#/ for (self: Numeric, Numeric): Numeric */
val* standard___standard__Numeric____47d(val* self, val* p0) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "/", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 260);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Numeric#to_i for (self: Numeric): Int */
long standard___standard__Numeric___to_i(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_i", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 263);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Numeric#to_f for (self: Numeric): Float */
double standard___standard__Numeric___to_f(val* self) {
double var /* : Float */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_f", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 272);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Numeric#is_zero for (self: Numeric): Bool */
short int standard___standard__Numeric___is_zero(val* self) {
short int var /* : Bool */;
val* var1 /* : Numeric */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Numeric__zero]))(self); /* zero on <self:Numeric>*/
}
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var1); /* == on <self:Numeric>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Numeric#zero for (self: Numeric): Numeric */
val* standard___standard__Numeric___zero(val* self) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "zero", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 281);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Numeric#value_of for (self: Numeric, Numeric): Numeric */
val* standard___standard__Numeric___value_of(val* self, val* p0) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "value_of", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 284);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method kernel#Bool#object_id for (self: Bool): Int */
long standard___standard__Bool___Object__object_id(short int self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#object_id for (self: Object): Int */
long VIRTUAL_standard___standard__Bool___Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
long var4 /* : Int */;
{ /* Inline kernel#Bool#object_id (self) on <self:Object(Bool)> */
var3 = (short int)((long)(self)>>2);
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#== for (self: Bool, nullable Object): Bool */
short int standard___standard__Bool___Object___61d_61d(short int self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var2 = (short int)((long)(p0)>>2);
var1 = (p0 != NULL) && (var2 == self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_standard___standard__Bool___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Bool#== (self,p0) on <self:Object(Bool)> */
var3 = self == p0;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#!= for (self: Bool, nullable Object): Bool */
short int standard___standard__Bool___Object___33d_61d(short int self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var2 = (short int)((long)(p0)>>2);
var1 = (p0 != NULL) && (var2 == self);
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_standard___standard__Bool___Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Bool#!= (self,p0) on <self:Object(Bool)> */
var3 = self == p0;
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#output for (self: Bool) */
void standard___standard__Bool___Object__output(short int self) {
printf(self?"true\n":"false\n");
RET_LABEL:;
}
/* method kernel#Bool#output for (self: Object) */
void VIRTUAL_standard___standard__Bool___Object__output(val* self) {
short int var /* : Bool */;
{ /* Inline kernel#Bool#output (self) on <self:Object(Bool)> */
var = (short int)((long)(self)>>2);
printf(var?"true\n":"false\n");
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Bool#hash for (self: Bool): Int */
long standard___standard__Bool___Object__hash(short int self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = standard___standard__Bool___to_i(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#hash for (self: Object): Int */
long VIRTUAL_standard___standard__Bool___Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
var2 = (short int)((long)(self)>>2);
var1 = standard___standard__Bool___Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#to_i for (self: Bool): Int */
long standard___standard__Bool___to_i(short int self) {
long var /* : Int */;
if (self){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Float#object_id for (self: Float): Int */
long standard___standard__Float___Object__object_id(double self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#object_id for (self: Object): Int */
long VIRTUAL_standard___standard__Float___Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var3 /* : Float */;
long var4 /* : Int */;
{ /* Inline kernel#Float#object_id (self) on <self:Object(Float)> */
var3 = ((struct instance_standard__Float*)self)->value; /* autounbox from Object to Float */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#== for (self: Float, nullable Object): Bool */
short int standard___standard__Float___Object___61d_61d(double self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var2 /* : Float */;
var1 = (p0 != NULL) && (p0->class == &class_standard__Float);
if (var1) {
var2 = ((struct instance_standard__Float*)p0)->value; /* autounbox from nullable Object to Float */;
var1 = (var2 == self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_standard___standard__Float___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Float#== (self,p0) on <self:Object(Float)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_standard__Float*)self)->value == ((struct instance_standard__Float*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#!= for (self: Float, nullable Object): Bool */
short int standard___standard__Float___Object___33d_61d(double self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var2 /* : Float */;
short int var3 /* : Bool */;
var1 = (p0 != NULL) && (p0->class == &class_standard__Float);
if (var1) {
var2 = ((struct instance_standard__Float*)p0)->value; /* autounbox from nullable Object to Float */;
var1 = (var2 == self);
}
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_standard___standard__Float___Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Float#!= (self,p0) on <self:Object(Float)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_standard__Float*)self)->value == ((struct instance_standard__Float*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#output for (self: Float) */
void standard___standard__Float___Object__output(double self) {
printf("%f\n", self);
RET_LABEL:;
}
/* method kernel#Float#output for (self: Object) */
void VIRTUAL_standard___standard__Float___Object__output(val* self) {
double var /* : Float */;
{ /* Inline kernel#Float#output (self) on <self:Object(Float)> */
var = ((struct instance_standard__Float*)self)->value; /* autounbox from Object to Float */;
printf("%f\n", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Float#<= for (self: Float, Float): Bool */
short int standard___standard__Float___Comparable___60d_61d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 334);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Float___Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var6 /* : Bool */;
{ /* Inline kernel#Float#<= (self,p0) on <self:Comparable(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 334);
fatal_exit(1);
}
var4 = ((struct instance_standard__Float*)self)->value; /* autounbox from Comparable to Float */;
var5 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#< for (self: Float, Float): Bool */
short int standard___standard__Float___Comparable___60d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Float___Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var6 /* : Bool */;
{ /* Inline kernel#Float#< (self,p0) on <self:Comparable(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var4 = ((struct instance_standard__Float*)self)->value; /* autounbox from Comparable to Float */;
var5 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#>= for (self: Float, Float): Bool */
short int standard___standard__Float___Comparable___62d_61d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 336);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Float___Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var6 /* : Bool */;
{ /* Inline kernel#Float#>= (self,p0) on <self:Comparable(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 336);
fatal_exit(1);
}
var4 = ((struct instance_standard__Float*)self)->value; /* autounbox from Comparable to Float */;
var5 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#> for (self: Float, Float): Bool */
short int standard___standard__Float___Comparable___62d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 337);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Float___Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var6 /* : Bool */;
{ /* Inline kernel#Float#> (self,p0) on <self:Comparable(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 337);
fatal_exit(1);
}
var4 = ((struct instance_standard__Float*)self)->value; /* autounbox from Comparable to Float */;
var5 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#+ for (self: Float, Float): Float */
double standard___standard__Float___Numeric___43d(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var2 /* : Float */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 339);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Float___Numeric___43d(val* self, val* p0) {
val* var /* : Numeric */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Float#+ (self,p0) on <self:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 339);
fatal_exit(1);
}
var4 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var5 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_standard__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Float#unary - for (self: Float): Float */
double standard___standard__Float___Numeric__unary_32d_45d(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#unary - for (self: Numeric): Numeric */
val* VIRTUAL_standard___standard__Float___Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
val* var5 /* : Numeric */;
{ /* Inline kernel#Float#unary - (self) on <self:Numeric(Float)> */
var3 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_standard__Float(var1); /* autobox from Float to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Float#- for (self: Float, Float): Float */
double standard___standard__Float___Numeric___45d(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var2 /* : Float */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 341);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Float___Numeric___45d(val* self, val* p0) {
val* var /* : Numeric */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Float#- (self,p0) on <self:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 341);
fatal_exit(1);
}
var4 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var5 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_standard__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Float#* for (self: Float, Float): Float */
double standard___standard__Float___Numeric___42d(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var2 /* : Float */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 342);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Float___Numeric___42d(val* self, val* p0) {
val* var /* : Numeric */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Float#* (self,p0) on <self:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 342);
fatal_exit(1);
}
var4 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var5 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_standard__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Float#/ for (self: Float, Float): Float */
double standard___standard__Float___Numeric___47d(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var2 /* : Float */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 343);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Float___Numeric___47d(val* self, val* p0) {
val* var /* : Numeric */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Float#/ (self,p0) on <self:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 343);
fatal_exit(1);
}
var4 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var5 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_standard__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_i for (self: Float): Int */
long standard___standard__Float___Numeric__to_i(double self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_i for (self: Numeric): Int */
long VIRTUAL_standard___standard__Float___Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var3 /* : Float */;
long var4 /* : Int */;
{ /* Inline kernel#Float#to_i (self) on <self:Numeric(Float)> */
var3 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_f for (self: Float): Float */
double standard___standard__Float___Numeric__to_f(double self) {
double var /* : Float */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_f for (self: Numeric): Float */
double VIRTUAL_standard___standard__Float___Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = standard___standard__Float___Numeric__to_f(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#zero for (self: Float): Float */
double standard___standard__Float___Numeric__zero(double self) {
double var /* : Float */;
var = 0.0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#zero for (self: Numeric): Numeric */
val* VIRTUAL_standard___standard__Float___Numeric__zero(val* self) {
val* var /* : Numeric */;
double var1 /* : Float */;
double var2 /* : Float */;
val* var3 /* : Numeric */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = standard___standard__Float___Numeric__zero(var2);
var3 = BOX_standard__Float(var1); /* autobox from Float to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method kernel#Float#value_of for (self: Float, Numeric): Float */
double standard___standard__Float___Numeric__value_of(double self, val* p0) {
double var /* : Float */;
val* var_val /* var val: Numeric */;
double var1 /* : Float */;
var_val = p0;
{
var1 = ((double(*)(val* self))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_standard__kernel__Numeric__to_f]))(var_val); /* to_f on <var_val:Numeric>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#value_of for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Float___Numeric__value_of(val* self, val* p0) {
val* var /* : Numeric */;
double var1 /* : Float */;
double var2 /* : Float */;
val* var3 /* : Numeric */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = standard___standard__Float___Numeric__value_of(var2, p0);
var3 = BOX_standard__Float(var1); /* autobox from Float to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method kernel#Float#<=> for (self: Float, Float): Int */
long standard___standard__Float___Comparable___60d_61d_62d(double self, double p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var_other /* var other: Float */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 351);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel#Float#< (self,var_other) on <self:Float> */
/* Covariant cast for argument 0 (i) <var_other:Float> isa OTHER */
/* <var_other:Float> isa OTHER */
var4 = 1; /* easy <var_other:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Float#< (var_other,self) on <var_other:Float> */
/* Covariant cast for argument 0 (i) <self:Float> isa OTHER */
/* <self:Float> isa OTHER */
var14 = 1; /* easy <self:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Float#<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_standard___standard__Float___Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
double var2 /* : Float */;
double var3 /* : Float */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Comparable to Float */;
var3 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Comparable to Float */;
var1 = standard___standard__Float___Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#is_between for (self: Float, Float, Float): Bool */
short int standard___standard__Float___Comparable__is_between(double self, double p0, double p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
double var_c /* var c: Float */;
double var_d /* var d: Float */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 362);
fatal_exit(1);
}
/* Covariant cast for argument 1 (d) <p1:Float> isa OTHER */
/* <p1:Float> isa OTHER */
var2 = 1; /* easy <p1:Float> isa OTHER*/
if (unlikely(!var2)) {
var_class_name5 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 362);
fatal_exit(1);
}
var_c = p0;
var_d = p1;
{
{ /* Inline kernel#Float#< (self,var_c) on <self:Float> */
/* Covariant cast for argument 0 (i) <var_c:Float> isa OTHER */
/* <var_c:Float> isa OTHER */
var9 = 1; /* easy <var_c:Float> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var13 = self < var_c;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
var6 = var_;
} else {
{
{ /* Inline kernel#Float#< (var_d,self) on <var_d:Float> */
/* Covariant cast for argument 0 (i) <self:Float> isa OTHER */
/* <self:Float> isa OTHER */
var16 = 1; /* easy <self:Float> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var20 = var_d < self;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var6 = var14;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Float#is_between for (self: Comparable, Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Float___Comparable__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var2 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Comparable to Float */;
var3 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Comparable to Float */;
var4 = ((struct instance_standard__Float*)p1)->value; /* autounbox from Comparable to Float */;
var1 = standard___standard__Float___Comparable__is_between(var2, var3, var4);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#is_approx for (self: Float, Float, Float): Bool */
short int standard___standard__Float___is_approx(double self, double p0, double p1) {
short int var /* : Bool */;
double var_other /* var other: Float */;
double var_precision /* var precision: Float */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
double var6 /* : Float */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
double var12 /* : Float */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
double var20 /* : Float */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
double var26 /* : Float */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
var_other = p0;
var_precision = p1;
{
{ /* Inline kernel#Float#>= (var_precision,0.0) on <var_precision:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var3 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 336);
fatal_exit(1);
}
var4 = var_precision >= 0.0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 382);
fatal_exit(1);
}
{
{ /* Inline kernel#Float#+ (var_other,var_precision) on <var_other:Float> */
/* Covariant cast for argument 0 (i) <var_precision:Float> isa OTHER */
/* <var_precision:Float> isa OTHER */
var8 = 1; /* easy <var_precision:Float> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 339);
fatal_exit(1);
}
var12 = var_other + var_precision;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Float#<= (self,var6) on <self:Float> */
/* Covariant cast for argument 0 (i) <var6:Float> isa OTHER */
/* <var6:Float> isa OTHER */
var15 = 1; /* easy <var6:Float> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 334);
fatal_exit(1);
}
var19 = self <= var6;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_ = var13;
if (var13){
{
{ /* Inline kernel#Float#- (var_other,var_precision) on <var_other:Float> */
/* Covariant cast for argument 0 (i) <var_precision:Float> isa OTHER */
/* <var_precision:Float> isa OTHER */
var22 = 1; /* easy <var_precision:Float> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 341);
fatal_exit(1);
}
var26 = var_other - var_precision;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Float#>= (self,var20) on <self:Float> */
/* Covariant cast for argument 0 (i) <var20:Float> isa OTHER */
/* <var20:Float> isa OTHER */
var29 = 1; /* easy <var20:Float> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 336);
fatal_exit(1);
}
var33 = self >= var20;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var5 = var27;
} else {
var5 = var_;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#max for (self: Float, Float): Float */
double standard___standard__Float___Comparable__max(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var_other /* var other: Float */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 386);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel#Float#< (self,var_other) on <self:Float> */
/* Covariant cast for argument 0 (i) <var_other:Float> isa OTHER */
/* <var_other:Float> isa OTHER */
var4 = 1; /* easy <var_other:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Float#max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_standard___standard__Float___Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
val* var4 /* : Comparable */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Comparable to Float */;
var3 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Comparable to Float */;
var1 = standard___standard__Float___Comparable__max(var2, var3);
var4 = BOX_standard__Float(var1); /* autobox from Float to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method kernel#Float#min for (self: Float, Float): Float */
double standard___standard__Float___Comparable__min(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var_c /* var c: Float */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 395);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline kernel#Float#< (var_c,self) on <var_c:Float> */
/* Covariant cast for argument 0 (i) <self:Float> isa OTHER */
/* <self:Float> isa OTHER */
var4 = 1; /* easy <self:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Float#min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_standard___standard__Float___Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
val* var4 /* : Comparable */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Comparable to Float */;
var3 = ((struct instance_standard__Float*)p0)->value; /* autounbox from Comparable to Float */;
var1 = standard___standard__Float___Comparable__min(var2, var3);
var4 = BOX_standard__Float(var1); /* autobox from Float to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method kernel#Int#successor for (self: Int, Int): Int */
long standard___standard__Int___Discrete__successor(long self, long p0) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_i = p0;
{
{ /* Inline kernel#Int#+ (self,var_i) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var3 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var4 = self + var_i;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_standard___standard__Int___Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : Discrete */;
var2 = (long)(self)>>2;
var1 = standard___standard__Int___Discrete__successor(var2, p0);
var3 = (val*)(var1<<2|1);
var = var3;
RET_LABEL:;
return var;
}
/* method kernel#Int#predecessor for (self: Int, Int): Int */
long standard___standard__Int___Discrete__predecessor(long self, long p0) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_i = p0;
{
{ /* Inline kernel#Int#- (self,var_i) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var3 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var4 = self - var_i;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#predecessor for (self: Discrete, Int): Discrete */
val* VIRTUAL_standard___standard__Int___Discrete__predecessor(val* self, long p0) {
val* var /* : Discrete */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : Discrete */;
var2 = (long)(self)>>2;
var1 = standard___standard__Int___Discrete__predecessor(var2, p0);
var3 = (val*)(var1<<2|1);
var = var3;
RET_LABEL:;
return var;
}
/* method kernel#Int#object_id for (self: Int): Int */
long standard___standard__Int___Object__object_id(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#object_id for (self: Object): Int */
long VIRTUAL_standard___standard__Int___Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline kernel#Int#object_id (self) on <self:Object(Int)> */
var3 = (long)(self)>>2;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#hash for (self: Int): Int */
long standard___standard__Int___Object__hash(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#hash for (self: Object): Int */
long VIRTUAL_standard___standard__Int___Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = standard___standard__Int___Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#== for (self: Int, nullable Object): Bool */
short int standard___standard__Int___Object___61d_61d(long self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
var2 = (long)(p0)>>2;
var1 = (p0 != NULL) && (var2 == self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_standard___standard__Int___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Int#== (self,p0) on <self:Object(Int)> */
var3 = self == p0;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#!= for (self: Int, nullable Object): Bool */
short int standard___standard__Int___Object___33d_61d(long self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
var2 = (long)(p0)>>2;
var1 = (p0 != NULL) && (var2 == self);
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_standard___standard__Int___Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Int#!= (self,p0) on <self:Object(Int)> */
var3 = self == p0;
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#output for (self: Int) */
void standard___standard__Int___Object__output(long self) {
printf("%ld\n", self);
RET_LABEL:;
}
/* method kernel#Int#output for (self: Object) */
void VIRTUAL_standard___standard__Int___Object__output(val* self) {
long var /* : Int */;
{ /* Inline kernel#Int#output (self) on <self:Object(Int)> */
var = (long)(self)>>2;
printf("%ld\n", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Int#<= for (self: Int, Int): Bool */
short int standard___standard__Int___Comparable___60d_61d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Int___Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#<= (self,p0) on <self:Comparable(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#< for (self: Int, Int): Bool */
short int standard___standard__Int___Comparable___60d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Int___Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#< (self,p0) on <self:Comparable(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#>= for (self: Int, Int): Bool */
short int standard___standard__Int___Comparable___62d_61d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Int___Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#>= (self,p0) on <self:Comparable(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#> for (self: Int, Int): Bool */
short int standard___standard__Int___Comparable___62d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Int___Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#> (self,p0) on <self:Comparable(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#+ for (self: Int, Int): Int */
long standard___standard__Int___Numeric___43d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var2 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Int___Numeric___43d(val* self, val* p0) {
val* var /* : Numeric */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Int#+ (self,p0) on <self:Numeric(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = (val*)(var1<<2|1);
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Int#unary - for (self: Int): Int */
long standard___standard__Int___Numeric__unary_32d_45d(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#unary - for (self: Numeric): Numeric */
val* VIRTUAL_standard___standard__Int___Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : Numeric */;
{ /* Inline kernel#Int#unary - (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = (val*)(var1<<2|1);
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Int#- for (self: Int, Int): Int */
long standard___standard__Int___Numeric___45d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var2 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Int___Numeric___45d(val* self, val* p0) {
val* var /* : Numeric */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Int#- (self,p0) on <self:Numeric(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = (val*)(var1<<2|1);
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Int#* for (self: Int, Int): Int */
long standard___standard__Int___Numeric___42d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var2 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Int___Numeric___42d(val* self, val* p0) {
val* var /* : Numeric */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Int#* (self,p0) on <self:Numeric(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = (val*)(var1<<2|1);
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Int#/ for (self: Int, Int): Int */
long standard___standard__Int___Numeric___47d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var2 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Int___Numeric___47d(val* self, val* p0) {
val* var /* : Numeric */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Int#/ (self,p0) on <self:Numeric(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = (val*)(var1<<2|1);
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Int#% for (self: Int, Int): Int */
long standard___standard__Int____37d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self % p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#zero for (self: Int): Int */
long standard___standard__Int___Numeric__zero(long self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#zero for (self: Numeric): Numeric */
val* VIRTUAL_standard___standard__Int___Numeric__zero(val* self) {
val* var /* : Numeric */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : Numeric */;
var2 = (long)(self)>>2;
var1 = standard___standard__Int___Numeric__zero(var2);
var3 = (val*)(var1<<2|1);
var = var3;
RET_LABEL:;
return var;
}
/* method kernel#Int#value_of for (self: Int, Numeric): Int */
long standard___standard__Int___Numeric__value_of(long self, val* p0) {
long var /* : Int */;
val* var_val /* var val: Numeric */;
long var1 /* : Int */;
var_val = p0;
{
var1 = ((long(*)(val* self))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_standard__kernel__Numeric__to_i]))(var_val); /* to_i on <var_val:Numeric>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#value_of for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard___standard__Int___Numeric__value_of(val* self, val* p0) {
val* var /* : Numeric */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : Numeric */;
var2 = (long)(self)>>2;
var1 = standard___standard__Int___Numeric__value_of(var2, p0);
var3 = (val*)(var1<<2|1);
var = var3;
RET_LABEL:;
return var;
}
/* method kernel#Int#lshift for (self: Int, Int): Int */
long standard___standard__Int___lshift(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self << p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#<< for (self: Int, Int): Int */
long standard___standard__Int____60d_60d(long self, long p0) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var3 /* : Int */;
var_i = p0;
{
{ /* Inline kernel#Int#lshift (self,var_i) on <self:Int> */
var3 = self << var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#rshift for (self: Int, Int): Int */
long standard___standard__Int___rshift(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self >> p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#>> for (self: Int, Int): Int */
long standard___standard__Int____62d_62d(long self, long p0) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var3 /* : Int */;
var_i = p0;
{
{ /* Inline kernel#Int#rshift (self,var_i) on <self:Int> */
var3 = self >> var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_i for (self: Int): Int */
long standard___standard__Int___Numeric__to_i(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_i for (self: Numeric): Int */
long VIRTUAL_standard___standard__Int___Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = standard___standard__Int___Numeric__to_i(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_f for (self: Int): Float */
double standard___standard__Int___Numeric__to_f(long self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_f for (self: Numeric): Float */
double VIRTUAL_standard___standard__Int___Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
long var3 /* : Int */;
double var4 /* : Float */;
{ /* Inline kernel#Int#to_f (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#distance for (self: Int, Int): Int */
long standard___standard__Int___Discrete__distance(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
long var8 /* : Int */;
long var_d /* var d: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var18 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 463);
fatal_exit(1);
}
var_i = p0;
{
{ /* Inline kernel#Int#- (self,var_i) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var8 = self - var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_d = var2;
{
{ /* Inline kernel#Int#>= (var_d,0l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var15 = var_d >= 0l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = var_d;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#unary - (var_d) on <var_d:Int> */
var18 = -var_d;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#distance for (self: Discrete, Discrete): Int */
long VIRTUAL_standard___standard__Int___Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
var2 = (long)(self)>>2;
var3 = (long)(p0)>>2;
var1 = standard___standard__Int___Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#<=> for (self: Int, Int): Int */
long standard___standard__Int___Comparable___60d_61d_62d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_other /* var other: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 473);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel#Int#< (self,var_other) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_other:Int> isa OTHER */
/* <var_other:Int> isa OTHER */
var4 = 1; /* easy <var_other:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#< (var_other,self) on <var_other:Int> */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var14 = 1; /* easy <self:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Int#<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_standard___standard__Int___Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
var2 = (long)(self)>>2;
var3 = (long)(p0)>>2;
var1 = standard___standard__Int___Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#is_between for (self: Int, Int, Int): Bool */
short int standard___standard__Int___Comparable__is_between(long self, long p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
long var_c /* var c: Int */;
long var_d /* var d: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 484);
fatal_exit(1);
}
/* Covariant cast for argument 1 (d) <p1:Int> isa OTHER */
/* <p1:Int> isa OTHER */
var2 = 1; /* easy <p1:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name5 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 484);
fatal_exit(1);
}
var_c = p0;
var_d = p1;
{
{ /* Inline kernel#Int#< (self,var_c) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var9 = 1; /* easy <var_c:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var13 = self < var_c;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
var6 = var_;
} else {
{
{ /* Inline kernel#Int#< (var_d,self) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var16 = 1; /* easy <self:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var20 = var_d < self;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var6 = var14;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#is_between for (self: Comparable, Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Int___Comparable__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
var2 = (long)(self)>>2;
var3 = (long)(p0)>>2;
var4 = (long)(p1)>>2;
var1 = standard___standard__Int___Comparable__is_between(var2, var3, var4);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#max for (self: Int, Int): Int */
long standard___standard__Int___Comparable__max(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_other /* var other: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 493);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel#Int#< (self,var_other) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_other:Int> isa OTHER */
/* <var_other:Int> isa OTHER */
var4 = 1; /* easy <var_other:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_standard___standard__Int___Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : Comparable */;
var2 = (long)(self)>>2;
var3 = (long)(p0)>>2;
var1 = standard___standard__Int___Comparable__max(var2, var3);
var4 = (val*)(var1<<2|1);
var = var4;
RET_LABEL:;
return var;
}
/* method kernel#Int#min for (self: Int, Int): Int */
long standard___standard__Int___Comparable__min(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_c /* var c: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 502);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline kernel#Int#< (var_c,self) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var4 = 1; /* easy <self:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_standard___standard__Int___Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : Comparable */;
var2 = (long)(self)>>2;
var3 = (long)(p0)>>2;
var1 = standard___standard__Int___Comparable__min(var2, var3);
var4 = (val*)(var1<<2|1);
var = var4;
RET_LABEL:;
return var;
}
/* method kernel#Int#ascii for (self: Int): Char */
char standard___standard__Int___ascii(long self) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count for (self: Int, Int): Int */
long standard___standard__Int___digit_count(long self, long p0) {
long var /* : Int */;
long var_b /* var b: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var_d /* var d: Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var_n /* var n: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
var_b = p0;
{
{ /* Inline kernel#Int#== (var_b,10l) on <var_b:Int> */
var3 = var_b == 10l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = standard___standard__Int___digit_count_base_95d10(self);
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var8 = self < 0l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var_d = 1l;
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var11 = -self;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_n = var9;
} else {
{
{ /* Inline kernel#Int#== (self,0l) on <self:Int> */
var14 = self == 0l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var_d = 0l;
var_n = self;
}
}
for(;;) {
{
{ /* Inline kernel#Int#> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var21 = var_n > 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline kernel#Int#+ (var_d,1l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var28 = var_d + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_d = var22;
{
{ /* Inline kernel#Int#/ (var_n,var_b) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_b:Int> isa OTHER */
/* <var_b:Int> isa OTHER */
var31 = 1; /* easy <var_b:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var35 = var_n / var_b;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_n = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_d;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count_base_10 for (self: Int): Int */
long standard___standard__Int___digit_count_base_95d10(long self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var_result /* var result: Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_val /* var val: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
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
{
{ /* Inline kernel#Int#< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var4 = self < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var_result = 2l;
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var7 = -self;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_val = var5;
} else {
var_result = 1l;
var_val = self;
}
for(;;) {
{
{ /* Inline kernel#Int#< (var_val,10l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var10 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var14 = var_val < 10l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = var_result;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_val,100l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <100l:Int> isa OTHER */
/* <100l:Int> isa OTHER */
var17 = 1; /* easy <100l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var21 = var_val < 100l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline kernel#Int#+ (var_result,1l) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var28 = var_result + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var = var22;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_val,1000l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <1000l:Int> isa OTHER */
/* <1000l:Int> isa OTHER */
var31 = 1; /* easy <1000l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var35 = var_val < 1000l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline kernel#Int#+ (var_result,2l) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var38 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var42 = var_result + 2l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var = var36;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_val,10000l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <10000l:Int> isa OTHER */
/* <10000l:Int> isa OTHER */
var45 = 1; /* easy <10000l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var49 = var_val < 10000l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline kernel#Int#+ (var_result,3l) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var52 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var56 = var_result + 3l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var = var50;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#/ (var_val,10000l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <10000l:Int> isa OTHER */
/* <10000l:Int> isa OTHER */
var59 = 1; /* easy <10000l:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var63 = var_val / 10000l;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_val = var57;
{
{ /* Inline kernel#Int#+ (var_result,4l) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var66 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var70 = var_result + 4l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var_result = var64;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#to_c for (self: Int): Char */
char standard___standard__Int___to_c(long self) {
char var /* : Char */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
char var30 /* : Char */;
char var32 /* : Char */;
long var33 /* : Int */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
char var50 /* : Char */;
char var52 /* : Char */;
{
{ /* Inline kernel#Int#>= (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var5 = self >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel#Int#<= (self,36l) on <self:Int> */
/* Covariant cast for argument 0 (i) <36l:Int> isa OTHER */
/* <36l:Int> isa OTHER */
var8 = 1; /* easy <36l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var12 = self <= 36l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 573);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#< (self,10l) on <self:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var15 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var19 = self < 10l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline kernel#Char#ascii ('0') on <'0':Char> */
var22 = (unsigned char)'0';
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (self,var20) on <self:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var25 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var29 = self + var20;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#ascii (var23) on <var23:Int> */
var32 = var23;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var = var30;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Char#ascii ('a') on <'a':Char> */
var35 = (unsigned char)'a';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var33,10l) on <var33:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var38 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var42 = var33 - 10l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (self,var36) on <self:Int> */
/* Covariant cast for argument 0 (i) <var36:Int> isa OTHER */
/* <var36:Int> isa OTHER */
var45 = 1; /* easy <var36:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var49 = self + var36;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#ascii (var43) on <var43:Int> */
var52 = var43;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var = var50;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#abs for (self: Int): Int */
long standard___standard__Int___abs(long self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
{
{ /* Inline kernel#Int#>= (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var4 = self >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var = self;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var7 = -1l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#* (var5,self) on <var5:Int> */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var10 = 1; /* easy <self:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var14 = var5 * self;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Char#object_id for (self: Char): Int */
long standard___standard__Char___Object__object_id(char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#object_id for (self: Object): Int */
long VIRTUAL_standard___standard__Char___Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var3 /* : Char */;
long var4 /* : Int */;
{ /* Inline kernel#Char#object_id (self) on <self:Object(Char)> */
var3 = (char)((long)(self)>>2);
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#hash for (self: Char): Int */
long standard___standard__Char___Object__hash(char self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var3 = (unsigned char)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#hash for (self: Object): Int */
long VIRTUAL_standard___standard__Char___Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = (char)((long)(self)>>2);
var1 = standard___standard__Char___Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#== for (self: Char, nullable Object): Bool */
short int standard___standard__Char___Object___61d_61d(char self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = (char)((long)(p0)>>2);
var1 = (p0 != NULL) && (var2 == self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_standard___standard__Char___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Char#== (self,p0) on <self:Object(Char)> */
var3 = self == p0;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#!= for (self: Char, nullable Object): Bool */
short int standard___standard__Char___Object___33d_61d(char self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
var2 = (char)((long)(p0)>>2);
var1 = (p0 != NULL) && (var2 == self);
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_standard___standard__Char___Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Char#!= (self,p0) on <self:Object(Char)> */
var3 = self == p0;
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#output for (self: Char) */
void standard___standard__Char___Object__output(char self) {
printf("%c", self);
RET_LABEL:;
}
/* method kernel#Char#output for (self: Object) */
void VIRTUAL_standard___standard__Char___Object__output(val* self) {
char var /* : Char */;
{ /* Inline kernel#Char#output (self) on <self:Object(Char)> */
var = (char)((long)(self)>>2);
printf("%c", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Char#<= for (self: Char, Char): Bool */
short int standard___standard__Char___Comparable___60d_61d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Char___Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#<= (self,p0) on <self:Comparable(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var4 = (char)((long)(self)>>2);
var5 = (char)((long)(p0)>>2);
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#< for (self: Char, Char): Bool */
short int standard___standard__Char___Comparable___60d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 611);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Char___Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#< (self,p0) on <self:Comparable(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 611);
fatal_exit(1);
}
var4 = (char)((long)(self)>>2);
var5 = (char)((long)(p0)>>2);
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#>= for (self: Char, Char): Bool */
short int standard___standard__Char___Comparable___62d_61d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Char___Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#>= (self,p0) on <self:Comparable(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var4 = (char)((long)(self)>>2);
var5 = (char)((long)(p0)>>2);
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#> for (self: Char, Char): Bool */
short int standard___standard__Char___Comparable___62d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 613);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_standard___standard__Char___Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#> (self,p0) on <self:Comparable(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 613);
fatal_exit(1);
}
var4 = (char)((long)(self)>>2);
var5 = (char)((long)(p0)>>2);
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#successor for (self: Char, Int): Char */
char standard___standard__Char___Discrete__successor(char self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self + p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_standard___standard__Char___Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
char var1 /* : Char */;
char var3 /* : Char */;
char var4 /* : Char */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Char#successor (self,p0) on <self:Discrete(Char)> */
var3 = (char)((long)(self)>>2);
var4 = var3 + p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = (val*)((long)(var1)<<2|2);
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Char#predecessor for (self: Char, Int): Char */
char standard___standard__Char___Discrete__predecessor(char self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self - p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#predecessor for (self: Discrete, Int): Discrete */
val* VIRTUAL_standard___standard__Char___Discrete__predecessor(val* self, long p0) {
val* var /* : Discrete */;
char var1 /* : Char */;
char var3 /* : Char */;
char var4 /* : Char */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Char#predecessor (self,p0) on <self:Discrete(Char)> */
var3 = (char)((long)(self)>>2);
var4 = var3 - p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = (val*)((long)(var1)<<2|2);
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Char#distance for (self: Char, Char): Int */
long standard___standard__Char___Discrete__distance(char self, char p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var_d /* var d: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var24 /* : Int */;
/* Covariant cast for argument 0 (c) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 618);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var4 = (unsigned char)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var7 = (unsigned char)var_c;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var14 = var2 - var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_d = var8;
{
{ /* Inline kernel#Int#>= (var_d,0l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var21 = var_d >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var = var_d;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#unary - (var_d) on <var_d:Int> */
var24 = -var_d;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var = var22;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Char#distance for (self: Discrete, Discrete): Int */
long VIRTUAL_standard___standard__Char___Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
char var3 /* : Char */;
var2 = (char)((long)(self)>>2);
var3 = (char)((long)(p0)>>2);
var1 = standard___standard__Char___Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#to_i for (self: Char): Int */
long standard___standard__Char___to_i(char self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var17 /* : Int */;
char var18 /* : Char */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
{
{ /* Inline kernel#Char#== (self,'-') on <self:Char> */
var3 = self == '-';
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var6 = -1l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
} else {
var7 = standard___standard__Char___is_digit(self);
if (var7){
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var10 = (unsigned char)self;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii ('0') on <'0':Char> */
var13 = (unsigned char)'0';
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var8,var11) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var16 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var17 = var8 - var11;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var = var14;
goto RET_LABEL;
} else {
var18 = standard___standard__Char___to_lower(self);
{
{ /* Inline kernel#Char#ascii (var18) on <var18:Char> */
var21 = (unsigned char)var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii ('a') on <'a':Char> */
var24 = (unsigned char)'a';
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var19,var22) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var27 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var31 = var19 - var22;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var25,10l) on <var25:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var34 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var38 = var25 + 10l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var = var32;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Char#ascii for (self: Char): Int */
long standard___standard__Char___ascii(char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#to_lower for (self: Char): Char */
char standard___standard__Char___to_lower(char self) {
char var /* : Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char var10 /* : Char */;
char var12 /* : Char */;
var1 = standard___standard__Char___is_upper(self);
if (var1){
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var4 = (unsigned char)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var5 = standard___standard__Char___Discrete__distance('a', 'A');
{
{ /* Inline kernel#Int#+ (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var9 = var2 + var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#ascii (var6) on <var6:Int> */
var12 = var6;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Char#to_upper for (self: Char): Char */
char standard___standard__Char___to_upper(char self) {
char var /* : Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char var10 /* : Char */;
char var12 /* : Char */;
var1 = standard___standard__Char___is_lower(self);
if (var1){
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var4 = (unsigned char)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var5 = standard___standard__Char___Discrete__distance('a', 'A');
{
{ /* Inline kernel#Int#- (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var9 = var2 - var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#ascii (var6) on <var6:Int> */
var12 = var6;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Char#is_digit for (self: Char): Bool */
short int standard___standard__Char___is_digit(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel#Char#>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var4 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var5 = self >= '0';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel#Char#<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var8 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var12 = self <= '9';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_lower for (self: Char): Bool */
short int standard___standard__Char___is_lower(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel#Char#>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var4 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var5 = self >= 'a';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel#Char#<= (self,'z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var8 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var12 = self <= 'z';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_upper for (self: Char): Bool */
short int standard___standard__Char___is_upper(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel#Char#>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var4 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var5 = self >= 'A';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel#Char#<= (self,'Z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var8 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var12 = self <= 'Z';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_letter for (self: Char): Bool */
short int standard___standard__Char___is_letter(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
var2 = standard___standard__Char___is_lower(self);
var_ = var2;
if (var2){
var1 = var_;
} else {
var3 = standard___standard__Char___is_upper(self);
var1 = var3;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_whitespace for (self: Char): Bool */
short int standard___standard__Char___is_whitespace(char self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_i /* var i: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var3 = (unsigned char)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
{
{ /* Inline kernel#Int#<= (var_i,32l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var7 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var8 = var_i <= 32l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
var4 = var_;
} else {
{
{ /* Inline kernel#Int#== (var_i,127l) on <var_i:Int> */
var11 = var_i == 127l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var4 = var9;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Pointer#address_is_null for (self: Pointer): Bool */
short int standard___standard__Pointer___address_is_null(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
void* var2 /* : Pointer for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing Pointer */
var1 = address_is_null(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Pointer#free for (self: Pointer) */
void standard___standard__Pointer___free(val* self) {
void* var /* : Pointer for extern */;
var = ((struct instance_standard__Pointer*)self)->value; /* unboxing Pointer */
free(var);
RET_LABEL:;
}
