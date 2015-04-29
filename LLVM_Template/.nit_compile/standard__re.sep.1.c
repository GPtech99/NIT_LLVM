#include "standard__re.sep.0.h"
/* method re#NativeRegex#malloc for (self: NativeRegex): NativeRegex */
val* standard__re___standard__re__NativeRegex___malloc(val* self) {
val* var /* : NativeRegex */;
val* var1 /* : NativeRegex */;
val* var2 /* : NativeRegex */;
var1 = re___new_NativeRegex_malloc___impl();
var2 = BOX_standard__Pointer(var1); /* boxing NativeRegex */
var2->type = &type_standard__re__NativeRegex;
var2->class = &class_standard__re__NativeRegex;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#regcomp for (self: NativeRegex, NativeString, Int): Int */
long standard__re___standard__re__NativeRegex___regcomp(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeRegex for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeRegex */
var1 = re___NativeRegex_regcomp___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#regexec for (self: NativeRegex, NativeString, Int, NativeMatchArray, Int): Int */
long standard__re___standard__re__NativeRegex___regexec(val* self, char* p0, long p1, val* p2, long p3) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeRegex for extern */;
void* var3 /* : NativeMatchArray for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeRegex */
var3 = ((struct instance_standard__Pointer*)p2)->value; /* unboxing NativeMatchArray */
var1 = re___NativeRegex_regexec___impl(var2, p0, p1, var3, p3);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#regexec_match_only for (self: NativeRegex, NativeString, Int): Int */
long standard__re___standard__re__NativeRegex___regexec_match_only(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeRegex for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeRegex */
var1 = re___NativeRegex_regexec_match_only___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#regfree for (self: NativeRegex) */
void standard__re___standard__re__NativeRegex___regfree(val* self) {
void* var /* : NativeRegex for extern */;
var = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeRegex */
re___NativeRegex_regfree___impl(var);
RET_LABEL:;
}
/* method re#NativeRegex#regerror for (self: NativeRegex, Int): NativeString */
char* standard__re___standard__re__NativeRegex___regerror(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
void* var2 /* : NativeRegex for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeRegex */
var1 = re___NativeRegex_regerror___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#re_nsub for (self: NativeRegex): Int */
long standard__re___standard__re__NativeRegex___re_nsub(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeRegex for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeRegex */
var1 = re___NativeRegex_re_nsub___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Int#is_nomatch for (self: Int): Bool */
short int standard__re___Int___is_nomatch(long self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = re___Int_is_nomatch___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeMatchArray#malloc for (self: NativeMatchArray, Int): NativeMatchArray */
val* standard__re___standard__re__NativeMatchArray___malloc(val* self, long p0) {
val* var /* : NativeMatchArray */;
val* var1 /* : NativeMatchArray */;
val* var2 /* : NativeMatchArray */;
var1 = re___new_NativeMatchArray_malloc___impl(p0);
var2 = BOX_standard__Pointer(var1); /* boxing NativeMatchArray */
var2->type = &type_standard__re__NativeMatchArray;
var2->class = &class_standard__re__NativeMatchArray;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeMatchArray#rm_so for (self: NativeMatchArray): Int */
long standard__re___standard__re__NativeMatchArray___rm_so(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeMatchArray for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeMatchArray */
var1 = re___NativeMatchArray_rm_so___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeMatchArray#rm_eo for (self: NativeMatchArray): Int */
long standard__re___standard__re__NativeMatchArray___rm_eo(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeMatchArray for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeMatchArray */
var1 = re___NativeMatchArray_rm_eo___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeMatchArray#[] for (self: NativeMatchArray, Int): NativeMatchArray */
val* standard__re___standard__re__NativeMatchArray____91d_93d(val* self, long p0) {
val* var /* : NativeMatchArray */;
val* var1 /* : NativeMatchArray */;
void* var2 /* : NativeMatchArray for extern */;
val* var3 /* : NativeMatchArray */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeMatchArray */
var1 = re___NativeMatchArray__index___impl(var2, p0);
var3 = BOX_standard__Pointer(var1); /* boxing NativeMatchArray */
var3->type = &type_standard__re__NativeMatchArray;
var3->class = &class_standard__re__NativeMatchArray;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeString#substring_from for (self: NativeString, Int): NativeString */
char* standard__re___NativeString___substring_from(char* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = re___NativeString_substring_from___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Text#to_re for (self: Text): Regex */
val* standard__re___Text___to_re(val* self) {
val* var /* : Regex */;
val* var1 /* : Regex */;
val* var2 /* : String */;
var1 = NEW_standard__Regex(&type_standard__Regex);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__re__Regex__string_61d]))(var1, var2); /* string= on <var1:Regex>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Regex>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Regex#string for (self: Regex): String */
val* standard___standard__Regex___string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__re__Regex___string].val; /* _string on <self:Regex> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 141);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#string= for (self: Regex, String) */
void standard___standard__Regex___string_61d(val* self, val* p0) {
self->attrs[COLOR_standard__re__Regex___string].val = p0; /* _string on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#extended for (self: Regex): Bool */
short int standard___standard__Regex___extended(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__re__Regex___extended].s; /* _extended on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#extended= for (self: Regex, Bool) */
void standard___standard__Regex___extended_61d(val* self, short int p0) {
self->attrs[COLOR_standard__re__Regex___extended].s = p0; /* _extended on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#ignore_case for (self: Regex): Bool */
short int standard___standard__Regex___ignore_case(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__re__Regex___ignore_case].s; /* _ignore_case on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#ignore_case= for (self: Regex, Bool) */
void standard___standard__Regex___ignore_case_61d(val* self, short int p0) {
self->attrs[COLOR_standard__re__Regex___ignore_case].s = p0; /* _ignore_case on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#optimize_is_in for (self: Regex): Bool */
short int standard___standard__Regex___optimize_is_in(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__re__Regex___optimize_is_in].s; /* _optimize_is_in on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#optimize_is_in= for (self: Regex, Bool) */
void standard___standard__Regex___optimize_is_in_61d(val* self, short int p0) {
self->attrs[COLOR_standard__re__Regex___optimize_is_in].s = p0; /* _optimize_is_in on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#newline for (self: Regex): Bool */
short int standard___standard__Regex___newline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__re__Regex___newline].s; /* _newline on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#newline= for (self: Regex, Bool) */
void standard___standard__Regex___newline_61d(val* self, short int p0) {
self->attrs[COLOR_standard__re__Regex___newline].s = p0; /* _newline on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#not_bol for (self: Regex): Bool */
short int standard___standard__Regex___not_bol(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__re__Regex___not_bol].s; /* _not_bol on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#not_bol= for (self: Regex, Bool) */
void standard___standard__Regex___not_bol_61d(val* self, short int p0) {
self->attrs[COLOR_standard__re__Regex___not_bol].s = p0; /* _not_bol on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#not_eol for (self: Regex): Bool */
short int standard___standard__Regex___not_eol(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__re__Regex___not_eol].s; /* _not_eol on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#not_eol= for (self: Regex, Bool) */
void standard___standard__Regex___not_eol_61d(val* self, short int p0) {
self->attrs[COLOR_standard__re__Regex___not_eol].s = p0; /* _not_eol on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#native for (self: Regex): nullable NativeRegex */
val* standard___standard__Regex___native(val* self) {
val* var /* : nullable NativeRegex */;
val* var1 /* : nullable NativeRegex */;
var1 = self->attrs[COLOR_standard__re__Regex___native].val; /* _native on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#native= for (self: Regex, nullable NativeRegex) */
void standard___standard__Regex___native_61d(val* self, val* p0) {
self->attrs[COLOR_standard__re__Regex___native].val = p0; /* _native on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#native_match for (self: Regex): NativeMatchArray */
val* standard___standard__Regex___native_match(val* self) {
val* var /* : NativeMatchArray */;
short int var1 /* : Bool */;
val* var2 /* : NativeMatchArray */;
val* var3 /* : NativeMatchArray */;
val* var5 /* : NativeMatchArray */;
val* var6 /* : nullable NativeRegex */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
val* var12 /* : NativeMatchArray */;
var1 = self->attrs[COLOR_standard__re__Regex___native_match].val != NULL; /* _native_match on <self:Regex> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__re__Regex___native_match].val; /* _native_match on <self:Regex> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native_match");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 182);
fatal_exit(1);
}
} else {
{
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__re__Regex__native_match_is_init_61d]))(self, 1); /* native_match_is_init= on <self:Regex>*/
}
var5 = NEW_standard__re__NativeMatchArray(&type_standard__re__NativeMatchArray);
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 185);
fatal_exit(1);
} else {
var7 = ((long(*)(val* self))(var6->class->vft[COLOR_standard__re__NativeRegex__re_nsub]))(var6); /* re_nsub on <var6:nullable NativeRegex>*/
}
{
{ /* Inline kernel#Int#+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var11 = var7 + 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var12 = ((val*(*)(val* self, long p0))(var5->class->vft[COLOR_standard__re__NativeMatchArray__malloc]))(var5, var8); /* malloc on <var5:NativeMatchArray>*/
}
var3 = var12;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_standard__re__Regex___native_match].val = var3; /* _native_match on <self:Regex> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method re#Regex#native_match= for (self: Regex, NativeMatchArray) */
void standard___standard__Regex___native_match_61d(val* self, val* p0) {
self->attrs[COLOR_standard__re__Regex___native_match].val = p0; /* _native_match on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#native_match_is_init for (self: Regex): Bool */
short int standard___standard__Regex___native_match_is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__re__Regex___native_match_is_init].s; /* _native_match_is_init on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#native_match_is_init= for (self: Regex, Bool) */
void standard___standard__Regex___native_match_is_init_61d(val* self, short int p0) {
self->attrs[COLOR_standard__re__Regex___native_match_is_init].s = p0; /* _native_match_is_init on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#cflags_cache for (self: Regex): Int */
long standard___standard__Regex___cflags_cache(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__re__Regex___cflags_cache].l; /* _cflags_cache on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#cflags_cache= for (self: Regex, Int) */
void standard___standard__Regex___cflags_cache_61d(val* self, long p0) {
self->attrs[COLOR_standard__re__Regex___cflags_cache].l = p0; /* _cflags_cache on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#string_cache for (self: Regex): nullable String */
val* standard___standard__Regex___string_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_standard__re__Regex___string_cache].val; /* _string_cache on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#string_cache= for (self: Regex, nullable String) */
void standard___standard__Regex___string_cache_61d(val* self, val* p0) {
self->attrs[COLOR_standard__re__Regex___string_cache].val = p0; /* _string_cache on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#compile for (self: Regex): nullable Error */
val* standard___standard__Regex___compile(val* self) {
val* var /* : nullable Error */;
long var_cflags /* var cflags: Int */;
short int var1 /* : Bool */;
val* var2 /* : Sys */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
val* var6 /* : Sys */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
val* var10 /* : Sys */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
val* var14 /* : Sys */;
long var15 /* : Int */;
long var16 /* : Int */;
val* var17 /* : nullable NativeRegex */;
val* var_native /* var native: nullable NativeRegex */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
val* var28 /* : String */;
val* var29 /* : nullable String */;
short int var30 /* : Bool */;
short int var_need_compilation /* var need_compilation: Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : NativeRegex */;
val* var34 /* : NativeRegex */;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
long var_res /* var res: Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : String */;
char* var42 /* : NativeString */;
char* var_error_cstr /* var error_cstr: NativeString */;
val* var43 /* : FlatString */;
val* var_error_str /* var error_str: FlatString */;
val* var44 /* : Pointer */;
val* var45 /* : Error */;
var_cflags = 0l;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__extended]))(self); /* extended on <self:Regex>*/
}
if (var1){
var2 = glob_sys;
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__re__Sys__flag_extended]))(var2); /* flag_extended on <var2:Sys>*/
}
var4 = standard__math___Int___bin_or(var_cflags, var3);
var_cflags = var4;
} else {
}
{
var5 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__ignore_case]))(self); /* ignore_case on <self:Regex>*/
}
if (var5){
var6 = glob_sys;
{
var7 = ((long(*)(val* self))(var6->class->vft[COLOR_standard__re__Sys__flag_icase]))(var6); /* flag_icase on <var6:Sys>*/
}
var8 = standard__math___Int___bin_or(var_cflags, var7);
var_cflags = var8;
} else {
}
{
var9 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__optimize_is_in]))(self); /* optimize_is_in on <self:Regex>*/
}
if (var9){
var10 = glob_sys;
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_standard__re__Sys__flag_nosub]))(var10); /* flag_nosub on <var10:Sys>*/
}
var12 = standard__math___Int___bin_or(var_cflags, var11);
var_cflags = var12;
} else {
}
{
var13 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__newline]))(self); /* newline on <self:Regex>*/
}
if (var13){
var14 = glob_sys;
{
var15 = ((long(*)(val* self))(var14->class->vft[COLOR_standard__re__Sys__flag_newline]))(var14); /* flag_newline on <var14:Sys>*/
}
var16 = standard__math___Int___bin_or(var_cflags, var15);
var_cflags = var16;
} else {
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
var_native = var17;
if (var_native == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_native, ((val*)NULL)); /* == on <var_native:nullable NativeRegex>*/
var20 = var21;
}
var_ = var20;
if (var20){
var19 = var_;
} else {
{
var22 = ((long(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__cflags_cache]))(self); /* cflags_cache on <self:Regex>*/
}
{
{ /* Inline kernel#Int#!= (var_cflags,var22) on <var_cflags:Int> */
var25 = var_cflags == var22;
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var19 = var23;
}
var_27 = var19;
if (var19){
var18 = var_27;
} else {
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__string]))(self); /* string on <self:Regex>*/
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__string_cache]))(self); /* string_cache on <self:Regex>*/
}
{
var30 = ((short int(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var28, var29); /* != on <var28:String>*/
}
var18 = var30;
}
var_need_compilation = var18;
if (var_need_compilation){
if (var_native == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_native, ((val*)NULL)); /* == on <var_native:nullable NativeRegex>*/
var31 = var32;
}
if (var31){
var33 = NEW_standard__re__NativeRegex(&type_standard__re__NativeRegex);
{
var34 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__re__NativeRegex__malloc]))(var33); /* malloc on <var33:NativeRegex>*/
}
var_native = var34;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__re__Regex__native_61d]))(self, var_native); /* native= on <self:Regex>*/
}
} else {
}
{
var35 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__string]))(self); /* string on <self:Regex>*/
}
{
var36 = ((char*(*)(val* self))(var35->class->vft[COLOR_standard__string__Text__to_cstring]))(var35); /* to_cstring on <var35:String>*/
}
{
var37 = ((long(*)(val* self, char* p0, long p1))(var_native->class->vft[COLOR_standard__re__NativeRegex__regcomp]))(var_native, var36, var_cflags); /* regcomp on <var_native:nullable NativeRegex(NativeRegex)>*/
}
var_res = var37;
{
{ /* Inline kernel#Int#== (var_res,0l) on <var_res:Int> */
var40 = var_res == 0l;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__re__Regex__native_61d]))(self, var_native); /* native= on <self:Regex>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__re__Regex__cflags_cache_61d]))(self, var_cflags); /* cflags_cache= on <self:Regex>*/
}
{
var41 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__string]))(self); /* string on <self:Regex>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__re__Regex__string_cache_61d]))(self, var41); /* string_cache= on <self:Regex>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var42 = ((char*(*)(val* self, long p0))(var_native->class->vft[COLOR_standard__re__NativeRegex__regerror]))(var_native, var_res); /* regerror on <var_native:nullable NativeRegex(NativeRegex)>*/
}
var_error_cstr = var42;
var43 = standard___standard__NativeString___to_s_with_copy(var_error_cstr);
var_error_str = var43;
var44 = BOX_standard__Pointer(var_error_cstr); /* autobox from NativeString to Pointer */
standard___standard__Pointer___free(var44); /* Direct call kernel#Pointer#free on <var44:Pointer>*/
var45 = NEW_standard__Error(&type_standard__Error);
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_standard__error__Error__message_61d]))(var45, var_error_str); /* message= on <var45:Error>*/
}
{
((void(*)(val* self))(var45->class->vft[COLOR_standard__kernel__Object__init]))(var45); /* init on <var45:Error>*/
}
var = var45;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Regex#finalize for (self: Regex) */
void standard___standard__Regex___standard__gc__Finalizable__finalize(val* self) {
val* var /* : nullable NativeRegex */;
val* var_native /* var native: nullable NativeRegex */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : NativeMatchArray */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
var_native = var;
if (var_native == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_native, ((val*)NULL)); /* != on <var_native:nullable NativeRegex>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self))(var_native->class->vft[COLOR_standard__re__NativeRegex__regfree]))(var_native); /* regfree on <var_native:nullable NativeRegex(NativeRegex)>*/
}
{
((void(*)(val* self))(var_native->class->vft[COLOR_standard__kernel__Pointer__free]))(var_native); /* free on <var_native:nullable NativeRegex(NativeRegex)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__re__Regex__native_61d]))(self, ((val*)NULL)); /* native= on <self:Regex>*/
}
{
var3 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native_match_is_init]))(self); /* native_match_is_init on <self:Regex>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native_match]))(self); /* native_match on <self:Regex>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Pointer__free]))(var4); /* free on <var4:NativeMatchArray>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method re#Regex#gather_eflags for (self: Regex): Int */
long standard___standard__Regex___gather_eflags(val* self) {
long var /* : Int */;
long var_eflags /* var eflags: Int */;
short int var1 /* : Bool */;
val* var2 /* : Sys */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
val* var6 /* : Sys */;
long var7 /* : Int */;
long var8 /* : Int */;
var_eflags = 0l;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__not_bol]))(self); /* not_bol on <self:Regex>*/
}
if (var1){
var2 = glob_sys;
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__re__Sys__flag_notbol]))(var2); /* flag_notbol on <var2:Sys>*/
}
var4 = standard__math___Int___bin_or(var_eflags, var3);
var_eflags = var4;
} else {
}
{
var5 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__not_eol]))(self); /* not_eol on <self:Regex>*/
}
if (var5){
var6 = glob_sys;
{
var7 = ((long(*)(val* self))(var6->class->vft[COLOR_standard__re__Sys__flag_noteol]))(var6); /* flag_noteol on <var6:Sys>*/
}
var8 = standard__math___Int___bin_or(var_eflags, var7);
var_eflags = var8;
} else {
}
var = var_eflags;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Regex#get_error for (self: Regex, Int): String */
val* standard___standard__Regex___get_error(val* self, long p0) {
val* var /* : String */;
long var_errcode /* var errcode: Int */;
val* var1 /* : nullable NativeRegex */;
char* var2 /* : NativeString */;
char* var_error_cstr /* var error_cstr: NativeString */;
val* var3 /* : FlatString */;
val* var_error_str /* var error_str: FlatString */;
val* var4 /* : Pointer */;
var_errcode = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 275);
fatal_exit(1);
} else {
var2 = ((char*(*)(val* self, long p0))(var1->class->vft[COLOR_standard__re__NativeRegex__regerror]))(var1, var_errcode); /* regerror on <var1:nullable NativeRegex>*/
}
var_error_cstr = var2;
var3 = standard___standard__NativeString___to_s_with_copy(var_error_cstr);
var_error_str = var3;
var4 = BOX_standard__Pointer(var_error_cstr); /* autobox from NativeString to Pointer */
standard___standard__Pointer___free(var4); /* Direct call kernel#Pointer#free on <var4:Pointer>*/
var = var_error_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Regex#is_in for (self: Regex, Text): Bool */
short int standard___standard__Regex___standard__string_search__Pattern__is_in(val* self, val* p0) {
short int var /* : Bool */;
val* var_text /* var text: Text */;
val* var1 /* : nullable Error */;
val* var_comp_res /* var comp_res: nullable Error */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
val* var14 /* : String */;
long var15 /* : Int */;
long var_eflags /* var eflags: Int */;
val* var16 /* : nullable NativeRegex */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
long var_res /* var res: Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : String */;
val* var_error_str /* var error_str: String */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : String */;
var_text = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__compile]))(self); /* compile on <self:Regex>*/
}
var_comp_res = var1;
if (var_comp_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_comp_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_comp_res, ((val*)NULL)); /* == on <var_comp_res:nullable Error>*/
var2 = var3;
}
if (unlikely(!var2)) {
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "Regex compilation failed with: ";
var8 = standard___standard__NativeString___to_s_with_length(var7, 31l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "\n";
var12 = standard___standard__NativeString___to_s_with_length(var11, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))(var_comp_res->class->vft[COLOR_standard__error__Error__message]))(var_comp_res); /* message on <var_comp_res:nullable Error(Error)>*/
}
((struct instance_standard__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__output]))(var14); /* output on <var14:String>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 291);
fatal_exit(1);
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__gather_eflags]))(self); /* gather_eflags on <self:Regex>*/
}
var_eflags = var15;
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
{
var17 = ((char*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__to_cstring]))(var_text); /* to_cstring on <var_text:Text>*/
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 295);
fatal_exit(1);
} else {
var18 = ((long(*)(val* self, char* p0, long p1))(var16->class->vft[COLOR_standard__re__NativeRegex__regexec_match_only]))(var16, var17, var_eflags); /* regexec_match_only on <var16:nullable NativeRegex>*/
}
var_res = var18;
{
{ /* Inline kernel#Int#== (var_res,0l) on <var_res:Int> */
var21 = var_res == 0l;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var = 1;
goto RET_LABEL;
} else {
}
var22 = standard__re___Int___is_nomatch(var_res);
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
{
var23 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__re__Regex__get_error]))(self, var_res); /* get_error on <self:Regex>*/
}
var_error_str = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Regex search failed with: ";
var29 = standard___standard__NativeString___to_s_with_length(var28, 26l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "\n";
var33 = standard___standard__NativeString___to_s_with_length(var32, 1l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var_error_str;
{
var34 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self))(var34->class->vft[COLOR_standard__kernel__Object__output]))(var34); /* output on <var34:String>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 306);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method re#Regex#search_index_in for (self: Regex, Text, Int): Int */
long standard___standard__Regex___standard__string_search__Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_text /* var text: Text */;
long var_from /* var from: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Error */;
val* var_comp_res /* var comp_res: nullable Error */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : Text */;
char* var19 /* : NativeString */;
char* var_cstr /* var cstr: NativeString */;
long var20 /* : Int */;
long var_eflags /* var eflags: Int */;
val* var21 /* : NativeMatchArray */;
val* var_match /* var match: NativeMatchArray */;
val* var22 /* : nullable NativeRegex */;
long var23 /* : Int */;
long var_res /* var res: Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var31 /* : Int */;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var_error_str /* var error_str: String */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : String */;
var_text = p0;
var_from = p1;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__optimize_is_in]))(self); /* optimize_is_in on <self:Regex>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 317);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__compile]))(self); /* compile on <self:Regex>*/
}
var_comp_res = var3;
if (var_comp_res == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_comp_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_comp_res, ((val*)NULL)); /* == on <var_comp_res:nullable Error>*/
var4 = var5;
}
if (unlikely(!var4)) {
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Regex compilation failed with: ";
var10 = standard___standard__NativeString___to_s_with_length(var9, 31l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "\n";
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = ((val*(*)(val* self))(var_comp_res->class->vft[COLOR_standard__error__Error__message]))(var_comp_res); /* message on <var_comp_res:nullable Error(Error)>*/
}
((struct instance_standard__NativeArray*)var6)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self))(var16->class->vft[COLOR_standard__kernel__Object__output]))(var16); /* output on <var16:String>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 320);
fatal_exit(1);
}
{
var17 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Object__to_s]))(var_text); /* to_s on <var_text:Text>*/
}
var_text = var17;
{
var18 = ((val*(*)(val* self, long p0))(var_text->class->vft[COLOR_standard__string__Text__substring_from]))(var_text, var_from); /* substring_from on <var_text:Text(String)>*/
}
{
var19 = ((char*(*)(val* self))(var18->class->vft[COLOR_standard__string__Text__to_cstring]))(var18); /* to_cstring on <var18:Text(String)>*/
}
var_cstr = var19;
{
var20 = ((long(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__gather_eflags]))(self); /* gather_eflags on <self:Regex>*/
}
var_eflags = var20;
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native_match]))(self); /* native_match on <self:Regex>*/
}
var_match = var21;
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 328);
fatal_exit(1);
} else {
var23 = ((long(*)(val* self, char* p0, long p1, val* p2, long p3))(var22->class->vft[COLOR_standard__re__NativeRegex__regexec]))(var22, var_cstr, 1l, var_match, var_eflags); /* regexec on <var22:nullable NativeRegex>*/
}
var_res = var23;
{
{ /* Inline kernel#Int#== (var_res,0l) on <var_res:Int> */
var26 = var_res == 0l;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
var27 = ((long(*)(val* self))(var_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_so]))(var_match); /* rm_so on <var_match:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#+ (var27,var_from) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var30 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var31 = var27 + var_from;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var = var28;
goto RET_LABEL;
} else {
}
var32 = standard__re___Int___is_nomatch(var_res);
if (var32){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var35 = -1l;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var = var33;
goto RET_LABEL;
} else {
}
{
var36 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__re__Regex__get_error]))(self, var_res); /* get_error on <self:Regex>*/
}
var_error_str = var36;
if (unlikely(varonce37==NULL)) {
var38 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Regex search failed with: ";
var42 = standard___standard__NativeString___to_s_with_length(var41, 26l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var38)->values[0]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "\n";
var46 = standard___standard__NativeString___to_s_with_length(var45, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var38)->values[2]=var44;
} else {
var38 = varonce37;
varonce37 = NULL;
}
((struct instance_standard__NativeArray*)var38)->values[1]=var_error_str;
{
var47 = ((val*(*)(val* self))(var38->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
((void(*)(val* self))(var47->class->vft[COLOR_standard__kernel__Object__output]))(var47); /* output on <var47:String>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 339);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method re#Regex#search_in for (self: Regex, Text, Int): nullable Match */
val* standard___standard__Regex___standard__string_search__Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_text /* var text: Text */;
long var_from /* var from: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Error */;
val* var_comp_res /* var comp_res: nullable Error */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : Text */;
char* var19 /* : NativeString */;
char* var_cstr /* var cstr: NativeString */;
long var20 /* : Int */;
long var_eflags /* var eflags: Int */;
val* var21 /* : NativeMatchArray */;
val* var_native_match /* var native_match: NativeMatchArray */;
val* var22 /* : nullable NativeRegex */;
long var23 /* : Int */;
long var_nsub /* var nsub: Int */;
val* var24 /* : nullable NativeRegex */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var28 /* : Int */;
long var29 /* : Int */;
long var_res /* var res: Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : Match */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
val* var_match /* var match: Match */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
val* var58 /* : Array[Match] */;
val* var59 /* : Match */;
val* var60 /* : NativeMatchArray */;
long var61 /* : Int */;
val* var62 /* : NativeMatchArray */;
long var63 /* : Int */;
val* var64 /* : NativeMatchArray */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
val* var75 /* : String */;
val* var_error_str /* var error_str: String */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
val* var86 /* : String */;
var_text = p0;
var_from = p1;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__optimize_is_in]))(self); /* optimize_is_in on <self:Regex>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 350);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__compile]))(self); /* compile on <self:Regex>*/
}
var_comp_res = var3;
if (var_comp_res == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_comp_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_comp_res, ((val*)NULL)); /* == on <var_comp_res:nullable Error>*/
var4 = var5;
}
if (unlikely(!var4)) {
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Regex compilation failed with: ";
var10 = standard___standard__NativeString___to_s_with_length(var9, 31l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "\n";
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = ((val*(*)(val* self))(var_comp_res->class->vft[COLOR_standard__error__Error__message]))(var_comp_res); /* message on <var_comp_res:nullable Error(Error)>*/
}
((struct instance_standard__NativeArray*)var6)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self))(var16->class->vft[COLOR_standard__kernel__Object__output]))(var16); /* output on <var16:String>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 353);
fatal_exit(1);
}
{
var17 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Object__to_s]))(var_text); /* to_s on <var_text:Text>*/
}
var_text = var17;
{
var18 = ((val*(*)(val* self, long p0))(var_text->class->vft[COLOR_standard__string__Text__substring_from]))(var_text, var_from); /* substring_from on <var_text:Text(String)>*/
}
{
var19 = ((char*(*)(val* self))(var18->class->vft[COLOR_standard__string__Text__to_cstring]))(var18); /* to_cstring on <var18:Text(String)>*/
}
var_cstr = var19;
{
var20 = ((long(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__gather_eflags]))(self); /* gather_eflags on <self:Regex>*/
}
var_eflags = var20;
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native_match]))(self); /* native_match on <self:Regex>*/
}
var_native_match = var21;
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 361);
fatal_exit(1);
} else {
var23 = ((long(*)(val* self))(var22->class->vft[COLOR_standard__re__NativeRegex__re_nsub]))(var22); /* re_nsub on <var22:nullable NativeRegex>*/
}
var_nsub = var23;
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
{
{ /* Inline kernel#Int#+ (var_nsub,1l) on <var_nsub:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var28 = var_nsub + 1l;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 362);
fatal_exit(1);
} else {
var29 = ((long(*)(val* self, char* p0, long p1, val* p2, long p3))(var24->class->vft[COLOR_standard__re__NativeRegex__regexec]))(var24, var_cstr, var25, var_native_match, var_eflags); /* regexec on <var24:nullable NativeRegex>*/
}
var_res = var29;
{
{ /* Inline kernel#Int#== (var_res,0l) on <var_res:Int> */
var32 = var_res == 0l;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
var33 = NEW_standard__Match(&type_standard__Match);
{
var34 = ((long(*)(val* self))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_so]))(var_native_match); /* rm_so on <var_native_match:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#+ (var_from,var34) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var41 = var_from + var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
var42 = ((long(*)(val* self))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_eo]))(var_native_match); /* rm_eo on <var_native_match:NativeMatchArray>*/
}
{
var43 = ((long(*)(val* self))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_so]))(var_native_match); /* rm_so on <var_native_match:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#- (var42,var43) on <var42:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var50 = var42 - var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_standard__string_search__Match__string_61d]))(var33, var_text); /* string= on <var33:Match>*/
}
{
((void(*)(val* self, long p0))(var33->class->vft[COLOR_standard__string_search__Match__from_61d]))(var33, var35); /* from= on <var33:Match>*/
}
{
((void(*)(val* self, long p0))(var33->class->vft[COLOR_standard__string_search__Match__length_61d]))(var33, var44); /* length= on <var33:Match>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_standard__kernel__Object__init]))(var33); /* init on <var33:Match>*/
}
var_match = var33;
var_i = 1l;
var_ = var_nsub;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var53 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var57 = var_i <= var_;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
var58 = ((val*(*)(val* self))(var_match->class->vft[COLOR_standard__re__Match__subs]))(var_match); /* subs on <var_match:Match>*/
}
var59 = NEW_standard__Match(&type_standard__Match);
{
var60 = ((val*(*)(val* self, long p0))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray___91d_93d]))(var_native_match, var_i); /* [] on <var_native_match:NativeMatchArray>*/
}
{
var61 = ((long(*)(val* self))(var60->class->vft[COLOR_standard__re__NativeMatchArray__rm_so]))(var60); /* rm_so on <var60:NativeMatchArray>*/
}
{
var62 = ((val*(*)(val* self, long p0))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray___91d_93d]))(var_native_match, var_i); /* [] on <var_native_match:NativeMatchArray>*/
}
{
var63 = ((long(*)(val* self))(var62->class->vft[COLOR_standard__re__NativeMatchArray__rm_eo]))(var62); /* rm_eo on <var62:NativeMatchArray>*/
}
{
var64 = ((val*(*)(val* self, long p0))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray___91d_93d]))(var_native_match, var_i); /* [] on <var_native_match:NativeMatchArray>*/
}
{
var65 = ((long(*)(val* self))(var64->class->vft[COLOR_standard__re__NativeMatchArray__rm_so]))(var64); /* rm_so on <var64:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#- (var63,var65) on <var63:Int> */
/* Covariant cast for argument 0 (i) <var65:Int> isa OTHER */
/* <var65:Int> isa OTHER */
var68 = 1; /* easy <var65:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var72 = var63 - var65;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_standard__string_search__Match__string_61d]))(var59, var_text); /* string= on <var59:Match>*/
}
{
((void(*)(val* self, long p0))(var59->class->vft[COLOR_standard__string_search__Match__from_61d]))(var59, var61); /* from= on <var59:Match>*/
}
{
((void(*)(val* self, long p0))(var59->class->vft[COLOR_standard__string_search__Match__length_61d]))(var59, var66); /* length= on <var59:Match>*/
}
{
((void(*)(val* self))(var59->class->vft[COLOR_standard__kernel__Object__init]))(var59); /* init on <var59:Match>*/
}
{
((void(*)(val* self, val* p0))(var58->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var58, var59); /* add on <var58:Array[Match]>*/
}
var73 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var73;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_match;
goto RET_LABEL;
} else {
}
var74 = standard__re___Int___is_nomatch(var_res);
if (var74){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var75 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__re__Regex__get_error]))(self, var_res); /* get_error on <self:Regex>*/
}
var_error_str = var75;
if (unlikely(varonce76==NULL)) {
var77 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "Regex search failed with: ";
var81 = standard___standard__NativeString___to_s_with_length(var80, 26l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var77)->values[0]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "\n";
var85 = standard___standard__NativeString___to_s_with_length(var84, 1l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var77)->values[2]=var83;
} else {
var77 = varonce76;
varonce76 = NULL;
}
((struct instance_standard__NativeArray*)var77)->values[1]=var_error_str;
{
var86 = ((val*(*)(val* self))(var77->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
((void(*)(val* self))(var86->class->vft[COLOR_standard__kernel__Object__output]))(var86); /* output on <var86:String>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 386);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method re#Regex#search_all_in for (self: Regex, Text): Array[Match] */
val* standard___standard__Regex___standard__string_search__Pattern__search_all_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var_text /* var text: Text */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Error */;
val* var_comp_res /* var comp_res: nullable Error */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
char* var18 /* : NativeString */;
char* var_cstr /* var cstr: NativeString */;
long var19 /* : Int */;
long var_eflags /* var eflags: Int */;
val* var20 /* : Sys */;
long var21 /* : Int */;
long var22 /* : Int */;
long var_eflags_or_notbol /* var eflags_or_notbol: Int */;
val* var23 /* : NativeMatchArray */;
val* var_native_match /* var native_match: NativeMatchArray */;
val* var24 /* : Array[Match] */;
val* var_matches /* var matches: Array[Match] */;
val* var25 /* : nullable NativeRegex */;
long var26 /* : Int */;
long var_nsub /* var nsub: Int */;
val* var27 /* : nullable NativeRegex */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var31 /* : Int */;
long var32 /* : Int */;
long var_res /* var res: Int */;
long var_d /* var d: Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : Match */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
val* var_match /* var match: Match */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
val* var61 /* : Array[Match] */;
val* var62 /* : Match */;
val* var63 /* : NativeMatchArray */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
val* var72 /* : NativeMatchArray */;
long var73 /* : Int */;
val* var74 /* : NativeMatchArray */;
long var75 /* : Int */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
long var83 /* : Int */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
long var95 /* : Int */;
long var96 /* : Int */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
long var102 /* : Int */;
long var103 /* : Int */;
char* var104 /* : NativeString */;
val* var105 /* : nullable NativeRegex */;
long var106 /* : Int */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
long var112 /* : Int */;
long var113 /* : Int */;
short int var115 /* : Bool */;
val* var116 /* : String */;
val* var_error_str /* var error_str: String */;
val* var118 /* : NativeArray[String] */;
static val* varonce117;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : FlatString */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : FlatString */;
val* var127 /* : String */;
var_text = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__optimize_is_in]))(self); /* optimize_is_in on <self:Regex>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 395);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__compile]))(self); /* compile on <self:Regex>*/
}
var_comp_res = var3;
if (var_comp_res == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_comp_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_comp_res, ((val*)NULL)); /* == on <var_comp_res:nullable Error>*/
var4 = var5;
}
if (unlikely(!var4)) {
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Regex compilation failed with: ";
var10 = standard___standard__NativeString___to_s_with_length(var9, 31l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "\n";
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = ((val*(*)(val* self))(var_comp_res->class->vft[COLOR_standard__error__Error__message]))(var_comp_res); /* message on <var_comp_res:nullable Error(Error)>*/
}
((struct instance_standard__NativeArray*)var6)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self))(var16->class->vft[COLOR_standard__kernel__Object__output]))(var16); /* output on <var16:String>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 398);
fatal_exit(1);
}
{
var17 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Object__to_s]))(var_text); /* to_s on <var_text:Text>*/
}
var_text = var17;
{
var18 = ((char*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__to_cstring]))(var_text); /* to_cstring on <var_text:Text(String)>*/
}
var_cstr = var18;
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__gather_eflags]))(self); /* gather_eflags on <self:Regex>*/
}
var_eflags = var19;
var20 = glob_sys;
{
var21 = ((long(*)(val* self))(var20->class->vft[COLOR_standard__re__Sys__flag_notbol]))(var20); /* flag_notbol on <var20:Sys>*/
}
var22 = standard__math___Int___bin_or(var_eflags, var21);
var_eflags_or_notbol = var22;
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native_match]))(self); /* native_match on <self:Regex>*/
}
var_native_match = var23;
var24 = NEW_standard__Array(&type_standard__Array__standard__Match);
{
((void(*)(val* self))(var24->class->vft[COLOR_standard__kernel__Object__init]))(var24); /* init on <var24:Array[Match]>*/
}
var_matches = var24;
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 408);
fatal_exit(1);
} else {
var26 = ((long(*)(val* self))(var25->class->vft[COLOR_standard__re__NativeRegex__re_nsub]))(var25); /* re_nsub on <var25:nullable NativeRegex>*/
}
var_nsub = var26;
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
{
{ /* Inline kernel#Int#+ (var_nsub,1l) on <var_nsub:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var31 = var_nsub + 1l;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 409);
fatal_exit(1);
} else {
var32 = ((long(*)(val* self, char* p0, long p1, val* p2, long p3))(var27->class->vft[COLOR_standard__re__NativeRegex__regexec]))(var27, var_cstr, var28, var_native_match, var_eflags); /* regexec on <var27:nullable NativeRegex>*/
}
var_res = var32;
var_d = 0l;
for(;;) {
{
{ /* Inline kernel#Int#== (var_res,0l) on <var_res:Int> */
var35 = var_res == 0l;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var36 = NEW_standard__Match(&type_standard__Match);
{
var37 = ((long(*)(val* self))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_so]))(var_native_match); /* rm_so on <var_native_match:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#+ (var_d,var37) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var37:Int> isa OTHER */
/* <var37:Int> isa OTHER */
var40 = 1; /* easy <var37:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var44 = var_d + var37;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var45 = ((long(*)(val* self))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_eo]))(var_native_match); /* rm_eo on <var_native_match:NativeMatchArray>*/
}
{
var46 = ((long(*)(val* self))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_so]))(var_native_match); /* rm_so on <var_native_match:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#- (var45,var46) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var53 = var45 - var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__string_search__Match__string_61d]))(var36, var_text); /* string= on <var36:Match>*/
}
{
((void(*)(val* self, long p0))(var36->class->vft[COLOR_standard__string_search__Match__from_61d]))(var36, var38); /* from= on <var36:Match>*/
}
{
((void(*)(val* self, long p0))(var36->class->vft[COLOR_standard__string_search__Match__length_61d]))(var36, var47); /* length= on <var36:Match>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_standard__kernel__Object__init]))(var36); /* init on <var36:Match>*/
}
var_match = var36;
{
((void(*)(val* self, val* p0))(var_matches->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_matches, var_match); /* add on <var_matches:Array[Match]>*/
}
var_i = 1l;
var_ = var_nsub;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var56 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var60 = var_i <= var_;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
{
var61 = ((val*(*)(val* self))(var_match->class->vft[COLOR_standard__re__Match__subs]))(var_match); /* subs on <var_match:Match>*/
}
var62 = NEW_standard__Match(&type_standard__Match);
{
var63 = ((val*(*)(val* self, long p0))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray___91d_93d]))(var_native_match, var_i); /* [] on <var_native_match:NativeMatchArray>*/
}
{
var64 = ((long(*)(val* self))(var63->class->vft[COLOR_standard__re__NativeMatchArray__rm_so]))(var63); /* rm_so on <var63:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#+ (var_d,var64) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var67 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var71 = var_d + var64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
var72 = ((val*(*)(val* self, long p0))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray___91d_93d]))(var_native_match, var_i); /* [] on <var_native_match:NativeMatchArray>*/
}
{
var73 = ((long(*)(val* self))(var72->class->vft[COLOR_standard__re__NativeMatchArray__rm_eo]))(var72); /* rm_eo on <var72:NativeMatchArray>*/
}
{
var74 = ((val*(*)(val* self, long p0))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray___91d_93d]))(var_native_match, var_i); /* [] on <var_native_match:NativeMatchArray>*/
}
{
var75 = ((long(*)(val* self))(var74->class->vft[COLOR_standard__re__NativeMatchArray__rm_so]))(var74); /* rm_so on <var74:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#- (var73,var75) on <var73:Int> */
/* Covariant cast for argument 0 (i) <var75:Int> isa OTHER */
/* <var75:Int> isa OTHER */
var78 = 1; /* easy <var75:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var82 = var73 - var75;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var62->class->vft[COLOR_standard__string_search__Match__string_61d]))(var62, var_text); /* string= on <var62:Match>*/
}
{
((void(*)(val* self, long p0))(var62->class->vft[COLOR_standard__string_search__Match__from_61d]))(var62, var65); /* from= on <var62:Match>*/
}
{
((void(*)(val* self, long p0))(var62->class->vft[COLOR_standard__string_search__Match__length_61d]))(var62, var76); /* length= on <var62:Match>*/
}
{
((void(*)(val* self))(var62->class->vft[COLOR_standard__kernel__Object__init]))(var62); /* init on <var62:Match>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var61, var62); /* add on <var61:Array[Match]>*/
}
var83 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var83;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var84 = ((long(*)(val* self))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_eo]))(var_native_match); /* rm_eo on <var_native_match:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#== (var_d,var84) on <var_d:Int> */
var87 = var_d == var84;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
{ /* Inline kernel#Int#+ (var_d,1l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var90 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var94 = var_d + 1l;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var_d = var88;
} else {
{
var95 = ((long(*)(val* self))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_eo]))(var_native_match); /* rm_eo on <var_native_match:NativeMatchArray>*/
}
{
{ /* Inline kernel#Int#+ (var_d,var95) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var95:Int> isa OTHER */
/* <var95:Int> isa OTHER */
var98 = 1; /* easy <var95:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var102 = var_d + var95;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_d = var96;
}
{
var103 = ((long(*)(val* self))(var_native_match->class->vft[COLOR_standard__re__NativeMatchArray__rm_eo]))(var_native_match); /* rm_eo on <var_native_match:NativeMatchArray>*/
}
var104 = standard__re___NativeString___substring_from(var_cstr, var103);
var_cstr = var104;
{
var105 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__native]))(self); /* native on <self:Regex>*/
}
{
{ /* Inline kernel#Int#+ (var_nsub,1l) on <var_nsub:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var108 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var112 = var_nsub + 1l;
var106 = var112;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
if (var105 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 428);
fatal_exit(1);
} else {
var113 = ((long(*)(val* self, char* p0, long p1, val* p2, long p3))(var105->class->vft[COLOR_standard__re__NativeRegex__regexec]))(var105, var_cstr, var106, var_native_match, var_eflags_or_notbol); /* regexec on <var105:nullable NativeRegex>*/
}
var_res = var113;
} else {
goto BREAK_label114;
}
}
BREAK_label114: (void)0;
var115 = standard__re___Int___is_nomatch(var_res);
if (var115){
var = var_matches;
goto RET_LABEL;
} else {
}
{
var116 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__re__Regex__get_error]))(self, var_res); /* get_error on <self:Regex>*/
}
var_error_str = var116;
if (unlikely(varonce117==NULL)) {
var118 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "Regex search failed with: ";
var122 = standard___standard__NativeString___to_s_with_length(var121, 26l);
var120 = var122;
varonce119 = var120;
}
((struct instance_standard__NativeArray*)var118)->values[0]=var120;
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "\n";
var126 = standard___standard__NativeString___to_s_with_length(var125, 1l);
var124 = var126;
varonce123 = var124;
}
((struct instance_standard__NativeArray*)var118)->values[2]=var124;
} else {
var118 = varonce117;
varonce117 = NULL;
}
((struct instance_standard__NativeArray*)var118)->values[1]=var_error_str;
{
var127 = ((val*(*)(val* self))(var118->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var118); /* native_to_s on <var118:NativeArray[String]>*/
}
varonce117 = var118;
{
((void(*)(val* self))(var127->class->vft[COLOR_standard__kernel__Object__output]))(var127); /* output on <var127:String>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 437);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method re#Regex#to_s for (self: Regex): String */
val* standard___standard__Regex___standard__string__Object__to_s(val* self) {
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
var4 = "/";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "/";
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
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Regex__string]))(self); /* string on <self:Regex>*/
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
/* method re#Regex#init for (self: Regex) */
void standard___standard__Regex___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Regex___standard__kernel__Object__init]))(self); /* init on <self:Regex>*/
}
RET_LABEL:;
}
/* method re#Match#subs for (self: Match): Array[Match] */
val* standard__re___Match___subs(val* self) {
val* var /* : Array[Match] */;
short int var1 /* : Bool */;
val* var2 /* : Array[Match] */;
val* var3 /* : Array[Match] */;
var1 = self->attrs[COLOR_standard__re__Match___subs].val != NULL; /* _subs on <self:Match> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__re__Match___subs].val; /* _subs on <self:Match> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 444);
fatal_exit(1);
}
} else {
var3 = NEW_standard__Array(&type_standard__Array__standard__Match);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Match]>*/
}
self->attrs[COLOR_standard__re__Match___subs].val = var3; /* _subs on <self:Match> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method re#Match#subs= for (self: Match, Array[Match]) */
void standard__re___Match___subs_61d(val* self, val* p0) {
self->attrs[COLOR_standard__re__Match___subs].val = p0; /* _subs on <self:Match> */
RET_LABEL:;
}
/* method re#Match#[] for (self: Match, Int): Match */
val* standard__re___Match____91d_93d(val* self, long p0) {
val* var /* : Match */;
long var_n /* var n: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : Array[Match] */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var18 /* : Array[Match] */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : nullable Object */;
var_n = p0;
{
{ /* Inline kernel#Int#== (var_n,0l) on <var_n:Int> */
var3 = var_n == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var8 = var_n > 0l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Match__subs]))(self); /* subs on <self:Match>*/
}
{
var10 = ((long(*)(val* self))(var9->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var9); /* length on <var9:Array[Match]>*/
}
{
{ /* Inline kernel#Int#<= (var_n,var10) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var17 = var_n <= var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var4 = var11;
} else {
var4 = var_;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__re, 469);
fatal_exit(1);
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__re__Match__subs]))(self); /* subs on <self:Match>*/
}
{
{ /* Inline kernel#Int#- (var_n,1l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var25 = var_n - 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
var26 = ((val*(*)(val* self, long p0))(var18->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var18, var19); /* [] on <var18:Array[Match]>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_extended for (self: Sys): Int */
long standard__re___Sys___flag_extended(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_extended___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_icase for (self: Sys): Int */
long standard__re___Sys___flag_icase(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_icase___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_nosub for (self: Sys): Int */
long standard__re___Sys___flag_nosub(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_nosub___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_newline for (self: Sys): Int */
long standard__re___Sys___flag_newline(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_newline___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_notbol for (self: Sys): Int */
long standard__re___Sys___flag_notbol(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_notbol___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_noteol for (self: Sys): Int */
long standard__re___Sys___flag_noteol(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_noteol___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#error_nomatch for (self: Sys): Int */
long standard__re___Sys___error_nomatch(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_error_nomatch___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#error_espace for (self: Sys): Int */
long standard__re___Sys___error_espace(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_error_espace___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
