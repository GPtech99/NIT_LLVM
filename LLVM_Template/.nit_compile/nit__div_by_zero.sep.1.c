#include "nit__div_by_zero.sep.0.h"
/* method div_by_zero#ToolContext#div_by_zero_phase for (self: ToolContext): Phase */
val* nit__div_by_zero___ToolContext___div_by_zero_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__div_by_zero__ToolContext___div_by_zero_phase].val; /* _div_by_zero_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _div_by_zero_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__div_by_zero, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#ToolContext#div_by_zero_phase= for (self: ToolContext, Phase) */
void nit__div_by_zero___ToolContext___div_by_zero_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__div_by_zero__ToolContext___div_by_zero_phase].val = p0; /* _div_by_zero_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method div_by_zero#DivByZeroPhase#process_nmodule for (self: DivByZeroPhase, AModule) */
void nit__div_by_zero___nit__div_by_zero__DivByZeroPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : DivByZeroVisitor */;
val* var4 /* : ToolContext */;
val* var_visitor /* var visitor: DivByZeroVisitor */;
var_nmodule = p0;
{
var = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:AModule>*/
}
var_mmodule = var;
if (var_mmodule == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = NEW_nit__div_by_zero__DivByZeroVisitor(&type_nit__div_by_zero__DivByZeroVisitor);
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:DivByZeroPhase>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__div_by_zero__DivByZeroVisitor__toolcontext_61d]))(var3, var4); /* toolcontext= on <var3:DivByZeroVisitor>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__div_by_zero__DivByZeroVisitor__mmodule_61d]))(var3, var_mmodule); /* mmodule= on <var3:DivByZeroVisitor>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:DivByZeroVisitor>*/
}
var_visitor = var3;
{
((void(*)(val* self, val* p0))(var_visitor->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_visitor, var_nmodule); /* enter_visit on <var_visitor:DivByZeroVisitor>*/
}
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#toolcontext for (self: DivByZeroVisitor): ToolContext */
val* nit__div_by_zero___nit__div_by_zero__DivByZeroVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__div_by_zero__DivByZeroVisitor___toolcontext].val; /* _toolcontext on <self:DivByZeroVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__div_by_zero, 53);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#DivByZeroVisitor#toolcontext= for (self: DivByZeroVisitor, ToolContext) */
void nit__div_by_zero___nit__div_by_zero__DivByZeroVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__div_by_zero__DivByZeroVisitor___toolcontext].val = p0; /* _toolcontext on <self:DivByZeroVisitor> */
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#mmodule for (self: DivByZeroVisitor): MModule */
val* nit__div_by_zero___nit__div_by_zero__DivByZeroVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__div_by_zero__DivByZeroVisitor___mmodule].val; /* _mmodule on <self:DivByZeroVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__div_by_zero, 56);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#DivByZeroVisitor#mmodule= for (self: DivByZeroVisitor, MModule) */
void nit__div_by_zero___nit__div_by_zero__DivByZeroVisitor___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__div_by_zero__DivByZeroVisitor___mmodule].val = p0; /* _mmodule on <self:DivByZeroVisitor> */
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#visit for (self: DivByZeroVisitor, ANode) */
void nit__div_by_zero___nit__div_by_zero__DivByZeroVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : AExpr */;
val* var_op2 /* var op2: AExpr */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
val* var7 /* : nullable Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var13 /* : Bool */;
val* var14 /* : AExpr */;
val* var_op1 /* var op1: AExpr */;
val* var15 /* : MModule */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : MClass */;
val* var20 /* : MClassType */;
val* var_int_type /* var int_type: MClassType */;
val* var21 /* : nullable MType */;
val* var22 /* : MModule */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : ToolContext */;
val* var26 /* : Location */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : nullable Message */;
var_node = p0;
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_node, self); /* visit_all on <var_node:ANode>*/
}
/* <var_node:ANode> isa ASlashExpr */
cltype = type_nit__ASlashExpr.color;
idtype = type_nit__ASlashExpr.id;
if(cltype >= var_node->type->table_size) {
var = 0;
} else {
var = var_node->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2]))(var_node); /* n_expr2 on <var_node:ANode(ASlashExpr)>*/
}
var_op2 = var2;
/* <var_op2:AExpr> isa AIntExpr */
cltype4 = type_nit__AIntExpr.color;
idtype5 = type_nit__AIntExpr.id;
if(cltype4 >= var_op2->type->table_size) {
var3 = 0;
} else {
var3 = var_op2->type->type_table[cltype4] == idtype5;
}
var6 = !var3;
if (var6){
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(var_op2->class->vft[COLOR_nit__literal__AIntExpr__value]))(var_op2); /* value on <var_op2:AExpr(AIntExpr)>*/
}
if (var7 == NULL) {
var8 = 1; /* <0l:Int> cannot be null */
} else {
{ /* Inline kernel#Int#!= (var7,0l) on <var7:nullable Int> */
var12 = (long)(var7)>>2;
var11 = (var7 != NULL) && (var12 == 0l);
var13 = !var11;
var9 = var13;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(var_node); /* n_expr on <var_node:ANode(ASlashExpr)>*/
}
var_op1 = var14;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__div_by_zero__DivByZeroVisitor__mmodule]))(self); /* mmodule on <self:DivByZeroVisitor>*/
}
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "Int";
var18 = standard___standard__NativeString___to_s_with_length(var17, 3l);
var16 = var18;
varonce = var16;
}
{
var19 = ((val*(*)(val* self, val* p0))(var15->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(var15, var16); /* get_primitive_class on <var15:MModule>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__model__MClass__mclass_type]))(var19); /* mclass_type on <var19:MClass>*/
}
var_int_type = var20;
{
var21 = ((val*(*)(val* self))(var_op1->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_op1); /* mtype on <var_op1:AExpr>*/
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__div_by_zero__DivByZeroVisitor__mmodule]))(self); /* mmodule on <self:DivByZeroVisitor>*/
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__div_by_zero, 80);
fatal_exit(1);
} else {
var23 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var21->class->vft[COLOR_nit__model__MType__is_subtype]))(var21, var22, ((val*)NULL), var_int_type); /* is_subtype on <var21:nullable MType>*/
}
var24 = !var23;
if (var24){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__div_by_zero__DivByZeroVisitor__toolcontext]))(self); /* toolcontext on <self:DivByZeroVisitor>*/
}
{
var26 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_node); /* location on <var_node:ANode(ASlashExpr)>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "div-by-zero";
var30 = standard___standard__NativeString___to_s_with_length(var29, 11l);
var28 = var30;
varonce27 = var28;
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "Warning: division by zero.";
var34 = standard___standard__NativeString___to_s_with_length(var33, 26l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var25->class->vft[COLOR_nit__toolcontext__ToolContext__warning]))(var25, var26, var28, var32); /* warning on <var25:ToolContext>*/
}
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#init for (self: DivByZeroVisitor) */
void nit__div_by_zero___nit__div_by_zero__DivByZeroVisitor___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__div_by_zero___nit__div_by_zero__DivByZeroVisitor___standard__kernel__Object__init]))(self); /* init on <self:DivByZeroVisitor>*/
}
RET_LABEL:;
}
