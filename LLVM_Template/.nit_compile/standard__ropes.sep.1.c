#include "standard__ropes.sep.0.h"
/* method ropes#RopeString#chars for (self: RopeString): SequenceRead[Char] */
val* standard__ropes___standard__ropes__RopeString___standard__string__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : SequenceRead[Char] */;
val* var5 /* : RopeChars */;
var1 = self->attrs[COLOR_standard__ropes__RopeString___chars].val != NULL; /* _chars on <self:RopeString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__ropes__RopeString___chars].val; /* _chars on <self:RopeString> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 70);
fatal_exit(1);
}
} else {
{
var5 = NEW_standard__ropes__RopeChars(&type_standard__ropes__RopeChars);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var5, self); /* target= on <var5:RopeChars>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:RopeChars>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_standard__ropes__RopeString___chars].val = var3; /* _chars on <self:RopeString> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeString#chars= for (self: RopeString, SequenceRead[Char]) */
void standard__ropes___standard__ropes__RopeString___chars_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeString___chars].val = p0; /* _chars on <self:RopeString> */
RET_LABEL:;
}
/* method ropes#Concat#length for (self: Concat): Int */
long standard__ropes___standard__ropes__Concat___standard__string__Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__Concat___length].l; /* _length on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#length= for (self: Concat, Int) */
void standard__ropes___standard__ropes__Concat___length_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__Concat___length].l = p0; /* _length on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#substrings for (self: Concat): Iterator[Text] */
val* standard__ropes___standard__ropes__Concat___standard__string__Text__substrings(val* self) {
val* var /* : Iterator[Text] */;
val* var1 /* : RopeSubstrings */;
var1 = NEW_standard__ropes__RopeSubstrings(&type_standard__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__RopeSubstrings__init]))(var1, self); /* init on <var1:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#empty for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___standard__string__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = standard___standard__NativeString___to_s_with_length(var2, 0l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_cstring for (self: Concat): NativeString */
char* standard__ropes___standard__ropes__Concat___standard__string__Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
char* var3 /* : NativeString */;
long var5 /* : Int */;
long var_len /* var len: Int */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
char* var11 /* : NativeString */;
char* var13 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
val* var15 /* : Iterator[Text] */;
val* var_ /* var : Iterator[Text] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[Text] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_i /* var i: Text */;
long var20 /* : Int */;
long var_ilen /* var ilen: Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
char* var25 /* : NativeString */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__Concat__lazy_32d_to_cstring].s; /* lazy _to_cstring on <self:Concat> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__ropes__Concat___to_cstring].str; /* _to_cstring on <self:Concat> */
} else {
{
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Concat>*/
}
var_len = var5;
var6 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var10 = var_len + 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var6,var7) on <var6:NativeString> */
var13 = (char*)nit_alloc(var7);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ns = var11;
{
{ /* Inline string#NativeString#[]= (var_ns,var_len,'\000') on <var_ns:NativeString> */
var_ns[var_len]='\000';
RET_LABEL14:(void)0;
}
}
var_off = 0l;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__substrings]))(self); /* substrings on <self:Concat>*/
}
var_ = var15;
{
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[Text]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[Text]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[Text]>*/
}
var_i = var19;
{
var20 = ((long(*)(val* self))(var_i->class->vft[COLOR_standard__string__Text__length]))(var_i); /* length on <var_i:Text>*/
}
var_ilen = var20;
/* <var_i:Text> isa FlatString */
cltype22 = type_standard__FlatString.color;
idtype23 = type_standard__FlatString.id;
if(cltype22 >= var_i->type->table_size) {
var21 = 0;
} else {
var21 = var_i->type->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
var_class_name24 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 90);
fatal_exit(1);
}
{
var25 = ((char*(*)(val* self))(var_i->class->vft[COLOR_standard__string__FlatText__items]))(var_i); /* items on <var_i:Text(FlatString)>*/
}
/* <var_i:Text> isa FlatString */
cltype27 = type_standard__FlatString.color;
idtype28 = type_standard__FlatString.id;
if(cltype27 >= var_i->type->table_size) {
var26 = 0;
} else {
var26 = var_i->type->type_table[cltype27] == idtype28;
}
if (unlikely(!var26)) {
var_class_name29 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 90);
fatal_exit(1);
}
{
var30 = ((long(*)(val* self))(var_i->class->vft[COLOR_standard__string__FlatString__index_from]))(var_i); /* index_from on <var_i:Text(FlatString)>*/
}
{
{ /* Inline string#NativeString#copy_to (var25,var_ns,var_ilen,var30,var_off) on <var25:NativeString> */
memmove(var_ns+var_off,var25+var30,var_ilen);
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_ilen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_ilen:Int> isa OTHER */
/* <var_ilen:Int> isa OTHER */
var34 = 1; /* easy <var_ilen:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var38 = var_off + var_ilen;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_off = var32;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[Text]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[Text]>*/
}
var3 = var_ns;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_standard__ropes__Concat___to_cstring].str = var3; /* _to_cstring on <self:Concat> */
var2 = var3;
self->attrs[COLOR_standard__ropes__Concat__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:Concat> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_cstring= for (self: Concat, NativeString) */
void standard__ropes___standard__ropes__Concat___to_cstring_61d(val* self, char* p0) {
self->attrs[COLOR_standard__ropes__Concat___to_cstring].str = p0; /* _to_cstring on <self:Concat> */
self->attrs[COLOR_standard__ropes__Concat__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#left for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___left(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#left= for (self: Concat, String) */
void standard__ropes___standard__ropes__Concat___left_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__Concat___left].val = p0; /* _left on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#right for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___right(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#right= for (self: Concat, String) */
void standard__ropes___standard__ropes__Concat___right_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__Concat___right].val = p0; /* _right on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#init for (self: Concat) */
void standard__ropes___standard__ropes__Concat___standard__kernel__Object__init(val* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes___standard__ropes__Concat___standard__kernel__Object__init]))(self); /* init on <self:Concat>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var1 = ((long(*)(val* self))(var->class->vft[COLOR_standard__string__Text__length]))(var); /* length on <var:String>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__length]))(var2); /* length on <var2:String>*/
}
{
{ /* Inline kernel#Int#+ (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var7 = var1 + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__Concat__length_61d]))(self, var4); /* length= on <self:Concat>*/
}
RET_LABEL:;
}
/* method ropes#Concat#output for (self: Concat) */
void standard__ropes___standard__ropes__Concat___standard__kernel__Object__output(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__output]))(var); /* output on <var:String>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__output]))(var1); /* output on <var1:String>*/
}
RET_LABEL:;
}
/* method ropes#Concat#iterator for (self: Concat): Iterator[Char] */
val* standard__ropes___standard__ropes__Concat___standard__string__Text__iterator(val* self) {
val* var /* : Iterator[Char] */;
val* var1 /* : RopeIter */;
var1 = NEW_standard__ropes__RopeIter(&type_standard__ropes__RopeIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__RopeIter__init]))(var1, self); /* init on <var1:RopeIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#* for (self: Concat, Int): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var_x /* var x: String */;
long var_j /* var j: Int */;
long var_ /* var : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : String */;
long var6 /* : Int */;
var_i = p0;
var_x = self;
var_j = 1l;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var3 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var4 = var_j < var_;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((val*(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__string__String___43d]))(var_x, self); /* + on <var_x:String>*/
}
var_x = var5;
var6 = standard___standard__Int___Discrete__successor(var_j, 1l);
var_j = var6;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_x;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#[] for (self: Concat, Int): Char */
char standard__ropes___standard__ropes__Concat___standard__string__Text___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : String */;
long var2 /* : Int */;
long var_llen /* var llen: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : String */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
char var15 /* : Char */;
val* var16 /* : String */;
char var17 /* : Char */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
var_llen = var2;
{
{ /* Inline kernel#Int#>= (var_i,var_llen) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var5 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var6 = var_i >= var_llen;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
{ /* Inline kernel#Int#- (var_i,var_llen) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var10 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var14 = var_i - var_llen;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((char(*)(val* self, long p0))(var7->class->vft[COLOR_standard__string__Text___91d_93d]))(var7, var8); /* [] on <var7:String>*/
}
var = var15;
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var17 = ((char(*)(val* self, long p0))(var16->class->vft[COLOR_standard__string__Text___91d_93d]))(var16, var_i); /* [] on <var16:String>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#substring for (self: Concat, Int, Int): String */
val* standard__ropes___standard__ropes__Concat___standard__string__Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_len /* var len: Int */;
val* var1 /* : String */;
long var2 /* : Int */;
long var_llen /* var llen: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
val* var21 /* : String */;
val* var22 /* : Text */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var_lsublen /* var lsublen: Int */;
val* var30 /* : String */;
val* var31 /* : Text */;
val* var32 /* : String */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
val* var40 /* : Text */;
val* var41 /* : String */;
val* var42 /* : String */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
val* var50 /* : Text */;
var_from = p0;
var_len = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
var_llen = var2;
{
{ /* Inline kernel#Int#< (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var5 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var_from < var_llen;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel#Int#+ (var_from,var_len) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var9 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var13 = var_from + var_len;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var7,var_llen) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var16 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var20 = var7 < var_llen;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var22 = ((val*(*)(val* self, long p0, long p1))(var21->class->vft[COLOR_standard__string__Text__substring]))(var21, var_from, var_len); /* substring on <var21:String>*/
}
var = var22;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#- (var_llen,var_from) on <var_llen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var25 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var29 = var_llen - var_from;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_lsublen = var23;
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var31 = ((val*(*)(val* self, long p0))(var30->class->vft[COLOR_standard__string__Text__substring_from]))(var30, var_from); /* substring_from on <var30:String>*/
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
{ /* Inline kernel#Int#- (var_len,var_lsublen) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_lsublen:Int> isa OTHER */
/* <var_lsublen:Int> isa OTHER */
var35 = 1; /* easy <var_lsublen:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var39 = var_len - var_lsublen;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
var40 = ((val*(*)(val* self, long p0, long p1))(var32->class->vft[COLOR_standard__string__Text__substring]))(var32, 0l, var33); /* substring on <var32:String>*/
}
{
var41 = ((val*(*)(val* self, val* p0))(var31->class->vft[COLOR_standard__string__String___43d]))(var31, var40); /* + on <var31:Text(String)>*/
}
var = var41;
goto RET_LABEL;
} else {
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
{ /* Inline kernel#Int#- (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var45 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var49 = var_from - var_llen;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
var50 = ((val*(*)(val* self, long p0, long p1))(var42->class->vft[COLOR_standard__string__Text__substring]))(var42, var43, var_len); /* substring on <var42:String>*/
}
var = var50;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#Concat#reversed for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String__reversed(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var1 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__String__reversed]))(var2); /* reversed on <var2:String>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__String__reversed]))(var4); /* reversed on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#insert_at for (self: Concat, String, Int): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String__insert_at(val* self, val* p0, long p1) {
val* var /* : String */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
val* var1 /* : String */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var9 /* : String */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_s = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
{
{ /* Inline kernel#Int#> (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var6 = var_pos > var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var10 = ((long(*)(val* self))(var9->class->vft[COLOR_standard__string__Text__length]))(var9); /* length on <var9:String>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var10) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var17 = var_pos - var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var18 = ((val*(*)(val* self, val* p0, long p1))(var8->class->vft[COLOR_standard__string__String__insert_at]))(var8, var_s, var11); /* insert_at on <var8:String>*/
}
{
var19 = ((val*(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__string__String___43d]))(var7, var18); /* + on <var7:String>*/
}
var = var19;
goto RET_LABEL;
} else {
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var21 = ((val*(*)(val* self, val* p0, long p1))(var20->class->vft[COLOR_standard__string__String__insert_at]))(var20, var_s, var_pos); /* insert_at on <var20:String>*/
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
var23 = ((val*(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__string__String___43d]))(var21, var22); /* + on <var21:String>*/
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_upper for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var1 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__String__to_upper]))(var2); /* to_upper on <var2:String>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__String__to_upper]))(var4); /* to_upper on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_lower for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var1 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__String__to_lower]))(var2); /* to_lower on <var2:String>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__String__to_lower]))(var4); /* to_lower on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#+ for (self: Concat, Text): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Concat */;
val* var5 /* : String */;
val* var_r /* var r: String */;
long var6 /* : Int */;
long var_rlen /* var rlen: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : Sys */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : Concat */;
val* var23 /* : Concat */;
val* var24 /* : String */;
val* var25 /* : String */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_standard__string__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_slen = var2;
/* <var_s:String> isa Concat */
cltype = type_standard__ropes__Concat.color;
idtype = type_standard__ropes__Concat.id;
if(cltype >= var_s->type->table_size) {
var3 = 0;
} else {
var3 = var_s->type->type_table[cltype] == idtype;
}
if (var3){
var4 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var4, self); /* left= on <var4:Concat>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var4, var_s); /* right= on <var4:Concat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Concat>*/
}
var = var4;
goto RET_LABEL;
} else {
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__right]))(self); /* right on <self:Concat>*/
}
var_r = var5;
{
var6 = ((long(*)(val* self))(var_r->class->vft[COLOR_standard__string__Text__length]))(var_r); /* length on <var_r:String>*/
}
var_rlen = var6;
{
{ /* Inline kernel#Int#+ (var_rlen,var_slen) on <var_rlen:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var9 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var12 = var_rlen + var_slen;
var7 = var12;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var13 = glob_sys;
{
var14 = ((long(*)(val* self))(var13->class->vft[COLOR_standard__ropes__Sys__maxlen]))(var13); /* maxlen on <var13:Sys>*/
}
{
{ /* Inline kernel#Int#> (var7,var14) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var21 = var7 > var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var22 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var22, self); /* left= on <var22:Concat>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var22, var_s); /* right= on <var22:Concat>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:Concat>*/
}
var = var22;
goto RET_LABEL;
} else {
}
var23 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__Concat__left]))(self); /* left on <self:Concat>*/
}
{
var25 = ((val*(*)(val* self, val* p0))(var_r->class->vft[COLOR_standard__string__String___43d]))(var_r, var_s); /* + on <var_r:String>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var23, var24); /* left= on <var23:Concat>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var23, var25); /* right= on <var23:Concat>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:Concat>*/
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#chars for (self: RopeBuffer): Sequence[Char] */
val* standard___standard__RopeBuffer___standard__string__Text__chars(val* self) {
val* var /* : Sequence[Char] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Char] */;
val* var3 /* : Sequence[Char] */;
val* var5 /* : RopeBufferChars */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___chars].val != NULL; /* _chars on <self:RopeBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__ropes__RopeBuffer___chars].val; /* _chars on <self:RopeBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 180);
fatal_exit(1);
}
} else {
{
var5 = NEW_standard__RopeBufferChars(&type_standard__RopeBufferChars);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var5, self); /* target= on <var5:RopeBufferChars>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:RopeBufferChars>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_standard__ropes__RopeBuffer___chars].val = var3; /* _chars on <self:RopeBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#chars= for (self: RopeBuffer, Sequence[Char]) */
void standard___standard__RopeBuffer___chars_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___chars].val = p0; /* _chars on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#str for (self: RopeBuffer): String */
val* standard___standard__RopeBuffer___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 182);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#str= for (self: RopeBuffer, String) */
void standard___standard__RopeBuffer___str_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___str].val = p0; /* _str on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#ns for (self: RopeBuffer): NativeString */
char* standard___standard__RopeBuffer___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#ns= for (self: RopeBuffer, NativeString) */
void standard___standard__RopeBuffer___ns_61d(val* self, char* p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str = p0; /* _ns on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#rpos for (self: RopeBuffer): Int */
long standard___standard__RopeBuffer___rpos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#rpos= for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___rpos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = p0; /* _rpos on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#dumped for (self: RopeBuffer): Int */
long standard___standard__RopeBuffer___dumped(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#dumped= for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___dumped_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l = p0; /* _dumped on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#length for (self: RopeBuffer): Int */
long standard___standard__RopeBuffer___standard__string__Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___length].l; /* _length on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#length= for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___length_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___length].l = p0; /* _length on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#buf_size for (self: RopeBuffer): Int */
long standard___standard__RopeBuffer___buf_size(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#buf_size= for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___buf_size_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l = p0; /* _buf_size on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#substrings for (self: RopeBuffer): Iterator[String] */
val* standard___standard__RopeBuffer___standard__string__Text__substrings(val* self) {
val* var /* : Iterator[String] */;
val* var1 /* : RopeBufSubstringIterator */;
var1 = NEW_standard__ropes__RopeBufSubstringIterator(&type_standard__ropes__RopeBufSubstringIterator);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__init]))(var1, self); /* init on <var1:RopeBufSubstringIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#init for (self: RopeBuffer) */
void standard___standard__RopeBuffer___standard__kernel__Object__init(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
char* var3 /* : NativeString */;
val* var4 /* : Sys */;
long var5 /* : Int */;
char* var6 /* : NativeString */;
char* var8 /* : NativeString */;
val* var9 /* : Sys */;
long var10 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__RopeBuffer___standard__kernel__Object__init]))(self); /* init on <self:RopeBuffer>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = standard___standard__NativeString___to_s_with_length(var1, 0l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(self, var); /* str= on <self:RopeBuffer>*/
}
var3 = NULL/*special!*/;
var4 = glob_sys;
{
var5 = ((long(*)(val* self))(var4->class->vft[COLOR_standard__ropes__Sys__maxlen]))(var4); /* maxlen on <var4:Sys>*/
}
{
{ /* Inline string#NativeString#new (var3,var5) on <var3:NativeString> */
var8 = (char*)nit_alloc(var5);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns_61d]))(self, var6); /* ns= on <self:RopeBuffer>*/
}
var9 = glob_sys;
{
var10 = ((long(*)(val* self))(var9->class->vft[COLOR_standard__ropes__Sys__maxlen]))(var9); /* maxlen on <var9:Sys>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__buf_size_61d]))(self, var10); /* buf_size= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#from for (self: RopeBuffer, String) */
void standard___standard__RopeBuffer___from(val* self, val* p0) {
val* var_str /* var str: String */;
char* var /* : NativeString */;
val* var1 /* : Sys */;
long var2 /* : Int */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
val* var6 /* : Sys */;
long var7 /* : Int */;
long var8 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:RopeBuffer>*/
}
var_str = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(self, var_str); /* str= on <self:RopeBuffer>*/
}
var = NULL/*special!*/;
var1 = glob_sys;
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__ropes__Sys__maxlen]))(var1); /* maxlen on <var1:Sys>*/
}
{
{ /* Inline string#NativeString#new (var,var2) on <var:NativeString> */
var5 = (char*)nit_alloc(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns_61d]))(self, var3); /* ns= on <self:RopeBuffer>*/
}
var6 = glob_sys;
{
var7 = ((long(*)(val* self))(var6->class->vft[COLOR_standard__ropes__Sys__maxlen]))(var6); /* maxlen on <var6:Sys>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__buf_size_61d]))(self, var7); /* buf_size= on <self:RopeBuffer>*/
}
{
var8 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__length_61d]))(self, var8); /* length= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#reset for (self: RopeBuffer) */
void standard___standard__RopeBuffer___reset(val* self) {
char* var /* : NativeString */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
long var_blen /* var blen: Int */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
var = NULL/*special!*/;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
{ /* Inline string#NativeString#new (var,var1) on <var:NativeString> */
var4 = (char*)nit_alloc(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_nns = var2;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var5,var6) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var10 = var5 - var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_blen = var7;
{
var11 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var12 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var11,var_nns,var_blen,var12,0l) on <var11:NativeString> */
memmove(var_nns+0l,var11+var12,var_blen);
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns_61d]))(self, var_nns); /* ns= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(self, var_blen); /* rpos= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__written_61d]))(self, 0); /* written= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#empty for (self: RopeBuffer): Buffer */
val* standard___standard__RopeBuffer___standard__string__Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : RopeBuffer */;
var1 = NEW_standard__RopeBuffer(&type_standard__RopeBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:RopeBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#clear for (self: RopeBuffer) */
void standard___standard__RopeBuffer___standard__string__Buffer__clear(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
short int var3 /* : Bool */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
char* var6 /* : NativeString */;
char* var8 /* : NativeString */;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = standard___standard__NativeString___to_s_with_length(var1, 0l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(self, var); /* str= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__length_61d]))(self, 0l); /* length= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(self, 0l); /* rpos= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
{
var3 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Buffer__written]))(self); /* written on <self:RopeBuffer>*/
}
if (var3){
var4 = NULL/*special!*/;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
{ /* Inline string#NativeString#new (var4,var5) on <var4:NativeString> */
var8 = (char*)nit_alloc(var5);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns_61d]))(self, var6); /* ns= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__written_61d]))(self, 0); /* written= on <self:RopeBuffer>*/
}
} else {
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#substring for (self: RopeBuffer, Int, Int): Buffer */
val* standard___standard__RopeBuffer___standard__string__Text__substring(val* self, long p0, long p1) {
val* var /* : Buffer */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
val* var1 /* : String */;
long var2 /* : Int */;
long var_strlen /* var strlen: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Text */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var_subpos /* var subpos: Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
val* var62 /* : RopeBuffer */;
val* var63 /* : String */;
val* var64 /* : Text */;
val* var65 /* : String */;
val* var66 /* : Text */;
val* var_l /* var l: String */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
long var_rem /* var rem: Int */;
char* var74 /* : NativeString */;
char* var75 /* : NativeString */;
char* var77 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var81 /* : RopeBuffer */;
val* var82 /* : FlatString */;
val* var83 /* : String */;
char* var84 /* : NativeString */;
char* var85 /* : NativeString */;
char* var87 /* : NativeString */;
char* var_nns88 /* var nns: NativeString */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var92 /* : RopeBuffer */;
val* var93 /* : FlatString */;
var_from = p0;
var_count = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
var_strlen = var2;
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var_from < 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var9 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var13 = var_count + var_from;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_count = var7;
{
{ /* Inline kernel#Int#< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var16 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var20 = var_count < 0l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var_count = 0l;
} else {
}
var_from = 0l;
} else {
}
{
var21 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#> (var_count,var21) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var28 = var_count > var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
var29 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var29,var_from) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var32 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var36 = var29 - var_from;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_count = var30;
} else {
}
{
{ /* Inline kernel#Int#== (var_count,0l) on <var_count:Int> */
var39 = var_count == 0l;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__empty]))(self); /* empty on <self:RopeBuffer>*/
}
var = var40;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,var_strlen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_strlen:Int> isa OTHER */
/* <var_strlen:Int> isa OTHER */
var43 = 1; /* easy <var_strlen:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var47 = var_from < var_strlen;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#- (var_strlen,var_from) on <var_strlen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var50 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var54 = var_strlen - var_from;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_subpos = var48;
{
{ /* Inline kernel#Int#<= (var_count,var_subpos) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_subpos:Int> isa OTHER */
/* <var_subpos:Int> isa OTHER */
var57 = 1; /* easy <var_subpos:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var61 = var_count <= var_subpos;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
var62 = NEW_standard__RopeBuffer(&type_standard__RopeBuffer);
{
var63 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var64 = ((val*(*)(val* self, long p0, long p1))(var63->class->vft[COLOR_standard__string__Text__substring]))(var63, var_from, var_count); /* substring on <var63:String>*/
}
{
((void(*)(val* self, val* p0))(var62->class->vft[COLOR_standard__ropes__RopeBuffer__from]))(var62, var64); /* from on <var62:RopeBuffer>*/
}
var = var62;
goto RET_LABEL;
} else {
{
var65 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var66 = ((val*(*)(val* self, long p0))(var65->class->vft[COLOR_standard__string__Text__substring_from]))(var65, var_from); /* substring_from on <var65:String>*/
}
var_l = var66;
{
{ /* Inline kernel#Int#- (var_count,var_subpos) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_subpos:Int> isa OTHER */
/* <var_subpos:Int> isa OTHER */
var69 = 1; /* easy <var_subpos:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var73 = var_count - var_subpos;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_rem = var67;
var74 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var74,var_rem) on <var74:NativeString> */
var77 = (char*)nit_alloc(var_rem);
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_nns = var75;
{
var78 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var79 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var78,var_nns,var_rem,var79,0l) on <var78:NativeString> */
memmove(var_nns+0l,var78+var79,var_rem);
RET_LABEL80:(void)0;
}
}
var81 = NEW_standard__RopeBuffer(&type_standard__RopeBuffer);
var82 = standard___standard__NativeString___to_s_with_length(var_nns, var_rem);
{
var83 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__string__String___43d]))(var_l, var82); /* + on <var_l:String>*/
}
{
((void(*)(val* self, val* p0))(var81->class->vft[COLOR_standard__ropes__RopeBuffer__from]))(var81, var83); /* from on <var81:RopeBuffer>*/
}
var = var81;
goto RET_LABEL;
}
} else {
var84 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var84,var_count) on <var84:NativeString> */
var87 = (char*)nit_alloc(var_count);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_nns88 = var85;
{
var89 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var90 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var89,var_nns88,var_count,var90,0l) on <var89:NativeString> */
memmove(var_nns88+0l,var89+var90,var_count);
RET_LABEL91:(void)0;
}
}
var92 = NEW_standard__RopeBuffer(&type_standard__RopeBuffer);
var93 = standard___standard__NativeString___to_s_with_length(var_nns88, var_count);
{
((void(*)(val* self, val* p0))(var92->class->vft[COLOR_standard__ropes__RopeBuffer__from]))(var92, var93); /* from on <var92:RopeBuffer>*/
}
var = var92;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#append for (self: RopeBuffer, Text) */
void standard___standard__RopeBuffer___standard__string__Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
long var /* : Int */;
long var_slen /* var slen: Int */;
val* var_ /* var : RopeBuffer */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
long var_rp /* var rp: Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
short int var_11 /* var : Bool */;
val* var12 /* : Sys */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_35 /* var : RopeBuffer */;
val* var36 /* : String */;
val* var37 /* : FlatString */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
long var58 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
long var_remsp /* var remsp: Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
long var69 /* : Int */;
long var_begin /* var begin: Int */;
char* var70 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
char* var74 /* : NativeString */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
short int var81 /* : Bool */;
val* var82 /* : SequenceRead[Char] */;
val* var_83 /* var : SequenceRead[Char] */;
val* var84 /* : Iterator[nullable Object] */;
val* var_85 /* var : IndexedIterator[Char] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
char var88 /* : Char */;
char var_i /* var i: Char */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var_92 /* var : RopeBuffer */;
long var93 /* : Int */;
long var94 /* : Int */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
long var100 /* : Int */;
long var_spos /* var spos: Int */;
long var_i101 /* var i: Int */;
long var_102 /* var : Int */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
short int var109 /* : Bool */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
char var112 /* : Char */;
val* var_114 /* var : RopeBuffer */;
long var115 /* : Int */;
long var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
long var122 /* : Int */;
long var123 /* : Int */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
long var129 /* : Int */;
long var130 /* : Int */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const char* var_class_name137;
short int var138 /* : Bool */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
char var141 /* : Char */;
long var143 /* : Int */;
short int var145 /* : Bool */;
int cltype146;
int idtype147;
const char* var_class_name148;
long var149 /* : Int */;
val* var_150 /* var : RopeBuffer */;
long var151 /* : Int */;
long var152 /* : Int */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
const char* var_class_name157;
long var158 /* : Int */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name165;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
int cltype170;
int idtype171;
const char* var_class_name172;
short int var173 /* : Bool */;
char* var174 /* : NativeString */;
val* var_176 /* var : RopeBuffer */;
long var177 /* : Int */;
long var178 /* : Int */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
long var184 /* : Int */;
char* var185 /* : NativeString */;
long var187 /* : Int */;
long var188 /* : Int */;
short int var190 /* : Bool */;
int cltype191;
int idtype192;
const char* var_class_name193;
long var194 /* : Int */;
long var_nlen /* var nlen: Int */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
short int var198 /* : Bool */;
int cltype199;
int idtype200;
const char* var_class_name201;
long var202 /* : Int */;
var_s = p0;
{
var = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_slen = var;
var_ = self;
{
var1 = ((long(*)(val* self))(var_->class->vft[COLOR_standard__string__Text__length]))(var_); /* length on <var_:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var1,var_slen) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var4 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var5 = var1 + var_slen;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__ropes__RopeBuffer__length_61d]))(var_, var2); /* length= on <var_:RopeBuffer>*/
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
var_rp = var6;
/* <var_s:Text> isa Rope */
cltype9 = type_standard__ropes__Rope.color;
idtype10 = type_standard__ropes__Rope.id;
if(cltype9 >= var_s->type->table_size) {
var8 = 0;
} else {
var8 = var_s->type->type_table[cltype9] == idtype10;
}
var_11 = var8;
if (var8){
var7 = var_11;
} else {
var12 = glob_sys;
{
var13 = ((long(*)(val* self))(var12->class->vft[COLOR_standard__ropes__Sys__maxlen]))(var12); /* maxlen on <var12:Sys>*/
}
{
{ /* Inline kernel#Int#> (var_slen,var13) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var20 = var_slen > var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var7 = var14;
}
if (var7){
{
{ /* Inline kernel#Int#> (var_rp,0l) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var24 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var28 = var_rp > 0l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_29 = var22;
if (var22){
{
var30 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#!= (var30,var_rp) on <var30:Int> */
var33 = var30 == var_rp;
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var21 = var31;
} else {
var21 = var_29;
}
if (var21){
var_35 = self;
{
var36 = ((val*(*)(val* self))(var_35->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_35); /* str on <var_35:RopeBuffer>*/
}
var37 = NEW_standard__FlatString(&type_standard__FlatString);
{
var38 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var39 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_rp,var39) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <var39:Int> isa OTHER */
/* <var39:Int> isa OTHER */
var42 = 1; /* easy <var39:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var46 = var_rp - var39;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
var47 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_rp,1l) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var50 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var54 = var_rp - 1l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var37->class->vft[COLOR_standard__string__FlatString__with_infos]))(var37, var38, var40, var47, var48); /* with_infos on <var37:FlatString>*/
}
{
var55 = ((val*(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__string__String___43d]))(var36, var37); /* + on <var36:String>*/
}
{
((void(*)(val* self, val* p0))(var_35->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(var_35, var55); /* str= on <var_35:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped_61d]))(self, var_rp); /* dumped= on <self:RopeBuffer>*/
}
} else {
}
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var57 = ((val*(*)(val* self, val* p0))(var56->class->vft[COLOR_standard__string__String___43d]))(var56, var_s); /* + on <var56:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(self, var57); /* str= on <self:RopeBuffer>*/
}
goto RET_LABEL;
} else {
}
{
var58 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var58,var_rp) on <var58:Int> */
/* Covariant cast for argument 0 (i) <var_rp:Int> isa OTHER */
/* <var_rp:Int> isa OTHER */
var61 = 1; /* easy <var_rp:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var65 = var58 - var_rp;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_remsp = var59;
/* <var_s:Text> isa FlatString */
cltype67 = type_standard__FlatString.color;
idtype68 = type_standard__FlatString.id;
if(cltype67 >= var_s->type->table_size) {
var66 = 0;
} else {
var66 = var_s->type->type_table[cltype67] == idtype68;
}
if (var66){
{
var69 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatString__index_from]))(var_s); /* index_from on <var_s:Text(FlatString)>*/
}
var_begin = var69;
{
var70 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:Text(FlatString)>*/
}
var_sits = var70;
} else {
/* <var_s:Text> isa FlatBuffer */
cltype72 = type_standard__FlatBuffer.color;
idtype73 = type_standard__FlatBuffer.id;
if(cltype72 >= var_s->type->table_size) {
var71 = 0;
} else {
var71 = var_s->type->type_table[cltype72] == idtype73;
}
if (var71){
var_begin = 0l;
{
var74 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:Text(FlatBuffer)>*/
}
var_sits = var74;
} else {
{
{ /* Inline kernel#Int#<= (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var77 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var81 = var_slen <= var_remsp;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
if (var75){
{
var82 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Text>*/
}
var_83 = var82;
{
var84 = ((val*(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_83); /* iterator on <var_83:SequenceRead[Char]>*/
}
var_85 = var84;
for(;;) {
{
var86 = ((short int(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_85); /* is_ok on <var_85:IndexedIterator[Char]>*/
}
if (var86){
{
var87 = ((val*(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_85); /* item on <var_85:IndexedIterator[Char]>*/
}
var88 = (char)((long)(var87)>>2);
var_i = var88;
{
var89 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var90 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline string#NativeString#[]= (var89,var90,var_i) on <var89:NativeString> */
var89[var90]=var_i;
RET_LABEL91:(void)0;
}
}
var_92 = self;
{
var93 = ((long(*)(val* self))(var_92->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(var_92); /* rpos on <var_92:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var93,1l) on <var93:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var96 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var100 = var93 + 1l;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_92->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(var_92, var94); /* rpos= on <var_92:RopeBuffer>*/
}
{
((void(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_85); /* next on <var_85:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_85); /* finish on <var_85:IndexedIterator[Char]>*/
}
} else {
var_spos = 0l;
var_i101 = 0l;
var_102 = var_remsp;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i101,var_102) on <var_i101:Int> */
/* Covariant cast for argument 0 (i) <var_102:Int> isa OTHER */
/* <var_102:Int> isa OTHER */
var105 = 1; /* easy <var_102:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var109 = var_i101 < var_102;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
if (var103){
{
var110 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var111 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var112 = ((char(*)(val* self, long p0))(var_s->class->vft[COLOR_standard__string__Text___91d_93d]))(var_s, var_spos); /* [] on <var_s:Text>*/
}
{
{ /* Inline string#NativeString#[]= (var110,var111,var112) on <var110:NativeString> */
var110[var111]=var112;
RET_LABEL113:(void)0;
}
}
var_114 = self;
{
var115 = ((long(*)(val* self))(var_114->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(var_114); /* rpos on <var_114:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var115,1l) on <var115:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var118 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var122 = var115 + 1l;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_114->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(var_114, var116); /* rpos= on <var_114:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_spos,1l) on <var_spos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var125 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var125)) {
var_class_name128 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var129 = var_spos + 1l;
var123 = var129;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
var_spos = var123;
var130 = standard___standard__Int___Discrete__successor(var_i101, 1l);
var_i101 = var130;
} else {
goto BREAK_label131;
}
}
BREAK_label131: (void)0;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dump_buffer]))(self); /* dump_buffer on <self:RopeBuffer>*/
}
for(;;) {
{
{ /* Inline kernel#Int#< (var_spos,var_slen) on <var_spos:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var134 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var134)) {
var_class_name137 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name137);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var138 = var_spos < var_slen;
var132 = var138;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
if (var132){
{
var139 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var140 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var141 = ((char(*)(val* self, long p0))(var_s->class->vft[COLOR_standard__string__Text___91d_93d]))(var_s, var_spos); /* [] on <var_s:Text>*/
}
{
{ /* Inline string#NativeString#[]= (var139,var140,var141) on <var139:NativeString> */
var139[var140]=var141;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_spos,1l) on <var_spos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var145 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var145)) {
var_class_name148 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name148);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var149 = var_spos + 1l;
var143 = var149;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
}
var_spos = var143;
var_150 = self;
{
var151 = ((long(*)(val* self))(var_150->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(var_150); /* rpos on <var_150:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var151,1l) on <var151:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var154 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var154)) {
var_class_name157 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name157);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var158 = var151 + 1l;
var152 = var158;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_150->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(var_150, var152); /* rpos= on <var_150:RopeBuffer>*/
}
} else {
goto BREAK_label159;
}
}
BREAK_label159: (void)0;
}
goto RET_LABEL;
}
}
{
{ /* Inline kernel#Int#<= (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var162 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name165 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name165);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var166 = var_slen <= var_remsp;
var160 = var166;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
if (var160){
{
{ /* Inline kernel#Int#<= (var_remsp,0l) on <var_remsp:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var169 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var169)) {
var_class_name172 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name172);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var173 = var_remsp <= 0l;
var167 = var173;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
if (var167){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dump_buffer]))(self); /* dump_buffer on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(self, 0l); /* rpos= on <self:RopeBuffer>*/
}
} else {
{
var174 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var_sits,var174,var_slen,var_begin,var_rp) on <var_sits:NativeString> */
memmove(var174+var_rp,var_sits+var_begin,var_slen);
RET_LABEL175:(void)0;
}
}
var_176 = self;
{
var177 = ((long(*)(val* self))(var_176->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(var_176); /* rpos on <var_176:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var177,var_slen) on <var177:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var180 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var184 = var177 + var_slen;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_176->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(var_176, var178); /* rpos= on <var_176:RopeBuffer>*/
}
}
} else {
{
var185 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var_sits,var185,var_remsp,var_begin,var_rp) on <var_sits:NativeString> */
memmove(var185+var_rp,var_sits+var_begin,var_remsp);
RET_LABEL186:(void)0;
}
}
{
var187 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(self, var187); /* rpos= on <self:RopeBuffer>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dump_buffer]))(self); /* dump_buffer on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var190 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var190)) {
var_class_name193 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name193);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var194 = var_slen - var_remsp;
var188 = var194;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
}
var_nlen = var188;
{
var195 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_begin,var_remsp) on <var_begin:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var198 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var198)) {
var_class_name201 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name201);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var202 = var_begin + var_remsp;
var196 = var202;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var_sits,var195,var_nlen,var196,0l) on <var_sits:NativeString> */
memmove(var195+0l,var_sits+var196,var_nlen);
RET_LABEL203:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(self, var_nlen); /* rpos= on <self:RopeBuffer>*/
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#add for (self: RopeBuffer, Char) */
void standard___standard__RopeBuffer___standard__string__Buffer__add(val* self, char p0) {
char var_c /* var c: Char */;
long var /* : Int */;
long var_rp /* var rp: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
char* var6 /* : NativeString */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
val* var_ /* var : RopeBuffer */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
var_c = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
var_rp = var;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#>= (var_rp,var1) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var5 = var_rp >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dump_buffer]))(self); /* dump_buffer on <self:RopeBuffer>*/
}
var_rp = 0l;
} else {
}
{
var6 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
{ /* Inline string#NativeString#[]= (var6,var_rp,var_c) on <var6:NativeString> */
var6[var_rp]=var_c;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_rp,1l) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var14 = var_rp + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_rp = var8;
var_ = self;
{
var15 = ((long(*)(val* self))(var_->class->vft[COLOR_standard__string__Text__length]))(var_); /* length on <var_:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var15,1l) on <var15:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var15 + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__ropes__RopeBuffer__length_61d]))(var_, var16); /* length= on <var_:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos_61d]))(self, var_rp); /* rpos= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#dump_buffer for (self: RopeBuffer) */
void standard___standard__RopeBuffer___dump_buffer(val* self) {
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
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
val* var_nstr /* var nstr: FlatString */;
val* var_ /* var : RopeBuffer */;
val* var17 /* : String */;
val* var18 /* : String */;
long var19 /* : Int */;
long var_bs /* var bs: Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
char* var27 /* : NativeString */;
char* var28 /* : NativeString */;
char* var30 /* : NativeString */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__written_61d]))(self, 0); /* written= on <self:RopeBuffer>*/
}
var = NEW_standard__FlatString(&type_standard__FlatString);
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var7 = var2 - var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var16 = var9 - 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var->class->vft[COLOR_standard__string__FlatString__with_infos]))(var, var1, var4, var8, var10); /* with_infos on <var:FlatString>*/
}
var_nstr = var;
var_ = self;
{
var17 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_); /* str on <var_:RopeBuffer>*/
}
{
var18 = ((val*(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__string__String___43d]))(var17, var_nstr); /* + on <var17:String>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(var_, var18); /* str= on <var_:RopeBuffer>*/
}
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
var_bs = var19;
{
{ /* Inline kernel#Int#* (var_bs,2l) on <var_bs:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var22 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var26 = var_bs * 2l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_bs = var20;
var27 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var27,var_bs) on <var27:NativeString> */
var30 = (char*)nit_alloc(var_bs);
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns_61d]))(self, var28); /* ns= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__buf_size_61d]))(self, var_bs); /* buf_size= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#output for (self: RopeBuffer) */
void standard___standard__RopeBuffer___standard__kernel__Object__output(val* self) {
val* var /* : String */;
val* var1 /* : FlatString */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__output]))(var); /* output on <var:String>*/
}
var1 = NEW_standard__FlatString(&type_standard__FlatString);
{
var2 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var8 = var3 - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var10,1l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var17 = var10 - 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var1->class->vft[COLOR_standard__string__FlatString__with_infos]))(var1, var2, var5, var9, var11); /* with_infos on <var1:FlatString>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__output]))(var1); /* output on <var1:FlatString>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#enlarge for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___standard__string__Buffer__enlarge(val* self, long p0) {
long var_i /* var i: Int */;
var_i = p0;
RET_LABEL:;
}
/* method ropes#RopeBuffer#to_s for (self: RopeBuffer): String */
val* standard___standard__RopeBuffer___standard__string__Object__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_nnslen /* var nnslen: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : FlatString */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
val* var32 /* : String */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__written_61d]))(self, 1); /* written= on <self:RopeBuffer>*/
}
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var6 = var1 - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_nnslen = var3;
{
{ /* Inline kernel#Int#== (var_nnslen,0l) on <var_nnslen:Int> */
var9 = var_nnslen == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
var = var10;
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
var12 = NEW_standard__FlatString(&type_standard__FlatString);
{
var13 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var14,var15) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var22 = var14 - var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var23 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
var24 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var24,1l) on <var24:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var31 = var24 - 1l;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var12->class->vft[COLOR_standard__string__FlatString__with_infos]))(var12, var13, var16, var23, var25); /* with_infos on <var12:FlatString>*/
}
{
var32 = ((val*(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__string__String___43d]))(var11, var12); /* + on <var11:String>*/
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#reverse for (self: RopeBuffer) */
void standard___standard__RopeBuffer___standard__string__Buffer__reverse(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_12 /* var : RopeBuffer */;
val* var13 /* : String */;
val* var14 /* : FlatString */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
val* var34 /* : String */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
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
var_ = var2;
if (var2){
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#!= (var6,var7) on <var6:Int> */
var10 = var6 == var7;
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
} else {
var = var_;
}
if (var){
var_12 = self;
{
var13 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_12); /* str on <var_12:RopeBuffer>*/
}
var14 = NEW_standard__FlatString(&type_standard__FlatString);
{
var15 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var16,var17) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var24 = var16 - var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var25 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
var26 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var26,1l) on <var26:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var33 = var26 - 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var14->class->vft[COLOR_standard__string__FlatString__with_infos]))(var14, var15, var18, var25, var27); /* with_infos on <var14:FlatString>*/
}
{
var34 = ((val*(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__string__String___43d]))(var13, var14); /* + on <var13:String>*/
}
{
((void(*)(val* self, val* p0))(var_12->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(var_12, var34); /* str= on <var_12:RopeBuffer>*/
}
{
var35 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__dumped_61d]))(self, var35); /* dumped= on <self:RopeBuffer>*/
}
} else {
}
{
var36 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var37 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__String__reversed]))(var36); /* reversed on <var36:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(self, var37); /* str= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#upper for (self: RopeBuffer) */
void standard___standard__RopeBuffer___standard__string__Buffer__upper(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
val* var2 /* : String */;
char* var3 /* : NativeString */;
char* var_mits /* var mits: NativeString */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
char var9 /* : Char */;
char var11 /* : Char */;
char var12 /* : Char */;
long var14 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Buffer__written]))(self); /* written on <self:RopeBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__reset]))(self); /* reset on <self:RopeBuffer>*/
}
} else {
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__String__to_upper]))(var1); /* to_upper on <var1:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(self, var2); /* str= on <self:RopeBuffer>*/
}
{
var3 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
var_mits = var3;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline string#NativeString#[] (var_mits,var_i) on <var_mits:NativeString> */
var11 = var_mits[var_i];
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var12 = standard___standard__Char___to_upper(var9);
{
{ /* Inline string#NativeString#[]= (var_mits,var_i,var12) on <var_mits:NativeString> */
var_mits[var_i]=var12;
RET_LABEL13:(void)0;
}
}
var14 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var14;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeBuffer#lower for (self: RopeBuffer) */
void standard___standard__RopeBuffer___standard__string__Buffer__lower(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
val* var2 /* : String */;
char* var3 /* : NativeString */;
char* var_mits /* var mits: NativeString */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
char var9 /* : Char */;
char var11 /* : Char */;
char var12 /* : Char */;
long var14 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Buffer__written]))(self); /* written on <self:RopeBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__reset]))(self); /* reset on <self:RopeBuffer>*/
}
} else {
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__String__to_lower]))(var1); /* to_lower on <var1:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(self, var2); /* str= on <self:RopeBuffer>*/
}
{
var3 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
var_mits = var3;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline string#NativeString#[] (var_mits,var_i) on <var_mits:NativeString> */
var11 = var_mits[var_i];
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var12 = standard___standard__Char___to_lower(var9);
{
{ /* Inline string#NativeString#[]= (var_mits,var_i,var12) on <var_mits:NativeString> */
var_mits[var_i]=var12;
RET_LABEL13:(void)0;
}
}
var14 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var14;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#FlatString#insert_at for (self: FlatString, String, Int): String */
val* standard__ropes___FlatString___standard__string__String__insert_at(val* self, val* p0, long p1) {
val* var /* : String */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
val* var1 /* : Text */;
val* var_l /* var l: String */;
val* var2 /* : Text */;
val* var_r /* var r: String */;
val* var3 /* : String */;
val* var4 /* : String */;
var_s = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var_pos); /* substring on <self:FlatString>*/
}
var_l = var1;
{
var2 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__Text__substring_from]))(self, var_pos); /* substring_from on <self:FlatString>*/
}
var_r = var2;
{
var3 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__string__String___43d]))(var_l, var_s); /* + on <var_l:String>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__string__String___43d]))(var3, var_r); /* + on <var3:String>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#FlatString#+ for (self: FlatString, Text): String */
val* standard__ropes___FlatString___standard__string__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
long var3 /* : Int */;
long var_mlen /* var mlen: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_nlen /* var nlen: Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Sys */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : Concat */;
char* var27 /* : NativeString */;
char* var_mits /* var mits: NativeString */;
long var28 /* : Int */;
long var_sifrom /* var sifrom: Int */;
long var29 /* : Int */;
long var_mifrom /* var mifrom: Int */;
char* var30 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
char* var39 /* : NativeString */;
char* var41 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
val* var44 /* : FlatString */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : String */;
val* var_sl /* var sl: String */;
long var49 /* : Int */;
long var_sllen /* var sllen: Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var57 /* : Sys */;
long var58 /* : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
val* var66 /* : Concat */;
val* var67 /* : Concat */;
val* var68 /* : String */;
val* var69 /* : String */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_standard__string__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_slen = var2;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
var_mlen = var3;
{
{ /* Inline kernel#Int#== (var_slen,0l) on <var_slen:Int> */
var6 = var_slen == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_mlen,0l) on <var_mlen:Int> */
var9 = var_mlen == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_slen,var_mlen) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var12 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var13 = var_slen + var_mlen;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_nlen = var10;
/* <var_s:String> isa FlatString */
cltype15 = type_standard__FlatString.color;
idtype16 = type_standard__FlatString.id;
if(cltype15 >= var_s->type->table_size) {
var14 = 0;
} else {
var14 = var_s->type->type_table[cltype15] == idtype16;
}
if (var14){
var17 = glob_sys;
{
var18 = ((long(*)(val* self))(var17->class->vft[COLOR_standard__ropes__Sys__maxlen]))(var17); /* maxlen on <var17:Sys>*/
}
{
{ /* Inline kernel#Int#> (var_nlen,var18) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var25 = var_nlen > var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var26 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var26, self); /* left= on <var26:Concat>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var26, var_s); /* right= on <var26:Concat>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_standard__kernel__Object__init]))(var26); /* init on <var26:Concat>*/
}
var = var26;
goto RET_LABEL;
} else {
}
{
var27 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
var_mits = var27;
{
var28 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatString__index_from]))(var_s); /* index_from on <var_s:String(FlatString)>*/
}
var_sifrom = var28;
{
var29 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
var_mifrom = var29;
{
var30 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:String(FlatString)>*/
}
var_sits = var30;
var31 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nlen,1l) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var38 = var_nlen + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var31,var32) on <var31:NativeString> */
var41 = (char*)nit_alloc(var32);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_ns = var39;
{
{ /* Inline string#NativeString#copy_to (var_mits,var_ns,var_mlen,var_mifrom,0l) on <var_mits:NativeString> */
memmove(var_ns+0l,var_mits+var_mifrom,var_mlen);
RET_LABEL42:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var_sits,var_ns,var_slen,var_sifrom,var_mlen) on <var_sits:NativeString> */
memmove(var_ns+var_mlen,var_sits+var_sifrom,var_slen);
RET_LABEL43:(void)0;
}
}
var44 = standard___standard__NativeString___to_s_with_length(var_ns, var_nlen);
var = var44;
goto RET_LABEL;
} else {
/* <var_s:String> isa Concat */
cltype46 = type_standard__ropes__Concat.color;
idtype47 = type_standard__ropes__Concat.id;
if(cltype46 >= var_s->type->table_size) {
var45 = 0;
} else {
var45 = var_s->type->type_table[cltype46] == idtype47;
}
if (var45){
{
var48 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__ropes__Concat__left]))(var_s); /* left on <var_s:String(Concat)>*/
}
var_sl = var48;
{
var49 = ((long(*)(val* self))(var_sl->class->vft[COLOR_standard__string__Text__length]))(var_sl); /* length on <var_sl:String>*/
}
var_sllen = var49;
{
{ /* Inline kernel#Int#+ (var_sllen,var_mlen) on <var_sllen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var52 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var56 = var_sllen + var_mlen;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var57 = glob_sys;
{
var58 = ((long(*)(val* self))(var57->class->vft[COLOR_standard__ropes__Sys__maxlen]))(var57); /* maxlen on <var57:Sys>*/
}
{
{ /* Inline kernel#Int#> (var50,var58) on <var50:Int> */
/* Covariant cast for argument 0 (i) <var58:Int> isa OTHER */
/* <var58:Int> isa OTHER */
var61 = 1; /* easy <var58:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var65 = var50 > var58;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
var66 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void(*)(val* self, val* p0))(var66->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var66, self); /* left= on <var66:Concat>*/
}
{
((void(*)(val* self, val* p0))(var66->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var66, var_s); /* right= on <var66:Concat>*/
}
{
((void(*)(val* self))(var66->class->vft[COLOR_standard__kernel__Object__init]))(var66); /* init on <var66:Concat>*/
}
var = var66;
goto RET_LABEL;
} else {
}
var67 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
var68 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__String___43d]))(self, var_sl); /* + on <self:FlatString>*/
}
{
var69 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__ropes__Concat__right]))(var_s); /* right on <var_s:String(Concat)>*/
}
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var67, var68); /* left= on <var67:Concat>*/
}
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var67, var69); /* right= on <var67:Concat>*/
}
{
((void(*)(val* self))(var67->class->vft[COLOR_standard__kernel__Object__init]))(var67); /* init on <var67:Concat>*/
}
var = var67;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 451);
fatal_exit(1);
}
}
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#node for (self: RopeIterPiece): String */
val* standard__ropes___standard__ropes__RopeIterPiece___node(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeIterPiece___node].val; /* _node on <self:RopeIterPiece> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 458);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#node= for (self: RopeIterPiece, String) */
void standard__ropes___standard__ropes__RopeIterPiece___node_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeIterPiece___node].val = p0; /* _node on <self:RopeIterPiece> */
RET_LABEL:;
}
/* method ropes#RopeIterPiece#ldone for (self: RopeIterPiece): Bool */
short int standard__ropes___standard__ropes__RopeIterPiece___ldone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s; /* _ldone on <self:RopeIterPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#ldone= for (self: RopeIterPiece, Bool) */
void standard__ropes___standard__ropes__RopeIterPiece___ldone_61d(val* self, short int p0) {
self->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s = p0; /* _ldone on <self:RopeIterPiece> */
RET_LABEL:;
}
/* method ropes#RopeIterPiece#rdone for (self: RopeIterPiece): Bool */
short int standard__ropes___standard__ropes__RopeIterPiece___rdone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s; /* _rdone on <self:RopeIterPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#rdone= for (self: RopeIterPiece, Bool) */
void standard__ropes___standard__ropes__RopeIterPiece___rdone_61d(val* self, short int p0) {
self->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = p0; /* _rdone on <self:RopeIterPiece> */
RET_LABEL:;
}
/* method ropes#RopeIterPiece#prev for (self: RopeIterPiece): nullable RopeIterPiece */
val* standard__ropes___standard__ropes__RopeIterPiece___prev(val* self) {
val* var /* : nullable RopeIterPiece */;
val* var1 /* : nullable RopeIterPiece */;
var1 = self->attrs[COLOR_standard__ropes__RopeIterPiece___prev].val; /* _prev on <self:RopeIterPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#prev= for (self: RopeIterPiece, nullable RopeIterPiece) */
void standard__ropes___standard__ropes__RopeIterPiece___prev_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeIterPiece___prev].val = p0; /* _prev on <self:RopeIterPiece> */
RET_LABEL:;
}
/* method ropes#RopeIterPiece#init for (self: RopeIterPiece) */
void standard__ropes___standard__ropes__RopeIterPiece___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes___standard__ropes__RopeIterPiece___standard__kernel__Object__init]))(self); /* init on <self:RopeIterPiece>*/
}
RET_LABEL:;
}
/* method ropes#RopeReviter#ns for (self: RopeReviter): String */
val* standard__ropes___standard__ropes__RopeReviter___ns(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeReviter___ns].val; /* _ns on <self:RopeReviter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ns");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 472);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeReviter#ns= for (self: RopeReviter, String) */
void standard__ropes___standard__ropes__RopeReviter___ns_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeReviter___ns].val = p0; /* _ns on <self:RopeReviter> */
RET_LABEL:;
}
/* method ropes#RopeReviter#pns for (self: RopeReviter): Int */
long standard__ropes___standard__ropes__RopeReviter___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeReviter___pns].l; /* _pns on <self:RopeReviter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeReviter#pns= for (self: RopeReviter, Int) */
void standard__ropes___standard__ropes__RopeReviter___pns_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeReviter___pns].l = p0; /* _pns on <self:RopeReviter> */
RET_LABEL:;
}
/* method ropes#RopeReviter#pos for (self: RopeReviter): Int */
long standard__ropes___standard__ropes__RopeReviter___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeReviter___pos].l; /* _pos on <self:RopeReviter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeReviter#pos= for (self: RopeReviter, Int) */
void standard__ropes___standard__ropes__RopeReviter___pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeReviter___pos].l = p0; /* _pos on <self:RopeReviter> */
RET_LABEL:;
}
/* method ropes#RopeReviter#subs for (self: RopeReviter): IndexedIterator[String] */
val* standard__ropes___standard__ropes__RopeReviter___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_standard__ropes__RopeReviter___subs].val; /* _subs on <self:RopeReviter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 478);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeReviter#subs= for (self: RopeReviter, IndexedIterator[String]) */
void standard__ropes___standard__ropes__RopeReviter___subs_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeReviter___subs].val = p0; /* _subs on <self:RopeReviter> */
RET_LABEL:;
}
/* method ropes#RopeReviter#init for (self: RopeReviter, RopeString) */
void standard__ropes___standard__ropes__RopeReviter___init(val* self, val* p0) {
val* var_root /* var root: RopeString */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var5 /* : ReverseRopeSubstrings */;
val* var6 /* : IndexedIterator[String] */;
val* var7 /* : nullable Object */;
val* var8 /* : String */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
var_root = p0;
{
var = ((long(*)(val* self))(var_root->class->vft[COLOR_standard__string__Text__length]))(var_root); /* length on <var_root:RopeString>*/
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
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__pos_61d]))(self, var1); /* pos= on <self:RopeReviter>*/
}
var5 = NEW_standard__ropes__ReverseRopeSubstrings(&type_standard__ropes__ReverseRopeSubstrings);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__init]))(var5, var_root); /* init on <var5:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__subs_61d]))(self, var5); /* subs= on <self:RopeReviter>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__subs]))(self); /* subs on <self:RopeReviter>*/
}
{
var7 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var6); /* item on <var6:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__ns_61d]))(self, var7); /* ns= on <self:RopeReviter>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__ns]))(self); /* ns on <self:RopeReviter>*/
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_standard__string__Text__length]))(var8); /* length on <var8:String>*/
}
{
{ /* Inline kernel#Int#- (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var16 = var9 - 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__pns_61d]))(self, var10); /* pns= on <self:RopeReviter>*/
}
RET_LABEL:;
}
/* method ropes#RopeReviter#from for (self: RopeReviter, RopeString, Int) */
void standard__ropes___standard__ropes__RopeReviter___from(val* self, val* p0, long p1) {
val* var_root /* var root: RopeString */;
long var_pos /* var pos: Int */;
val* var /* : ReverseRopeSubstrings */;
val* var1 /* : IndexedIterator[String] */;
val* var2 /* : nullable Object */;
val* var3 /* : IndexedIterator[String] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
var_root = p0;
var_pos = p1;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__pos_61d]))(self, var_pos); /* pos= on <self:RopeReviter>*/
}
var = NEW_standard__ropes__ReverseRopeSubstrings(&type_standard__ropes__ReverseRopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__subs_61d]))(self, var); /* subs= on <self:RopeReviter>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__subs]))(self); /* subs on <self:RopeReviter>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var1); /* item on <var1:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__ns_61d]))(self, var2); /* ns= on <self:RopeReviter>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__subs]))(self); /* subs on <self:RopeReviter>*/
}
{
var4 = ((long(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var3); /* index on <var3:IndexedIterator[String]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var4) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var8 = var_pos - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__pns_61d]))(self, var5); /* pns= on <self:RopeReviter>*/
}
RET_LABEL:;
}
/* method ropes#RopeReviter#index for (self: RopeReviter): Int */
long standard__ropes___standard__ropes__RopeReviter___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__pos]))(self); /* pos on <self:RopeReviter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeReviter#is_ok for (self: RopeReviter): Bool */
short int standard__ropes___standard__ropes__RopeReviter___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__pos]))(self); /* pos on <self:RopeReviter>*/
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
/* method ropes#RopeReviter#item for (self: RopeReviter): Char */
char standard__ropes___standard__ropes__RopeReviter___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
val* var1 /* : String */;
long var2 /* : Int */;
char var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__ns]))(self); /* ns on <self:RopeReviter>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__pns]))(self); /* pns on <self:RopeReviter>*/
}
{
var3 = ((char(*)(val* self, long p0))(var1->class->vft[COLOR_standard__string__Text___91d_93d]))(var1, var2); /* [] on <var1:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeReviter#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__ropes___standard__ropes__RopeReviter___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__ropes___standard__ropes__RopeReviter___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeReviter#next for (self: RopeReviter) */
void standard__ropes___standard__ropes__RopeReviter___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeReviter */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeReviter */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : IndexedIterator[String] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[String] */;
val* var26 /* : IndexedIterator[String] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : IndexedIterator[String] */;
val* var30 /* : nullable Object */;
val* var31 /* : String */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_standard__ropes__RopeReviter__pns]))(var_); /* pns on <var_:RopeReviter>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__ropes__RopeReviter__pns_61d]))(var_, var1); /* pns= on <var_:RopeReviter>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_standard__ropes__RopeReviter__pos]))(var_5); /* pos on <var_5:RopeReviter>*/
}
{
{ /* Inline kernel#Int#- (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var13 = var6 - 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_standard__ropes__RopeReviter__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeReviter>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__pns]))(self); /* pns on <self:RopeReviter>*/
}
{
{ /* Inline kernel#Int#>= (var14,0l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var21 = var14 >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
goto RET_LABEL;
} else {
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__subs]))(self); /* subs on <self:RopeReviter>*/
}
{
var23 = ((short int(*)(val* self))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var22); /* is_ok on <var22:IndexedIterator[String]>*/
}
var24 = !var23;
if (var24){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__subs]))(self); /* subs on <self:RopeReviter>*/
}
{
((void(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var25); /* next on <var25:IndexedIterator[String]>*/
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__subs]))(self); /* subs on <self:RopeReviter>*/
}
{
var27 = ((short int(*)(val* self))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var26); /* is_ok on <var26:IndexedIterator[String]>*/
}
var28 = !var27;
if (var28){
goto RET_LABEL;
} else {
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__subs]))(self); /* subs on <self:RopeReviter>*/
}
{
var30 = ((val*(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var29); /* item on <var29:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__ns_61d]))(self, var30); /* ns= on <self:RopeReviter>*/
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeReviter__ns]))(self); /* ns on <self:RopeReviter>*/
}
{
var32 = ((long(*)(val* self))(var31->class->vft[COLOR_standard__string__Text__length]))(var31); /* length on <var31:String>*/
}
{
{ /* Inline kernel#Int#- (var32,1l) on <var32:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var39 = var32 - 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeReviter__pns_61d]))(self, var33); /* pns= on <self:RopeReviter>*/
}
RET_LABEL:;
}
/* method ropes#RopeIter#pns for (self: RopeIter): Int */
long standard__ropes___standard__ropes__RopeIter___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___pns].l; /* _pns on <self:RopeIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#pns= for (self: RopeIter, Int) */
void standard__ropes___standard__ropes__RopeIter___pns_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeIter___pns].l = p0; /* _pns on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#str for (self: RopeIter): String */
val* standard__ropes___standard__ropes__RopeIter___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___str].val; /* _str on <self:RopeIter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 520);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#str= for (self: RopeIter, String) */
void standard__ropes___standard__ropes__RopeIter___str_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeIter___str].val = p0; /* _str on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#subs for (self: RopeIter): IndexedIterator[String] */
val* standard__ropes___standard__ropes__RopeIter___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 522);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#subs= for (self: RopeIter, IndexedIterator[String]) */
void standard__ropes___standard__ropes__RopeIter___subs_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeIter___subs].val = p0; /* _subs on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#max for (self: RopeIter): Int */
long standard__ropes___standard__ropes__RopeIter___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___max].l; /* _max on <self:RopeIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#max= for (self: RopeIter, Int) */
void standard__ropes___standard__ropes__RopeIter___max_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeIter___max].l = p0; /* _max on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#pos for (self: RopeIter): Int */
long standard__ropes___standard__ropes__RopeIter___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___pos].l; /* _pos on <self:RopeIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#pos= for (self: RopeIter, Int) */
void standard__ropes___standard__ropes__RopeIter___pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeIter___pos].l = p0; /* _pos on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#init for (self: RopeIter, RopeString) */
void standard__ropes___standard__ropes__RopeIter___init(val* self, val* p0) {
val* var_root /* var root: RopeString */;
val* var /* : RopeSubstrings */;
val* var1 /* : IndexedIterator[String] */;
val* var2 /* : nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
var_root = p0;
var = NEW_standard__ropes__RopeSubstrings(&type_standard__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeSubstrings__init]))(var, var_root); /* init on <var:RopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeIter__subs_61d]))(self, var); /* subs= on <self:RopeIter>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeIter__pns_61d]))(self, 0l); /* pns= on <self:RopeIter>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__subs]))(self); /* subs on <self:RopeIter>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var1); /* item on <var1:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeIter__str_61d]))(self, var2); /* str= on <self:RopeIter>*/
}
{
var3 = ((long(*)(val* self))(var_root->class->vft[COLOR_standard__string__Text__length]))(var_root); /* length on <var_root:RopeString>*/
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
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeIter__max_61d]))(self, var4); /* max= on <self:RopeIter>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeIter__pos_61d]))(self, 0l); /* pos= on <self:RopeIter>*/
}
RET_LABEL:;
}
/* method ropes#RopeIter#from for (self: RopeIter, RopeString, Int) */
void standard__ropes___standard__ropes__RopeIter___from(val* self, val* p0, long p1) {
val* var_root /* var root: RopeString */;
long var_pos /* var pos: Int */;
val* var /* : RopeSubstrings */;
val* var1 /* : IndexedIterator[String] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : IndexedIterator[String] */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
var_root = p0;
var_pos = p1;
var = NEW_standard__ropes__RopeSubstrings(&type_standard__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_standard__ropes__RopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:RopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeIter__subs_61d]))(self, var); /* subs= on <self:RopeIter>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__subs]))(self); /* subs on <self:RopeIter>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var1); /* index on <var1:IndexedIterator[String]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var6 = var_pos - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeIter__pns_61d]))(self, var3); /* pns= on <self:RopeIter>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeIter__pos_61d]))(self, var_pos); /* pos= on <self:RopeIter>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__subs]))(self); /* subs on <self:RopeIter>*/
}
{
var8 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var7); /* item on <var7:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeIter__str_61d]))(self, var8); /* str= on <self:RopeIter>*/
}
{
var9 = ((long(*)(val* self))(var_root->class->vft[COLOR_standard__string__Text__length]))(var_root); /* length on <var_root:RopeString>*/
}
{
{ /* Inline kernel#Int#- (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var16 = var9 - 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeIter__max_61d]))(self, var10); /* max= on <self:RopeIter>*/
}
RET_LABEL:;
}
/* method ropes#RopeIter#item for (self: RopeIter): Char */
char standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
val* var1 /* : String */;
long var2 /* : Int */;
char var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__str]))(self); /* str on <self:RopeIter>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__pns]))(self); /* pns on <self:RopeIter>*/
}
{
var3 = ((char(*)(val* self, long p0))(var1->class->vft[COLOR_standard__string__Text___91d_93d]))(var1, var2); /* [] on <var1:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#is_ok for (self: RopeIter): Bool */
short int standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__pos]))(self); /* pos on <self:RopeIter>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__max]))(self); /* max on <self:RopeIter>*/
}
{
{ /* Inline kernel#Int#<= (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var6 = var1 <= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#index for (self: RopeIter): Int */
long standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__pos]))(self); /* pos on <self:RopeIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#next for (self: RopeIter) */
void standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeIter */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeIter */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
val* var15 /* : IndexedIterator[String] */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[String] */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : IndexedIterator[String] */;
val* var29 /* : IndexedIterator[String] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : IndexedIterator[String] */;
val* var33 /* : nullable Object */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_standard__ropes__RopeIter__pns]))(var_); /* pns on <var_:RopeIter>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__ropes__RopeIter__pns_61d]))(var_, var1); /* pns= on <var_:RopeIter>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_standard__ropes__RopeIter__pos]))(var_5); /* pos on <var_5:RopeIter>*/
}
{
{ /* Inline kernel#Int#+ (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var13 = var6 + 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_standard__ropes__RopeIter__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeIter>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__pns]))(self); /* pns on <self:RopeIter>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__subs]))(self); /* subs on <self:RopeIter>*/
}
{
var16 = ((val*(*)(val* self))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var15); /* item on <var15:IndexedIterator[String]>*/
}
{
var17 = ((long(*)(val* self))(var16->class->vft[COLOR_standard__string__Text__length]))(var16); /* length on <var16:nullable Object(String)>*/
}
{
{ /* Inline kernel#Int#< (var14,var17) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var24 = var14 < var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__subs]))(self); /* subs on <self:RopeIter>*/
}
{
var26 = ((short int(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var25); /* is_ok on <var25:IndexedIterator[String]>*/
}
var27 = !var26;
if (var27){
goto RET_LABEL;
} else {
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__subs]))(self); /* subs on <self:RopeIter>*/
}
{
((void(*)(val* self))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var28); /* next on <var28:IndexedIterator[String]>*/
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__subs]))(self); /* subs on <self:RopeIter>*/
}
{
var30 = ((short int(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var29); /* is_ok on <var29:IndexedIterator[String]>*/
}
var31 = !var30;
if (var31){
goto RET_LABEL;
} else {
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeIter__subs]))(self); /* subs on <self:RopeIter>*/
}
{
var33 = ((val*(*)(val* self))((((long)var32&3)?class_info[((long)var32&3)]:var32->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var32); /* item on <var32:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeIter__str_61d]))(self, var33); /* str= on <self:RopeIter>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeIter__pns_61d]))(self, 0l); /* pns= on <self:RopeIter>*/
}
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#iter for (self: ReverseRopeSubstrings): RopeIterPiece */
val* standard__ropes___standard__ropes__ReverseRopeSubstrings___iter(val* self) {
val* var /* : RopeIterPiece */;
val* var1 /* : RopeIterPiece */;
var1 = self->attrs[COLOR_standard__ropes__ReverseRopeSubstrings___iter].val; /* _iter on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 567);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#iter= for (self: ReverseRopeSubstrings, RopeIterPiece) */
void standard__ropes___standard__ropes__ReverseRopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__ReverseRopeSubstrings___iter].val = p0; /* _iter on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#pos for (self: ReverseRopeSubstrings): Int */
long standard__ropes___standard__ropes__ReverseRopeSubstrings___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#pos= for (self: ReverseRopeSubstrings, Int) */
void standard__ropes___standard__ropes__ReverseRopeSubstrings___pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__ReverseRopeSubstrings___pos].l = p0; /* _pos on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#str for (self: ReverseRopeSubstrings): String */
val* standard__ropes___standard__ropes__ReverseRopeSubstrings___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__ReverseRopeSubstrings___str].val; /* _str on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 572);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#str= for (self: ReverseRopeSubstrings, String) */
void standard__ropes___standard__ropes__ReverseRopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__ReverseRopeSubstrings___str].val = p0; /* _str on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#init for (self: ReverseRopeSubstrings, RopeString) */
void standard__ropes___standard__ropes__ReverseRopeSubstrings___init(val* self, val* p0) {
val* var_root /* var root: RopeString */;
val* var /* : RopeIterPiece */;
val* var_r /* var r: RopeIterPiece */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
val* var_lnod /* var lnod: String */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : String */;
val* var10 /* : RopeIterPiece */;
var_root = p0;
var = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var, var_root); /* node= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var, 0); /* ldone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var, 1); /* rdone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:RopeIterPiece>*/
}
var_r = var;
{
var1 = ((long(*)(val* self))(var_root->class->vft[COLOR_standard__string__Text__length]))(var_root); /* length on <var_root:RopeString>*/
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__pos_61d]))(self, var2); /* pos= on <self:ReverseRopeSubstrings>*/
}
var_lnod = var_root;
for(;;) {
/* <var_lnod:String> isa Concat */
cltype7 = type_standard__ropes__Concat.color;
idtype8 = type_standard__ropes__Concat.id;
if(cltype7 >= var_lnod->type->table_size) {
var6 = 0;
} else {
var6 = var_lnod->type->type_table[cltype7] == idtype8;
}
if (var6){
{
var9 = ((val*(*)(val* self))(var_lnod->class->vft[COLOR_standard__ropes__Concat__right]))(var_lnod); /* right on <var_lnod:String(Concat)>*/
}
var_lnod = var9;
var10 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var10, var_lnod); /* node= on <var10:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var10->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var10, 0); /* ldone= on <var10:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var10->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var10, 1); /* rdone= on <var10:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var10, var_r); /* prev= on <var10:RopeIterPiece>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:RopeIterPiece>*/
}
var_r = var10;
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__str_61d]))(self, var_lnod); /* str= on <self:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__iter_61d]))(self, var_r); /* iter= on <self:ReverseRopeSubstrings>*/
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#from for (self: ReverseRopeSubstrings, RopeString, Int) */
void standard__ropes___standard__ropes__ReverseRopeSubstrings___from(val* self, val* p0, long p1) {
val* var_root /* var root: RopeString */;
long var_pos /* var pos: Int */;
val* var /* : RopeIterPiece */;
val* var_r /* var r: RopeIterPiece */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : String */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : RopeIterPiece */;
val* var21 /* : String */;
val* var22 /* : RopeIterPiece */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
var_root = p0;
var_pos = p1;
var = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var, var_root); /* node= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var, 0); /* ldone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var, 1); /* rdone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:RopeIterPiece>*/
}
var_r = var;
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype = type_standard__ropes__Concat.color;
idtype = type_standard__ropes__Concat.id;
if(cltype >= var_rnod->type->table_size) {
var1 = 0;
} else {
var1 = var_rnod->type->type_table[cltype] == idtype;
}
if (var1){
{
var2 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__left]))(var_rnod); /* left on <var_rnod:String(Concat)>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__length]))(var2); /* length on <var2:String>*/
}
{
{ /* Inline kernel#Int#>= (var_off,var3) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var9 = var_off >= var3;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var10 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__left]))(var_rnod); /* left on <var_rnod:String(Concat)>*/
}
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_standard__string__Text__length]))(var10); /* length on <var10:String>*/
}
{
{ /* Inline kernel#Int#- (var_off,var11) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var18 = var_off - var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_off = var12;
{
var19 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__right]))(var_rnod); /* right on <var_rnod:String(Concat)>*/
}
var_rnod = var19;
var20 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var20, var_rnod); /* node= on <var20:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var20->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var20, 0); /* ldone= on <var20:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var20->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var20, 1); /* rdone= on <var20:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var20, var_r); /* prev= on <var20:RopeIterPiece>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_standard__kernel__Object__init]))(var20); /* init on <var20:RopeIterPiece>*/
}
var_r = var20;
} else {
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var_r, 1); /* ldone= on <var_r:RopeIterPiece>*/
}
{
var21 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__left]))(var_rnod); /* left on <var_rnod:String(Concat)>*/
}
var_rnod = var21;
var22 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var22, var_rnod); /* node= on <var22:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var22->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var22, 0); /* ldone= on <var22:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var22->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var22, 1); /* rdone= on <var22:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var22, var_r); /* prev= on <var22:RopeIterPiece>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:RopeIterPiece>*/
}
var_r = var22;
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var_r, 1); /* ldone= on <var_r:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__iter_61d]))(self, var_r); /* iter= on <self:ReverseRopeSubstrings>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var25 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var29 = var_pos - var_off;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__pos_61d]))(self, var23); /* pos= on <self:ReverseRopeSubstrings>*/
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#item for (self: ReverseRopeSubstrings): String */
val* standard__ropes___standard__ropes__ReverseRopeSubstrings___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__str]))(self); /* str on <self:ReverseRopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#index for (self: ReverseRopeSubstrings): Int */
long standard__ropes___standard__ropes__ReverseRopeSubstrings___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__pos]))(self); /* pos on <self:ReverseRopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#is_ok for (self: ReverseRopeSubstrings): Bool */
short int standard__ropes___standard__ropes__ReverseRopeSubstrings___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__pos]))(self); /* pos on <self:ReverseRopeSubstrings>*/
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
/* method ropes#ReverseRopeSubstrings#next for (self: ReverseRopeSubstrings) */
void standard__ropes___standard__ropes__ReverseRopeSubstrings___standard__abstract_collection__Iterator__next(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : RopeIterPiece */;
val* var6 /* : nullable RopeIterPiece */;
val* var_curr /* var curr: nullable RopeIterPiece */;
val* var7 /* : String */;
val* var_currit /* var currit: String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
val* var_ /* var : ReverseRopeSubstrings */;
long var15 /* : Int */;
val* var16 /* : String */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : RopeIterPiece */;
val* var28 /* : String */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : RopeIterPiece */;
val* var32 /* : String */;
val* var33 /* : nullable RopeIterPiece */;
long var35 /* : Int */;
long var37 /* : Int */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__pos]))(self); /* pos on <self:ReverseRopeSubstrings>*/
}
{
{ /* Inline kernel#Int#< (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var4 = var < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__iter]))(self); /* iter on <self:ReverseRopeSubstrings>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__ropes__RopeIterPiece__prev]))(var5); /* prev on <var5:RopeIterPiece>*/
}
var_curr = var6;
if (var_curr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 625);
fatal_exit(1);
} else {
var7 = ((val*(*)(val* self))(var_curr->class->vft[COLOR_standard__ropes__RopeIterPiece__node]))(var_curr); /* node on <var_curr:nullable RopeIterPiece>*/
}
var_currit = var7;
for(;;) {
if (var_curr == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_curr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_curr, ((val*)NULL)); /* != on <var_curr:nullable RopeIterPiece>*/
var8 = var9;
}
if (var8){
{
var10 = ((val*(*)(val* self))(var_curr->class->vft[COLOR_standard__ropes__RopeIterPiece__node]))(var_curr); /* node on <var_curr:nullable RopeIterPiece(RopeIterPiece)>*/
}
var_currit = var10;
/* <var_currit:String> isa Concat */
cltype12 = type_standard__ropes__Concat.color;
idtype13 = type_standard__ropes__Concat.id;
if(cltype12 >= var_currit->type->table_size) {
var11 = 0;
} else {
var11 = var_currit->type->type_table[cltype12] == idtype13;
}
var14 = !var11;
if (var14){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__str_61d]))(self, var_currit); /* str= on <self:ReverseRopeSubstrings>*/
}
var_ = self;
{
var15 = ((long(*)(val* self))(var_->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__pos]))(var_); /* pos on <var_:ReverseRopeSubstrings>*/
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__str]))(self); /* str on <self:ReverseRopeSubstrings>*/
}
{
var17 = ((long(*)(val* self))(var16->class->vft[COLOR_standard__string__Text__length]))(var16); /* length on <var16:String>*/
}
{
{ /* Inline kernel#Int#- (var15,var17) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var24 = var15 - var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__pos_61d]))(var_, var18); /* pos= on <var_:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__iter_61d]))(self, var_curr); /* iter= on <self:ReverseRopeSubstrings>*/
}
goto RET_LABEL;
} else {
}
{
var25 = ((short int(*)(val* self))(var_curr->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone]))(var_curr); /* rdone on <var_curr:nullable RopeIterPiece(RopeIterPiece)>*/
}
var26 = !var25;
if (var26){
{
((void(*)(val* self, short int p0))(var_curr->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var_curr, 1); /* rdone= on <var_curr:nullable RopeIterPiece(RopeIterPiece)>*/
}
var27 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
var28 = ((val*(*)(val* self))(var_currit->class->vft[COLOR_standard__ropes__Concat__right]))(var_currit); /* right on <var_currit:String(Concat)>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var27, var28); /* node= on <var27:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var27->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var27, 0); /* ldone= on <var27:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var27->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var27, 0); /* rdone= on <var27:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var27, var_curr); /* prev= on <var27:RopeIterPiece>*/
}
{
((void(*)(val* self))(var27->class->vft[COLOR_standard__kernel__Object__init]))(var27); /* init on <var27:RopeIterPiece>*/
}
var_curr = var27;
goto BREAK_label;
} else {
}
{
var29 = ((short int(*)(val* self))(var_curr->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone]))(var_curr); /* ldone on <var_curr:nullable RopeIterPiece(RopeIterPiece)>*/
}
var30 = !var29;
if (var30){
{
((void(*)(val* self, short int p0))(var_curr->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var_curr, 1); /* ldone= on <var_curr:nullable RopeIterPiece(RopeIterPiece)>*/
}
var31 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
var32 = ((val*(*)(val* self))(var_currit->class->vft[COLOR_standard__ropes__Concat__left]))(var_currit); /* left on <var_currit:String(Concat)>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var31, var32); /* node= on <var31:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var31->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var31, 0); /* ldone= on <var31:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var31->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var31, 0); /* rdone= on <var31:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var31, var_curr); /* prev= on <var31:RopeIterPiece>*/
}
{
((void(*)(val* self))(var31->class->vft[COLOR_standard__kernel__Object__init]))(var31); /* init on <var31:RopeIterPiece>*/
}
var_curr = var31;
goto BREAK_label;
} else {
}
{
var33 = ((val*(*)(val* self))(var_curr->class->vft[COLOR_standard__ropes__RopeIterPiece__prev]))(var_curr); /* prev on <var_curr:nullable RopeIterPiece(RopeIterPiece)>*/
}
var_curr = var33;
} else {
goto BREAK_label34;
}
BREAK_label: (void)0;
}
BREAK_label34: (void)0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var37 = -1l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__ReverseRopeSubstrings__pos_61d]))(self, var35); /* pos= on <self:ReverseRopeSubstrings>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#iter for (self: RopeBufSubstringIterator): Iterator[String] */
val* standard__ropes___standard__ropes__RopeBufSubstringIterator___iter(val* self) {
val* var /* : Iterator[String] */;
val* var1 /* : Iterator[String] */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 653);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#iter= for (self: RopeBufSubstringIterator, Iterator[String]) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___iter_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val = p0; /* _iter on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#nsstr for (self: RopeBufSubstringIterator): String */
val* standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr].val; /* _nsstr on <self:RopeBufSubstringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nsstr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 655);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#nsstr= for (self: RopeBufSubstringIterator, String) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr].val = p0; /* _nsstr on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#nsstr_done for (self: RopeBufSubstringIterator): Bool */
short int standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr_done].s; /* _nsstr_done on <self:RopeBufSubstringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#nsstr_done= for (self: RopeBufSubstringIterator, Bool) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr_done_61d(val* self, short int p0) {
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr_done].s = p0; /* _nsstr_done on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#init for (self: RopeBufSubstringIterator, RopeBuffer) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___init(val* self, val* p0) {
val* var_str /* var str: RopeBuffer */;
val* var /* : String */;
val* var1 /* : Iterator[Text] */;
val* var2 /* : FlatString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
var_str = p0;
{
var = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_str); /* str on <var_str:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__Text__substrings]))(var); /* substrings on <var:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__iter_61d]))(self, var1); /* iter= on <self:RopeBufSubstringIterator>*/
}
var2 = NEW_standard__FlatString(&type_standard__FlatString);
{
var3 = ((char*(*)(val* self))(var_str->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(var_str); /* ns on <var_str:RopeBuffer>*/
}
{
var4 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(var_str); /* rpos on <var_str:RopeBuffer>*/
}
{
var5 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(var_str); /* dumped on <var_str:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var4,var5) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var9 = var4 - var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
var10 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(var_str); /* dumped on <var_str:RopeBuffer>*/
}
{
var11 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(var_str); /* rpos on <var_str:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var11,1l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var18 = var11 - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var2->class->vft[COLOR_standard__string__FlatString__with_infos]))(var2, var3, var6, var10, var12); /* with_infos on <var2:FlatString>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__nsstr_61d]))(self, var2); /* nsstr= on <self:RopeBufSubstringIterator>*/
}
{
var19 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#== (var19,0l) on <var19:Int> */
var22 = var19 == 0l;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__nsstr_done_61d]))(self, 1); /* nsstr_done= on <self:RopeBufSubstringIterator>*/
}
} else {
}
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#is_ok for (self: RopeBufSubstringIterator): Bool */
short int standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[String] */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
var3 = ((short int(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var2); /* is_ok on <var2:Iterator[String]>*/
}
var_ = var3;
if (var3){
var1 = var_;
} else {
{
var4 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__nsstr_done]))(self); /* nsstr_done on <self:RopeBufSubstringIterator>*/
}
var5 = !var4;
var1 = var5;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#item for (self: RopeBufSubstringIterator): String */
val* standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[String] */;
short int var3 /* : Bool */;
val* var4 /* : Iterator[String] */;
val* var5 /* : nullable Object */;
val* var6 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:RopeBufSubstringIterator>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 669);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
var3 = ((short int(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var2); /* is_ok on <var2:Iterator[String]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
var5 = ((val*(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var4); /* item on <var4:Iterator[String]>*/
}
var = var5;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__nsstr]))(self); /* nsstr on <self:RopeBufSubstringIterator>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#next for (self: RopeBufSubstringIterator) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var /* : Iterator[String] */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[String] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
var1 = ((short int(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var); /* is_ok on <var:Iterator[String]>*/
}
if (var1){
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
((void(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var2); /* next on <var2:Iterator[String]>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__ropes__RopeBufSubstringIterator__nsstr_done_61d]))(self, 1); /* nsstr_done= on <self:RopeBufSubstringIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeSubstrings#iter for (self: RopeSubstrings): RopeIterPiece */
val* standard__ropes___standard__ropes__RopeSubstrings___iter(val* self) {
val* var /* : RopeIterPiece */;
val* var1 /* : RopeIterPiece */;
var1 = self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 687);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#iter= for (self: RopeSubstrings, RopeIterPiece) */
void standard__ropes___standard__ropes__RopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val = p0; /* _iter on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#pos for (self: RopeSubstrings): Int */
long standard__ropes___standard__ropes__RopeSubstrings___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#pos= for (self: RopeSubstrings, Int) */
void standard__ropes___standard__ropes__RopeSubstrings___pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l = p0; /* _pos on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#max for (self: RopeSubstrings): Int */
long standard__ropes___standard__ropes__RopeSubstrings___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#max= for (self: RopeSubstrings, Int) */
void standard__ropes___standard__ropes__RopeSubstrings___max_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l = p0; /* _max on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#str for (self: RopeSubstrings): String */
val* standard__ropes___standard__ropes__RopeSubstrings___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 694);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#str= for (self: RopeSubstrings, String) */
void standard__ropes___standard__ropes__RopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val = p0; /* _str on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#init for (self: RopeSubstrings, RopeString) */
void standard__ropes___standard__ropes__RopeSubstrings___init(val* self, val* p0) {
val* var_root /* var root: RopeString */;
val* var /* : RopeIterPiece */;
val* var_r /* var r: RopeIterPiece */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
val* var_rnod /* var rnod: String */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : String */;
val* var10 /* : RopeIterPiece */;
var_root = p0;
var = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var, var_root); /* node= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var, 1); /* ldone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var, 0); /* rdone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:RopeIterPiece>*/
}
var_r = var;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__pos_61d]))(self, 0l); /* pos= on <self:RopeSubstrings>*/
}
{
var1 = ((long(*)(val* self))(var_root->class->vft[COLOR_standard__string__Text__length]))(var_root); /* length on <var_root:RopeString>*/
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__max_61d]))(self, var2); /* max= on <self:RopeSubstrings>*/
}
var_rnod = var_root;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype7 = type_standard__ropes__Concat.color;
idtype8 = type_standard__ropes__Concat.id;
if(cltype7 >= var_rnod->type->table_size) {
var6 = 0;
} else {
var6 = var_rnod->type->type_table[cltype7] == idtype8;
}
if (var6){
{
var9 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__left]))(var_rnod); /* left on <var_rnod:String(Concat)>*/
}
var_rnod = var9;
var10 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var10, var_rnod); /* node= on <var10:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var10->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var10, 1); /* ldone= on <var10:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var10->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var10, 0); /* rdone= on <var10:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var10, var_r); /* prev= on <var10:RopeIterPiece>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:RopeIterPiece>*/
}
var_r = var10;
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:RopeSubstrings>*/
}
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var_r, 1); /* rdone= on <var_r:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__iter_61d]))(self, var_r); /* iter= on <self:RopeSubstrings>*/
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeSubstrings#from for (self: RopeSubstrings, RopeString, Int) */
void standard__ropes___standard__ropes__RopeSubstrings___from(val* self, val* p0, long p1) {
val* var_root /* var root: RopeString */;
long var_pos /* var pos: Int */;
val* var /* : RopeIterPiece */;
val* var_r /* var r: RopeIterPiece */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : String */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var18 /* : String */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : RopeIterPiece */;
val* var29 /* : String */;
val* var30 /* : RopeIterPiece */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
var_root = p0;
var_pos = p1;
var = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var, var_root); /* node= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var, 1); /* ldone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var, 0); /* rdone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:RopeIterPiece>*/
}
var_r = var;
{
var1 = ((long(*)(val* self))(var_root->class->vft[COLOR_standard__string__Text__length]))(var_root); /* length on <var_root:RopeString>*/
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__max_61d]))(self, var2); /* max= on <self:RopeSubstrings>*/
}
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype7 = type_standard__ropes__Concat.color;
idtype8 = type_standard__ropes__Concat.id;
if(cltype7 >= var_rnod->type->table_size) {
var6 = 0;
} else {
var6 = var_rnod->type->type_table[cltype7] == idtype8;
}
if (var6){
{
var9 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__left]))(var_rnod); /* left on <var_rnod:String(Concat)>*/
}
{
var10 = ((long(*)(val* self))(var9->class->vft[COLOR_standard__string__Text__length]))(var9); /* length on <var9:String>*/
}
{
{ /* Inline kernel#Int#>= (var_off,var10) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var17 = var_off >= var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var_r, 1); /* rdone= on <var_r:RopeIterPiece>*/
}
{
var18 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__left]))(var_rnod); /* left on <var_rnod:String(Concat)>*/
}
{
var19 = ((long(*)(val* self))(var18->class->vft[COLOR_standard__string__Text__length]))(var18); /* length on <var18:String>*/
}
{
{ /* Inline kernel#Int#- (var_off,var19) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var26 = var_off - var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_off = var20;
{
var27 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__right]))(var_rnod); /* right on <var_rnod:String(Concat)>*/
}
var_rnod = var27;
var28 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var28, var_rnod); /* node= on <var28:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var28->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var28, 1); /* ldone= on <var28:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var28->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var28, 0); /* rdone= on <var28:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var28, var_r); /* prev= on <var28:RopeIterPiece>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_standard__kernel__Object__init]))(var28); /* init on <var28:RopeIterPiece>*/
}
var_r = var28;
} else {
{
var29 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__left]))(var_rnod); /* left on <var_rnod:String(Concat)>*/
}
var_rnod = var29;
var30 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var30, var_rnod); /* node= on <var30:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var30, 1); /* ldone= on <var30:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var30, 0); /* rdone= on <var30:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var30, var_r); /* prev= on <var30:RopeIterPiece>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_standard__kernel__Object__init]))(var30); /* init on <var30:RopeIterPiece>*/
}
var_r = var30;
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:RopeSubstrings>*/
}
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var_r, 1); /* rdone= on <var_r:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__iter_61d]))(self, var_r); /* iter= on <self:RopeSubstrings>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var33 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var37 = var_pos - var_off;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__pos_61d]))(self, var31); /* pos= on <self:RopeSubstrings>*/
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeSubstrings#item for (self: RopeSubstrings): String */
val* standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__str]))(self); /* str on <self:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#is_ok for (self: RopeSubstrings): Bool */
short int standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__pos]))(self); /* pos on <self:RopeSubstrings>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__max]))(self); /* max on <self:RopeSubstrings>*/
}
{
{ /* Inline kernel#Int#<= (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var6 = var1 <= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#index for (self: RopeSubstrings): Int */
long standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__pos]))(self); /* pos on <self:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#next for (self: RopeSubstrings) */
void standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeSubstrings */;
long var /* : Int */;
val* var1 /* : String */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : RopeIterPiece */;
val* var17 /* : nullable RopeIterPiece */;
val* var_it /* var it: nullable RopeIterPiece */;
val* var18 /* : String */;
val* var_rnod /* var rnod: String */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
val* var26 /* : RopeIterPiece */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : String */;
val* var30 /* : RopeIterPiece */;
val* var31 /* : nullable RopeIterPiece */;
val* var32 /* : String */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_standard__ropes__RopeSubstrings__pos]))(var_); /* pos on <var_:RopeSubstrings>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__str]))(self); /* str on <self:RopeSubstrings>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
{
{ /* Inline kernel#Int#+ (var,var2) on <var:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var6 = var + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__ropes__RopeSubstrings__pos_61d]))(var_, var3); /* pos= on <var_:RopeSubstrings>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__pos]))(self); /* pos on <self:RopeSubstrings>*/
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__max]))(self); /* max on <self:RopeSubstrings>*/
}
{
{ /* Inline kernel#Int#> (var7,var8) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var15 = var7 > var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__iter]))(self); /* iter on <self:RopeSubstrings>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__ropes__RopeIterPiece__prev]))(var16); /* prev on <var16:RopeIterPiece>*/
}
var_it = var17;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 751);
fatal_exit(1);
} else {
var18 = ((val*(*)(val* self))(var_it->class->vft[COLOR_standard__ropes__RopeIterPiece__node]))(var_it); /* node on <var_it:nullable RopeIterPiece>*/
}
var_rnod = var18;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype20 = type_standard__ropes__Concat.color;
idtype21 = type_standard__ropes__Concat.id;
if(cltype20 >= var_rnod->type->table_size) {
var19 = 0;
} else {
var19 = var_rnod->type->type_table[cltype20] == idtype21;
}
var22 = !var19;
if (var22){
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 754);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var_it, 1); /* ldone= on <var_it:nullable RopeIterPiece>*/
}
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 755);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var_it, 1); /* rdone= on <var_it:nullable RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:RopeSubstrings>*/
}
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 757);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeSubstrings__iter_61d]))(self, var_it); /* iter= on <self:RopeSubstrings>*/
}
goto BREAK_label;
} else {
}
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 760);
fatal_exit(1);
} else {
var23 = ((short int(*)(val* self))(var_it->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone]))(var_it); /* ldone on <var_it:nullable RopeIterPiece>*/
}
var24 = !var23;
if (var24){
{
var25 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__left]))(var_rnod); /* left on <var_rnod:String(Concat)>*/
}
var_rnod = var25;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 762);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var_it, 1); /* ldone= on <var_it:nullable RopeIterPiece>*/
}
var26 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var26, var_rnod); /* node= on <var26:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var26->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var26, 0); /* ldone= on <var26:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var26->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var26, 0); /* rdone= on <var26:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var26, var_it); /* prev= on <var26:RopeIterPiece>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_standard__kernel__Object__init]))(var26); /* init on <var26:RopeIterPiece>*/
}
var_it = var26;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 764);
fatal_exit(1);
} else {
var27 = ((short int(*)(val* self))(var_it->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone]))(var_it); /* rdone on <var_it:nullable RopeIterPiece>*/
}
var28 = !var27;
if (var28){
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 765);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var_it, 1); /* rdone= on <var_it:nullable RopeIterPiece>*/
}
{
var29 = ((val*(*)(val* self))(var_rnod->class->vft[COLOR_standard__ropes__Concat__right]))(var_rnod); /* right on <var_rnod:String(Concat)>*/
}
var_rnod = var29;
var30 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var30, var_rnod); /* node= on <var30:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var30, 0); /* ldone= on <var30:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var30, 0); /* rdone= on <var30:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var30, var_it); /* prev= on <var30:RopeIterPiece>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_standard__kernel__Object__init]))(var30); /* init on <var30:RopeIterPiece>*/
}
var_it = var30;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 769);
fatal_exit(1);
} else {
var31 = ((val*(*)(val* self))(var_it->class->vft[COLOR_standard__ropes__RopeIterPiece__prev]))(var_it); /* prev on <var_it:nullable RopeIterPiece>*/
}
var_it = var31;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 770);
fatal_exit(1);
} else {
var32 = ((val*(*)(val* self))(var_it->class->vft[COLOR_standard__ropes__RopeIterPiece__node]))(var_it); /* node on <var_it:nullable RopeIterPiece>*/
}
var_rnod = var32;
goto BREAK_label33;
}
}
BREAK_label33: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeChars#[] for (self: RopeChars, Int): Char */
char standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
char var2 /* : Char */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeChars>*/
}
{
var2 = ((char(*)(val* self, long p0))(var1->class->vft[COLOR_standard__string__Text___91d_93d]))(var1, var_i); /* [] on <var1:Text(RopeString)>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeIter */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_standard__ropes__RopeIter(&type_standard__ropes__RopeIter);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_standard__ropes__RopeIter__from]))(var1, var2, var_i); /* from on <var1:RopeIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#reverse_iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeReviter */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_standard__ropes__RopeReviter(&type_standard__ropes__RopeReviter);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_standard__ropes__RopeReviter__from]))(var1, var2, var_i); /* from on <var1:RopeReviter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#sit for (self: RopeBufferIter): IndexedIterator[Char] */
val* standard___standard__RopeBufferIter___sit(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___sit].val; /* _sit on <self:RopeBufferIter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 797);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#sit= for (self: RopeBufferIter, IndexedIterator[Char]) */
void standard___standard__RopeBufferIter___sit_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___sit].val = p0; /* _sit on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#ns for (self: RopeBufferIter): NativeString */
char* standard___standard__RopeBufferIter___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___ns].str; /* _ns on <self:RopeBufferIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#ns= for (self: RopeBufferIter, NativeString) */
void standard___standard__RopeBufferIter___ns_61d(val* self, char* p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___ns].str = p0; /* _ns on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#pns for (self: RopeBufferIter): Int */
long standard___standard__RopeBufferIter___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___pns].l; /* _pns on <self:RopeBufferIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#pns= for (self: RopeBufferIter, Int) */
void standard___standard__RopeBufferIter___pns_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___pns].l = p0; /* _pns on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#maxpos for (self: RopeBufferIter): Int */
long standard___standard__RopeBufferIter___maxpos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___maxpos].l; /* _maxpos on <self:RopeBufferIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#maxpos= for (self: RopeBufferIter, Int) */
void standard___standard__RopeBufferIter___maxpos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___maxpos].l = p0; /* _maxpos on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#index for (self: RopeBufferIter): Int */
long standard___standard__RopeBufferIter___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___index].l; /* _index on <self:RopeBufferIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#index= for (self: RopeBufferIter, Int) */
void standard___standard__RopeBufferIter___index_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___index].l = p0; /* _index on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#init for (self: RopeBufferIter, RopeBuffer) */
void standard___standard__RopeBufferIter___init(val* self, val* p0) {
val* var_t /* var t: RopeBuffer */;
char* var /* : NativeString */;
long var1 /* : Int */;
val* var2 /* : String */;
val* var3 /* : SequenceRead[Char] */;
val* var4 /* : Iterator[nullable Object] */;
long var5 /* : Int */;
var_t = p0;
{
var = ((char*(*)(val* self))(var_t->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(var_t); /* ns on <var_t:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__ns_61d]))(self, var); /* ns= on <self:RopeBufferIter>*/
}
{
var1 = ((long(*)(val* self))(var_t->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(var_t); /* rpos on <var_t:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__maxpos_61d]))(self, var1); /* maxpos= on <self:RopeBufferIter>*/
}
{
var2 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_t); /* str on <var_t:RopeBuffer>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__chars]))(var2); /* chars on <var2:String>*/
}
{
var4 = ((val*(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var3); /* iterator on <var3:SequenceRead[Char]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__sit_61d]))(self, var4); /* sit= on <self:RopeBufferIter>*/
}
{
var5 = ((long(*)(val* self))(var_t->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(var_t); /* dumped on <var_t:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__pns_61d]))(self, var5); /* pns= on <self:RopeBufferIter>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__index_61d]))(self, 0l); /* index= on <self:RopeBufferIter>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferIter#from for (self: RopeBufferIter, RopeBuffer, Int) */
void standard___standard__RopeBufferIter___from(val* self, val* p0, long p1) {
val* var_t /* var t: RopeBuffer */;
long var_pos /* var pos: Int */;
char* var /* : NativeString */;
long var1 /* : Int */;
val* var2 /* : String */;
val* var3 /* : SequenceRead[Char] */;
val* var4 /* : IndexedIterator[nullable Object] */;
val* var5 /* : String */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
var_t = p0;
var_pos = p1;
{
var = ((char*(*)(val* self))(var_t->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(var_t); /* ns on <var_t:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__ns_61d]))(self, var); /* ns= on <self:RopeBufferIter>*/
}
{
var1 = ((long(*)(val* self))(var_t->class->vft[COLOR_standard__string__Text__length]))(var_t); /* length on <var_t:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__maxpos_61d]))(self, var1); /* maxpos= on <self:RopeBufferIter>*/
}
{
var2 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_t); /* str on <var_t:RopeBuffer>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__chars]))(var2); /* chars on <var2:String>*/
}
{
var4 = ((val*(*)(val* self, long p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__SequenceRead__iterator_from]))(var3, var_pos); /* iterator_from on <var3:SequenceRead[Char]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__sit_61d]))(self, var4); /* sit= on <self:RopeBufferIter>*/
}
{
var5 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_t); /* str on <var_t:RopeBuffer>*/
}
{
var6 = ((long(*)(val* self))(var5->class->vft[COLOR_standard__string__Text__length]))(var5); /* length on <var5:String>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var6) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var10 = var_pos - var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__pns_61d]))(self, var7); /* pns= on <self:RopeBufferIter>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__index_61d]))(self, var_pos); /* index= on <self:RopeBufferIter>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferIter#is_ok for (self: RopeBufferIter): Bool */
short int standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(self); /* index on <self:RopeBufferIter>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__maxpos]))(self); /* maxpos on <self:RopeBufferIter>*/
}
{
{ /* Inline kernel#Int#< (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var1 < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#item for (self: RopeBufferIter): Char */
char standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
val* var1 /* : IndexedIterator[Char] */;
short int var2 /* : Bool */;
val* var3 /* : IndexedIterator[Char] */;
val* var4 /* : nullable Object */;
char var5 /* : Char */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
char var8 /* : Char */;
char var10 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__sit]))(self); /* sit on <self:RopeBufferIter>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:IndexedIterator[Char]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__sit]))(self); /* sit on <self:RopeBufferIter>*/
}
{
var4 = ((val*(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var3); /* item on <var3:IndexedIterator[Char]>*/
}
var5 = (char)((long)(var4)>>2);
var = var5;
goto RET_LABEL;
} else {
}
{
var6 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__ns]))(self); /* ns on <self:RopeBufferIter>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__pns]))(self); /* pns on <self:RopeBufferIter>*/
}
{
{ /* Inline string#NativeString#[] (var6,var7) on <var6:NativeString> */
var10 = var6[var7];
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#next for (self: RopeBufferIter) */
void standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeBufferIter */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var5 /* : IndexedIterator[Char] */;
short int var6 /* : Bool */;
val* var7 /* : IndexedIterator[Char] */;
val* var_8 /* var : RopeBufferIter */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_); /* index on <var_:RopeBufferIter>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__ropes__RopeBufferIter__index_61d]))(var_, var1); /* index= on <var_:RopeBufferIter>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__sit]))(self); /* sit on <self:RopeBufferIter>*/
}
{
var6 = ((short int(*)(val* self))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var5); /* is_ok on <var5:IndexedIterator[Char]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferIter__sit]))(self); /* sit on <self:RopeBufferIter>*/
}
{
((void(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var7); /* next on <var7:IndexedIterator[Char]>*/
}
} else {
var_8 = self;
{
var9 = ((long(*)(val* self))(var_8->class->vft[COLOR_standard__ropes__RopeBufferIter__pns]))(var_8); /* pns on <var_8:RopeBufferIter>*/
}
{
{ /* Inline kernel#Int#+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var16 = var9 + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_8->class->vft[COLOR_standard__ropes__RopeBufferIter__pns_61d]))(var_8, var10); /* pns= on <var_8:RopeBufferIter>*/
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferReviter#sit for (self: RopeBufferReviter): IndexedIterator[Char] */
val* standard___standard__RopeBufferReviter___sit(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferReviter___sit].val; /* _sit on <self:RopeBufferReviter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 850);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferReviter#sit= for (self: RopeBufferReviter, IndexedIterator[Char]) */
void standard___standard__RopeBufferReviter___sit_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBufferReviter___sit].val = p0; /* _sit on <self:RopeBufferReviter> */
RET_LABEL:;
}
/* method ropes#RopeBufferReviter#ns for (self: RopeBufferReviter): NativeString */
char* standard___standard__RopeBufferReviter___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferReviter___ns].str; /* _ns on <self:RopeBufferReviter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferReviter#ns= for (self: RopeBufferReviter, NativeString) */
void standard___standard__RopeBufferReviter___ns_61d(val* self, char* p0) {
self->attrs[COLOR_standard__ropes__RopeBufferReviter___ns].str = p0; /* _ns on <self:RopeBufferReviter> */
RET_LABEL:;
}
/* method ropes#RopeBufferReviter#pns for (self: RopeBufferReviter): Int */
long standard___standard__RopeBufferReviter___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferReviter___pns].l; /* _pns on <self:RopeBufferReviter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferReviter#pns= for (self: RopeBufferReviter, Int) */
void standard___standard__RopeBufferReviter___pns_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBufferReviter___pns].l = p0; /* _pns on <self:RopeBufferReviter> */
RET_LABEL:;
}
/* method ropes#RopeBufferReviter#index for (self: RopeBufferReviter): Int */
long standard___standard__RopeBufferReviter___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferReviter___index].l; /* _index on <self:RopeBufferReviter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferReviter#index= for (self: RopeBufferReviter, Int) */
void standard___standard__RopeBufferReviter___index_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBufferReviter___index].l = p0; /* _index on <self:RopeBufferReviter> */
RET_LABEL:;
}
/* method ropes#RopeBufferReviter#init for (self: RopeBufferReviter, RopeBuffer) */
void standard___standard__RopeBufferReviter___init(val* self, val* p0) {
val* var_tgt /* var tgt: RopeBuffer */;
val* var /* : String */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
char* var16 /* : NativeString */;
var_tgt = p0;
{
var = ((val*(*)(val* self))(var_tgt->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_tgt); /* str on <var_tgt:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__Text__chars]))(var); /* chars on <var:String>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead__reverse_iterator]))(var1); /* reverse_iterator on <var1:SequenceRead[Char]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__sit_61d]))(self, var2); /* sit= on <self:RopeBufferReviter>*/
}
{
var3 = ((long(*)(val* self))(var_tgt->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(var_tgt); /* rpos on <var_tgt:RopeBuffer>*/
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
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__pns_61d]))(self, var4); /* pns= on <self:RopeBufferReviter>*/
}
{
var8 = ((long(*)(val* self))(var_tgt->class->vft[COLOR_standard__string__Text__length]))(var_tgt); /* length on <var_tgt:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var15 = var8 - 1l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__index_61d]))(self, var9); /* index= on <self:RopeBufferReviter>*/
}
{
var16 = ((char*(*)(val* self))(var_tgt->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(var_tgt); /* ns on <var_tgt:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__ns_61d]))(self, var16); /* ns= on <self:RopeBufferReviter>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferReviter#from for (self: RopeBufferReviter, RopeBuffer, Int) */
void standard___standard__RopeBufferReviter___from(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: RopeBuffer */;
long var_pos /* var pos: Int */;
val* var /* : String */;
val* var1 /* : SequenceRead[Char] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
val* var15 /* : IndexedIterator[nullable Object] */;
val* var16 /* : String */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
char* var25 /* : NativeString */;
var_tgt = p0;
var_pos = p1;
{
var = ((val*(*)(val* self))(var_tgt->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_tgt); /* str on <var_tgt:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__Text__chars]))(var); /* chars on <var:String>*/
}
{
var2 = ((long(*)(val* self))(var_tgt->class->vft[COLOR_standard__ropes__RopeBuffer__rpos]))(var_tgt); /* rpos on <var_tgt:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var6 = var_pos - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((long(*)(val* self))(var_tgt->class->vft[COLOR_standard__ropes__RopeBuffer__dumped]))(var_tgt); /* dumped on <var_tgt:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var3,var7) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var14 = var3 - var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead__reverse_iterator_from]))(var1, var8); /* reverse_iterator_from on <var1:SequenceRead[Char]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__sit_61d]))(self, var15); /* sit= on <self:RopeBufferReviter>*/
}
{
var16 = ((val*(*)(val* self))(var_tgt->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var_tgt); /* str on <var_tgt:RopeBuffer>*/
}
{
var17 = ((long(*)(val* self))(var16->class->vft[COLOR_standard__string__Text__length]))(var16); /* length on <var16:String>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var17) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var24 = var_pos - var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__pns_61d]))(self, var18); /* pns= on <self:RopeBufferReviter>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__index_61d]))(self, var_pos); /* index= on <self:RopeBufferReviter>*/
}
{
var25 = ((char*(*)(val* self))(var_tgt->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(var_tgt); /* ns on <var_tgt:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__ns_61d]))(self, var25); /* ns= on <self:RopeBufferReviter>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferReviter#is_ok for (self: RopeBufferReviter): Bool */
short int standard___standard__RopeBufferReviter___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(self); /* index on <self:RopeBufferReviter>*/
}
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
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferReviter#item for (self: RopeBufferReviter): Char */
char standard___standard__RopeBufferReviter___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
char var8 /* : Char */;
char var10 /* : Char */;
val* var11 /* : IndexedIterator[Char] */;
val* var12 /* : nullable Object */;
char var13 /* : Char */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__pns]))(self); /* pns on <self:RopeBufferReviter>*/
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
if (var2){
{
var6 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__ns]))(self); /* ns on <self:RopeBufferReviter>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__pns]))(self); /* pns on <self:RopeBufferReviter>*/
}
{
{ /* Inline string#NativeString#[] (var6,var7) on <var6:NativeString> */
var10 = var6[var7];
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__sit]))(self); /* sit on <self:RopeBufferReviter>*/
}
{
var12 = ((val*(*)(val* self))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var11); /* item on <var11:IndexedIterator[Char]>*/
}
var13 = (char)((long)(var12)>>2);
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferReviter#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard___standard__RopeBufferReviter___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard___standard__RopeBufferReviter___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferReviter#next for (self: RopeBufferReviter) */
void standard___standard__RopeBufferReviter___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeBufferReviter */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
val* var_13 /* var : RopeBufferReviter */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : IndexedIterator[Char] */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_); /* index on <var_:RopeBufferReviter>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__ropes__RopeBufferReviter__index_61d]))(var_, var1); /* index= on <var_:RopeBufferReviter>*/
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__pns]))(self); /* pns on <self:RopeBufferReviter>*/
}
{
{ /* Inline kernel#Int#>= (var5,0l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var12 = var5 >= 0l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var_13 = self;
{
var14 = ((long(*)(val* self))(var_13->class->vft[COLOR_standard__ropes__RopeBufferReviter__pns]))(var_13); /* pns on <var_13:RopeBufferReviter>*/
}
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
{
((void(*)(val* self, long p0))(var_13->class->vft[COLOR_standard__ropes__RopeBufferReviter__pns_61d]))(var_13, var15); /* pns= on <var_13:RopeBufferReviter>*/
}
} else {
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__ropes__RopeBufferReviter__sit]))(self); /* sit on <self:RopeBufferReviter>*/
}
{
((void(*)(val* self))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var22); /* next on <var22:IndexedIterator[Char]>*/
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#[] for (self: RopeBufferChars, Int): Char */
char standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : Text */;
val* var9 /* : String */;
char var10 /* : Char */;
val* var11 /* : Text */;
char* var12 /* : NativeString */;
val* var13 /* : Text */;
val* var14 /* : String */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
char var23 /* : Char */;
char var25 /* : Char */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var1); /* str on <var1:Text(RopeBuffer)>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__length]))(var2); /* length on <var2:String>*/
}
{
{ /* Inline kernel#Int#< (var_i,var3) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var7 = var_i < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var8); /* str on <var8:Text(RopeBuffer)>*/
}
{
var10 = ((char(*)(val* self, long p0))(var9->class->vft[COLOR_standard__string__Text___91d_93d]))(var9, var_i); /* [] on <var9:String>*/
}
var = var10;
goto RET_LABEL;
} else {
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var12 = ((char*(*)(val* self))(var11->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(var11); /* ns on <var11:Text(RopeBuffer)>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var13); /* str on <var13:Text(RopeBuffer)>*/
}
{
var15 = ((long(*)(val* self))(var14->class->vft[COLOR_standard__string__Text__length]))(var14); /* length on <var14:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var15) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var22 = var_i - var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var12,var16) on <var12:NativeString> */
var25 = var12[var16];
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#[]= for (self: RopeBufferChars, Int, Char) */
void standard___standard__RopeBufferChars___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, char p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_i /* var i: Int */;
char var_c /* var c: Char */;
val* var1 /* : Text */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Text */;
val* var7 /* : Text */;
val* var8 /* : String */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
val* var17 /* : Text */;
val* var18 /* : String */;
val* var_s /* var s: String */;
val* var19 /* : Text */;
val* var_l /* var l: String */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : Text */;
val* var_r /* var r: String */;
val* var28 /* : Text */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Text */;
char* var33 /* : NativeString */;
val* var34 /* : Text */;
val* var35 /* : String */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
/* Covariant cast for argument 1 (c) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 908);
fatal_exit(1);
}
var_i = p0;
var_c = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:Text(RopeBuffer)>*/
}
{
{ /* Inline kernel#Int#== (var_i,var2) on <var_i:Int> */
var5 = var_i == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, char p0))(var6->class->vft[COLOR_standard__string__Buffer__add]))(var6, var_c); /* add on <var6:Text(RopeBuffer)>*/
}
} else {
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var7); /* str on <var7:Text(RopeBuffer)>*/
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_standard__string__Text__length]))(var8); /* length on <var8:String>*/
}
{
{ /* Inline kernel#Int#< (var_i,var9) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var16 = var_i < var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var17); /* str on <var17:Text(RopeBuffer)>*/
}
var_s = var18;
{
var19 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_standard__string__Text__substring]))(var_s, 0l, var_i); /* substring on <var_s:String>*/
}
var_l = var19;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var26 = var_i + 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var27 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_standard__string__Text__substring_from]))(var_s, var20); /* substring_from on <var_s:String>*/
}
var_r = var27;
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
var29 = standard__string___Char___Object__to_s(var_c);
{
var30 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__string__String___43d]))(var_l, var29); /* + on <var_l:String>*/
}
{
var31 = ((val*(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__string__String___43d]))(var30, var_r); /* + on <var30:String>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__ropes__RopeBuffer__str_61d]))(var28, var31); /* str= on <var28:Text(RopeBuffer)>*/
}
} else {
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var33 = ((char*(*)(val* self))(var32->class->vft[COLOR_standard__ropes__RopeBuffer__ns]))(var32); /* ns on <var32:Text(RopeBuffer)>*/
}
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_standard__ropes__RopeBuffer__str]))(var34); /* str on <var34:Text(RopeBuffer)>*/
}
{
var36 = ((long(*)(val* self))(var35->class->vft[COLOR_standard__string__Text__length]))(var35); /* length on <var35:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var36) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var36:Int> isa OTHER */
/* <var36:Int> isa OTHER */
var39 = 1; /* easy <var36:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var43 = var_i - var36;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var33,var37,var_c) on <var33:NativeString> */
var33[var37]=var_c;
RET_LABEL44:(void)0;
}
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
char var /* : Char */;
var = (char)((long)(p1)>>2);
standard___standard__RopeBufferChars___standard__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call ropes#RopeBufferChars#[]= on <self:Sequence[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#add for (self: RopeBufferChars, Char) */
void standard___standard__RopeBufferChars___standard__abstract_collection__SimpleCollection__add(val* self, char p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 920);
fatal_exit(1);
}
var_c = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, char p0))(var1->class->vft[COLOR_standard__string__Buffer__add]))(var1, var_c); /* add on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
char var /* : Char */;
var = (char)((long)(p0)>>2);
standard___standard__RopeBufferChars___standard__abstract_collection__SimpleCollection__add(self, var); /* Direct call ropes#RopeBufferChars#add on <self:SimpleCollection[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#push for (self: RopeBufferChars, Char) */
void standard___standard__RopeBufferChars___standard__abstract_collection__Sequence__push(val* self, char p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 922);
fatal_exit(1);
}
var_c = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, char p0))(var1->class->vft[COLOR_standard__string__Buffer__add]))(var1, var_c); /* add on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__Sequence__push(val* self, val* p0) {
char var /* : Char */;
var = (char)((long)(p0)>>2);
standard___standard__RopeBufferChars___standard__abstract_collection__Sequence__push(self, var); /* Direct call ropes#RopeBufferChars#push on <self:Sequence[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#iterator_from for (self: RopeBufferChars, Int): IndexedIterator[Char] */
val* standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferIter */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_standard__RopeBufferIter(&type_standard__RopeBufferIter);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_standard__ropes__RopeBufferIter__from]))(var1, var2, var_i); /* from on <var1:RopeBufferIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#reverse_iterator_from for (self: RopeBufferChars, Int): IndexedIterator[Char] */
val* standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferReviter */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_standard__RopeBufferReviter(&type_standard__RopeBufferReviter);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_standard__ropes__RopeBufferReviter__from]))(var1, var2, var_i); /* from on <var1:RopeBufferReviter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Sys#maxlen for (self: Sys): Int */
long standard__ropes___Sys___maxlen(val* self) {
long var /* : Int */;
var = 64l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
