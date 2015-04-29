#include "nit__vm_optimizations.sep.0.h"
/* method vm_optimizations#VirtualMachine#callsite for (self: VirtualMachine, nullable CallSite, Array[Instance]): nullable Instance */
val* nit__vm_optimizations___VirtualMachine___nit__naive_interpreter__NaiveInterpreter__callsite(val* self, val* p0, val* p1) {
val* var /* : nullable Instance */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var_arguments /* var arguments: Array[Instance] */;
val* var1 /* : MMethodDef */;
val* var2 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Instance */;
val* var5 /* : nullable Object */;
val* var_recv /* var recv: Instance */;
long var_i /* var i: Int */;
val* var_ /* var : Array[MProperty] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MProperty] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : Array[Instance] */;
val* var_12 /* var : Array[Instance] */;
val* var_args /* var args: Array[Instance] */;
val* var13 /* : MPropDef */;
val* var14 /* : nullable MSignature */;
val* var15 /* : Array[MParameter] */;
val* var_16 /* var : Array[MParameter] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : ArrayIterator[MParameter] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_x /* var x: MParameter */;
val* var21 /* : nullable Object */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name;
long var27 /* : Int */;
val* var28 /* : nullable Instance */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : nullable Object */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : Array[Instance] */;
val* var_49 /* var : Array[Instance] */;
val* var50 /* : nullable Instance */;
var_callsite = p0;
var_arguments = p1;
if (var_callsite == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 27);
fatal_exit(1);
} else {
var1 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mpropdef]))(var_callsite); /* mpropdef on <var_callsite:nullable CallSite>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var1); /* initializers on <var1:MMethodDef>*/
}
var_initializers = var2;
{
var3 = ((short int(*)(val* self))(var_initializers->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_initializers); /* is_empty on <var_initializers:Array[MProperty]>*/
}
if (var3){
if (unlikely(var_callsite == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 28);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__vm_optimizations__VirtualMachine__send_optimize]))(self, var_callsite, var_arguments); /* send_optimize on <self:VirtualMachine>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_arguments->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_arguments); /* first on <var_arguments:Array[Instance]>*/
}
var_recv = var5;
var_i = 1l;
var_ = var_initializers;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MProperty]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MProperty]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MProperty]>*/
}
var_p = var9;
/* <var_p:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_p->type->table_size) {
var10 = 0;
} else {
var10 = var_p->type->type_table[cltype] == idtype;
}
if (var10){
var11 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var11->class->vft[COLOR_standard__array__Array__with_capacity]))(var11, 1l); /* with_capacity on <var11:Array[Instance]>*/
}
var_12 = var11;
{
((void(*)(val* self, val* p0))(var_12->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_12, var_recv); /* push on <var_12:Array[Instance]>*/
}
var_args = var_12;
{
var13 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MProperty__intro]))(var_p); /* intro on <var_p:MProperty(MMethod)>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var13); /* msignature on <var13:MPropDef(MMethodDef)>*/
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 35);
fatal_exit(1);
} else {
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MSignature__mparameters]))(var14); /* mparameters on <var14:nullable MSignature>*/
}
var_16 = var15;
{
var17 = ((val*(*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_16); /* iterator on <var_16:Array[MParameter]>*/
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:ArrayIterator[MParameter]>*/
}
if (var19){
{
var20 = ((val*(*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:ArrayIterator[MParameter]>*/
}
var_x = var20;
{
var21 = ((val*(*)(val* self, long p0))(var_arguments->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_i); /* [] on <var_arguments:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_args, var21); /* add on <var_args:Array[Instance]>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var27 = var_i + 1l;
var22 = var27;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
{
((void(*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:ArrayIterator[MParameter]>*/
}
{
var28 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(self, var_p, var_args); /* send on <self:VirtualMachine>*/
}
} else {
/* <var_p:MProperty> isa MAttribute */
cltype30 = type_nit__MAttribute.color;
idtype31 = type_nit__MAttribute.id;
if(cltype30 >= var_p->type->table_size) {
var29 = 0;
} else {
var29 = var_p->type->type_table[cltype30] == idtype31;
}
if (var29){
/* <var_recv:Instance> isa MutableInstance */
cltype33 = type_nit__MutableInstance.color;
idtype34 = type_nit__MutableInstance.id;
if(cltype33 >= var_recv->type->table_size) {
var32 = 0;
} else {
var32 = var_recv->type->type_table[cltype33] == idtype34;
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 41);
fatal_exit(1);
}
{
var35 = ((val*(*)(val* self, long p0))(var_arguments->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_i); /* [] on <var_arguments:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_attribute]))(self, var_p, var_recv, var35); /* write_attribute on <self:VirtualMachine>*/
}
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
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 44);
fatal_exit(1);
}
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MProperty]>*/
}
{
var44 = ((long(*)(val* self))(var_arguments->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_arguments); /* length on <var_arguments:Array[Instance]>*/
}
{
{ /* Inline kernel#Int#== (var_i,var44) on <var_i:Int> */
var47 = var_i == var44;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 46);
fatal_exit(1);
}
if (unlikely(var_callsite == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 48);
fatal_exit(1);
}
var48 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var48->class->vft[COLOR_standard__array__Array__with_capacity]))(var48, 1l); /* with_capacity on <var48:Array[Instance]>*/
}
var_49 = var48;
{
((void(*)(val* self, val* p0))(var_49->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_49, var_recv); /* push on <var_49:Array[Instance]>*/
}
{
var50 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__vm_optimizations__VirtualMachine__send_optimize]))(self, var_callsite, var_49); /* send_optimize on <self:VirtualMachine>*/
}
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method vm_optimizations#VirtualMachine#send_optimize for (self: VirtualMachine, CallSite, Array[Instance]): nullable Instance */
val* nit__vm_optimizations___VirtualMachine___send_optimize(val* self, val* p0, val* p1) {
val* var /* : nullable Instance */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: Array[Instance] */;
val* var1 /* : nullable Object */;
val* var_recv /* var recv: Instance */;
val* var2 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var3 /* : MMethod */;
val* var4 /* : nullable Instance */;
val* var_ret /* var ret: nullable Instance */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable VTable */;
val* var16 /* : Pointer */;
long var17 /* : Int */;
val* var18 /* : MMethodDef */;
val* var_propdef /* var propdef: nullable Object */;
val* var19 /* : nullable VTable */;
val* var20 /* : Pointer */;
val* var21 /* : nullable VTable */;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
val* var25 /* : MMethodDef */;
val* var26 /* : nullable Instance */;
var_callsite = p0;
var_args = p1;
{
var1 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
var_recv = var1;
{
var2 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
var_mtype = var2;
{
var3 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:CallSite>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send_commons]))(self, var3, var_args, var_mtype); /* send_commons on <self:VirtualMachine>*/
}
var_ret = var4;
if (var_ret == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ret, ((val*)NULL)); /* != on <var_ret:nullable Instance>*/
var5 = var6;
}
if (var5){
var = var_ret;
goto RET_LABEL;
} else {
}
{
var7 = ((long(*)(val* self))(var_callsite->class->vft[COLOR_nit__vm_optimizations__CallSite__status]))(var_callsite); /* status on <var_callsite:CallSite>*/
}
{
{ /* Inline kernel#Int#== (var7,0l) on <var7:Int> */
var10 = var7 == 0l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
((void(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_nit__vm_optimizations__CallSite__optimize]))(var_callsite, var_recv); /* optimize on <var_callsite:CallSite>*/
}
} else {
}
{
var11 = ((long(*)(val* self))(var_callsite->class->vft[COLOR_nit__vm_optimizations__CallSite__status]))(var_callsite); /* status on <var_callsite:CallSite>*/
}
{
{ /* Inline kernel#Int#== (var11,1l) on <var11:Int> */
var14 = var11 == 1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
var15 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance>*/
}
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 63);
fatal_exit(1);
} else {
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var15); /* internal_vtable on <var15:nullable VTable>*/
}
{
var17 = ((long(*)(val* self))(var_callsite->class->vft[COLOR_nit__vm_optimizations__CallSite__offset]))(var_callsite); /* offset on <var_callsite:CallSite>*/
}
{
var18 = ((val*(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__method_dispatch_sst]))(self, var16, var17); /* method_dispatch_sst on <self:VirtualMachine>*/
}
var_propdef = var18;
} else {
{
var19 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance>*/
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 65);
fatal_exit(1);
} else {
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var19); /* internal_vtable on <var19:nullable VTable>*/
}
{
var21 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance>*/
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 65);
fatal_exit(1);
} else {
var22 = ((long(*)(val* self))(var21->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var21); /* mask on <var21:nullable VTable>*/
}
{
var23 = ((long(*)(val* self))(var_callsite->class->vft[COLOR_nit__vm_optimizations__CallSite__id]))(var_callsite); /* id on <var_callsite:CallSite>*/
}
{
var24 = ((long(*)(val* self))(var_callsite->class->vft[COLOR_nit__vm_optimizations__CallSite__offset]))(var_callsite); /* offset on <var_callsite:CallSite>*/
}
{
var25 = ((val*(*)(val* self, val* p0, long p1, long p2, long p3))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__method_dispatch_ph]))(self, var20, var22, var23, var24); /* method_dispatch_ph on <self:VirtualMachine>*/
}
var_propdef = var25;
}
{
var26 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__call]))(self, var_propdef, var_args); /* call on <self:VirtualMachine>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AAttrFormExpr#offset for (self: AAttrFormExpr): Int */
long nit__vm_optimizations___AAttrFormExpr___offset(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__AAttrFormExpr___offset].l; /* _offset on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AAttrFormExpr#offset= for (self: AAttrFormExpr, Int) */
void nit__vm_optimizations___AAttrFormExpr___offset_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__AAttrFormExpr___offset].l = p0; /* _offset on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method vm_optimizations#AAttrFormExpr#status for (self: AAttrFormExpr): Int */
long nit__vm_optimizations___AAttrFormExpr___status(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__AAttrFormExpr___status].l; /* _status on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AAttrFormExpr#status= for (self: AAttrFormExpr, Int) */
void nit__vm_optimizations___AAttrFormExpr___status_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__AAttrFormExpr___status].l = p0; /* _status on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method vm_optimizations#AAttrFormExpr#id for (self: AAttrFormExpr): Int */
long nit__vm_optimizations___AAttrFormExpr___id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__AAttrFormExpr___id].l; /* _id on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AAttrFormExpr#id= for (self: AAttrFormExpr, Int) */
void nit__vm_optimizations___AAttrFormExpr___id_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__AAttrFormExpr___id].l = p0; /* _id on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method vm_optimizations#AAttrFormExpr#optimize for (self: AAttrFormExpr, MAttribute, MutableInstance) */
void nit__vm_optimizations___AAttrFormExpr___optimize(val* self, val* p0, val* p1) {
val* var_mproperty /* var mproperty: MAttribute */;
val* var_recv /* var recv: MutableInstance */;
val* var /* : MClassDef */;
val* var1 /* : MClass */;
val* var2 /* : HashMap[MClass, Int] */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var5 /* : MClass */;
val* var6 /* : nullable Object */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var14 /* : Bool */;
long var15 /* : Int */;
val* var16 /* : MClassDef */;
val* var17 /* : MClass */;
val* var18 /* : nullable VTable */;
long var19 /* : Int */;
long var20 /* : Int */;
var_mproperty = p0;
var_recv = p1;
{
var = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MAttribute>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model__MClassDef__mclass]))(var); /* mclass on <var:MClassDef>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__virtual_machine__MClass__positions_attributes]))(var1); /* positions_attributes on <var1:MClass>*/
}
{
var3 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:MutableInstance>*/
}
/* <var3:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 95);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__model__MClassType__mclass]))(var3); /* mclass on <var3:MType(MClassType)>*/
}
{
var6 = ((val*(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var2, var5); /* [] on <var2:HashMap[MClass, Int]>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var9 = -1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var6,var7) on <var6:nullable Object(Int)> */
var13 = (long)(var6)>>2;
var12 = (var6 != NULL) && (var13 == var7);
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var15 = ((long(*)(val* self))(var_mproperty->class->vft[COLOR_nit__virtual_machine__MAttribute__absolute_offset]))(var_mproperty); /* absolute_offset on <var_mproperty:MAttribute>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__offset_61d]))(self, var15); /* offset= on <self:AAttrFormExpr>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__status_61d]))(self, 1l); /* status= on <self:AAttrFormExpr>*/
}
} else {
{
var16 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MAttribute>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__model__MClassDef__mclass]))(var16); /* mclass on <var16:MClassDef>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var17); /* vtable on <var17:MClass>*/
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 101);
fatal_exit(1);
} else {
var19 = ((long(*)(val* self))(var18->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var18); /* id on <var18:nullable VTable>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__id_61d]))(self, var19); /* id= on <self:AAttrFormExpr>*/
}
{
var20 = ((long(*)(val* self))(var_mproperty->class->vft[COLOR_nit__virtual_machine__MAttribute__offset]))(var_mproperty); /* offset on <var_mproperty:MAttribute>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__offset_61d]))(self, var20); /* offset= on <self:AAttrFormExpr>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__status_61d]))(self, 2l); /* status= on <self:AAttrFormExpr>*/
}
}
RET_LABEL:;
}
/* method vm_optimizations#AAttrExpr#expr for (self: AAttrExpr, NaiveInterpreter): nullable Instance */
val* nit__vm_optimizations___AAttrExpr___nit__naive_interpreter__AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable Instance */;
val* var4 /* : AExpr */;
val* var5 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MType */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : Pointer */;
long var28 /* : Int */;
val* var29 /* : Instance */;
val* var_i /* var i: Instance */;
val* var30 /* : Pointer */;
val* var31 /* : nullable VTable */;
val* var32 /* : Pointer */;
val* var33 /* : nullable VTable */;
long var34 /* : Int */;
long var35 /* : Int */;
long var36 /* : Int */;
val* var37 /* : Instance */;
val* var38 /* : Instance */;
short int var39 /* : Bool */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var47 /* : String */;
var_v = p0;
/* <var_v:NaiveInterpreter> isa VirtualMachine */
cltype = type_nit__VirtualMachine.color;
idtype = type_nit__VirtualMachine.id;
if(cltype >= var_v->type->table_size) {
var1 = 0;
} else {
var1 = var_v->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__vm_optimizations___AAttrExpr___nit__naive_interpreter__AExpr__expr]))(self, p0); /* expr on <self:AAttrExpr>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr]))(self); /* n_expr on <self:AAttrExpr>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var4); /* expr on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_recv = var5;
if (var_recv == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var6 = var7;
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var8:MType> isa MNullType */
cltype10 = type_nit__MNullType.color;
idtype11 = type_nit__MNullType.id;
if(cltype10 >= var8->type->table_size) {
var9 = 0;
} else {
var9 = var8->type->type_table[cltype10] == idtype11;
}
if (var9){
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "Receiver is null";
var14 = standard___standard__NativeString___to_s_with_length(var13, 16l);
var12 = var14;
varonce = var12;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var12); /* fatal on <self:AAttrExpr>*/
}
} else {
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__mproperty]))(self); /* mproperty on <self:AAttrExpr>*/
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 117);
fatal_exit(1);
}
var_mproperty = var15;
/* <var_recv:nullable Instance(Instance)> isa MutableInstance */
cltype17 = type_nit__MutableInstance.color;
idtype18 = type_nit__MutableInstance.id;
if(cltype17 >= var_recv->type->table_size) {
var16 = 0;
} else {
var16 = var_recv->type->type_table[cltype17] == idtype18;
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 119);
fatal_exit(1);
}
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__status]))(self); /* status on <self:AAttrExpr>*/
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
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__optimize]))(self, var_mproperty, var_recv); /* optimize on <self:AAttrExpr>*/
}
} else {
}
{
var23 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__status]))(self); /* status on <self:AAttrExpr>*/
}
{
{ /* Inline kernel#Int#== (var23,1l) on <var23:Int> */
var26 = var23 == 1l;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
var27 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes]))(var_recv); /* internal_attributes on <var_recv:nullable Instance(MutableInstance)>*/
}
{
var28 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__offset]))(self); /* offset on <self:AAttrExpr>*/
}
{
var29 = ((val*(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__read_attribute_sst]))(var_v, var27, var28); /* read_attribute_sst on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_i = var29;
} else {
{
var30 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes]))(var_recv); /* internal_attributes on <var_recv:nullable Instance(MutableInstance)>*/
}
{
var31 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:nullable Instance(MutableInstance)>*/
}
if (var31 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 128);
fatal_exit(1);
} else {
var32 = ((val*(*)(val* self))(var31->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var31); /* internal_vtable on <var31:nullable VTable>*/
}
{
var33 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:nullable Instance(MutableInstance)>*/
}
if (var33 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 128);
fatal_exit(1);
} else {
var34 = ((long(*)(val* self))(var33->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var33); /* mask on <var33:nullable VTable>*/
}
{
var35 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__id]))(self); /* id on <self:AAttrExpr>*/
}
{
var36 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__offset]))(self); /* offset on <self:AAttrExpr>*/
}
{
var37 = ((val*(*)(val* self, val* p0, val* p1, long p2, long p3, long p4))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__read_attribute_ph]))(var_v, var30, var32, var34, var35, var36); /* read_attribute_ph on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_i = var37;
}
{
var38 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__initialization_value]))(var_v); /* initialization_value on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
{
var39 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, var38); /* == on <var_i:Instance>*/
}
if (var39){
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Uninitialized attribute ";
var45 = standard___standard__NativeString___to_s_with_length(var44, 24l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[0]=var43;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mproperty); /* name on <var_mproperty:MAttribute>*/
}
((struct instance_standard__NativeArray*)var41)->values[1]=var46;
{
var47 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__fatal]))(var_v, var47); /* fatal on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 134);
fatal_exit(1);
} else {
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AAttrAssignExpr#stmt for (self: AAttrAssignExpr, NaiveInterpreter) */
void nit__vm_optimizations___AAttrAssignExpr___nit__naive_interpreter__AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : AExpr */;
val* var3 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MType */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : AExpr */;
val* var14 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : Pointer */;
long var30 /* : Int */;
val* var31 /* : Pointer */;
val* var32 /* : nullable VTable */;
val* var33 /* : Pointer */;
val* var34 /* : nullable VTable */;
long var35 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
var_v = p0;
/* <var_v:NaiveInterpreter> isa VirtualMachine */
cltype = type_nit__VirtualMachine.color;
idtype = type_nit__VirtualMachine.id;
if(cltype >= var_v->type->table_size) {
var = 0;
} else {
var = var_v->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__vm_optimizations___AAttrAssignExpr___nit__naive_interpreter__AExpr__stmt]))(self, p0); /* stmt on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr]))(self); /* n_expr on <self:AAttrAssignExpr>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var2); /* expr on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_recv = var3;
if (var_recv == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var6:MType> isa MNullType */
cltype8 = type_nit__MNullType.color;
idtype9 = type_nit__MNullType.id;
if(cltype8 >= var6->type->table_size) {
var7 = 0;
} else {
var7 = var6->type->type_table[cltype8] == idtype9;
}
if (var7){
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "Receiver is null";
var12 = standard___standard__NativeString___to_s_with_length(var11, 16l);
var10 = var12;
varonce = var10;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var10); /* fatal on <self:AAttrAssignExpr>*/
}
} else {
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value]))(self); /* n_value on <self:AAttrAssignExpr>*/
}
{
var14 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var13); /* expr on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_i = var14;
if (var_i == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var15 = var16;
}
if (var15){
goto RET_LABEL;
} else {
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__mproperty]))(self); /* mproperty on <self:AAttrAssignExpr>*/
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 155);
fatal_exit(1);
}
var_mproperty = var17;
/* <var_recv:nullable Instance(Instance)> isa MutableInstance */
cltype19 = type_nit__MutableInstance.color;
idtype20 = type_nit__MutableInstance.id;
if(cltype19 >= var_recv->type->table_size) {
var18 = 0;
} else {
var18 = var_recv->type->type_table[cltype19] == idtype20;
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 157);
fatal_exit(1);
}
{
var21 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__status]))(self); /* status on <self:AAttrAssignExpr>*/
}
{
{ /* Inline kernel#Int#== (var21,0l) on <var21:Int> */
var24 = var21 == 0l;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__optimize]))(self, var_mproperty, var_recv); /* optimize on <self:AAttrAssignExpr>*/
}
} else {
}
{
var25 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__status]))(self); /* status on <self:AAttrAssignExpr>*/
}
{
{ /* Inline kernel#Int#== (var25,1l) on <var25:Int> */
var28 = var25 == 1l;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
var29 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes]))(var_recv); /* internal_attributes on <var_recv:nullable Instance(MutableInstance)>*/
}
{
var30 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__offset]))(self); /* offset on <self:AAttrAssignExpr>*/
}
{
((void(*)(val* self, val* p0, long p1, val* p2))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__write_attribute_sst]))(var_v, var29, var30, var_i); /* write_attribute_sst on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
} else {
{
var31 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes]))(var_recv); /* internal_attributes on <var_recv:nullable Instance(MutableInstance)>*/
}
{
var32 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:nullable Instance(MutableInstance)>*/
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 163);
fatal_exit(1);
} else {
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var32); /* internal_vtable on <var32:nullable VTable>*/
}
{
var34 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:nullable Instance(MutableInstance)>*/
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 164);
fatal_exit(1);
} else {
var35 = ((long(*)(val* self))(var34->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var34); /* mask on <var34:nullable VTable>*/
}
{
var36 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__id]))(self); /* id on <self:AAttrAssignExpr>*/
}
{
var37 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAttrFormExpr__offset]))(self); /* offset on <self:AAttrAssignExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1, long p2, long p3, long p4, val* p5))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__write_attribute_ph]))(var_v, var31, var33, var35, var36, var37, var_i); /* write_attribute_ph on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
}
RET_LABEL:;
}
/* method vm_optimizations#CallSite#offset for (self: CallSite): Int */
long nit__vm_optimizations___CallSite___offset(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__CallSite___offset].l; /* _offset on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#CallSite#offset= for (self: CallSite, Int) */
void nit__vm_optimizations___CallSite___offset_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__CallSite___offset].l = p0; /* _offset on <self:CallSite> */
RET_LABEL:;
}
/* method vm_optimizations#CallSite#status for (self: CallSite): Int */
long nit__vm_optimizations___CallSite___status(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__CallSite___status].l; /* _status on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#CallSite#status= for (self: CallSite, Int) */
void nit__vm_optimizations___CallSite___status_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__CallSite___status].l = p0; /* _status on <self:CallSite> */
RET_LABEL:;
}
/* method vm_optimizations#CallSite#id for (self: CallSite): Int */
long nit__vm_optimizations___CallSite___id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__CallSite___id].l; /* _id on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#CallSite#id= for (self: CallSite, Int) */
void nit__vm_optimizations___CallSite___id_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__CallSite___id].l = p0; /* _id on <self:CallSite> */
RET_LABEL:;
}
/* method vm_optimizations#CallSite#optimize for (self: CallSite, Instance) */
void nit__vm_optimizations___CallSite___optimize(val* self, val* p0) {
val* var_recv /* var recv: Instance */;
val* var /* : MMethod */;
val* var1 /* : MClassDef */;
val* var2 /* : MClass */;
val* var3 /* : HashMap[MClass, Int] */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var6 /* : MClass */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var15 /* : Bool */;
val* var16 /* : MMethod */;
long var17 /* : Int */;
val* var18 /* : MMethod */;
long var19 /* : Int */;
val* var20 /* : MMethod */;
val* var21 /* : MClassDef */;
val* var22 /* : MClass */;
val* var23 /* : nullable VTable */;
long var24 /* : Int */;
var_recv = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__CallSite__mproperty]))(self); /* mproperty on <self:CallSite>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var); /* intro_mclassdef on <var:MMethod>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MClassDef__mclass]))(var1); /* mclass on <var1:MClassDef>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__virtual_machine__MClass__positions_methods]))(var2); /* positions_methods on <var2:MClass>*/
}
{
var4 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var4:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = var4 == NULL ? "null" : var4->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 192);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__model__MClassType__mclass]))(var4); /* mclass on <var4:MType(MClassType)>*/
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var3, var6); /* [] on <var3:HashMap[MClass, Int]>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var10 = -1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var7,var8) on <var7:nullable Object(Int)> */
var14 = (long)(var7)>>2;
var13 = (var7 != NULL) && (var14 == var8);
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__CallSite__mproperty]))(self); /* mproperty on <self:CallSite>*/
}
{
var17 = ((long(*)(val* self))(var16->class->vft[COLOR_nit__virtual_machine__MMethod__absolute_offset]))(var16); /* absolute_offset on <var16:MMethod>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__CallSite__offset_61d]))(self, var17); /* offset= on <self:CallSite>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__CallSite__status_61d]))(self, 1l); /* status= on <self:CallSite>*/
}
} else {
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__CallSite__mproperty]))(self); /* mproperty on <self:CallSite>*/
}
{
var19 = ((long(*)(val* self))(var18->class->vft[COLOR_nit__virtual_machine__MMethod__offset]))(var18); /* offset on <var18:MMethod>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__CallSite__offset_61d]))(self, var19); /* offset= on <self:CallSite>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__CallSite__status_61d]))(self, 2l); /* status= on <self:CallSite>*/
}
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__CallSite__mproperty]))(self); /* mproperty on <self:CallSite>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var20); /* intro_mclassdef on <var20:MMethod>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__model__MClassDef__mclass]))(var21); /* mclass on <var21:MClassDef>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var22); /* vtable on <var22:MClass>*/
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 199);
fatal_exit(1);
} else {
var24 = ((long(*)(val* self))(var23->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var23); /* id on <var23:nullable VTable>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__CallSite__id_61d]))(self, var24); /* id= on <self:CallSite>*/
}
RET_LABEL:;
}
/* method vm_optimizations#AIsaExpr#id for (self: AIsaExpr): Int */
long nit__vm_optimizations___AIsaExpr___id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__AIsaExpr___id].l; /* _id on <self:AIsaExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AIsaExpr#id= for (self: AIsaExpr, Int) */
void nit__vm_optimizations___AIsaExpr___id_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__AIsaExpr___id].l = p0; /* _id on <self:AIsaExpr> */
RET_LABEL:;
}
/* method vm_optimizations#AIsaExpr#position for (self: AIsaExpr): Int */
long nit__vm_optimizations___AIsaExpr___position(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__AIsaExpr___position].l; /* _position on <self:AIsaExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AIsaExpr#position= for (self: AIsaExpr, Int) */
void nit__vm_optimizations___AIsaExpr___position_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__AIsaExpr___position].l = p0; /* _position on <self:AIsaExpr> */
RET_LABEL:;
}
/* method vm_optimizations#AIsaExpr#status for (self: AIsaExpr): Int */
long nit__vm_optimizations___AIsaExpr___status(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__AIsaExpr___status].l; /* _status on <self:AIsaExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AIsaExpr#status= for (self: AIsaExpr, Int) */
void nit__vm_optimizations___AIsaExpr___status_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__AIsaExpr___status].l = p0; /* _status on <self:AIsaExpr> */
RET_LABEL:;
}
/* method vm_optimizations#AIsaExpr#expr for (self: AIsaExpr, NaiveInterpreter): nullable Instance */
val* nit__vm_optimizations___AIsaExpr___nit__naive_interpreter__AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable Instance */;
val* var4 /* : AExpr */;
val* var5 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MType */;
val* var13 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var15 /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
val* var21 /* : MType */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
long var25 /* : Int */;
long var26 /* : Int */;
val* var27 /* : MType */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name;
val* var31 /* : MClass */;
val* var32 /* : nullable VTable */;
val* var33 /* : Pointer */;
short int var34 /* : Bool */;
val* var35 /* : Instance */;
short int var36 /* : Bool */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
val* var42 /* : MType */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
long var46 /* : Int */;
val* var47 /* : nullable VTable */;
long var48 /* : Int */;
val* var49 /* : MType */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
val* var54 /* : MClass */;
val* var55 /* : nullable VTable */;
val* var56 /* : Pointer */;
short int var57 /* : Bool */;
val* var58 /* : Instance */;
val* var59 /* : MType */;
short int var60 /* : Bool */;
val* var61 /* : Instance */;
var_v = p0;
/* <var_v:NaiveInterpreter> isa VirtualMachine */
cltype = type_nit__VirtualMachine.color;
idtype = type_nit__VirtualMachine.id;
if(cltype >= var_v->type->table_size) {
var1 = 0;
} else {
var1 = var_v->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__vm_optimizations___AIsaExpr___nit__naive_interpreter__AExpr__expr]))(self, p0); /* expr on <self:AIsaExpr>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_expr]))(self); /* n_expr on <self:AIsaExpr>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var4); /* expr on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_recv = var5;
if (var_recv == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var6 = var7;
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__status]))(self); /* status on <self:AIsaExpr>*/
}
{
{ /* Inline kernel#Int#== (var8,0l) on <var8:Int> */
var11 = var8 == 0l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AIsaExpr__cast_type]))(self); /* cast_type on <self:AIsaExpr>*/
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 225);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__optimize]))(self, var_v, var12, var13); /* optimize on <self:AIsaExpr>*/
}
} else {
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AIsaExpr__cast_type]))(self); /* cast_type on <self:AIsaExpr>*/
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 226);
fatal_exit(1);
}
{
var15 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__unanchor_type]))(var_v, var14); /* unanchor_type on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_mtype = var15;
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__status]))(self); /* status on <self:AIsaExpr>*/
}
{
{ /* Inline kernel#Int#== (var17,1l) on <var17:Int> */
var20 = var17 == 1l;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_ = var18;
if (var18){
{
var21 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var21:MType> isa MClassType */
cltype23 = type_nit__MClassType.color;
idtype24 = type_nit__MClassType.id;
if(cltype23 >= var21->type->table_size) {
var22 = 0;
} else {
var22 = var21->type->type_table[cltype23] == idtype24;
}
var16 = var22;
} else {
var16 = var_;
}
if (var16){
{
var25 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__id]))(self); /* id on <self:AIsaExpr>*/
}
{
var26 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__position]))(self); /* position on <self:AIsaExpr>*/
}
{
var27 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var27:MType> isa MClassType */
cltype29 = type_nit__MClassType.color;
idtype30 = type_nit__MClassType.id;
if(cltype29 >= var27->type->table_size) {
var28 = 0;
} else {
var28 = var27->type->type_table[cltype29] == idtype30;
}
if (unlikely(!var28)) {
var_class_name = var27 == NULL ? "null" : var27->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 231);
fatal_exit(1);
}
{
var31 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__model__MClassType__mclass]))(var27); /* mclass on <var27:MType(MClassType)>*/
}
{
var32 = ((val*(*)(val* self))(var31->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var31); /* vtable on <var31:MClass>*/
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 231);
fatal_exit(1);
} else {
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var32); /* internal_vtable on <var32:nullable VTable>*/
}
{
var34 = ((short int(*)(val* self, long p0, long p1, val* p2))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__inter_is_subtype_sst]))(var_v, var25, var26, var33); /* inter_is_subtype_sst on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
{
var35 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var34); /* bool_instance on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var = var35;
goto RET_LABEL;
} else {
{
var37 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__status]))(self); /* status on <self:AIsaExpr>*/
}
{
{ /* Inline kernel#Int#== (var37,2l) on <var37:Int> */
var40 = var37 == 2l;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_41 = var38;
if (var38){
{
var42 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var42:MType> isa MClassType */
cltype44 = type_nit__MClassType.color;
idtype45 = type_nit__MClassType.id;
if(cltype44 >= var42->type->table_size) {
var43 = 0;
} else {
var43 = var42->type->type_table[cltype44] == idtype45;
}
var36 = var43;
} else {
var36 = var_41;
}
if (var36){
{
var46 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__id]))(self); /* id on <self:AIsaExpr>*/
}
{
var47 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:nullable Instance(Instance)>*/
}
if (var47 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 234);
fatal_exit(1);
} else {
var48 = ((long(*)(val* self))(var47->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var47); /* mask on <var47:nullable VTable>*/
}
{
var49 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var49:MType> isa MClassType */
cltype51 = type_nit__MClassType.color;
idtype52 = type_nit__MClassType.id;
if(cltype51 >= var49->type->table_size) {
var50 = 0;
} else {
var50 = var49->type->type_table[cltype51] == idtype52;
}
if (unlikely(!var50)) {
var_class_name53 = var49 == NULL ? "null" : var49->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 234);
fatal_exit(1);
}
{
var54 = ((val*(*)(val* self))(var49->class->vft[COLOR_nit__model__MClassType__mclass]))(var49); /* mclass on <var49:MType(MClassType)>*/
}
{
var55 = ((val*(*)(val* self))(var54->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var54); /* vtable on <var54:MClass>*/
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 234);
fatal_exit(1);
} else {
var56 = ((val*(*)(val* self))(var55->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var55); /* internal_vtable on <var55:nullable VTable>*/
}
{
var57 = ((short int(*)(val* self, long p0, long p1, val* p2))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__inter_is_subtype_ph]))(var_v, var46, var48, var56); /* inter_is_subtype_ph on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
{
var58 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var57); /* bool_instance on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var = var58;
goto RET_LABEL;
} else {
{
var59 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
{
var60 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_subtype]))(var_v, var59, var_mtype); /* is_subtype on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
{
var61 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var60); /* bool_instance on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var = var61;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method vm_optimizations#AIsaExpr#optimize for (self: AIsaExpr, VirtualMachine, MType, MType) */
void nit__vm_optimizations___AIsaExpr___optimize(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: VirtualMachine */;
val* var_source /* var source: MType */;
val* var_target /* var target: MType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
short int var_8 /* var : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : MClass */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MClass */;
val* var16 /* : HashMap[MClass, Int] */;
val* var17 /* : MClass */;
val* var18 /* : nullable Object */;
val* var_value /* var value: nullable Int */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
long var30 /* : Int */;
short int var31 /* : Bool */;
val* var32 /* : MClass */;
long var33 /* : Int */;
val* var34 /* : MClass */;
val* var35 /* : nullable VTable */;
long var36 /* : Int */;
var_v = p0;
var_source = p1;
var_target = p2;
/* <var_source:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_source->type->table_size) {
var2 = 0;
} else {
var2 = var_source->type->type_table[cltype] == idtype;
}
var3 = !var2;
var_ = var3;
if (var3){
var1 = var_;
} else {
/* <var_target:MType> isa MClassType */
cltype5 = type_nit__MClassType.color;
idtype6 = type_nit__MClassType.id;
if(cltype5 >= var_target->type->table_size) {
var4 = 0;
} else {
var4 = var_target->type->type_table[cltype5] == idtype6;
}
var7 = !var4;
var1 = var7;
}
var_8 = var1;
if (var1){
var = var_8;
} else {
/* <var_target:MType(MClassType)> isa MGenericType */
cltype10 = type_nit__MGenericType.color;
idtype11 = type_nit__MGenericType.id;
if(cltype10 >= var_target->type->table_size) {
var9 = 0;
} else {
var9 = var_target->type->type_table[cltype10] == idtype11;
}
var = var9;
}
if (var){
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self))(var_target->class->vft[COLOR_nit__model__MClassType__mclass]))(var_target); /* mclass on <var_target:MType(MClassType)>*/
}
{
var13 = ((short int(*)(val* self))(var12->class->vft[COLOR_nit__virtual_machine__MClass__loaded]))(var12); /* loaded on <var12:MClass>*/
}
var14 = !var13;
if (var14){
goto RET_LABEL;
} else {
}
{
var15 = ((val*(*)(val* self))(var_source->class->vft[COLOR_nit__model__MClassType__mclass]))(var_source); /* mclass on <var_source:MType(MClassType)>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__virtual_machine__MClass__positions_methods]))(var15); /* positions_methods on <var15:MClass>*/
}
{
var17 = ((val*(*)(val* self))(var_target->class->vft[COLOR_nit__model__MClassType__mclass]))(var_target); /* mclass on <var_target:MType(MClassType)>*/
}
{
var18 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var16, var17); /* get_or_null on <var16:HashMap[MClass, Int]>*/
}
var_value = var18;
if (var_value == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Int#!= (var_value,((val*)NULL)) on <var_value:nullable Int> */
var22 = 0; /* incompatible types Int vs. null; cannot be NULL */
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var26 = -1l;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_value,var24) on <var_value:nullable Int(Int)> */
var30 = (long)(var_value)>>2;
var29 = (var_value != NULL) && (var30 == var24);
var31 = !var29;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
var32 = ((val*(*)(val* self))(var_target->class->vft[COLOR_nit__model__MClassType__mclass]))(var_target); /* mclass on <var_target:MType(MClassType)>*/
}
{
var33 = ((long(*)(val* self))(var32->class->vft[COLOR_nit__virtual_machine__MClass__color]))(var32); /* color on <var32:MClass>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__position_61d]))(self, var33); /* position= on <self:AIsaExpr>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__status_61d]))(self, 1l); /* status= on <self:AIsaExpr>*/
}
} else {
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__status_61d]))(self, 2l); /* status= on <self:AIsaExpr>*/
}
}
} else {
}
{
var34 = ((val*(*)(val* self))(var_target->class->vft[COLOR_nit__model__MClassType__mclass]))(var_target); /* mclass on <var_target:MType(MClassType)>*/
}
{
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var34); /* vtable on <var34:MClass>*/
}
if (var35 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 266);
fatal_exit(1);
} else {
var36 = ((long(*)(val* self))(var35->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var35); /* id on <var35:nullable VTable>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AIsaExpr__id_61d]))(self, var36); /* id= on <self:AIsaExpr>*/
}
RET_LABEL:;
}
/* method vm_optimizations#AAsCastExpr#id for (self: AAsCastExpr): Int */
long nit__vm_optimizations___AAsCastExpr___id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__AAsCastExpr___id].l; /* _id on <self:AAsCastExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AAsCastExpr#id= for (self: AAsCastExpr, Int) */
void nit__vm_optimizations___AAsCastExpr___id_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__AAsCastExpr___id].l = p0; /* _id on <self:AAsCastExpr> */
RET_LABEL:;
}
/* method vm_optimizations#AAsCastExpr#position for (self: AAsCastExpr): Int */
long nit__vm_optimizations___AAsCastExpr___position(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__AAsCastExpr___position].l; /* _position on <self:AAsCastExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AAsCastExpr#position= for (self: AAsCastExpr, Int) */
void nit__vm_optimizations___AAsCastExpr___position_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__AAsCastExpr___position].l = p0; /* _position on <self:AAsCastExpr> */
RET_LABEL:;
}
/* method vm_optimizations#AAsCastExpr#status for (self: AAsCastExpr): Int */
long nit__vm_optimizations___AAsCastExpr___status(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__vm_optimizations__AAsCastExpr___status].l; /* _status on <self:AAsCastExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AAsCastExpr#status= for (self: AAsCastExpr, Int) */
void nit__vm_optimizations___AAsCastExpr___status_61d(val* self, long p0) {
self->attrs[COLOR_nit__vm_optimizations__AAsCastExpr___status].l = p0; /* _status on <self:AAsCastExpr> */
RET_LABEL:;
}
/* method vm_optimizations#AAsCastExpr#expr for (self: AAsCastExpr, NaiveInterpreter): nullable Instance */
val* nit__vm_optimizations___AAsCastExpr___nit__naive_interpreter__AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable Instance */;
val* var4 /* : AExpr */;
val* var5 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MType */;
val* var13 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var15 /* : MType */;
val* var_amtype /* var amtype: MType */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
val* var21 /* : MType */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
long var25 /* : Int */;
long var26 /* : Int */;
val* var27 /* : MType */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name;
val* var31 /* : MClass */;
val* var32 /* : nullable VTable */;
val* var33 /* : Pointer */;
short int var34 /* : Bool */;
short int var_res /* var res: Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var_40 /* var : Bool */;
val* var41 /* : MType */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
long var45 /* : Int */;
val* var46 /* : nullable VTable */;
long var47 /* : Int */;
val* var48 /* : MType */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
val* var53 /* : MClass */;
val* var54 /* : nullable VTable */;
val* var55 /* : Pointer */;
short int var56 /* : Bool */;
val* var57 /* : MType */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : NativeArray[String] */;
static val* varonce;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
val* var73 /* : String */;
val* var74 /* : MType */;
val* var75 /* : String */;
val* var76 /* : String */;
var_v = p0;
/* <var_v:NaiveInterpreter> isa VirtualMachine */
cltype = type_nit__VirtualMachine.color;
idtype = type_nit__VirtualMachine.id;
if(cltype >= var_v->type->table_size) {
var1 = 0;
} else {
var1 = var_v->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__vm_optimizations___AAsCastExpr___nit__naive_interpreter__AExpr__expr]))(self, p0); /* expr on <self:AAsCastExpr>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_expr]))(self); /* n_expr on <self:AAsCastExpr>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var4); /* expr on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_recv = var5;
if (var_recv == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var6 = var7;
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__status]))(self); /* status on <self:AAsCastExpr>*/
}
{
{ /* Inline kernel#Int#== (var8,0l) on <var8:Int> */
var11 = var8 == 0l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:AAsCastExpr>*/
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 292);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__optimize]))(self, var_v, var12, var13); /* optimize on <self:AAsCastExpr>*/
}
} else {
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:AAsCastExpr>*/
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 294);
fatal_exit(1);
}
var_mtype = var14;
{
var15 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__unanchor_type]))(var_v, var_mtype); /* unanchor_type on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_amtype = var15;
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__status]))(self); /* status on <self:AAsCastExpr>*/
}
{
{ /* Inline kernel#Int#== (var17,1l) on <var17:Int> */
var20 = var17 == 1l;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_ = var18;
if (var18){
{
var21 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var21:MType> isa MClassType */
cltype23 = type_nit__MClassType.color;
idtype24 = type_nit__MClassType.id;
if(cltype23 >= var21->type->table_size) {
var22 = 0;
} else {
var22 = var21->type->type_table[cltype23] == idtype24;
}
var16 = var22;
} else {
var16 = var_;
}
if (var16){
{
var25 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__id]))(self); /* id on <self:AAsCastExpr>*/
}
{
var26 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__position]))(self); /* position on <self:AAsCastExpr>*/
}
{
var27 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var27:MType> isa MClassType */
cltype29 = type_nit__MClassType.color;
idtype30 = type_nit__MClassType.id;
if(cltype29 >= var27->type->table_size) {
var28 = 0;
} else {
var28 = var27->type->type_table[cltype29] == idtype30;
}
if (unlikely(!var28)) {
var_class_name = var27 == NULL ? "null" : var27->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 300);
fatal_exit(1);
}
{
var31 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__model__MClassType__mclass]))(var27); /* mclass on <var27:MType(MClassType)>*/
}
{
var32 = ((val*(*)(val* self))(var31->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var31); /* vtable on <var31:MClass>*/
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 300);
fatal_exit(1);
} else {
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var32); /* internal_vtable on <var32:nullable VTable>*/
}
{
var34 = ((short int(*)(val* self, long p0, long p1, val* p2))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__inter_is_subtype_sst]))(var_v, var25, var26, var33); /* inter_is_subtype_sst on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_res = var34;
} else {
{
var36 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__status]))(self); /* status on <self:AAsCastExpr>*/
}
{
{ /* Inline kernel#Int#== (var36,2l) on <var36:Int> */
var39 = var36 == 2l;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_40 = var37;
if (var37){
{
var41 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var41:MType> isa MClassType */
cltype43 = type_nit__MClassType.color;
idtype44 = type_nit__MClassType.id;
if(cltype43 >= var41->type->table_size) {
var42 = 0;
} else {
var42 = var41->type->type_table[cltype43] == idtype44;
}
var35 = var42;
} else {
var35 = var_40;
}
if (var35){
{
var45 = ((long(*)(val* self))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__id]))(self); /* id on <self:AAsCastExpr>*/
}
{
var46 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:nullable Instance(Instance)>*/
}
if (var46 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 303);
fatal_exit(1);
} else {
var47 = ((long(*)(val* self))(var46->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var46); /* mask on <var46:nullable VTable>*/
}
{
var48 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var48:MType> isa MClassType */
cltype50 = type_nit__MClassType.color;
idtype51 = type_nit__MClassType.id;
if(cltype50 >= var48->type->table_size) {
var49 = 0;
} else {
var49 = var48->type->type_table[cltype50] == idtype51;
}
if (unlikely(!var49)) {
var_class_name52 = var48 == NULL ? "null" : var48->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 303);
fatal_exit(1);
}
{
var53 = ((val*(*)(val* self))(var48->class->vft[COLOR_nit__model__MClassType__mclass]))(var48); /* mclass on <var48:MType(MClassType)>*/
}
{
var54 = ((val*(*)(val* self))(var53->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var53); /* vtable on <var53:MClass>*/
}
if (var54 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 303);
fatal_exit(1);
} else {
var55 = ((val*(*)(val* self))(var54->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var54); /* internal_vtable on <var54:nullable VTable>*/
}
{
var56 = ((short int(*)(val* self, long p0, long p1, val* p2))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__inter_is_subtype_ph]))(var_v, var45, var47, var55); /* inter_is_subtype_ph on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_res = var56;
} else {
{
var57 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
{
var58 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_subtype]))(var_v, var57, var_amtype); /* is_subtype on <var_v:NaiveInterpreter(VirtualMachine)>*/
}
var_res = var58;
}
}
var59 = !var_res;
if (var59){
if (unlikely(varonce==NULL)) {
var60 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "Cast failed. Expected `";
var64 = standard___standard__NativeString___to_s_with_length(var63, 23l);
var62 = var64;
varonce61 = var62;
}
((struct instance_standard__NativeArray*)var60)->values[0]=var62;
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "`, got `";
var68 = standard___standard__NativeString___to_s_with_length(var67, 8l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var60)->values[2]=var66;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "`";
var72 = standard___standard__NativeString___to_s_with_length(var71, 1l);
var70 = var72;
varonce69 = var70;
}
((struct instance_standard__NativeArray*)var60)->values[4]=var70;
} else {
var60 = varonce;
varonce = NULL;
}
{
var73 = ((val*(*)(val* self))(var_amtype->class->vft[COLOR_standard__string__Object__to_s]))(var_amtype); /* to_s on <var_amtype:MType>*/
}
((struct instance_standard__NativeArray*)var60)->values[1]=var73;
{
var74 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
{
var75 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__Object__to_s]))(var74); /* to_s on <var74:MType>*/
}
((struct instance_standard__NativeArray*)var60)->values[3]=var75;
{
var76 = ((val*(*)(val* self))(var60->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var60); /* native_to_s on <var60:NativeArray[String]>*/
}
varonce = var60;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var76); /* fatal on <self:AAsCastExpr>*/
}
} else {
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method vm_optimizations#AAsCastExpr#optimize for (self: AAsCastExpr, VirtualMachine, MType, MType) */
void nit__vm_optimizations___AAsCastExpr___optimize(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: VirtualMachine */;
val* var_source /* var source: MType */;
val* var_target /* var target: MType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
short int var_8 /* var : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : MClass */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MClass */;
val* var16 /* : HashMap[MClass, Int] */;
val* var17 /* : MClass */;
val* var18 /* : nullable Object */;
val* var_value /* var value: nullable Int */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
long var30 /* : Int */;
short int var31 /* : Bool */;
val* var32 /* : MClass */;
long var33 /* : Int */;
val* var34 /* : MClass */;
val* var35 /* : nullable VTable */;
long var36 /* : Int */;
var_v = p0;
var_source = p1;
var_target = p2;
/* <var_source:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_source->type->table_size) {
var2 = 0;
} else {
var2 = var_source->type->type_table[cltype] == idtype;
}
var3 = !var2;
var_ = var3;
if (var3){
var1 = var_;
} else {
/* <var_target:MType> isa MClassType */
cltype5 = type_nit__MClassType.color;
idtype6 = type_nit__MClassType.id;
if(cltype5 >= var_target->type->table_size) {
var4 = 0;
} else {
var4 = var_target->type->type_table[cltype5] == idtype6;
}
var7 = !var4;
var1 = var7;
}
var_8 = var1;
if (var1){
var = var_8;
} else {
/* <var_target:MType(MClassType)> isa MGenericType */
cltype10 = type_nit__MGenericType.color;
idtype11 = type_nit__MGenericType.id;
if(cltype10 >= var_target->type->table_size) {
var9 = 0;
} else {
var9 = var_target->type->type_table[cltype10] == idtype11;
}
var = var9;
}
if (var){
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self))(var_target->class->vft[COLOR_nit__model__MClassType__mclass]))(var_target); /* mclass on <var_target:MType(MClassType)>*/
}
{
var13 = ((short int(*)(val* self))(var12->class->vft[COLOR_nit__virtual_machine__MClass__loaded]))(var12); /* loaded on <var12:MClass>*/
}
var14 = !var13;
if (var14){
goto RET_LABEL;
} else {
}
{
var15 = ((val*(*)(val* self))(var_source->class->vft[COLOR_nit__model__MClassType__mclass]))(var_source); /* mclass on <var_source:MType(MClassType)>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__virtual_machine__MClass__positions_methods]))(var15); /* positions_methods on <var15:MClass>*/
}
{
var17 = ((val*(*)(val* self))(var_target->class->vft[COLOR_nit__model__MClassType__mclass]))(var_target); /* mclass on <var_target:MType(MClassType)>*/
}
{
var18 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var16, var17); /* get_or_null on <var16:HashMap[MClass, Int]>*/
}
var_value = var18;
if (var_value == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Int#!= (var_value,((val*)NULL)) on <var_value:nullable Int> */
var22 = 0; /* incompatible types Int vs. null; cannot be NULL */
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var26 = -1l;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_value,var24) on <var_value:nullable Int(Int)> */
var30 = (long)(var_value)>>2;
var29 = (var_value != NULL) && (var30 == var24);
var31 = !var29;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
var32 = ((val*(*)(val* self))(var_target->class->vft[COLOR_nit__model__MClassType__mclass]))(var_target); /* mclass on <var_target:MType(MClassType)>*/
}
{
var33 = ((long(*)(val* self))(var32->class->vft[COLOR_nit__virtual_machine__MClass__color]))(var32); /* color on <var32:MClass>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__position_61d]))(self, var33); /* position= on <self:AAsCastExpr>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__status_61d]))(self, 1l); /* status= on <self:AAsCastExpr>*/
}
} else {
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__status_61d]))(self, 2l); /* status= on <self:AAsCastExpr>*/
}
}
} else {
}
{
var34 = ((val*(*)(val* self))(var_target->class->vft[COLOR_nit__model__MClassType__mclass]))(var_target); /* mclass on <var_target:MType(MClassType)>*/
}
{
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var34); /* vtable on <var34:MClass>*/
}
if (var35 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__vm_optimizations, 340);
fatal_exit(1);
} else {
var36 = ((long(*)(val* self))(var35->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var35); /* id on <var35:nullable VTable>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__vm_optimizations__AAsCastExpr__id_61d]))(self, var36); /* id= on <self:AAsCastExpr>*/
}
RET_LABEL:;
}
