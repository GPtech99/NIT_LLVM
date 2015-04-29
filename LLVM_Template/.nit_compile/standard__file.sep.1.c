#include "standard__file.sep.0.h"
/* method file#FileStream#path for (self: FileStream): nullable String */
val* standard___standard__FileStream___path(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_standard__file__FileStream___path].val; /* _path on <self:FileStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStream#path= for (self: FileStream, nullable String) */
void standard___standard__FileStream___path_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__FileStream___path].val = p0; /* _path on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#file for (self: FileStream): nullable NativeFile */
val* standard___standard__FileStream___file(val* self) {
val* var /* : nullable NativeFile */;
val* var1 /* : nullable NativeFile */;
var1 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStream#file= for (self: FileStream, nullable NativeFile) */
void standard___standard__FileStream___file_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__FileStream___file].val = p0; /* _file on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#file_stat for (self: FileStream): nullable FileStat */
val* standard___standard__FileStream___file_stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : nullable NativeFile */;
val* var2 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var3 /* : Bool */;
val* var4 /* : FileStat */;
var1 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 52);
fatal_exit(1);
} else {
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__file__NativeFile__file_stat]))(var1); /* file_stat on <var1:nullable NativeFile>*/
}
var_stat = var2;
{
var3 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_standard__FileStat(&type_standard__FileStat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__file__FileStat__stat_61d]))(var4, var_stat); /* stat= on <var4:FileStat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:FileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStream#fd for (self: FileStream): Int */
long standard___standard__FileStream___fd(val* self) {
long var /* : Int */;
val* var1 /* : nullable NativeFile */;
long var2 /* : Int */;
var1 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 58);
fatal_exit(1);
} else {
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__file__NativeFile__fileno]))(var1); /* fileno on <var1:nullable NativeFile>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStream#close for (self: FileStream) */
void standard___standard__FileStream___standard__stream__Stream__close(val* self) {
val* var /* : nullable NativeFile */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
val* var5 /* : nullable IOError */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : IOError */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : nullable NativeFile */;
long var13 /* : Int */;
long var_i /* var i: Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : IOError */;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : Sys */;
val* var27 /* : Sys */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
var = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, ((val*)NULL)); /* == on <var:nullable NativeFile>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 63);
fatal_exit(1);
} else {
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var3); /* address_is_null on <var3:nullable NativeFile>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:FileStream>*/
}
if (var5 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var5, ((val*)NULL)); /* != on <var5:nullable IOError>*/
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
var8 = NEW_standard__IOError(&type_standard__IOError);
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "Cannot close unopened file";
var11 = standard___standard__NativeString___to_s_with_length(var10, 26l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__error__Error__message_61d]))(var8, var9); /* message= on <var8:IOError>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var8); /* last_error= on <self:FileStream>*/
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 68);
fatal_exit(1);
} else {
var13 = ((long(*)(val* self))(var12->class->vft[COLOR_standard__file__NativeFile__io_close]))(var12); /* io_close on <var12:nullable NativeFile>*/
}
var_i = var13;
{
{ /* Inline kernel#Int#!= (var_i,0l) on <var_i:Int> */
var16 = var_i == 0l;
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var18 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce19==NULL)) {
var20 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Close failed due to error ";
var24 = standard___standard__NativeString___to_s_with_length(var23, 26l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var20)->values[0]=var22;
} else {
var20 = varonce19;
varonce19 = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:FileStream> */
var27 = glob_sys;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
var28 = ((long(*)(val* self))(var25->class->vft[COLOR_standard__kernel__Sys__errno]))(var25); /* errno on <var25:Sys>*/
}
var29 = standard__string___Int___strerror(var28);
((struct instance_standard__NativeArray*)var20)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__error__Error__message_61d]))(var18, var30); /* message= on <var18:IOError>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var18); /* last_error= on <self:FileStream>*/
}
} else {
}
self->attrs[COLOR_standard__file__FileStream___file].val = ((val*)NULL); /* _file on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#set_buffering_mode for (self: FileStream, Int, Int) */
void standard___standard__FileStream___set_buffering_mode(val* self, long p0, long p1) {
long var_buf_size /* var buf_size: Int */;
long var_mode /* var mode: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
val* var4 /* : nullable NativeFile */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : Sys */;
val* var18 /* : Sys */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
var_buf_size = p0;
var_mode = p1;
{
{ /* Inline kernel#Int#<= (var_buf_size,0l) on <var_buf_size:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var3 = var_buf_size <= 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
var_buf_size = 512l;
} else {
}
var4 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 85);
fatal_exit(1);
} else {
var5 = ((long(*)(val* self, long p0, long p1))(var4->class->vft[COLOR_standard__file__NativeFile__set_buffering_type]))(var4, var_buf_size, var_mode); /* set_buffering_type on <var4:nullable NativeFile>*/
}
{
{ /* Inline kernel#Int#!= (var5,0l) on <var5:Int> */
var8 = var5 == 0l;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce==NULL)) {
var11 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Error while changing buffering type for FileStream, returned error ";
var15 = standard___standard__NativeString___to_s_with_length(var14, 67l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var11)->values[0]=var13;
} else {
var11 = varonce;
varonce = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:FileStream> */
var18 = glob_sys;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var19 = ((long(*)(val* self))(var16->class->vft[COLOR_standard__kernel__Sys__errno]))(var16); /* errno on <var16:Sys>*/
}
var20 = standard__string___Int___strerror(var19);
((struct instance_standard__NativeArray*)var11)->values[1]=var20;
{
var21 = ((val*(*)(val* self))(var11->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__error__Error__message_61d]))(var10, var21); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var10); /* last_error= on <self:FileStream>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileReader#reopen for (self: FileReader) */
void standard___standard__FileReader___reopen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeFile */;
val* var7 /* : nullable String */;
char* var8 /* : NativeString */;
val* var9 /* : NativeFile */;
val* var10 /* : nullable NativeFile */;
short int var11 /* : Bool */;
val* var12 /* : IOError */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : nullable String */;
val* var27 /* : Sys */;
val* var29 /* : Sys */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : nullable FlatBuffer */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:FileReader>*/
}
var2 = !var1;
var_ = var2;
if (var2){
var3 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 107);
fatal_exit(1);
} else {
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var3); /* address_is_null on <var3:nullable NativeFile>*/
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__close]))(self); /* close on <self:FileReader>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:FileReader>*/
}
var6 = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStream__path]))(self); /* path on <self:FileReader>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 109);
fatal_exit(1);
} else {
var8 = ((char*(*)(val* self))(var7->class->vft[COLOR_standard__string__Text__to_cstring]))(var7); /* to_cstring on <var7:nullable String>*/
}
{
var9 = ((val*(*)(val* self, char* p0))(var6->class->vft[COLOR_standard__file__NativeFile__io_open_read]))(var6, var8); /* io_open_read on <var6:NativeFile>*/
}
self->attrs[COLOR_standard__file__FileStream___file].val = var9; /* _file on <self:FileReader> */
var10 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 110);
fatal_exit(1);
} else {
var11 = ((short int(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var10); /* address_is_null on <var10:nullable NativeFile>*/
}
if (var11){
var12 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce==NULL)) {
var13 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Error: Opening file at \'";
var17 = standard___standard__NativeString___to_s_with_length(var16, 24l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var13)->values[0]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\' failed with \'";
var21 = standard___standard__NativeString___to_s_with_length(var20, 15l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var13)->values[2]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "\'";
var25 = standard___standard__NativeString___to_s_with_length(var24, 1l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var13)->values[4]=var23;
} else {
var13 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStream__path]))(self); /* path on <self:FileReader>*/
}
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 111);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var13)->values[1]=var26;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var29 = glob_sys;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
var30 = ((long(*)(val* self))(var27->class->vft[COLOR_standard__kernel__Sys__errno]))(var27); /* errno on <var27:Sys>*/
}
var31 = standard__string___Int___strerror(var30);
((struct instance_standard__NativeArray*)var13)->values[3]=var31;
{
var32 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__error__Error__message_61d]))(var12, var32); /* message= on <var12:IOError>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_standard__kernel__Object__init]))(var12); /* init on <var12:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var12); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__file__FileReader__end_reached_61d]))(self, 0); /* end_reached= on <self:FileReader>*/
}
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:FileReader> */
var33 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:FileReader> */
if (var33 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 117);
fatal_exit(1);
} else {
((void(*)(val* self))(var33->class->vft[COLOR_standard__string__Buffer__clear]))(var33); /* clear on <var33:nullable FlatBuffer>*/
}
RET_LABEL:;
}
/* method file#FileReader#close for (self: FileReader) */
void standard___standard__FileReader___standard__stream__Stream__close(val* self) {
val* var /* : nullable FlatBuffer */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FileReader___standard__stream__Stream__close]))(self); /* close on <self:FileReader>*/
}
var = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:FileReader> */
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 123);
fatal_exit(1);
} else {
((void(*)(val* self))(var->class->vft[COLOR_standard__string__Buffer__clear]))(var); /* clear on <var:nullable FlatBuffer>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
RET_LABEL:;
}
/* method file#FileReader#fill_buffer for (self: FileReader) */
void standard___standard__FileReader___standard__stream__BufferedReader__fill_buffer(val* self) {
val* var /* : nullable NativeFile */;
val* var1 /* : nullable FlatBuffer */;
char* var2 /* : NativeString */;
val* var3 /* : nullable FlatBuffer */;
long var4 /* : Int */;
long var5 /* : Int */;
long var_nb /* var nb: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : nullable FlatBuffer */;
var = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileReader> */
var1 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:FileReader> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 129);
fatal_exit(1);
} else {
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__FlatText__items]))(var1); /* items on <var1:nullable FlatBuffer>*/
}
var3 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:FileReader> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 129);
fatal_exit(1);
} else {
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_standard__string__FlatBuffer__capacity]))(var3); /* capacity on <var3:nullable FlatBuffer>*/
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 129);
fatal_exit(1);
} else {
var5 = ((long(*)(val* self, char* p0, long p1))(var->class->vft[COLOR_standard__file__NativeFile__io_read]))(var, var2, var4); /* io_read on <var:nullable NativeFile>*/
}
var_nb = var5;
{
{ /* Inline kernel#Int#<= (var_nb,0l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var9 = var_nb <= 0l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
var_nb = 0l;
} else {
}
var10 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:FileReader> */
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 134);
fatal_exit(1);
} else {
((void(*)(val* self, long p0))(var10->class->vft[COLOR_standard__string__FlatText__length_61d]))(var10, var_nb); /* length= on <var10:nullable FlatBuffer>*/
}
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:FileReader> */
RET_LABEL:;
}
/* method file#FileReader#end_reached for (self: FileReader): Bool */
short int standard___standard__FileReader___standard__stream__BufferedReader__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__file__FileReader___end_reached].s; /* _end_reached on <self:FileReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileReader#end_reached= for (self: FileReader, Bool) */
void standard___standard__FileReader___end_reached_61d(val* self, short int p0) {
self->attrs[COLOR_standard__file__FileReader___end_reached].s = p0; /* _end_reached on <self:FileReader> */
RET_LABEL:;
}
/* method file#FileReader#open for (self: FileReader, String) */
void standard___standard__FileReader___open(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : NativeFile */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFile */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
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
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : Sys */;
val* var21 /* : Sys */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_path = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__FileStream__path_61d]))(self, var_path); /* path= on <self:FileReader>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__stream__BufferedReader__prepare_buffer]))(self, 10l); /* prepare_buffer on <self:FileReader>*/
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = ((char*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var2 = ((val*(*)(val* self, char* p0))(var->class->vft[COLOR_standard__file__NativeFile__io_open_read]))(var, var1); /* io_open_read on <var:NativeFile>*/
}
self->attrs[COLOR_standard__file__FileStream___file].val = var2; /* _file on <self:FileReader> */
var3 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 157);
fatal_exit(1);
} else {
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var3); /* address_is_null on <var3:nullable NativeFile>*/
}
if (var4){
var5 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Error: Opening file at \'";
var10 = standard___standard__NativeString___to_s_with_length(var9, 24l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "\' failed with \'";
var14 = standard___standard__NativeString___to_s_with_length(var13, 15l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\'";
var18 = standard___standard__NativeString___to_s_with_length(var17, 1l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var6)->values[4]=var16;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var_path;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var21 = glob_sys;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
var22 = ((long(*)(val* self))(var19->class->vft[COLOR_standard__kernel__Sys__errno]))(var19); /* errno on <var19:Sys>*/
}
var23 = standard__string___Int___strerror(var22);
((struct instance_standard__NativeArray*)var6)->values[3]=var23;
{
var24 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__error__Error__message_61d]))(var5, var24); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileReader#from_fd for (self: FileReader, Int) */
void standard___standard__FileReader___from_fd(val* self, long p0) {
long var_fd /* var fd: Int */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : Sys */;
char* var4 /* : NativeString */;
val* var5 /* : NativeFile */;
val* var6 /* : nullable NativeFile */;
short int var7 /* : Bool */;
val* var8 /* : IOError */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var24 /* : Sys */;
val* var26 /* : Sys */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_fd = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = standard___standard__NativeString___to_s_with_length(var1, 0l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__FileStream__path_61d]))(self, var); /* path= on <self:FileReader>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__stream__BufferedReader__prepare_buffer]))(self, 1l); /* prepare_buffer on <self:FileReader>*/
}
var3 = glob_sys;
{
var4 = ((char*(*)(val* self))(var3->class->vft[COLOR_standard__file__Sys__read_only]))(var3); /* read_only on <var3:Sys>*/
}
var5 = standard__file___Int___fd_to_stream(var_fd, var4);
self->attrs[COLOR_standard__file__FileStream___file].val = var5; /* _file on <self:FileReader> */
var6 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 170);
fatal_exit(1);
} else {
var7 = ((short int(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var6); /* address_is_null on <var6:nullable NativeFile>*/
}
if (var7){
var8 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce9==NULL)) {
var10 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: Converting fd ";
var14 = standard___standard__NativeString___to_s_with_length(var13, 21l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = " to stream failed with \'";
var18 = standard___standard__NativeString___to_s_with_length(var17, 24l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\'";
var22 = standard___standard__NativeString___to_s_with_length(var21, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var10)->values[4]=var20;
} else {
var10 = varonce9;
varonce9 = NULL;
}
var23 = standard__string___Int___Object__to_s(var_fd);
((struct instance_standard__NativeArray*)var10)->values[1]=var23;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var26 = glob_sys;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_standard__kernel__Sys__errno]))(var24); /* errno on <var24:Sys>*/
}
var28 = standard__string___Int___strerror(var27);
((struct instance_standard__NativeArray*)var10)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__error__Error__message_61d]))(var8, var29); /* message= on <var8:IOError>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var8); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#write for (self: FileWriter, Text) */
void standard___standard__FileWriter___standard__stream__Writer__write(val* self, val* p0) {
val* var_s /* var s: Text */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
int cltype;
int idtype;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : Iterator[Text] */;
val* var_ /* var : Iterator[Text] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[Text] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_i /* var i: Text */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable IOError>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_standard__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_standard__IOError(&type_standard__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Cannot write to non-writable stream";
var8 = standard___standard__NativeString___to_s_with_length(var7, 35l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
/* <var_s:Text> isa FlatText */
cltype = type_standard__FlatText.color;
idtype = type_standard__FlatText.id;
if(cltype >= var_s->type->table_size) {
var9 = 0;
} else {
var9 = var_s->type->type_table[cltype] == idtype;
}
if (var9){
{
var10 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__to_cstring]))(var_s); /* to_cstring on <var_s:Text(FlatText)>*/
}
{
var11 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text(FlatText)>*/
}
{
((void(*)(val* self, char* p0, long p1))(self->class->vft[COLOR_standard__file__FileWriter__write_native]))(self, var10, var11); /* write_native on <self:FileWriter>*/
}
} else {
{
var12 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__substrings]))(var_s); /* substrings on <var_s:Text>*/
}
var_ = var12;
{
var13 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[Text]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[Text]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[Text]>*/
}
var_i = var16;
{
var17 = ((char*(*)(val* self))(var_i->class->vft[COLOR_standard__string__Text__to_cstring]))(var_i); /* to_cstring on <var_i:Text>*/
}
{
var18 = ((long(*)(val* self))(var_i->class->vft[COLOR_standard__string__Text__length]))(var_i); /* length on <var_i:Text>*/
}
{
((void(*)(val* self, char* p0, long p1))(self->class->vft[COLOR_standard__file__FileWriter__write_native]))(self, var17, var18); /* write_native on <self:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[Text]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[Text]>*/
}
}
RET_LABEL:;
}
/* method file#FileWriter#close for (self: FileWriter) */
void standard___standard__FileWriter___standard__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FileWriter___standard__stream__Stream__close]))(self); /* close on <self:FileWriter>*/
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file#FileWriter#is_writable for (self: FileWriter): Bool */
short int standard___standard__FileWriter___standard__stream__Writer__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileWriter#is_writable= for (self: FileWriter, Bool) */
void standard___standard__FileWriter___is_writable_61d(val* self, short int p0) {
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = p0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file#FileWriter#write_native for (self: FileWriter, NativeString, Int) */
void standard___standard__FileWriter___write_native(val* self, char* p0, long p1) {
char* var_native /* var native: NativeString */;
long var_len /* var len: Int */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : nullable NativeFile */;
short int var10 /* : Bool */;
val* var11 /* : IOError */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : nullable NativeFile */;
long var17 /* : Int */;
long var_err /* var err: Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : IOError */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
var_native = p0;
var_len = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable IOError>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_standard__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_standard__IOError(&type_standard__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Cannot write to non-writable stream";
var8 = standard___standard__NativeString___to_s_with_length(var7, 35l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 211);
fatal_exit(1);
} else {
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var9); /* address_is_null on <var9:nullable NativeFile>*/
}
if (var10){
var11 = NEW_standard__IOError(&type_standard__IOError);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Writing on a null stream";
var15 = standard___standard__NativeString___to_s_with_length(var14, 24l);
var13 = var15;
varonce12 = var13;
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__error__Error__message_61d]))(var11, var13); /* message= on <var11:IOError>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var11); /* last_error= on <self:FileWriter>*/
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 216);
fatal_exit(1);
} else {
var17 = ((long(*)(val* self, char* p0, long p1))(var16->class->vft[COLOR_standard__file__NativeFile__io_write]))(var16, var_native, var_len); /* io_write on <var16:nullable NativeFile>*/
}
var_err = var17;
{
{ /* Inline kernel#Int#!= (var_err,var_len) on <var_err:Int> */
var20 = var_err == var_len;
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
var22 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce23==NULL)) {
var24 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Problem in writing : ";
var28 = standard___standard__NativeString___to_s_with_length(var27, 21l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " ";
var32 = standard___standard__NativeString___to_s_with_length(var31, 1l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var24)->values[2]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " \n";
var36 = standard___standard__NativeString___to_s_with_length(var35, 2l);
var34 = var36;
varonce33 = var34;
}
((struct instance_standard__NativeArray*)var24)->values[4]=var34;
} else {
var24 = varonce23;
varonce23 = NULL;
}
var37 = standard__string___Int___Object__to_s(var_err);
((struct instance_standard__NativeArray*)var24)->values[1]=var37;
var38 = standard__string___Int___Object__to_s(var_len);
((struct instance_standard__NativeArray*)var24)->values[3]=var38;
{
var39 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__error__Error__message_61d]))(var22, var39); /* message= on <var22:IOError>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var22); /* last_error= on <self:FileWriter>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#open for (self: FileWriter, String) */
void standard___standard__FileWriter___open(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : NativeFile */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFile */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
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
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : Sys */;
val* var21 /* : Sys */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FileWriter>*/
}
var_path = p0;
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = ((char*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var2 = ((val*(*)(val* self, char* p0))(var->class->vft[COLOR_standard__file__NativeFile__io_open_write]))(var, var1); /* io_open_write on <var:NativeFile>*/
}
self->attrs[COLOR_standard__file__FileStream___file].val = var2; /* _file on <self:FileWriter> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__FileStream__path_61d]))(self, var_path); /* path= on <self:FileWriter>*/
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:FileWriter> */
var3 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 229);
fatal_exit(1);
} else {
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var3); /* address_is_null on <var3:nullable NativeFile>*/
}
if (var4){
var5 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Error: Opening file at \'";
var10 = standard___standard__NativeString___to_s_with_length(var9, 24l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "\' failed with \'";
var14 = standard___standard__NativeString___to_s_with_length(var13, 15l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\'";
var18 = standard___standard__NativeString___to_s_with_length(var17, 1l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var6)->values[4]=var16;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var_path;
{
{ /* Inline kernel#Object#sys (self) on <self:FileWriter> */
var21 = glob_sys;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
var22 = ((long(*)(val* self))(var19->class->vft[COLOR_standard__kernel__Sys__errno]))(var19); /* errno on <var19:Sys>*/
}
var23 = standard__string___Int___strerror(var22);
((struct instance_standard__NativeArray*)var6)->values[3]=var23;
{
var24 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__error__Error__message_61d]))(var5, var24); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__file__FileWriter__is_writable_61d]))(self, 0); /* is_writable= on <self:FileWriter>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#from_fd for (self: FileWriter, Int) */
void standard___standard__FileWriter___from_fd(val* self, long p0) {
long var_fd /* var fd: Int */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : Sys */;
char* var4 /* : NativeString */;
val* var5 /* : NativeFile */;
val* var6 /* : nullable NativeFile */;
short int var7 /* : Bool */;
val* var8 /* : IOError */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var24 /* : Sys */;
val* var26 /* : Sys */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FileWriter>*/
}
var_fd = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = standard___standard__NativeString___to_s_with_length(var1, 0l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__FileStream__path_61d]))(self, var); /* path= on <self:FileWriter>*/
}
var3 = glob_sys;
{
var4 = ((char*(*)(val* self))(var3->class->vft[COLOR_standard__file__Sys__wipe_write]))(var3); /* wipe_write on <var3:Sys>*/
}
var5 = standard__file___Int___fd_to_stream(var_fd, var4);
self->attrs[COLOR_standard__file__FileStream___file].val = var5; /* _file on <self:FileWriter> */
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:FileWriter> */
var6 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 240);
fatal_exit(1);
} else {
var7 = ((short int(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var6); /* address_is_null on <var6:nullable NativeFile>*/
}
if (var7){
var8 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce9==NULL)) {
var10 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: Opening stream from file descriptor ";
var14 = standard___standard__NativeString___to_s_with_length(var13, 43l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = " failed with \'";
var18 = standard___standard__NativeString___to_s_with_length(var17, 14l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\'";
var22 = standard___standard__NativeString___to_s_with_length(var21, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var10)->values[4]=var20;
} else {
var10 = varonce9;
varonce9 = NULL;
}
var23 = standard__string___Int___Object__to_s(var_fd);
((struct instance_standard__NativeArray*)var10)->values[1]=var23;
{
{ /* Inline kernel#Object#sys (self) on <self:FileWriter> */
var26 = glob_sys;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_standard__kernel__Sys__errno]))(var24); /* errno on <var24:Sys>*/
}
var28 = standard__string___Int___strerror(var27);
((struct instance_standard__NativeArray*)var10)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__error__Error__message_61d]))(var8, var29); /* message= on <var8:IOError>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var8); /* last_error= on <self:FileWriter>*/
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
} else {
}
RET_LABEL:;
}
/* method file#Int#fd_to_stream for (self: Int, NativeString): NativeFile */
val* standard__file___Int___fd_to_stream(long self, char* p0) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_int_fdtostream(self, p0);
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Stdin#init for (self: Stdin) */
void standard___standard__Stdin___standard__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Stdin___standard__kernel__Object__init]))(self); /* init on <self:Stdin>*/
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__file__NativeFile__native_stdin]))(var); /* native_stdin on <var:NativeFile>*/
}
self->attrs[COLOR_standard__file__FileStream___file].val = var1; /* _file on <self:Stdin> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stdin";
var4 = standard___standard__NativeString___to_s_with_length(var3, 10l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__FileStream__path_61d]))(self, var2); /* path= on <self:Stdin>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__stream__BufferedReader__prepare_buffer]))(self, 1l); /* prepare_buffer on <self:Stdin>*/
}
RET_LABEL:;
}
/* method file#Stdin#poll_in for (self: Stdin): Bool */
short int standard___standard__Stdin___standard__stream__PollableReader__poll_in(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
var1 = file_stdin_poll_in(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Stdout#init for (self: Stdout) */
void standard___standard__Stdout___standard__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : Sys */;
val* var7 /* : Sys */;
long var8 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Stdout___standard__kernel__Object__init]))(self); /* init on <self:Stdout>*/
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__file__NativeFile__native_stdout]))(var); /* native_stdout on <var:NativeFile>*/
}
self->attrs[COLOR_standard__file__FileStream___file].val = var1; /* _file on <self:Stdout> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stdout";
var4 = standard___standard__NativeString___to_s_with_length(var3, 11l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__FileStream__path_61d]))(self, var2); /* path= on <self:Stdout>*/
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stdout> */
{
{ /* Inline kernel#Object#sys (self) on <self:Stdout> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = ((long(*)(val* self))(var5->class->vft[COLOR_standard__file__Sys__buffer_mode_line]))(var5); /* buffer_mode_line on <var5:Sys>*/
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__file__FileStream__set_buffering_mode]))(self, 256l, var8); /* set_buffering_mode on <self:Stdout>*/
}
RET_LABEL:;
}
/* method file#Stderr#init for (self: Stderr) */
void standard___standard__Stderr___standard__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Stderr___standard__kernel__Object__init]))(self); /* init on <self:Stderr>*/
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__file__NativeFile__native_stderr]))(var); /* native_stderr on <var:NativeFile>*/
}
self->attrs[COLOR_standard__file__FileStream___file].val = var1; /* _file on <self:Stderr> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stderr";
var4 = standard___standard__NativeString___to_s_with_length(var3, 11l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__FileStream__path_61d]))(self, var2); /* path= on <self:Stderr>*/
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stderr> */
RET_LABEL:;
}
/* method file#Writable#write_to_file for (self: Writable, String) */
void standard__file___Writable___write_to_file(val* self, val* p0) {
val* var_filepath /* var filepath: String */;
val* var /* : FileWriter */;
val* var_stream /* var stream: FileWriter */;
var_filepath = p0;
var = NEW_standard__FileWriter(&type_standard__FileWriter);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__file__FileWriter__open]))(var, var_filepath); /* open on <var:FileWriter>*/
}
var_stream = var;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__stream__Writable__write_to]))(self, var_stream); /* write_to on <self:Writable>*/
}
{
((void(*)(val* self))(var_stream->class->vft[COLOR_standard__stream__Stream__close]))(var_stream); /* close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method file#Path#path for (self: Path): String */
val* standard___standard__Path___path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 323);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Path#path= for (self: Path, String) */
void standard___standard__Path___path_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__Path___path].val = p0; /* _path on <self:Path> */
RET_LABEL:;
}
/* method file#Path#to_s for (self: Path): String */
val* standard___standard__Path___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#filename for (self: Path): String */
val* standard___standard__Path___filename(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : String */;
var1 = self->attrs[COLOR_standard__file__Path___filename].val != NULL; /* _filename on <self:Path> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__file__Path___filename].val; /* _filename on <self:Path> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 328);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__file__String__basename]))(var3, var4); /* basename on <var3:String>*/
}
self->attrs[COLOR_standard__file__Path___filename].val = var7; /* _filename on <self:Path> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Path#filename= for (self: Path, String) */
void standard___standard__Path___filename_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__Path___filename].val = p0; /* _filename on <self:Path> */
RET_LABEL:;
}
/* method file#Path#exists for (self: Path): Bool */
short int standard___standard__Path___exists(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FileStat */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__stat]))(self); /* stat on <self:Path>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable FileStat>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#stat for (self: Path): nullable FileStat */
val* standard___standard__Path___stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var4 /* : Bool */;
val* var5 /* : FileStat */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = standard__file___NativeString___file_stat(var2);
var_stat = var3;
{
var4 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var4){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var5 = NEW_standard__FileStat(&type_standard__FileStat);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__file__FileStat__stat_61d]))(var5, var_stat); /* stat= on <var5:FileStat>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:FileStat>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#link_stat for (self: Path): nullable FileStat */
val* standard___standard__Path___link_stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var4 /* : Bool */;
val* var5 /* : FileStat */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = standard__file___NativeString___file_lstat(var2);
var_stat = var3;
{
var4 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var4){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var5 = NEW_standard__FileStat(&type_standard__FileStat);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__file__FileStat__stat_61d]))(var5, var_stat); /* stat= on <var5:FileStat>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:FileStat>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#delete for (self: Path): Bool */
short int standard___standard__Path___delete(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = standard__file___NativeString___file_delete(var2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#copy for (self: Path, Path) */
void standard___standard__Path___copy(val* self, val* p0) {
val* var_dest /* var dest: Path */;
val* var /* : FileReader */;
val* var_input /* var input: FileReader */;
val* var1 /* : FileWriter */;
val* var_output /* var output: FileWriter */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var_buffer /* var buffer: String */;
var_dest = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_input = var;
{
var1 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_standard__file__Path__open_wo]))(var_dest); /* open_wo on <var_dest:Path>*/
}
var_output = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))(var_input->class->vft[COLOR_standard__stream__Reader__eof]))(var_input); /* eof on <var_input:FileReader>*/
}
var3 = !var2;
if (var3){
{
var4 = ((val*(*)(val* self, long p0))(var_input->class->vft[COLOR_standard__stream__Reader__read]))(var_input, 1024l); /* read on <var_input:FileReader>*/
}
var_buffer = var4;
{
((void(*)(val* self, val* p0))(var_output->class->vft[COLOR_standard__stream__Writer__write]))(var_output, var_buffer); /* write on <var_output:FileWriter>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_input->class->vft[COLOR_standard__stream__Stream__close]))(var_input); /* close on <var_input:FileReader>*/
}
{
((void(*)(val* self))(var_output->class->vft[COLOR_standard__stream__Stream__close]))(var_output); /* close on <var_output:FileWriter>*/
}
RET_LABEL:;
}
/* method file#Path#open_ro for (self: Path): FileReader */
val* standard___standard__Path___open_ro(val* self) {
val* var /* : FileReader */;
val* var1 /* : FileReader */;
val* var2 /* : String */;
var1 = NEW_standard__FileReader(&type_standard__FileReader);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__file__FileReader__open]))(var1, var2); /* open on <var1:FileReader>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#open_wo for (self: Path): FileWriter */
val* standard___standard__Path___open_wo(val* self) {
val* var /* : FileWriter */;
val* var1 /* : FileWriter */;
val* var2 /* : String */;
var1 = NEW_standard__FileWriter(&type_standard__FileWriter);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__file__FileWriter__open]))(var1, var2); /* open on <var1:FileWriter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#read_all for (self: Path): String */
val* standard___standard__Path___read_all(val* self) {
val* var /* : String */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : String */;
val* var_res /* var res: String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__stream__Reader__read_all]))(var_s); /* read_all on <var_s:FileReader>*/
}
var_res = var2;
{
((void(*)(val* self))(var_s->class->vft[COLOR_standard__stream__Stream__close]))(var_s); /* close on <var_s:FileReader>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#read_lines for (self: Path): Array[String] */
val* standard___standard__Path___read_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__stream__Reader__read_lines]))(var_s); /* read_lines on <var_s:FileReader>*/
}
var_res = var2;
{
((void(*)(val* self))(var_s->class->vft[COLOR_standard__stream__Stream__close]))(var_s); /* close on <var_s:FileReader>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#each_line for (self: Path): LineIterator */
val* standard___standard__Path___each_line(val* self) {
val* var /* : LineIterator */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : LineIterator */;
val* var_res /* var res: LineIterator */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__stream__Reader__each_line]))(var_s); /* each_line on <var_s:FileReader>*/
}
var_res = var2;
{
((void(*)(val* self, short int p0))(var_res->class->vft[COLOR_standard__stream__LineIterator__close_on_finish_61d]))(var_res, 1); /* close_on_finish= on <var_res:LineIterator>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#files for (self: Path): Array[Path] */
val* standard___standard__Path___files(val* self) {
val* var /* : Array[Path] */;
val* var1 /* : Array[Path] */;
val* var_files /* var files: Array[Path] */;
val* var2 /* : String */;
val* var3 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : ArrayIterator[String] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_filename /* var filename: String */;
val* var8 /* : Path */;
val* var9 /* : String */;
val* var10 /* : String */;
var1 = NEW_standard__Array(&type_standard__Array__standard__Path);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Path]>*/
}
var_files = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__file__String__files]))(var2); /* files on <var2:String>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:ArrayIterator[String]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:ArrayIterator[String]>*/
}
var_filename = var7;
var8 = NEW_standard__Path(&type_standard__Path);
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var10 = ((val*(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__file__String___47d]))(var9, var_filename); /* / on <var9:String>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__file__Path__path_61d]))(var8, var10); /* path= on <var8:Path>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:Path>*/
}
{
((void(*)(val* self, val* p0))(var_files->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_files, var8); /* add on <var_files:Array[Path]>*/
}
{
((void(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:ArrayIterator[String]>*/
}
var = var_files;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#rmdir for (self: Path): Bool */
short int standard___standard__Path___rmdir(val* self) {
short int var /* : Bool */;
short int var_ok /* var ok: Bool */;
val* var1 /* : Array[Path] */;
val* var_ /* var : Array[Path] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ArrayIterator[Path] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_file /* var file: Path */;
val* var6 /* : nullable FileStat */;
val* var_stat /* var stat: nullable FileStat */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_10 /* var : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_13 /* var : Bool */;
short int var14 /* : Bool */;
val* var15 /* : String */;
char* var16 /* : NativeString */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
var_ok = 1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__files]))(self); /* files on <self:Path>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Path]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ArrayIterator[Path]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ArrayIterator[Path]>*/
}
var_file = var5;
{
var6 = ((val*(*)(val* self))(var_file->class->vft[COLOR_standard__file__Path__link_stat]))(var_file); /* link_stat on <var_file:Path>*/
}
var_stat = var6;
if (var_stat == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 490);
fatal_exit(1);
} else {
var7 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_standard__file__FileStat__is_dir]))(var_stat); /* is_dir on <var_stat:nullable FileStat>*/
}
if (var7){
{
var9 = ((short int(*)(val* self))(var_file->class->vft[COLOR_standard__file__Path__rmdir]))(var_file); /* rmdir on <var_file:Path>*/
}
var_10 = var9;
if (var9){
var8 = var_ok;
} else {
var8 = var_10;
}
var_ok = var8;
} else {
{
var12 = ((short int(*)(val* self))(var_file->class->vft[COLOR_standard__file__Path__delete]))(var_file); /* delete on <var_file:Path>*/
}
var_13 = var12;
if (var12){
var11 = var_ok;
} else {
var11 = var_13;
}
var_ok = var11;
}
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ArrayIterator[Path]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ArrayIterator[Path]>*/
}
if (var_ok){
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var16 = ((char*(*)(val* self))(var15->class->vft[COLOR_standard__string__Text__to_cstring]))(var15); /* to_cstring on <var15:String>*/
}
var17 = standard__file___NativeString___rmdir(var16);
var_18 = var17;
if (var17){
var14 = var_ok;
} else {
var14 = var_18;
}
var_ok = var14;
} else {
}
var = var_ok;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#== for (self: Path, nullable Object): Bool */
short int standard___standard__Path___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
short int var7 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Path */
cltype = type_standard__Path.color;
idtype = type_standard__Path.id;
if(var_other == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__file__String__simplify_path]))(var3); /* simplify_path on <var3:String>*/
}
{
var5 = ((val*(*)(val* self))(var_other->class->vft[COLOR_standard__file__Path__path]))(var_other); /* path on <var_other:nullable Object(Path)>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__file__String__simplify_path]))(var5); /* simplify_path on <var5:String>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var6); /* == on <var4:String>*/
}
var1 = var7;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#hash for (self: Path): Int */
long standard___standard__Path___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : String */;
val* var2 /* : String */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__file__String__simplify_path]))(var1); /* simplify_path on <var1:String>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__hash]))(var2); /* hash on <var2:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#init for (self: Path) */
void standard___standard__Path___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Path___standard__kernel__Object__init]))(self); /* init on <self:Path>*/
}
RET_LABEL:;
}
/* method file#FileStat#stat for (self: FileStat): NativeFileStat */
val* standard___standard__FileStat___stat(val* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
var1 = self->attrs[COLOR_standard__file__FileStat___stat].val; /* _stat on <self:FileStat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stat");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 518);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#stat= for (self: FileStat, NativeFileStat) */
void standard___standard__FileStat___stat_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__FileStat___stat].val = p0; /* _stat on <self:FileStat> */
RET_LABEL:;
}
/* method file#FileStat#finalized for (self: FileStat): Bool */
short int standard___standard__FileStat___finalized(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__file__FileStat___finalized].s; /* _finalized on <self:FileStat> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#finalized= for (self: FileStat, Bool) */
void standard___standard__FileStat___finalized_61d(val* self, short int p0) {
self->attrs[COLOR_standard__file__FileStat___finalized].s = p0; /* _finalized on <self:FileStat> */
RET_LABEL:;
}
/* method file#FileStat#finalize for (self: FileStat) */
void standard___standard__FileStat___standard__gc__Finalizable__finalize(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : NativeFileStat */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var1 = !var;
if (var1){
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Pointer__free]))(var2); /* free on <var2:NativeFileStat>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__file__FileStat__finalized_61d]))(self, 1); /* finalized= on <self:FileStat>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileStat#last_access_time for (self: FileStat): Int */
long standard___standard__FileStat___last_access_time(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 536);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__atime]))(var3); /* atime on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#atime for (self: FileStat): Int */
long standard___standard__FileStat___atime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__last_access_time]))(self); /* last_access_time on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#last_modification_time for (self: FileStat): Int */
long standard___standard__FileStat___last_modification_time(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 548);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__mtime]))(var3); /* mtime on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#mtime for (self: FileStat): Int */
long standard___standard__FileStat___mtime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__last_modification_time]))(self); /* last_modification_time on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#size for (self: FileStat): Int */
long standard___standard__FileStat___size(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 561);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__size]))(var3); /* size on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_file for (self: FileStat): Bool */
short int standard___standard__FileStat___is_file(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 568);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__is_reg]))(var3); /* is_reg on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_reg for (self: FileStat): Bool */
short int standard___standard__FileStat___is_reg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__is_file]))(self); /* is_file on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_dir for (self: FileStat): Bool */
short int standard___standard__FileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 578);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__is_dir]))(var3); /* is_dir on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_link for (self: FileStat): Bool */
short int standard___standard__FileStat___is_link(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 585);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__is_lnk]))(var3); /* is_lnk on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#last_status_change_time for (self: FileStat): Int */
long standard___standard__FileStat___last_status_change_time(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 594);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__ctime]))(var3); /* ctime on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#ctime for (self: FileStat): Int */
long standard___standard__FileStat___ctime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__last_status_change_time]))(self); /* last_status_change_time on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#mode for (self: FileStat): Int */
long standard___standard__FileStat___mode(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 606);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__mode]))(var3); /* mode on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_chr for (self: FileStat): Bool */
short int standard___standard__FileStat___is_chr(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 613);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__is_chr]))(var3); /* is_chr on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_blk for (self: FileStat): Bool */
short int standard___standard__FileStat___is_blk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 620);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__is_blk]))(var3); /* is_blk on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_fifo for (self: FileStat): Bool */
short int standard___standard__FileStat___is_fifo(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 627);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__is_fifo]))(var3); /* is_fifo on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_sock for (self: FileStat): Bool */
short int standard___standard__FileStat___is_sock(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 634);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__file__NativeFileStat__is_sock]))(var3); /* is_sock on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#init for (self: FileStat) */
void standard___standard__FileStat___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FileStat___standard__kernel__Object__init]))(self); /* init on <self:FileStat>*/
}
RET_LABEL:;
}
/* method file#Text#to_path for (self: Text): Path */
val* standard__file___Text___to_path(val* self) {
val* var /* : Path */;
val* var1 /* : Path */;
val* var2 /* : String */;
var1 = NEW_standard__Path(&type_standard__Path);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__file__Path__path_61d]))(var1, var2); /* path= on <var1:Path>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Path>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_exists for (self: String): Bool */
short int standard__file___String___file_exists(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = standard__file___NativeString___file_exists(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_stat for (self: String): nullable FileStat */
val* standard__file___String___file_stat(val* self) {
val* var /* : nullable FileStat */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var3 /* : Bool */;
val* var4 /* : FileStat */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = standard__file___NativeString___file_stat(var1);
var_stat = var2;
{
var3 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_standard__FileStat(&type_standard__FileStat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__file__FileStat__stat_61d]))(var4, var_stat); /* stat= on <var4:FileStat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:FileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_lstat for (self: String): nullable FileStat */
val* standard__file___String___file_lstat(val* self) {
val* var /* : nullable FileStat */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var3 /* : Bool */;
val* var4 /* : FileStat */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = standard__file___NativeString___file_lstat(var1);
var_stat = var2;
{
var3 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_standard__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_standard__FileStat(&type_standard__FileStat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__file__FileStat__stat_61d]))(var4, var_stat); /* stat= on <var4:FileStat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:FileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_delete for (self: String): Bool */
short int standard__file___String___file_delete(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = standard__file___NativeString___file_delete(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_copy_to for (self: String, String) */
void standard__file___String___file_copy_to(val* self, val* p0) {
val* var_dest /* var dest: String */;
val* var /* : Path */;
val* var1 /* : Path */;
var_dest = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Text__to_path]))(self); /* to_path on <self:String>*/
}
{
var1 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_standard__file__Text__to_path]))(var_dest); /* to_path on <var_dest:String>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__file__Path__copy]))(var, var1); /* copy on <var:Path>*/
}
RET_LABEL:;
}
/* method file#String#strip_extension for (self: String, String): String */
val* standard__file___String___strip_extension(val* self, val* p0) {
val* var /* : String */;
val* var_ext /* var ext: String */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var8 /* : Text */;
var_ext = p0;
{
var1 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__Text__has_suffix]))(self, var_ext); /* has_suffix on <self:String>*/
}
if (var1){
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
var3 = ((long(*)(val* self))(var_ext->class->vft[COLOR_standard__string__Text__length]))(var_ext); /* length on <var_ext:String>*/
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
var8 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var4); /* substring on <self:String>*/
}
var = var8;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#basename for (self: String, String): String */
val* standard__file___String___basename(val* self, val* p0) {
val* var /* : String */;
val* var_ext /* var ext: String */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
char var19 /* : Char */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : SequenceRead[Char] */;
long var34 /* : Int */;
val* var35 /* : nullable Object */;
long var_pos /* var pos: Int */;
val* var_n /* var n: String */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
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
val* var57 /* : Text */;
val* var58 /* : String */;
var_ext = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
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
var_l = var2;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var13 = var_l > 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var14, var_l); /* [] on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var15,'/') on <var15:nullable Object(Char)> */
var19 = (char)((long)(var15)>>2);
var18 = (var15 != NULL) && (var19 == '/');
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var6 = var16;
} else {
var6 = var_;
}
if (var6){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var26 = var_l - 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_l = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_l,0l) on <var_l:Int> */
var29 = var_l == 0l;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "/";
var32 = standard___standard__NativeString___to_s_with_length(var31, 1l);
var30 = var32;
varonce = var30;
}
var = var30;
goto RET_LABEL;
} else {
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var35 = (val*)((long)('/')<<2|2);
var34 = ((long(*)(val* self, val* p0, long p1))((((long)var33&3)?class_info[((long)var33&3)]:var33->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of_from]))(var33, var35, var_l); /* last_index_of_from on <var33:SequenceRead[Char]>*/
}
var_pos = var34;
var_n = self;
{
{ /* Inline kernel#Int#>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var38 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var42 = var_pos >= 0l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var49 = var_pos + 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_l,var_pos) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var52 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var56 = var_l - var_pos;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var43, var50); /* substring on <self:String>*/
}
var_n = var57;
} else {
}
{
var58 = ((val*(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__file__String__strip_extension]))(var_n, var_ext); /* strip_extension on <var_n:String>*/
}
var = var58;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#dirname for (self: String): String */
val* standard__file___String___dirname(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
char var19 /* : Char */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : SequenceRead[Char] */;
long var28 /* : Int */;
val* var29 /* : nullable Object */;
long var_pos /* var pos: Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : Text */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
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
var_l = var2;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var13 = var_l > 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var14, var_l); /* [] on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var15,'/') on <var15:nullable Object(Char)> */
var19 = (char)((long)(var15)>>2);
var18 = (var15 != NULL) && (var19 == '/');
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var6 = var16;
} else {
var6 = var_;
}
if (var6){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var26 = var_l - 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_l = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var29 = (val*)((long)('/')<<2|2);
var28 = ((long(*)(val* self, val* p0, long p1))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of_from]))(var27, var29, var_l); /* last_index_of_from on <var27:SequenceRead[Char]>*/
}
var_pos = var28;
{
{ /* Inline kernel#Int#> (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var36 = var_pos > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
var37 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var_pos); /* substring on <self:String>*/
}
var = var37;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#== (var_pos,0l) on <var_pos:Int> */
var40 = var_pos == 0l;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "/";
var43 = standard___standard__NativeString___to_s_with_length(var42, 1l);
var41 = var43;
varonce = var41;
}
var = var41;
goto RET_LABEL;
} else {
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = ".";
var47 = standard___standard__NativeString___to_s_with_length(var46, 1l);
var45 = var47;
varonce44 = var45;
}
var = var45;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method file#String#realpath for (self: String): String */
val* standard__file___String___realpath(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var_cs /* var cs: NativeString */;
val* var3 /* : FlatString */;
val* var_res /* var res: FlatString */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = standard__file___NativeString___file_realpath(var1);
var_cs = var2;
var3 = standard___standard__NativeString___to_s_with_copy(var_cs);
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#simplify_path for (self: String): String */
val* standard__file___String___simplify_path(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : Array[String] */;
val* var_a /* var a: Array[String] */;
val* var5 /* : Array[String] */;
val* var_a2 /* var a2: Array[String] */;
val* var_ /* var : Array[String] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[String] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_x /* var x: String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
short int var20 /* : Bool */;
short int var_21 /* var : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
val* var35 /* : nullable Object */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
short int var48 /* : Bool */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var_53 /* var : Bool */;
val* var54 /* : nullable Object */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string_search__Text__split_with]))(self, var1); /* split_with on <self:String>*/
}
var_a = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[String]>*/
}
var_a2 = var5;
var_ = var_a;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[String]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[String]>*/
}
var_x = var9;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ".";
var13 = standard___standard__NativeString___to_s_with_length(var12, 1l);
var11 = var13;
varonce10 = var11;
}
{
var14 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var11); /* == on <var_x:String>*/
}
if (var14){
goto BREAK_label;
} else {
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "";
var19 = standard___standard__NativeString___to_s_with_length(var18, 0l);
var17 = var19;
varonce16 = var17;
}
{
var20 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var17); /* == on <var_x:String>*/
}
var_21 = var20;
if (var20){
{
var22 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var23 = !var22;
var15 = var23;
} else {
var15 = var_21;
}
if (var15){
goto BREAK_label;
} else {
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "..";
var29 = standard___standard__NativeString___to_s_with_length(var28, 2l);
var27 = var29;
varonce26 = var27;
}
{
var30 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var27); /* == on <var_x:String>*/
}
var_31 = var30;
if (var30){
{
var32 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var33 = !var32;
var25 = var33;
} else {
var25 = var_31;
}
var_34 = var25;
if (var25){
{
var35 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var_a2); /* last on <var_a2:Array[String]>*/
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "..";
var39 = standard___standard__NativeString___to_s_with_length(var38, 2l);
var37 = var39;
varonce36 = var37;
}
{
var40 = ((short int(*)(val* self, val* p0))(var35->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var35, var37); /* != on <var35:nullable Object(String)>*/
}
var24 = var40;
} else {
var24 = var_34;
}
if (var24){
{
var41 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var_a2); /* pop on <var_a2:Array[String]>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_a2->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_a2, var_x); /* push on <var_a2:Array[String]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[String]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[String]>*/
}
{
var43 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
if (var43){
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = ".";
var47 = standard___standard__NativeString___to_s_with_length(var46, 1l);
var45 = var47;
varonce44 = var45;
}
var = var45;
goto RET_LABEL;
} else {
}
{
var49 = ((long(*)(val* self))(var_a2->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_a2); /* length on <var_a2:Array[String]>*/
}
{
{ /* Inline kernel#Int#== (var49,1l) on <var49:Int> */
var52 = var49 == 1l;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_53 = var50;
if (var50){
{
var54 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_a2); /* first on <var_a2:Array[String]>*/
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "";
var58 = standard___standard__NativeString___to_s_with_length(var57, 0l);
var56 = var58;
varonce55 = var56;
}
{
var59 = ((short int(*)(val* self, val* p0))(var54->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var54, var56); /* == on <var54:nullable Object(String)>*/
}
var48 = var59;
} else {
var48 = var_53;
}
if (var48){
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "/";
var63 = standard___standard__NativeString___to_s_with_length(var62, 1l);
var61 = var63;
varonce60 = var61;
}
var = var61;
goto RET_LABEL;
} else {
}
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "/";
var67 = standard___standard__NativeString___to_s_with_length(var66, 1l);
var65 = var67;
varonce64 = var65;
}
{
var68 = ((val*(*)(val* self, val* p0))(var_a2->class->vft[COLOR_standard__string__Collection__join]))(var_a2, var65); /* join on <var_a2:Array[String]>*/
}
var = var68;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#join_path for (self: String, String): String */
val* standard__file___String___join_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : SequenceRead[Char] */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
char var8 /* : Char */;
char var9 /* : Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
val* var14 /* : String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
var_path = p0;
{
var1 = ((short int(*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__is_empty]))(var_path); /* is_empty on <var_path:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Text__is_empty]))(self); /* is_empty on <self:String>*/
}
if (var2){
var = var_path;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var4 = ((val*(*)(val* self, long p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var3, 0l); /* [] on <var3:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var4,'/') on <var4:nullable Object(Char)> */
var8 = (char)((long)(var4)>>2);
var7 = (var4 != NULL) && (var8 == '/');
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = var_path;
goto RET_LABEL;
} else {
}
{
var9 = ((char(*)(val* self))(self->class->vft[COLOR_standard__string__Text__last]))(self); /* last on <self:String>*/
}
{
{ /* Inline kernel#Char#== (var9,'/') on <var9:Char> */
var12 = var9 == '/';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (unlikely(varonce==NULL)) {
var13 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
} else {
var13 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var13)->values[0]=self;
((struct instance_standard__NativeArray*)var13)->values[1]=var_path;
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
var = var14;
goto RET_LABEL;
} else {
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "/";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[1]=var18;
} else {
var16 = varonce15;
varonce15 = NULL;
}
((struct instance_standard__NativeArray*)var16)->values[0]=self;
((struct instance_standard__NativeArray*)var16)->values[2]=var_path;
{
var21 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#to_program_name for (self: String): String */
val* standard__file___String___to_program_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
short int var4 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce5;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__Text__has_prefix]))(self, var1); /* has_prefix on <self:String>*/
}
if (var4){
var = self;
goto RET_LABEL;
} else {
if (unlikely(varonce5==NULL)) {
var6 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "./";
var10 = standard___standard__NativeString___to_s_with_length(var9, 2l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce5;
varonce5 = NULL;
}
((struct instance_standard__NativeArray*)var6)->values[1]=self;
{
var11 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce5 = var6;
var = var11;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#String#/ for (self: String, String): String */
val* standard__file___String____47d(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
var_path = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__String__join_path]))(self, var_path); /* join_path on <self:String>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#relpath for (self: String, String): String */
val* standard__file___String___relpath(val* self, val* p0) {
val* var /* : String */;
val* var_dest /* var dest: String */;
val* var1 /* : Sys */;
val* var2 /* : String */;
val* var_cwd /* var cwd: String */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : Array[String] */;
val* var_from /* var from: Array[String] */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : Array[String] */;
val* var_to /* var to: Array[String] */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
val* var29 /* : nullable Object */;
val* var30 /* : nullable Object */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var33 /* : nullable Object */;
long var34 /* : Int */;
long var_from_len /* var from_len: Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var50 /* : Int */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var_up /* var up: String */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var_res /* var res: String */;
var_dest = p0;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__file__Sys__getcwd]))(var1); /* getcwd on <var1:Sys>*/
}
var_cwd = var2;
{
var3 = ((val*(*)(val* self, val* p0))(var_cwd->class->vft[COLOR_standard__file__String___47d]))(var_cwd, self); /* / on <var_cwd:String>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__file__String__simplify_path]))(var3); /* simplify_path on <var3:String>*/
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "/";
var7 = standard___standard__NativeString___to_s_with_length(var6, 1l);
var5 = var7;
varonce = var5;
}
{
var8 = ((val*(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__string_search__Text__split]))(var4, var5); /* split on <var4:String>*/
}
var_from = var8;
{
var9 = ((val*(*)(val* self))(var_from->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var_from); /* last on <var_from:Array[String]>*/
}
{
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_standard__string__Text__is_empty]))(var9); /* is_empty on <var9:nullable Object(String)>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))(var_from->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var_from); /* pop on <var_from:Array[String]>*/
}
} else {
}
{
var12 = ((val*(*)(val* self, val* p0))(var_cwd->class->vft[COLOR_standard__file__String___47d]))(var_cwd, var_dest); /* / on <var_cwd:String>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__file__String__simplify_path]))(var12); /* simplify_path on <var12:String>*/
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "/";
var17 = standard___standard__NativeString___to_s_with_length(var16, 1l);
var15 = var17;
varonce14 = var15;
}
{
var18 = ((val*(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__string_search__Text__split]))(var13, var15); /* split on <var13:String>*/
}
var_to = var18;
{
var19 = ((val*(*)(val* self))(var_to->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var_to); /* last on <var_to:Array[String]>*/
}
{
var20 = ((short int(*)(val* self))(var19->class->vft[COLOR_standard__string__Text__is_empty]))(var19); /* is_empty on <var19:nullable Object(String)>*/
}
if (var20){
{
var21 = ((val*(*)(val* self))(var_to->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var_to); /* pop on <var_to:Array[String]>*/
}
} else {
}
for(;;) {
{
var24 = ((short int(*)(val* self))(var_from->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_from); /* is_empty on <var_from:Array[String]>*/
}
var25 = !var24;
var_ = var25;
if (var25){
{
var26 = ((short int(*)(val* self))(var_to->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_to); /* is_empty on <var_to:Array[String]>*/
}
var27 = !var26;
var23 = var27;
} else {
var23 = var_;
}
var_28 = var23;
if (var23){
{
var29 = ((val*(*)(val* self))(var_from->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_from); /* first on <var_from:Array[String]>*/
}
{
var30 = ((val*(*)(val* self))(var_to->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_to); /* first on <var_to:Array[String]>*/
}
{
var31 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var29, var30); /* == on <var29:nullable Object(String)>*/
}
var22 = var31;
} else {
var22 = var_28;
}
if (var22){
{
var32 = ((val*(*)(val* self))(var_from->class->vft[COLOR_standard__abstract_collection__Sequence__shift]))(var_from); /* shift on <var_from:Array[String]>*/
}
{
var33 = ((val*(*)(val* self))(var_to->class->vft[COLOR_standard__abstract_collection__Sequence__shift]))(var_to); /* shift on <var_to:Array[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var34 = ((long(*)(val* self))(var_from->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_from); /* length on <var_from:Array[String]>*/
}
var_from_len = var34;
{
{ /* Inline kernel#Int#== (var_from_len,0l) on <var_from_len:Int> */
var37 = var_from_len == 0l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "/";
var41 = standard___standard__NativeString___to_s_with_length(var40, 1l);
var39 = var41;
varonce38 = var39;
}
{
var42 = ((val*(*)(val* self, val* p0))(var_to->class->vft[COLOR_standard__string__Collection__join]))(var_to, var39); /* join on <var_to:Array[String]>*/
}
var = var42;
goto RET_LABEL;
} else {
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "../";
var46 = standard___standard__NativeString___to_s_with_length(var45, 3l);
var44 = var46;
varonce43 = var44;
}
{
{ /* Inline kernel#Int#- (var_from_len,1l) on <var_from_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var50 = var_from_len - 1l;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
var51 = ((val*(*)(val* self, long p0))(var44->class->vft[COLOR_standard__string__String___42d]))(var44, var47); /* * on <var44:String>*/
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "..";
var55 = standard___standard__NativeString___to_s_with_length(var54, 2l);
var53 = var55;
varonce52 = var53;
}
{
var56 = ((val*(*)(val* self, val* p0))(var51->class->vft[COLOR_standard__string__String___43d]))(var51, var53); /* + on <var51:String>*/
}
var_up = var56;
{
var57 = ((short int(*)(val* self))(var_to->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_to); /* is_empty on <var_to:Array[String]>*/
}
if (var57){
var = var_up;
goto RET_LABEL;
} else {
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "/";
var61 = standard___standard__NativeString___to_s_with_length(var60, 1l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((val*(*)(val* self, val* p0))(var_up->class->vft[COLOR_standard__string__String___43d]))(var_up, var59); /* + on <var_up:String>*/
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "/";
var66 = standard___standard__NativeString___to_s_with_length(var65, 1l);
var64 = var66;
varonce63 = var64;
}
{
var67 = ((val*(*)(val* self, val* p0))(var_to->class->vft[COLOR_standard__string__Collection__join]))(var_to, var64); /* join on <var_to:Array[String]>*/
}
{
var68 = ((val*(*)(val* self, val* p0))(var62->class->vft[COLOR_standard__string__String___43d]))(var62, var67); /* + on <var62:String>*/
}
var_res = var68;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#mkdir for (self: String): nullable Error */
val* standard__file___String___mkdir(val* self) {
val* var /* : nullable Error */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : Array[String] */;
val* var_dirs /* var dirs: Array[String] */;
val* var5 /* : FlatBuffer */;
val* var_path /* var path: FlatBuffer */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
val* var_error /* var error: nullable Error */;
val* var_ /* var : Array[String] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[String] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_d /* var d: String */;
short int var13 /* : Bool */;
val* var14 /* : String */;
char* var15 /* : NativeString */;
short int var16 /* : Bool */;
short int var_res /* var res: Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : IOError */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
val* var34 /* : Sys */;
val* var36 /* : Sys */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string_search__Text__split_with]))(self, var1); /* split_with on <self:String>*/
}
var_dirs = var4;
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
var_path = var5;
{
var6 = ((short int(*)(val* self))(var_dirs->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_dirs); /* is_empty on <var_dirs:Array[String]>*/
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self, long p0))(var_dirs->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_dirs, 0l); /* [] on <var_dirs:Array[String]>*/
}
{
var8 = ((short int(*)(val* self))(var7->class->vft[COLOR_standard__string__Text__is_empty]))(var7); /* is_empty on <var7:nullable Object(String)>*/
}
if (var8){
{
((void(*)(val* self, char p0))(var_path->class->vft[COLOR_standard__string__Buffer__add]))(var_path, '/'); /* add on <var_path:FlatBuffer>*/
}
} else {
}
var_error = ((val*)NULL);
var_ = var_dirs;
{
var9 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[String]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[String]>*/
}
var_d = var12;
{
var13 = ((short int(*)(val* self))(var_d->class->vft[COLOR_standard__string__Text__is_empty]))(var_d); /* is_empty on <var_d:String>*/
}
if (var13){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_path->class->vft[COLOR_standard__string__Buffer__append]))(var_path, var_d); /* append on <var_path:FlatBuffer>*/
}
{
((void(*)(val* self, char p0))(var_path->class->vft[COLOR_standard__string__Buffer__add]))(var_path, '/'); /* add on <var_path:FlatBuffer>*/
}
{
var14 = ((val*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
{
var15 = ((char*(*)(val* self))(var14->class->vft[COLOR_standard__string__Text__to_cstring]))(var14); /* to_cstring on <var14:String>*/
}
var16 = standard__file___NativeString___file_mkdir(var15);
var_res = var16;
var18 = !var_res;
var_19 = var18;
if (var18){
if (var_error == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_error->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_error, ((val*)NULL)); /* == on <var_error:nullable Error>*/
var20 = var21;
}
var17 = var20;
} else {
var17 = var_19;
}
if (var17){
var22 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce23==NULL)) {
var24 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Cannot create directory `";
var28 = standard___standard__NativeString___to_s_with_length(var27, 25l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "`: ";
var32 = standard___standard__NativeString___to_s_with_length(var31, 3l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var24)->values[2]=var30;
} else {
var24 = varonce23;
varonce23 = NULL;
}
{
var33 = ((val*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
((struct instance_standard__NativeArray*)var24)->values[1]=var33;
{
{ /* Inline kernel#Object#sys (self) on <self:String> */
var36 = glob_sys;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var37 = ((long(*)(val* self))(var34->class->vft[COLOR_standard__kernel__Sys__errno]))(var34); /* errno on <var34:Sys>*/
}
var38 = standard__string___Int___strerror(var37);
((struct instance_standard__NativeArray*)var24)->values[3]=var38;
{
var39 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__error__Error__message_61d]))(var22, var39); /* message= on <var22:IOError>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:IOError>*/
}
var_error = var22;
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[String]>*/
}
} else {
goto BREAK_label40;
}
}
BREAK_label40: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[String]>*/
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#rmdir for (self: String): nullable Error */
val* standard__file___String___rmdir(val* self) {
val* var /* : nullable Error */;
val* var1 /* : Path */;
short int var2 /* : Bool */;
short int var_res /* var res: Bool */;
val* var3 /* : IOError */;
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
val* var13 /* : Sys */;
val* var15 /* : Sys */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_error /* var error: IOError */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__file__Text__to_path]))(self); /* to_path on <self:String>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__file__Path__rmdir]))(var1); /* rmdir on <var1:Path>*/
}
var_res = var2;
if (var_res){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var3 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "Cannot change remove `";
var8 = standard___standard__NativeString___to_s_with_length(var7, 22l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "`: ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 3l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var4)->values[1]=self;
{
{ /* Inline kernel#Object#sys (self) on <self:String> */
var15 = glob_sys;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
var16 = ((long(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Sys__errno]))(var13); /* errno on <var13:Sys>*/
}
var17 = standard__string___Int___strerror(var16);
((struct instance_standard__NativeArray*)var4)->values[3]=var17;
{
var18 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__error__Error__message_61d]))(var3, var18); /* message= on <var3:IOError>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:IOError>*/
}
var_error = var3;
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#chdir for (self: String): nullable Error */
val* standard__file___String___chdir(val* self) {
val* var /* : nullable Error */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
short int var_res /* var res: Bool */;
val* var3 /* : IOError */;
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
val* var13 /* : Sys */;
val* var15 /* : Sys */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_error /* var error: IOError */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = standard__file___NativeString___file_chdir(var1);
var_res = var2;
if (var_res){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var3 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "Cannot change directory to `";
var8 = standard___standard__NativeString___to_s_with_length(var7, 28l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "`: ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 3l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var4)->values[1]=self;
{
{ /* Inline kernel#Object#sys (self) on <self:String> */
var15 = glob_sys;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
var16 = ((long(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Sys__errno]))(var13); /* errno on <var13:Sys>*/
}
var17 = standard__string___Int___strerror(var16);
((struct instance_standard__NativeArray*)var4)->values[3]=var17;
{
var18 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__error__Error__message_61d]))(var3, var18); /* message= on <var3:IOError>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:IOError>*/
}
var_error = var3;
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_extension for (self: String): nullable String */
val* standard__file___String___file_extension(val* self) {
val* var /* : nullable String */;
val* var1 /* : SequenceRead[Char] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
long var_last_slash /* var last_slash: Int */;
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
long var15 /* : Int */;
val* var16 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var3 = (val*)((long)('.')<<2|2);
var2 = ((long(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of]))(var1, var3); /* last_index_of on <var1:SequenceRead[Char]>*/
}
var_last_slash = var2;
{
{ /* Inline kernel#Int#> (var_last_slash,0l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var7 = var_last_slash > 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Int#+ (var_last_slash,1l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var14 = var_last_slash + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
var16 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var8, var15); /* substring on <self:String>*/
}
var = var16;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#String#files for (self: String): Array[String] */
val* standard__file___String___files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* ret_var;
ret_var = file___String_files___impl(var_for_c_0);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::Object::init */
struct nitni_instance * file___new_Array_of_String(  ) {
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
void file___Array_of_String_add( struct nitni_instance * recv, struct nitni_instance * item ) {
{
((void(*)(val* self, val* p0))(recv->value->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(recv->value, item->value); /* add on <recv->value:Array[String]>*/
}
}
/* nitni callback for standard::Object::to_s */
struct nitni_instance * file___NativeString_to_s( char* recv ) {
val* var /* : String */;
var = standard___standard__NativeString___Object__to_s(recv);
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* nitni callback for standard::Text::to_cstring */
char* file___String_to_cstring( struct nitni_instance * recv ) {
char* var /* : NativeString */;
{
var = ((char*(*)(val* self))(recv->value->class->vft[COLOR_standard__string__Text__to_cstring]))(recv->value); /* to_cstring on <recv->value:String>*/
}
return var;
}
/* method file#NativeString#file_exists for (self: NativeString): Bool */
short int standard__file___NativeString___file_exists(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
var1 = string_NativeString_NativeString_file_exists_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_stat for (self: NativeString): NativeFileStat */
val* standard__file___NativeString___file_stat(char* self) {
val* var /* : NativeFileStat */;
void* var1 /* : NativeFileStat for extern */;
val* var2 /* : NativeFileStat */;
var1 = string_NativeString_NativeString_file_stat_0(self);
var2 = BOX_standard__Pointer(var1); /* boxing NativeFileStat */
var2->type = &type_standard__file__NativeFileStat;
var2->class = &class_standard__file__NativeFileStat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_lstat for (self: NativeString): NativeFileStat */
val* standard__file___NativeString___file_lstat(char* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
val* var2 /* : NativeFileStat */;
var1 = file___NativeString_file_lstat___impl(self);
var2 = BOX_standard__Pointer(var1); /* boxing NativeFileStat */
var2->type = &type_standard__file__NativeFileStat;
var2->class = &class_standard__file__NativeFileStat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_mkdir for (self: NativeString): Bool */
short int standard__file___NativeString___file_mkdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
var1 = string_NativeString_NativeString_file_mkdir_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#rmdir for (self: NativeString): Bool */
short int standard__file___NativeString___rmdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file___NativeString_rmdir___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_delete for (self: NativeString): Bool */
short int standard__file___NativeString___file_delete(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
var1 = string_NativeString_NativeString_file_delete_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_chdir for (self: NativeString): Bool */
short int standard__file___NativeString___file_chdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
var1 = string_NativeString_NativeString_file_chdir_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_realpath for (self: NativeString): NativeString */
char* standard__file___NativeString___file_realpath(char* self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = file_NativeString_realpath(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#mode for (self: NativeFileStat): Int */
long standard__file___standard__file__NativeFileStat___mode(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file_FileStat_FileStat_mode_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#atime for (self: NativeFileStat): Int */
long standard__file___standard__file__NativeFileStat___atime(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file_FileStat_FileStat_atime_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#ctime for (self: NativeFileStat): Int */
long standard__file___standard__file__NativeFileStat___ctime(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file_FileStat_FileStat_ctime_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#mtime for (self: NativeFileStat): Int */
long standard__file___standard__file__NativeFileStat___mtime(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file_FileStat_FileStat_mtime_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#size for (self: NativeFileStat): Int */
long standard__file___standard__file__NativeFileStat___size(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file_FileStat_FileStat_size_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_reg for (self: NativeFileStat): Bool */
short int standard__file___standard__file__NativeFileStat___is_reg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file___NativeFileStat_is_reg___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_dir for (self: NativeFileStat): Bool */
short int standard__file___standard__file__NativeFileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file___NativeFileStat_is_dir___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_chr for (self: NativeFileStat): Bool */
short int standard__file___standard__file__NativeFileStat___is_chr(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file___NativeFileStat_is_chr___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_blk for (self: NativeFileStat): Bool */
short int standard__file___standard__file__NativeFileStat___is_blk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file___NativeFileStat_is_blk___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_fifo for (self: NativeFileStat): Bool */
short int standard__file___standard__file__NativeFileStat___is_fifo(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file___NativeFileStat_is_fifo___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_lnk for (self: NativeFileStat): Bool */
short int standard__file___standard__file__NativeFileStat___is_lnk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file___NativeFileStat_is_lnk___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_sock for (self: NativeFileStat): Bool */
short int standard__file___standard__file__NativeFileStat___is_sock(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file___NativeFileStat_is_sock___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_read for (self: NativeFile, NativeString, Int): Int */
long standard__file___standard__file__NativeFile___io_read(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_io_read_2(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_write for (self: NativeFile, NativeString, Int): Int */
long standard__file___standard__file__NativeFile___io_write(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_io_write_2(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_close for (self: NativeFile): Int */
long standard__file___standard__file__NativeFile___io_close(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_io_close_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#file_stat for (self: NativeFile): NativeFileStat */
val* standard__file___standard__file__NativeFile___file_stat(val* self) {
val* var /* : NativeFileStat */;
void* var1 /* : NativeFileStat for extern */;
void* var2 /* : NativeFile for extern */;
val* var3 /* : NativeFileStat */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_file_stat_0(var2);
var3 = BOX_standard__Pointer(var1); /* boxing NativeFileStat */
var3->type = &type_standard__file__NativeFileStat;
var3->class = &class_standard__file__NativeFileStat;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#fileno for (self: NativeFile): Int */
long standard__file___standard__file__NativeFile___fileno(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file___NativeFile_fileno___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#flush for (self: NativeFile): Int */
long standard__file___standard__file__NativeFile___flush(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = fflush(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#set_buffering_type for (self: NativeFile, Int, Int): Int */
long standard__file___standard__file__NativeFile___set_buffering_type(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_set_buffering_type_0(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_read for (self: NativeFile, NativeString): NativeFile */
val* standard__file___standard__file__NativeFile___io_open_read(val* self, char* p0) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_io_open_read_1(p0);
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_write for (self: NativeFile, NativeString): NativeFile */
val* standard__file___standard__file__NativeFile___io_open_write(val* self, char* p0) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_io_open_write_1(p0);
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdin for (self: NativeFile): NativeFile */
val* standard__file___standard__file__NativeFile___native_stdin(val* self) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stdin_0();
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdout for (self: NativeFile): NativeFile */
val* standard__file___standard__file__NativeFile___native_stdout(val* self) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stdout_0();
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stderr for (self: NativeFile): NativeFile */
val* standard__file___standard__file__NativeFile___native_stderr(val* self) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stderr_0();
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#stdin for (self: Sys): PollableReader */
val* standard__file___Sys___stdin(val* self) {
val* var /* : PollableReader */;
short int var1 /* : Bool */;
val* var2 /* : PollableReader */;
val* var3 /* : Stdin */;
var1 = self->attrs[COLOR_standard__file__Sys___stdin].val != NULL; /* _stdin on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__file__Sys___stdin].val; /* _stdin on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdin");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1110);
fatal_exit(1);
}
} else {
var3 = NEW_standard__Stdin(&type_standard__Stdin);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Stdin>*/
}
self->attrs[COLOR_standard__file__Sys___stdin].val = var3; /* _stdin on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Sys#stdin= for (self: Sys, PollableReader) */
void standard__file___Sys___stdin_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__Sys___stdin].val = p0; /* _stdin on <self:Sys> */
RET_LABEL:;
}
/* method file#Sys#stdout for (self: Sys): Writer */
val* standard__file___Sys___stdout(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stdout */;
var1 = self->attrs[COLOR_standard__file__Sys___stdout].val != NULL; /* _stdout on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1113);
fatal_exit(1);
}
} else {
var3 = NEW_standard__Stdout(&type_standard__Stdout);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Stdout>*/
}
self->attrs[COLOR_standard__file__Sys___stdout].val = var3; /* _stdout on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Sys#stdout= for (self: Sys, Writer) */
void standard__file___Sys___stdout_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__Sys___stdout].val = p0; /* _stdout on <self:Sys> */
RET_LABEL:;
}
/* method file#Sys#stderr for (self: Sys): Writer */
val* standard__file___Sys___stderr(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stderr */;
var1 = self->attrs[COLOR_standard__file__Sys___stderr].val != NULL; /* _stderr on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__file__Sys___stderr].val; /* _stderr on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1116);
fatal_exit(1);
}
} else {
var3 = NEW_standard__Stderr(&type_standard__Stderr);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Stderr>*/
}
self->attrs[COLOR_standard__file__Sys___stderr].val = var3; /* _stderr on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Sys#stderr= for (self: Sys, Writer) */
void standard__file___Sys___stderr_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__Sys___stderr].val = p0; /* _stderr on <self:Sys> */
RET_LABEL:;
}
/* method file#Sys#buffer_mode_full for (self: Sys): Int */
long standard__file___Sys___buffer_mode_full(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = file_Sys_Sys_buffer_mode_full_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#buffer_mode_line for (self: Sys): Int */
long standard__file___Sys___buffer_mode_line(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = file_Sys_Sys_buffer_mode_line_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#buffer_mode_none for (self: Sys): Int */
long standard__file___Sys___buffer_mode_none(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = file_Sys_Sys_buffer_mode_none_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#poll for (self: Sys, Sequence[FileStream]): nullable FileStream */
val* standard__file___Sys___poll(val* self, val* p0) {
val* var /* : nullable FileStream */;
val* var_streams /* var streams: Sequence[FileStream] */;
val* var1 /* : Array[Int] */;
val* var_in_fds /* var in_fds: Array[Int] */;
val* var2 /* : Array[Int] */;
val* var_out_fds /* var out_fds: Array[Int] */;
val* var3 /* : HashMap[Int, FileStream] */;
val* var_fd_to_stream /* var fd_to_stream: HashMap[Int, FileStream] */;
val* var_ /* var : Sequence[FileStream] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[FileStream] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_s /* var s: FileStream */;
long var8 /* : Int */;
long var_fd /* var fd: Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : nullable Object */;
val* var15 /* : nullable Object */;
val* var16 /* : nullable Int */;
val* var_polled_fd /* var polled_fd: nullable Int */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
var_streams = p0;
var1 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Int]>*/
}
var_in_fds = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[Int]>*/
}
var_out_fds = var2;
var3 = NEW_standard__HashMap(&type_standard__HashMap__standard__Int__standard__FileStream);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:HashMap[Int, FileStream]>*/
}
var_fd_to_stream = var3;
var_ = var_streams;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[FileStream]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[FileStream]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[FileStream]>*/
}
var_s = var7;
{
var8 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__file__FileStream__fd]))(var_s); /* fd on <var_s:FileStream>*/
}
var_fd = var8;
/* <var_s:FileStream> isa FileReader */
cltype = type_standard__FileReader.color;
idtype = type_standard__FileReader.id;
if(cltype >= var_s->type->table_size) {
var9 = 0;
} else {
var9 = var_s->type->type_table[cltype] == idtype;
}
if (var9){
{
var10 = (val*)(var_fd<<2|1);
((void(*)(val* self, val* p0))(var_in_fds->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_in_fds, var10); /* add on <var_in_fds:Array[Int]>*/
}
} else {
}
/* <var_s:FileStream> isa FileWriter */
cltype12 = type_standard__FileWriter.color;
idtype13 = type_standard__FileWriter.id;
if(cltype12 >= var_s->type->table_size) {
var11 = 0;
} else {
var11 = var_s->type->type_table[cltype12] == idtype13;
}
if (var11){
{
var14 = (val*)(var_fd<<2|1);
((void(*)(val* self, val* p0))(var_out_fds->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_out_fds, var14); /* add on <var_out_fds:Array[Int]>*/
}
} else {
}
{
var15 = (val*)(var_fd<<2|1);
((void(*)(val* self, val* p0, val* p1))(var_fd_to_stream->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_fd_to_stream, var15, var_s); /* []= on <var_fd_to_stream:HashMap[Int, FileStream]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[FileStream]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[FileStream]>*/
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_standard__file__Sys__intern_poll]))(self, var_in_fds, var_out_fds); /* intern_poll on <self:Sys>*/
}
var_polled_fd = var16;
if (var_polled_fd == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_polled_fd,((val*)NULL)) on <var_polled_fd:nullable Int> */
var20 = 0; /* incompatible types Int vs. null; cannot be NULL */
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var21 = ((val*(*)(val* self, val* p0))(var_fd_to_stream->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_fd_to_stream, var_polled_fd); /* [] on <var_fd_to_stream:HashMap[Int, FileStream]>*/
}
var = var21;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#Sys#intern_poll for (self: Sys, Array[Int], Array[Int]): nullable Int */
val* standard__file___Sys___intern_poll(val* self, val* p0, val* p1) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
struct nitni_instance* var_for_c_2;
var_for_c_2 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_2->value = p1;
struct nitni_instance* ret_var;
ret_var = file___Sys_intern_poll___impl(var_for_c_0, var_for_c_1, var_for_c_2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
struct nitni_instance * NIT_NULL___null_Int() {
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
struct nitni_instance * NIT_NULL___null_Object() {
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
/* nitni callback for standard::Collection::length */
long file___Array_of_Int_length( struct nitni_instance * recv ) {
long var /* : Int */;
{
var = ((long(*)(val* self))(recv->value->class->vft[COLOR_standard__abstract_collection__Collection__length]))(recv->value); /* length on <recv->value:Array[Int]>*/
}
return var;
}
/* nitni callback for standard::SequenceRead::[] */
long file___Array_of_Int__index( struct nitni_instance * recv, long index ) {
val* var /* : nullable Object */;
long var1 /* : Int */;
{
var = ((val*(*)(val* self, long p0))(recv->value->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(recv->value, index); /* [] on <recv->value:Array[Int]>*/
}
var1 = (long)(var)>>2;
return var1;
}
/* nitni check for Int to nullable Int */
int file___Int_is_a_nullable_Int(long from) {
short int var /* : Bool */;
int cltype;
int idtype;
/* <from:Int> isa nullable Int */
var = 1; /* easy <from:Int> isa nullable Int*/
return var;
}
/* nitni cast for Int to nullable Int */
struct nitni_instance * file___Int_as_nullable_Int(long from) {
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable Int */;
/* <from:Int> isa nullable Int */
var = 1; /* easy <from:Int> isa nullable Int*/
if (!var) {
PRINT_ERROR("Runtime error: %s", "FFI cast failed");
PRINT_ERROR("\n");
fatal_exit(1);
}
var1 = (val*)(from<<2|1);
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var1;
return ret_for_c;
}
/* method file#Sys#read_only for (self: Sys): NativeString */
char* standard__file___Sys___read_only(val* self) {
char* var /* : NativeString */;
static char* varonce;
static int varonce_guard;
char* var1 /* : NativeString */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
char* var6 /* : NativeString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "r";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce2 = var3;
}
{
var6 = ((char*(*)(val* self))(var3->class->vft[COLOR_standard__string__Text__to_cstring]))(var3); /* to_cstring on <var3:String>*/
}
var1 = var6;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#wipe_write for (self: Sys): NativeString */
char* standard__file___Sys___wipe_write(val* self) {
char* var /* : NativeString */;
static char* varonce;
static int varonce_guard;
char* var1 /* : NativeString */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
char* var6 /* : NativeString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "w";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce2 = var3;
}
{
var6 = ((char*(*)(val* self))(var3->class->vft[COLOR_standard__string__Text__to_cstring]))(var3); /* to_cstring on <var3:String>*/
}
var1 = var6;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#printn for (self: Sys, Array[Object]) */
void standard__file___Sys___printn(val* self, val* p0) {
val* var_objects /* var objects: Array[Object] */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
var_objects = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
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
var4 = ((val*(*)(val* self))(var_objects->class->vft[COLOR_standard__string__Object__to_s]))(var_objects); /* to_s on <var_objects:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#print for (self: Sys, Object) */
void standard__file___Sys___print(val* self, val* p0) {
val* var_object /* var object: Object */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
val* var5 /* : Sys */;
val* var7 /* : Sys */;
val* var8 /* : Writer */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
var_object = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
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
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_standard__string__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__file__Sys__stdout]))(var5); /* stdout on <var5:Sys>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var11 = standard___standard__NativeString___to_s_with_length(var10, 1l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__stream__Writer__write]))(var8, var9); /* write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#getc for (self: Sys): Char */
char standard__file___Sys___getc(val* self) {
char var /* : Char */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : PollableReader */;
long var5 /* : Int */;
char var6 /* : Char */;
char var8 /* : Char */;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__file__Sys__stdin]))(var1); /* stdin on <var1:Sys>*/
}
{
var5 = ((long(*)(val* self))(var4->class->vft[COLOR_standard__stream__Reader__read_char]))(var4); /* read_char on <var4:PollableReader>*/
}
{
{ /* Inline kernel#Int#ascii (var5) on <var5:Int> */
var8 = var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#gets for (self: Sys): String */
val* standard__file___Sys___gets(val* self) {
val* var /* : String */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : PollableReader */;
val* var5 /* : String */;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__file__Sys__stdin]))(var1); /* stdin on <var1:Sys>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__stream__Reader__read_line]))(var4); /* read_line on <var4:PollableReader>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#getcwd for (self: Sys): String */
val* standard__file___Sys___getcwd(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__file__Sys__file_getcwd]))(self); /* file_getcwd on <self:Sys>*/
}
var2 = standard___standard__NativeString___Object__to_s(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#file_getcwd for (self: Sys): NativeString */
char* standard__file___Sys___file_getcwd(val* self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = string_NativeString_NativeString_file_getcwd_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
