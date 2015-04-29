#include "standard__bitset.sep.0.h"
/* method bitset#Int#setbit for (self: Int, Int, Int): Int */
long standard__bitset___Int___setbit(long self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = bitset___Int_setbit___impl(self, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bitset#Int#getbit for (self: Int, Int): Int */
long standard__bitset___Int___getbit(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = bitset___Int_getbit___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bitset#Int#bits for (self: Int): Array[Int] */
val* standard__bitset___Int___bits(long self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
val* var_bits /* var bits: Array[Int] */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
var1 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_standard__array__Array__with_capacity]))(var1, 32l); /* with_capacity on <var1:Array[Int]>*/
}
var_bits = var1;
var_i = 0l;
var_ = 32l;
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
var6 = standard__bitset___Int___getbit(self, var_i);
{
var7 = (val*)(var6<<2|1);
((void(*)(val* self, long p0, val* p1))(var_bits->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_bits, var_i, var7); /* []= on <var_bits:Array[Int]>*/
}
var8 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_bits;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bitset#Int#number_bits for (self: Int, Int): Int */
long standard__bitset___Int___number_bits(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = bitset___Int_number_bits___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bitset#Int#highest_bit for (self: Int): Int */
long standard__bitset___Int___highest_bit(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = bitset___Int_highest_bit___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
