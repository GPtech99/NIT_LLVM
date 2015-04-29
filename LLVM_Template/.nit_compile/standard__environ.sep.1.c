#include "standard__environ.sep.0.h"
/* method environ#String#environ for (self: String): String */
val* standard__environ___String___environ(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var_res /* var res: NativeString */;
static char* varonce;
static int varonce_guard;
char* var3 /* : NativeString */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
char* var8 /* : NativeString */;
char* var9 /* : NativeString */;
char* var_nulstr /* var nulstr: NativeString */;
short int var10 /* : Bool */;
val* var11 /* : Object */;
val* var12 /* : nullable Object */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = standard__environ___NativeString___get_environ(var1);
var_res = var2;
if (likely(varonce_guard)) {
var3 = varonce;
} else {
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "";
var7 = standard___standard__NativeString___to_s_with_length(var6, 0l);
var5 = var7;
varonce4 = var5;
}
{
var8 = ((char*(*)(val* self))(var5->class->vft[COLOR_standard__string__Text__to_cstring]))(var5); /* to_cstring on <var5:String>*/
}
var9 = standard__environ___NativeString___get_environ(var8);
var3 = var9;
varonce = var3;
varonce_guard = 1;
}
var_nulstr = var3;
var11 = BOX_standard__NativeString(var_res); /* autobox from NativeString to Object */
var12 = BOX_standard__NativeString(var_nulstr); /* autobox from NativeString to nullable Object */
var10 = standard___standard__Object____33d_61d(var11, var12);
if (var10){
var13 = standard___standard__NativeString___Object__to_s(var_res);
var = var13;
goto RET_LABEL;
} else {
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
}
RET_LABEL:;
return var;
}
/* method environ#String#setenv for (self: String, String) */
void standard__environ___String___setenv(val* self, val* p0) {
val* var_v /* var v: String */;
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var_v = p0;
{
var = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
var1 = ((char*(*)(val* self))(var_v->class->vft[COLOR_standard__string__Text__to_cstring]))(var_v); /* to_cstring on <var_v:String>*/
}
standard__environ___NativeString___setenv(var, var1); /* Direct call environ#NativeString#setenv on <var:NativeString>*/
RET_LABEL:;
}
/* method environ#String#program_is_in_path for (self: String): Bool */
short int standard__environ___String___program_is_in_path(val* self) {
short int var /* : Bool */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
val* var_full_path /* var full_path: String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : Array[String] */;
val* var_paths /* var paths: Array[String] */;
val* var_ /* var : Array[String] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[String] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_path /* var path: String */;
short int var14 /* : Bool */;
val* var15 /* : String */;
short int var16 /* : Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "PATH";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__environ__String__environ]))(var1); /* environ on <var1:String>*/
}
var_full_path = var4;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ":";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce5 = var6;
}
{
var9 = ((val*(*)(val* self, val* p0))(var_full_path->class->vft[COLOR_standard__string_search__Text__split]))(var_full_path, var6); /* split on <var_full_path:String>*/
}
var_paths = var9;
var_ = var_paths;
{
var10 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:ArrayIterator[String]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:ArrayIterator[String]>*/
}
var_path = var13;
{
var14 = ((short int(*)(val* self))(var_path->class->vft[COLOR_standard__file__String__file_exists]))(var_path); /* file_exists on <var_path:String>*/
}
if (var14){
{
var15 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_standard__file__String__join_path]))(var_path, self); /* join_path on <var_path:String>*/
}
{
var16 = ((short int(*)(val* self))(var15->class->vft[COLOR_standard__file__String__file_exists]))(var15); /* file_exists on <var15:String>*/
}
if (var16){
var = 1;
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:ArrayIterator[String]>*/
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ#NativeString#get_environ for (self: NativeString): NativeString */
char* standard__environ___NativeString___get_environ(char* self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = string_NativeString_NativeString_get_environ_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ#NativeString#setenv for (self: NativeString, NativeString) */
void standard__environ___NativeString___setenv(char* self, char* p0) {
string_NativeString_NativeString_setenv_1(self, p0);
RET_LABEL:;
}
