#include "nit__primitive_types.sep.0.h"
/* method primitive_types#PrimitiveNativeFile#file for (self: PrimitiveNativeFile): Stream */
val* nit___nit__PrimitiveNativeFile___file(val* self) {
val* var /* : Stream */;
val* var1 /* : Stream */;
var1 = self->attrs[COLOR_nit__primitive_types__PrimitiveNativeFile___file].val; /* _file on <self:PrimitiveNativeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method primitive_types#PrimitiveNativeFile#file= for (self: PrimitiveNativeFile, Stream) */
void nit___nit__PrimitiveNativeFile___file_61d(val* self, val* p0) {
self->attrs[COLOR_nit__primitive_types__PrimitiveNativeFile___file].val = p0; /* _file on <self:PrimitiveNativeFile> */
RET_LABEL:;
}
/* method primitive_types#PrimitiveNativeFile#native_stdin for (self: PrimitiveNativeFile) */
void nit___nit__PrimitiveNativeFile___native_stdin(val* self) {
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : PollableReader */;
{
{ /* Inline kernel#Object#sys (self) on <self:PrimitiveNativeFile> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__file__Sys__stdin]))(var); /* stdin on <var:Sys>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file_61d]))(self, var3); /* file= on <self:PrimitiveNativeFile>*/
}
RET_LABEL:;
}
/* method primitive_types#PrimitiveNativeFile#native_stdout for (self: PrimitiveNativeFile) */
void nit___nit__PrimitiveNativeFile___native_stdout(val* self) {
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
{
{ /* Inline kernel#Object#sys (self) on <self:PrimitiveNativeFile> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__file__Sys__stdout]))(var); /* stdout on <var:Sys>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file_61d]))(self, var3); /* file= on <self:PrimitiveNativeFile>*/
}
RET_LABEL:;
}
/* method primitive_types#PrimitiveNativeFile#native_stderr for (self: PrimitiveNativeFile) */
void nit___nit__PrimitiveNativeFile___native_stderr(val* self) {
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
{
{ /* Inline kernel#Object#sys (self) on <self:PrimitiveNativeFile> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__file__Sys__stderr]))(var); /* stderr on <var:Sys>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file_61d]))(self, var3); /* file= on <self:PrimitiveNativeFile>*/
}
RET_LABEL:;
}
/* method primitive_types#PrimitiveNativeFile#io_open_read for (self: PrimitiveNativeFile, String) */
void nit___nit__PrimitiveNativeFile___io_open_read(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : FileReader */;
val* var1 /* : String */;
var_path = p0;
var = NEW_standard__FileReader(&type_standard__FileReader);
{
var1 = ((val*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Object__to_s]))(var_path); /* to_s on <var_path:String>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__file__FileReader__open]))(var, var1); /* open on <var:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file_61d]))(self, var); /* file= on <self:PrimitiveNativeFile>*/
}
RET_LABEL:;
}
/* method primitive_types#PrimitiveNativeFile#io_open_write for (self: PrimitiveNativeFile, String) */
void nit___nit__PrimitiveNativeFile___io_open_write(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : FileWriter */;
val* var1 /* : String */;
var_path = p0;
var = NEW_standard__FileWriter(&type_standard__FileWriter);
{
var1 = ((val*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Object__to_s]))(var_path); /* to_s on <var_path:String>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__file__FileWriter__open]))(var, var1); /* open on <var:FileWriter>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file_61d]))(self, var); /* file= on <self:PrimitiveNativeFile>*/
}
RET_LABEL:;
}
/* method primitive_types#PrimitiveNativeFile#address_is_null for (self: PrimitiveNativeFile): Bool */
short int nit___nit__PrimitiveNativeFile___address_is_null(val* self) {
short int var /* : Bool */;
val* var1 /* : Stream */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Stream */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name;
val* var7 /* : nullable NativeFile */;
short int var8 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var1:Stream> isa FileStream */
cltype = type_standard__FileStream.color;
idtype = type_standard__FileStream.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var3:Stream> isa FileStream */
cltype5 = type_standard__FileStream.color;
idtype6 = type_standard__FileStream.id;
if(cltype5 >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype5] == idtype6;
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FileStream", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 46);
fatal_exit(1);
}
var7 = var3->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <var3:Stream(FileStream)> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 46);
fatal_exit(1);
} else {
var8 = ((short int(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var7); /* address_is_null on <var7:nullable NativeFile>*/
}
var = var8;
goto RET_LABEL;
} else {
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method primitive_types#PrimitiveNativeFile#io_read for (self: PrimitiveNativeFile, NativeString, Int): Int */
long nit___nit__PrimitiveNativeFile___io_read(val* self, char* p0, long p1) {
long var /* : Int */;
char* var_buf /* var buf: NativeString */;
long var_len /* var len: Int */;
val* var1 /* : Stream */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Stream */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name;
val* var7 /* : nullable NativeFile */;
long var8 /* : Int */;
val* var9 /* : Stream */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
val* var14 /* : String */;
val* var_str /* var str: String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
long var18 /* : Int */;
var_buf = p0;
var_len = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var1:Stream> isa FileStream */
cltype = type_standard__FileStream.color;
idtype = type_standard__FileStream.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var3:Stream> isa FileStream */
cltype5 = type_standard__FileStream.color;
idtype6 = type_standard__FileStream.id;
if(cltype5 >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype5] == idtype6;
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FileStream", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 51);
fatal_exit(1);
}
var7 = var3->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <var3:Stream(FileStream)> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 51);
fatal_exit(1);
} else {
var8 = ((long(*)(val* self, char* p0, long p1))(var7->class->vft[COLOR_standard__file__NativeFile__io_read]))(var7, var_buf, var_len); /* io_read on <var7:nullable NativeFile>*/
}
var = var8;
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var9:Stream> isa Reader */
cltype11 = type_standard__Reader.color;
idtype12 = type_standard__Reader.id;
if(cltype11 >= var9->type->table_size) {
var10 = 0;
} else {
var10 = var9->type->type_table[cltype11] == idtype12;
}
if (unlikely(!var10)) {
var_class_name13 = var9 == NULL ? "null" : var9->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Reader", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 52);
fatal_exit(1);
}
{
var14 = ((val*(*)(val* self, long p0))(var9->class->vft[COLOR_standard__stream__Reader__read]))(var9, var_len); /* read on <var9:Stream(Reader)>*/
}
var_str = var14;
{
var15 = ((char*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__to_cstring]))(var_str); /* to_cstring on <var_str:String>*/
}
{
var16 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline string#NativeString#copy_to (var15,var_buf,var16,0l,0l) on <var15:NativeString> */
memmove(var_buf+0l,var15+0l,var16);
RET_LABEL17:(void)0;
}
}
{
var18 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method primitive_types#PrimitiveNativeFile#io_write for (self: PrimitiveNativeFile, NativeString, Int): Int */
long nit___nit__PrimitiveNativeFile___io_write(val* self, char* p0, long p1) {
long var /* : Int */;
char* var_buf /* var buf: NativeString */;
long var_len /* var len: Int */;
val* var1 /* : Stream */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Stream */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name;
val* var7 /* : nullable NativeFile */;
long var8 /* : Int */;
val* var9 /* : Stream */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
val* var14 /* : FlatString */;
var_buf = p0;
var_len = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var1:Stream> isa FileStream */
cltype = type_standard__FileStream.color;
idtype = type_standard__FileStream.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var3:Stream> isa FileStream */
cltype5 = type_standard__FileStream.color;
idtype6 = type_standard__FileStream.id;
if(cltype5 >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype5] == idtype6;
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FileStream", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 58);
fatal_exit(1);
}
var7 = var3->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <var3:Stream(FileStream)> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 58);
fatal_exit(1);
} else {
var8 = ((long(*)(val* self, char* p0, long p1))(var7->class->vft[COLOR_standard__file__NativeFile__io_write]))(var7, var_buf, var_len); /* io_write on <var7:nullable NativeFile>*/
}
var = var8;
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var9:Stream> isa Writer */
cltype11 = type_standard__Writer.color;
idtype12 = type_standard__Writer.id;
if(cltype11 >= var9->type->table_size) {
var10 = 0;
} else {
var10 = var9->type->type_table[cltype11] == idtype12;
}
if (unlikely(!var10)) {
var_class_name13 = var9 == NULL ? "null" : var9->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Writer", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 59);
fatal_exit(1);
}
var14 = standard___standard__NativeString___to_s_with_length(var_buf, var_len);
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__stream__Writer__write]))(var9, var14); /* write on <var9:Stream(Writer)>*/
}
var = var_len;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method primitive_types#PrimitiveNativeFile#io_close for (self: PrimitiveNativeFile): Int */
long nit___nit__PrimitiveNativeFile___io_close(val* self) {
long var /* : Int */;
val* var1 /* : Stream */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Stream */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name;
val* var7 /* : nullable NativeFile */;
long var8 /* : Int */;
val* var9 /* : Stream */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var1:Stream> isa FileStream */
cltype = type_standard__FileStream.color;
idtype = type_standard__FileStream.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var3:Stream> isa FileStream */
cltype5 = type_standard__FileStream.color;
idtype6 = type_standard__FileStream.id;
if(cltype5 >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype5] == idtype6;
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FileStream", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 64);
fatal_exit(1);
}
var7 = var3->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <var3:Stream(FileStream)> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 64);
fatal_exit(1);
} else {
var8 = ((long(*)(val* self))(var7->class->vft[COLOR_standard__file__NativeFile__io_close]))(var7); /* io_close on <var7:nullable NativeFile>*/
}
var = var8;
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__stream__Stream__close]))(var9); /* close on <var9:Stream>*/
}
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method primitive_types#PrimitiveNativeFile#fileno for (self: PrimitiveNativeFile): Int */
long nit___nit__PrimitiveNativeFile___fileno(val* self) {
long var /* : Int */;
val* var1 /* : Stream */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Stream */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name;
val* var7 /* : nullable NativeFile */;
long var8 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var1:Stream> isa FileStream */
cltype = type_standard__FileStream.color;
idtype = type_standard__FileStream.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var3:Stream> isa FileStream */
cltype5 = type_standard__FileStream.color;
idtype6 = type_standard__FileStream.id;
if(cltype5 >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype5] == idtype6;
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FileStream", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 70);
fatal_exit(1);
}
var7 = var3->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <var3:Stream(FileStream)> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 70);
fatal_exit(1);
} else {
var8 = ((long(*)(val* self))(var7->class->vft[COLOR_standard__file__NativeFile__fileno]))(var7); /* fileno on <var7:nullable NativeFile>*/
}
var = var8;
goto RET_LABEL;
} else {
}
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method primitive_types#PrimitiveNativeFile#flush for (self: PrimitiveNativeFile): Int */
long nit___nit__PrimitiveNativeFile___flush(val* self) {
long var /* : Int */;
val* var1 /* : Stream */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Stream */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name;
val* var7 /* : nullable NativeFile */;
long var8 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var1:Stream> isa FileStream */
cltype = type_standard__FileStream.color;
idtype = type_standard__FileStream.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var3:Stream> isa FileStream */
cltype5 = type_standard__FileStream.color;
idtype6 = type_standard__FileStream.id;
if(cltype5 >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype5] == idtype6;
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FileStream", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 75);
fatal_exit(1);
}
var7 = var3->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <var3:Stream(FileStream)> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 75);
fatal_exit(1);
} else {
var8 = ((long(*)(val* self))(var7->class->vft[COLOR_standard__file__NativeFile__flush]))(var7); /* flush on <var7:nullable NativeFile>*/
}
var = var8;
goto RET_LABEL;
} else {
}
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method primitive_types#PrimitiveNativeFile#set_buffering_type for (self: PrimitiveNativeFile, Int, Int): Int */
long nit___nit__PrimitiveNativeFile___set_buffering_type(val* self, long p0, long p1) {
long var /* : Int */;
long var_size /* var size: Int */;
long var_mode /* var mode: Int */;
val* var1 /* : Stream */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Stream */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name;
val* var7 /* : nullable NativeFile */;
long var8 /* : Int */;
var_size = p0;
var_mode = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var1:Stream> isa FileStream */
cltype = type_standard__FileStream.color;
idtype = type_standard__FileStream.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__file]))(self); /* file on <self:PrimitiveNativeFile>*/
}
/* <var3:Stream> isa FileStream */
cltype5 = type_standard__FileStream.color;
idtype6 = type_standard__FileStream.id;
if(cltype5 >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype5] == idtype6;
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FileStream", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 80);
fatal_exit(1);
}
var7 = var3->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <var3:Stream(FileStream)> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__primitive_types, 80);
fatal_exit(1);
} else {
var8 = ((long(*)(val* self, long p0, long p1))(var7->class->vft[COLOR_standard__file__NativeFile__set_buffering_type]))(var7, var_size, var_mode); /* set_buffering_type on <var7:nullable NativeFile>*/
}
var = var8;
goto RET_LABEL;
} else {
}
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method primitive_types#PrimitiveNativeFile#init for (self: PrimitiveNativeFile) */
void nit___nit__PrimitiveNativeFile___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__PrimitiveNativeFile___standard__kernel__Object__init]))(self); /* init on <self:PrimitiveNativeFile>*/
}
RET_LABEL:;
}
