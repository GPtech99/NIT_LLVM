#include "nit__local_var_init.sep.0.h"
/* method local_var_init#ToolContext#local_var_init_phase for (self: ToolContext): Phase */
val* nit__local_var_init___ToolContext___local_var_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__local_var_init__ToolContext___local_var_init_phase].val; /* _local_var_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _local_var_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#ToolContext#local_var_init_phase= for (self: ToolContext, Phase) */
void nit__local_var_init___ToolContext___local_var_init_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__local_var_init__ToolContext___local_var_init_phase].val = p0; /* _local_var_init_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method local_var_init#LocalVarInitPhase#process_npropdef for (self: LocalVarInitPhase, APropdef) */
void nit__local_var_init___nit__local_var_init__LocalVarInitPhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
var_npropdef = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:LocalVarInitPhase>*/
}
{
((void(*)(val* self, val* p0))(var_npropdef->class->vft[COLOR_nit__local_var_init__APropdef__do_local_var_init]))(var_npropdef, var); /* do_local_var_init on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method local_var_init#APropdef#do_local_var_init for (self: APropdef, ToolContext) */
void nit__local_var_init___APropdef___do_local_var_init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LocalVarInitVisitor */;
val* var_v /* var v: LocalVarInitVisitor */;
var_toolcontext = p0;
var = NEW_nit__local_var_init__LocalVarInitVisitor(&type_nit__local_var_init__LocalVarInitVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:LocalVarInitVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:LocalVarInitVisitor>*/
}
var_v = var;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, self); /* enter_visit on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext for (self: LocalVarInitVisitor): ToolContext */
val* nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___toolcontext].val; /* _toolcontext on <self:LocalVarInitVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext= for (self: LocalVarInitVisitor, ToolContext) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___toolcontext].val = p0; /* _toolcontext on <self:LocalVarInitVisitor> */
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#maybe_unset_vars for (self: LocalVarInitVisitor): Set[Variable] */
val* nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 48);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#maybe_unset_vars= for (self: LocalVarInitVisitor, Set[Variable]) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars_61d(val* self, val* p0) {
self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val = p0; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_unset for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_unset(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
if (var_variable == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_variable, ((val*)NULL)); /* != on <var_variable:nullable Variable>*/
var = var1;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 53);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__maybe_unset_vars]))(self); /* maybe_unset_vars on <self:LocalVarInitVisitor>*/
}
{
((void(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var2, var_variable); /* add on <var2:Set[Variable]>*/
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Set[Variable] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var6 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
if (var_variable == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_variable, ((val*)NULL)); /* != on <var_variable:nullable Variable>*/
var = var1;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 59);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__maybe_unset_vars]))(self); /* maybe_unset_vars on <self:LocalVarInitVisitor>*/
}
{
var3 = ((short int(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var2, var_variable); /* has on <var2:Set[Variable]>*/
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_node); /* after_flow_context on <var_node:AExpr>*/
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 62);
fatal_exit(1);
}
var_flow = var5;
{
var6 = ((val*(*)(val* self))(var_flow->class->vft[COLOR_nit__local_var_init__FlowContext__set_vars]))(var_flow); /* set_vars on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var6, var_variable); /* add on <var6:Set[Variable]>*/
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#check_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___check_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Set[Variable] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var9 /* : Location */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : Message */;
val* var22 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
if (var_variable == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_variable, ((val*)NULL)); /* != on <var_variable:nullable Variable>*/
var = var1;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 68);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__maybe_unset_vars]))(self); /* maybe_unset_vars on <self:LocalVarInitVisitor>*/
}
{
var3 = ((short int(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var2, var_variable); /* has on <var2:Set[Variable]>*/
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_node); /* after_flow_context on <var_node:AExpr>*/
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 71);
fatal_exit(1);
}
var_flow = var5;
{
var6 = ((short int(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__local_var_init__FlowContext__is_variable_set]))(var_flow, var_variable); /* is_variable_set on <var_flow:FlowContext>*/
}
var7 = !var6;
if (var7){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__toolcontext]))(self); /* toolcontext on <self:LocalVarInitVisitor>*/
}
{
var9 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:AExpr>*/
}
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: possibly unset variable `";
var14 = standard___standard__NativeString___to_s_with_length(var13, 32l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "`.";
var18 = standard___standard__NativeString___to_s_with_length(var17, 2l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
{
var19 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_standard__string__Object__to_s]))(var_variable); /* to_s on <var_variable:nullable Variable(Variable)>*/
}
((struct instance_standard__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
var21 = ((val*(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var8, var9, var20); /* error on <var8:ToolContext>*/
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__maybe_unset_vars]))(self); /* maybe_unset_vars on <self:LocalVarInitVisitor>*/
}
{
((void(*)(val* self, val* p0))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var22, var_variable); /* remove on <var22:Set[Variable]>*/
}
} else {
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#visit for (self: LocalVarInitVisitor, ANode) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__local_var_init__ANode__accept_local_var_visitor]))(var_n, self); /* accept_local_var_visitor on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#init for (self: LocalVarInitVisitor) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___standard__kernel__Object__init]))(self); /* init on <self:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#FlowContext#set_vars for (self: FlowContext): Set[Variable] */
val* nit__local_var_init___FlowContext___set_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_nit__local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#FlowContext#set_vars= for (self: FlowContext, Set[Variable]) */
void nit__local_var_init___FlowContext___set_vars_61d(val* self, val* p0) {
self->attrs[COLOR_nit__local_var_init__FlowContext___set_vars].val = p0; /* _set_vars on <self:FlowContext> */
RET_LABEL:;
}
/* method local_var_init#FlowContext#is_variable_set for (self: FlowContext, Variable): Bool */
short int nit__local_var_init___FlowContext___is_variable_set(val* self, val* p0) {
short int var /* : Bool */;
val* var_variable /* var variable: Variable */;
val* var1 /* : Set[Variable] */;
short int var2 /* : Bool */;
val* var3 /* : Array[FlowContext] */;
val* var_previous /* var previous: Array[FlowContext] */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
val* var14 /* : Array[FlowContext] */;
val* var_ /* var : Array[FlowContext] */;
val* var15 /* : Iterator[nullable Object] */;
val* var_16 /* var : ArrayIterator[FlowContext] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_p /* var p: FlowContext */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : Set[Variable] */;
var_variable = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__local_var_init__FlowContext__set_vars]))(self); /* set_vars on <self:FlowContext>*/
}
{
var2 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var1, var_variable); /* has on <var1:Set[Variable]>*/
}
if (var2){
var = 1;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowContext__previous]))(self); /* previous on <self:FlowContext>*/
}
var_previous = var3;
{
var4 = ((long(*)(val* self))(var_previous->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_previous); /* length on <var_previous:Array[FlowContext]>*/
}
{
{ /* Inline kernel#Int#== (var4,0l) on <var4:Int> */
var7 = var4 == 0l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
{
var8 = ((long(*)(val* self))(var_previous->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_previous); /* length on <var_previous:Array[FlowContext]>*/
}
{
{ /* Inline kernel#Int#== (var8,1l) on <var8:Int> */
var11 = var8 == 1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(var_previous->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_previous); /* first on <var_previous:Array[FlowContext]>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_nit__local_var_init__FlowContext__is_variable_set]))(var12, var_variable); /* is_variable_set on <var12:nullable Object(FlowContext)>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowContext__previous]))(self); /* previous on <self:FlowContext>*/
}
var_ = var14;
{
var15 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[FlowContext]>*/
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:ArrayIterator[FlowContext]>*/
}
if (var17){
{
var18 = ((val*(*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:ArrayIterator[FlowContext]>*/
}
var_p = var18;
{
var19 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_nit__local_var_init__FlowContext__is_variable_set]))(var_p, var_variable); /* is_variable_set on <var_p:FlowContext>*/
}
var20 = !var19;
if (var20){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:ArrayIterator[FlowContext]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:ArrayIterator[FlowContext]>*/
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__local_var_init__FlowContext__set_vars]))(self); /* set_vars on <self:FlowContext>*/
}
{
((void(*)(val* self, val* p0))((((long)var21&3)?class_info[((long)var21&3)]:var21->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var21, var_variable); /* add on <var21:Set[Variable]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method local_var_init#ANode#accept_local_var_visitor for (self: ANode, LocalVarInitVisitor) */
void nit__local_var_init___ANode___accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
RET_LABEL:;
}
/* method local_var_init#AVardeclExpr#accept_local_var_visitor for (self: AVardeclExpr, LocalVarInitVisitor) */
void nit__local_var_init___AVardeclExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__local_var_init___AVardeclExpr___ANode__accept_local_var_visitor]))(self, p0); /* accept_local_var_visitor on <self:AVardeclExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_expr]))(self); /* n_expr on <self:AVardeclExpr>*/
}
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, ((val*)NULL)); /* == on <var:nullable AExpr>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVardeclExpr__variable]))(self); /* variable on <self:AVardeclExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__mark_is_unset]))(var_v, self, var3); /* mark_is_unset on <var_v:LocalVarInitVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method local_var_init#AVarExpr#accept_local_var_visitor for (self: AVarExpr, LocalVarInitVisitor) */
void nit__local_var_init___AVarExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__local_var_init___AVarExpr___ANode__accept_local_var_visitor]))(self, p0); /* accept_local_var_visitor on <self:AVarExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__check_is_set]))(var_v, self, var); /* check_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#AVarAssignExpr#accept_local_var_visitor for (self: AVarAssignExpr, LocalVarInitVisitor) */
void nit__local_var_init___AVarAssignExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__local_var_init___AVarAssignExpr___ANode__accept_local_var_visitor]))(self, p0); /* accept_local_var_visitor on <self:AVarAssignExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarAssignExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__mark_is_set]))(var_v, self, var); /* mark_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#AVarReassignExpr#accept_local_var_visitor for (self: AVarReassignExpr, LocalVarInitVisitor) */
void nit__local_var_init___AVarReassignExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__local_var_init___AVarReassignExpr___ANode__accept_local_var_visitor]))(self, p0); /* accept_local_var_visitor on <self:AVarReassignExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarReassignExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__check_is_set]))(var_v, self, var); /* check_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
