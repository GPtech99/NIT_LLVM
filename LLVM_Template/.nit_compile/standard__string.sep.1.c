#include "standard__string.sep.0.h"
/* method string#Text#chars for (self: Text): SequenceRead[Char] */
val* standard___standard__Text___chars(val* self) {
val* var /* : SequenceRead[Char] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "chars", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 39);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#length for (self: Text): Int */
long standard___standard__Text___length(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 44);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#substring for (self: Text, Int, Int): Text */
val* standard___standard__Text___substring(val* self, long p0, long p1) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 50);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#substrings for (self: Text): Iterator[Text] */
val* standard___standard__Text___substrings(val* self) {
val* var /* : Iterator[Text] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substrings", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 62);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#is_empty for (self: Text): Bool */
short int standard___standard__Text___is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
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
/* method string#Text#empty for (self: Text): Text */
val* standard___standard__Text___empty(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "empty", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 71);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#first for (self: Text): Char */
char standard___standard__Text___first(val* self) {
char var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
char var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, 0l); /* [] on <var1:SequenceRead[Char]>*/
}
var3 = (char)((long)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#[] for (self: Text, Int): Char */
char standard___standard__Text____91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
char var3 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, var_index); /* [] on <var1:SequenceRead[Char]>*/
}
var3 = (char)((long)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#index_of for (self: Text, Char): Int */
long standard___standard__Text___index_of(val* self, char p0) {
long var /* : Int */;
char var_c /* var c: Char */;
long var1 /* : Int */;
var_c = p0;
{
var1 = ((long(*)(val* self, char p0, long p1))(self->class->vft[COLOR_standard__string__Text__index_of_from]))(self, var_c, 0l); /* index_of_from on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#last for (self: Text): Char */
char standard___standard__Text___last(val* self) {
char var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
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
{
var7 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, var3); /* [] on <var1:SequenceRead[Char]>*/
}
var8 = (char)((long)(var7)>>2);
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#index_of_from for (self: Text, Char, Int): Int */
long standard___standard__Text___index_of_from(val* self, char p0, long p1) {
long var /* : Int */;
char var_c /* var c: Char */;
long var_pos /* var pos: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
char var8 /* : Char */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
var_c = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead__iterator_from]))(var1, var_pos); /* iterator_from on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#== (var4,var_c) on <var4:nullable Object(Char)> */
var8 = (char)((long)(var4)>>2);
var7 = (var4 != NULL) && (var8 == var_c);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
var = var9;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var12 = -1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#last_index_of for (self: Text, Char): Int */
long standard___standard__Text___last_index_of(val* self, char p0) {
long var /* : Int */;
char var_c /* var c: Char */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
var_c = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
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
var6 = ((long(*)(val* self, char p0, long p1))(self->class->vft[COLOR_standard__string__Text__last_index_of_from]))(self, var_c, var2); /* last_index_of_from on <self:Text>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_cstring for (self: Text): NativeString */
char* standard___standard__Text___to_cstring(val* self) {
char* var /* : NativeString */;
val* var1 /* : FlatText */;
char* var2 /* : NativeString */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__flatten]))(self); /* flatten on <self:Text>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1); /* to_cstring on <var1:FlatText>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#last_index_of_from for (self: Text, Char, Int): Int */
long standard___standard__Text___last_index_of_from(val* self, char p0, long p1) {
long var /* : Int */;
char var_item /* var item: Char */;
long var_pos /* var pos: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
char var8 /* : Char */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
var_item = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead__reverse_iterator_from]))(var1, var_pos); /* reverse_iterator_from on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#== (var4,var_item) on <var4:nullable Object(Char)> */
var8 = (char)((long)(var4)>>2);
var7 = (var4 != NULL) && (var8 == var_item);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
var = var9;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var12 = -1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#iterator for (self: Text): Iterator[Char] */
val* standard___standard__Text___iterator(val* self) {
val* var /* : Iterator[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:SequenceRead[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_a for (self: Text): Array[Char] */
val* standard___standard__Text___to_a(val* self) {
val* var /* : Array[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Array[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__array__Collection__to_a]))(var1); /* to_a on <var1:SequenceRead[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#substring_from for (self: Text, Int): Text */
val* standard___standard__Text___substring_from(val* self, long p0) {
val* var /* : Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Text */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : Text */;
var_from = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#>= (var_from,var1) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var13 = var_from < 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var_from = 0l;
} else {
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var14,var_from) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var17 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var21 = var14 - var_from;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var_from, var15); /* substring on <self:Text>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_substring for (self: Text, String, Int): Bool */
short int standard___standard__Text___has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
val* var_str /* var str: String */;
long var_pos /* var pos: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var23 /* : SequenceRead[Char] */;
val* var24 /* : IndexedIterator[nullable Object] */;
val* var_myiter /* var myiter: IndexedIterator[Char] */;
val* var25 /* : SequenceRead[Char] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_itsiter /* var itsiter: IndexedIterator[Char] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var32 /* : nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
var_str = p0;
var_pos = p1;
{
var1 = ((short int(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__is_empty]))(var_str); /* is_empty on <var_str:String>*/
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var_pos < 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var2 = var_;
} else {
{
var7 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,var7) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var14 = var_pos + var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#> (var8,var15) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var22 = var8 > var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var2 = var16;
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var24 = ((val*(*)(val* self, long p0))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_standard__abstract_collection__SequenceRead__iterator_from]))(var23, var_pos); /* iterator_from on <var23:SequenceRead[Char]>*/
}
var_myiter = var24;
{
var25 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var26 = ((val*(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var25); /* iterator on <var25:SequenceRead[Char]>*/
}
var_itsiter = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_myiter); /* is_ok on <var_myiter:IndexedIterator[Char]>*/
}
var_29 = var28;
if (var28){
{
var30 = ((short int(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
var27 = var30;
} else {
var27 = var_29;
}
if (var27){
{
var31 = ((val*(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_myiter); /* item on <var_myiter:IndexedIterator[Char]>*/
}
{
var32 = ((val*(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_itsiter); /* item on <var_itsiter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var31,var32) on <var31:nullable Object(Char)> */
var35 = var31 == var32;
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_myiter); /* next on <var_myiter:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_itsiter); /* next on <var_itsiter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var37 = ((short int(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
if (var37){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_prefix for (self: Text, String): Bool */
short int standard___standard__Text___has_prefix(val* self, val* p0) {
short int var /* : Bool */;
val* var_prefix /* var prefix: String */;
short int var1 /* : Bool */;
var_prefix = p0;
{
var1 = ((short int(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_standard__string__Text__has_substring]))(self, var_prefix, 0l); /* has_substring on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_suffix for (self: Text, String): Bool */
short int standard___standard__Text___has_suffix(val* self, val* p0) {
short int var /* : Bool */;
val* var_suffix /* var suffix: String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
short int var7 /* : Bool */;
var_suffix = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
var2 = ((long(*)(val* self))(var_suffix->class->vft[COLOR_standard__string__Text__length]))(var_suffix); /* length on <var_suffix:String>*/
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
{
var7 = ((short int(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_standard__string__Text__has_substring]))(self, var_suffix, var3); /* has_substring on <self:Text>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_i for (self: Text): Int */
long standard___standard__Text___to_i(val* self) {
long var /* : Int */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
long var5 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
{
{ /* Inline string#NativeString#atoi (var2) on <var2:NativeString> */
var5 = atoi(var2);;
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
/* method string#Text#to_f for (self: Text): Float */
double standard___standard__Text___to_f(val* self) {
double var /* : Float */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
double var3 /* : Float */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = standard___standard__NativeString___atof(var2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_hex for (self: Text): Int */
long standard___standard__Text___to_hex(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__Text__a_to]))(self, 16l); /* a_to on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#a_to for (self: Text, Int): Int */
long standard___standard__Text___a_to(val* self, long p0) {
long var /* : Int */;
long var_base /* var base: Int */;
long var_i /* var i: Int */;
short int var_neg /* var neg: Bool */;
long var_j /* var j: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
char var_c /* var c: Char */;
long var9 /* : Int */;
long var_v /* var v: Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
var_base = p0;
var_i = 0l;
var_neg = 0;
var_j = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var5 = var_j < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, var_j); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (char)((long)(var7)>>2);
var_c = var8;
var9 = standard___standard__Char___to_i(var_c);
var_v = var9;
{
{ /* Inline kernel#Int#> (var_v,var_base) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var12 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var16 = var_v > var_base;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var19 = -var_i;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
} else {
{
{ /* Inline kernel#Int#< (var_v,0l) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var26 = var_v < 0l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var_neg = 1;
} else {
{
{ /* Inline kernel#Int#* (var_i,var_base) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var29 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var33 = var_i * var_base;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var27,var_v) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_v:Int> isa OTHER */
/* <var_v:Int> isa OTHER */
var36 = 1; /* easy <var_v:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var40 = var27 + var_v;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_i = var34;
}
}
var41 = standard___standard__Int___Discrete__successor(var_j, 1l);
var_j = var41;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var44 = -var_i;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Text#is_numeric for (self: Text): Bool */
short int standard___standard__Text___is_numeric(val* self) {
short int var /* : Bool */;
short int var_has_point_or_comma /* var has_point_or_comma: Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
char var_c /* var c: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
var_has_point_or_comma = 0;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (char)((long)(var7)>>2);
var_c = var8;
var9 = standard__string___Char___is_numeric(var_c);
var10 = !var9;
if (var10){
{
{ /* Inline kernel#Char#== (var_c,'.') on <var_c:Char> */
var15 = var_c == '.';
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_16 = var13;
if (var13){
var12 = var_16;
} else {
{
{ /* Inline kernel#Char#== (var_c,',') on <var_c:Char> */
var19 = var_c == ',';
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var12 = var17;
}
var_20 = var12;
if (var12){
var21 = !var_has_point_or_comma;
var11 = var21;
} else {
var11 = var_20;
}
if (var11){
var_has_point_or_comma = 1;
} else {
var = 0;
goto RET_LABEL;
}
} else {
}
var22 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var22;
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
/* method string#Text#is_hex for (self: Text): Bool */
short int standard___standard__Text___is_hex(val* self) {
short int var /* : Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
char var_c /* var c: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
long var64 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (char)((long)(var7)>>2);
var_c = var8;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var14 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var18 = var_c >= 'a';
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_19 = var12;
if (var12){
{
{ /* Inline kernel#Char#<= (var_c,'f') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var22 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var26 = var_c <= 'f';
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var11 = var20;
} else {
var11 = var_19;
}
var27 = !var11;
var_28 = var27;
if (var27){
{
{ /* Inline kernel#Char#>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var32 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var36 = var_c >= 'A';
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_37 = var30;
if (var30){
{
{ /* Inline kernel#Char#<= (var_c,'F') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var40 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var44 = var_c <= 'F';
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var29 = var38;
} else {
var29 = var_37;
}
var45 = !var29;
var10 = var45;
} else {
var10 = var_28;
}
var_46 = var10;
if (var10){
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var50 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var54 = var_c >= '0';
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_55 = var48;
if (var48){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var58 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var62 = var_c <= '9';
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var47 = var56;
} else {
var47 = var_55;
}
var63 = !var47;
var9 = var63;
} else {
var9 = var_46;
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var64 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var64;
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
/* method string#Text#is_upper for (self: Text): Bool */
short int standard___standard__Text___is_upper(val* self) {
short int var /* : Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
char var_char /* var char: Char */;
short int var9 /* : Bool */;
long var10 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (char)((long)(var7)>>2);
var_char = var8;
var9 = standard___standard__Char___is_lower(var_char);
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var10 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var10;
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
/* method string#Text#is_lower for (self: Text): Bool */
short int standard___standard__Text___is_lower(val* self) {
short int var /* : Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
char var_char /* var char: Char */;
short int var9 /* : Bool */;
long var10 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (char)((long)(var7)>>2);
var_char = var8;
var9 = standard___standard__Char___is_upper(var_char);
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var10 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var10;
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
/* method string#Text#l_trim for (self: Text): Text */
val* standard___standard__Text___l_trim(val* self) {
val* var /* : Text */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
char var6 /* : Char */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Text */;
long var14 /* : Int */;
val* var15 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
var6 = (char)((long)(var4)>>2);
var5 = standard___standard__Char___is_whitespace(var6);
var7 = !var5;
if (var7){
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var8 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
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
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
var14 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
var15 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__Text__substring_from]))(self, var14); /* substring_from on <self:Text>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#r_trim for (self: Text): Text */
val* standard___standard__Text___r_trim(val* self) {
val* var /* : Text */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
char var6 /* : Char */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : Text */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead__reverse_iterator]))(var1); /* reverse_iterator on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
var6 = (char)((long)(var4)>>2);
var5 = standard___standard__Char___is_whitespace(var6);
var7 = !var5;
if (var7){
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var8 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Int#< (var8,0l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var12 = var8 < 0l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
var14 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
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
var22 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var15); /* substring on <self:Text>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#trim for (self: Text): Text */
val* standard___standard__Text___trim(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
val* var2 /* : Text */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__l_trim]))(self); /* l_trim on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__r_trim]))(var1); /* r_trim on <var1:Text>*/
}
/* <var2:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_standard__string__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 387);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#is_whitespace for (self: Text): Bool */
short int standard___standard__Text___is_whitespace(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Char] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
char var7 /* : Char */;
char var_c /* var c: Char */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Text__is_empty]))(self); /* is_empty on <self:Text>*/
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Char]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Char]>*/
}
var7 = (char)((long)(var6)>>2);
var_c = var7;
var8 = standard___standard__Char___is_whitespace(var_c);
var9 = !var8;
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#chomp for (self: Text): Text */
val* standard___standard__Text___chomp(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
char var_l /* var l: Char */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : Text */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const struct type* type_struct27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
val* var37 /* : SequenceRead[Char] */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var45 /* : nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
char var49 /* : Char */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var57 /* : Text */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
val* var65 /* : Text */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_len = var1;
{
{ /* Inline kernel#Int#== (var_len,0l) on <var_len:Int> */
var4 = var_len == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
/* <self:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_standard__string__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var5 = 0;
} else {
var5 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 426);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var6); /* last on <var6:SequenceRead[Char]>*/
}
var8 = (char)((long)(var7)>>2);
var_l = var8;
{
{ /* Inline kernel#Char#== (var_l,'\015') on <var_l:Char> */
var11 = var_l == '\015';
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var18 = var_len - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var12); /* substring on <self:Text>*/
}
var = var19;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Char#!= (var_l,'\n') on <var_l:Char> */
var22 = var_l == '\n';
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
/* <self:Text> isa SELFTYPE */
type_struct27 = self->type->resolution_table->types[COLOR_standard__string__Text__SELFTYPE];
cltype25 = type_struct27->color;
idtype26 = type_struct27->id;
if(cltype25 >= self->type->table_size) {
var24 = 0;
} else {
var24 = self->type->type_table[cltype25] == idtype26;
}
if (unlikely(!var24)) {
var_class_name28 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 431);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#> (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var36 = var_len > 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_ = var30;
if (var30){
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var40 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var44 = var_len - 2l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var45 = ((val*(*)(val* self, long p0))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var37, var38); /* [] on <var37:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var45,'\015') on <var45:nullable Object(Char)> */
var49 = (char)((long)(var45)>>2);
var48 = (var45 != NULL) && (var49 == '\015');
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var29 = var46;
} else {
var29 = var_;
}
if (var29){
{
{ /* Inline kernel#Int#- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var52 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var56 = var_len - 2l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var50); /* substring on <self:Text>*/
}
var = var57;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var60 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var64 = var_len - 1l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
{
var65 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var58); /* substring on <self:Text>*/
}
var = var65;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method string#Text#justify for (self: Text, Int, Float): String */
val* standard___standard__Text___justify(val* self, long p0, double p1) {
val* var /* : String */;
long var_length /* var length: Int */;
double var_left /* var left: Float */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_diff /* var diff: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
double var29 /* : Float */;
double var31 /* : Float */;
double var32 /* : Float */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
double var38 /* : Float */;
long var39 /* : Int */;
long var41 /* : Int */;
long var_before /* var before: Int */;
static val* varonce;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : String */;
var_length = p0;
var_left = p1;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var_length,var1) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var5 = var_length - var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_diff = var2;
{
{ /* Inline kernel#Int#<= (var_diff,0l) on <var_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var12 = var_diff <= 0l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Float#>= (var_left,0.0) on <var_left:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var17 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 336);
fatal_exit(1);
}
var21 = var_left >= 0.0;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_ = var15;
if (var15){
{
{ /* Inline kernel#Float#<= (var_left,1.0) on <var_left:Float> */
/* Covariant cast for argument 0 (i) <1.0:Float> isa OTHER */
/* <1.0:Float> isa OTHER */
var24 = 1; /* easy <1.0:Float> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 334);
fatal_exit(1);
}
var28 = var_left <= 1.0;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var14 = var22;
} else {
var14 = var_;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 463);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#to_f (var_diff) on <var_diff:Int> */
var31 = (double)var_diff;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var29,var_left) on <var29:Float> */
/* Covariant cast for argument 0 (i) <var_left:Float> isa OTHER */
/* <var_left:Float> isa OTHER */
var34 = 1; /* easy <var_left:Float> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 342);
fatal_exit(1);
}
var38 = var29 * var_left;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Float#to_i (var32) on <var32:Float> */
var41 = (long)var32;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_before = var39;
if (likely(varonce!=NULL)) {
var42 = varonce;
} else {
var43 = " ";
var44 = standard___standard__NativeString___to_s_with_length(var43, 1l);
var42 = var44;
varonce = var42;
}
{
var45 = ((val*(*)(val* self, long p0))(var42->class->vft[COLOR_standard__string__String___42d]))(var42, var_before); /* * on <var42:String>*/
}
{
var46 = ((val*(*)(val* self, val* p0))(var45->class->vft[COLOR_standard__string__String___43d]))(var45, self); /* + on <var45:String>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " ";
var50 = standard___standard__NativeString___to_s_with_length(var49, 1l);
var48 = var50;
varonce47 = var48;
}
{
{ /* Inline kernel#Int#- (var_diff,var_before) on <var_diff:Int> */
/* Covariant cast for argument 0 (i) <var_before:Int> isa OTHER */
/* <var_before:Int> isa OTHER */
var53 = 1; /* easy <var_before:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var57 = var_diff - var_before;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
var58 = ((val*(*)(val* self, long p0))(var48->class->vft[COLOR_standard__string__String___42d]))(var48, var51); /* * on <var48:String>*/
}
{
var59 = ((val*(*)(val* self, val* p0))(var46->class->vft[COLOR_standard__string__String___43d]))(var46, var58); /* + on <var46:String>*/
}
var = var59;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_cmangle for (self: Text): String */
val* standard___standard__Text___to_cmangle(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
short int var_underscore /* var underscore: Bool */;
long var_start /* var start: Int */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
char var_c /* var c: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var23 /* : Int */;
val* var24 /* : String */;
long var_i /* var i: Int */;
long var25 /* : Int */;
long var_26 /* var : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
val* var34 /* : SequenceRead[Char] */;
val* var35 /* : nullable Object */;
char var36 /* : Char */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
short int var_54 /* var : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
short int var70 /* : Bool */;
long var71 /* : Int */;
long var73 /* : Int */;
val* var74 /* : String */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
short int var82 /* : Bool */;
short int var_83 /* var : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
long var94 /* : Int */;
long var96 /* : Int */;
val* var97 /* : String */;
long var98 /* : Int */;
long var100 /* : Int */;
long var102 /* : Int */;
val* var103 /* : String */;
val* var104 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Text__is_empty]))(self); /* is_empty on <self:Text>*/
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
var_res = var5;
var_underscore = 0;
var_start = 0l;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, 0l); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (char)((long)(var7)>>2);
var_c = var8;
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var12 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var13 = var_c >= '0';
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ = var10;
if (var10){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var16 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var20 = var_c <= '9';
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var9 = var14;
} else {
var9 = var_;
}
if (var9){
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '_'); /* add on <var_res:FlatBuffer>*/
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var23 = (unsigned char)var_c;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var24 = standard__string___Int___Object__to_s(var21);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var24); /* append on <var_res:FlatBuffer>*/
}
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, 'd'); /* add on <var_res:FlatBuffer>*/
}
var_start = 1l;
} else {
}
var_i = var_start;
{
var25 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_26 = var25;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_26) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_26:Int> isa OTHER */
/* <var_26:Int> isa OTHER */
var29 = 1; /* easy <var_26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var33 = var_i < var_26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var35 = ((val*(*)(val* self, long p0))((((long)var34&3)?class_info[((long)var34&3)]:var34->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var34, var_i); /* [] on <var34:SequenceRead[Char]>*/
}
var36 = (char)((long)(var35)>>2);
var_c = var36;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var41 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var45 = var_c >= 'a';
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_46 = var39;
if (var39){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var49 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var53 = var_c <= 'z';
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var38 = var47;
} else {
var38 = var_46;
}
var_54 = var38;
if (var38){
var37 = var_54;
} else {
{
{ /* Inline kernel#Char#>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var58 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var62 = var_c >= 'A';
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_63 = var56;
if (var56){
{
{ /* Inline kernel#Char#<= (var_c,'Z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var66 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var70 = var_c <= 'Z';
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var55 = var64;
} else {
var55 = var_63;
}
var37 = var55;
}
if (var37){
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:FlatBuffer>*/
}
var_underscore = 0;
goto BREAK_label;
} else {
}
if (var_underscore){
{
{ /* Inline kernel#Char#ascii ('_') on <'_':Char> */
var73 = (unsigned char)'_';
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var74 = standard__string___Int___Object__to_s(var71);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var74); /* append on <var_res:FlatBuffer>*/
}
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, 'd'); /* add on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var78 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var82 = var_c >= '0';
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_83 = var76;
if (var76){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var86 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var90 = var_c <= '9';
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var75 = var84;
} else {
var75 = var_83;
}
if (var75){
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:FlatBuffer>*/
}
var_underscore = 0;
} else {
{
{ /* Inline kernel#Char#== (var_c,'_') on <var_c:Char> */
var93 = var_c == '_';
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
if (var91){
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:FlatBuffer>*/
}
var_underscore = 1;
} else {
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '_'); /* add on <var_res:FlatBuffer>*/
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var96 = (unsigned char)var_c;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var97 = standard__string___Int___Object__to_s(var94);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var97); /* append on <var_res:FlatBuffer>*/
}
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, 'd'); /* add on <var_res:FlatBuffer>*/
}
var_underscore = 0;
}
}
BREAK_label: (void)0;
var98 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var98;
} else {
goto BREAK_label99;
}
}
BREAK_label99: (void)0;
if (var_underscore){
{
{ /* Inline kernel#Char#ascii ('_') on <'_':Char> */
var102 = (unsigned char)'_';
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var103 = standard__string___Int___Object__to_s(var100);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var103); /* append on <var_res:FlatBuffer>*/
}
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, 'd'); /* add on <var_res:FlatBuffer>*/
}
} else {
}
{
var104 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:FlatBuffer>*/
}
var = var104;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_c for (self: Text): String */
val* standard___standard__Text___escape_to_c(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
long var_i /* var i: Int */;
long var2 /* : Int */;
long var_ /* var : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
char var_c /* var c: Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
long var51 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var_oct /* var oct: String */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
long var73 /* : Int */;
val* var74 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_b = var1;
var_i = 0l;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var5 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var_i < var_;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, var_i); /* [] on <var7:SequenceRead[Char]>*/
}
var9 = (char)((long)(var8)>>2);
var_c = var9;
{
{ /* Inline kernel#Char#== (var_c,'\n') on <var_c:Char> */
var12 = var_c == '\n';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "\\n";
var15 = standard___standard__NativeString___to_s_with_length(var14, 2l);
var13 = var15;
varonce = var13;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var13); /* append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\t') on <var_c:Char> */
var18 = var_c == '\t';
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\\t";
var22 = standard___standard__NativeString___to_s_with_length(var21, 2l);
var20 = var22;
varonce19 = var20;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var20); /* append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\000') on <var_c:Char> */
var25 = var_c == '\000';
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "\\000";
var29 = standard___standard__NativeString___to_s_with_length(var28, 4l);
var27 = var29;
varonce26 = var27;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var27); /* append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\"') on <var_c:Char> */
var32 = var_c == '\"';
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "\\\"";
var36 = standard___standard__NativeString___to_s_with_length(var35, 2l);
var34 = var36;
varonce33 = var34;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var34); /* append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var39 = var_c == '\'';
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "\\\'";
var43 = standard___standard__NativeString___to_s_with_length(var42, 2l);
var41 = var43;
varonce40 = var41;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var41); /* append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\\') on <var_c:Char> */
var46 = var_c == '\\';
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\\\\";
var50 = standard___standard__NativeString___to_s_with_length(var49, 2l);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var48); /* append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var53 = (unsigned char)var_c;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var51,32l) on <var51:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var56 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var60 = var51 < 32l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '\\'); /* add on <var_b:FlatBuffer>*/
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var63 = (unsigned char)var_c;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var64 = standard__string___Int___to_base(var61, 8l, 0);
var_oct = var64;
{
var65 = ((long(*)(val* self))(var_oct->class->vft[COLOR_standard__string__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel#Int#== (var65,1l) on <var65:Int> */
var68 = var65 == 1l;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '0'); /* add on <var_b:FlatBuffer>*/
}
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '0'); /* add on <var_b:FlatBuffer>*/
}
} else {
{
var69 = ((long(*)(val* self))(var_oct->class->vft[COLOR_standard__string__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel#Int#== (var69,2l) on <var69:Int> */
var72 = var69 == 2l;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
if (var70){
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '0'); /* add on <var_b:FlatBuffer>*/
}
} else {
}
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var_oct); /* append on <var_b:FlatBuffer>*/
}
} else {
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, var_c); /* add on <var_b:FlatBuffer>*/
}
}
}
}
}
}
}
}
var73 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var73;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var74 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
var = var74;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_more_to_c for (self: Text, String): String */
val* standard___standard__Text___escape_more_to_c(val* self, val* p0) {
val* var /* : String */;
val* var_chars /* var chars: String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var2 /* : String */;
val* var3 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[Char] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
char var_c /* var c: Char */;
val* var9 /* : SequenceRead[Char] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var12 /* : String */;
var_chars = p0;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_b = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__escape_to_c]))(self); /* escape_to_c on <self:Text>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__chars]))(var2); /* chars on <var2:String>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[Char]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[Char]>*/
}
var8 = (char)((long)(var7)>>2);
var_c = var8;
{
var9 = ((val*(*)(val* self))(var_chars->class->vft[COLOR_standard__string__Text__chars]))(var_chars); /* chars on <var_chars:String>*/
}
{
var11 = (val*)((long)(var_c)<<2|2);
var10 = ((short int(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var9, var11); /* has on <var9:SequenceRead[Char]>*/
}
if (var10){
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '\\'); /* add on <var_b:FlatBuffer>*/
}
} else {
}
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, var_c); /* add on <var_b:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[Char]>*/
}
{
var12 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_nit for (self: Text): String */
val* standard___standard__Text___escape_to_nit(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "{}";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__Text__escape_more_to_c]))(self, var1); /* escape_more_to_c on <self:Text>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_sh for (self: Text): String */
val* standard___standard__Text___escape_to_sh(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : nullable Object */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
char var11 /* : Char */;
char var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
val* var23 /* : SequenceRead[Char] */;
val* var24 /* : nullable Object */;
val* var25 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_b = var1;
{
var2 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Text__chars]))(var_b); /* chars on <var_b:FlatBuffer>*/
}
{
var3 = (val*)((long)('\'')<<2|2);
((void(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var2, var3); /* add on <var2:SequenceRead[Char](Sequence[Char])>*/
}
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
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
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (char)((long)(var10)>>2);
var_c = var11;
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var14 = var_c == '\'';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "\'\\\'\'";
var17 = standard___standard__NativeString___to_s_with_length(var16, 4l);
var15 = var17;
varonce = var15;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var15); /* append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#!= (var_c,'\000') on <var_c:Char> */
var20 = var_c == '\000';
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert \'without_null_byte\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 612);
fatal_exit(1);
}
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, var_c); /* add on <var_b:FlatBuffer>*/
}
}
var22 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var22;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var23 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Text__chars]))(var_b); /* chars on <var_b:FlatBuffer>*/
}
{
var24 = (val*)((long)('\'')<<2|2);
((void(*)(val* self, val* p0))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var23, var24); /* add on <var23:SequenceRead[Char](Sequence[Char])>*/
}
{
var25 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_mk for (self: Text): String */
val* standard___standard__Text___escape_to_mk(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
long var_i /* var i: Int */;
long var2 /* : Int */;
long var_ /* var : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
char var_c /* var c: Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_21 /* var : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var_25 /* var : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
short int var_43 /* var : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var_51 /* var : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var60 /* : NativeArray[String] */;
static val* varonce59;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
long var65 /* : Int */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : String */;
long var70 /* : Int */;
val* var71 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_b = var1;
var_i = 0l;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var5 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var_i < var_;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, var_i); /* [] on <var7:SequenceRead[Char]>*/
}
var9 = (char)((long)(var8)>>2);
var_c = var9;
{
{ /* Inline kernel#Char#== (var_c,'$') on <var_c:Char> */
var12 = var_c == '$';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "$$";
var15 = standard___standard__NativeString___to_s_with_length(var14, 2l);
var13 = var15;
varonce = var13;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var13); /* append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,':') on <var_c:Char> */
var20 = var_c == ':';
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_21 = var18;
if (var18){
var17 = var_21;
} else {
{
{ /* Inline kernel#Char#== (var_c,' ') on <var_c:Char> */
var24 = var_c == ' ';
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var17 = var22;
}
var_25 = var17;
if (var17){
var16 = var_25;
} else {
{
{ /* Inline kernel#Char#== (var_c,'#') on <var_c:Char> */
var28 = var_c == '#';
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var16 = var26;
}
if (var16){
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '\\'); /* add on <var_b:FlatBuffer>*/
}
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, var_c); /* add on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var35 = (unsigned char)var_c;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var33,32l) on <var33:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var38 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var42 = var33 < 32l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_43 = var36;
if (var36){
var32 = var_43;
} else {
{
{ /* Inline kernel#Char#== (var_c,';') on <var_c:Char> */
var46 = var_c == ';';
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var32 = var44;
}
var_47 = var32;
if (var32){
var31 = var_47;
} else {
{
{ /* Inline kernel#Char#== (var_c,'|') on <var_c:Char> */
var50 = var_c == '|';
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var31 = var48;
}
var_51 = var31;
if (var31){
var30 = var_51;
} else {
{
{ /* Inline kernel#Char#== (var_c,'\\') on <var_c:Char> */
var54 = var_c == '\\';
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var30 = var52;
}
var_55 = var30;
if (var30){
var29 = var_55;
} else {
{
{ /* Inline kernel#Char#== (var_c,'=') on <var_c:Char> */
var58 = var_c == '=';
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var29 = var56;
}
if (var29){
if (unlikely(varonce59==NULL)) {
var60 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "?";
var64 = standard___standard__NativeString___to_s_with_length(var63, 1l);
var62 = var64;
varonce61 = var62;
}
((struct instance_standard__NativeArray*)var60)->values[0]=var62;
} else {
var60 = varonce59;
varonce59 = NULL;
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var67 = (unsigned char)var_c;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var68 = standard__string___Int___to_base(var65, 16l, 0);
((struct instance_standard__NativeArray*)var60)->values[1]=var68;
{
var69 = ((val*(*)(val* self))(var60->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var60); /* native_to_s on <var60:NativeArray[String]>*/
}
varonce59 = var60;
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var69); /* append on <var_b:FlatBuffer>*/
}
} else {
{
((void(*)(val* self, char p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, var_c); /* add on <var_b:FlatBuffer>*/
}
}
}
}
var70 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var70;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var71 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
var = var71;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#unescape_nit for (self: Text): String */
val* standard___standard__Text___unescape_nit(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
val* var_res /* var res: FlatBuffer */;
short int var_was_slash /* var was_slash: Bool */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
char var10 /* : Char */;
char var_c /* var c: Char */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
long var27 /* : Int */;
val* var29 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_standard__string__FlatBuffer__with_capacity]))(var1, var2); /* with_capacity on <var1:FlatBuffer>*/
}
var_res = var1;
var_was_slash = 0;
var_i = 0l;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var7 = var_i < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var9 = ((val*(*)(val* self, long p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var8, var_i); /* [] on <var8:SequenceRead[Char]>*/
}
var10 = (char)((long)(var9)>>2);
var_c = var10;
var11 = !var_was_slash;
if (var11){
{
{ /* Inline kernel#Char#== (var_c,'\\') on <var_c:Char> */
var14 = var_c == '\\';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var_was_slash = 1;
} else {
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:FlatBuffer>*/
}
}
goto BREAK_label;
} else {
}
var_was_slash = 0;
{
{ /* Inline kernel#Char#== (var_c,'n') on <var_c:Char> */
var17 = var_c == 'n';
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '\n'); /* add on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'r') on <var_c:Char> */
var20 = var_c == 'r';
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '\015'); /* add on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'t') on <var_c:Char> */
var23 = var_c == 't';
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '\t'); /* add on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'0') on <var_c:Char> */
var26 = var_c == '0';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '\000'); /* add on <var_res:FlatBuffer>*/
}
} else {
{
((void(*)(val* self, char p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:FlatBuffer>*/
}
}
}
}
}
BREAK_label: (void)0;
var27 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var27;
} else {
goto BREAK_label28;
}
}
BREAK_label28: (void)0;
{
var29 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:FlatBuffer>*/
}
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_percent_encoding for (self: Text): String */
val* standard___standard__Text___to_percent_encoding(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_buf /* var buf: FlatBuffer */;
long var_i /* var i: Int */;
long var2 /* : Int */;
long var_ /* var : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
char var_c /* var c: Char */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
short int var_49 /* var : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
short int var_58 /* var : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
short int var_66 /* var : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var_70 /* var : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var_74 /* var : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var_78 /* var : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : NativeArray[String] */;
static val* varonce;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
long var87 /* : Int */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : String */;
long var92 /* : Int */;
val* var93 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_buf = var1;
var_i = 0l;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var5 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var_i < var_;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, var_i); /* [] on <var7:SequenceRead[Char]>*/
}
var9 = (char)((long)(var8)>>2);
var_c = var9;
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var19 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var23 = var_c >= '0';
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_24 = var17;
if (var17){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var27 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var31 = var_c <= '9';
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var16 = var25;
} else {
var16 = var_24;
}
var_32 = var16;
if (var16){
var15 = var_32;
} else {
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var36 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var40 = var_c >= 'a';
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_41 = var34;
if (var34){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var44 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var48 = var_c <= 'z';
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var33 = var42;
} else {
var33 = var_41;
}
var15 = var33;
}
var_49 = var15;
if (var15){
var14 = var_49;
} else {
{
{ /* Inline kernel#Char#>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var53 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var57 = var_c >= 'A';
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_58 = var51;
if (var51){
{
{ /* Inline kernel#Char#<= (var_c,'Z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var61 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var65 = var_c <= 'Z';
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var50 = var59;
} else {
var50 = var_58;
}
var14 = var50;
}
var_66 = var14;
if (var14){
var13 = var_66;
} else {
{
{ /* Inline kernel#Char#== (var_c,'-') on <var_c:Char> */
var69 = var_c == '-';
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var13 = var67;
}
var_70 = var13;
if (var13){
var12 = var_70;
} else {
{
{ /* Inline kernel#Char#== (var_c,'.') on <var_c:Char> */
var73 = var_c == '.';
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var12 = var71;
}
var_74 = var12;
if (var12){
var11 = var_74;
} else {
{
{ /* Inline kernel#Char#== (var_c,'_') on <var_c:Char> */
var77 = var_c == '_';
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var11 = var75;
}
var_78 = var11;
if (var11){
var10 = var_78;
} else {
{
{ /* Inline kernel#Char#== (var_c,'~') on <var_c:Char> */
var81 = var_c == '~';
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var10 = var79;
}
if (var10){
{
((void(*)(val* self, char p0))(var_buf->class->vft[COLOR_standard__string__Buffer__add]))(var_buf, var_c); /* add on <var_buf:FlatBuffer>*/
}
} else {
if (unlikely(varonce==NULL)) {
var82 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "%";
var86 = standard___standard__NativeString___to_s_with_length(var85, 1l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var82)->values[0]=var84;
} else {
var82 = varonce;
varonce = NULL;
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var89 = (unsigned char)var_c;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var90 = standard__string___Int___to_hex(var87);
((struct instance_standard__NativeArray*)var82)->values[1]=var90;
{
var91 = ((val*(*)(val* self))(var82->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce = var82;
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_standard__string__Buffer__append]))(var_buf, var91); /* append on <var_buf:FlatBuffer>*/
}
}
var92 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var92;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var93 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_standard__string__Object__to_s]))(var_buf); /* to_s on <var_buf:FlatBuffer>*/
}
var = var93;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#from_percent_encoding for (self: Text): String */
val* standard___standard__Text___from_percent_encoding(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_buf /* var buf: FlatBuffer */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
char var_c /* var c: Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
val* var35 /* : Text */;
val* var_hex_s /* var hex_s: Text */;
short int var36 /* : Bool */;
long var37 /* : Int */;
long var_hex_i /* var hex_i: Int */;
char var38 /* : Char */;
char var40 /* : Char */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
val* var62 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_buf = var1;
var_i = 0l;
for(;;) {
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#< (var_i,var2) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var_i < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, var_i); /* [] on <var7:SequenceRead[Char]>*/
}
var9 = (char)((long)(var8)>>2);
var_c = var9;
{
{ /* Inline kernel#Char#== (var_c,'%') on <var_c:Char> */
var12 = var_c == '%';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline kernel#Int#+ (var_i,2l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var15 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var19 = var_i + 2l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
var20 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#>= (var13,var20) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var27 = var13 >= var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
((void(*)(val* self, char p0))(var_buf->class->vft[COLOR_standard__string__Buffer__add]))(var_buf, '?'); /* add on <var_buf:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var34 = var_i + 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_i = var28;
{
var35 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var_i, 2l); /* substring on <self:Text>*/
}
var_hex_s = var35;
{
var36 = ((short int(*)(val* self))(var_hex_s->class->vft[COLOR_standard__string__Text__is_hex]))(var_hex_s); /* is_hex on <var_hex_s:Text>*/
}
if (var36){
{
var37 = ((long(*)(val* self))(var_hex_s->class->vft[COLOR_standard__string__Text__to_hex]))(var_hex_s); /* to_hex on <var_hex_s:Text>*/
}
var_hex_i = var37;
{
{ /* Inline kernel#Int#ascii (var_hex_i) on <var_hex_i:Int> */
var40 = var_hex_i;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
((void(*)(val* self, char p0))(var_buf->class->vft[COLOR_standard__string__Buffer__add]))(var_buf, var38); /* add on <var_buf:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var47 = var_i + 1l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_i = var41;
} else {
{
((void(*)(val* self, char p0))(var_buf->class->vft[COLOR_standard__string__Buffer__add]))(var_buf, '?'); /* add on <var_buf:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var50 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var54 = var_i - 1l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_i = var48;
}
}
} else {
{
((void(*)(val* self, char p0))(var_buf->class->vft[COLOR_standard__string__Buffer__add]))(var_buf, var_c); /* add on <var_buf:FlatBuffer>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var57 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var61 = var_i + 1l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_i = var55;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var62 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_standard__string__Object__to_s]))(var_buf); /* to_s on <var_buf:FlatBuffer>*/
}
var = var62;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#html_escape for (self: Text): String */
val* standard___standard__Text___html_escape(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_buf /* var buf: FlatBuffer */;
long var_i /* var i: Int */;
long var2 /* : Int */;
long var_ /* var : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
char var_c /* var c: Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
long var51 /* : Int */;
val* var52 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_buf = var1;
var_i = 0l;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var5 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var_i < var_;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, var_i); /* [] on <var7:SequenceRead[Char]>*/
}
var9 = (char)((long)(var8)>>2);
var_c = var9;
{
{ /* Inline kernel#Char#== (var_c,'&') on <var_c:Char> */
var12 = var_c == '&';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "&amp;";
var15 = standard___standard__NativeString___to_s_with_length(var14, 5l);
var13 = var15;
varonce = var13;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_standard__string__Buffer__append]))(var_buf, var13); /* append on <var_buf:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'<') on <var_c:Char> */
var18 = var_c == '<';
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "&lt;";
var22 = standard___standard__NativeString___to_s_with_length(var21, 4l);
var20 = var22;
varonce19 = var20;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_standard__string__Buffer__append]))(var_buf, var20); /* append on <var_buf:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'>') on <var_c:Char> */
var25 = var_c == '>';
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "&gt;";
var29 = standard___standard__NativeString___to_s_with_length(var28, 4l);
var27 = var29;
varonce26 = var27;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_standard__string__Buffer__append]))(var_buf, var27); /* append on <var_buf:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\"') on <var_c:Char> */
var32 = var_c == '\"';
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "&#34;";
var36 = standard___standard__NativeString___to_s_with_length(var35, 5l);
var34 = var36;
varonce33 = var34;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_standard__string__Buffer__append]))(var_buf, var34); /* append on <var_buf:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var39 = var_c == '\'';
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "&#39;";
var43 = standard___standard__NativeString___to_s_with_length(var42, 5l);
var41 = var43;
varonce40 = var41;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_standard__string__Buffer__append]))(var_buf, var41); /* append on <var_buf:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'/') on <var_c:Char> */
var46 = var_c == '/';
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "&#47;";
var50 = standard___standard__NativeString___to_s_with_length(var49, 5l);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_standard__string__Buffer__append]))(var_buf, var48); /* append on <var_buf:FlatBuffer>*/
}
} else {
{
((void(*)(val* self, char p0))(var_buf->class->vft[COLOR_standard__string__Buffer__add]))(var_buf, var_c); /* add on <var_buf:FlatBuffer>*/
}
}
}
}
}
}
}
var51 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var51;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var52 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_standard__string__Object__to_s]))(var_buf); /* to_s on <var_buf:FlatBuffer>*/
}
var = var52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#== for (self: Text, nullable Object): Bool */
short int standard___standard__Text___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : SequenceRead[Char] */;
short int var16 /* : Bool */;
var_o = p0;
if (var_o == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_o, ((val*)NULL)); /* == on <var_o:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_o:nullable Object(Object)> isa Text */
cltype = type_standard__Text.color;
idtype = type_standard__Text.id;
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
var4 = !var3;
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#is_same_instance (self,var_o) on <self:Text> */
var7 = self == var_o;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 1;
goto RET_LABEL;
} else {
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
var9 = ((long(*)(val* self))(var_o->class->vft[COLOR_standard__string__Text__length]))(var_o); /* length on <var_o:nullable Object(Text)>*/
}
{
{ /* Inline kernel#Int#!= (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = 0;
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var15 = ((val*(*)(val* self))(var_o->class->vft[COLOR_standard__string__Text__chars]))(var_o); /* chars on <var_o:nullable Object(Text)>*/
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var14, var15); /* == on <var14:SequenceRead[Char]>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#< for (self: Text, Text): Bool */
short int standard___standard__Text___standard__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Text */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_self_chars /* var self_chars: IndexedIterator[Char] */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_other_chars /* var other_chars: IndexedIterator[Char] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
char var17 /* : Char */;
char var18 /* : Char */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
char var28 /* : Char */;
char var29 /* : Char */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 800);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var2); /* iterator on <var2:SequenceRead[Char]>*/
}
var_self_chars = var3;
{
var4 = ((val*(*)(val* self))(var_other->class->vft[COLOR_standard__string__Text__chars]))(var_other); /* chars on <var_other:Text>*/
}
{
var5 = ((val*(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var4); /* iterator on <var4:SequenceRead[Char]>*/
}
var_other_chars = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
var_ = var7;
if (var7){
{
var8 = ((short int(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_other_chars); /* is_ok on <var_other_chars:IndexedIterator[Char]>*/
}
var6 = var8;
} else {
var6 = var_;
}
if (var6){
{
var9 = ((val*(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var10 = ((val*(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#< (var9,var10) on <var9:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var10:nullable Object(Char)> isa OTHER */
/* <var10:nullable Object(Char)> isa OTHER */
var13 = 1; /* easy <var10:nullable Object(Char)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = var10 == NULL ? "null" : (((long)var10&3)?type_info[((long)var10&3)]:var10->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 611);
fatal_exit(1);
}
var17 = (char)((long)(var9)>>2);
var18 = (char)((long)(var10)>>2);
var19 = var17 < var18;
var11 = var19;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 1;
goto RET_LABEL;
} else {
}
{
var20 = ((val*(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var21 = ((val*(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#> (var20,var21) on <var20:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var21:nullable Object(Char)> isa OTHER */
/* <var21:nullable Object(Char)> isa OTHER */
var24 = 1; /* easy <var21:nullable Object(Char)> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = var21 == NULL ? "null" : (((long)var21&3)?type_info[((long)var21&3)]:var21->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 613);
fatal_exit(1);
}
var28 = (char)((long)(var20)>>2);
var29 = (char)((long)(var21)>>2);
var30 = var28 > var29;
var22 = var30;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_self_chars); /* next on <var_self_chars:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_other_chars); /* next on <var_other_chars:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var31 = ((short int(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_dot for (self: Text): String */
val* standard___standard__Text___escape_to_dot(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "|{}<>";
var3 = standard___standard__NativeString___to_s_with_length(var2, 5l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__Text__escape_more_to_c]))(self, var1); /* escape_more_to_c on <self:Text>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#flatten for (self: Text): FlatText */
val* standard___standard__Text___flatten(val* self) {
val* var /* : FlatText */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "flatten", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 831);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#hash_cache for (self: Text): nullable Int */
val* standard___standard__Text___hash_cache(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#hash_cache= for (self: Text, nullable Int) */
void standard___standard__Text___hash_cache_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__Text___hash_cache].val = p0; /* _hash_cache on <self:Text> */
RET_LABEL:;
}
/* method string#Text#hash for (self: Text): Int */
long standard___standard__Text___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var_h /* var h: Int */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : nullable Object */;
char var13 /* : Char */;
char var_char /* var char: Char */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var34 /* : Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
long var37 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__hash_cache]))(self); /* hash_cache on <self:Text>*/
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var1,((val*)NULL)) on <var1:nullable Int> */
var5 = 0; /* incompatible types Int vs. null; cannot be NULL */
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var_h = 5381l;
var_i = 0l;
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var10 = var_i < var_;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var12 = ((val*(*)(val* self, long p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var11, var_i); /* [] on <var11:SequenceRead[Char]>*/
}
var13 = (char)((long)(var12)>>2);
var_char = var13;
{
{ /* Inline kernel#Int#lshift (var_h,5l) on <var_h:Int> */
var16 = var_h << 5l;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var14,var_h) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var19 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var23 = var14 + var_h;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var_char) on <var_char:Char> */
var26 = (unsigned char)var_char;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var17,var24) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var29 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var33 = var17 + var24;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_h = var27;
var34 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var34;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var35 = (val*)(var_h<<2|1);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__Text__hash_cache_61d]))(self, var35); /* hash_cache= on <self:Text>*/
}
} else {
}
{
var36 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__hash_cache]))(self); /* hash_cache on <self:Text>*/
}
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 849);
fatal_exit(1);
}
var37 = (long)(var36)>>2;
var = var37;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatText#items for (self: FlatText): NativeString */
char* standard___standard__FlatText___items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#items= for (self: FlatText, NativeString) */
void standard___standard__FlatText___items_61d(val* self, char* p0) {
self->attrs[COLOR_standard__string__FlatText___items].str = p0; /* _items on <self:FlatText> */
RET_LABEL:;
}
/* method string#FlatText#real_items for (self: FlatText): nullable NativeString */
val* standard___standard__FlatText___real_items(val* self) {
val* var /* : nullable NativeString */;
val* var1 /* : nullable NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatText___real_items].val; /* _real_items on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#real_items= for (self: FlatText, nullable NativeString) */
void standard___standard__FlatText___real_items_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatText___real_items].val = p0; /* _real_items on <self:FlatText> */
RET_LABEL:;
}
/* method string#FlatText#fast_cstring for (self: FlatText): NativeString */
char* standard___standard__FlatText___fast_cstring(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "fast_cstring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 867);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#FlatText#length for (self: FlatText): Int */
long standard___standard__FlatText___Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#length= for (self: FlatText, Int) */
void standard___standard__FlatText___length_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatText___length].l = p0; /* _length on <self:FlatText> */
RET_LABEL:;
}
/* method string#FlatText#output for (self: FlatText) */
void standard___standard__FlatText___standard__kernel__Object__output(val* self) {
long var_i /* var i: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
char* var5 /* : NativeString */;
char var6 /* : Char */;
char var8 /* : Char */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
var_i = 0l;
for(;;) {
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatText>*/
}
{
{ /* Inline kernel#Int#< (var_i,var) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var4 = var_i < var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatText>*/
}
{
{ /* Inline string#NativeString#[] (var5,var_i) on <var5:NativeString> */
var8 = var5[var_i];
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Char#output (var6) on <var6:Char> */
printf("%c", var6);
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var16 = var_i + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_i = var10;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#FlatText#flatten for (self: FlatText): FlatText */
val* standard___standard__FlatText___Text__flatten(val* self) {
val* var /* : FlatText */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#target for (self: StringCharView): Text */
val* standard__string___standard__string__StringCharView___target(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:StringCharView> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 905);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#target= for (self: StringCharView, Text) */
void standard__string___standard__string__StringCharView___target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (target) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_standard__string__StringCharView__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 905);
fatal_exit(1);
}
self->attrs[COLOR_standard__string__StringCharView___target].val = p0; /* _target on <self:StringCharView> */
RET_LABEL:;
}
/* method string#StringCharView#is_empty for (self: StringCharView): Bool */
short int standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:StringCharView>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__is_empty]))(var1); /* is_empty on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#length for (self: StringCharView): Int */
long standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Text */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:StringCharView>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#iterator for (self: StringCharView): IndexedIterator[Char] */
val* standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[nullable Object] */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead__iterator_from]))(self, 0l); /* iterator_from on <self:StringCharView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#reverse_iterator for (self: StringCharView): IndexedIterator[Char] */
val* standard__string___standard__string__StringCharView___standard__abstract_collection__SequenceRead__reverse_iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
val* var6 /* : IndexedIterator[nullable Object] */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:StringCharView>*/
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
var6 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead__reverse_iterator_from]))(self, var2); /* reverse_iterator_from on <self:StringCharView>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#init for (self: StringCharView) */
void standard__string___standard__string__StringCharView___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__StringCharView___standard__kernel__Object__init]))(self); /* init on <self:StringCharView>*/
}
RET_LABEL:;
}
/* method string#String#to_s for (self: String): String */
val* standard___standard__String___Object__to_s(val* self) {
val* var /* : String */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#+ for (self: String, Text): String */
val* standard___standard__String____43d(val* self, val* p0) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "+", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 938);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#String#* for (self: String, Int): String */
val* standard___standard__String____42d(val* self, long p0) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "*", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 944);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#String#insert_at for (self: String, String, Int): String */
val* standard___standard__String___insert_at(val* self, val* p0, long p1) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 951);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#String#substrings for (self: String): Iterator[String] */
val* standard___standard__String___Text__substrings(val* self) {
val* var /* : Iterator[String] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substrings", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 956);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#String#reversed for (self: String): String */
val* standard___standard__String___reversed(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "reversed", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 958);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#String#to_upper for (self: String): String */
val* standard___standard__String___to_upper(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_upper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 965);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#String#to_lower for (self: String): String */
val* standard___standard__String___to_lower(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_lower", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 970);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#String#to_snake_case for (self: String): String */
val* standard___standard__String___to_snake_case(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : FlatBuffer */;
long var3 /* : Int */;
val* var_new_str /* var new_str: FlatBuffer */;
short int var_prev_is_lower /* var prev_is_lower: Bool */;
short int var_prev_is_upper /* var prev_is_upper: Bool */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
char var11 /* : Char */;
char var_char /* var char: Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
val* var33 /* : SequenceRead[Char] */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
val* var41 /* : nullable Object */;
short int var42 /* : Bool */;
char var43 /* : Char */;
char var44 /* : Char */;
long var45 /* : Int */;
val* var46 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Text__is_lower]))(self); /* is_lower on <self:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
var2 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_standard__string__FlatBuffer__with_capacity]))(var2, var3); /* with_capacity on <var2:FlatBuffer>*/
}
var_new_str = var2;
var_prev_is_lower = 0;
var_prev_is_upper = 0;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
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
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (char)((long)(var10)>>2);
var_char = var11;
var12 = standard___standard__Char___is_lower(var_char);
if (var12){
{
((void(*)(val* self, char p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:FlatBuffer>*/
}
var_prev_is_lower = 1;
var_prev_is_upper = 0;
} else {
var13 = standard___standard__Char___is_upper(var_char);
if (var13){
if (var_prev_is_lower){
{
((void(*)(val* self, char p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, '_'); /* add on <var_new_str:FlatBuffer>*/
}
} else {
var_16 = var_prev_is_upper;
if (var_prev_is_upper){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var23 = var_i + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
var24 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel#Int#< (var17,var24) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var31 = var17 < var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var15 = var25;
} else {
var15 = var_16;
}
var_32 = var15;
if (var15){
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var40 = var_i + 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = ((val*(*)(val* self, long p0))((((long)var33&3)?class_info[((long)var33&3)]:var33->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var33, var34); /* [] on <var33:SequenceRead[Char]>*/
}
var43 = (char)((long)(var41)>>2);
var42 = standard___standard__Char___is_lower(var43);
var14 = var42;
} else {
var14 = var_32;
}
if (var14){
{
((void(*)(val* self, char p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, '_'); /* add on <var_new_str:FlatBuffer>*/
}
} else {
}
}
var44 = standard___standard__Char___to_lower(var_char);
{
((void(*)(val* self, char p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, var44); /* add on <var_new_str:FlatBuffer>*/
}
var_prev_is_lower = 0;
var_prev_is_upper = 1;
} else {
{
((void(*)(val* self, char p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:FlatBuffer>*/
}
var_prev_is_lower = 0;
var_prev_is_upper = 0;
}
}
var45 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var45;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var46 = ((val*(*)(val* self))(var_new_str->class->vft[COLOR_standard__string__Object__to_s]))(var_new_str); /* to_s on <var_new_str:FlatBuffer>*/
}
var = var46;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#to_camel_case for (self: String): String */
val* standard___standard__String___to_camel_case(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : FlatBuffer */;
val* var_new_str /* var new_str: FlatBuffer */;
short int var_is_first_char /* var is_first_char: Bool */;
short int var_follows_us /* var follows_us: Bool */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
char var10 /* : Char */;
char var_char /* var char: Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
char var14 /* : Char */;
long var15 /* : Int */;
val* var16 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Text__is_upper]))(self); /* is_upper on <self:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
var2 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:FlatBuffer>*/
}
var_new_str = var2;
var_is_first_char = 1;
var_follows_us = 0;
var_i = 0l;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var7 = var_i < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var9 = ((val*(*)(val* self, long p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var8, var_i); /* [] on <var8:SequenceRead[Char]>*/
}
var10 = (char)((long)(var9)>>2);
var_char = var10;
if (var_is_first_char){
{
((void(*)(val* self, char p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:FlatBuffer>*/
}
var_is_first_char = 0;
} else {
{
{ /* Inline kernel#Char#== (var_char,'_') on <var_char:Char> */
var13 = var_char == '_';
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var_follows_us = 1;
} else {
if (var_follows_us){
var14 = standard___standard__Char___to_upper(var_char);
{
((void(*)(val* self, char p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, var14); /* add on <var_new_str:FlatBuffer>*/
}
var_follows_us = 0;
} else {
{
((void(*)(val* self, char p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:FlatBuffer>*/
}
}
}
}
var15 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var15;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var16 = ((val*(*)(val* self))(var_new_str->class->vft[COLOR_standard__string__Object__to_s]))(var_new_str); /* to_s on <var_new_str:FlatBuffer>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#capitalized for (self: String): String */
val* standard___standard__String___capitalized(val* self) {
val* var /* : String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : FlatBuffer */;
long var6 /* : Int */;
val* var_buf /* var buf: FlatBuffer */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
char var10 /* : Char */;
char var_curr /* var curr: Char */;
char var_prev /* var prev: Char */;
long var_i /* var i: Int */;
long var11 /* : Int */;
long var_ /* var : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var15 /* : Bool */;
char var16 /* : Char */;
short int var17 /* : Bool */;
char var18 /* : Char */;
char var19 /* : Char */;
long var20 /* : Int */;
val* var21 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
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
var = self;
goto RET_LABEL;
} else {
}
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_standard__string__FlatBuffer__with_capacity]))(var5, var6); /* with_capacity on <var5:FlatBuffer>*/
}
var_buf = var5;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, 0l); /* [] on <var7:SequenceRead[Char]>*/
}
var10 = (char)((long)(var8)>>2);
var9 = standard___standard__Char___to_upper(var10);
var_curr = var9;
var_prev = var_curr;
{
((void(*)(val* self, long p0, char p1))(var_buf->class->vft[COLOR_standard__string__Buffer___91d_93d_61d]))(var_buf, 0l, var_curr); /* []= on <var_buf:FlatBuffer>*/
}
var_i = 1l;
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
var_ = var11;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var14 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var15 = var_i < var_;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var_prev = var_curr;
{
var16 = ((char(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__Text___91d_93d]))(self, var_i); /* [] on <self:String>*/
}
var_curr = var16;
var17 = standard___standard__Char___is_letter(var_prev);
if (var17){
var18 = standard___standard__Char___to_lower(var_curr);
{
((void(*)(val* self, long p0, char p1))(var_buf->class->vft[COLOR_standard__string__Buffer___91d_93d_61d]))(var_buf, var_i, var18); /* []= on <var_buf:FlatBuffer>*/
}
} else {
var19 = standard___standard__Char___to_upper(var_curr);
{
((void(*)(val* self, long p0, char p1))(var_buf->class->vft[COLOR_standard__string__Buffer___91d_93d_61d]))(var_buf, var_i, var19); /* []= on <var_buf:FlatBuffer>*/
}
}
var20 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var21 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_standard__string__Object__to_s]))(var_buf); /* to_s on <var_buf:FlatBuffer>*/
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#tgt for (self: FlatSubstringsIter): nullable FlatText */
val* standard__string___standard__string__FlatSubstringsIter___tgt(val* self) {
val* var /* : nullable FlatText */;
val* var1 /* : nullable FlatText */;
var1 = self->attrs[COLOR_standard__string__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#tgt= for (self: FlatSubstringsIter, nullable FlatText) */
void standard__string___standard__string__FlatSubstringsIter___tgt_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatSubstringsIter___tgt].val = p0; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL:;
}
/* method string#FlatSubstringsIter#item for (self: FlatSubstringsIter): FlatText */
val* standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatText */;
short int var1 /* : Bool */;
val* var2 /* : nullable FlatText */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:FlatSubstringsIter>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1109);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatSubstringsIter__tgt]))(self); /* tgt on <self:FlatSubstringsIter>*/
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1110);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#is_ok for (self: FlatSubstringsIter): Bool */
short int standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FlatText */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatSubstringsIter__tgt]))(self); /* tgt on <self:FlatSubstringsIter>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable FlatText>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#next for (self: FlatSubstringsIter) */
void standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__next(val* self) {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__FlatSubstringsIter__tgt_61d]))(self, ((val*)NULL)); /* tgt= on <self:FlatSubstringsIter>*/
}
RET_LABEL:;
}
/* method string#FlatSubstringsIter#init for (self: FlatSubstringsIter) */
void standard__string___standard__string__FlatSubstringsIter___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatSubstringsIter___standard__kernel__Object__init]))(self); /* init on <self:FlatSubstringsIter>*/
}
RET_LABEL:;
}
/* method string#FlatString#index_from for (self: FlatString): Int */
long standard___standard__FlatString___index_from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#index_from= for (self: FlatString, Int) */
void standard___standard__FlatString___index_from_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatString___index_from].l = p0; /* _index_from on <self:FlatString> */
RET_LABEL:;
}
/* method string#FlatString#index_to for (self: FlatString): Int */
long standard___standard__FlatString___index_to(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#index_to= for (self: FlatString, Int) */
void standard___standard__FlatString___index_to_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatString___index_to].l = p0; /* _index_to on <self:FlatString> */
RET_LABEL:;
}
/* method string#FlatString#chars for (self: FlatString): SequenceRead[Char] */
val* standard___standard__FlatString___Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : FlatStringCharView */;
var1 = self->attrs[COLOR_standard__string__FlatString___chars].val != NULL; /* _chars on <self:FlatString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__string__FlatString___chars].val; /* _chars on <self:FlatString> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1129);
fatal_exit(1);
}
} else {
var3 = NEW_standard__string__FlatStringCharView(&type_standard__string__FlatStringCharView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var3, self); /* target= on <var3:FlatStringCharView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:FlatStringCharView>*/
}
self->attrs[COLOR_standard__string__FlatString___chars].val = var3; /* _chars on <self:FlatString> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatString#chars= for (self: FlatString, SequenceRead[Char]) */
void standard___standard__FlatString___chars_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatString___chars].val = p0; /* _chars on <self:FlatString> */
RET_LABEL:;
}
/* method string#FlatString#[] for (self: FlatString, Int): Char */
char standard___standard__FlatString___Text___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
char var30 /* : Char */;
char var32 /* : Char */;
var_index = p0;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1135);
fatal_exit(1);
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var_index,var5) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var12 = var_index + var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_to]))(self); /* index_to on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#<= (var6,var13) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var20 = var6 <= var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1136);
fatal_exit(1);
}
{
var21 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
{
var22 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var_index,var22) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var29 = var_index + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var21,var23) on <var21:NativeString> */
var32 = var21[var23];
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#reversed for (self: FlatString): String */
val* standard___standard__FlatString___String__reversed(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
char* var_native /* var native: NativeString */;
long var10 /* : Int */;
long var_length /* var length: Int */;
char* var11 /* : NativeString */;
char* var_items /* var items: NativeString */;
long var_pos /* var pos: Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var_ipos /* var ipos: Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
char var26 /* : Char */;
char var28 /* : Char */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
var1 = NULL/*special!*/;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var1,var3) on <var1:NativeString> */
var9 = (char*)nit_alloc(var3);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_native = var7;
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
var_length = var10;
{
var11 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
var_items = var11;
var_pos = 0l;
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
var_ipos = var12;
for(;;) {
{
{ /* Inline kernel#Int#< (var_pos,var_length) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_length:Int> isa OTHER */
/* <var_length:Int> isa OTHER */
var21 = 1; /* easy <var_length:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var25 = var_pos < var_length;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline string#NativeString#[] (var_items,var_ipos) on <var_items:NativeString> */
var28 = var_items[var_ipos];
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var_native,var_pos,var26) on <var_native:NativeString> */
var_native[var_pos]=var26;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var36 = var_pos + 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_pos = var30;
{
{ /* Inline kernel#Int#- (var_ipos,1l) on <var_ipos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var43 = var_ipos - 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_ipos = var37;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var44 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
var45 = standard___standard__NativeString___to_s_with_length(var_native, var44);
var = var45;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#fast_cstring for (self: FlatString): NativeString */
char* standard___standard__FlatString___FlatText__fast_cstring(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
{
{ /* Inline string#NativeString#fast_cstring (var1,var2) on <var1:NativeString> */
var5 = var1 + var2;
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
/* method string#FlatString#substring for (self: FlatString, Int, Int): String */
val* standard___standard__FlatString___Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
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
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var_new_from /* var new_from: Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
long var49 /* : Int */;
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
long var_new_len /* var new_len: Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
short int var70 /* : Bool */;
val* var71 /* : Text */;
val* var72 /* : FlatString */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
short int var81 /* : Bool */;
val* var82 /* : Text */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
long var_to /* var to: Int */;
val* var97 /* : FlatString */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
long var106 /* : Int */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
long var112 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1163);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var11 = var_from < 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var14 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var18 = var_count + var_from;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_count = var12;
{
{ /* Inline kernel#Int#< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var21 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var25 = var_count < 0l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var_count = 0l;
} else {
}
var_from = 0l;
} else {
}
{
var26 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var26,var_from) on <var26:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var29 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var33 = var26 + var_from;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_new_from = var27;
{
{ /* Inline kernel#Int#+ (var_new_from,var_count) on <var_new_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var36 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var40 = var_new_from + var_count;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_to]))(self); /* index_to on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#> (var34,var41) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var41:Int> isa OTHER */
/* <var41:Int> isa OTHER */
var44 = 1; /* easy <var41:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var48 = var34 > var41;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
var49 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_to]))(self); /* index_to on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#- (var49,var_new_from) on <var49:Int> */
/* Covariant cast for argument 0 (i) <var_new_from:Int> isa OTHER */
/* <var_new_from:Int> isa OTHER */
var52 = 1; /* easy <var_new_from:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var56 = var49 - var_new_from;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var50,1l) on <var50:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var59 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var63 = var50 + 1l;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_new_len = var57;
{
{ /* Inline kernel#Int#<= (var_new_len,0l) on <var_new_len:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var66 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var70 = var_new_len <= 0l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
{
var71 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__empty]))(self); /* empty on <self:FlatString>*/
}
var = var71;
goto RET_LABEL;
} else {
}
var72 = NEW_standard__FlatString(&type_standard__FlatString);
{
var73 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
{
var74 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_to]))(self); /* index_to on <self:FlatString>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var72->class->vft[COLOR_standard__string__FlatString__with_infos]))(var72, var73, var_new_len, var_new_from, var74); /* with_infos on <var72:FlatString>*/
}
var = var72;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var77 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var81 = var_count <= 0l;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
if (var75){
{
var82 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__empty]))(self); /* empty on <self:FlatString>*/
}
var = var82;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_new_from,var_count) on <var_new_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var85 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var89 = var_new_from + var_count;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var83,1l) on <var83:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var92 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var96 = var83 - 1l;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
var_to = var90;
var97 = NEW_standard__FlatString(&type_standard__FlatString);
{
var98 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#- (var_to,var_new_from) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <var_new_from:Int> isa OTHER */
/* <var_new_from:Int> isa OTHER */
var101 = 1; /* easy <var_new_from:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var105 = var_to - var_new_from;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var99,1l) on <var99:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var108 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var112 = var99 + 1l;
var106 = var112;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var97->class->vft[COLOR_standard__string__FlatString__with_infos]))(var97, var98, var106, var_new_from, var_to); /* with_infos on <var97:FlatString>*/
}
var = var97;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#empty for (self: FlatString): String */
val* standard___standard__FlatString___Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = standard___standard__NativeString___to_s_with_length(var2, 0l);
var1 = var3;
varonce = var1;
}
/* <var1:String> isa FlatString */
cltype = type_standard__FlatString.color;
idtype = type_standard__FlatString.id;
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1186);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#to_upper for (self: FlatString): String */
val* standard___standard__FlatString___String__to_upper(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
char* var_outstr /* var outstr: NativeString */;
long var_out_index /* var out_index: Int */;
char* var10 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var11 /* : Int */;
long var_index_from /* var index_from: Int */;
long var12 /* : Int */;
long var_max /* var max: Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
char var20 /* : Char */;
char var22 /* : Char */;
char var23 /* : Char */;
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
long var39 /* : Int */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
var1 = NULL/*special!*/;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var1,var3) on <var1:NativeString> */
var9 = (char*)nit_alloc(var3);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_outstr = var7;
var_out_index = 0l;
{
var10 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
var_myitems = var10;
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
var_index_from = var11;
{
var12 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_to]))(self); /* index_to on <self:FlatString>*/
}
var_max = var12;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_index_from,var_max) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var15 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var19 = var_index_from <= var_max;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) on <var_myitems:NativeString> */
var22 = var_myitems[var_index_from];
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var23 = standard___standard__Char___to_upper(var20);
{
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var23) on <var_outstr:NativeString> */
var_outstr[var_out_index]=var23;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_out_index,1l) on <var_out_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var31 = var_out_index + 1l;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_out_index = var25;
{
{ /* Inline kernel#Int#+ (var_index_from,1l) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var38 = var_index_from + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_index_from = var32;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var39 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var39,'\000') on <var_outstr:NativeString> */
var_outstr[var39]='\000';
RET_LABEL40:(void)0;
}
}
{
var41 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
var42 = standard___standard__NativeString___to_s_with_length(var_outstr, var41);
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#to_lower for (self: FlatString): String */
val* standard___standard__FlatString___String__to_lower(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
char* var_outstr /* var outstr: NativeString */;
long var_out_index /* var out_index: Int */;
char* var10 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var11 /* : Int */;
long var_index_from /* var index_from: Int */;
long var12 /* : Int */;
long var_max /* var max: Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
char var20 /* : Char */;
char var22 /* : Char */;
char var23 /* : Char */;
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
long var39 /* : Int */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
var1 = NULL/*special!*/;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var1,var3) on <var1:NativeString> */
var9 = (char*)nit_alloc(var3);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_outstr = var7;
var_out_index = 0l;
{
var10 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
var_myitems = var10;
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
var_index_from = var11;
{
var12 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_to]))(self); /* index_to on <self:FlatString>*/
}
var_max = var12;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_index_from,var_max) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var15 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var19 = var_index_from <= var_max;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) on <var_myitems:NativeString> */
var22 = var_myitems[var_index_from];
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var23 = standard___standard__Char___to_lower(var20);
{
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var23) on <var_outstr:NativeString> */
var_outstr[var_out_index]=var23;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_out_index,1l) on <var_out_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var31 = var_out_index + 1l;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_out_index = var25;
{
{ /* Inline kernel#Int#+ (var_index_from,1l) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var38 = var_index_from + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_index_from = var32;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var39 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var39,'\000') on <var_outstr:NativeString> */
var_outstr[var39]='\000';
RET_LABEL40:(void)0;
}
}
{
var41 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
var42 = standard___standard__NativeString___to_s_with_length(var_outstr, var41);
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#output for (self: FlatString) */
void standard___standard__FlatString___standard__kernel__Object__output(val* self) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_imax /* var imax: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
char* var6 /* : NativeString */;
char var7 /* : Char */;
char var9 /* : Char */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
var_i = var;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_to]))(self); /* index_to on <self:FlatString>*/
}
var_imax = var1;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_imax) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_imax:Int> isa OTHER */
/* <var_imax:Int> isa OTHER */
var4 = 1; /* easy <var_imax:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var5 = var_i <= var_imax;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
{
{ /* Inline string#NativeString#[] (var6,var_i) on <var6:NativeString> */
var9 = var6[var_i];
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Char#output (var7) on <var7:Char> */
printf("%c", var7);
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var17 = var_i + 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_i = var11;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#FlatString#with_infos for (self: FlatString, NativeString, Int, Int, Int) */
void standard___standard__FlatString___with_infos(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: NativeString */;
long var_length /* var length: Int */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FlatString>*/
}
var_items = p0;
var_length = p1;
var_from = p2;
var_to = p3;
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatText__items_61d]))(self, var_items); /* items= on <self:FlatString>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatText__length_61d]))(self, var_length); /* length= on <self:FlatString>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatString__index_from_61d]))(self, var_from); /* index_from= on <self:FlatString>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatString__index_to_61d]))(self, var_to); /* index_to= on <self:FlatString>*/
}
RET_LABEL:;
}
/* method string#FlatString#to_cstring for (self: FlatString): NativeString */
char* standard___standard__FlatString___Text__to_cstring(val* self) {
char* var /* : NativeString */;
val* var1 /* : nullable NativeString */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable NativeString */;
char* var5 /* : NativeString */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
char* var12 /* : NativeString */;
char* var14 /* : NativeString */;
char* var_newItems /* var newItems: NativeString */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
val* var21 /* : nullable NativeString */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__real_items]))(self); /* real_items on <self:FlatString>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable NativeString>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__real_items]))(self); /* real_items on <self:FlatString>*/
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1257);
fatal_exit(1);
}
var5 = ((struct instance_standard__NativeString*)var4)->value; /* autounbox from nullable NativeString to NativeString */;
var = var5;
goto RET_LABEL;
} else {
var6 = NULL/*special!*/;
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
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
{ /* Inline string#NativeString#new (var6,var8) on <var6:NativeString> */
var14 = (char*)nit_alloc(var8);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_newItems = var12;
{
var15 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
{
{ /* Inline string#NativeString#copy_to (var15,var_newItems,var16,var17,0l) on <var15:NativeString> */
memmove(var_newItems+0l,var15+var17,var16);
RET_LABEL18:(void)0;
}
}
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
{
{ /* Inline string#NativeString#[]= (var_newItems,var19,'\000') on <var_newItems:NativeString> */
var_newItems[var19]='\000';
RET_LABEL20:(void)0;
}
}
{
var21 = BOX_standard__NativeString(var_newItems); /* autobox from NativeString to nullable NativeString */
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__FlatText__real_items_61d]))(self, var21); /* real_items= on <self:FlatString>*/
}
var = var_newItems;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#FlatString#== for (self: FlatString, nullable Object): Bool */
short int standard___standard__FlatString___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_my_length /* var my_length: Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var_my_index /* var my_index: Int */;
long var16 /* : Int */;
long var_its_index /* var its_index: Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name;
long var22 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var23 /* : NativeString */;
char* var_itsitems /* var itsitems: NativeString */;
char* var24 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
char var32 /* : Char */;
char var34 /* : Char */;
char var35 /* : Char */;
char var37 /* : Char */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
var_other = p0;
/* <var_other:nullable Object> isa FlatString */
cltype = type_standard__FlatString.color;
idtype = type_standard__FlatString.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
{
var3 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard___standard__FlatString___standard__kernel__Object___61d_61d]))(self, p0); /* == on <self:FlatString>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__object_id]))(self); /* object_id on <self:FlatString>*/
}
{
var5 = ((long(*)(val* self))(var_other->class->vft[COLOR_standard__kernel__Object__object_id]))(var_other); /* object_id on <var_other:nullable Object(FlatString)>*/
}
{
{ /* Inline kernel#Int#== (var4,var5) on <var4:Int> */
var8 = var4 == var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = 1;
goto RET_LABEL;
} else {
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
var_my_length = var9;
{
var10 = ((long(*)(val* self))(var_other->class->vft[COLOR_standard__string__Text__length]))(var_other); /* length on <var_other:nullable Object(FlatString)>*/
}
{
{ /* Inline kernel#Int#!= (var10,var_my_length) on <var10:Int> */
var13 = var10 == var_my_length;
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
var_my_index = var15;
{
var16 = ((long(*)(val* self))(var_other->class->vft[COLOR_standard__string__FlatString__index_from]))(var_other); /* index_from on <var_other:nullable Object(FlatString)>*/
}
var_its_index = var16;
{
{ /* Inline kernel#Int#+ (var_my_index,var_my_length) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var19 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var_my_index + var_my_length;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_last_iteration = var17;
{
var23 = ((char*(*)(val* self))(var_other->class->vft[COLOR_standard__string__FlatText__items]))(var_other); /* items on <var_other:nullable Object(FlatString)>*/
}
var_itsitems = var23;
{
var24 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
var_myitems = var24;
for(;;) {
{
{ /* Inline kernel#Int#< (var_my_index,var_last_iteration) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var27 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var31 = var_my_index < var_last_iteration;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline string#NativeString#[] (var_myitems,var_my_index) on <var_myitems:NativeString> */
var34 = var_myitems[var_my_index];
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var_itsitems,var_its_index) on <var_itsitems:NativeString> */
var37 = var_itsitems[var_its_index];
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Char#!= (var32,var35) on <var32:Char> */
var40 = var32 == var35;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_my_index,1l) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var44 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var48 = var_my_index + 1l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_my_index = var42;
{
{ /* Inline kernel#Int#+ (var_its_index,1l) on <var_its_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var55 = var_its_index + 1l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_its_index = var49;
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
/* method string#FlatString#< for (self: FlatString, Text): Bool */
short int standard___standard__FlatString___standard__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Text */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var_curr_id_self /* var curr_id_self: Int */;
long var13 /* : Int */;
long var_curr_id_other /* var curr_id_other: Int */;
char* var14 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
char* var15 /* : NativeString */;
char* var_its_items /* var its_items: NativeString */;
long var16 /* : Int */;
long var_my_length /* var my_length: Int */;
long var17 /* : Int */;
long var_its_length /* var its_length: Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var_max_iterations /* var max_iterations: Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
char var32 /* : Char */;
char var34 /* : Char */;
char var_my_curr_char /* var my_curr_char: Char */;
char var35 /* : Char */;
char var37 /* : Char */;
char var_its_curr_char /* var its_curr_char: Char */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
short int var69 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1294);
fatal_exit(1);
}
var_other = p0;
/* <var_other:Text> isa FlatString */
cltype3 = type_standard__FlatString.color;
idtype4 = type_standard__FlatString.id;
if(cltype3 >= var_other->type->table_size) {
var2 = 0;
} else {
var2 = var_other->type->type_table[cltype3] == idtype4;
}
var5 = !var2;
if (var5){
{
var6 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard___standard__FlatString___standard__kernel__Comparable___60d]))(self, p0); /* < on <self:FlatString>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__object_id]))(self); /* object_id on <self:FlatString>*/
}
{
var8 = ((long(*)(val* self))(var_other->class->vft[COLOR_standard__kernel__Object__object_id]))(var_other); /* object_id on <var_other:Text(FlatString)>*/
}
{
{ /* Inline kernel#Int#== (var7,var8) on <var7:Int> */
var11 = var7 == var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
var12 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
var_curr_id_self = var12;
{
var13 = ((long(*)(val* self))(var_other->class->vft[COLOR_standard__string__FlatString__index_from]))(var_other); /* index_from on <var_other:Text(FlatString)>*/
}
var_curr_id_other = var13;
{
var14 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
var_my_items = var14;
{
var15 = ((char*(*)(val* self))(var_other->class->vft[COLOR_standard__string__FlatText__items]))(var_other); /* items on <var_other:Text(FlatString)>*/
}
var_its_items = var15;
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
var_my_length = var16;
{
var17 = ((long(*)(val* self))(var_other->class->vft[COLOR_standard__string__Text__length]))(var_other); /* length on <var_other:Text(FlatString)>*/
}
var_its_length = var17;
{
{ /* Inline kernel#Int#+ (var_curr_id_self,var_my_length) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var20 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var24 = var_curr_id_self + var_my_length;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_max_iterations = var18;
for(;;) {
{
{ /* Inline kernel#Int#< (var_curr_id_self,var_max_iterations) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var_max_iterations:Int> isa OTHER */
/* <var_max_iterations:Int> isa OTHER */
var27 = 1; /* easy <var_max_iterations:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var31 = var_curr_id_self < var_max_iterations;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline string#NativeString#[] (var_my_items,var_curr_id_self) on <var_my_items:NativeString> */
var34 = var_my_items[var_curr_id_self];
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_my_curr_char = var32;
{
{ /* Inline string#NativeString#[] (var_its_items,var_curr_id_other) on <var_its_items:NativeString> */
var37 = var_its_items[var_curr_id_other];
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_its_curr_char = var35;
{
{ /* Inline kernel#Char#!= (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Char> */
var40 = var_my_curr_char == var_its_curr_char;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline kernel#Char#< (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Char> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Char> isa OTHER */
/* <var_its_curr_char:Char> isa OTHER */
var44 = 1; /* easy <var_its_curr_char:Char> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 611);
fatal_exit(1);
}
var48 = var_my_curr_char < var_its_curr_char;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
var = 1;
goto RET_LABEL;
} else {
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_curr_id_self,1l) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var55 = var_curr_id_self + 1l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_curr_id_self = var49;
{
{ /* Inline kernel#Int#+ (var_curr_id_other,1l) on <var_curr_id_other:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var62 = var_curr_id_other + 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_curr_id_other = var56;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#< (var_my_length,var_its_length) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var65 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var69 = var_my_length < var_its_length;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var = var63;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#+ for (self: FlatString, Text): String */
val* standard___standard__FlatString___String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_s /* var s: Text */;
long var1 /* : Int */;
long var_my_length /* var my_length: Int */;
long var2 /* : Int */;
long var_its_length /* var its_length: Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_total_length /* var total_length: Int */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
char* var22 /* : NativeString */;
char* var24 /* : NativeString */;
char* var_target_string /* var target_string: NativeString */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
char* var31 /* : NativeString */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
char* var37 /* : NativeString */;
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
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
long var58 /* : Int */;
val* var60 /* : FlatString */;
var_s = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
var_my_length = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_its_length = var2;
{
{ /* Inline kernel#Int#+ (var_my_length,var_its_length) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var5 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var6 = var_my_length + var_its_length;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_total_length = var3;
var7 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_my_length,var_its_length) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var10 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var14 = var_my_length + var_its_length;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var21 = var8 + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var7,var15) on <var7:NativeString> */
var24 = (char*)nit_alloc(var15);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_target_string = var22;
{
var25 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
{
var26 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
{
{ /* Inline string#NativeString#copy_to (var25,var_target_string,var_my_length,var26,0l) on <var25:NativeString> */
memmove(var_target_string+0l,var25+var26,var_my_length);
RET_LABEL27:(void)0;
}
}
/* <var_s:Text> isa FlatString */
cltype29 = type_standard__FlatString.color;
idtype30 = type_standard__FlatString.id;
if(cltype29 >= var_s->type->table_size) {
var28 = 0;
} else {
var28 = var_s->type->type_table[cltype29] == idtype30;
}
if (var28){
{
var31 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:Text(FlatString)>*/
}
{
var32 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatString__index_from]))(var_s); /* index_from on <var_s:Text(FlatString)>*/
}
{
{ /* Inline string#NativeString#copy_to (var31,var_target_string,var_its_length,var32,var_my_length) on <var31:NativeString> */
memmove(var_target_string+var_my_length,var31+var32,var_its_length);
RET_LABEL33:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype35 = type_standard__FlatBuffer.color;
idtype36 = type_standard__FlatBuffer.id;
if(cltype35 >= var_s->type->table_size) {
var34 = 0;
} else {
var34 = var_s->type->type_table[cltype35] == idtype36;
}
if (var34){
{
var37 = ((char*(*)(val* self))(var_s->class->vft[COLOR_standard__string__FlatText__items]))(var_s); /* items on <var_s:Text(FlatBuffer)>*/
}
{
{ /* Inline string#NativeString#copy_to (var37,var_target_string,var_its_length,0l,var_my_length) on <var37:NativeString> */
memmove(var_target_string+var_my_length,var37+0l,var_its_length);
RET_LABEL38:(void)0;
}
}
} else {
var_curr_pos = var_my_length;
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
{ /* Inline string#NativeString#[]= (var_target_string,var_curr_pos,var_c) on <var_target_string:NativeString> */
var_target_string[var_curr_pos]=var_c;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_curr_pos,1l) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var57 = var_curr_pos + 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_curr_pos = var51;
var58 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var58;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var_target_string,var_total_length,'\000') on <var_target_string:NativeString> */
var_target_string[var_total_length]='\000';
RET_LABEL59:(void)0;
}
}
var60 = standard___standard__NativeString___to_s_with_length(var_target_string, var_total_length);
var = var60;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#* for (self: FlatString, Int): String */
val* standard___standard__FlatString___String___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var_my_length /* var my_length: Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
long var_final_length /* var final_length: Int */;
char* var13 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
char* var22 /* : NativeString */;
char* var24 /* : NativeString */;
char* var_target_string /* var target_string: NativeString */;
long var_current_last /* var current_last: Int */;
long var_iteration /* var iteration: Int */;
long var_ /* var : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
var_i = p0;
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var4 = var_i >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1360);
fatal_exit(1);
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatString>*/
}
var_my_length = var5;
{
{ /* Inline kernel#Int#* (var_my_length,var_i) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var8 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var12 = var_my_length * var_i;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_final_length = var6;
{
var13 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
var_my_items = var13;
var14 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_final_length,1l) on <var_final_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var21 = var_final_length + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var14,var15) on <var14:NativeString> */
var24 = (char*)nit_alloc(var15);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_target_string = var22;
{
{ /* Inline string#NativeString#[]= (var_target_string,var_final_length,'\000') on <var_target_string:NativeString> */
var_target_string[var_final_length]='\000';
RET_LABEL25:(void)0;
}
}
var_current_last = 0l;
var_iteration = 1l;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_iteration,var_) on <var_iteration:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var28 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var32 = var_iteration <= var_;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline string#NativeString#copy_to (var_my_items,var_target_string,var_my_length,0l,var_current_last) on <var_my_items:NativeString> */
memmove(var_target_string+var_current_last,var_my_items+0l,var_my_length);
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_current_last,var_my_length) on <var_current_last:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var36 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var40 = var_current_last + var_my_length;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_current_last = var34;
var41 = standard___standard__Int___Discrete__successor(var_iteration, 1l);
var_iteration = var41;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var42 = standard___standard__NativeString___to_s_with_length(var_target_string, var_final_length);
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#hash for (self: FlatString): Int */
long standard___standard__FlatString___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var_h /* var h: Int */;
long var6 /* : Int */;
long var_i /* var i: Int */;
char* var7 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
char var23 /* : Char */;
char var25 /* : Char */;
long var26 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
long var45 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__hash_cache]))(self); /* hash_cache on <self:FlatString>*/
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var1,((val*)NULL)) on <var1:nullable Int> */
var5 = 0; /* incompatible types Int vs. null; cannot be NULL */
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var_h = 5381l;
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_from]))(self); /* index_from on <self:FlatString>*/
}
var_i = var6;
{
var7 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatString>*/
}
var_myitems = var7;
for(;;) {
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatString__index_to]))(self); /* index_to on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#<= (var_i,var8) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var12 = var_i <= var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel#Int#lshift (var_h,5l) on <var_h:Int> */
var15 = var_h << 5l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var13,var_h) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var18 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var13 + var_h;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var_myitems,var_i) on <var_myitems:NativeString> */
var25 = var_myitems[var_i];
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var23) on <var23:Char> */
var28 = (unsigned char)var23;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var16,var26) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var31 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var35 = var16 + var26;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_h = var29;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var42 = var_i + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var43 = (val*)(var_h<<2|1);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__Text__hash_cache_61d]))(self, var43); /* hash_cache= on <self:FlatString>*/
}
} else {
}
{
var44 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__hash_cache]))(self); /* hash_cache on <self:FlatString>*/
}
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1399);
fatal_exit(1);
}
var45 = (long)(var44)>>2;
var = var45;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#substrings for (self: FlatString): Iterator[Text] */
val* standard___standard__FlatString___Text__substrings(val* self) {
val* var /* : Iterator[Text] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_standard__string__FlatSubstringsIter(&type_standard__string__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringReverseIterator#target for (self: FlatStringReverseIterator): FlatString */
val* standard__string___standard__string__FlatStringReverseIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_standard__string__FlatStringReverseIterator___target].val; /* _target on <self:FlatStringReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1408);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringReverseIterator#target= for (self: FlatStringReverseIterator, FlatString) */
void standard__string___standard__string__FlatStringReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatStringReverseIterator___target].val = p0; /* _target on <self:FlatStringReverseIterator> */
RET_LABEL:;
}
/* method string#FlatStringReverseIterator#target_items for (self: FlatStringReverseIterator): NativeString */
char* standard__string___standard__string__FlatStringReverseIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatStringReverseIterator___target_items].str; /* _target_items on <self:FlatStringReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringReverseIterator#target_items= for (self: FlatStringReverseIterator, NativeString) */
void standard__string___standard__string__FlatStringReverseIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_standard__string__FlatStringReverseIterator___target_items].str = p0; /* _target_items on <self:FlatStringReverseIterator> */
RET_LABEL:;
}
/* method string#FlatStringReverseIterator#curr_pos for (self: FlatStringReverseIterator): Int */
long standard__string___standard__string__FlatStringReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatStringReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringReverseIterator#curr_pos= for (self: FlatStringReverseIterator, Int) */
void standard__string___standard__string__FlatStringReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatStringReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringReverseIterator> */
RET_LABEL:;
}
/* method string#FlatStringReverseIterator#with_pos for (self: FlatStringReverseIterator, FlatString, Int) */
void standard__string___standard__string__FlatStringReverseIterator___with_pos(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: FlatString */;
long var_pos /* var pos: Int */;
char* var /* : NativeString */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
var_tgt = p0;
var_pos = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__FlatStringReverseIterator__target_61d]))(self, var_tgt); /* target= on <self:FlatStringReverseIterator>*/
}
{
var = ((char*(*)(val* self))(var_tgt->class->vft[COLOR_standard__string__FlatText__items]))(var_tgt); /* items on <var_tgt:FlatString>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatStringReverseIterator__target_items_61d]))(self, var); /* target_items= on <self:FlatStringReverseIterator>*/
}
{
var1 = ((long(*)(val* self))(var_tgt->class->vft[COLOR_standard__string__FlatString__index_from]))(var_tgt); /* index_from on <var_tgt:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,var1) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var5 = var_pos + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatStringReverseIterator__curr_pos_61d]))(self, var2); /* curr_pos= on <self:FlatStringReverseIterator>*/
}
RET_LABEL:;
}
/* method string#FlatStringReverseIterator#is_ok for (self: FlatStringReverseIterator): Bool */
short int standard__string___standard__string__FlatStringReverseIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringReverseIterator__target]))(self); /* target on <self:FlatStringReverseIterator>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__FlatString__index_from]))(var2); /* index_from on <var2:FlatString>*/
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
/* method string#FlatStringReverseIterator#item for (self: FlatStringReverseIterator): Char */
char standard__string___standard__string__FlatStringReverseIterator___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
char var3 /* : Char */;
char var5 /* : Char */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringReverseIterator__target_items]))(self); /* target_items on <self:FlatStringReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringReverseIterator>*/
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
/* method string#FlatStringReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatStringReverseIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatStringReverseIterator___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatStringReverseIterator#next for (self: FlatStringReverseIterator) */
void standard__string___standard__string__FlatStringReverseIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_standard__string__FlatStringReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__string__FlatStringReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringReverseIterator>*/
}
RET_LABEL:;
}
/* method string#FlatStringReverseIterator#index for (self: FlatStringReverseIterator): Int */
long standard__string___standard__string__FlatStringReverseIterator___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringReverseIterator__target]))(self); /* target on <self:FlatStringReverseIterator>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__FlatString__index_from]))(var2); /* index_from on <var2:FlatString>*/
}
{
{ /* Inline kernel#Int#- (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var7 = var1 - var3;
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
/* method string#FlatStringReverseIterator#init for (self: FlatStringReverseIterator) */
void standard__string___standard__string__FlatStringReverseIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatStringReverseIterator___standard__kernel__Object__init]))(self); /* init on <self:FlatStringReverseIterator>*/
}
RET_LABEL:;
}
/* method string#FlatStringIterator#target for (self: FlatStringIterator): FlatString */
val* standard__string___standard__string__FlatStringIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_standard__string__FlatStringIterator___target].val; /* _target on <self:FlatStringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1434);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target= for (self: FlatStringIterator, FlatString) */
void standard__string___standard__string__FlatStringIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatStringIterator___target].val = p0; /* _target on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#target_items for (self: FlatStringIterator): NativeString */
char* standard__string___standard__string__FlatStringIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatStringIterator___target_items].str; /* _target_items on <self:FlatStringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target_items= for (self: FlatStringIterator, NativeString) */
void standard__string___standard__string__FlatStringIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_standard__string__FlatStringIterator___target_items].str = p0; /* _target_items on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#curr_pos for (self: FlatStringIterator): Int */
long standard__string___standard__string__FlatStringIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:FlatStringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#curr_pos= for (self: FlatStringIterator, Int) */
void standard__string___standard__string__FlatStringIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#with_pos for (self: FlatStringIterator, FlatString, Int) */
void standard__string___standard__string__FlatStringIterator___with_pos(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: FlatString */;
long var_pos /* var pos: Int */;
char* var /* : NativeString */;
val* var1 /* : FlatString */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
var_tgt = p0;
var_pos = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__FlatStringIterator__target_61d]))(self, var_tgt); /* target= on <self:FlatStringIterator>*/
}
{
var = ((char*(*)(val* self))(var_tgt->class->vft[COLOR_standard__string__FlatText__items]))(var_tgt); /* items on <var_tgt:FlatString>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatStringIterator__target_items_61d]))(self, var); /* target_items= on <self:FlatStringIterator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringIterator__target]))(self); /* target on <self:FlatStringIterator>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__FlatString__index_from]))(var1); /* index_from on <var1:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var6 = var_pos + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__FlatStringIterator__curr_pos_61d]))(self, var3); /* curr_pos= on <self:FlatStringIterator>*/
}
RET_LABEL:;
}
/* method string#FlatStringIterator#is_ok for (self: FlatStringIterator): Bool */
short int standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringIterator__target]))(self); /* target on <self:FlatStringIterator>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__FlatString__index_to]))(var2); /* index_to on <var2:FlatString>*/
}
{
{ /* Inline kernel#Int#<= (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var7 = var1 <= var3;
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
/* method string#FlatStringIterator#item for (self: FlatStringIterator): Char */
char standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
char var3 /* : Char */;
char var5 /* : Char */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringIterator__target_items]))(self); /* target_items on <self:FlatStringIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringIterator>*/
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
/* method string#FlatStringIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#next for (self: FlatStringIterator) */
void standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_standard__string__FlatStringIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__string__FlatStringIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringIterator>*/
}
RET_LABEL:;
}
/* method string#FlatStringIterator#index for (self: FlatStringIterator): Int */
long standard__string___standard__string__FlatStringIterator___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatStringIterator__target]))(self); /* target on <self:FlatStringIterator>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__FlatString__index_from]))(var2); /* index_from on <var2:FlatString>*/
}
{
{ /* Inline kernel#Int#- (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var7 = var1 - var3;
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
/* method string#FlatStringIterator#init for (self: FlatStringIterator) */
void standard__string___standard__string__FlatStringIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatStringIterator___standard__kernel__Object__init]))(self); /* init on <self:FlatStringIterator>*/
}
RET_LABEL:;
}
/* method string#FlatStringCharView#[] for (self: FlatStringCharView, Int): Char */
char standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : Text */;
val* var_target /* var target: FlatString */;
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
char* var22 /* : NativeString */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
char var31 /* : Char */;
char var33 /* : Char */;
var_index = p0;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1466);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatStringCharView>*/
}
var_target = var5;
{
var6 = ((long(*)(val* self))(var_target->class->vft[COLOR_standard__string__FlatString__index_from]))(var_target); /* index_from on <var_target:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var_index,var6) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var13 = var_index + var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
var14 = ((long(*)(val* self))(var_target->class->vft[COLOR_standard__string__FlatString__index_to]))(var_target); /* index_to on <var_target:FlatString>*/
}
{
{ /* Inline kernel#Int#<= (var7,var14) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var21 = var7 <= var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1468);
fatal_exit(1);
}
{
var22 = ((char*(*)(val* self))(var_target->class->vft[COLOR_standard__string__FlatText__items]))(var_target); /* items on <var_target:FlatString>*/
}
{
var23 = ((long(*)(val* self))(var_target->class->vft[COLOR_standard__string__FlatString__index_from]))(var_target); /* index_from on <var_target:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var_index,var23) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var30 = var_index + var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var22,var24) on <var22:NativeString> */
var33 = var22[var24];
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_standard__string__FlatStringIterator(&type_standard__string__FlatStringIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatStringCharView>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_standard__string__FlatStringIterator__with_pos]))(var1, var2, var_start); /* with_pos on <var1:FlatStringIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#reverse_iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringReverseIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_standard__string__FlatStringReverseIterator(&type_standard__string__FlatStringReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__StringCharView__target]))(self); /* target on <self:FlatStringCharView>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_standard__string__FlatStringReverseIterator__with_pos]))(var1, var2, var_start); /* with_pos on <var1:FlatStringReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Buffer#is_dirty for (self: Buffer): Bool */
short int standard___standard__Buffer___is_dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__string__Buffer___is_dirty].s; /* _is_dirty on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#is_dirty= for (self: Buffer, Bool) */
void standard___standard__Buffer___is_dirty_61d(val* self, short int p0) {
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = p0; /* _is_dirty on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#written for (self: Buffer): Bool */
short int standard___standard__Buffer___written(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__string__Buffer___written].s; /* _written on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#written= for (self: Buffer, Bool) */
void standard___standard__Buffer___written_61d(val* self, short int p0) {
self->attrs[COLOR_standard__string__Buffer___written].s = p0; /* _written on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#[]= for (self: Buffer, Int, Char) */
void standard___standard__Buffer____91d_93d_61d(val* self, long p0, char p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]=", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1495);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#add for (self: Buffer, Char) */
void standard___standard__Buffer___add(val* self, char p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "add", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1500);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#clear for (self: Buffer) */
void standard___standard__Buffer___clear(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clear", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1505);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#enlarge for (self: Buffer, Int) */
void standard___standard__Buffer___enlarge(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "enlarge", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1514);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#append for (self: Buffer, Text) */
void standard___standard__Buffer___append(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "append", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1517);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#times for (self: Buffer, Int) */
void standard___standard__Buffer___times(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "times", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#reverse for (self: Buffer) */
void standard___standard__Buffer___reverse(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "reverse", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1533);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#upper for (self: Buffer) */
void standard___standard__Buffer___upper(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "upper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1541);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#lower for (self: Buffer) */
void standard___standard__Buffer___lower(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "lower", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1549);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#capitalize for (self: Buffer) */
void standard___standard__Buffer___capitalize(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
char var4 /* : Char */;
char var5 /* : Char */;
char var_c /* var c: Char */;
char var_prev /* var prev: Char */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
char var11 /* : Char */;
short int var12 /* : Bool */;
char var13 /* : Char */;
char var14 /* : Char */;
long var15 /* : Int */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Buffer>*/
}
{
{ /* Inline kernel#Int#== (var,0l) on <var:Int> */
var3 = var == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
{
var4 = ((char(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__Text___91d_93d]))(self, 0l); /* [] on <self:Buffer>*/
}
var5 = standard___standard__Char___to_upper(var4);
var_c = var5;
{
((void(*)(val* self, long p0, char p1))(self->class->vft[COLOR_standard__string__Buffer___91d_93d_61d]))(self, 0l, var_c); /* []= on <self:Buffer>*/
}
var_prev = var_c;
var_i = 1l;
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Buffer>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var10 = var_i < var_;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var_prev = var_c;
{
var11 = ((char(*)(val* self, long p0))(self->class->vft[COLOR_standard__string__Text___91d_93d]))(self, var_i); /* [] on <self:Buffer>*/
}
var_c = var11;
var12 = standard___standard__Char___is_letter(var_prev);
if (var12){
var13 = standard___standard__Char___to_lower(var_c);
{
((void(*)(val* self, long p0, char p1))(self->class->vft[COLOR_standard__string__Buffer___91d_93d_61d]))(self, var_i, var13); /* []= on <self:Buffer>*/
}
} else {
var14 = standard___standard__Char___to_upper(var_c);
{
((void(*)(val* self, long p0, char p1))(self->class->vft[COLOR_standard__string__Buffer___91d_93d_61d]))(self, var_i, var14); /* []= on <self:Buffer>*/
}
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
/* method string#Buffer#hash for (self: Buffer): Int */
long standard___standard__Buffer___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__string__Buffer__is_dirty]))(self); /* is_dirty on <self:Buffer>*/
}
if (var1){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__string__Text__hash_cache_61d]))(self, ((val*)NULL)); /* hash_cache= on <self:Buffer>*/
}
} else {
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard___standard__Buffer___standard__kernel__Object__hash]))(self); /* hash on <self:Buffer>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Buffer#chars for (self: Buffer): Sequence[Char] */
val* standard___standard__Buffer___Text__chars(val* self) {
val* var /* : Sequence[Char] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "chars", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1595);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#chars for (self: FlatBuffer): Sequence[Char] */
val* standard___standard__FlatBuffer___Text__chars(val* self) {
val* var /* : Sequence[Char] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Char] */;
val* var3 /* : FlatBufferCharView */;
var1 = self->attrs[COLOR_standard__string__FlatBuffer___chars].val != NULL; /* _chars on <self:FlatBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <self:FlatBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1605);
fatal_exit(1);
}
} else {
var3 = NEW_standard__string__FlatBufferCharView(&type_standard__string__FlatBufferCharView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var3, self); /* target= on <var3:FlatBufferCharView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:FlatBufferCharView>*/
}
self->attrs[COLOR_standard__string__FlatBuffer___chars].val = var3; /* _chars on <self:FlatBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#chars= for (self: FlatBuffer, Sequence[Char]) */
void standard___standard__FlatBuffer___chars_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatBuffer___chars].val = p0; /* _chars on <self:FlatBuffer> */
RET_LABEL:;
}
/* method string#FlatBuffer#capacity for (self: FlatBuffer): Int */
long standard___standard__FlatBuffer___capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#capacity= for (self: FlatBuffer, Int) */
void standard___standard__FlatBuffer___capacity_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = p0; /* _capacity on <self:FlatBuffer> */
RET_LABEL:;
}
/* method string#FlatBuffer#fast_cstring for (self: FlatBuffer): NativeString */
char* standard___standard__FlatBuffer___FlatText__fast_cstring(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#fast_cstring (var1,0l) on <var1:NativeString> */
var4 = var1 + 0l;
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
/* method string#FlatBuffer#substrings for (self: FlatBuffer): Iterator[Text] */
val* standard___standard__FlatBuffer___Text__substrings(val* self) {
val* var /* : Iterator[Text] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_standard__string__FlatSubstringsIter(&type_standard__string__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#reset for (self: FlatBuffer) */
void standard___standard__FlatBuffer___reset(val* self) {
char* var /* : NativeString */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
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
var_nns = var2;
{
var5 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#copy_to (var5,var_nns,var6,0l,0l) on <var5:NativeString> */
memmove(var_nns+0l,var5+0l,var6);
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__string__FlatText__items_61d]))(self, var_nns); /* items= on <self:FlatBuffer>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__string__Buffer__written_61d]))(self, 0); /* written= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#[] for (self: FlatBuffer, Int): Char */
char standard___standard__FlatBuffer___Text___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
char* var13 /* : NativeString */;
char var14 /* : Char */;
char var16 /* : Char */;
var_index = p0;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1626);
fatal_exit(1);
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#< (var_index,var5) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var12 = var_index < var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1627);
fatal_exit(1);
}
{
var13 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__FlatText__items]))(self); /* items on <self:FlatBuffer>*/
}
{
{ /* Inline string#NativeString#[] (var13,var_index) on <var13:NativeString> */
var16 = var13[var_index];
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
