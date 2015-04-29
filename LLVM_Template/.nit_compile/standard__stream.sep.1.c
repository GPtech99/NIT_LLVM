#include "standard__stream.sep.0.h"
/* method stream#Stream#last_error for (self: Stream): nullable IOError */
val* standard___standard__Stream___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_standard__stream__Stream___last_error].val; /* _last_error on <self:Stream> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#Stream#last_error= for (self: Stream, nullable IOError) */
void standard___standard__Stream___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_standard__stream__Stream___last_error].val = p0; /* _last_error on <self:Stream> */
RET_LABEL:;
}
/* method stream#Stream#close for (self: Stream) */
void standard___standard__Stream___close(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "close", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 38);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#Reader#read_char for (self: Reader): Int */
long standard___standard__Reader___read_char(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "read_char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 45);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#Reader#read for (self: Reader, Int): String */
val* standard___standard__Reader___read(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var_c /* var c: Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
char var23 /* : Char */;
char var25 /* : Char */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
val* var33 /* : String */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
var7 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self, long p0))(var7->class->vft[COLOR_standard__string__FlatBuffer__with_capacity]))(var7, var_i); /* with_capacity on <var7:FlatBuffer>*/
}
var_s = var7;
for(;;) {
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var12 = var_i > 0l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
var13 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var14 = !var13;
var8 = var14;
} else {
var8 = var_;
}
if (var8){
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_c = var15;
{
{ /* Inline kernel#Int#>= (var_c,0l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var18 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var22 = var_c >= 0l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline kernel#Int#ascii (var_c) on <var_c:Int> */
var25 = var_c;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
((void(*)(val* self, char p0))(var_s->class->vft[COLOR_standard__string__Buffer__add]))(var_s, var23); /* add on <var_s:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var32 = var_i - 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_i = var26;
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var33 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_line for (self: Reader): String */
val* standard___standard__Reader___read_line(val* self) {
val* var /* : String */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
short int var7 /* : Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var13 /* : String */;
val* var14 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
var7 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
if (var7){
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "";
var11 = standard___standard__NativeString___to_s_with_length(var10, 0l);
var9 = var11;
varonce8 = var9;
}
var = var9;
goto RET_LABEL;
} else {
}
var12 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var12->class->vft[COLOR_standard__kernel__Object__init]))(var12); /* init on <var12:FlatBuffer>*/
}
var_s = var12;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Reader__append_line_to]))(self, var_s); /* append_line_to on <self:Reader>*/
}
{
var13 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__Text__chomp]))(var13); /* chomp on <var13:String>*/
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_lines for (self: Reader): Array[String] */
val* standard___standard__Reader___read_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_res = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var3 = !var2;
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__read_line]))(self); /* read_line on <self:Reader>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var4); /* add on <var_res:Array[String]>*/
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
/* method stream#Reader#each_line for (self: Reader): LineIterator */
val* standard___standard__Reader___each_line(val* self) {
val* var /* : LineIterator */;
val* var1 /* : LineIterator */;
var1 = NEW_standard__LineIterator(&type_standard__LineIterator);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__stream__LineIterator__stream_61d]))(var1, self); /* stream= on <var1:LineIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:LineIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_all for (self: Reader): String */
val* standard___standard__Reader___read_all(val* self) {
val* var /* : String */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var_c /* var c: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
char var15 /* : Char */;
char var17 /* : Char */;
val* var18 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
var7 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:FlatBuffer>*/
}
var_s = var7;
for(;;) {
{
var8 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var9 = !var8;
if (var9){
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_c = var10;
{
{ /* Inline kernel#Int#>= (var_c,0l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var13 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var14 = var_c >= 0l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline kernel#Int#ascii (var_c) on <var_c:Int> */
var17 = var_c;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
((void(*)(val* self, char p0))(var_s->class->vft[COLOR_standard__string__Buffer__add]))(var_s, var15); /* add on <var_s:FlatBuffer>*/
}
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var18 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#append_line_to for (self: Reader, Buffer) */
void standard___standard__Reader___append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var_x /* var x: Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
char var11 /* : Char */;
char var13 /* : Char */;
char var_c /* var c: Char */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
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
for(;;) {
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_x = var3;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var6 = -1l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_x,var4) on <var_x:Int> */
var9 = var_x == var4;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var10 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
if (var10){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline kernel#Int#ascii (var_x) on <var_x:Int> */
var13 = var_x;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_c = var11;
{
var14 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var15 = (val*)((long)(var_c)<<2|2);
((void(*)(val* self, val* p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__abstract_collection__Sequence__push]))(var14, var15); /* push on <var14:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel#Char#== (var_c,'\n') on <var_c:Char> */
var18 = var_c == '\n';
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
goto RET_LABEL;
} else {
}
}
}
RET_LABEL:;
}
/* method stream#Reader#eof for (self: Reader): Bool */
short int standard___standard__Reader___eof(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "eof", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 220);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#Reader#read_word for (self: Reader): String */
val* standard___standard__Reader___read_word(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_buf /* var buf: FlatBuffer */;
long var2 /* : Int */;
long var_c /* var c: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
char var7 /* : Char */;
char var9 /* : Char */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
char var20 /* : Char */;
char var22 /* : Char */;
char var_a /* var a: Char */;
short int var23 /* : Bool */;
val* var24 /* : String */;
val* var_res /* var res: String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_buf = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__read_nonwhitespace]))(self); /* read_nonwhitespace on <self:Reader>*/
}
var_c = var2;
{
{ /* Inline kernel#Int#> (var_c,0l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var6 = var_c > 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel#Int#ascii (var_c) on <var_c:Int> */
var9 = var_c;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, char p0))(var_buf->class->vft[COLOR_standard__string__Buffer__add]))(var_buf, var7); /* add on <var_buf:FlatBuffer>*/
}
for(;;) {
{
var10 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var11 = !var10;
if (var11){
{
var12 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_c = var12;
{
{ /* Inline kernel#Int#< (var_c,0l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var15 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var19 = var_c < 0l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#ascii (var_c) on <var_c:Int> */
var22 = var_c;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_a = var20;
var23 = standard___standard__Char___is_whitespace(var_a);
if (var23){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, char p0))(var_buf->class->vft[COLOR_standard__string__Buffer__add]))(var_buf, var_a); /* add on <var_buf:FlatBuffer>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
var24 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_standard__string__Object__to_s]))(var_buf); /* to_s on <var_buf:FlatBuffer>*/
}
var_res = var24;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_nonwhitespace for (self: Reader): Int */
long standard___standard__Reader___read_nonwhitespace(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_c /* var c: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
char var12 /* : Char */;
char var14 /* : Char */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var3 = -1l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_c = var1;
for(;;) {
{
var4 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var5 = !var4;
if (var5){
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_c = var6;
{
{ /* Inline kernel#Int#< (var_c,0l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var11 = var_c < 0l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_ = var8;
if (var8){
var7 = var_;
} else {
{
{ /* Inline kernel#Int#ascii (var_c) on <var_c:Int> */
var14 = var_c;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var15 = standard___standard__Char___is_whitespace(var12);
var16 = !var15;
var7 = var16;
}
if (var7){
goto BREAK_label;
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#stream for (self: LineIterator): Reader */
val* standard___standard__LineIterator___stream(val* self) {
val* var /* : Reader */;
val* var1 /* : Reader */;
var1 = self->attrs[COLOR_standard__stream__LineIterator___stream].val; /* _stream on <self:LineIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 290);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#stream= for (self: LineIterator, Reader) */
void standard___standard__LineIterator___stream_61d(val* self, val* p0) {
self->attrs[COLOR_standard__stream__LineIterator___stream].val = p0; /* _stream on <self:LineIterator> */
RET_LABEL:;
}
/* method stream#LineIterator#is_ok for (self: LineIterator): Bool */
short int standard___standard__LineIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Reader */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_res /* var res: Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Reader */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__stream__Reader__eof]))(var1); /* eof on <var1:Reader>*/
}
var3 = !var2;
var_res = var3;
var5 = !var_res;
var_ = var5;
if (var5){
{
var6 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__LineIterator__close_on_finish]))(self); /* close_on_finish on <self:LineIterator>*/
}
var4 = var6;
} else {
var4 = var_;
}
if (var4){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__stream__Stream__close]))(var7); /* close on <var7:Reader>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#item for (self: LineIterator): String */
val* standard___standard__LineIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_line /* var line: nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Reader */;
val* var5 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__LineIterator__line]))(self); /* line on <self:LineIterator>*/
}
var_line = var1;
if (var_line == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_line->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_line, ((val*)NULL)); /* == on <var_line:nullable String>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__stream__Reader__read_line]))(var4); /* read_line on <var4:Reader>*/
}
var_line = var5;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__LineIterator__line_61d]))(self, var_line); /* line= on <self:LineIterator>*/
}
var = var_line;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#line for (self: LineIterator): nullable String */
val* standard___standard__LineIterator___line(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_standard__stream__LineIterator___line].val; /* _line on <self:LineIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#line= for (self: LineIterator, nullable String) */
void standard___standard__LineIterator___line_61d(val* self, val* p0) {
self->attrs[COLOR_standard__stream__LineIterator___line].val = p0; /* _line on <self:LineIterator> */
RET_LABEL:;
}
/* method stream#LineIterator#next for (self: LineIterator) */
void standard___standard__LineIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__LineIterator__line]))(self); /* line on <self:LineIterator>*/
}
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, ((val*)NULL)); /* == on <var:nullable String>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(self); /* item on <self:LineIterator>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__LineIterator__line_61d]))(self, ((val*)NULL)); /* line= on <self:LineIterator>*/
}
RET_LABEL:;
}
/* method stream#LineIterator#close_on_finish for (self: LineIterator): Bool */
short int standard___standard__LineIterator___close_on_finish(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__stream__LineIterator___close_on_finish].s; /* _close_on_finish on <self:LineIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#close_on_finish= for (self: LineIterator, Bool) */
void standard___standard__LineIterator___close_on_finish_61d(val* self, short int p0) {
self->attrs[COLOR_standard__stream__LineIterator___close_on_finish].s = p0; /* _close_on_finish on <self:LineIterator> */
RET_LABEL:;
}
/* method stream#LineIterator#finish for (self: LineIterator) */
void standard___standard__LineIterator___standard__abstract_collection__Iterator__finish(val* self) {
short int var /* : Bool */;
val* var1 /* : Reader */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__LineIterator__close_on_finish]))(self); /* close_on_finish on <self:LineIterator>*/
}
if (var){
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__stream__Stream__close]))(var1); /* close on <var1:Reader>*/
}
} else {
}
RET_LABEL:;
}
/* method stream#LineIterator#init for (self: LineIterator) */
void standard___standard__LineIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__LineIterator___standard__kernel__Object__init]))(self); /* init on <self:LineIterator>*/
}
RET_LABEL:;
}
/* method stream#PollableReader#poll_in for (self: PollableReader): Bool */
short int standard___standard__PollableReader___poll_in(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "poll_in", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 336);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#Writer#write for (self: Writer, Text) */
void standard___standard__Writer___write(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 344);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#Writer#is_writable for (self: Writer): Bool */
short int standard___standard__Writer___is_writable(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "is_writable", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 347);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#Writable#write_to for (self: Writable, Writer) */
void standard___standard__Writable___write_to(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write_to", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 358);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#Writable#write_to_string for (self: Writable): String */
val* standard___standard__Writable___write_to_string(val* self) {
val* var /* : String */;
val* var1 /* : StringWriter */;
val* var_stream /* var stream: StringWriter */;
val* var2 /* : String */;
var1 = NEW_standard__StringWriter(&type_standard__StringWriter);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:StringWriter>*/
}
var_stream = var1;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__stream__Writable__write_to]))(self, var_stream); /* write_to on <self:Writable>*/
}
{
var2 = ((val*(*)(val* self))(var_stream->class->vft[COLOR_standard__string__Object__to_s]))(var_stream); /* to_s on <var_stream:StringWriter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Text#write_to for (self: Text, Writer) */
void standard__stream___Text___Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
var_stream = p0;
{
((void(*)(val* self, val* p0))(var_stream->class->vft[COLOR_standard__stream__Writer__write]))(var_stream, self); /* write on <var_stream:Writer>*/
}
RET_LABEL:;
}
/* method stream#BufferedReader#read_char for (self: BufferedReader): Int */
long standard___standard__BufferedReader___Reader__read_char(val* self) {
long var /* : Int */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
val* var8 /* : IOError */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
long var12 /* : Int */;
long var14 /* : Int */;
val* var15 /* : nullable FlatBuffer */;
val* var16 /* : SequenceRead[Char] */;
long var17 /* : Int */;
val* var18 /* : nullable Object */;
char var19 /* : Char */;
char var_c /* var c: Char */;
val* var_ /* var : BufferedReader */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
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
}
{
var7 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
if (var7){
var8 = NEW_standard__IOError(&type_standard__IOError);
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "Stream has reached eof";
var11 = standard___standard__NativeString___to_s_with_length(var10, 22l);
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__Stream__last_error_61d]))(self, var8); /* last_error= on <self:BufferedReader>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var14 = -1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 390);
fatal_exit(1);
} else {
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__Text__chars]))(var15); /* chars on <var15:nullable FlatBuffer>*/
}
var17 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
var18 = ((val*(*)(val* self, long p0))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var16, var17); /* [] on <var16:SequenceRead[Char](Sequence[Char])>*/
}
var19 = (char)((long)(var18)>>2);
var_c = var19;
var_ = self;
var20 = var_->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel#Int#+ (var20,1l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var24 = var20 + 1l;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = var21; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var27 = (unsigned char)var_c;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#read for (self: BufferedReader, Int): String */
val* standard___standard__BufferedReader___Reader__read(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : nullable FlatBuffer */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var24 /* : Int */;
val* var25 /* : nullable FlatBuffer */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var_from /* var from: Int */;
val* var35 /* : nullable FlatBuffer */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable FlatBuffer */;
val* var41 /* : String */;
val* var42 /* : nullable FlatBuffer */;
val* var43 /* : Text */;
val* var44 /* : String */;
val* var_ /* var : BufferedReader */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
val* var53 /* : nullable FlatBuffer */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
val* var62 /* : Text */;
val* var63 /* : String */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 398);
fatal_exit(1);
} else {
var8 = ((long(*)(val* self))(var7->class->vft[COLOR_standard__string__Text__length]))(var7); /* length on <var7:nullable FlatBuffer>*/
}
var9 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#== (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var13 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
var14 = !var13;
if (var14){
{
var15 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__stream__Reader__read]))(self, var_i); /* read on <self:BufferedReader>*/
}
var = var15;
goto RET_LABEL;
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
var = var17;
goto RET_LABEL;
} else {
}
var20 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#+ (var20,var_i) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var23 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var24 = var20 + var_i;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var25 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 404);
fatal_exit(1);
} else {
var26 = ((long(*)(val* self))(var25->class->vft[COLOR_standard__string__Text__length]))(var25); /* length on <var25:nullable FlatBuffer>*/
}
{
{ /* Inline kernel#Int#>= (var21,var26) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var33 = var21 >= var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var34 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_from = var34;
var35 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var35 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 406);
fatal_exit(1);
} else {
var36 = ((long(*)(val* self))(var35->class->vft[COLOR_standard__string__Text__length]))(var35); /* length on <var35:nullable FlatBuffer>*/
}
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = var36; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#== (var_from,0l) on <var_from:Int> */
var39 = var_from == 0l;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
var40 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 407);
fatal_exit(1);
} else {
var41 = ((val*(*)(val* self))(var40->class->vft[COLOR_standard__string__Object__to_s]))(var40); /* to_s on <var40:nullable FlatBuffer>*/
}
var = var41;
goto RET_LABEL;
} else {
}
var42 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 408);
fatal_exit(1);
} else {
var43 = ((val*(*)(val* self, long p0))(var42->class->vft[COLOR_standard__string__Text__substring_from]))(var42, var_from); /* substring_from on <var42:nullable FlatBuffer>*/
}
{
var44 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__string__Object__to_s]))(var43); /* to_s on <var43:Text(Buffer)>*/
}
var = var44;
goto RET_LABEL;
} else {
}
var_ = self;
var45 = var_->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel#Int#+ (var45,var_i) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var48 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var52 = var45 + var_i;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var_->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = var46; /* _buffer_pos on <var_:BufferedReader> */
var53 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
var54 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#- (var54,var_i) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var57 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var61 = var54 - var_i;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var53 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 411);
fatal_exit(1);
} else {
var62 = ((val*(*)(val* self, long p0, long p1))(var53->class->vft[COLOR_standard__string__Text__substring]))(var53, var55, var_i); /* substring on <var53:nullable FlatBuffer>*/
}
{
var63 = ((val*(*)(val* self))(var62->class->vft[COLOR_standard__string__Object__to_s]))(var62); /* to_s on <var62:Text(Buffer)>*/
}
var = var63;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#read_all for (self: BufferedReader): String */
val* standard___standard__BufferedReader___Reader__read_all(val* self) {
val* var /* : String */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var_j /* var j: Int */;
val* var11 /* : nullable FlatBuffer */;
long var12 /* : Int */;
long var_k /* var k: Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var16 /* : Bool */;
val* var17 /* : nullable FlatBuffer */;
char var18 /* : Char */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var27 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
var7 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:FlatBuffer>*/
}
var_s = var7;
for(;;) {
{
var8 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
var9 = !var8;
if (var9){
var10 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var10;
var11 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 420);
fatal_exit(1);
} else {
var12 = ((long(*)(val* self))(var11->class->vft[COLOR_standard__string__Text__length]))(var11); /* length on <var11:nullable FlatBuffer>*/
}
var_k = var12;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_k) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_k:Int> isa OTHER */
/* <var_k:Int> isa OTHER */
var15 = 1; /* easy <var_k:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var16 = var_j < var_k;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var17 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 422);
fatal_exit(1);
} else {
var18 = ((char(*)(val* self, long p0))(var17->class->vft[COLOR_standard__string__Text___91d_93d]))(var17, var_j); /* [] on <var17:nullable FlatBuffer>*/
}
{
((void(*)(val* self, char p0))(var_s->class->vft[COLOR_standard__string__Buffer__add]))(var_s, var18); /* add on <var_s:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var25 = var_j + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_j = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = var_j; /* _buffer_pos on <self:BufferedReader> */
{
((void(*)(val* self))(self->class->vft[COLOR_standard__stream__BufferedReader__fill_buffer]))(self); /* fill_buffer on <self:BufferedReader>*/
}
} else {
goto BREAK_label26;
}
}
BREAK_label26: (void)0;
{
var27 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#append_line_to for (self: BufferedReader, Buffer) */
void standard___standard__BufferedReader___Reader__append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
long var /* : Int */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
val* var2 /* : nullable FlatBuffer */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable FlatBuffer */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
char var14 /* : Char */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
val* var23 /* : nullable FlatBuffer */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
val* var32 /* : nullable FlatBuffer */;
val* var33 /* : SequenceRead[Char] */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
char var38 /* : Char */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var46 /* : nullable Object */;
val* var_eol /* var eol: nullable Object */;
val* var47 /* : nullable Object */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
long var56 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
long var72 /* : Int */;
long var_j /* var j: Int */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
short int var79 /* : Bool */;
val* var80 /* : nullable FlatBuffer */;
val* var81 /* : SequenceRead[Char] */;
val* var82 /* : nullable Object */;
char var83 /* : Char */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
var_s = p0;
for(;;) {
var = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_i = var;
for(;;) {
var2 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 436);
fatal_exit(1);
} else {
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__length]))(var2); /* length on <var2:nullable FlatBuffer>*/
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
var_ = var4;
if (var4){
var8 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 436);
fatal_exit(1);
} else {
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__Text__chars]))(var8); /* chars on <var8:nullable FlatBuffer>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel#Char#!= (var10,'\n') on <var10:nullable Object(Char)> */
var14 = (char)((long)(var10)>>2);
var13 = (var10 != NULL) && (var14 == '\n');
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var1 = var11;
} else {
var1 = var_;
}
if (var1){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var_i + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_i = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var23 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 439);
fatal_exit(1);
} else {
var24 = ((long(*)(val* self))(var23->class->vft[COLOR_standard__string__Text__length]))(var23); /* length on <var23:nullable FlatBuffer>*/
}
{
{ /* Inline kernel#Int#< (var_i,var24) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var31 = var_i < var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
var32 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 440);
fatal_exit(1);
} else {
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_standard__string__Text__chars]))(var32); /* chars on <var32:nullable FlatBuffer>*/
}
{
var34 = ((val*(*)(val* self, long p0))((((long)var33&3)?class_info[((long)var33&3)]:var33->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var33, var_i); /* [] on <var33:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel#Char#== (var34,'\n') on <var34:nullable Object(Char)> */
var38 = (char)((long)(var34)>>2);
var37 = (var34 != NULL) && (var38 == '\n');
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 440);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var45 = var_i + 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_i = var39;
var46 = (val*)((long)(1)<<2|3);
var_eol = var46;
} else {
var47 = (val*)((long)(0)<<2|3);
var_eol = var47;
}
var48 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#> (var_i,var48) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var51 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var55 = var_i > var48;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
var56 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Buffer>*/
}
{
{ /* Inline kernel#Int#+ (var56,var_i) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var59 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var63 = var56 + var_i;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var64 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#- (var57,var64) on <var57:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var67 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var71 = var57 - var64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_s->class->vft[COLOR_standard__string__Buffer__enlarge]))(var_s, var65); /* enlarge on <var_s:Buffer>*/
}
var72 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var72;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var75 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var79 = var_j < var_i;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
if (var73){
var80 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var80 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 455);
fatal_exit(1);
} else {
var81 = ((val*(*)(val* self))(var80->class->vft[COLOR_standard__string__Text__chars]))(var80); /* chars on <var80:nullable FlatBuffer>*/
}
{
var82 = ((val*(*)(val* self, long p0))((((long)var81&3)?class_info[((long)var81&3)]:var81->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var81, var_j); /* [] on <var81:SequenceRead[Char](Sequence[Char])>*/
}
{
var83 = (char)((long)(var82)>>2);
((void(*)(val* self, char p0))(var_s->class->vft[COLOR_standard__string__Buffer__add]))(var_s, var83); /* add on <var_s:Buffer>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var86 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var90 = var_j + 1l;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_j = var84;
} else {
goto BREAK_label91;
}
}
BREAK_label91: (void)0;
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = var_i; /* _buffer_pos on <self:BufferedReader> */
} else {
{
var92 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
if (unlikely(!var92)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 460);
fatal_exit(1);
}
goto RET_LABEL;
}
var93 = (short int)((long)(var_eol)>>2);
if (var93){
goto RET_LABEL;
} else {
{
var94 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
if (var94){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__stream__BufferedReader__fill_buffer]))(self); /* fill_buffer on <self:BufferedReader>*/
}
}
}
RET_LABEL:;
}
/* method stream#BufferedReader#eof for (self: BufferedReader): Bool */
short int standard___standard__BufferedReader___Reader__eof(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : nullable FlatBuffer */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
val* var11 /* : nullable FlatBuffer */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
short int var20 /* : Bool */;
var1 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var2 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 477);
fatal_exit(1);
} else {
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__length]))(var2); /* length on <var2:nullable FlatBuffer>*/
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
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
var8 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
if (var8){
var = 1;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__stream__BufferedReader__fill_buffer]))(self); /* fill_buffer on <self:BufferedReader>*/
}
var10 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var11 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 480);
fatal_exit(1);
} else {
var12 = ((long(*)(val* self))(var11->class->vft[COLOR_standard__string__Text__length]))(var11); /* length on <var11:nullable FlatBuffer>*/
}
{
{ /* Inline kernel#Int#>= (var10,var12) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var19 = var10 >= var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_ = var13;
if (var13){
{
var20 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
var9 = var20;
} else {
var9 = var_;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#buffer for (self: BufferedReader): nullable FlatBuffer */
val* standard___standard__BufferedReader___buffer(val* self) {
val* var /* : nullable FlatBuffer */;
val* var1 /* : nullable FlatBuffer */;
var1 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].val; /* _buffer on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#buffer= for (self: BufferedReader, nullable FlatBuffer) */
void standard___standard__BufferedReader___buffer_61d(val* self, val* p0) {
self->attrs[COLOR_standard__stream__BufferedReader___buffer].val = p0; /* _buffer on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#BufferedReader#buffer_pos for (self: BufferedReader): Int */
long standard___standard__BufferedReader___buffer_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#buffer_pos= for (self: BufferedReader, Int) */
void standard___standard__BufferedReader___buffer_pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = p0; /* _buffer_pos on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#BufferedReader#fill_buffer for (self: BufferedReader) */
void standard___standard__BufferedReader___fill_buffer(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "fill_buffer", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 489);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#BufferedReader#end_reached for (self: BufferedReader): Bool */
short int standard___standard__BufferedReader___end_reached(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "end_reached", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 492);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#prepare_buffer for (self: BufferedReader, Int) */
void standard___standard__BufferedReader___prepare_buffer(val* self, long p0) {
long var_capacity /* var capacity: Int */;
val* var /* : FlatBuffer */;
var_capacity = p0;
var = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_standard__string__FlatBuffer__with_capacity]))(var, var_capacity); /* with_capacity on <var:FlatBuffer>*/
}
self->attrs[COLOR_standard__stream__BufferedReader___buffer].val = var; /* _buffer on <self:BufferedReader> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#StringWriter#content for (self: StringWriter): Array[String] */
val* standard___standard__StringWriter___content(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_standard__stream__StringWriter___content].val; /* _content on <self:StringWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 515);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringWriter#content= for (self: StringWriter, Array[String]) */
void standard___standard__StringWriter___content_61d(val* self, val* p0) {
self->attrs[COLOR_standard__stream__StringWriter___content].val = p0; /* _content on <self:StringWriter> */
RET_LABEL:;
}
/* method stream#StringWriter#to_s for (self: StringWriter): String */
val* standard___standard__StringWriter___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__StringWriter__content]))(self); /* content on <self:StringWriter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__Object__to_s]))(var1); /* to_s on <var1:Array[String]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#StringWriter#is_writable for (self: StringWriter): Bool */
short int standard___standard__StringWriter___Writer__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__StringWriter__closed]))(self); /* closed on <self:StringWriter>*/
}
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#StringWriter#write for (self: StringWriter, Text) */
void standard___standard__StringWriter___Writer__write(val* self, val* p0) {
val* var_str /* var str: Text */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Array[String] */;
val* var3 /* : String */;
var_str = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__stream__StringWriter__closed]))(self); /* closed on <self:StringWriter>*/
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 520);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__StringWriter__content]))(self); /* content on <self:StringWriter>*/
}
{
var3 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Object__to_s]))(var_str); /* to_s on <var_str:Text>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var2, var3); /* add on <var2:Array[String]>*/
}
RET_LABEL:;
}
/* method stream#StringWriter#closed for (self: StringWriter): Bool */
short int standard___standard__StringWriter___closed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__stream__StringWriter___closed].s; /* _closed on <self:StringWriter> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringWriter#closed= for (self: StringWriter, Bool) */
void standard___standard__StringWriter___closed_61d(val* self, short int p0) {
self->attrs[COLOR_standard__stream__StringWriter___closed].s = p0; /* _closed on <self:StringWriter> */
RET_LABEL:;
}
/* method stream#StringWriter#close for (self: StringWriter) */
void standard___standard__StringWriter___Stream__close(val* self) {
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__stream__StringWriter__closed_61d]))(self, 1); /* closed= on <self:StringWriter>*/
}
RET_LABEL:;
}
/* method stream#StringReader#source for (self: StringReader): String */
val* standard___standard__StringReader___source(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__stream__StringReader___source].val; /* _source on <self:StringReader> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _source");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 536);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringReader#source= for (self: StringReader, String) */
void standard___standard__StringReader___source_61d(val* self, val* p0) {
self->attrs[COLOR_standard__stream__StringReader___source].val = p0; /* _source on <self:StringReader> */
RET_LABEL:;
}
/* method stream#StringReader#cursor for (self: StringReader): Int */
long standard___standard__StringReader___cursor(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__stream__StringReader___cursor].l; /* _cursor on <self:StringReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringReader#cursor= for (self: StringReader, Int) */
void standard___standard__StringReader___cursor_61d(val* self, long p0) {
self->attrs[COLOR_standard__stream__StringReader___cursor].l = p0; /* _cursor on <self:StringReader> */
RET_LABEL:;
}
/* method stream#StringReader#read_char for (self: StringReader): Int */
long standard___standard__StringReader___Reader__read_char(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : String */;
long var9 /* : Int */;
char var10 /* : Char */;
long var11 /* : Int */;
long var13 /* : Int */;
long var_c /* var c: Int */;
val* var_ /* var : StringReader */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__length]))(var2); /* length on <var2:String>*/
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
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var10 = ((char(*)(val* self, long p0))(var8->class->vft[COLOR_standard__string__Text___91d_93d]))(var8, var9); /* [] on <var8:String>*/
}
{
{ /* Inline kernel#Char#ascii (var10) on <var10:Char> */
var13 = (unsigned char)var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_c = var11;
var_ = self;
{
var14 = ((long(*)(val* self))(var_->class->vft[COLOR_standard__stream__StringReader__cursor]))(var_); /* cursor on <var_:StringReader>*/
}
{
{ /* Inline kernel#Int#+ (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var21 = var14 + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__stream__StringReader__cursor_61d]))(var_, var15); /* cursor= on <var_:StringReader>*/
}
var = var_c;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var24 = -1l;
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
/* method stream#StringReader#close for (self: StringReader) */
void standard___standard__StringReader___Stream__close(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = standard___standard__NativeString___to_s_with_length(var1, 0l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__stream__StringReader__source_61d]))(self, var); /* source= on <self:StringReader>*/
}
RET_LABEL:;
}
/* method stream#StringReader#read_all for (self: StringReader): String */
val* standard___standard__StringReader___Reader__read_all(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_c /* var c: Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var9 /* : Text */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
var_c = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__length]))(var2); /* length on <var2:String>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__stream__StringReader__cursor_61d]))(self, var3); /* cursor= on <self:StringReader>*/
}
{
{ /* Inline kernel#Int#== (var_c,0l) on <var_c:Int> */
var6 = var_c == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
var = var7;
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var9 = ((val*(*)(val* self, long p0))(var8->class->vft[COLOR_standard__string__Text__substring_from]))(var8, var_c); /* substring_from on <var8:String>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#StringReader#eof for (self: StringReader): Bool */
short int standard___standard__StringReader___Reader__eof(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__length]))(var2); /* length on <var2:String>*/
}
{
{ /* Inline kernel#Int#>= (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var7 = var1 >= var3;
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
/* method stream#StringReader#init for (self: StringReader) */
void standard___standard__StringReader___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__StringReader___standard__kernel__Object__init]))(self); /* init on <self:StringReader>*/
}
RET_LABEL:;
}
