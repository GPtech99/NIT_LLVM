#include "standard__string.sep.0.h"
/* method string#FlatBuffer#[]= for (self: FlatBuffer, Int, Char) */
void standard___standard__FlatBuffer___Buffer___91d_93d_61d(val* self, long p0, char p1) {
long var_index /* var index: Int */;
char var_item /* var item: Char */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
char* var18 /* : NativeString */;
var_index = p0;
var_item = p1;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__is_dirty_61d]))(self, 1); /* is_dirty= on <self:FlatBuffer>*/
}
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#== (var_index,var) on <var_index:Int> */
var3 = var_index == var;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
((void(*)(val* self, char p0))(self->class->vft[COLOR_standard__string__Buffer__add]))(self, var_item); /* add on <self:FlatBuffer>*/
}
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var4){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var9 = var_index >= 0l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_ = var6;
if (var6){
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#< (var_index,var10) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var17 = var_index < var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var5 = var11;
} else {
var5 = var_;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1639);
fatal_exit(1);
}
{
var18 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#[]= (var18,var_index,var_item) on <var18:NativeString> */
var18[var_index]=var_item;
RET_LABEL19:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#add for (self: FlatBuffer, Char) */
void standard___standard__FlatBuffer___Buffer__add(val* self, char p0) {
char var_c /* var c: Char */;
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var_ /* var : FlatBuffer */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
var_c = p0;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__is_dirty_61d]))(self, 1); /* is_dirty= on <self:FlatBuffer>*/
}
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#<= (var,var1) on <var:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var5 = var <= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var6,5l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var9 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var13 = var6 + 5l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__Buffer__enlarge]))(self, var7); /* enlarge on <self:FlatBuffer>*/
}
} else {
}
{
var14 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#[]= (var14,var15,var_c) on <var14:NativeString> */
var14[var15]=var_c;
RET_LABEL16:(void)0;
}
}
var_ = self;
{
var17 = ((long(*)(val* self))(var_->class->vft[COLOR_standard__string__Text__length]))(var_); /* length on <var_:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var17,1l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var24 = var17 + 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__string__FlatText__length_61d]))(var_, var18); /* length= on <var_:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#clear for (self: FlatBuffer) */
void standard___standard__FlatBuffer___Buffer__clear(val* self) {
short int var /* : Bool */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__is_dirty_61d]))(self, 1); /* is_dirty= on <self:FlatBuffer>*/
}
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatText__length_61d]))(self, 0l); /* length= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#empty for (self: FlatBuffer): Buffer */
val* standard___standard__FlatBuffer___Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : FlatBuffer */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#enlarge for (self: FlatBuffer, Int) */
void standard___standard__FlatBuffer___Buffer__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_c /* var c: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
char* var34 /* : NativeString */;
char* var36 /* : NativeString */;
char* var_a /* var a: NativeString */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
var_cap = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
var_c = var;
{
{ /* Inline kernel#Int#<= (var_cap,var_c) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var3 = 1; /* easy <var_c:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var4 = var_cap <= var_c;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
for(;;) {
{
{ /* Inline kernel#Int#<= (var_c,var_cap) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var7 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var11 = var_c <= var_cap;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline kernel#Int#* (var_c,2l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var14 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var18 = var_c * 2l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var12,2l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var21 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var25 = var12 + 2l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_c = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__written_61d]))(self, 0); /* written= on <self:FlatBuffer>*/
}
var26 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_c,1l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var33 = var_c + 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var26,var27) on <var26:NativeString> */
var36 = (char*)nit_alloc(var27);
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_a = var34;
{
var37 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#> (var37,0l) on <var37:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var40 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var44 = var37 > 0l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
var45 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var46 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var45,var_a,var46,0l,0l) on <var45:NativeString> */
memmove(var_a+0l,var45+0l,var46);
RET_LABEL47:(void)0;
}
}
} else {
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatText__items_61d]))(self, var_a); /* items= on <self:FlatBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatBuffer__capacity_61d]))(self, var_c); /* capacity= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#to_s for (self: FlatBuffer): String */
val* standard___standard__FlatBuffer___Object__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
char* var5 /* : NativeString */;
char* var6 /* : NativeString */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__written_61d]))(self, 1); /* written= on <self:FlatBuffer>*/
}
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var5 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var5,1l) on <var5:NativeString> */
var8 = (char*)nit_alloc(1l);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatText__items_61d]))(self, var6); /* items= on <self:FlatBuffer>*/
}
} else {
}
var9 = NEW_standard__FlatString(&type_standard__FlatString);
{
var10 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
var12 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#- (var12,1l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var16 = var12 - 1l;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var9->class->vft[COLOR_standard__string__FlatString__with_infos]))(var9, var10, var11, 0l, var13); /* with_infos on <var9:FlatString>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#to_cstring for (self: FlatBuffer): NativeString */
char* standard___standard__FlatBuffer___Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
char* var8 /* : NativeString */;
char* var10 /* : NativeString */;
char* var_new_native /* var new_native: NativeString */;
long var11 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var24 /* : nullable NativeString */;
val* var25 /* : nullable NativeString */;
char* var26 /* : NativeString */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Buffer__is_dirty]))(self); /* is_dirty on <self:FlatBuffer>*/
}
if (var1){
var2 = NULL/*special!*/;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var7 = var3 + 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var2,var4) on <var2:NativeString> */
var10 = (char*)nit_alloc(var4);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_new_native = var8;
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#[]= (var_new_native,var11,'\000') on <var_new_native:NativeString> */
var_new_native[var11]='\000';
RET_LABEL12:(void)0;
}
}
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#> (var13,0l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var16 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var20 = var13 > 0l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
var21 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var22 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var21,var_new_native,var22,0l,0l) on <var21:NativeString> */
memmove(var_new_native+0l,var21+0l,var22);
RET_LABEL23:(void)0;
}
}
} else {
}
{
var24 = BOX_standard__NativeString(var_new_native); /* autobox from NativeString to nullable NativeString */
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__FlatText__real_items_61d]))(self, var24); /* real_items= on <self:FlatBuffer>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__is_dirty_61d]))(self, 0); /* is_dirty= on <self:FlatBuffer>*/
}
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__real_items]))(self); /* real_items on <self:FlatBuffer>*/
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1689);
fatal_exit(1);
}
var26 = ((struct instance_standard__NativeString*)var25)->value; /* autounbox from nullable NativeString to NativeString */;
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#init for (self: FlatBuffer) */
void standard___standard__FlatBuffer___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#with_infos for (self: FlatBuffer, NativeString, Int, Int) */
void standard___standard__FlatBuffer___with_infos(val* self, char* p0, long p1, long p2) {
char* var_items /* var items: NativeString */;
long var_capacity /* var capacity: Int */;
long var_length /* var length: Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
var_items = p0;
var_capacity = p1;
var_length = p2;
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatText__items_61d]))(self, var_items); /* items= on <self:FlatBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatText__length_61d]))(self, var_length); /* length= on <self:FlatBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatBuffer__capacity_61d]))(self, var_capacity); /* capacity= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#from for (self: FlatBuffer, Text) */
void standard___standard__FlatBuffer___from(val* self, val* p0) {
val* var_s /* var s: Text */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
char* var8 /* : NativeString */;
char* var10 /* : NativeString */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
char* var14 /* : NativeString */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
char* var22 /* : NativeString */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
long var_curr_pos /* var curr_pos: Int */;
long var_i /* var i: Int */;
long var26 /* : Int */;
long var_ /* var : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
val* var34 /* : SequenceRead[Char] */;
val* var35 /* : nullable Object */;
char var36 /* : Char */;
char var_c /* var c: Char */;
char* var37 /* : NativeString */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
long var46 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
var_s = p0;
{
var = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatBuffer__capacity_61d]))(self, var1); /* capacity= on <self:FlatBuffer>*/
}
{
var5 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatText__length_61d]))(self, var5); /* length= on <self:FlatBuffer>*/
}
var6 = NULL/*special!*/;
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#new (var6,var7) on <var6:NativeString> */
var10 = (char*)nit_alloc(var7);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatText__items_61d]))(self, var8); /* items= on <self:FlatBuffer>*/
}
/* <var_s:Text> isa FlatString */
cltype12 = type_standard__FlatString.color;
idtype13 = type_standard__FlatString.id;
if(cltype12 >= var_s->type->table_size) {
var11 = 0;
} else {
var11 = var_s->type->type_table[cltype12] == idtype13;
}
if (var11){
{
var14 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:Text(FlatString)>*/
}
{
var15 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
var17 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatString__index_from]))(var_s); /* index_from on <var_s:Text(FlatString)>*/
}
{
{ /* Inline string#NativeString#copy_to (var14,var15,var16,var17,0l) on <var14:NativeString> */
memmove(var15+0l,var14+var17,var16);
RET_LABEL18:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype20 = type_standard__FlatBuffer.color;
idtype21 = type_standard__FlatBuffer.id;
if(cltype20 >= var_s->type->table_size) {
var19 = 0;
} else {
var19 = var_s->type->type_table[cltype20] == idtype21;
}
if (var19){
{
var22 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:Text(FlatBuffer)>*/
}
{
var23 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var24 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var22,var23,var24,0l,0l) on <var22:NativeString> */
memmove(var23+0l,var22+0l,var24);
RET_LABEL25:(void)0;
}
}
} else {
var_curr_pos = 0l;
var_i = 0l;
{
var26 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_ = var26;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var29 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var33 = var_i < var_;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
var34 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Text>*/
}
{
var35 = ((val*(*)(val* self, long p0))((((long)var34&3)?class_info[((long)var34&3)]:var34->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var34, var_i); /* [] on <var34:SequenceRead[Char]>*/
}
var36 = (char)((long)(var35)>>2);
var_c = var36;
{
var37 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#[]= (var37,var_curr_pos,var_c) on <var37:NativeString> */
var37[var_curr_pos]=var_c;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_curr_pos,1l) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var45 = var_curr_pos + 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_curr_pos = var39;
var46 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var46;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#with_capacity for (self: FlatBuffer, Int) */
void standard___standard__FlatBuffer___with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
char* var12 /* : NativeString */;
char* var14 /* : NativeString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
var_cap = p0;
{
{ /* Inline kernel#Int#>= (var_cap,0l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var3 = var_cap >= 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1732);
fatal_exit(1);
}
var4 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_cap,1l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var11 = var_cap + 1l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var4,var5) on <var4:NativeString> */
var14 = (char*)nit_alloc(var5);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatText__items_61d]))(self, var12); /* items= on <self:FlatBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatBuffer__capacity_61d]))(self, var_cap); /* capacity= on <self:FlatBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatText__length_61d]))(self, 0l); /* length= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#append for (self: FlatBuffer, Text) */
void standard___standard__FlatBuffer___Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
short int var /* : Bool */;
long var1 /* : Int */;
long var_sl /* var sl: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
char* var26 /* : NativeString */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
char* var34 /* : NativeString */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
long var38 /* : Int */;
long var_curr_pos /* var curr_pos: Int */;
long var_i /* var i: Int */;
long var39 /* : Int */;
long var_ /* var : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
val* var47 /* : SequenceRead[Char] */;
val* var48 /* : nullable Object */;
char var49 /* : Char */;
char var_c /* var c: Char */;
char* var50 /* : NativeString */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
long var59 /* : Int */;
val* var_60 /* var : FlatBuffer */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
var_s = p0;
{
var = ((short int(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__is_empty]))(var_s); /* is_empty on <var_s:Text>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__is_dirty_61d]))(self, 1); /* is_dirty= on <self:FlatBuffer>*/
}
{
var1 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_sl = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var3,var_sl) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var6 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var7 = var3 + var_sl;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var2,var4) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var10 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var14 = var2 < var4;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var15,var_sl) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var18 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var15 + var_sl;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__Buffer__enlarge]))(self, var16); /* enlarge on <self:FlatBuffer>*/
}
} else {
}
/* <var_s:Text> isa FlatString */
cltype24 = type_standard__FlatString.color;
idtype25 = type_standard__FlatString.id;
if(cltype24 >= var_s->type->table_size) {
var23 = 0;
} else {
var23 = var_s->type->type_table[cltype24] == idtype25;
}
if (var23){
{
var26 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:Text(FlatString)>*/
}
{
var27 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var28 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatString__index_from]))(var_s); /* index_from on <var_s:Text(FlatString)>*/
}
{
var29 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var26,var27,var_sl,var28,var29) on <var26:NativeString> */
memmove(var27+var29,var26+var28,var_sl);
RET_LABEL30:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype32 = type_standard__FlatBuffer.color;
idtype33 = type_standard__FlatBuffer.id;
if(cltype32 >= var_s->type->table_size) {
var31 = 0;
} else {
var31 = var_s->type->type_table[cltype32] == idtype33;
}
if (var31){
{
var34 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:Text(FlatBuffer)>*/
}
{
var35 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var36 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var34,var35,var_sl,0l,var36) on <var34:NativeString> */
memmove(var35+var36,var34+0l,var_sl);
RET_LABEL37:(void)0;
}
}
} else {
{
var38 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
var_curr_pos = var38;
var_i = 0l;
{
var39 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_ = var39;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var42 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var46 = var_i < var_;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
var47 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Text>*/
}
{
var48 = ((val*(*)(val* self, long p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var47, var_i); /* [] on <var47:SequenceRead[Char]>*/
}
var49 = (char)((long)(var48)>>2);
var_c = var49;
{
var50 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#[]= (var50,var_curr_pos,var_c) on <var50:NativeString> */
var50[var_curr_pos]=var_c;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_curr_pos,1l) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var54 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var58 = var_curr_pos + 1l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_curr_pos = var52;
var59 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var59;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
}
var_60 = self;
{
var61 = ((long(*)(val* self))(var_60->class->vft[COLOR_standard__string__Text__length]))(var_60); /* length on <var_60:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var61,var_sl) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var64 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var68 = var61 + var_sl;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_60->class->vft[COLOR_standard__string__FlatText__length_61d]))(var_60, var62); /* length= on <var_60:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#copy for (self: FlatBuffer, Int, Int, Buffer, Int) */
void standard___standard__FlatBuffer___copy(val* self, long p0, long p1, val* p2, long p3) {
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var_dest /* var dest: Buffer */;
long var_new_start /* var new_start: Int */;
val* var /* : SequenceRead[Char] */;
val* var_self_chars /* var self_chars: Sequence[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var_dest_chars /* var dest_chars: Sequence[Char] */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
var_start = p0;
var_len = p1;
var_dest = p2;
var_new_start = p3;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:FlatBuffer>*/
}
var_self_chars = var;
{
var1 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_standard__string__Text__chars]))(var_dest); /* chars on <var_dest:Buffer>*/
}
var_dest_chars = var1;
var_i = 0l;
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var5 = var_len - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var12 = var_i <= var_;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
{ /* Inline kernel#Int#+ (var_new_start,var_i) on <var_new_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var15 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var19 = var_new_start + var_i;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start,var_i) on <var_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var22 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var26 = var_start + var_i;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var27 = ((val*(*)(val* self, long p0))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_self_chars, var20); /* [] on <var_self_chars:Sequence[Char]>*/
}
{
((void(*)(val* self, long p0, val* p1))((((long)var_dest_chars&3)?class_info[((long)var_dest_chars&3)]:var_dest_chars->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_dest_chars, var13, var27); /* []= on <var_dest_chars:Sequence[Char]>*/
}
var28 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var28;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#FlatBuffer#substring for (self: FlatBuffer, Int, Int): Buffer */
val* standard___standard__FlatBuffer___Text__substring(val* self, long p0, long p1) {
val* var /* : Buffer */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var_len /* var len: Int */;
char* var42 /* : NativeString */;
char* var43 /* : NativeString */;
char* var45 /* : NativeString */;
char* var_r_items /* var r_items: NativeString */;
char* var46 /* : NativeString */;
val* var48 /* : FlatBuffer */;
val* var_r /* var r: FlatBuffer */;
val* var49 /* : FlatBuffer */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#>= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var4 = var_count >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1771);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var7 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var11 = var_count + var_from;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_count = var5;
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var18 = var_from < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var_from = 0l;
} else {
}
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#> (var_count,var19) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var26 = var_count > var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
var27 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
var_count = var27;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var30 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var34 = var_from < var_count;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline kernel#Int#- (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var37 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var41 = var_count - var_from;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_len = var35;
var42 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var42,var_len) on <var42:NativeString> */
var45 = (char*)nit_alloc(var_len);
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_r_items = var43;
{
var46 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var46,var_r_items,var_len,var_from,0l) on <var46:NativeString> */
memmove(var_r_items+0l,var46+var_from,var_len);
RET_LABEL47:(void)0;
}
}
var48 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self, char* p0, long p1, long p2))(var48->class->vft[COLOR_standard__string__FlatBuffer__with_infos]))(var48, var_r_items, var_len, var_len); /* with_infos on <var48:FlatBuffer>*/
}
var_r = var48;
var = var_r;
goto RET_LABEL;
} else {
var49 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var49->class->vft[COLOR_standard__kernel__Object__init]))(var49); /* init on <var49:FlatBuffer>*/
}
var = var49;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#reverse for (self: FlatBuffer) */
void standard___standard__FlatBuffer___Buffer__reverse(val* self) {
char* var /* : NativeString */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var_si /* var si: Int */;
long var_ni /* var ni: Int */;
char* var10 /* : NativeString */;
char* var_it /* var it: NativeString */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
char var18 /* : Char */;
char var20 /* : Char */;
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
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__written_61d]))(self, 0); /* written= on <self:FlatBuffer>*/
}
var = NULL/*special!*/;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#new (var,var1) on <var:NativeString> */
var4 = (char*)nit_alloc(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ns = var2;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#- (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var9 = var5 - 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_si = var6;
var_ni = 0l;
{
var10 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
var_it = var10;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_si,0l) on <var_si:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var13 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var17 = var_si >= 0l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline string#NativeString#[] (var_it,var_si) on <var_it:NativeString> */
var20 = var_it[var_si];
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var_ns,var_ni,var18) on <var_ns:NativeString> */
var_ns[var_ni]=var18;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_ni,1l) on <var_ni:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var28 = var_ni + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_ni = var22;
{
{ /* Inline kernel#Int#- (var_si,1l) on <var_si:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var35 = var_si - 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_si = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatText__items_61d]))(self, var_ns); /* items= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#times for (self: FlatBuffer, Int) */
void standard___standard__FlatBuffer___Buffer__times(val* self, long p0) {
long var_repeats /* var repeats: Int */;
val* var /* : FlatString */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var_x /* var x: FlatString */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
var_repeats = p0;
var = NEW_standard__FlatString(&type_standard__FlatString);
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var->class->vft[COLOR_standard__string__FlatString__with_infos]))(var, var1, var2, 0l, var4); /* with_infos on <var:FlatString>*/
}
var_x = var;
var_i = 1l;
var_ = var_repeats;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var10 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var14 = var_i < var_;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__Buffer__append]))(self, var_x); /* append on <self:FlatBuffer>*/
}
var15 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var15;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#FlatBuffer#upper for (self: FlatBuffer) */
void standard___standard__FlatBuffer___Buffer__upper(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
char* var_it /* var it: NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_id /* var id: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
char var14 /* : Char */;
char var16 /* : Char */;
char var17 /* : Char */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
var_it = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_id = var3;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_id,0l) on <var_id:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var13 = var_id >= 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline string#NativeString#[] (var_it,var_id) on <var_it:NativeString> */
var16 = var_it[var_id];
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var17 = standard___standard__Char___to_upper(var14);
{
{ /* Inline string#NativeString#[]= (var_it,var_id,var17) on <var_it:NativeString> */
var_it[var_id]=var17;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_id,1l) on <var_id:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var25 = var_id - 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_id = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#FlatBuffer#lower for (self: FlatBuffer) */
void standard___standard__FlatBuffer___Buffer__lower(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
char* var_it /* var it: NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_id /* var id: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
char var14 /* : Char */;
char var16 /* : Char */;
char var17 /* : Char */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
var_it = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_id = var3;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_id,0l) on <var_id:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var13 = var_id >= 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline string#NativeString#[] (var_it,var_id) on <var_it:NativeString> */
var16 = var_it[var_id];
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var17 = standard___standard__Char___to_lower(var14);
{
{ /* Inline string#NativeString#[]= (var_it,var_id,var17) on <var_it:NativeString> */
var_it[var_id]=var17;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_id,1l) on <var_id:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var25 = var_id - 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_id = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#FlatBufferReverseIterator#target for (self: FlatBufferReverseIterator): FlatBuffer */
val* standard__string___standard__string__FlatBufferReverseIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_standard__string__FlatBufferReverseIterator___target].val; /* _target on <self:FlatBufferReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1835);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferReverseIterator#target= for (self: FlatBufferReverseIterator, FlatBuffer) */
void standard__string___standard__string__FlatBufferReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatBufferReverseIterator___target].val = p0; /* _target on <self:FlatBufferReverseIterator> */
RET_LABEL:;
}
/* method string#FlatBufferReverseIterator#target_items for (self: FlatBufferReverseIterator): NativeString */
char* standard__string___standard__string__FlatBufferReverseIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatBufferReverseIterator___target_items].str; /* _target_items on <self:FlatBufferReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferReverseIterator#target_items= for (self: FlatBufferReverseIterator, NativeString) */
void standard__string___standard__string__FlatBufferReverseIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_standard__string__FlatBufferReverseIterator___target_items].str = p0; /* _target_items on <self:FlatBufferReverseIterator> */
RET_LABEL:;
}
/* method string#FlatBufferReverseIterator#curr_pos for (self: FlatBufferReverseIterator): Int */
long standard__string___standard__string__FlatBufferReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatBufferReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferReverseIterator#curr_pos= for (self: FlatBufferReverseIterator, Int) */
void standard__string___standard__string__FlatBufferReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatBufferReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferReverseIterator> */
RET_LABEL:;
}
/* method string#FlatBufferReverseIterator#with_pos for (self: FlatBufferReverseIterator, FlatBuffer, Int) */
void standard__string___standard__string__FlatBufferReverseIterator___with_pos(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: FlatBuffer */;
long var_pos /* var pos: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
char* var5 /* : NativeString */;
var_tgt = p0;
var_pos = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__FlatBufferReverseIterator__target_61d]))(self, var_tgt); /* target= on <self:FlatBufferReverseIterator>*/
}
{
var = ((long(*)(val* self))(var_tgt->class->vft[COLOR_standard__string__Text__length]))(var_tgt); /* length on <var_tgt:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#> (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var4 = var > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((char*(*)(val* self))(var_tgt->class->vft[COLOR_standard__string__FlatText__items]))(var_tgt); /* items on <var_tgt:FlatBuffer>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatBufferReverseIterator__target_items_61d]))(self, var5); /* target_items= on <self:FlatBufferReverseIterator>*/
}
} else {
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatBufferReverseIterator__curr_pos_61d]))(self, var_pos); /* curr_pos= on <self:FlatBufferReverseIterator>*/
}
RET_LABEL:;
}
/* method string#FlatBufferReverseIterator#index for (self: FlatBufferReverseIterator): Int */
long standard__string___standard__string__FlatBufferReverseIterator___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBufferReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferReverseIterator#is_ok for (self: FlatBufferReverseIterator): Bool */
short int standard__string___standard__string__FlatBufferReverseIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBufferReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferReverseIterator>*/
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var5 = var1 >= 0l;
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
/* method string#FlatBufferReverseIterator#item for (self: FlatBufferReverseIterator): Char */
char standard__string___standard__string__FlatBufferReverseIterator___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
char var3 /* : Char */;
char var5 /* : Char */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBufferReverseIterator__target_items]))(self); /* target_items on <self:FlatBufferReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBufferReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferReverseIterator>*/
}
{
{ /* Inline string#NativeString#[] (var1,var2) on <var1:NativeString> */
var5 = var1[var2];
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatBufferReverseIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatBufferReverseIterator___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBufferReverseIterator#next for (self: FlatBufferReverseIterator) */
void standard__string___standard__string__FlatBufferReverseIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_standard__string__FlatBufferReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferReverseIterator>*/
}
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
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__string__FlatBufferReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferReverseIterator>*/
}
RET_LABEL:;
}
/* method string#FlatBufferReverseIterator#init for (self: FlatBufferReverseIterator) */
void standard__string___standard__string__FlatBufferReverseIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatBufferReverseIterator___standard__kernel__Object__init]))(self); /* init on <self:FlatBufferReverseIterator>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#[] for (self: FlatBufferCharView, Int): Char */
char standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
char* var2 /* : NativeString */;
char var3 /* : Char */;
char var5 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__FlatText__items]))(var1); /* items on <var1:Text(FlatBuffer)>*/
}
{
{ /* Inline string#NativeString#[] (var2,var_index) on <var2:NativeString> */
var5 = var2[var_index];
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[]= for (self: FlatBufferCharView, Int, Char) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, char p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_index /* var index: Int */;
char var_item /* var item: Char */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var22 /* : Text */;
char* var23 /* : NativeString */;
/* Covariant cast for argument 1 (item) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1865);
fatal_exit(1);
}
var_index = p0;
var_item = p1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var8 = var_index >= 0l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:FlatBufferCharView>*/
}
{
{ /* Inline kernel#Int#<= (var_index,var9) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var16 = var_index <= var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var1 = var10;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1867);
fatal_exit(1);
}
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:FlatBufferCharView>*/
}
{
{ /* Inline kernel#Int#== (var_index,var17) on <var_index:Int> */
var20 = var_index == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
var21 = (val*)((long)(var_item)<<2|2);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(self, var21); /* add on <self:FlatBufferCharView>*/
}
goto RET_LABEL;
} else {
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
var23 = ((char*(*)(val* self))(var22->class->vft[COLOR_standard__string__FlatText__items]))(var22); /* items on <var22:Text(FlatBuffer)>*/
}
{
{ /* Inline string#NativeString#[]= (var23,var_index,var_item) on <var23:NativeString> */
var23[var_index]=var_item;
RET_LABEL24:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
char var /* : Char */;
var = (char)((long)(p1)>>2);
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call string#FlatBufferCharView#[]= on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: FlatBufferCharView, Char) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(val* self, char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
val* var1 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1875);
fatal_exit(1);
}
var_c = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, char p0))(var1->class->vft[COLOR_standard__string__Buffer__add]))(var1, var_c); /* add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(val* self, val* p0) {
char var /* : Char */;
var = (char)((long)(p0)>>2);
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(self, var); /* Direct call string#FlatBufferCharView#push on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: FlatBufferCharView, Char) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(val* self, char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
val* var1 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1880);
fatal_exit(1);
}
var_c = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, char p0))(var1->class->vft[COLOR_standard__string__Buffer__add]))(var1, var_c); /* add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
char var /* : Char */;
var = (char)((long)(p0)>>2);
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(self, var); /* Direct call string#FlatBufferCharView#add on <self:SimpleCollection[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#enlarge for (self: FlatBufferCharView, Int) */
void standard__string___standard__string__FlatBufferCharView___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : Text */;
var_cap = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_standard__string__Buffer__enlarge]))(var, var_cap); /* enlarge on <var:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#append for (self: FlatBufferCharView, Collection[Char]) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_s /* var s: Collection[Char] */;
long var1 /* : Int */;
long var_s_length /* var s_length: Int */;
val* var2 /* : Text */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
val* var12 /* : Text */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
/* Covariant cast for argument 0 (s) <p0:Collection[Char]> isa Collection[Char] */
/* <p0:Collection[Char]> isa Collection[Char] */
var = 1; /* easy <p0:Collection[Char]> isa Collection[Char]*/
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Char]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1890);
fatal_exit(1);
}
var_s = p0;
{
var1 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
var_s_length = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__FlatBuffer__capacity]))(var2); /* capacity on <var2:Text(FlatBuffer)>*/
}
{
var4 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
{
{ /* Inline kernel#Int#< (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var11 = var3 < var4;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
var13 = ((long(*)(val* self))(var12->class->vft[COLOR_standard__string__Text__length]))(var12); /* length on <var12:Text(FlatBuffer)>*/
}
{
{ /* Inline kernel#Int#+ (var_s_length,var13) on <var_s_length:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var20 = var_s_length + var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatBufferCharView__enlarge]))(self, var14); /* enlarge on <self:FlatBufferCharView>*/
}
} else {
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_standard__string__FlatBufferIterator(&type_standard__string__FlatBufferIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_standard__string__FlatBufferIterator__with_pos]))(var1, var2, var_pos); /* with_pos on <var1:FlatBufferIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#reverse_iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferReverseIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_standard__string__FlatBufferReverseIterator(&type_standard__string__FlatBufferReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_standard__string__FlatBufferReverseIterator__with_pos]))(var1, var2, var_pos); /* with_pos on <var1:FlatBufferReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target for (self: FlatBufferIterator): FlatBuffer */
val* standard__string___standard__string__FlatBufferIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_standard__string__FlatBufferIterator___target].val; /* _target on <self:FlatBufferIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1905);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target= for (self: FlatBufferIterator, FlatBuffer) */
void standard__string___standard__string__FlatBufferIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatBufferIterator___target].val = p0; /* _target on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#target_items for (self: FlatBufferIterator): NativeString */
char* standard__string___standard__string__FlatBufferIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatBufferIterator___target_items].str; /* _target_items on <self:FlatBufferIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target_items= for (self: FlatBufferIterator, NativeString) */
void standard__string___standard__string__FlatBufferIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_standard__string__FlatBufferIterator___target_items].str = p0; /* _target_items on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#curr_pos for (self: FlatBufferIterator): Int */
long standard__string___standard__string__FlatBufferIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#curr_pos= for (self: FlatBufferIterator, Int) */
void standard__string___standard__string__FlatBufferIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#with_pos for (self: FlatBufferIterator, FlatBuffer, Int) */
void standard__string___standard__string__FlatBufferIterator___with_pos(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: FlatBuffer */;
long var_pos /* var pos: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
char* var5 /* : NativeString */;
var_tgt = p0;
var_pos = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__FlatBufferIterator__target_61d]))(self, var_tgt); /* target= on <self:FlatBufferIterator>*/
}
{
var = ((long(*)(val* self))(var_tgt->class->vft[COLOR_standard__string__Text__length]))(var_tgt); /* length on <var_tgt:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#> (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var4 = var > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((char*(*)(val* self))(var_tgt->class->vft[COLOR_standard__string__FlatText__items]))(var_tgt); /* items on <var_tgt:FlatBuffer>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatBufferIterator__target_items_61d]))(self, var5); /* target_items= on <self:FlatBufferIterator>*/
}
} else {
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatBufferIterator__curr_pos_61d]))(self, var_pos); /* curr_pos= on <self:FlatBufferIterator>*/
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#index for (self: FlatBufferIterator): Int */
long standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBufferIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#is_ok for (self: FlatBufferIterator): Bool */
short int standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : FlatBuffer */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBufferIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBufferIterator__target]))(self); /* target on <self:FlatBufferIterator>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__length]))(var2); /* length on <var2:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#< (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var7 = var1 < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#item for (self: FlatBufferIterator): Char */
char standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
char var3 /* : Char */;
char var5 /* : Char */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBufferIterator__target_items]))(self); /* target_items on <self:FlatBufferIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatBufferIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferIterator>*/
}
{
{ /* Inline string#NativeString#[] (var1,var2) on <var1:NativeString> */
var5 = var1[var2];
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#next for (self: FlatBufferIterator) */
void standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_standard__string__FlatBufferIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferIterator>*/
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__string__FlatBufferIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferIterator>*/
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#init for (self: FlatBufferIterator) */
void standard__string___standard__string__FlatBufferIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatBufferIterator___standard__kernel__Object__init]))(self); /* init on <self:FlatBufferIterator>*/
}
RET_LABEL:;
}
/* method string#Object#to_s for (self: Object): String */
val* standard__string___Object___to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__string__Object__inspect]))(self); /* inspect on <self:Object>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#native_class_name for (self: Object): NativeString */
char* standard__string___Object___native_class_name(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
char* var1 /* : NativeString */;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
var1 = (char*)var_class_name;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#class_name for (self: Object): String */
val* standard__string___Object___class_name(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
const char* var_class_name;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline string#Object#native_class_name (self) on <self:Object> */
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
var3 = (char*)var_class_name;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var4 = standard___standard__NativeString___Object__to_s(var1);
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#inspect for (self: Object): String */
val* standard__string___Object___inspect(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "<";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ">";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__string__Object__inspect_head]))(self); /* inspect_head on <self:Object>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#inspect_head for (self: Object): String */
val* standard__string___Object___inspect_head(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ":#";
var5 = standard___standard__NativeString___to_s_with_length(var4, 2l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__string__Object__class_name]))(self); /* class_name on <self:Object>*/
}
((struct instance_standard__NativeArray*)var1)->values[0]=var6;
{
var7 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Object__object_id]))(self); /* object_id on <self:Object>*/
}
var8 = standard__string___Int___to_hex(var7);
((struct instance_standard__NativeArray*)var1)->values[2]=var8;
{
var9 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Bool#to_s for (self: Bool): String */
val* standard__string___Bool___Object__to_s(short int self) {
val* var /* : String */;
static val* varonce;
static int varonce_guard;
val* var1 /* : String */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
static int varonce6_guard;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
if (self){
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "true";
var5 = standard___standard__NativeString___to_s_with_length(var4, 4l);
var3 = var5;
varonce2 = var3;
}
var1 = var3;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
} else {
if (likely(varonce6_guard)) {
var7 = varonce6;
} else {
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "false";
var11 = standard___standard__NativeString___to_s_with_length(var10, 5l);
var9 = var11;
varonce8 = var9;
}
var7 = var9;
varonce6 = var7;
varonce6_guard = 1;
}
var = var7;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Bool#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Bool___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
short int var2 /* : Bool */;
var2 = (short int)((long)(self)>>2);
var1 = standard__string___Bool___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#strerror_ext for (self: Int): NativeString */
char* standard__string___Int___strerror_ext(long self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = strerror(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#strerror for (self: Int): String */
val* standard__string___Int___strerror(long self) {
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
var1 = standard__string___Int___strerror_ext(self);
var2 = standard___standard__NativeString___Object__to_s(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#fill_buffer for (self: Int, Buffer, Int, Bool) */
void standard__string___Int___fill_buffer(long self, val* p0, long p1, short int p2) {
val* var_s /* var s: Buffer */;
long var_base /* var base: Int */;
short int var_signed /* var signed: Bool */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_n /* var n: Int */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : SequenceRead[Char] */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var_pos /* var pos: Int */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : SequenceRead[Char] */;
long var38 /* : Int */;
long var40 /* : Int */;
char var41 /* : Char */;
val* var42 /* : nullable Object */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
var_s = p0;
var_base = p1;
var_signed = p2;
{
{ /* Inline kernel#Int#< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var3 = self < 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var6 = -self;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_n = var4;
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var8 = (val*)((long)('-')<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var7, 0l, var8); /* []= on <var7:SequenceRead[Char](Sequence[Char])>*/
}
} else {
{
{ /* Inline kernel#Int#== (self,0l) on <self:Int> */
var11 = self == 0l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var13 = (val*)((long)('0')<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var12, 0l, var13); /* []= on <var12:SequenceRead[Char](Sequence[Char])>*/
}
goto RET_LABEL;
} else {
var_n = self;
}
}
var14 = standard___standard__Int___digit_count(self, var_base);
{
{ /* Inline kernel#Int#- (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var21 = var14 - 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_pos = var15;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var25 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var29 = var_pos >= 0l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
{
{ /* Inline kernel#Int#> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var36 = var_n > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var22 = var30;
} else {
var22 = var_;
}
if (var22){
{
var37 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
{ /* Inline kernel#Int#% (var_n,var_base) on <var_n:Int> */
var40 = var_n % var_base;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var41 = standard___standard__Int___to_c(var38);
{
var42 = (val*)((long)(var41)<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var37, var_pos, var42); /* []= on <var37:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel#Int#/ (var_n,var_base) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var45 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var49 = var_n / var_base;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_n = var43;
{
{ /* Inline kernel#Int#- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var56 = var_pos - 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_pos = var50;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#Int#int_to_s_len for (self: Int): Int */
long standard__string___Int___int_to_s_len(long self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = native_int_length_str(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#native_int_to_s for (self: Int, NativeString, Int) */
void standard__string___Int___native_int_to_s(long self, char* p0, long p1) {
native_int_to_s(self, p0, p1);
RET_LABEL:;
}
/* method string#Int#to_s for (self: Int): String */
val* standard__string___Int___Object__to_s(long self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
long var14 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
char* var20 /* : NativeString */;
char* var22 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
val* var31 /* : FlatString */;
{
{ /* Inline kernel#Int#== (self,0l) on <self:Int> */
var3 = self == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "0";
var6 = standard___standard__NativeString___to_s_with_length(var5, 1l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (self,1l) on <self:Int> */
var9 = self == 1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "1";
var13 = standard___standard__NativeString___to_s_with_length(var12, 1l);
var11 = var13;
varonce10 = var11;
}
var = var11;
goto RET_LABEL;
} else {
}
var14 = standard__string___Int___int_to_s_len(self);
var_nslen = var14;
var15 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var19 = var_nslen + 1l;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var15,var16) on <var15:NativeString> */
var22 = (char*)nit_alloc(var16);
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_ns = var20;
{
{ /* Inline string#NativeString#[]= (var_ns,var_nslen,'\000') on <var_ns:NativeString> */
var_ns[var_nslen]='\000';
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var30 = var_nslen + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
standard__string___Int___native_int_to_s(self, var_ns, var24); /* Direct call string#Int#native_int_to_s on <self:Int>*/
var31 = standard___standard__NativeString___to_s_with_length(var_ns, var_nslen);
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Int___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = standard__string___Int___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#to_hex for (self: Int): String */
val* standard__string___Int___to_hex(long self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = standard__string___Int___to_base(self, 16l, 0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#to_base for (self: Int, Int, Bool): String */
val* standard__string___Int___to_base(long self, long p0, short int p1) {
val* var /* : String */;
long var_base /* var base: Int */;
short int var_signed /* var signed: Bool */;
long var1 /* : Int */;
long var_l /* var l: Int */;
val* var2 /* : FlatBuffer */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var_s /* var s: FlatBuffer */;
val* var7 /* : String */;
var_base = p0;
var_signed = p1;
var1 = standard___standard__Int___digit_count(self, var_base);
var_l = var1;
var2 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = " ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, long p0))(var3->class->vft[COLOR_standard__string__String___42d]))(var3, var_l); /* * on <var3:String>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__string__FlatBuffer__from]))(var2, var6); /* from on <var2:FlatBuffer>*/
}
var_s = var2;
standard__string___Int___fill_buffer(self, var_s, var_base, var_signed); /* Direct call string#Int#fill_buffer on <self:Int>*/
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Float#to_s for (self: Float): String */
val* standard__string___Float___Object__to_s(double self) {
val* var /* : String */;
val* var1 /* : String */;
val* var_str /* var str: String */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_len /* var len: Int */;
long var_i /* var i: Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_14 /* var : Int */;
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
long var_j /* var j: Int */;
val* var36 /* : SequenceRead[Char] */;
val* var37 /* : nullable Object */;
char var38 /* : Char */;
char var_c /* var c: Char */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
val* var52 /* : Text */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
val* var60 /* : Text */;
long var61 /* : Int */;
var1 = standard__string___Float___to_precision(self, 3l);
var_str = var1;
var3 = standard__math___Float___is_inf(self);
{
{ /* Inline kernel#Int#!= (var3,0l) on <var3:Int> */
var6 = var3 == 0l;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
var2 = var_;
} else {
var8 = standard__math___Float___is_nan(self);
var2 = var8;
}
if (var2){
var = var_str;
goto RET_LABEL;
} else {
}
{
var9 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_len = var9;
var_i = 0l;
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var13 = var_len - 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_14 = var10;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_14) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_14:Int> isa OTHER */
/* <var_14:Int> isa OTHER */
var17 = 1; /* easy <var_14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var21 = var_i <= var_14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var28 = var_len - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var22,var_i) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var31 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var35 = var22 - var_i;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_j = var29;
{
var36 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var37 = ((val*(*)(val* self, long p0))((((long)var36&3)?class_info[((long)var36&3)]:var36->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var36, var_j); /* [] on <var36:SequenceRead[Char]>*/
}
var38 = (char)((long)(var37)>>2);
var_c = var38;
{
{ /* Inline kernel#Char#== (var_c,'0') on <var_c:Char> */
var41 = var_c == '0';
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
goto BREAK_label;
} else {
{
{ /* Inline kernel#Char#== (var_c,'.') on <var_c:Char> */
var44 = var_c == '.';
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
{ /* Inline kernel#Int#+ (var_j,2l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var47 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var51 = var_j + 2l;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
var52 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_standard__string__Text__substring]))(var_str, 0l, var45); /* substring on <var_str:String>*/
}
var = var52;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var59 = var_j + 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
var60 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_standard__string__Text__substring]))(var_str, 0l, var53); /* substring on <var_str:String>*/
}
var = var60;
goto RET_LABEL;
}
}
BREAK_label: (void)0;
var61 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var61;
} else {
goto BREAK_label62;
}
}
BREAK_label62: (void)0;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Float#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Float___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Object to Float */;
var1 = standard__string___Float___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Float#to_precision for (self: Float, Int): String */
val* standard__string___Float___to_precision(double self, long p0) {
val* var /* : String */;
long var_decimals /* var decimals: Int */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
long var5 /* : Int */;
long var_isinf /* var isinf: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
long var13 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
long var26 /* : Int */;
long var28 /* : Int */;
val* var29 /* : String */;
double var_f /* var f: Float */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var33 /* : Bool */;
double var34 /* : Float */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
double var40 /* : Float */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
double var49 /* : Float */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
double var55 /* : Float */;
double var56 /* : Float */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
double var62 /* : Float */;
long var63 /* : Int */;
long var65 /* : Int */;
long var_i66 /* var i: Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
val* var78 /* : String */;
val* var79 /* : String */;
long var80 /* : Int */;
val* var81 /* : String */;
val* var_s /* var s: String */;
long var82 /* : Int */;
long var_sl /* var sl: Int */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
short int var89 /* : Bool */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
val* var97 /* : Text */;
val* var_p1 /* var p1: nullable Object */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
val* var105 /* : Text */;
val* var_p2 /* var p2: nullable Object */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : FlatString */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : FlatString */;
long var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
long var120 /* : Int */;
val* var121 /* : String */;
val* var122 /* : String */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : FlatString */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : FlatString */;
val* var139 /* : String */;
val* var140 /* : String */;
var_decimals = p0;
var1 = standard__math___Float___is_nan(self);
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "nan";
var4 = standard___standard__NativeString___to_s_with_length(var3, 3l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var5 = standard__math___Float___is_inf(self);
var_isinf = var5;
{
{ /* Inline kernel#Int#== (var_isinf,1l) on <var_isinf:Int> */
var8 = var_isinf == 1l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "inf";
var12 = standard___standard__NativeString___to_s_with_length(var11, 3l);
var10 = var12;
varonce9 = var10;
}
var = var10;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var15 = -1l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_isinf,var13) on <var_isinf:Int> */
var18 = var_isinf == var13;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "-inf";
var22 = standard___standard__NativeString___to_s_with_length(var21, 4l);
var20 = var22;
varonce19 = var20;
}
var = var20;
goto RET_LABEL;
} else {
}
}
{
{ /* Inline kernel#Int#== (var_decimals,0l) on <var_decimals:Int> */
var25 = var_decimals == 0l;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
{ /* Inline kernel#Float#to_i (self) on <self:Float> */
var28 = (long)self;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var29 = standard__string___Int___Object__to_s(var26);
var = var29;
goto RET_LABEL;
} else {
}
var_f = self;
var_i = 0l;
var_ = var_decimals;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var32 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var33 = var_i < var_;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline kernel#Float#* (var_f,10.0) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <10.0:Float> isa OTHER */
/* <10.0:Float> isa OTHER */
var36 = 1; /* easy <10.0:Float> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 342);
fatal_exit(1);
}
var40 = var_f * 10.0;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_f = var34;
var41 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var41;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Float#> (self,0.0) on <self:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var44 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 337);
fatal_exit(1);
}
var48 = self > 0.0;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
{ /* Inline kernel#Float#+ (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var51 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 339);
fatal_exit(1);
}
var55 = var_f + 0.5;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_f = var49;
} else {
{
{ /* Inline kernel#Float#- (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var58 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 341);
fatal_exit(1);
}
var62 = var_f - 0.5;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_f = var56;
}
{
{ /* Inline kernel#Float#to_i (var_f) on <var_f:Float> */
var65 = (long)var_f;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_i66 = var63;
{
{ /* Inline kernel#Int#== (var_i66,0l) on <var_i66:Int> */
var69 = var_i66 == 0l;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "0.";
var73 = standard___standard__NativeString___to_s_with_length(var72, 2l);
var71 = var73;
varonce70 = var71;
}
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "0";
var77 = standard___standard__NativeString___to_s_with_length(var76, 1l);
var75 = var77;
varonce74 = var75;
}
{
var78 = ((val*(*)(val* self, long p0))(var75->class->vft[COLOR_standard__string__String___42d]))(var75, var_decimals); /* * on <var75:String>*/
}
{
var79 = ((val*(*)(val* self, val* p0))(var71->class->vft[COLOR_standard__string__String___43d]))(var71, var78); /* + on <var71:String>*/
}
var = var79;
goto RET_LABEL;
} else {
}
var80 = standard___standard__Int___abs(var_i66);
var81 = standard__string___Int___Object__to_s(var80);
var_s = var81;
{
var82 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_sl = var82;
{
{ /* Inline kernel#Int#> (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var85 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var89 = var_sl > var_decimals;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (var83){
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var92 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var96 = var_sl - var_decimals;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
var97 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_standard__string__Text__substring]))(var_s, 0l, var90); /* substring on <var_s:String>*/
}
var_p1 = var97;
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var100 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var104 = var_sl - var_decimals;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
var105 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_standard__string__Text__substring]))(var_s, var98, var_decimals); /* substring on <var_s:String>*/
}
var_p2 = var105;
} else {
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "0";
var109 = standard___standard__NativeString___to_s_with_length(var108, 1l);
var107 = var109;
varonce106 = var107;
}
var_p1 = var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "0";
var113 = standard___standard__NativeString___to_s_with_length(var112, 1l);
var111 = var113;
varonce110 = var111;
}
{
{ /* Inline kernel#Int#- (var_decimals,var_sl) on <var_decimals:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var116 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var120 = var_decimals - var_sl;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
{
var121 = ((val*(*)(val* self, long p0))(var111->class->vft[COLOR_standard__string__String___42d]))(var111, var114); /* * on <var111:String>*/
}
{
var122 = ((val*(*)(val* self, val* p0))(var121->class->vft[COLOR_standard__string__String___43d]))(var121, var_s); /* + on <var121:String>*/
}
var_p2 = var122;
}
{
{ /* Inline kernel#Int#< (var_i66,0l) on <var_i66:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var125 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var125)) {
var_class_name128 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var129 = var_i66 < 0l;
var123 = var129;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
if (var123){
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "-";
var133 = standard___standard__NativeString___to_s_with_length(var132, 1l);
var131 = var133;
varonce130 = var131;
}
{
var134 = ((val*(*)(val* self, val* p0))(var131->class->vft[COLOR_standard__string__String___43d]))(var131, var_p1); /* + on <var131:String>*/
}
var_p1 = var134;
} else {
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ".";
var138 = standard___standard__NativeString___to_s_with_length(var137, 1l);
var136 = var138;
varonce135 = var136;
}
{
var139 = ((val*(*)(val* self, val* p0))(var_p1->class->vft[COLOR_standard__string__String___43d]))(var_p1, var136); /* + on <var_p1:nullable Object(String)>*/
}
{
var140 = ((val*(*)(val* self, val* p0))(var139->class->vft[COLOR_standard__string__String___43d]))(var139, var_p2); /* + on <var139:String>*/
}
var = var140;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Char): String */
val* standard__string___Char___Object__to_s(char self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : nullable Object */;
val* var4 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_standard__string__FlatBuffer__with_capacity]))(var1, 1l); /* with_capacity on <var1:FlatBuffer>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:FlatBuffer>*/
}
{
var3 = (val*)((long)(self)<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var2, 0l, var3); /* []= on <var2:SequenceRead[Char](Sequence[Char])>*/
}
{
var4 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Char___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char var2 /* : Char */;
var2 = (char)((long)(self)>>2);
var1 = standard__string___Char___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Char#is_numeric for (self: Char): Bool */
short int standard__string___Char___is_numeric(char self) {
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
/* method string#Char#is_alpha for (self: Char): Bool */
short int standard__string___Char___is_alpha(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_14 /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
{
{ /* Inline kernel#Char#>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var5 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var6 = self >= 'a';
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline kernel#Char#<= (self,'z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var9 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var13 = self <= 'z';
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var2 = var7;
} else {
var2 = var_;
}
var_14 = var2;
if (var2){
var1 = var_14;
} else {
{
{ /* Inline kernel#Char#>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var18 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var22 = self >= 'A';
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_23 = var16;
if (var16){
{
{ /* Inline kernel#Char#<= (self,'Z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var26 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var30 = self <= 'Z';
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var15 = var24;
} else {
var15 = var_23;
}
var1 = var15;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#is_alphanumeric for (self: Char): Bool */
short int standard__string___Char___is_alphanumeric(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
var2 = standard__string___Char___is_numeric(self);
var_ = var2;
if (var2){
var1 = var_;
} else {
var3 = standard__string___Char___is_alpha(self);
var1 = var3;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#to_s for (self: Collection[nullable Object]): String */
val* standard__string___Collection___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var_ /* var : Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : String */;
val* var9 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_s = var1;
var_ = self;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[nullable Object]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[nullable Object]>*/
}
var_e = var5;
if (var_e == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var6 = var7;
}
if (var6){
{
var8 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__string__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var8); /* append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[nullable Object]>*/
}
{
var9 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#join for (self: Collection[nullable Object], Text): String */
val* standard__string___Collection___join(val* self, val* p0) {
val* var /* : String */;
val* var_sep /* var sep: Text */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var6 /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
val* var7 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : String */;
val* var16 /* : String */;
var_sep = p0;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Collection[nullable Object]>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = standard___standard__NativeString___to_s_with_length(var3, 0l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
var_s = var5;
{
var6 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self); /* iterator on <self:Collection[nullable Object]>*/
}
var_i = var6;
{
var7 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var7;
if (var_e == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var8 = var9;
}
if (var8){
{
var10 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__string__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var10); /* append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:Iterator[nullable Object]>*/
}
if (var11){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var_sep); /* append on <var_s:FlatBuffer>*/
}
{
var12 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var12;
if (var_e == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var13 = var14;
}
if (var13){
{
var15 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__string__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var15); /* append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var16 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Array#to_s for (self: Array[nullable Object]): String */
val* standard__string___Array___Object__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : nullable Object */;
val* var19 /* : String */;
val* var20 /* : nullable NativeArray[nullable Object] */;
val* var_its /* var its: nullable NativeArray[nullable Object] */;
val* var21 /* : NativeArray[String] */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var28 /* : Object */;
val* var_itsi /* var itsi: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
val* var38 /* : String */;
val* var_tmp /* var tmp: String */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const struct type* type_struct;
const char* var_class_name51;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
char* var75 /* : NativeString */;
char* var77 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
short int var85 /* : Bool */;
val* var86 /* : nullable Object */;
val* var88 /* : Object */;
val* var_tmp89 /* var tmp: String */;
long var90 /* : Int */;
long var_tpl /* var tpl: Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
char* var94 /* : NativeString */;
long var95 /* : Int */;
long var97 /* : Int */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
long var103 /* : Int */;
val* var104 /* : Iterator[Text] */;
val* var_ /* var : Iterator[String] */;
val* var105 /* : Iterator[nullable Object] */;
val* var_106 /* var : Iterator[String] */;
short int var107 /* : Bool */;
val* var108 /* : nullable Object */;
val* var_j /* var j: String */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
val* var_s /* var s: FlatString */;
long var113 /* : Int */;
long var_slen /* var slen: Int */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
long var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
long var123 /* : Int */;
long var125 /* : Int */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name130;
long var131 /* : Int */;
val* var133 /* : FlatString */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Array[nullable Object]>*/
}
var_l = var1;
{
{ /* Inline kernel#Int#== (var_l,0l) on <var_l:Int> */
var4 = var_l == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "";
var7 = standard___standard__NativeString___to_s_with_length(var6, 0l);
var5 = var7;
varonce = var5;
}
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_l,1l) on <var_l:Int> */
var10 = var_l == 1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var11 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, 0l); /* [] on <self:Array[nullable Object]>*/
}
if (var11 == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, ((val*)NULL)); /* == on <var11:nullable Object>*/
var12 = var13;
}
if (var12){
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "";
var17 = standard___standard__NativeString___to_s_with_length(var16, 0l);
var15 = var17;
varonce14 = var15;
}
var = var15;
goto RET_LABEL;
} else {
{
var18 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, 0l); /* [] on <self:Array[nullable Object]>*/
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2204);
fatal_exit(1);
} else {
var19 = ((val*(*)(val* self))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_standard__string__Object__to_s]))(var18); /* to_s on <var18:nullable Object>*/
}
var = var19;
goto RET_LABEL;
}
} else {
}
var20 = self->attrs[COLOR_standard__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var_its = var20;
var21 = NEW_standard__NativeArray(var_l, &type_standard__NativeArray__standard__String);
var_na = var21;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var24 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var25 = var_i < var_l;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
if (var_its == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2211);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[] (var_its,var_i) on <var_its:nullable NativeArray[nullable Object]> */
var28 = ((struct instance_standard__NativeArray*)var_its)->values[var_i];
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_itsi = var26;
if (var_itsi == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
var30 = ((short int(*)(val* self, val* p0))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_itsi, ((val*)NULL)); /* == on <var_itsi:nullable Object>*/
var29 = var30;
}
if (var29){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var33 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var37 = var_i + 1l;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_i = var31;
goto BREAK_label;
} else {
}
{
var38 = ((val*(*)(val* self))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_standard__string__Object__to_s]))(var_itsi); /* to_s on <var_itsi:nullable Object(Object)>*/
}
var_tmp = var38;
{
var39 = ((long(*)(val* self))(var_tmp->class->vft[COLOR_standard__string__Text__length]))(var_tmp); /* length on <var_tmp:String>*/
}
{
{ /* Inline kernel#Int#+ (var_sl,var39) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var39:Int> isa OTHER */
/* <var39:Int> isa OTHER */
var42 = 1; /* easy <var39:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var46 = var_sl + var39;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_sl = var40;
{
{ /* Inline array#NativeArray#[]= (var_na,var_mypos,var_tmp) on <var_na:NativeArray[String]> */
/* Covariant cast for argument 1 (item) <var_tmp:String> isa E */
/* <var_tmp:String> isa E */
type_struct = var_na->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype49 = type_struct->color;
idtype50 = type_struct->id;
if(cltype49 >= var_tmp->type->table_size) {
var48 = 0;
} else {
var48 = var_tmp->type->type_table[cltype49] == idtype50;
}
if (unlikely(!var48)) {
var_class_name51 = var_tmp == NULL ? "null" : var_tmp->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 960);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var_na)->values[var_mypos]=var_tmp;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var54 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var58 = var_i + 1l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_i = var52;
{
{ /* Inline kernel#Int#+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var61 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var65 = var_mypos + 1l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_mypos = var59;
} else {
goto BREAK_label66;
}
BREAK_label: (void)0;
}
BREAK_label66: (void)0;
var67 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var74 = var_sl + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var67,var68) on <var67:NativeString> */
var77 = (char*)nit_alloc(var68);
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_ns = var75;
{
{ /* Inline string#NativeString#[]= (var_ns,var_sl,'\000') on <var_ns:NativeString> */
var_ns[var_sl]='\000';
RET_LABEL78:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var81 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var85 = var_i < var_mypos;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var88 = ((struct instance_standard__NativeArray*)var_na)->values[var_i];
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_tmp89 = var86;
{
var90 = ((long(*)(val* self))(var_tmp89->class->vft[COLOR_standard__string__Text__length]))(var_tmp89); /* length on <var_tmp89:String>*/
}
var_tpl = var90;
/* <var_tmp89:String> isa FlatString */
cltype92 = type_standard__FlatString.color;
idtype93 = type_standard__FlatString.id;
if(cltype92 >= var_tmp89->type->table_size) {
var91 = 0;
} else {
var91 = var_tmp89->type->type_table[cltype92] == idtype93;
}
if (var91){
{
var94 = ((char*(*)(val* self))(var_tmp89->class->vft[COLOR_standard__string__FlatText__items]))(var_tmp89); /* items on <var_tmp89:String(FlatString)>*/
}
{
var95 = ((long(*)(val* self))(var_tmp89->class->vft[COLOR_standard__string__FlatString__index_from]))(var_tmp89); /* index_from on <var_tmp89:String(FlatString)>*/
}
{
{ /* Inline string#NativeString#copy_to (var94,var_ns,var_tpl,var95,var_off) on <var94:NativeString> */
memmove(var_ns+var_off,var94+var95,var_tpl);
RET_LABEL96:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var99 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var103 = var_off + var_tpl;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var_off = var97;
} else {
{
var104 = ((val*(*)(val* self))(var_tmp89->class->vft[COLOR_standard__string__Text__substrings]))(var_tmp89); /* substrings on <var_tmp89:String>*/
}
var_ = var104;
{
var105 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[String]>*/
}
var_106 = var105;
for(;;) {
{
var107 = ((short int(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_106); /* is_ok on <var_106:Iterator[String]>*/
}
if (var107){
{
var108 = ((val*(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_106); /* item on <var_106:Iterator[String]>*/
}
var_j = var108;
/* <var_j:String> isa FlatString */
cltype110 = type_standard__FlatString.color;
idtype111 = type_standard__FlatString.id;
if(cltype110 >= var_j->type->table_size) {
var109 = 0;
} else {
var109 = var_j->type->type_table[cltype110] == idtype111;
}
if (unlikely(!var109)) {
var_class_name112 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2234);
fatal_exit(1);
}
var_s = var_j;
{
var113 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:FlatString>*/
}
var_slen = var113;
{
var114 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:FlatString>*/
}
{
var115 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatString__index_from]))(var_s); /* index_from on <var_s:FlatString>*/
}
{
{ /* Inline string#NativeString#copy_to (var114,var_ns,var_slen,var115,var_off) on <var114:NativeString> */
memmove(var_ns+var_off,var114+var115,var_slen);
RET_LABEL116:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var119 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var123 = var_off + var_slen;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_off = var117;
{
((void(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_106); /* next on <var_106:Iterator[String]>*/
}
} else {
goto BREAK_label124;
}
}
BREAK_label124: (void)0;
{
((void(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_106); /* finish on <var_106:Iterator[String]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var127 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var127)) {
var_class_name130 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name130);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var131 = var_i + 1l;
var125 = var131;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
var_i = var125;
} else {
goto BREAK_label132;
}
}
BREAK_label132: (void)0;
var133 = standard___standard__NativeString___to_s_with_length(var_ns, var_sl);
var = var133;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeArray#native_to_s for (self: NativeArray[nullable Object]): String */
val* standard__string___NativeArray___native_to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
long var2 /* : Int */;
long var4 /* : Int */;
long var_l /* var l: Int */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var13 /* : Object */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
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
char* var36 /* : NativeString */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
char* var44 /* : NativeString */;
char* var46 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var57 /* : Object */;
val* var_tmp /* var tmp: String */;
long var58 /* : Int */;
long var_tpl /* var tpl: Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
char* var62 /* : NativeString */;
long var63 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
val* var72 /* : Iterator[Text] */;
val* var_ /* var : Iterator[String] */;
val* var73 /* : Iterator[nullable Object] */;
val* var_74 /* var : Iterator[String] */;
short int var75 /* : Bool */;
val* var76 /* : nullable Object */;
val* var_j /* var j: String */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
val* var_s /* var s: FlatString */;
long var81 /* : Int */;
long var_slen /* var slen: Int */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
long var93 /* : Int */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
long var99 /* : Int */;
val* var101 /* : FlatString */;
/* <self:NativeArray[nullable Object]> isa NativeArray[String] */
cltype = type_standard__NativeArray__standard__String.color;
idtype = type_standard__NativeArray__standard__String.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2253);
fatal_exit(1);
}
{
{ /* Inline array#NativeArray#length (self) on <self:NativeArray[nullable Object](NativeArray[String])> */
var4 = ((struct instance_standard__NativeArray*)self)->length;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_l = var2;
var_na = self;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var7 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var10 = var_i < var_l;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var13 = ((struct instance_standard__NativeArray*)var_na)->values[var_i];
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var14 = ((long(*)(val* self))(var11->class->vft[COLOR_standard__string__Text__length]))(var11); /* length on <var11:nullable Object(String)>*/
}
{
{ /* Inline kernel#Int#+ (var_sl,var14) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var21 = var_sl + var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_sl = var15;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var28 = var_i + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
{
{ /* Inline kernel#Int#+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var35 = var_mypos + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_mypos = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var36 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var43 = var_sl + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var36,var37) on <var36:NativeString> */
var46 = (char*)nit_alloc(var37);
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_ns = var44;
{
{ /* Inline string#NativeString#[]= (var_ns,var_sl,'\000') on <var_ns:NativeString> */
var_ns[var_sl]='\000';
RET_LABEL47:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var50 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var54 = var_i < var_mypos;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var57 = ((struct instance_standard__NativeArray*)var_na)->values[var_i];
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_tmp = var55;
{
var58 = ((long(*)(val* self))(var_tmp->class->vft[COLOR_standard__string__Text__length]))(var_tmp); /* length on <var_tmp:String>*/
}
var_tpl = var58;
/* <var_tmp:String> isa FlatString */
cltype60 = type_standard__FlatString.color;
idtype61 = type_standard__FlatString.id;
if(cltype60 >= var_tmp->type->table_size) {
var59 = 0;
} else {
var59 = var_tmp->type->type_table[cltype60] == idtype61;
}
if (var59){
{
var62 = ((char*(*)(val* self))(var_tmp->class->vft[COLOR_standard__string__FlatText__items]))(var_tmp); /* items on <var_tmp:String(FlatString)>*/
}
{
var63 = ((long(*)(val* self))(var_tmp->class->vft[COLOR_standard__string__FlatString__index_from]))(var_tmp); /* index_from on <var_tmp:String(FlatString)>*/
}
{
{ /* Inline string#NativeString#copy_to (var62,var_ns,var_tpl,var63,var_off) on <var62:NativeString> */
memmove(var_ns+var_off,var62+var63,var_tpl);
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var67 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var71 = var_off + var_tpl;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_off = var65;
} else {
{
var72 = ((val*(*)(val* self))(var_tmp->class->vft[COLOR_standard__string__Text__substrings]))(var_tmp); /* substrings on <var_tmp:String>*/
}
var_ = var72;
{
var73 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[String]>*/
}
var_74 = var73;
for(;;) {
{
var75 = ((short int(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_74); /* is_ok on <var_74:Iterator[String]>*/
}
if (var75){
{
var76 = ((val*(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_74); /* item on <var_74:Iterator[String]>*/
}
var_j = var76;
/* <var_j:String> isa FlatString */
cltype78 = type_standard__FlatString.color;
idtype79 = type_standard__FlatString.id;
if(cltype78 >= var_j->type->table_size) {
var77 = 0;
} else {
var77 = var_j->type->type_table[cltype78] == idtype79;
}
if (unlikely(!var77)) {
var_class_name80 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2276);
fatal_exit(1);
}
var_s = var_j;
{
var81 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:FlatString>*/
}
var_slen = var81;
{
var82 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:FlatString>*/
}
{
var83 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatString__index_from]))(var_s); /* index_from on <var_s:FlatString>*/
}
{
{ /* Inline string#NativeString#copy_to (var82,var_ns,var_slen,var83,var_off) on <var82:NativeString> */
memmove(var_ns+var_off,var82+var83,var_slen);
RET_LABEL84:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var87 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var91 = var_off + var_slen;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_off = var85;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_74); /* next on <var_74:Iterator[String]>*/
}
} else {
goto BREAK_label92;
}
}
BREAK_label92: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_74); /* finish on <var_74:Iterator[String]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var95 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var99 = var_i + 1l;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var_i = var93;
} else {
goto BREAK_label100;
}
}
BREAK_label100: (void)0;
var101 = standard___standard__NativeString___to_s_with_length(var_ns, var_sl);
var = var101;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Map#join for (self: Map[nullable Object, nullable Object], String, String): String */
val* standard__string___Map___join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_sep /* var sep: String */;
val* var_couple_sep /* var couple_sep: String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var6 /* : MapIterator[nullable Object, nullable Object] */;
val* var_i /* var i: MapIterator[nullable Object, nullable Object] */;
val* var7 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var8 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
val* var11 /* : Object */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var17 /* : Object */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : String */;
val* var23 /* : String */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var26 /* : nullable Object */;
val* var28 /* : NativeArray[String] */;
static val* varonce27;
val* var29 /* : Object */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : String */;
val* var35 /* : Object */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
var_sep = p0;
var_couple_sep = p1;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__is_empty]))(self); /* is_empty on <self:Map[nullable Object, nullable Object]>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = standard___standard__NativeString___to_s_with_length(var3, 0l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
var_s = var5;
{
var6 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(self); /* iterator on <self:Map[nullable Object, nullable Object]>*/
}
var_i = var6;
{
var7 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var7;
{
var8 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var8;
if (unlikely(varonce9==NULL)) {
var10 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
} else {
var10 = varonce9;
varonce9 = NULL;
}
if (var_k!=NULL) {
var11 = var_k;
} else {
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "<null>";
var15 = standard___standard__NativeString___to_s_with_length(var14, 6l);
var13 = var15;
varonce12 = var13;
}
var11 = var13;
}
{
var16 = ((val*(*)(val* self))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_standard__string__Object__to_s]))(var11); /* to_s on <var11:Object>*/
}
((struct instance_standard__NativeArray*)var10)->values[0]=var16;
((struct instance_standard__NativeArray*)var10)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var17 = var_e;
} else {
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "<null>";
var21 = standard___standard__NativeString___to_s_with_length(var20, 6l);
var19 = var21;
varonce18 = var19;
}
var17 = var19;
}
{
var22 = ((val*(*)(val* self))((((long)var17&3)?class_info[((long)var17&3)]:var17->class)->vft[COLOR_standard__string__Object__to_s]))(var17); /* to_s on <var17:Object>*/
}
((struct instance_standard__NativeArray*)var10)->values[2]=var22;
{
var23 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var23); /* append on <var_s:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_i); /* is_ok on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
if (var24){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var_sep); /* append on <var_s:FlatBuffer>*/
}
{
var25 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var25;
{
var26 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var26;
if (unlikely(varonce27==NULL)) {
var28 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
} else {
var28 = varonce27;
varonce27 = NULL;
}
if (var_k!=NULL) {
var29 = var_k;
} else {
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "<null>";
var33 = standard___standard__NativeString___to_s_with_length(var32, 6l);
var31 = var33;
varonce30 = var31;
}
var29 = var31;
}
{
var34 = ((val*(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_standard__string__Object__to_s]))(var29); /* to_s on <var29:Object>*/
}
((struct instance_standard__NativeArray*)var28)->values[0]=var34;
((struct instance_standard__NativeArray*)var28)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var35 = var_e;
} else {
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "<null>";
var39 = standard___standard__NativeString___to_s_with_length(var38, 6l);
var37 = var39;
varonce36 = var37;
}
var35 = var37;
}
{
var40 = ((val*(*)(val* self))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_standard__string__Object__to_s]))(var35); /* to_s on <var35:Object>*/
}
((struct instance_standard__NativeArray*)var28)->values[2]=var40;
{
var41 = ((val*(*)(val* self))(var28->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce27 = var28;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var41); /* append on <var_s:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var42 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#new for (self: NativeString, Int): NativeString */
char* standard___standard__NativeString___new(char* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = (char*)nit_alloc(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#fast_cstring for (self: NativeString, Int): NativeString */
char* standard___standard__NativeString___fast_cstring(char* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self + p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#[] for (self: NativeString, Int): Char */
char standard___standard__NativeString____91d_93d(char* self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#[]= for (self: NativeString, Int, Char) */
void standard___standard__NativeString____91d_93d_61d(char* self, long p0, char p1) {
self[p0]=p1;
RET_LABEL:;
}
/* method string#NativeString#copy_to for (self: NativeString, NativeString, Int, Int, Int) */
void standard___standard__NativeString___copy_to(char* self, char* p0, long p1, long p2, long p3) {
memmove(p0+p3,self+p2,p1);
RET_LABEL:;
}
/* method string#NativeString#cstring_length for (self: NativeString): Int */
long standard___standard__NativeString___cstring_length(char* self) {
long var /* : Int */;
long var_l /* var l: Int */;
char var1 /* : Char */;
char var3 /* : Char */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
var_l = 0l;
for(;;) {
{
{ /* Inline string#NativeString#[] (self,var_l) on <self:NativeString> */
var3 = self[var_l];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Char#!= (var1,'\000') on <var1:Char> */
var6 = var1 == '\000';
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Int#+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var11 = var_l + 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_l = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#atoi for (self: NativeString): Int */
long standard___standard__NativeString___atoi(char* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = atoi(self);;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#atof for (self: NativeString): Float */
double standard___standard__NativeString___atof(char* self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = atof(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s for (self: NativeString): String */
val* standard___standard__NativeString___Object__to_s(char* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
var1 = standard___standard__NativeString___cstring_length(self);
var2 = standard___standard__NativeString___to_s_with_length(self, var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s for (self: Object): String */
val* VIRTUAL_standard___standard__NativeString___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
var2 = ((struct instance_standard__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = standard___standard__NativeString___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_length for (self: NativeString, Int): FlatString */
val* standard___standard__NativeString___to_s_with_length(char* self, long p0) {
val* var /* : FlatString */;
long var_length /* var length: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : FlatString */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
val* var_str /* var str: FlatString */;
var_length = p0;
{
{ /* Inline kernel#Int#>= (var_length,0l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var4 = var_length >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2368);
fatal_exit(1);
}
var5 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline kernel#Int#- (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var12 = var_length - 1l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var5->class->vft[COLOR_standard__string__FlatString__with_infos]))(var5, self, var_length, 0l, var6); /* with_infos on <var5:FlatString>*/
}
var_str = var5;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_copy for (self: NativeString): FlatString */
val* standard___standard__NativeString___to_s_with_copy(char* self) {
val* var /* : FlatString */;
long var1 /* : Int */;
long var_length /* var length: Int */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
char* var_new_self /* var new_self: NativeString */;
val* var11 /* : FlatString */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var_str /* var str: FlatString */;
val* var20 /* : nullable NativeString */;
var1 = standard___standard__NativeString___cstring_length(self);
var_length = var1;
var2 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var6 = var_length + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var2,var3) on <var2:NativeString> */
var9 = (char*)nit_alloc(var3);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_new_self = var7;
{
{ /* Inline string#NativeString#copy_to (self,var_new_self,var_length,0l,0l) on <self:NativeString> */
memmove(var_new_self+0l,self+0l,var_length);
RET_LABEL10:(void)0;
}
}
var11 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline kernel#Int#- (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var18 = var_length - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var11->class->vft[COLOR_standard__string__FlatString__with_infos]))(var11, var_new_self, var_length, 0l, var12); /* with_infos on <var11:FlatString>*/
}
var_str = var11;
{
{ /* Inline string#NativeString#[]= (var_new_self,var_length,'\000') on <var_new_self:NativeString> */
var_new_self[var_length]='\000';
RET_LABEL19:(void)0;
}
}
{
var20 = BOX_standard__NativeString(var_new_self); /* autobox from NativeString to nullable NativeString */
((void(*)(val* self, val* p0))(var_str->class->vft[COLOR_standard__string__FlatText__real_items_61d]))(var_str, var20); /* real_items= on <var_str:FlatString>*/
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#args_cache for (self: Sys): nullable Sequence[String] */
val* standard__string___Sys___args_cache(val* self) {
val* var /* : nullable Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_standard__string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#args_cache= for (self: Sys, nullable Sequence[String]) */
void standard__string___Sys___args_cache_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__Sys___args_cache].val = p0; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method string#Sys#program_args for (self: Sys): Sequence[String] */
val* standard__string___Sys___program_args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_standard__string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable Sequence[String]>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string__Sys__init_args]))(self); /* init_args on <self:Sys>*/
}
} else {
}
var4 = self->attrs[COLOR_standard__string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2393);
fatal_exit(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#program_name for (self: Sys): String */
val* standard__string___Sys___program_name(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline string#Sys#native_argv (self,0l) on <self:Sys> */
var3 = glob_argv[0l];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var4 = standard___standard__NativeString___Object__to_s(var1);
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#init_args for (self: Sys) */
void standard__string___Sys___init_args(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var_argc /* var argc: Int */;
val* var3 /* : Array[String] */;
val* var_args /* var args: Array[String] */;
long var_i /* var i: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
{
{ /* Inline string#Sys#native_argc (self) on <self:Sys> */
var2 = glob_argc;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_argc = var;
var3 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self, long p0))(var3->class->vft[COLOR_standard__array__Array__with_capacity]))(var3, 0l); /* with_capacity on <var3:Array[String]>*/
}
var_args = var3;
var_i = 1l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_argc) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_argc:Int> isa OTHER */
/* <var_argc:Int> isa OTHER */
var6 = 1; /* easy <var_argc:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var7 = var_i < var_argc;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var14 = var_i - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline string#Sys#native_argv (self,var_i) on <self:Sys> */
var17 = glob_argv[var_i];
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var18 = standard___standard__NativeString___Object__to_s(var15);
{
((void(*)(val* self, long p0, val* p1))(var_args->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_args, var8, var18); /* []= on <var_args:Array[String]>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var25 = var_i + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_i = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_standard__string__Sys___args_cache].val = var_args; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method string#Sys#native_argc for (self: Sys): Int */
long standard__string___Sys___native_argc(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = glob_argc;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#native_argv for (self: Sys, Int): NativeString */
char* standard__string___Sys___native_argv(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = glob_argv[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#alpha_comparator for (self: Sys): Comparator */
val* standard__string___Sys___alpha_comparator(val* self) {
val* var /* : Comparator */;
static val* varonce;
static int varonce_guard;
val* var1 /* : AlphaComparator */;
val* var2 /* : AlphaComparator */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_standard__string__AlphaComparator(&type_standard__string__AlphaComparator);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:AlphaComparator>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#args for (self: Sys): Sequence[String] */
val* standard__string___Sys___args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : Sequence[String] */;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__Sys__program_args]))(var1); /* program_args on <var1:Sys>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#cache for (self: CachedAlphaComparator): HashMap[Object, String] */
val* standard___standard__CachedAlphaComparator___cache(val* self) {
val* var /* : HashMap[Object, String] */;
val* var1 /* : HashMap[Object, String] */;
var1 = self->attrs[COLOR_standard__string__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2438);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#cache= for (self: CachedAlphaComparator, HashMap[Object, String]) */
void standard___standard__CachedAlphaComparator___cache_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__CachedAlphaComparator___cache].val = p0; /* _cache on <self:CachedAlphaComparator> */
RET_LABEL:;
}
/* method string#CachedAlphaComparator#do_to_s for (self: CachedAlphaComparator, Object): String */
val* standard___standard__CachedAlphaComparator___do_to_s(val* self, val* p0) {
val* var /* : String */;
val* var_a /* var a: Object */;
val* var1 /* : HashMap[Object, String] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[Object, String] */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
val* var_res /* var res: String */;
val* var6 /* : HashMap[Object, String] */;
var_a = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__CachedAlphaComparator__cache]))(self); /* cache on <self:CachedAlphaComparator>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_a); /* has_key on <var1:HashMap[Object, String]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__CachedAlphaComparator__cache]))(self); /* cache on <self:CachedAlphaComparator>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var3, var_a); /* [] on <var3:HashMap[Object, String]>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:Object>*/
}
var_res = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__CachedAlphaComparator__cache]))(self); /* cache on <self:CachedAlphaComparator>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var6, var_a, var_res); /* []= on <var6:HashMap[Object, String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#compare for (self: CachedAlphaComparator, Object, Object): Int */
long standard___standard__CachedAlphaComparator___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
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
val* var_a /* var a: Object */;
val* var_b /* var b: Object */;
val* var7 /* : String */;
val* var8 /* : String */;
long var9 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Object> isa COMPARED */
/* <p0:Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2447);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:Object> isa COMPARED */
/* <p1:Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2447);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__CachedAlphaComparator__do_to_s]))(self, var_a); /* do_to_s on <self:CachedAlphaComparator>*/
}
{
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__CachedAlphaComparator__do_to_s]))(self, var_b); /* do_to_s on <self:CachedAlphaComparator>*/
}
{
var9 = ((long(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Comparable___60d_61d_62d]))(var7, var8); /* <=> on <var7:String>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AlphaComparator#compare for (self: AlphaComparator, nullable Object, nullable Object): Int */
long standard__string___standard__string__AlphaComparator___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_a /* var a: nullable Object */;
val* var_b /* var b: nullable Object */;
val* var8 /* : String */;
val* var9 /* : String */;
long var10 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa COMPARED */
/* <p0:nullable Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2455);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa COMPARED */
/* <p1:nullable Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2455);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
if (var_a == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2455);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:nullable Object>*/
}
if (var_b == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2455);
fatal_exit(1);
} else {
var9 = ((val*(*)(val* self))((((long)var_b&3)?class_info[((long)var_b&3)]:var_b->class)->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:nullable Object>*/
}
{
var10 = ((long(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Comparable___60d_61d_62d]))(var8, var9); /* <=> on <var8:String>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
