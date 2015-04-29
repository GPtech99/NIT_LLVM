#include "perfect_hashing.sep.0.h"
/* method perfect_hashing#Perfecthashing#interval for (self: Perfecthashing): List[Couple[nullable Int, nullable Int]] */
val* perfect_hashing___perfect_hashing__Perfecthashing___interval(val* self) {
val* var /* : List[Couple[nullable Int, nullable Int]] */;
val* var1 /* : List[Couple[nullable Int, nullable Int]] */;
var1 = self->attrs[COLOR_perfect_hashing__Perfecthashing___interval].val; /* _interval on <self:Perfecthashing> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _interval");
PRINT_ERROR(" (%s:%d)\n", FILE_perfect_hashing, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method perfect_hashing#Perfecthashing#interval= for (self: Perfecthashing, List[Couple[nullable Int, nullable Int]]) */
void perfect_hashing___perfect_hashing__Perfecthashing___interval_61d(val* self, val* p0) {
self->attrs[COLOR_perfect_hashing__Perfecthashing___interval].val = p0; /* _interval on <self:Perfecthashing> */
RET_LABEL:;
}
/* method perfect_hashing#Perfecthashing#tempht for (self: Perfecthashing): Array[nullable Int] */
val* perfect_hashing___perfect_hashing__Perfecthashing___tempht(val* self) {
val* var /* : Array[nullable Int] */;
val* var1 /* : Array[nullable Int] */;
var1 = self->attrs[COLOR_perfect_hashing__Perfecthashing___tempht].val; /* _tempht on <self:Perfecthashing> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tempht");
PRINT_ERROR(" (%s:%d)\n", FILE_perfect_hashing, 29);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method perfect_hashing#Perfecthashing#tempht= for (self: Perfecthashing, Array[nullable Int]) */
void perfect_hashing___perfect_hashing__Perfecthashing___tempht_61d(val* self, val* p0) {
self->attrs[COLOR_perfect_hashing__Perfecthashing___tempht].val = p0; /* _tempht on <self:Perfecthashing> */
RET_LABEL:;
}
/* method perfect_hashing#Perfecthashing#init for (self: Perfecthashing) */
void perfect_hashing___perfect_hashing__Perfecthashing___standard__kernel__Object__init(val* self) {
val* var /* : List[Couple[nullable Int, nullable Int]] */;
val* var1 /* : Couple[nullable Int, nullable Int] */;
val* var2 /* : nullable Object */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__interval]))(self); /* interval on <self:Perfecthashing>*/
}
var1 = NEW_standard__Couple(&type_standard__Couple__nullable__standard__Int__nullable__standard__Int);
{
var2 = (val*)(1l<<2|1);
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Couple__first_61d]))(var1, var2); /* first= on <var1:Couple[nullable Int, nullable Int]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Couple__second_61d]))(var1, ((val*)NULL)); /* second= on <var1:Couple[nullable Int, nullable Int]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Couple[nullable Int, nullable Int]>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var, var1); /* push on <var:List[Couple[nullable Int, nullable Int]]>*/
}
RET_LABEL:;
}
/* method perfect_hashing#Perfecthashing#phand for (self: Perfecthashing, Array[Int]): Int */
long perfect_hashing___perfect_hashing__Perfecthashing___phand(val* self, val* p0) {
long var /* : Int */;
val* var_ids /* var ids: Array[Int] */;
long var_mask /* var mask: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var_orMask /* var orMask: Int */;
long var_andMask /* var andMask: Int */;
val* var_ /* var : Array[Int] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[Int] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var_i /* var i: Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var_i13 /* var i: Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var17 /* : Int */;
long var_18 /* var : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : Array[nullable Int] */;
long var27 /* : Int */;
long var_newmask /* var newmask: Int */;
long var29 /* : Int */;
long var_i30 /* var i: Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
var_ids = p0;
var_mask = 1l;
{
var1 = ((long(*)(val* self))(var_ids->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_ids); /* length on <var_ids:Array[Int]>*/
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
var = var_mask;
goto RET_LABEL;
} else {
}
var_orMask = 0l;
var_andMask = 0l;
var_ = var_ids;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Int]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:ArrayIterator[Int]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:ArrayIterator[Int]>*/
}
var9 = (long)(var8)>>2;
var_i = var9;
var10 = standard__math___Int___bin_or(var_orMask, var_i);
var_orMask = var10;
var11 = standard__math___Int___bin_and(var_andMask, var_i);
var_andMask = var11;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:ArrayIterator[Int]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:ArrayIterator[Int]>*/
}
var12 = standard__math___Int___bin_xor(var_orMask, var_andMask);
var_mask = var12;
var_i13 = 0l;
{
{ /* Inline kernel#Int#+ (var_mask,1l) on <var_mask:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var17 = var_mask + 1l;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_18 = var14;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i13,var_18) on <var_i13:Int> */
/* Covariant cast for argument 0 (i) <var_18:Int> isa OTHER */
/* <var_18:Int> isa OTHER */
var21 = 1; /* easy <var_18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var25 = var_i13 <= var_18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__tempht]))(self); /* tempht on <self:Perfecthashing>*/
}
{
((void(*)(val* self, long p0, val* p1))(var26->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var26, var_i13, ((val*)NULL)); /* []= on <var26:Array[nullable Int]>*/
}
var27 = standard___standard__Int___Discrete__successor(var_i13, 1l);
var_i13 = var27;
} else {
goto BREAK_label28;
}
}
BREAK_label28: (void)0;
var_newmask = 0l;
var29 = standard__bitset___Int___highest_bit(var_mask);
var_i30 = var29;
for(;;) {
{
{ /* Inline kernel#Int#!= (var_i30,0l) on <var_i30:Int> */
var33 = var_i30 == 0l;
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
var35 = standard__bitset___Int___getbit(var_mask, var_i30);
{
{ /* Inline kernel#Int#== (var35,1l) on <var35:Int> */
var38 = var35 == 1l;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
{
{ /* Inline kernel#Int#lshift (1l,var_i30) on <1l:Int> */
var41 = 1l << var_i30;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var42 = standard__math___Int___bin_xor(var_mask, var39);
var_newmask = var42;
{
var43 = ((short int(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__phandp]))(self, var_ids, var_newmask); /* phandp on <self:Perfecthashing>*/
}
if (var43){
var_mask = var_newmask;
} else {
}
} else {
}
{
{ /* Inline kernel#Int#- (var_i30,1l) on <var_i30:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var50 = var_i30 - 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_i30 = var44;
} else {
goto BREAK_label51;
}
}
BREAK_label51: (void)0;
{
{ /* Inline kernel#Int#+ (var_mask,1l) on <var_mask:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var54 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var58 = var_mask + 1l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var = var52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method perfect_hashing#Perfecthashing#phandp for (self: Perfecthashing, Array[Int], Int): Bool */
short int perfect_hashing___perfect_hashing__Perfecthashing___phandp(val* self, val* p0, long p1) {
short int var /* : Bool */;
val* var_ids /* var ids: Array[Int] */;
long var_mask /* var mask: Int */;
val* var_ /* var : Array[Int] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : ArrayIterator[Int] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
long var5 /* : Int */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var_hv /* var hv: Int */;
val* var7 /* : Array[nullable Int] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
val* var14 /* : Array[nullable Int] */;
val* var15 /* : nullable Object */;
var_ids = p0;
var_mask = p1;
var_ = var_ids;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Int]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:ArrayIterator[Int]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:ArrayIterator[Int]>*/
}
var5 = (long)(var4)>>2;
var_i = var5;
var6 = standard__math___Int___bin_and(var_i, var_mask);
var_hv = var6;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__tempht]))(self); /* tempht on <self:Perfecthashing>*/
}
{
var8 = ((val*(*)(val* self, long p0))(var7->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, var_hv); /* [] on <var7:Array[nullable Int]>*/
}
if (var8 == NULL) {
var9 = 0; /* <var_mask:Int> cannot be null */
} else {
{ /* Inline kernel#Int#== (var8,var_mask) on <var8:nullable Object(nullable Int)> */
var13 = (long)(var8)>>2;
var12 = (var8 != NULL) && (var13 == var_mask);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__tempht]))(self); /* tempht on <self:Perfecthashing>*/
}
{
var15 = (val*)(var_mask<<2|1);
((void(*)(val* self, long p0, val* p1))(var14->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var14, var_hv, var15); /* []= on <var14:Array[nullable Int]>*/
}
}
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:ArrayIterator[Int]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:ArrayIterator[Int]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method perfect_hashing#Perfecthashing#pnand for (self: Perfecthashing, Array[Int], Int, Array[Int]): Int */
long perfect_hashing___perfect_hashing__Perfecthashing___pnand(val* self, val* p0, long p1, val* p2) {
long var /* : Int */;
val* var_ids /* var ids: Array[Int] */;
long var_n /* var n: Int */;
val* var_idc /* var idc: Array[Int] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_mask /* var mask: Int */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var_j /* var j: Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var_ /* var : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
val* var54 /* : Array[nullable Int] */;
long var55 /* : Int */;
short int var57 /* : Bool */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
var_ids = p0;
var_n = p1;
var_idc = p2;
{
var1 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__phand]))(self, var_ids); /* phand on <self:Perfecthashing>*/
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
var_mask = var2;
var_i = 0l;
for(;;) {
{
var6 = ((long(*)(val* self))(var_ids->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_ids); /* length on <var_ids:Array[Int]>*/
}
{
{ /* Inline kernel#Int#+ (var_n,var6) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var13 = var_n + var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var14 = standard__bitset___Int___number_bits(var_mask, 1l);
{
{ /* Inline kernel#Int#lshift (1l,var14) on <1l:Int> */
var17 = 1l << var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var7,var15) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var20 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var24 = var7 > var15;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
var25 = standard__bitset___Int___getbit(var_mask, var_i);
{
{ /* Inline kernel#Int#== (var25,0l) on <var25:Int> */
var28 = var25 == 0l;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline kernel#Int#lshift (1l,var_i) on <1l:Int> */
var31 = 1l << var_i;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var32 = standard__math___Int___bin_xor(var_mask, var29);
var_mask = var32;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var39 = var_i + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_i = var33;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var_j = 0l;
{
{ /* Inline kernel#Int#+ (var_mask,1l) on <var_mask:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var42 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var46 = var_mask + 1l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_ = var40;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var49 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var53 = var_j <= var_;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
var54 = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__tempht]))(self); /* tempht on <self:Perfecthashing>*/
}
{
((void(*)(val* self, long p0, val* p1))(var54->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var54, var_j, ((val*)NULL)); /* []= on <var54:Array[nullable Int]>*/
}
var55 = standard___standard__Int___Discrete__successor(var_j, 1l);
var_j = var55;
} else {
goto BREAK_label56;
}
}
BREAK_label56: (void)0;
{
var57 = ((short int(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__phandp]))(self, var_ids, var_mask); /* phandp on <self:Perfecthashing>*/
}
{
((void(*)(val* self, long p0, long p1, val* p2))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__compute_least_free_ids]))(self, var_n, var_mask, var_idc); /* compute_least_free_ids on <self:Perfecthashing>*/
}
{
{ /* Inline kernel#Int#+ (var_mask,1l) on <var_mask:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var60 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var64 = var_mask + 1l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var = var58;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method perfect_hashing#Perfecthashing#compute_least_free_ids for (self: Perfecthashing, Int, Int, Array[Int]) */
void perfect_hashing___perfect_hashing__Perfecthashing___compute_least_free_ids(val* self, long p0, long p1, val* p2) {
long var_n /* var n: Int */;
long var_mask /* var mask: Int */;
val* var_idc /* var idc: Array[Int] */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
val* var5 /* : nullable Object */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
var_n = p0;
var_mask = p1;
var_idc = p2;
for(;;) {
{
{ /* Inline kernel#Int#!= (var_n,0l) on <var_n:Int> */
var2 = var_n == 0l;
var3 = !var2;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
{
var4 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__first_valid_id]))(self, var_mask); /* first_valid_id on <self:Perfecthashing>*/
}
{
var5 = (val*)(var4<<2|1);
((void(*)(val* self, val* p0))(var_idc->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_idc, var5); /* push on <var_idc:Array[Int]>*/
}
{
{ /* Inline kernel#Int#- (var_n,1l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var9 = var_n - 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_n = var6;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method perfect_hashing#Perfecthashing#first_valid_id for (self: Perfecthashing, Int): Int */
long perfect_hashing___perfect_hashing__Perfecthashing___first_valid_id(val* self, long p0) {
long var /* : Int */;
long var_mask /* var mask: Int */;
val* var1 /* : List[Couple[nullable Int, nullable Int]] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_inter /* var inter: ListIterator[Couple[nullable Int, nullable Int]] */;
short int var_found /* var found: Bool */;
long var_id /* var id: Int */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
long var_i /* var i: Int */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var_hv /* var hv: Int */;
val* var20 /* : Array[nullable Int] */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
val* var26 /* : Array[nullable Int] */;
val* var27 /* : Array[nullable Int] */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
long var33 /* : Int */;
short int var34 /* : Bool */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
short int var42 /* : Bool */;
val* var44 /* : nullable Object */;
val* var45 /* : nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
long var49 /* : Int */;
val* var50 /* : nullable Object */;
val* var51 /* : nullable Object */;
val* var52 /* : nullable Object */;
val* var53 /* : nullable Object */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_59 /* var : Couple[nullable Int, nullable Int] */;
val* var60 /* : nullable Object */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var68 /* : Int */;
val* var69 /* : nullable Object */;
short int var70 /* : Bool */;
val* var71 /* : nullable Object */;
val* var72 /* : nullable Object */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var_78 /* var : Bool */;
val* var79 /* : nullable Object */;
val* var80 /* : nullable Object */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
long var84 /* : Int */;
short int var85 /* : Bool */;
val* var86 /* : nullable Object */;
val* var87 /* : nullable Object */;
val* var_last /* var last: nullable Int */;
val* var88 /* : nullable Object */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
val* var96 /* : nullable Object */;
val* var97 /* : Couple[nullable Int, nullable Int] */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
val* var105 /* : nullable Object */;
val* var_p /* var p: Couple[nullable Int, nullable Int] */;
short int var106 /* : Bool */;
val* var107 /* : List[Couple[nullable Int, nullable Int]] */;
val* var108 /* : nullable Object */;
long var109 /* : Int */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
long var115 /* : Int */;
val* var116 /* : nullable Object */;
var_mask = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__interval]))(self); /* interval on <self:Perfecthashing>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:List[Couple[nullable Int, nullable Int]]>*/
}
var_inter = var2;
var_found = 0;
var_id = 0l;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_inter); /* is_ok on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
var_ = var4;
if (var4){
var5 = !var_found;
var3 = var5;
} else {
var3 = var_;
}
if (var3){
{
var6 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__abstract_collection__Couple__first]))(var6); /* first on <var6:nullable Object(Couple[nullable Int, nullable Int])>*/
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_perfect_hashing, 156);
fatal_exit(1);
}
var8 = (long)(var7)>>2;
var_i = var8;
for(;;) {
{
var10 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__abstract_collection__Couple__second]))(var10); /* second on <var10:nullable Object(Couple[nullable Int, nullable Int])>*/
}
{
{ /* Inline kernel#Int#!= (var_i,var11) on <var_i:Int> */
var15 = (long)(var11)>>2;
var14 = (var11 != NULL) && (var15 == var_i);
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_17 = var12;
if (var12){
var18 = !var_found;
var9 = var18;
} else {
var9 = var_17;
}
if (var9){
var19 = standard__math___Int___bin_and(var_i, var_mask);
var_hv = var19;
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__tempht]))(self); /* tempht on <self:Perfecthashing>*/
}
{
var21 = ((long(*)(val* self))(var20->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var20); /* length on <var20:Array[nullable Int]>*/
}
{
{ /* Inline kernel#Int#>= (var_hv,var21) on <var_hv:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var25 = var_hv >= var21;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__tempht]))(self); /* tempht on <self:Perfecthashing>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var26, ((val*)NULL)); /* push on <var26:Array[nullable Int]>*/
}
} else {
}
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__tempht]))(self); /* tempht on <self:Perfecthashing>*/
}
{
var28 = ((val*(*)(val* self, long p0))(var27->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var27, var_hv); /* [] on <var27:Array[nullable Int]>*/
}
if (var28 == NULL) {
var29 = 1; /* <var_mask:Int> cannot be null */
} else {
{ /* Inline kernel#Int#!= (var28,var_mask) on <var28:nullable Object(nullable Int)> */
var33 = (long)(var28)>>2;
var32 = (var28 != NULL) && (var33 == var_mask);
var34 = !var32;
var30 = var34;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
var_found = 1;
var_id = var_i;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var37 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var41 = var_i + 1l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_i = var35;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var42 = !var_found;
if (var42){
{
((void(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_inter); /* next on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
} else {
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
var44 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
var45 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__abstract_collection__Couple__first]))(var44); /* first on <var44:nullable Object(Couple[nullable Int, nullable Int])>*/
}
{
{ /* Inline kernel#Int#== (var_id,var45) on <var_id:Int> */
var49 = (long)(var45)>>2;
var48 = (var45 != NULL) && (var49 == var_id);
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
{
var50 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
var51 = ((val*(*)(val* self))(var50->class->vft[COLOR_standard__abstract_collection__Couple__first]))(var50); /* first on <var50:nullable Object(Couple[nullable Int, nullable Int])>*/
}
{
var52 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
var53 = ((val*(*)(val* self))(var52->class->vft[COLOR_standard__abstract_collection__Couple__second]))(var52); /* second on <var52:nullable Object(Couple[nullable Int, nullable Int])>*/
}
if (var51 == NULL) {
var54 = (var53 == NULL);
} else {
{ /* Inline kernel#Int#== (var51,var53) on <var51:nullable Object(nullable Int)> */
var57 = var51 == var53;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
((void(*)(val* self))(var_inter->class->vft[COLOR_standard__list__ListIterator__delete]))(var_inter); /* delete on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
} else {
{
var58 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
var_59 = var58;
{
var60 = ((val*(*)(val* self))(var_59->class->vft[COLOR_standard__abstract_collection__Couple__first]))(var_59); /* first on <var_59:Couple[nullable Int, nullable Int]>*/
}
if (var60 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_perfect_hashing, 183);
fatal_exit(1);
} else {
{ /* Inline kernel#Int#+ (var60,1l) on <var60:nullable Object(nullable Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var67 = (long)(var60)>>2;
var68 = var67 + 1l;
var61 = var68;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
var69 = (val*)(var61<<2|1);
((void(*)(val* self, val* p0))(var_59->class->vft[COLOR_standard__abstract_collection__Couple__first_61d]))(var_59, var69); /* first= on <var_59:Couple[nullable Int, nullable Int]>*/
}
}
} else {
{
var71 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
var72 = ((val*(*)(val* self))(var71->class->vft[COLOR_standard__abstract_collection__Couple__first]))(var71); /* first on <var71:nullable Object(Couple[nullable Int, nullable Int])>*/
}
{
{ /* Inline kernel#Int#!= (var_id,var72) on <var_id:Int> */
var76 = (long)(var72)>>2;
var75 = (var72 != NULL) && (var76 == var_id);
var77 = !var75;
var73 = var77;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_78 = var73;
if (var73){
{
var79 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
var80 = ((val*(*)(val* self))(var79->class->vft[COLOR_standard__abstract_collection__Couple__second]))(var79); /* second on <var79:nullable Object(Couple[nullable Int, nullable Int])>*/
}
{
{ /* Inline kernel#Int#!= (var_id,var80) on <var_id:Int> */
var84 = (long)(var80)>>2;
var83 = (var80 != NULL) && (var84 == var_id);
var85 = !var83;
var81 = var85;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var70 = var81;
} else {
var70 = var_78;
}
if (var70){
{
var86 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
var87 = ((val*(*)(val* self))(var86->class->vft[COLOR_standard__abstract_collection__Couple__second]))(var86); /* second on <var86:nullable Object(Couple[nullable Int, nullable Int])>*/
}
var_last = var87;
{
var88 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
{ /* Inline kernel#Int#- (var_id,1l) on <var_id:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var91 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var95 = var_id - 1l;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
var96 = (val*)(var89<<2|1);
((void(*)(val* self, val* p0))(var88->class->vft[COLOR_standard__abstract_collection__Couple__second_61d]))(var88, var96); /* second= on <var88:nullable Object(Couple[nullable Int, nullable Int])>*/
}
{
((void(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_inter); /* next on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
var97 = NEW_standard__Couple(&type_standard__Couple__nullable__standard__Int__nullable__standard__Int);
{
{ /* Inline kernel#Int#+ (var_id,1l) on <var_id:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var100 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var104 = var_id + 1l;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
var105 = (val*)(var98<<2|1);
((void(*)(val* self, val* p0))(var97->class->vft[COLOR_standard__abstract_collection__Couple__first_61d]))(var97, var105); /* first= on <var97:Couple[nullable Int, nullable Int]>*/
}
{
((void(*)(val* self, val* p0))(var97->class->vft[COLOR_standard__abstract_collection__Couple__second_61d]))(var97, var_last); /* second= on <var97:Couple[nullable Int, nullable Int]>*/
}
{
((void(*)(val* self))(var97->class->vft[COLOR_standard__kernel__Object__init]))(var97); /* init on <var97:Couple[nullable Int, nullable Int]>*/
}
var_p = var97;
{
var106 = ((short int(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_inter); /* is_ok on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
if (var106){
{
((void(*)(val* self, val* p0))(var_inter->class->vft[COLOR_standard__list__ListIterator__insert_before]))(var_inter, var_p); /* insert_before on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
} else {
{
var107 = ((val*(*)(val* self))(self->class->vft[COLOR_perfect_hashing__Perfecthashing__interval]))(self); /* interval on <self:Perfecthashing>*/
}
{
((void(*)(val* self, val* p0))(var107->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var107, var_p); /* push on <var107:List[Couple[nullable Int, nullable Int]]>*/
}
}
} else {
{
var108 = ((val*(*)(val* self))(var_inter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_inter); /* item on <var_inter:ListIterator[Couple[nullable Int, nullable Int]]>*/
}
{
{ /* Inline kernel#Int#- (var_id,1l) on <var_id:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var111 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var111)) {
var_class_name114 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var115 = var_id - 1l;
var109 = var115;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
var116 = (val*)(var109<<2|1);
((void(*)(val* self, val* p0))(var108->class->vft[COLOR_standard__abstract_collection__Couple__second_61d]))(var108, var116); /* second= on <var108:nullable Object(Couple[nullable Int, nullable Int])>*/
}
}
}
var = var_id;
goto RET_LABEL;
RET_LABEL:;
return var;
}
