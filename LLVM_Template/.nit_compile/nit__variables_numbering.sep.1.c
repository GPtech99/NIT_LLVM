#include "nit__variables_numbering.sep.0.h"
/* method variables_numbering#VirtualMachine#numbering for (self: VirtualMachine, nullable AExpr, Int): Int */
long nit__variables_numbering___VirtualMachine___numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_n /* var n: nullable AExpr */;
long var_position /* var position: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var_pos /* var pos: Int */;
var_n = p0;
var_position = p1;
if (var_n == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, ((val*)NULL)); /* == on <var_n:nullable AExpr>*/
var1 = var2;
}
if (var1){
var = var_position;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var_n->class->vft[COLOR_nit__variables_numbering__AExpr__numbering]))(var_n, self, var_position); /* numbering on <var_n:nullable AExpr(AExpr)>*/
}
var_pos = var3;
var = var_pos;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#VirtualMachine#new_frame for (self: VirtualMachine, ANode, MPropDef, Array[Instance]): VmFrame */
val* nit__variables_numbering___VirtualMachine___nit__naive_interpreter__NaiveInterpreter__new_frame(val* self, val* p0, val* p1, val* p2) {
val* var /* : VmFrame */;
val* var_node /* var node: ANode */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_args /* var args: Array[Instance] */;
val* var1 /* : VmFrame */;
val* var_f /* var f: VmFrame */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name;
val* var8 /* : Array[Instance] */;
val* var9 /* : Instance */;
long var10 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Array[Instance] */;
val* var17 /* : Instance */;
long var18 /* : Int */;
val* var19 /* : Array[Instance] */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const struct type* type_struct;
const char* var_class_name24;
var_node = p0;
var_mpropdef = p1;
var_args = p2;
var1 = NEW_nit__VmFrame(&type_nit__VmFrame);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__naive_interpreter__Frame__current_node_61d]))(var1, var_node); /* current_node= on <var1:VmFrame>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__naive_interpreter__Frame__mpropdef_61d]))(var1, var_mpropdef); /* mpropdef= on <var1:VmFrame>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__naive_interpreter__Frame__arguments_61d]))(var1, var_args); /* arguments= on <var1:VmFrame>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:VmFrame>*/
}
var_f = var1;
/* <var_node:ANode> isa AMethPropdef */
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
if(cltype >= var_node->type->table_size) {
var2 = 0;
} else {
var2 = var_node->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((short int(*)(val* self))(var_node->class->vft[COLOR_nit__variables_numbering__APropdef__is_numbering]))(var_node); /* is_numbering on <var_node:ANode(AMethPropdef)>*/
}
var4 = !var3;
if (var4){
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype6 = type_nit__MMethodDef.color;
idtype7 = type_nit__MMethodDef.id;
if(cltype6 >= var_mpropdef->type->table_size) {
var5 = 0;
} else {
var5 = var_mpropdef->type->type_table[cltype6] == idtype7;
}
if (unlikely(!var5)) {
var_class_name = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 45);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_node->class->vft[COLOR_nit__variables_numbering__AMethPropdef__numbering_variables]))(var_node, self, var_mpropdef); /* numbering_variables on <var_node:ANode(AMethPropdef)>*/
}
} else {
}
var8 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__initialization_value]))(self); /* initialization_value on <self:VirtualMachine>*/
}
{
var10 = ((long(*)(val* self))(var_node->class->vft[COLOR_nit__variables_numbering__APropdef__environment_size]))(var_node); /* environment_size on <var_node:ANode(AMethPropdef)>*/
}
{
((void(*)(val* self, val* p0, long p1))(var8->class->vft[COLOR_standard__array__Array__filled_with]))(var8, var9, var10); /* filled_with on <var8:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_nit__variables_numbering__VmFrame__variables_61d]))(var_f, var8); /* variables= on <var_f:VmFrame>*/
}
} else {
}
/* <var_node:ANode> isa AAttrPropdef */
cltype12 = type_nit__AAttrPropdef.color;
idtype13 = type_nit__AAttrPropdef.id;
if(cltype12 >= var_node->type->table_size) {
var11 = 0;
} else {
var11 = var_node->type->type_table[cltype12] == idtype13;
}
if (var11){
{
var14 = ((short int(*)(val* self))(var_node->class->vft[COLOR_nit__variables_numbering__APropdef__is_numbering]))(var_node); /* is_numbering on <var_node:ANode(AAttrPropdef)>*/
}
var15 = !var14;
if (var15){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__variables_numbering__AAttrPropdef__numbering_variables]))(var_node, self); /* numbering_variables on <var_node:ANode(AAttrPropdef)>*/
}
} else {
}
var16 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__initialization_value]))(self); /* initialization_value on <self:VirtualMachine>*/
}
{
var18 = ((long(*)(val* self))(var_node->class->vft[COLOR_nit__variables_numbering__APropdef__environment_size]))(var_node); /* environment_size on <var_node:ANode(AAttrPropdef)>*/
}
{
((void(*)(val* self, val* p0, long p1))(var16->class->vft[COLOR_standard__array__Array__filled_with]))(var16, var17, var18); /* filled_with on <var16:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_nit__variables_numbering__VmFrame__variables_61d]))(var_f, var16); /* variables= on <var_f:VmFrame>*/
}
} else {
}
{
var19 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__variables_numbering__VmFrame__variables]))(var_f); /* variables on <var_f:VmFrame>*/
}
{
var20 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var19->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var19, 0l, var20); /* []= on <var19:Array[Instance]>*/
}
/* <var_f:VmFrame> isa FRAME */
type_struct = self->type->resolution_table->types[COLOR_nit__naive_interpreter__NaiveInterpreter__FRAME];
cltype22 = type_struct->color;
idtype23 = type_struct->id;
if(cltype22 >= var_f->type->table_size) {
var21 = 0;
} else {
var21 = var_f->type->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
var_class_name24 = var_f == NULL ? "null" : var_f->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FRAME", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 62);
fatal_exit(1);
}
var = var_f;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#VirtualMachine#read_variable for (self: VirtualMachine, Variable): Instance */
val* nit__variables_numbering___VirtualMachine___nit__naive_interpreter__NaiveInterpreter__read_variable(val* self, val* p0) {
val* var /* : Instance */;
val* var_v /* var v: Variable */;
val* var1 /* : Frame */;
val* var2 /* : Array[Instance] */;
long var3 /* : Int */;
val* var4 /* : nullable Object */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(self); /* frame on <self:VirtualMachine>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__variables_numbering__VmFrame__variables]))(var1); /* variables on <var1:Frame(VmFrame)>*/
}
{
var3 = ((long(*)(val* self))(var_v->class->vft[COLOR_nit__variables_numbering__Variable__position]))(var_v); /* position on <var_v:Variable>*/
}
{
var4 = ((val*(*)(val* self, long p0))(var2->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var2, var3); /* [] on <var2:Array[Instance]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#VirtualMachine#write_variable for (self: VirtualMachine, Variable, Instance) */
void nit__variables_numbering___VirtualMachine___nit__naive_interpreter__NaiveInterpreter__write_variable(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_value /* var value: Instance */;
val* var /* : Frame */;
val* var1 /* : Array[Instance] */;
long var2 /* : Int */;
var_v = p0;
var_value = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(self); /* frame on <self:VirtualMachine>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__variables_numbering__VmFrame__variables]))(var); /* variables on <var:Frame(VmFrame)>*/
}
{
var2 = ((long(*)(val* self))(var_v->class->vft[COLOR_nit__variables_numbering__Variable__position]))(var_v); /* position on <var_v:Variable>*/
}
{
((void(*)(val* self, long p0, val* p1))(var1->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var1, var2, var_value); /* []= on <var1:Array[Instance]>*/
}
RET_LABEL:;
}
/* method variables_numbering#Variable#position for (self: Variable): Int */
long nit__variables_numbering___Variable___position(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__variables_numbering__Variable___position].l; /* _position on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method variables_numbering#Variable#position= for (self: Variable, Int) */
void nit__variables_numbering___Variable___position_61d(val* self, long p0) {
self->attrs[COLOR_nit__variables_numbering__Variable___position].l = p0; /* _position on <self:Variable> */
RET_LABEL:;
}
/* method variables_numbering#VmFrame#variables for (self: VmFrame): Array[Instance] */
val* nit___nit__VmFrame___variables(val* self) {
val* var /* : Array[Instance] */;
val* var1 /* : Array[Instance] */;
var1 = self->attrs[COLOR_nit__variables_numbering__VmFrame___variables].val; /* _variables on <self:VmFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 87);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method variables_numbering#VmFrame#variables= for (self: VmFrame, Array[Instance]) */
void nit___nit__VmFrame___variables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__variables_numbering__VmFrame___variables].val = p0; /* _variables on <self:VmFrame> */
RET_LABEL:;
}
/* method variables_numbering#AExpr#numbering for (self: AExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___AExpr___numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
var_v = p0;
var_position = p1;
var = var_position;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#APropdef#is_numbering for (self: APropdef): Bool */
short int nit__variables_numbering___APropdef___is_numbering(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__variables_numbering__APropdef___is_numbering].s; /* _is_numbering on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method variables_numbering#APropdef#is_numbering= for (self: APropdef, Bool) */
void nit__variables_numbering___APropdef___is_numbering_61d(val* self, short int p0) {
self->attrs[COLOR_nit__variables_numbering__APropdef___is_numbering].s = p0; /* _is_numbering on <self:APropdef> */
RET_LABEL:;
}
/* method variables_numbering#APropdef#environment_size for (self: APropdef): Int */
long nit__variables_numbering___APropdef___environment_size(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__variables_numbering__APropdef___environment_size].l; /* _environment_size on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method variables_numbering#APropdef#environment_size= for (self: APropdef, Int) */
void nit__variables_numbering___APropdef___environment_size_61d(val* self, long p0) {
self->attrs[COLOR_nit__variables_numbering__APropdef___environment_size].l = p0; /* _environment_size on <self:APropdef> */
RET_LABEL:;
}
/* method variables_numbering#AMethPropdef#numbering_variables for (self: AMethPropdef, VirtualMachine, MMethodDef) */
void nit__variables_numbering___AMethPropdef___numbering_variables(val* self, val* p0, val* p1) {
val* var_v /* var v: VirtualMachine */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
long var_position /* var position: Int */;
val* var /* : nullable Variable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Variable */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_i /* var i: Int */;
val* var8 /* : nullable MSignature */;
long var9 /* : Int */;
long var_ /* var : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
val* var17 /* : nullable ASignature */;
val* var18 /* : ANodes[AParam] */;
val* var19 /* : nullable Object */;
val* var20 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var28 /* : Int */;
val* var29 /* : nullable AExpr */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : nullable AExpr */;
long var33 /* : Int */;
var_v = p0;
var_mpropdef = p1;
var_position = 0l;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__APropdef__selfvariable]))(self); /* selfvariable on <self:AMethPropdef>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable Variable>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__APropdef__selfvariable]))(self); /* selfvariable on <self:AMethPropdef>*/
}
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 123);
fatal_exit(1);
} else {
((void(*)(val* self, long p0))(var3->class->vft[COLOR_nit__variables_numbering__Variable__position_61d]))(var3, var_position); /* position= on <var3:nullable Variable>*/
}
{
{ /* Inline kernel#Int#+ (var_position,1l) on <var_position:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var7 = var_position + 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_position = var4;
} else {
}
var_i = 0l;
{
var8 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:MMethodDef>*/
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 128);
fatal_exit(1);
} else {
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_nit__model__MSignature__arity]))(var8); /* arity on <var8:nullable MSignature>*/
}
var_ = var9;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var12 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var16 = var_i < var_;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 129);
fatal_exit(1);
} else {
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var17); /* n_params on <var17:nullable ASignature>*/
}
{
var19 = ((val*(*)(val* self, long p0))(var18->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var18, var_i); /* [] on <var18:ANodes[AParam]>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__scope__AParam__variable]))(var19); /* variable on <var19:nullable Object(AParam)>*/
}
var_variable = var20;
if (unlikely(var_variable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 130);
fatal_exit(1);
}
{
((void(*)(val* self, long p0))(var_variable->class->vft[COLOR_nit__variables_numbering__Variable__position_61d]))(var_variable, var_position); /* position= on <var_variable:nullable Variable(Variable)>*/
}
{
{ /* Inline kernel#Int#+ (var_position,1l) on <var_position:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var27 = var_position + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_position = var21;
var28 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var28;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(self); /* n_block on <self:AMethPropdef>*/
}
if (var29 == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
var31 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var29, ((val*)NULL)); /* != on <var29:nullable AExpr>*/
var30 = var31;
}
if (var30){
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(self); /* n_block on <self:AMethPropdef>*/
}
{
var33 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var32, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var_position = var33;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__variables_numbering__APropdef__is_numbering_61d]))(self, 1); /* is_numbering= on <self:AMethPropdef>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__variables_numbering__APropdef__environment_size_61d]))(self, var_position); /* environment_size= on <self:AMethPropdef>*/
}
RET_LABEL:;
}
/* method variables_numbering#AAttrPropdef#numbering_variables for (self: AAttrPropdef, VirtualMachine) */
void nit__variables_numbering___AAttrPropdef___numbering_variables(val* self, val* p0) {
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var /* : nullable Variable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Variable */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable AExpr */;
long var12 /* : Int */;
var_v = p0;
var_position = 0l;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__APropdef__selfvariable]))(self); /* selfvariable on <self:AAttrPropdef>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable Variable>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__APropdef__selfvariable]))(self); /* selfvariable on <self:AAttrPropdef>*/
}
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 156);
fatal_exit(1);
} else {
((void(*)(val* self, long p0))(var3->class->vft[COLOR_nit__variables_numbering__Variable__position_61d]))(var3, var_position); /* position= on <var3:nullable Variable>*/
}
{
{ /* Inline kernel#Int#+ (var_position,1l) on <var_position:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var7 = var_position + 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_position = var4;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_block]))(self); /* n_block on <self:AAttrPropdef>*/
}
if (var8 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var8, ((val*)NULL)); /* != on <var8:nullable AExpr>*/
var9 = var10;
}
if (var9){
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_block]))(self); /* n_block on <self:AAttrPropdef>*/
}
{
var12 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var11, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var_position = var12;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__variables_numbering__APropdef__is_numbering_61d]))(self, 1); /* is_numbering= on <self:AAttrPropdef>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__variables_numbering__APropdef__environment_size_61d]))(self, var_position); /* environment_size= on <self:AAttrPropdef>*/
}
RET_LABEL:;
}
/* method variables_numbering#AVardeclExpr#numbering for (self: AVardeclExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___AVardeclExpr___AExpr__numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var1 /* : nullable Variable */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
val* var6 /* : nullable AExpr */;
long var7 /* : Int */;
var_v = p0;
var_position = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVardeclExpr__variable]))(self); /* variable on <self:AVardeclExpr>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 176);
fatal_exit(1);
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_nit__variables_numbering__Variable__position_61d]))(var1, var_position); /* position= on <var1:nullable Variable(Variable)>*/
}
{
{ /* Inline kernel#Int#+ (var_position,1l) on <var_position:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var5 = var_position + 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_position = var2;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_expr]))(self); /* n_expr on <self:AVardeclExpr>*/
}
{
var7 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var6, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var_position = var7;
var = var_position;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#ABlockExpr#numbering for (self: ABlockExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___ABlockExpr___AExpr__numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var1 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[AExpr] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: AExpr */;
long var6 /* : Int */;
var_v = p0;
var_position = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AExpr]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[AExpr]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[AExpr]>*/
}
var_e = var5;
{
var6 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var_e, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var_position = var6;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[AExpr]>*/
}
var = var_position;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#AIfExpr#numbering for (self: AIfExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___AIfExpr___AExpr__numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var1 /* : nullable AExpr */;
long var2 /* : Int */;
long var_pos /* var pos: Int */;
val* var3 /* : nullable AExpr */;
long var4 /* : Int */;
long var_pos1 /* var pos1: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
var_v = p0;
var_position = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then]))(self); /* n_then on <self:AIfExpr>*/
}
{
var2 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var1, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var_pos = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_else]))(self); /* n_else on <self:AIfExpr>*/
}
{
var4 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var3, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var_pos1 = var4;
{
{ /* Inline kernel#Int#> (var_pos,var_pos1) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_pos1:Int> isa OTHER */
/* <var_pos1:Int> isa OTHER */
var7 = 1; /* easy <var_pos1:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var8 = var_pos > var_pos1;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = var_pos;
goto RET_LABEL;
} else {
var = var_pos1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method variables_numbering#AIfexprExpr#numbering for (self: AIfexprExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___AIfexprExpr___AExpr__numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var1 /* : AExpr */;
long var2 /* : Int */;
long var_pos /* var pos: Int */;
val* var3 /* : AExpr */;
long var4 /* : Int */;
long var_pos1 /* var pos1: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
var_v = p0;
var_position = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_then]))(self); /* n_then on <self:AIfexprExpr>*/
}
{
var2 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var1, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var_pos = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_else]))(self); /* n_else on <self:AIfexprExpr>*/
}
{
var4 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var3, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var_pos1 = var4;
{
{ /* Inline kernel#Int#> (var_pos,var_pos1) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_pos1:Int> isa OTHER */
/* <var_pos1:Int> isa OTHER */
var7 = 1; /* easy <var_pos1:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var8 = var_pos > var_pos1;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = var_pos;
goto RET_LABEL;
} else {
var = var_pos1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method variables_numbering#ADoExpr#numbering for (self: ADoExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___ADoExpr___AExpr__numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var1 /* : nullable AExpr */;
long var2 /* : Int */;
var_v = p0;
var_position = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block]))(self); /* n_block on <self:ADoExpr>*/
}
{
var2 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var1, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#AWhileExpr#numbering for (self: AWhileExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___AWhileExpr___AExpr__numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var1 /* : nullable AExpr */;
long var2 /* : Int */;
var_v = p0;
var_position = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_block]))(self); /* n_block on <self:AWhileExpr>*/
}
{
var2 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var1, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#ALoopExpr#numbering for (self: ALoopExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___ALoopExpr___AExpr__numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var1 /* : nullable AExpr */;
long var2 /* : Int */;
var_v = p0;
var_position = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_block]))(self); /* n_block on <self:ALoopExpr>*/
}
{
var2 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var1, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#AForExpr#numbering for (self: AForExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___AForExpr___AExpr__numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var1 /* : nullable Array[Variable] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Array[Variable] */;
val* var7 /* : nullable Object */;
val* var8 /* : nullable Array[Variable] */;
val* var9 /* : nullable Object */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
val* var14 /* : nullable Array[Variable] */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable Array[Variable] */;
val* var20 /* : nullable Object */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var28 /* : nullable Array[Variable] */;
val* var29 /* : nullable Object */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
val* var37 /* : nullable AExpr */;
long var38 /* : Int */;
var_v = p0;
var_position = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 252);
fatal_exit(1);
} else {
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var1); /* length on <var1:nullable Array[Variable]>*/
}
{
{ /* Inline kernel#Int#== (var2,1l) on <var2:Int> */
var5 = var2 == 1l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 253);
fatal_exit(1);
} else {
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var6); /* first on <var6:nullable Array[Variable]>*/
}
{
((void(*)(val* self, long p0))(var7->class->vft[COLOR_nit__variables_numbering__Variable__position_61d]))(var7, var_position); /* position= on <var7:nullable Object(Variable)>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 254);
fatal_exit(1);
} else {
var9 = ((val*(*)(val* self, long p0))(var8->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var8, 0l); /* [] on <var8:nullable Array[Variable]>*/
}
{
((void(*)(val* self, long p0))(var9->class->vft[COLOR_nit__variables_numbering__Variable__position_61d]))(var9, var_position); /* position= on <var9:nullable Object(Variable)>*/
}
{
{ /* Inline kernel#Int#+ (var_position,1l) on <var_position:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var13 = var_position + 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_position = var10;
} else {
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 256);
fatal_exit(1);
} else {
var15 = ((long(*)(val* self))(var14->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var14); /* length on <var14:nullable Array[Variable]>*/
}
{
{ /* Inline kernel#Int#== (var15,2l) on <var15:Int> */
var18 = var15 == 2l;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 257);
fatal_exit(1);
} else {
var20 = ((val*(*)(val* self, long p0))(var19->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var19, 0l); /* [] on <var19:nullable Array[Variable]>*/
}
{
((void(*)(val* self, long p0))(var20->class->vft[COLOR_nit__variables_numbering__Variable__position_61d]))(var20, var_position); /* position= on <var20:nullable Object(Variable)>*/
}
{
{ /* Inline kernel#Int#+ (var_position,1l) on <var_position:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var27 = var_position + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_position = var21;
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__variables_numbering, 259);
fatal_exit(1);
} else {
var29 = ((val*(*)(val* self, long p0))(var28->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var28, 1l); /* [] on <var28:nullable Array[Variable]>*/
}
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nit__variables_numbering__Variable__position_61d]))(var29, var_position); /* position= on <var29:nullable Object(Variable)>*/
}
{
{ /* Inline kernel#Int#+ (var_position,1l) on <var_position:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var36 = var_position + 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_position = var30;
} else {
}
}
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_block]))(self); /* n_block on <self:AForExpr>*/
}
{
var38 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var37, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method variables_numbering#AArrayExpr#numbering for (self: AArrayExpr, VirtualMachine, Int): Int */
long nit__variables_numbering___AArrayExpr___AExpr__numbering(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_v /* var v: VirtualMachine */;
long var_position /* var position: Int */;
val* var1 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[AExpr] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
long var6 /* : Int */;
var_v = p0;
var_position = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_exprs]))(self); /* n_exprs on <self:AArrayExpr>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AExpr]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[AExpr]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[AExpr]>*/
}
var_nexpr = var5;
{
var6 = ((long(*)(val* self, val* p0, long p1))(var_v->class->vft[COLOR_nit__variables_numbering__VirtualMachine__numbering]))(var_v, var_nexpr, var_position); /* numbering on <var_v:VirtualMachine>*/
}
var_position = var6;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[AExpr]>*/
}
var = var_position;
goto RET_LABEL;
RET_LABEL:;
return var;
}
