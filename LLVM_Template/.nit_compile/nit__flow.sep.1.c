#include "nit__flow.sep.0.h"
/* method flow#ToolContext#flow_phase for (self: ToolContext): Phase */
val* nit__flow___ToolContext___flow_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__flow__ToolContext___flow_phase].val; /* _flow_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#ToolContext#flow_phase= for (self: ToolContext, Phase) */
void nit__flow___ToolContext___flow_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__ToolContext___flow_phase].val = p0; /* _flow_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method flow#FlowPhase#process_npropdef for (self: FlowPhase, APropdef) */
void nit__flow___nit__flow__FlowPhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
var_npropdef = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:FlowPhase>*/
}
{
((void(*)(val* self, val* p0))(var_npropdef->class->vft[COLOR_nit__flow__APropdef__do_flow]))(var_npropdef, var); /* do_flow on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method flow#FlowVisitor#current_flow_context for (self: FlowVisitor): FlowContext */
val* nit__flow___nit__flow__FlowVisitor___current_flow_context(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_nit__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#current_flow_context= for (self: FlowVisitor, FlowContext) */
void nit__flow___nit__flow__FlowVisitor___current_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowVisitor___current_flow_context].val = p0; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#toolcontext for (self: FlowVisitor): ToolContext */
val* nit__flow___nit__flow__FlowVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__flow__FlowVisitor___toolcontext].val; /* _toolcontext on <self:FlowVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 39);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#toolcontext= for (self: FlowVisitor, ToolContext) */
void nit__flow___nit__flow__FlowVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowVisitor___toolcontext].val = p0; /* _toolcontext on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#init for (self: FlowVisitor) */
void nit__flow___nit__flow__FlowVisitor___standard__kernel__Object__init(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : FlowContext */;
val* var2 /* : FlowContext */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__flow___nit__flow__FlowVisitor___standard__kernel__Object__init]))(self); /* init on <self:FlowVisitor>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__flows]))(self); /* flows on <self:FlowVisitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var, var1); /* add on <var:Array[FlowContext]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nit__flow__FlowContext__is_start_61d]))(var2, 1); /* is_start= on <var2:FlowContext>*/
}
RET_LABEL:;
}
/* method flow#FlowVisitor#first for (self: FlowVisitor): nullable ANode */
val* nit__flow___nit__flow__FlowVisitor___first(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__flow__FlowVisitor___first].val; /* _first on <self:FlowVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#first= for (self: FlowVisitor, nullable ANode) */
void nit__flow___nit__flow__FlowVisitor___first_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowVisitor___first].val = p0; /* _first on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#visit for (self: FlowVisitor, ANode) */
void nit__flow___nit__flow__FlowVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : FlowContext */;
val* var4 /* : nullable ANode */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : FlowContext */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
short int var10 /* : Bool */;
val* var11 /* : FlowContext */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : FlowContext */;
short int var14 /* : Bool */;
val* var15 /* : FlowContext */;
val* var16 /* : FlowContext */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var20 /* : nullable ANode */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
var_node = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__first]))(self); /* first on <self:FlowVisitor>*/
}
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, ((val*)NULL)); /* == on <var:nullable ANode>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow__FlowVisitor__first_61d]))(self, var_node); /* first= on <self:FlowVisitor>*/
}
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__flow__FlowContext__node]))(var3); /* node on <var3:FlowContext>*/
}
if (var4 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, ((val*)NULL)); /* == on <var4:nullable ANode>*/
var5 = var6;
}
if (var5){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_nit__flow__FlowContext__node_61d]))(var7, var_node); /* node= on <var7:FlowContext>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__flow__ANode__accept_flow_visitor]))(var_node, self); /* accept_flow_visitor on <var_node:ANode>*/
}
/* <var_node:ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(cltype >= var_node->type->table_size) {
var8 = 0;
} else {
var8 = var_node->type->type_table[cltype] == idtype;
}
if (var8){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
var_flow = var9;
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__flow__AExpr__after_flow_context_61d]))(var_node, var_flow); /* after_flow_context= on <var_node:ANode(AExpr)>*/
}
{
var11 = ((val*(*)(val* self))(var_flow->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_flow); /* when_true on <var_flow:FlowContext>*/
}
{
var12 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var11, var_flow); /* != on <var11:FlowContext>*/
}
var_ = var12;
if (var12){
var10 = var_;
} else {
{
var13 = ((val*(*)(val* self))(var_flow->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_flow); /* when_false on <var_flow:FlowContext>*/
}
{
var14 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var13, var_flow); /* != on <var13:FlowContext>*/
}
var10 = var14;
}
if (var10){
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__make_sub_flow]))(self); /* make_sub_flow on <self:FlowVisitor>*/
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "AUTOSUB";
var19 = standard___standard__NativeString___to_s_with_length(var18, 7l);
var17 = var19;
varonce = var17;
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_nit__flow__FlowContext__name_61d]))(var16, var17); /* name= on <var16:FlowContext>*/
}
} else {
}
} else {
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__first]))(self); /* first on <self:FlowVisitor>*/
}
if (var20 == NULL) {
var21 = 0; /* <var_node:ANode> cannot be null */
} else {
var22 = ((short int(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var_node); /* == on <var20:nullable ANode>*/
var21 = var22;
}
if (var21){
} else {
}
RET_LABEL:;
}
/* method flow#FlowVisitor#visit_expr for (self: FlowVisitor, AExpr): FlowContext */
val* nit__flow___nit__flow__FlowVisitor___visit_expr(val* self, val* p0) {
val* var /* : FlowContext */;
val* var_node /* var node: AExpr */;
val* var1 /* : nullable FlowContext */;
var_node = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(self, var_node); /* enter_visit on <self:FlowVisitor>*/
}
{
var1 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_node); /* after_flow_context on <var_node:AExpr>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 73);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#flows for (self: FlowVisitor): Array[FlowContext] */
val* nit__flow___nit__flow__FlowVisitor___flows(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_nit__flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 76);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#flows= for (self: FlowVisitor, Array[FlowContext]) */
void nit__flow___nit__flow__FlowVisitor___flows_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowVisitor___flows].val = p0; /* _flows on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#printflow for (self: FlowVisitor) */
void nit__flow___nit__flow__FlowVisitor___printflow(val* self) {
val* var /* : FileWriter */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var_file /* var file: FileWriter */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : Array[FlowContext] */;
val* var_ /* var : Array[FlowContext] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[FlowContext] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_f /* var f: FlowContext */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var_s /* var s: String */;
val* var17 /* : nullable ANode */;
short int var18 /* : Bool */;
int cltype;
int idtype;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : nullable ANode */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name;
val* var29 /* : nullable FlowContext */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
long var59 /* : Int */;
val* var60 /* : String */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : nullable ANode */;
val* var64 /* : Location */;
val* var65 /* : String */;
val* var66 /* : nullable ANode */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : Array[FlowContext] */;
val* var_71 /* var : Array[FlowContext] */;
val* var72 /* : Iterator[nullable Object] */;
val* var_73 /* var : ArrayIterator[FlowContext] */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
val* var_p /* var p: FlowContext */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
val* var80 /* : FlowContext */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
val* var86 /* : FlowContext */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : FlatString */;
short int var92 /* : Bool */;
val* var93 /* : FlowContext */;
short int var94 /* : Bool */;
short int var_95 /* var : Bool */;
val* var96 /* : FlowContext */;
short int var97 /* : Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : FlatString */;
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
long var116 /* : Int */;
val* var117 /* : String */;
long var118 /* : Int */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : Array[FlowContext] */;
val* var_122 /* var : Array[FlowContext] */;
val* var123 /* : Iterator[nullable Object] */;
val* var_124 /* var : ArrayIterator[FlowContext] */;
short int var125 /* : Bool */;
val* var126 /* : nullable Object */;
val* var_p127 /* var p: FlowContext */;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : FlatString */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
long var142 /* : Int */;
val* var143 /* : String */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : FlatString */;
var = NEW_standard__FileWriter(&type_standard__FileWriter);
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "flow.dot";
var3 = standard___standard__NativeString___to_s_with_length(var2, 8l);
var1 = var3;
varonce = var1;
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__file__FileWriter__open]))(var, var1); /* open on <var:FileWriter>*/
}
var_file = var;
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "digraph {\nnode[shape=box];";
var7 = standard___standard__NativeString___to_s_with_length(var6, 26l);
var5 = var7;
varonce4 = var5;
}
{
((void(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__stream__Writer__write]))(var_file, var5); /* write on <var_file:FileWriter>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__flows]))(self); /* flows on <self:FlowVisitor>*/
}
var_ = var8;
{
var9 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[FlowContext]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[FlowContext]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[FlowContext]>*/
}
var_f = var12;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "";
var16 = standard___standard__NativeString___to_s_with_length(var15, 0l);
var14 = var16;
varonce13 = var14;
}
var_s = var14;
{
var17 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__node]))(var_f); /* node on <var_f:FlowContext>*/
}
/* <var17:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var17 == NULL) {
var18 = 0;
} else {
if(cltype >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype] == idtype;
}
}
if (var18){
if (unlikely(varonce19==NULL)) {
var20 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "\\nmain=";
var24 = standard___standard__NativeString___to_s_with_length(var23, 7l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var20)->values[0]=var22;
} else {
var20 = varonce19;
varonce19 = NULL;
}
{
var25 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__node]))(var_f); /* node on <var_f:FlowContext>*/
}
/* <var25:nullable ANode> isa AExpr */
cltype27 = type_nit__AExpr.color;
idtype28 = type_nit__AExpr.id;
if(var25 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var25->type->table_size) {
var26 = 0;
} else {
var26 = var25->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name = var25 == NULL ? "null" : var25->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 85);
fatal_exit(1);
}
{
var29 = ((val*(*)(val* self))(var25->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var25); /* after_flow_context on <var25:nullable ANode(AExpr)>*/
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 85);
fatal_exit(1);
} else {
var30 = ((long(*)(val* self))(var29->class->vft[COLOR_standard__kernel__Object__object_id]))(var29); /* object_id on <var29:nullable FlowContext>*/
}
var31 = standard__string___Int___Object__to_s(var30);
((struct instance_standard__NativeArray*)var20)->values[1]=var31;
{
var32 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
var_s = var32;
} else {
}
if (unlikely(varonce33==NULL)) {
var34 = NEW_standard__NativeArray(12l, &type_standard__NativeArray__standard__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "F";
var38 = standard___standard__NativeString___to_s_with_length(var37, 1l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var34)->values[0]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " [label=\"";
var42 = standard___standard__NativeString___to_s_with_length(var41, 9l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var34)->values[2]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "\\n";
var46 = standard___standard__NativeString___to_s_with_length(var45, 2l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var34)->values[4]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\\n";
var50 = standard___standard__NativeString___to_s_with_length(var49, 2l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var34)->values[6]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "\\n";
var54 = standard___standard__NativeString___to_s_with_length(var53, 2l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var34)->values[8]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "\"];\n";
var58 = standard___standard__NativeString___to_s_with_length(var57, 4l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var34)->values[11]=var56;
} else {
var34 = varonce33;
varonce33 = NULL;
}
{
var59 = ((long(*)(val* self))(var_f->class->vft[COLOR_standard__kernel__Object__object_id]))(var_f); /* object_id on <var_f:FlowContext>*/
}
var60 = standard__string___Int___Object__to_s(var59);
((struct instance_standard__NativeArray*)var34)->values[1]=var60;
{
var61 = ((long(*)(val* self))(var_f->class->vft[COLOR_standard__kernel__Object__object_id]))(var_f); /* object_id on <var_f:FlowContext>*/
}
var62 = standard__string___Int___Object__to_s(var61);
((struct instance_standard__NativeArray*)var34)->values[3]=var62;
{
var63 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__node]))(var_f); /* node on <var_f:FlowContext>*/
}
if (var63 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 87);
fatal_exit(1);
} else {
var64 = ((val*(*)(val* self))(var63->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var63); /* location on <var63:nullable ANode>*/
}
{
var65 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__Object__to_s]))(var64); /* to_s on <var64:Location>*/
}
((struct instance_standard__NativeArray*)var34)->values[5]=var65;
{
var66 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__node]))(var_f); /* node on <var_f:FlowContext>*/
}
if (var66 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 87);
fatal_exit(1);
} else {
var67 = ((val*(*)(val* self))(var66->class->vft[COLOR_standard__string__Object__class_name]))(var66); /* class_name on <var66:nullable ANode>*/
}
((struct instance_standard__NativeArray*)var34)->values[7]=var67;
{
var68 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__name]))(var_f); /* name on <var_f:FlowContext>*/
}
((struct instance_standard__NativeArray*)var34)->values[9]=var68;
((struct instance_standard__NativeArray*)var34)->values[10]=var_s;
{
var69 = ((val*(*)(val* self))(var34->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
((void(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__stream__Writer__write]))(var_file, var69); /* write on <var_file:FileWriter>*/
}
{
var70 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__previous]))(var_f); /* previous on <var_f:FlowContext>*/
}
var_71 = var70;
{
var72 = ((val*(*)(val* self))(var_71->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_71); /* iterator on <var_71:Array[FlowContext]>*/
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))(var_73->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_73); /* is_ok on <var_73:ArrayIterator[FlowContext]>*/
}
if (var74){
{
var75 = ((val*(*)(val* self))(var_73->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_73); /* item on <var_73:ArrayIterator[FlowContext]>*/
}
var_p = var75;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "";
var79 = standard___standard__NativeString___to_s_with_length(var78, 0l);
var77 = var79;
varonce76 = var77;
}
var_s = var77;
{
var80 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_f); /* when_true on <var_f:FlowContext>*/
}
{
var81 = ((short int(*)(val* self, val* p0))(var80->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var80, var_p); /* == on <var80:FlowContext>*/
}
if (var81){
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "[label=TRUE, style=dotted]";
var85 = standard___standard__NativeString___to_s_with_length(var84, 26l);
var83 = var85;
varonce82 = var83;
}
var_s = var83;
} else {
}
{
var86 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_f); /* when_false on <var_f:FlowContext>*/
}
{
var87 = ((short int(*)(val* self, val* p0))(var86->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var86, var_p); /* == on <var86:FlowContext>*/
}
if (var87){
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "[label=FALSE, style=dotted]";
var91 = standard___standard__NativeString___to_s_with_length(var90, 27l);
var89 = var91;
varonce88 = var89;
}
var_s = var89;
} else {
}
{
var93 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_f); /* when_true on <var_f:FlowContext>*/
}
{
var94 = ((short int(*)(val* self, val* p0))(var93->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var93, var_p); /* == on <var93:FlowContext>*/
}
var_95 = var94;
if (var94){
{
var96 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_f); /* when_false on <var_f:FlowContext>*/
}
{
var97 = ((short int(*)(val* self, val* p0))(var96->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var96, var_p); /* == on <var96:FlowContext>*/
}
var92 = var97;
} else {
var92 = var_95;
}
if (var92){
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "[label=TRUE_FALSE, style=dotted]";
var101 = standard___standard__NativeString___to_s_with_length(var100, 32l);
var99 = var101;
varonce98 = var99;
}
var_s = var99;
} else {
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "F";
var107 = standard___standard__NativeString___to_s_with_length(var106, 1l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var103)->values[0]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = " -> F";
var111 = standard___standard__NativeString___to_s_with_length(var110, 5l);
var109 = var111;
varonce108 = var109;
}
((struct instance_standard__NativeArray*)var103)->values[2]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = ";\n";
var115 = standard___standard__NativeString___to_s_with_length(var114, 2l);
var113 = var115;
varonce112 = var113;
}
((struct instance_standard__NativeArray*)var103)->values[5]=var113;
} else {
var103 = varonce102;
varonce102 = NULL;
}
{
var116 = ((long(*)(val* self))(var_p->class->vft[COLOR_standard__kernel__Object__object_id]))(var_p); /* object_id on <var_p:FlowContext>*/
}
var117 = standard__string___Int___Object__to_s(var116);
((struct instance_standard__NativeArray*)var103)->values[1]=var117;
{
var118 = ((long(*)(val* self))(var_f->class->vft[COLOR_standard__kernel__Object__object_id]))(var_f); /* object_id on <var_f:FlowContext>*/
}
var119 = standard__string___Int___Object__to_s(var118);
((struct instance_standard__NativeArray*)var103)->values[3]=var119;
((struct instance_standard__NativeArray*)var103)->values[4]=var_s;
{
var120 = ((val*(*)(val* self))(var103->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
((void(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__stream__Writer__write]))(var_file, var120); /* write on <var_file:FileWriter>*/
}
{
((void(*)(val* self))(var_73->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_73); /* next on <var_73:ArrayIterator[FlowContext]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_73->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_73); /* finish on <var_73:ArrayIterator[FlowContext]>*/
}
{
var121 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__loops]))(var_f); /* loops on <var_f:FlowContext>*/
}
var_122 = var121;
{
var123 = ((val*(*)(val* self))(var_122->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_122); /* iterator on <var_122:Array[FlowContext]>*/
}
var_124 = var123;
for(;;) {
{
var125 = ((short int(*)(val* self))(var_124->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_124); /* is_ok on <var_124:ArrayIterator[FlowContext]>*/
}
if (var125){
{
var126 = ((val*(*)(val* self))(var_124->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_124); /* item on <var_124:ArrayIterator[FlowContext]>*/
}
var_p127 = var126;
if (unlikely(varonce128==NULL)) {
var129 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "F";
var133 = standard___standard__NativeString___to_s_with_length(var132, 1l);
var131 = var133;
varonce130 = var131;
}
((struct instance_standard__NativeArray*)var129)->values[0]=var131;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = " -> F";
var137 = standard___standard__NativeString___to_s_with_length(var136, 5l);
var135 = var137;
varonce134 = var135;
}
((struct instance_standard__NativeArray*)var129)->values[2]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "[label=LOOP, style=dashed, constraint=false];\n";
var141 = standard___standard__NativeString___to_s_with_length(var140, 46l);
var139 = var141;
varonce138 = var139;
}
((struct instance_standard__NativeArray*)var129)->values[4]=var139;
} else {
var129 = varonce128;
varonce128 = NULL;
}
{
var142 = ((long(*)(val* self))(var_p127->class->vft[COLOR_standard__kernel__Object__object_id]))(var_p127); /* object_id on <var_p127:FlowContext>*/
}
var143 = standard__string___Int___Object__to_s(var142);
((struct instance_standard__NativeArray*)var129)->values[1]=var143;
{
var144 = ((long(*)(val* self))(var_f->class->vft[COLOR_standard__kernel__Object__object_id]))(var_f); /* object_id on <var_f:FlowContext>*/
}
var145 = standard__string___Int___Object__to_s(var144);
((struct instance_standard__NativeArray*)var129)->values[3]=var145;
{
var146 = ((val*(*)(val* self))(var129->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
{
((void(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__stream__Writer__write]))(var_file, var146); /* write on <var_file:FileWriter>*/
}
{
((void(*)(val* self))(var_124->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_124); /* next on <var_124:ArrayIterator[FlowContext]>*/
}
} else {
goto BREAK_label147;
}
}
BREAK_label147: (void)0;
{
((void(*)(val* self))(var_124->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_124); /* finish on <var_124:ArrayIterator[FlowContext]>*/
}
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[FlowContext]>*/
}
} else {
goto BREAK_label148;
}
}
BREAK_label148: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[FlowContext]>*/
}
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "}\n";
var152 = standard___standard__NativeString___to_s_with_length(var151, 2l);
var150 = var152;
varonce149 = var150;
}
{
((void(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__stream__Writer__write]))(var_file, var150); /* write on <var_file:FileWriter>*/
}
{
((void(*)(val* self))(var_file->class->vft[COLOR_standard__stream__Stream__close]))(var_file); /* close on <var_file:FileWriter>*/
}
RET_LABEL:;
}
/* method flow#FlowVisitor#make_sub_flow for (self: FlowVisitor): FlowContext */
val* nit__flow___nit__flow__FlowVisitor___make_sub_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var2 /* : Array[FlowContext] */;
val* var3 /* : nullable ANode */;
val* var4 /* : FlowContext */;
var1 = NEW_nit__FlowContext(&type_nit__FlowContext);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlowContext>*/
}
var_flow = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__flows]))(self); /* flows on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var2, var_flow); /* add on <var2:Array[FlowContext]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Visitor__current_node]))(self); /* current_node on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__node_61d]))(var_flow, var3); /* node= on <var_flow:FlowContext>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__add_previous]))(var_flow, var4); /* add_previous on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(self, var_flow); /* current_flow_context= on <self:FlowVisitor>*/
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_merge_flow for (self: FlowVisitor, FlowContext, FlowContext): FlowContext */
val* nit__flow___nit__flow__FlowVisitor___make_merge_flow(val* self, val* p0, val* p1) {
val* var /* : FlowContext */;
val* var_flow1 /* var flow1: FlowContext */;
val* var_flow2 /* var flow2: FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var2 /* : Array[FlowContext] */;
val* var3 /* : nullable ANode */;
var_flow1 = p0;
var_flow2 = p1;
var1 = NEW_nit__FlowContext(&type_nit__FlowContext);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlowContext>*/
}
var_flow = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__flows]))(self); /* flows on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var2, var_flow); /* add on <var2:Array[FlowContext]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Visitor__current_node]))(self); /* current_node on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__node_61d]))(var_flow, var3); /* node= on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__add_previous]))(var_flow, var_flow1); /* add_previous on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__add_previous]))(var_flow, var_flow2); /* add_previous on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(self, var_flow); /* current_flow_context= on <self:FlowVisitor>*/
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_true_false_flow for (self: FlowVisitor, FlowContext, FlowContext): FlowContext */
val* nit__flow___nit__flow__FlowVisitor___make_true_false_flow(val* self, val* p0, val* p1) {
val* var /* : FlowContext */;
val* var_true_flow /* var true_flow: FlowContext */;
val* var_false_flow /* var false_flow: FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var2 /* : Array[FlowContext] */;
val* var3 /* : nullable ANode */;
var_true_flow = p0;
var_false_flow = p1;
var1 = NEW_nit__FlowContext(&type_nit__FlowContext);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlowContext>*/
}
var_flow = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__flows]))(self); /* flows on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var2, var_flow); /* add on <var2:Array[FlowContext]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Visitor__current_node]))(self); /* current_node on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__node_61d]))(var_flow, var3); /* node= on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__add_previous]))(var_flow, var_true_flow); /* add_previous on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__add_previous]))(var_flow, var_false_flow); /* add_previous on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__when_true_61d]))(var_flow, var_true_flow); /* when_true= on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__when_false_61d]))(var_flow, var_false_flow); /* when_false= on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(self, var_flow); /* current_flow_context= on <self:FlowVisitor>*/
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_sub_true_false_flow for (self: FlowVisitor): FlowContext */
val* nit__flow___nit__flow__FlowVisitor___make_sub_true_false_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var_orig_flow /* var orig_flow: FlowContext */;
val* var2 /* : FlowContext */;
val* var_true_flow /* var true_flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var4 /* : nullable ANode */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : FlowContext */;
val* var_false_flow /* var false_flow: FlowContext */;
val* var9 /* : Array[FlowContext] */;
val* var10 /* : nullable ANode */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : FlowContext */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
var_orig_flow = var1;
var2 = NEW_nit__FlowContext(&type_nit__FlowContext);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:FlowContext>*/
}
var_true_flow = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__flows]))(self); /* flows on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var3, var_true_flow); /* add on <var3:Array[FlowContext]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Visitor__current_node]))(self); /* current_node on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_true_flow->class->vft[COLOR_nit__flow__FlowContext__node_61d]))(var_true_flow, var4); /* node= on <var_true_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_true_flow->class->vft[COLOR_nit__flow__FlowContext__add_previous]))(var_true_flow, var_orig_flow); /* add_previous on <var_true_flow:FlowContext>*/
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "TRUE";
var7 = standard___standard__NativeString___to_s_with_length(var6, 4l);
var5 = var7;
varonce = var5;
}
{
((void(*)(val* self, val* p0))(var_true_flow->class->vft[COLOR_nit__flow__FlowContext__name_61d]))(var_true_flow, var5); /* name= on <var_true_flow:FlowContext>*/
}
var8 = NEW_nit__FlowContext(&type_nit__FlowContext);
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:FlowContext>*/
}
var_false_flow = var8;
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__flows]))(self); /* flows on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var9, var_false_flow); /* add on <var9:Array[FlowContext]>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Visitor__current_node]))(self); /* current_node on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_false_flow->class->vft[COLOR_nit__flow__FlowContext__node_61d]))(var_false_flow, var10); /* node= on <var_false_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_false_flow->class->vft[COLOR_nit__flow__FlowContext__add_previous]))(var_false_flow, var_orig_flow); /* add_previous on <var_false_flow:FlowContext>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "FALSE";
var14 = standard___standard__NativeString___to_s_with_length(var13, 5l);
var12 = var14;
varonce11 = var12;
}
{
((void(*)(val* self, val* p0))(var_false_flow->class->vft[COLOR_nit__flow__FlowContext__name_61d]))(var_false_flow, var12); /* name= on <var_false_flow:FlowContext>*/
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__flow__FlowVisitor__make_true_false_flow]))(self, var_true_flow, var_false_flow); /* make_true_false_flow on <self:FlowVisitor>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_unreachable_flow for (self: FlowVisitor): FlowContext */
val* nit__flow___nit__flow__FlowVisitor___make_unreachable_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var2 /* : Array[FlowContext] */;
val* var3 /* : nullable ANode */;
val* var4 /* : FlowContext */;
var1 = NEW_nit__FlowContext(&type_nit__FlowContext);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlowContext>*/
}
var_flow = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__flows]))(self); /* flows on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var2, var_flow); /* add on <var2:Array[FlowContext]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Visitor__current_node]))(self); /* current_node on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__node_61d]))(var_flow, var3); /* node= on <var_flow:FlowContext>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__add_previous]))(var_flow, var4); /* add_previous on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, short int p0))(var_flow->class->vft[COLOR_nit__flow__FlowContext__is_marked_unreachable_61d]))(var_flow, 1); /* is_marked_unreachable= on <var_flow:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(self, var_flow); /* current_flow_context= on <self:FlowVisitor>*/
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#merge_continues_to for (self: FlowVisitor, FlowContext, nullable EscapeMark) */
void nit__flow___nit__flow__FlowVisitor___merge_continues_to(val* self, val* p0, val* p1) {
val* var_before_loop /* var before_loop: FlowContext */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Array[AEscapeExpr] */;
val* var_ /* var : Array[AEscapeExpr] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[AEscapeExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_b /* var b: AEscapeExpr */;
val* var7 /* : nullable FlowContext */;
val* var_before /* var before: nullable FlowContext */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_before_loop = p0;
var_escapemark = p1;
if (var_escapemark == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_escapemark, ((val*)NULL)); /* == on <var_escapemark:nullable EscapeMark>*/
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(var_escapemark->class->vft[COLOR_nit__scope__EscapeMark__escapes]))(var_escapemark); /* escapes on <var_escapemark:nullable EscapeMark(EscapeMark)>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[AEscapeExpr]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[AEscapeExpr]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[AEscapeExpr]>*/
}
var_b = var6;
{
var7 = ((val*(*)(val* self))(var_b->class->vft[COLOR_nit__flow__AEscapeExpr__before_flow_context]))(var_b); /* before_flow_context on <var_b:AEscapeExpr>*/
}
var_before = var7;
if (var_before == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_before->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_before, ((val*)NULL)); /* == on <var_before:nullable FlowContext>*/
var8 = var9;
}
if (var8){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_before_loop->class->vft[COLOR_nit__flow__FlowContext__add_loop]))(var_before_loop, var_before); /* add_loop on <var_before_loop:FlowContext>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[AEscapeExpr]>*/
}
} else {
goto BREAK_label10;
}
}
BREAK_label10: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[AEscapeExpr]>*/
}
RET_LABEL:;
}
/* method flow#FlowVisitor#merge_breaks for (self: FlowVisitor, nullable EscapeMark) */
void nit__flow___nit__flow__FlowVisitor___merge_breaks(val* self, val* p0) {
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Array[AEscapeExpr] */;
val* var_ /* var : Array[AEscapeExpr] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[AEscapeExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_b /* var b: AEscapeExpr */;
val* var7 /* : nullable FlowContext */;
val* var_before /* var before: nullable FlowContext */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : FlowContext */;
val* var11 /* : FlowContext */;
var_escapemark = p0;
if (var_escapemark == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_escapemark, ((val*)NULL)); /* == on <var_escapemark:nullable EscapeMark>*/
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(var_escapemark->class->vft[COLOR_nit__scope__EscapeMark__escapes]))(var_escapemark); /* escapes on <var_escapemark:nullable EscapeMark(EscapeMark)>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[AEscapeExpr]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[AEscapeExpr]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[AEscapeExpr]>*/
}
var_b = var6;
{
var7 = ((val*(*)(val* self))(var_b->class->vft[COLOR_nit__flow__AEscapeExpr__before_flow_context]))(var_b); /* before_flow_context on <var_b:AEscapeExpr>*/
}
var_before = var7;
if (var_before == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_before->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_before, ((val*)NULL)); /* == on <var_before:nullable FlowContext>*/
var8 = var9;
}
if (var8){
goto BREAK_label;
} else {
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(self); /* current_flow_context on <self:FlowVisitor>*/
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__flow__FlowVisitor__make_merge_flow]))(self, var10, var_before); /* make_merge_flow on <self:FlowVisitor>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[AEscapeExpr]>*/
}
} else {
goto BREAK_label12;
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[AEscapeExpr]>*/
}
RET_LABEL:;
}
/* method flow#FlowContext#previous for (self: FlowContext): Array[FlowContext] */
val* nit___nit__FlowContext___previous(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_nit__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 189);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#previous= for (self: FlowContext, Array[FlowContext]) */
void nit___nit__FlowContext___previous_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowContext___previous].val = p0; /* _previous on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#loops for (self: FlowContext): Array[FlowContext] */
val* nit___nit__FlowContext___loops(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_nit__flow__FlowContext___loops].val; /* _loops on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _loops");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 192);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#loops= for (self: FlowContext, Array[FlowContext]) */
void nit___nit__FlowContext___loops_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowContext___loops].val = p0; /* _loops on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#is_marked_unreachable for (self: FlowContext): Bool */
short int nit___nit__FlowContext___is_marked_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__flow__FlowContext___is_marked_unreachable].s; /* _is_marked_unreachable on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_marked_unreachable= for (self: FlowContext, Bool) */
void nit___nit__FlowContext___is_marked_unreachable_61d(val* self, short int p0) {
self->attrs[COLOR_nit__flow__FlowContext___is_marked_unreachable].s = p0; /* _is_marked_unreachable on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#is_unreachable for (self: FlowContext): Bool */
short int nit___nit__FlowContext___is_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[FlowContext] */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowContext__is_marked_unreachable]))(self); /* is_marked_unreachable on <self:FlowContext>*/
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowContext__is_start]))(self); /* is_start on <self:FlowContext>*/
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowContext__previous]))(self); /* previous on <self:FlowContext>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var3); /* length on <var3:Array[FlowContext]>*/
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
var = 1;
goto RET_LABEL;
} else {
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_already_unreachable for (self: FlowContext): Bool */
short int nit___nit__FlowContext___is_already_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__flow__FlowContext___is_already_unreachable].s; /* _is_already_unreachable on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_already_unreachable= for (self: FlowContext, Bool) */
void nit___nit__FlowContext___is_already_unreachable_61d(val* self, short int p0) {
self->attrs[COLOR_nit__flow__FlowContext___is_already_unreachable].s = p0; /* _is_already_unreachable on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#is_start for (self: FlowContext): Bool */
short int nit___nit__FlowContext___is_start(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__flow__FlowContext___is_start].s; /* _is_start on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_start= for (self: FlowContext, Bool) */
void nit___nit__FlowContext___is_start_61d(val* self, short int p0) {
self->attrs[COLOR_nit__flow__FlowContext___is_start].s = p0; /* _is_start on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#node for (self: FlowContext): nullable ANode */
val* nit___nit__FlowContext___node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__flow__FlowContext___node].val; /* _node on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#node= for (self: FlowContext, nullable ANode) */
void nit___nit__FlowContext___node_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowContext___node].val = p0; /* _node on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#name for (self: FlowContext): String */
val* nit___nit__FlowContext___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__flow__FlowContext___name].val; /* _name on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 222);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#name= for (self: FlowContext, String) */
void nit___nit__FlowContext___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowContext___name].val = p0; /* _name on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#when_true for (self: FlowContext): FlowContext */
val* nit___nit__FlowContext___when_true(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_nit__flow__FlowContext___when_true].val; /* _when_true on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 225);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#when_true= for (self: FlowContext, FlowContext) */
void nit___nit__FlowContext___when_true_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowContext___when_true].val = p0; /* _when_true on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#when_false for (self: FlowContext): FlowContext */
val* nit___nit__FlowContext___when_false(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_nit__flow__FlowContext___when_false].val; /* _when_false on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 228);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#when_false= for (self: FlowContext, FlowContext) */
void nit___nit__FlowContext___when_false_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__FlowContext___when_false].val = p0; /* _when_false on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#add_previous for (self: FlowContext, FlowContext) */
void nit___nit__FlowContext___add_previous(val* self, val* p0) {
val* var_flow /* var flow: FlowContext */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : Array[FlowContext] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[FlowContext] */;
var_flow = p0;
{
var1 = ((short int(*)(val* self))(var_flow->class->vft[COLOR_nit__flow__FlowContext__is_unreachable]))(var_flow); /* is_unreachable on <var_flow:FlowContext>*/
}
var2 = !var1;
var_ = var2;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowContext__previous]))(self); /* previous on <self:FlowContext>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var3, var_flow); /* has on <var3:Array[FlowContext]>*/
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowContext__previous]))(self); /* previous on <self:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var6, var_flow); /* add on <var6:Array[FlowContext]>*/
}
} else {
}
RET_LABEL:;
}
/* method flow#FlowContext#add_loop for (self: FlowContext, FlowContext) */
void nit___nit__FlowContext___add_loop(val* self, val* p0) {
val* var_flow /* var flow: FlowContext */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : Array[FlowContext] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[FlowContext] */;
var_flow = p0;
{
var1 = ((short int(*)(val* self))(var_flow->class->vft[COLOR_nit__flow__FlowContext__is_unreachable]))(var_flow); /* is_unreachable on <var_flow:FlowContext>*/
}
var2 = !var1;
var_ = var2;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowContext__previous]))(self); /* previous on <self:FlowContext>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var3, var_flow); /* has on <var3:Array[FlowContext]>*/
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__FlowContext__loops]))(self); /* loops on <self:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var6, var_flow); /* add on <var6:Array[FlowContext]>*/
}
} else {
}
RET_LABEL:;
}
/* method flow#ANode#accept_flow_visitor for (self: ANode, FlowVisitor) */
void nit__flow___ANode___accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
RET_LABEL:;
}
/* method flow#APropdef#do_flow for (self: APropdef, ToolContext) */
void nit__flow___APropdef___do_flow(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : FlowVisitor */;
val* var_v /* var v: FlowVisitor */;
var_toolcontext = p0;
var = NEW_nit__flow__FlowVisitor(&type_nit__flow__FlowVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__flow__FlowVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:FlowVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:FlowVisitor>*/
}
var_v = var;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, self); /* enter_visit on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#APropdef#before_flow_context for (self: APropdef): nullable FlowContext */
val* nit__flow___APropdef___before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = self->attrs[COLOR_nit__flow__APropdef___before_flow_context].val; /* _before_flow_context on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#APropdef#before_flow_context= for (self: APropdef, nullable FlowContext) */
void nit__flow___APropdef___before_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__APropdef___before_flow_context].val = p0; /* _before_flow_context on <self:APropdef> */
RET_LABEL:;
}
/* method flow#APropdef#after_flow_context for (self: APropdef): nullable FlowContext */
val* nit__flow___APropdef___after_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = self->attrs[COLOR_nit__flow__APropdef___after_flow_context].val; /* _after_flow_context on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#APropdef#after_flow_context= for (self: APropdef, nullable FlowContext) */
void nit__flow___APropdef___after_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__APropdef___after_flow_context].val = p0; /* _after_flow_context on <self:APropdef> */
RET_LABEL:;
}
/* method flow#APropdef#accept_flow_visitor for (self: APropdef, FlowVisitor) */
void nit__flow___APropdef___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow__APropdef__before_flow_context_61d]))(self, var); /* before_flow_context= on <self:APropdef>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___APropdef___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:APropdef>*/
}
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow__APropdef__after_flow_context_61d]))(self, var1); /* after_flow_context= on <self:APropdef>*/
}
RET_LABEL:;
}
/* method flow#AExpr#after_flow_context for (self: AExpr): nullable FlowContext */
val* nit__flow___AExpr___after_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = self->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#AExpr#after_flow_context= for (self: AExpr, nullable FlowContext) */
void nit__flow___AExpr___after_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_nit__flow__AExpr___after_flow_context].val = p0; /* _after_flow_context on <self:AExpr> */
RET_LABEL:;
}
/* method flow#AVarAssignExpr#accept_flow_visitor for (self: AVarAssignExpr, FlowVisitor) */
void nit__flow___AVarAssignExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___AVarAssignExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AVarAssignExpr>*/
}
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_sub_flow]))(var_v); /* make_sub_flow on <var_v:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow__AExpr__after_flow_context_61d]))(self, var); /* after_flow_context= on <self:AVarAssignExpr>*/
}
RET_LABEL:;
}
/* method flow#AReassignFormExpr#accept_flow_visitor for (self: AReassignFormExpr, FlowVisitor) */
void nit__flow___AReassignFormExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___AReassignFormExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AReassignFormExpr>*/
}
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_sub_flow]))(var_v); /* make_sub_flow on <var_v:FlowVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow__AExpr__after_flow_context_61d]))(self, var); /* after_flow_context= on <self:AReassignFormExpr>*/
}
RET_LABEL:;
}
/* method flow#ABlockExpr#accept_flow_visitor for (self: ABlockExpr, FlowVisitor) */
void nit__flow___ABlockExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[AExpr] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var5 /* : FlowContext */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : FlowContext */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : FlowContext */;
val* var12 /* : ToolContext */;
val* var13 /* : Location */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : Message */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AExpr]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[AExpr]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[AExpr]>*/
}
var_e = var4;
{
var5 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
{
var6 = ((short int(*)(val* self))(var5->class->vft[COLOR_nit__flow__FlowContext__is_unreachable]))(var5); /* is_unreachable on <var5:FlowContext>*/
}
var7 = !var6;
if (var7){
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var_e); /* enter_visit on <var_v:FlowVisitor>*/
}
} else {
{
var8 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
{
var9 = ((short int(*)(val* self))(var8->class->vft[COLOR_nit__flow__FlowContext__is_already_unreachable]))(var8); /* is_already_unreachable on <var8:FlowContext>*/
}
var10 = !var9;
if (var10){
{
var11 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
{
((void(*)(val* self, short int p0))(var11->class->vft[COLOR_nit__flow__FlowContext__is_already_unreachable_61d]))(var11, 1); /* is_already_unreachable= on <var11:FlowContext>*/
}
{
var12 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__toolcontext]))(var_v); /* toolcontext on <var_v:FlowVisitor>*/
}
{
var13 = ((val*(*)(val* self))(var_e->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_e); /* hot_location on <var_e:AExpr>*/
}
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "Error: unreachable statement.";
var16 = standard___standard__NativeString___to_s_with_length(var15, 29l);
var14 = var16;
varonce = var14;
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1))(var12->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var12, var13, var14); /* error on <var12:ToolContext>*/
}
} else {
}
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method flow#AReturnExpr#accept_flow_visitor for (self: AReturnExpr, FlowVisitor) */
void nit__flow___AReturnExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___AReturnExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AReturnExpr>*/
}
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_unreachable_flow]))(var_v); /* make_unreachable_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AEscapeExpr#before_flow_context for (self: AEscapeExpr): nullable FlowContext */
val* nit__flow___AEscapeExpr___before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
val* var_after /* var after: nullable FlowContext */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[FlowContext] */;
val* var5 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(self); /* after_flow_context on <self:AEscapeExpr>*/
}
var_after = var1;
if (var_after == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_after->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_after, ((val*)NULL)); /* == on <var_after:nullable FlowContext>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_after->class->vft[COLOR_nit__flow__FlowContext__previous]))(var_after); /* previous on <var_after:nullable FlowContext(FlowContext)>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var4); /* first on <var4:Array[FlowContext]>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#AEscapeExpr#accept_flow_visitor for (self: AEscapeExpr, FlowVisitor) */
void nit__flow___AEscapeExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___AEscapeExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AEscapeExpr>*/
}
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_unreachable_flow]))(var_v); /* make_unreachable_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AAbortExpr#accept_flow_visitor for (self: AAbortExpr, FlowVisitor) */
void nit__flow___AAbortExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___AAbortExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AAbortExpr>*/
}
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_unreachable_flow]))(var_v); /* make_unreachable_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#ADoExpr#accept_flow_visitor for (self: ADoExpr, FlowVisitor) */
void nit__flow___ADoExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : nullable EscapeMark */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___ADoExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:ADoExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ADoExpr__break_mark]))(self); /* break_mark on <self:ADoExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__merge_breaks]))(var_v, var); /* merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AIfExpr#accept_flow_visitor for (self: AIfExpr, FlowVisitor) */
void nit__flow___AIfExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : nullable AExpr */;
val* var4 /* : FlowContext */;
val* var_after_then /* var after_then: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : nullable AExpr */;
val* var7 /* : FlowContext */;
val* var_after_else /* var after_else: FlowContext */;
val* var8 /* : FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_expr]))(self); /* n_expr on <self:AIfExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var1;
{
var2 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr); /* when_true on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var2); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then]))(self); /* n_then on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:FlowVisitor>*/
}
{
var4 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
var_after_then = var4;
{
var5 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr); /* when_false on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var5); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_else]))(self); /* n_else on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var6); /* enter_visit on <var_v:FlowVisitor>*/
}
{
var7 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
var_after_else = var7;
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_merge_flow]))(var_v, var_after_then, var_after_else); /* make_merge_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AIfexprExpr#accept_flow_visitor for (self: AIfexprExpr, FlowVisitor) */
void nit__flow___AIfexprExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : AExpr */;
val* var4 /* : FlowContext */;
val* var_after_then /* var after_then: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : AExpr */;
val* var7 /* : FlowContext */;
val* var_after_else /* var after_else: FlowContext */;
val* var8 /* : FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_expr]))(self); /* n_expr on <self:AIfexprExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var1;
{
var2 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr); /* when_true on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var2); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_then]))(self); /* n_then on <self:AIfexprExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:FlowVisitor>*/
}
{
var4 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
var_after_then = var4;
{
var5 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr); /* when_false on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var5); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_else]))(self); /* n_else on <self:AIfexprExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var6); /* enter_visit on <var_v:FlowVisitor>*/
}
{
var7 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
var_after_else = var7;
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_merge_flow]))(var_v, var_after_then, var_after_else); /* make_merge_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AWhileExpr#accept_flow_visitor for (self: AWhileExpr, FlowVisitor) */
void nit__flow___AWhileExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var1 /* : AExpr */;
val* var2 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var3 /* : FlowContext */;
val* var4 /* : nullable AExpr */;
val* var5 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var6 /* : nullable EscapeMark */;
val* var7 /* : FlowContext */;
val* var8 /* : nullable EscapeMark */;
var_v = p0;
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_sub_flow]))(var_v); /* make_sub_flow on <var_v:FlowVisitor>*/
}
var_before_loop = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_expr]))(self); /* n_expr on <self:AWhileExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var1); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var2;
{
var3 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr); /* when_true on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var3); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_block]))(self); /* n_block on <self:AWhileExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:FlowVisitor>*/
}
{
var5 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
var_after_block = var5;
{
((void(*)(val* self, val* p0))(var_before_loop->class->vft[COLOR_nit__flow__FlowContext__add_loop]))(var_before_loop, var_after_block); /* add_loop on <var_before_loop:FlowContext>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AWhileExpr__continue_mark]))(self); /* continue_mark on <self:AWhileExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__merge_continues_to]))(var_v, var_before_loop, var6); /* merge_continues_to on <var_v:FlowVisitor>*/
}
{
var7 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr); /* when_false on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var7); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AWhileExpr__break_mark]))(self); /* break_mark on <self:AWhileExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__merge_breaks]))(var_v, var8); /* merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#ALoopExpr#accept_flow_visitor for (self: ALoopExpr, FlowVisitor) */
void nit__flow___ALoopExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var1 /* : nullable AExpr */;
val* var2 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var3 /* : nullable EscapeMark */;
val* var4 /* : FlowContext */;
val* var5 /* : nullable EscapeMark */;
var_v = p0;
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_sub_flow]))(var_v); /* make_sub_flow on <var_v:FlowVisitor>*/
}
var_before_loop = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_block]))(self); /* n_block on <self:ALoopExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:FlowVisitor>*/
}
{
var2 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
var_after_block = var2;
{
((void(*)(val* self, val* p0))(var_before_loop->class->vft[COLOR_nit__flow__FlowContext__add_loop]))(var_before_loop, var_after_block); /* add_loop on <var_before_loop:FlowContext>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ALoopExpr__continue_mark]))(self); /* continue_mark on <self:ALoopExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__merge_continues_to]))(var_v, var_before_loop, var3); /* merge_continues_to on <var_v:FlowVisitor>*/
}
{
var4 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_unreachable_flow]))(var_v); /* make_unreachable_flow on <var_v:FlowVisitor>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ALoopExpr__break_mark]))(self); /* break_mark on <self:ALoopExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__merge_breaks]))(var_v, var5); /* merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AForExpr#accept_flow_visitor for (self: AForExpr, FlowVisitor) */
void nit__flow___AForExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var2 /* : nullable AExpr */;
val* var3 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var7 /* : nullable EscapeMark */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_expr]))(self); /* n_expr on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:FlowVisitor>*/
}
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_sub_flow]))(var_v); /* make_sub_flow on <var_v:FlowVisitor>*/
}
var_before_loop = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_block]))(self); /* n_block on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:FlowVisitor>*/
}
{
var3 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
var_after_block = var3;
{
((void(*)(val* self, val* p0))(var_before_loop->class->vft[COLOR_nit__flow__FlowContext__add_loop]))(var_before_loop, var_after_block); /* add_loop on <var_before_loop:FlowContext>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__continue_mark]))(self); /* continue_mark on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__merge_continues_to]))(var_v, var_before_loop, var4); /* merge_continues_to on <var_v:FlowVisitor>*/
}
{
var5 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context]))(var_v); /* current_flow_context on <var_v:FlowVisitor>*/
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_merge_flow]))(var_v, var5, var_before_loop); /* make_merge_flow on <var_v:FlowVisitor>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__break_mark]))(self); /* break_mark on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__merge_breaks]))(var_v, var7); /* merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AWithExpr#accept_flow_visitor for (self: AWithExpr, FlowVisitor) */
void nit__flow___AWithExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : nullable EscapeMark */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___AWithExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AWithExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AWithExpr__break_mark]))(self); /* break_mark on <self:AWithExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__merge_breaks]))(var_v, var); /* merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AAssertExpr#accept_flow_visitor for (self: AAssertExpr, FlowVisitor) */
void nit__flow___AAssertExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : nullable AExpr */;
val* var4 /* : FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_expr]))(self); /* n_expr on <self:AAssertExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var1;
{
var2 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr); /* when_false on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var2); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_else]))(self); /* n_else on <self:AAssertExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:FlowVisitor>*/
}
{
var4 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr); /* when_true on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var4); /* current_flow_context= on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AOrExpr#accept_flow_visitor for (self: AOrExpr, FlowVisitor) */
void nit__flow___AOrExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : AExpr */;
val* var4 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var7 /* : FlowContext */;
val* var_merge_true /* var merge_true: FlowContext */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : FlowContext */;
val* var12 /* : FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AOrExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var1;
{
var2 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr); /* when_false on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var2); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AOrExpr>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var3); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr2 = var4;
{
var5 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr); /* when_true on <var_after_expr:FlowContext>*/
}
{
var6 = ((val*(*)(val* self))(var_after_expr2->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr2); /* when_true on <var_after_expr2:FlowContext>*/
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_merge_flow]))(var_v, var5, var6); /* make_merge_flow on <var_v:FlowVisitor>*/
}
var_merge_true = var7;
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "OR TRUE";
var10 = standard___standard__NativeString___to_s_with_length(var9, 7l);
var8 = var10;
varonce = var8;
}
{
((void(*)(val* self, val* p0))(var_merge_true->class->vft[COLOR_nit__flow__FlowContext__name_61d]))(var_merge_true, var8); /* name= on <var_merge_true:FlowContext>*/
}
{
var11 = ((val*(*)(val* self))(var_after_expr2->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr2); /* when_false on <var_after_expr2:FlowContext>*/
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_true_false_flow]))(var_v, var_merge_true, var11); /* make_true_false_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AImpliesExpr#accept_flow_visitor for (self: AImpliesExpr, FlowVisitor) */
void nit__flow___AImpliesExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : AExpr */;
val* var4 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var7 /* : FlowContext */;
val* var_merge_true /* var merge_true: FlowContext */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : FlowContext */;
val* var12 /* : FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AImpliesExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var1;
{
var2 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr); /* when_true on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var2); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AImpliesExpr>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var3); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr2 = var4;
{
var5 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr); /* when_false on <var_after_expr:FlowContext>*/
}
{
var6 = ((val*(*)(val* self))(var_after_expr2->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr2); /* when_true on <var_after_expr2:FlowContext>*/
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_merge_flow]))(var_v, var5, var6); /* make_merge_flow on <var_v:FlowVisitor>*/
}
var_merge_true = var7;
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "OR TRUE";
var10 = standard___standard__NativeString___to_s_with_length(var9, 7l);
var8 = var10;
varonce = var8;
}
{
((void(*)(val* self, val* p0))(var_merge_true->class->vft[COLOR_nit__flow__FlowContext__name_61d]))(var_merge_true, var8); /* name= on <var_merge_true:FlowContext>*/
}
{
var11 = ((val*(*)(val* self))(var_after_expr2->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr2); /* when_false on <var_after_expr2:FlowContext>*/
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_true_false_flow]))(var_v, var_merge_true, var11); /* make_true_false_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AAndExpr#accept_flow_visitor for (self: AAndExpr, FlowVisitor) */
void nit__flow___AAndExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : AExpr */;
val* var4 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var7 /* : FlowContext */;
val* var_merge_false /* var merge_false: FlowContext */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : FlowContext */;
val* var12 /* : FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AAndExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var1;
{
var2 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr); /* when_true on <var_after_expr:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var2); /* current_flow_context= on <var_v:FlowVisitor>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AAndExpr>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var3); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr2 = var4;
{
var5 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr); /* when_false on <var_after_expr:FlowContext>*/
}
{
var6 = ((val*(*)(val* self))(var_after_expr2->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr2); /* when_false on <var_after_expr2:FlowContext>*/
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_merge_flow]))(var_v, var5, var6); /* make_merge_flow on <var_v:FlowVisitor>*/
}
var_merge_false = var7;
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "AND FALSE";
var10 = standard___standard__NativeString___to_s_with_length(var9, 9l);
var8 = var10;
varonce = var8;
}
{
((void(*)(val* self, val* p0))(var_merge_false->class->vft[COLOR_nit__flow__FlowContext__name_61d]))(var_merge_false, var8); /* name= on <var_merge_false:FlowContext>*/
}
{
var11 = ((val*(*)(val* self))(var_after_expr2->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr2); /* when_true on <var_after_expr2:FlowContext>*/
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_true_false_flow]))(var_v, var11, var_merge_false); /* make_true_false_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#ANotExpr#accept_flow_visitor for (self: ANotExpr, FlowVisitor) */
void nit__flow___ANotExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : FlowContext */;
val* var4 /* : FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANotExpr__n_expr]))(self); /* n_expr on <self:ANotExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var1;
{
var2 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var_after_expr); /* when_false on <var_after_expr:FlowContext>*/
}
{
var3 = ((val*(*)(val* self))(var_after_expr->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var_after_expr); /* when_true on <var_after_expr:FlowContext>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_true_false_flow]))(var_v, var2, var3); /* make_true_false_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AOrElseExpr#accept_flow_visitor for (self: AOrElseExpr, FlowVisitor) */
void nit__flow___AOrElseExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___AOrElseExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AOrElseExpr>*/
}
RET_LABEL:;
}
/* method flow#AEqExpr#accept_flow_visitor for (self: AEqExpr, FlowVisitor) */
void nit__flow___AEqExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___AEqExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AEqExpr>*/
}
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_sub_true_false_flow]))(var_v); /* make_sub_true_false_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#ANeExpr#accept_flow_visitor for (self: ANeExpr, FlowVisitor) */
void nit__flow___ANeExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___ANeExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:ANeExpr>*/
}
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_sub_true_false_flow]))(var_v); /* make_sub_true_false_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AIsaExpr#accept_flow_visitor for (self: AIsaExpr, FlowVisitor) */
void nit__flow___AIsaExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__flow___AIsaExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AIsaExpr>*/
}
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__make_sub_true_false_flow]))(var_v); /* make_sub_true_false_flow on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AParExpr#accept_flow_visitor for (self: AParExpr, FlowVisitor) */
void nit__flow___AParExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AParExpr__n_expr]))(self); /* n_expr on <self:AParExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var1;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var_after_expr); /* current_flow_context= on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AOnceExpr#accept_flow_visitor for (self: AOnceExpr, FlowVisitor) */
void nit__flow___AOnceExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AOnceExpr__n_expr]))(self); /* n_expr on <self:AOnceExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:FlowVisitor>*/
}
var_after_expr = var1;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__flow__FlowVisitor__current_flow_context_61d]))(var_v, var_after_expr); /* current_flow_context= on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
