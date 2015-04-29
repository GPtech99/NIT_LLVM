#include "standard__sorter.sep.0.h"
/* method sorter#Comparator#compare for (self: Comparator, nullable Object, nullable Object): Int */
long standard___standard__Comparator___compare(val* self, val* p0, val* p1) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "compare", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 27);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method sorter#Comparator#is_sorted for (self: Comparator, SequenceRead[nullable Object]): Bool */
short int standard___standard__Comparator___is_sorted(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_seq /* var seq: SequenceRead[nullable Object] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_prev /* var prev: nullable Object */;
val* var_ /* var : SequenceRead[nullable Object] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
/* Covariant cast for argument 0 (seq) <p0:SequenceRead[nullable Object]> isa SequenceRead[COMPARED] */
/* <p0:SequenceRead[nullable Object]> isa SequenceRead[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__SequenceRead__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SequenceRead[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 34);
fatal_exit(1);
}
var_seq = p0;
{
var2 = ((long(*)(val* self))((((long)var_seq&3)?class_info[((long)var_seq&3)]:var_seq->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_seq); /* length on <var_seq:SequenceRead[nullable Object]>*/
}
{
{ /* Inline kernel#Int#<= (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var9 = var2 <= 1l;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = 1;
goto RET_LABEL;
} else {
}
{
var10 = ((val*(*)(val* self))((((long)var_seq&3)?class_info[((long)var_seq&3)]:var_seq->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var_seq); /* first on <var_seq:SequenceRead[nullable Object]>*/
}
var_prev = var10;
var_ = var_seq;
{
var11 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[nullable Object]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[nullable Object]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[nullable Object]>*/
}
var_e = var14;
{
var15 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var_prev, var_e); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#> (var15,0l) on <var15:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var18 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var22 = var15 > 0l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var = 0;
goto RET_LABEL;
} else {
}
var_prev = var_e;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#Comparator#min for (self: Comparator, nullable Object, nullable Object): nullable Object */
val* standard___standard__Comparator___min(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
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
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa COMPARED */
/* <p0:nullable Object> isa COMPARED */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 50);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa COMPARED */
/* <p1:nullable Object> isa COMPARED */
type_struct5 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 50);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var8 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var_a, var_b); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#> (var8,0l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var15 = var8 > 0l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = var_b;
goto RET_LABEL;
} else {
var = var_a;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method sorter#Comparator#max for (self: Comparator, nullable Object, nullable Object): nullable Object */
val* standard___standard__Comparator___max(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
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
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa COMPARED */
/* <p0:nullable Object> isa COMPARED */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 65);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa COMPARED */
/* <p1:nullable Object> isa COMPARED */
type_struct5 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 65);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var8 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var_a, var_b); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#< (var8,0l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var15 = var8 < 0l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = var_b;
goto RET_LABEL;
} else {
var = var_a;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method sorter#Comparator#sort for (self: Comparator, Array[nullable Object]) */
void standard___standard__Comparator___sort(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
long var8 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 80);
fatal_exit(1);
}
var_array = p0;
{
var1 = ((long(*)(val* self))(var_array->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_array); /* length on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var8 = var1 - 1l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__sub_sort]))(self, var_array, 0l, var2); /* sub_sort on <self:Comparator>*/
}
RET_LABEL:;
}
/* method sorter#Comparator#sub_sort for (self: Comparator, Array[nullable Object], Int, Int) */
void standard___standard__Comparator___sub_sort(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 89);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{
{ /* Inline kernel#Int#>= (var_from,var_to) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var7 = var_from >= var_to;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#+ (var_from,7l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <7l:Int> isa OTHER */
/* <7l:Int> isa OTHER */
var10 = 1; /* easy <7l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var14 = var_from + 7l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var8,var_to) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var17 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var21 = var8 < var_to;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__quick_sort]))(self, var_array, var_from, var_to); /* quick_sort on <self:Comparator>*/
}
} else {
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__bubble_sort]))(self, var_array, var_from, var_to); /* bubble_sort on <self:Comparator>*/
}
}
}
RET_LABEL:;
}
/* method sorter#Comparator#quick_sort for (self: Comparator, Array[nullable Object], Int, Int) */
void standard___standard__Comparator___quick_sort(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
val* var1 /* : nullable Object */;
val* var_pivot /* var pivot: nullable Object */;
long var_i /* var i: Int */;
long var_j /* var j: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : nullable Object */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
val* var42 /* : nullable Object */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_t /* var t: nullable Object */;
val* var67 /* : nullable Object */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
val* var76 /* : nullable Object */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 101);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{
var1 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_from); /* [] on <var_array:Array[nullable Object]>*/
}
var_pivot = var1;
var_i = var_from;
var_j = var_to;
for(;;) {
{
{ /* Inline kernel#Int#> (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var8 = var_j > var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_to) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var12 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var16 = var_i <= var_to;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ = var10;
if (var10){
{
var17 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i); /* [] on <var_array:Array[nullable Object]>*/
}
{
var18 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var17, var_pivot); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#<= (var18,0l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var21 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var25 = var18 <= 0l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var9 = var19;
} else {
var9 = var_;
}
if (var9){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var32 = var_i + 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_i = var26;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
for(;;) {
{
{ /* Inline kernel#Int#> (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var36 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var40 = var_j > var_i;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_41 = var34;
if (var34){
{
var42 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_j); /* [] on <var_array:Array[nullable Object]>*/
}
{
var43 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var42, var_pivot); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#>= (var43,0l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var46 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var50 = var43 >= 0l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var33 = var44;
} else {
var33 = var_41;
}
if (var33){
{
{ /* Inline kernel#Int#- (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var57 = var_j - 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_j = var51;
} else {
goto BREAK_label58;
}
}
BREAK_label58: (void)0;
{
{ /* Inline kernel#Int#> (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var61 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var65 = var_j > var_i;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
{
var66 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i); /* [] on <var_array:Array[nullable Object]>*/
}
var_t = var66;
{
var67 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_j); /* [] on <var_array:Array[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var_i, var67); /* []= on <var_array:Array[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var_j, var_t); /* []= on <var_array:Array[nullable Object]>*/
}
} else {
}
} else {
goto BREAK_label68;
}
}
BREAK_label68: (void)0;
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var75 = var_i - 1l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
var76 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var69); /* [] on <var_array:Array[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var_from, var76); /* []= on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var79 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var83 = var_i - 1l;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var77, var_pivot); /* []= on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var_i,2l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var86 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var90 = var_i - 2l;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__sub_sort]))(self, var_array, var_from, var84); /* sub_sort on <self:Comparator>*/
}
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__sub_sort]))(self, var_array, var_i, var_to); /* sub_sort on <self:Comparator>*/
}
RET_LABEL:;
}
/* method sorter#Comparator#bubble_sort for (self: Comparator, Array[nullable Object], Int, Int) */
void standard___standard__Comparator___bubble_sort(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
short int var7 /* : Bool */;
long var_min /* var min: Int */;
val* var8 /* : nullable Object */;
val* var_min_v /* var min_v: nullable Object */;
long var_j /* var j: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 126);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
var_i = var_from;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_to) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var7 = var_i < var_to;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var_min = var_i;
{
var8 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i); /* [] on <var_array:Array[nullable Object]>*/
}
var_min_v = var8;
var_j = var_i;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j,var_to) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var11 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var15 = var_j <= var_to;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var16 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_j); /* [] on <var_array:Array[nullable Object]>*/
}
{
var17 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var_min_v, var16); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#> (var17,0l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var20 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var24 = var17 > 0l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
var_min = var_j;
{
var25 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_j); /* [] on <var_array:Array[nullable Object]>*/
}
var_min_v = var25;
} else {
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var32 = var_j + 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_j = var26;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#!= (var_min,var_i) on <var_min:Int> */
var35 = var_min == var_i;
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
var37 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i); /* [] on <var_array:Array[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var_min, var37); /* []= on <var_array:Array[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var_i, var_min_v); /* []= on <var_array:Array[nullable Object]>*/
}
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var44 = var_i + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_i = var38;
} else {
goto BREAK_label45;
}
}
BREAK_label45: (void)0;
RET_LABEL:;
}
/* method sorter#Comparator#insertion_sort for (self: Comparator, Array[nullable Object], Int, Int) */
void standard___standard__Comparator___insertion_sort(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
short int var7 /* : Bool */;
long var_j /* var j: Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : nullable Object */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
val* var25 /* : nullable Object */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 154);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
var_i = var_from;
var_ = var_to;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var3 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var7 = var_i <= var_;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var_j = var_i;
for(;;) {
{
{ /* Inline kernel#Int#> (var_j,0l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var15 = var_j > 0l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_16 = var9;
if (var9){
{
var17 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_j); /* [] on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var24 = var_j - 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var25 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var18); /* [] on <var_array:Array[nullable Object]>*/
}
{
var26 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var17, var25); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#< (var26,0l) on <var26:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var29 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var33 = var26 < 0l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var8 = var27;
} else {
var8 = var_16;
}
if (var8){
{
{ /* Inline kernel#Int#- (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var40 = var_j - 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1))(var_array->class->vft[COLOR_standard__array__AbstractArray__swap_at]))(var_array, var_j, var34); /* swap_at on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var47 = var_j - 1l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_j = var41;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var48 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var48;
} else {
goto BREAK_label49;
}
}
BREAK_label49: (void)0;
RET_LABEL:;
}
/* method sorter#Comparator#merge_sort for (self: Comparator, Array[nullable Object], Int, Int) */
void standard___standard__Comparator___merge_sort(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
short int var7 /* : Bool */;
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
long var_mid /* var mid: Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 170);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{
{ /* Inline kernel#Int#>= (var_from,var_to) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var7 = var_from >= var_to;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_to,var_from) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var10 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var14 = var_to + var_from;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var8,2l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var17 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var21 = var8 / 2l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_mid = var15;
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__merge_sort]))(self, var_array, var_from, var_mid); /* merge_sort on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#+ (var_mid,1l) on <var_mid:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var28 = var_mid + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__merge_sort]))(self, var_array, var22, var_to); /* merge_sort on <self:Comparator>*/
}
{
((void(*)(val* self, val* p0, long p1, long p2, long p3))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__merge]))(self, var_array, var_from, var_mid, var_to); /* merge on <self:Comparator>*/
}
RET_LABEL:;
}
/* method sorter#Comparator#merge for (self: Comparator, Array[nullable Object], Int, Int, Int) */
void standard___standard__Comparator___merge(val* self, val* p0, long p1, long p2, long p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_mid /* var mid: Int */;
long var_to /* var to: Int */;
val* var1 /* : Array[nullable Object] */;
val* var_l /* var l: Array[nullable Object] */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
long var10 /* : Int */;
val* var11 /* : Array[nullable Object] */;
val* var_r /* var r: Array[nullable Object] */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var_i19 /* var i: Int */;
long var_20 /* var : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
long var_i31 /* var i: Int */;
long var_j /* var j: Int */;
long var_k /* var k: Int */;
long var_32 /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
val* var64 /* : nullable Object */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
val* var72 /* : nullable Object */;
val* var73 /* : nullable Object */;
long var74 /* : Int */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
val* var90 /* : nullable Object */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
long var98 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 184);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_mid = p2;
var_to = p3;
var1 = NEW_standard__Array((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED]);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[nullable Object]>*/
}
var_l = var1;
var_i = var_from;
var_ = var_mid;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var8 = var_i <= var_;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var9 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i); /* [] on <var_array:Array[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_l, var9); /* add on <var_l:Array[nullable Object]>*/
}
var10 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var10;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var11 = NEW_standard__Array((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED]);
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:Array[nullable Object]>*/
}
var_r = var11;
{
{ /* Inline kernel#Int#+ (var_mid,1l) on <var_mid:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var18 = var_mid + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i19 = var12;
var_20 = var_to;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i19,var_20) on <var_i19:Int> */
/* Covariant cast for argument 0 (i) <var_20:Int> isa OTHER */
/* <var_20:Int> isa OTHER */
var23 = 1; /* easy <var_20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var27 = var_i19 <= var_20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
var28 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i19); /* [] on <var_array:Array[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_r->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_r, var28); /* add on <var_r:Array[nullable Object]>*/
}
var29 = standard___standard__Int___Discrete__successor(var_i19, 1l);
var_i19 = var29;
} else {
goto BREAK_label30;
}
}
BREAK_label30: (void)0;
var_i31 = 0l;
var_j = 0l;
var_k = var_from;
var_32 = var_to;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_k,var_32) on <var_k:Int> */
/* Covariant cast for argument 0 (i) <var_32:Int> isa OTHER */
/* <var_32:Int> isa OTHER */
var35 = 1; /* easy <var_32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var39 = var_k <= var_32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
var40 = ((long(*)(val* self))(var_l->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_l); /* length on <var_l:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#>= (var_i31,var40) on <var_i31:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var47 = var_i31 >= var40;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
var48 = ((val*(*)(val* self, long p0))(var_r->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_r, var_j); /* [] on <var_r:Array[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var_k, var48); /* []= on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var55 = var_j + 1l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_j = var49;
} else {
{
var56 = ((long(*)(val* self))(var_r->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_r); /* length on <var_r:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#>= (var_j,var56) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var56:Int> isa OTHER */
/* <var56:Int> isa OTHER */
var59 = 1; /* easy <var56:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var63 = var_j >= var56;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
var64 = ((val*(*)(val* self, long p0))(var_l->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_l, var_i31); /* [] on <var_l:Array[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var_k, var64); /* []= on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var_i31,1l) on <var_i31:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var67 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var71 = var_i31 + 1l;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_i31 = var65;
} else {
{
var72 = ((val*(*)(val* self, long p0))(var_l->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_l, var_i31); /* [] on <var_l:Array[nullable Object]>*/
}
{
var73 = ((val*(*)(val* self, long p0))(var_r->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_r, var_j); /* [] on <var_r:Array[nullable Object]>*/
}
{
var74 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var72, var73); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#<= (var74,0l) on <var74:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var77 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var81 = var74 <= 0l;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
if (var75){
{
var82 = ((val*(*)(val* self, long p0))(var_l->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_l, var_i31); /* [] on <var_l:Array[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var_k, var82); /* []= on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var_i31,1l) on <var_i31:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var85 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var89 = var_i31 + 1l;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var_i31 = var83;
} else {
{
var90 = ((val*(*)(val* self, long p0))(var_r->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_r, var_j); /* [] on <var_r:Array[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_array->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_array, var_k, var90); /* []= on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var93 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var97 = var_j + 1l;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var_j = var91;
}
}
}
var98 = standard___standard__Int___Discrete__successor(var_k, 1l);
var_k = var98;
} else {
goto BREAK_label99;
}
}
BREAK_label99: (void)0;
RET_LABEL:;
}
/* method sorter#Comparator#heap_sort for (self: Comparator, Array[nullable Object], Int, Int) */
void standard___standard__Comparator___heap_sort(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
long var1 /* : Int */;
long var_size /* var size: Int */;
long var_j /* var j: Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
long var16 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 208);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{
var1 = ((long(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__build_heap]))(self, var_array); /* build_heap on <self:Comparator>*/
}
var_size = var1;
var_j = var_from;
var_ = var_to;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var8 = var_j < var_;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
((void(*)(val* self, long p0, long p1))(var_array->class->vft[COLOR_standard__array__AbstractArray__swap_at]))(var_array, 0l, var_size); /* swap_at on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var_size,1l) on <var_size:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var15 = var_size - 1l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_size = var9;
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__heapify]))(self, var_array, 0l, var_size); /* heapify on <self:Comparator>*/
}
var16 = standard___standard__Int___Discrete__successor(var_j, 1l);
var_j = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method sorter#Comparator#build_heap for (self: Comparator, Array[nullable Object]): Int */
long standard___standard__Comparator___build_heap(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
long var9 /* : Int */;
long var_size /* var size: Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var_i /* var i: Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 223);
fatal_exit(1);
}
var_array = p0;
{
var2 = ((long(*)(val* self))(var_array->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_array); /* length on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var9 = var2 - 1l;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_size = var3;
{
{ /* Inline kernel#Int#/ (var_size,2l) on <var_size:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var12 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var16 = var_size / 2l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_i = var10;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var19 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var23 = var_i >= 0l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__heapify]))(self, var_array, var_i, var_size); /* heapify on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var30 = var_i - 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_i = var24;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_size;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#Comparator#heapify for (self: Comparator, Array[nullable Object], Int, Int) */
void standard___standard__Comparator___heapify(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
long var7 /* : Int */;
long var_l /* var l: Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var_r /* var r: Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
val* var23 /* : nullable Object */;
val* var24 /* : nullable Object */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
long var_largest /* var largest: Int */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
val* var42 /* : nullable Object */;
val* var43 /* : nullable Object */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 233);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{
{ /* Inline kernel#Int#* (var_from,2l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var3 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var7 = var_from * 2l;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_l = var1;
{
{ /* Inline kernel#Int#+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var14 = var_l + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_r = var8;
{
{ /* Inline kernel#Int#< (var_l,var_to) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var18 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var22 = var_l < var_to;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_ = var16;
if (var16){
{
var23 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_l); /* [] on <var_array:Array[nullable Object]>*/
}
{
var24 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_from); /* [] on <var_array:Array[nullable Object]>*/
}
{
var25 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var23, var24); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#> (var25,0l) on <var25:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var28 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var32 = var25 > 0l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var15 = var26;
} else {
var15 = var_;
}
if (var15){
var_largest = var_l;
} else {
var_largest = var_from;
}
{
{ /* Inline kernel#Int#< (var_r,var_to) on <var_r:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var36 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var40 = var_r < var_to;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_41 = var34;
if (var34){
{
var42 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_r); /* [] on <var_array:Array[nullable Object]>*/
}
{
var43 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_array, var_largest); /* [] on <var_array:Array[nullable Object]>*/
}
{
var44 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__compare]))(self, var42, var43); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel#Int#> (var44,0l) on <var44:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var47 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var51 = var44 > 0l;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var33 = var45;
} else {
var33 = var_41;
}
if (var33){
var_largest = var_r;
} else {
}
{
{ /* Inline kernel#Int#!= (var_largest,var_from) on <var_largest:Int> */
var54 = var_largest == var_from;
var55 = !var54;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
{
((void(*)(val* self, long p0, long p1))(var_array->class->vft[COLOR_standard__array__AbstractArray__swap_at]))(var_array, var_from, var_largest); /* swap_at on <var_array:Array[nullable Object]>*/
}
{
((void(*)(val* self, val* p0, long p1, long p2))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__Comparator__heapify]))(self, var_array, var_largest, var_to); /* heapify on <self:Comparator>*/
}
} else {
}
RET_LABEL:;
}
/* method sorter#MapRead#values_sorted_by_key for (self: MapRead[nullable Object, nullable Object], Comparator): Array[nullable Object] */
val* standard__sorter___MapRead___values_sorted_by_key(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
val* var_comparator /* var comparator: Comparator */;
val* var1 /* : Collection[nullable Object] */;
val* var2 /* : Array[nullable Object] */;
val* var_keys /* var keys: Array[nullable Object] */;
val* var3 /* : Array[nullable Object] */;
val* var_ /* var : Array[nullable Object] */;
val* var_4 /* var : Array[nullable Object] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var9 /* : nullable Object */;
var_comparator = p0;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__keys]))(self); /* keys on <self:MapRead[nullable Object, nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__array__Collection__to_a]))(var1); /* to_a on <var1:Collection[nullable Object]>*/
}
var_keys = var2;
{
((void(*)(val* self, val* p0))((((long)var_comparator&3)?class_info[((long)var_comparator&3)]:var_comparator->class)->vft[COLOR_standard__sorter__Comparator__sort]))(var_comparator, var_keys); /* sort on <var_comparator:Comparator>*/
}
var3 = NEW_standard__Array((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__Array__standard__MapRead___35dV]);
{
((void(*)(val* self, long p0))(var3->class->vft[COLOR_standard__array__Array__with_capacity]))(var3, 1l); /* with_capacity on <var3:Array[nullable Object]>*/
}
var_ = var3;
var_4 = var_keys;
{
var5 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_4); /* iterator on <var_4:Array[nullable Object]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:ArrayIterator[nullable Object]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:ArrayIterator[nullable Object]>*/
}
var_k = var8;
{
var9 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(self, var_k); /* [] on <self:MapRead[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var9); /* push on <var_:Array[nullable Object]>*/
}
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:ArrayIterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:ArrayIterator[nullable Object]>*/
}
var = var_;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#MapRead#keys_sorted_by_values for (self: MapRead[nullable Object, nullable Object], Comparator): Array[nullable Object] */
val* standard__sorter___MapRead___keys_sorted_by_values(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
val* var_comparator /* var comparator: Comparator */;
val* var1 /* : Collection[nullable Object] */;
val* var2 /* : Array[nullable Object] */;
val* var_keys /* var keys: Array[nullable Object] */;
val* var3 /* : MapComparator[nullable Object, nullable Object] */;
val* var_map_cmp /* var map_cmp: MapComparator[nullable Object, nullable Object] */;
var_comparator = p0;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__MapRead__keys]))(self); /* keys on <self:MapRead[nullable Object, nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__array__Collection__to_a]))(var1); /* to_a on <var1:Collection[nullable Object]>*/
}
var_keys = var2;
{
var3 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__sorter__MapRead__to_map_comparator]))(self, var_comparator); /* to_map_comparator on <self:MapRead[nullable Object, nullable Object]>*/
}
var_map_cmp = var3;
{
((void(*)(val* self, val* p0))(var_map_cmp->class->vft[COLOR_standard__sorter__Comparator__sort]))(var_map_cmp, var_keys); /* sort on <var_map_cmp:MapComparator[nullable Object, nullable Object]>*/
}
var = var_keys;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#MapRead#to_map_comparator for (self: MapRead[nullable Object, nullable Object], Comparator): MapComparator[nullable Object, nullable Object] */
val* standard__sorter___MapRead___to_map_comparator(val* self, val* p0) {
val* var /* : MapComparator[nullable Object, nullable Object] */;
val* var_comparator /* var comparator: Comparator */;
val* var1 /* : MapComparator[nullable Object, nullable Object] */;
var_comparator = p0;
var1 = NEW_standard__MapComparator((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_standard__MapComparator__standard__MapRead___35dK__standard__MapRead___35dV]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__sorter__MapComparator__map_61d]))(var1, self); /* map= on <var1:MapComparator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__sorter__MapComparator__comparator_61d]))(var1, var_comparator); /* comparator= on <var1:MapComparator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:MapComparator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#MapComparator#map for (self: MapComparator[nullable Object, nullable Object]): MapRead[nullable Object, nullable Object] */
val* standard___standard__MapComparator___map(val* self) {
val* var /* : MapRead[nullable Object, nullable Object] */;
val* var1 /* : MapRead[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__sorter__MapComparator___map].val; /* _map on <self:MapComparator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 319);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method sorter#MapComparator#map= for (self: MapComparator[nullable Object, nullable Object], MapRead[nullable Object, nullable Object]) */
void standard___standard__MapComparator___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:MapRead[nullable Object, nullable Object]> isa MapRead[K, V] */
/* <p0:MapRead[nullable Object, nullable Object]> isa MapRead[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__MapRead__standard__MapComparator___35dK__standard__MapComparator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapRead[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 319);
fatal_exit(1);
}
self->attrs[COLOR_standard__sorter__MapComparator___map].val = p0; /* _map on <self:MapComparator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method sorter#MapComparator#comparator for (self: MapComparator[nullable Object, nullable Object]): Comparator */
val* standard___standard__MapComparator___comparator(val* self) {
val* var /* : Comparator */;
val* var1 /* : Comparator */;
var1 = self->attrs[COLOR_standard__sorter__MapComparator___comparator].val; /* _comparator on <self:MapComparator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _comparator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 322);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method sorter#MapComparator#comparator= for (self: MapComparator[nullable Object, nullable Object], Comparator) */
void standard___standard__MapComparator___comparator_61d(val* self, val* p0) {
self->attrs[COLOR_standard__sorter__MapComparator___comparator].val = p0; /* _comparator on <self:MapComparator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method sorter#MapComparator#compare for (self: MapComparator[nullable Object, nullable Object], nullable Object, nullable Object): Int */
long standard___standard__MapComparator___Comparator__compare(val* self, val* p0, val* p1) {
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
val* var8 /* : Comparator */;
val* var9 /* : MapRead[nullable Object, nullable Object] */;
val* var10 /* : nullable Object */;
val* var11 /* : MapRead[nullable Object, nullable Object] */;
val* var12 /* : nullable Object */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 325);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 325);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__sorter__MapComparator__comparator]))(self); /* comparator on <self:MapComparator[nullable Object, nullable Object]>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__sorter__MapComparator__map]))(self); /* map on <self:MapComparator[nullable Object, nullable Object]>*/
}
{
var10 = ((val*(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var9, var_a); /* [] on <var9:MapRead[nullable Object, nullable Object]>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__sorter__MapComparator__map]))(self); /* map on <self:MapComparator[nullable Object, nullable Object]>*/
}
{
var12 = ((val*(*)(val* self, val* p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var11, var_b); /* [] on <var11:MapRead[nullable Object, nullable Object]>*/
}
{
var13 = ((long(*)(val* self, val* p0, val* p1))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_standard__sorter__Comparator__compare]))(var8, var10, var12); /* compare on <var8:Comparator>*/
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#MapComparator#init for (self: MapComparator[nullable Object, nullable Object]) */
void standard___standard__MapComparator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__MapComparator___standard__kernel__Object__init]))(self); /* init on <self:MapComparator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method sorter#DefaultComparator#compare for (self: DefaultComparator, Comparable, Comparable): Int */
long standard___standard__DefaultComparator___Comparator__compare(val* self, val* p0, val* p1) {
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
val* var_a /* var a: Comparable */;
val* var_b /* var b: Comparable */;
long var7 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Comparable> isa COMPARED */
/* <p0:Comparable> isa COMPARED */
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 333);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:Comparable> isa COMPARED */
/* <p1:Comparable> isa COMPARED */
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 333);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((long(*)(val* self, val* p0))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_standard__kernel__Comparable___60d_61d_62d]))(var_a, var_b); /* <=> on <var_a:Comparable>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#DefaultReverseComparator#compare for (self: DefaultReverseComparator, Comparable, Comparable): Int */
long standard___standard__DefaultReverseComparator___Comparator__compare(val* self, val* p0, val* p1) {
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
val* var_a /* var a: Comparable */;
val* var_b /* var b: Comparable */;
long var7 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Comparable> isa COMPARED */
/* <p0:Comparable> isa COMPARED */
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 346);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:Comparable> isa COMPARED */
/* <p1:Comparable> isa COMPARED */
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__sorter, 346);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((long(*)(val* self, val* p0))((((long)var_b&3)?class_info[((long)var_b&3)]:var_b->class)->vft[COLOR_standard__kernel__Comparable___60d_61d_62d]))(var_b, var_a); /* <=> on <var_b:Comparable>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#Sys#default_comparator for (self: Sys): DefaultComparator */
val* standard__sorter___Sys___default_comparator(val* self) {
val* var /* : DefaultComparator */;
static val* varonce;
static int varonce_guard;
val* var1 /* : DefaultComparator */;
val* var2 /* : DefaultComparator */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_standard__DefaultComparator(&type_standard__DefaultComparator);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:DefaultComparator>*/
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
/* method sorter#Sys#default_reverse_comparator for (self: Sys): DefaultReverseComparator */
val* standard__sorter___Sys___default_reverse_comparator(val* self) {
val* var /* : DefaultReverseComparator */;
static val* varonce;
static int varonce_guard;
val* var1 /* : DefaultReverseComparator */;
val* var2 /* : DefaultReverseComparator */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_standard__DefaultReverseComparator(&type_standard__DefaultReverseComparator);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:DefaultReverseComparator>*/
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
