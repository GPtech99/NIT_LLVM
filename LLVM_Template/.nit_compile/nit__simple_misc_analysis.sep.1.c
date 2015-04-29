#include "nit__simple_misc_analysis.sep.0.h"
/* method simple_misc_analysis#ToolContext#simple_misc_analysis_phase for (self: ToolContext): Phase */
val* nit__simple_misc_analysis___ToolContext___simple_misc_analysis_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__simple_misc_analysis__ToolContext___simple_misc_analysis_phase].val; /* _simple_misc_analysis_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _simple_misc_analysis_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__simple_misc_analysis, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#ToolContext#simple_misc_analysis_phase= for (self: ToolContext, Phase) */
void nit__simple_misc_analysis___ToolContext___simple_misc_analysis_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__simple_misc_analysis__ToolContext___simple_misc_analysis_phase].val = p0; /* _simple_misc_analysis_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscAnalysisPhase#process_nmodule for (self: SimpleMiscAnalysisPhase, AModule) */
void nit__simple_misc_analysis___nit__simple_misc_analysis__SimpleMiscAnalysisPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
var_nmodule = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SimpleMiscAnalysisPhase>*/
}
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__simple_misc_analysis__AModule__do_simple_misc_analysis]))(var_nmodule, var); /* do_simple_misc_analysis on <var_nmodule:AModule>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AModule#do_simple_misc_analysis for (self: AModule, ToolContext) */
void nit__simple_misc_analysis___AModule___do_simple_misc_analysis(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : SimpleMiscVisitor */;
val* var_v /* var v: SimpleMiscVisitor */;
var_toolcontext = p0;
var = NEW_nit__simple_misc_analysis__SimpleMiscVisitor(&type_nit__simple_misc_analysis__SimpleMiscVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:SimpleMiscVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:SimpleMiscVisitor>*/
}
var_v = var;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, self); /* enter_visit on <var_v:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#visit for (self: SimpleMiscVisitor, ANode) */
void nit__simple_misc_analysis___nit__simple_misc_analysis__SimpleMiscVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__simple_misc_analysis__ANode__accept_simple_misc]))(var_n, self); /* accept_simple_misc on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#once_count for (self: SimpleMiscVisitor): Int */
long nit__simple_misc_analysis___nit__simple_misc_analysis__SimpleMiscVisitor___once_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor___once_count].l; /* _once_count on <self:SimpleMiscVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#SimpleMiscVisitor#once_count= for (self: SimpleMiscVisitor, Int) */
void nit__simple_misc_analysis___nit__simple_misc_analysis__SimpleMiscVisitor___once_count_61d(val* self, long p0) {
self->attrs[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor___once_count].l = p0; /* _once_count on <self:SimpleMiscVisitor> */
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#toolcontext for (self: SimpleMiscVisitor): ToolContext */
val* nit__simple_misc_analysis___nit__simple_misc_analysis__SimpleMiscVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor___toolcontext].val; /* _toolcontext on <self:SimpleMiscVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__simple_misc_analysis, 56);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#SimpleMiscVisitor#toolcontext= for (self: SimpleMiscVisitor, ToolContext) */
void nit__simple_misc_analysis___nit__simple_misc_analysis__SimpleMiscVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor___toolcontext].val = p0; /* _toolcontext on <self:SimpleMiscVisitor> */
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#warning for (self: SimpleMiscVisitor, ANode, String, String) */
void nit__simple_misc_analysis___nit__simple_misc_analysis__SimpleMiscVisitor___warning(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: ANode */;
val* var_tag /* var tag: String */;
val* var_msg /* var msg: String */;
val* var /* : ToolContext */;
val* var1 /* : Location */;
val* var2 /* : nullable Message */;
var_node = p0;
var_tag = p1;
var_msg = p2;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__toolcontext]))(self); /* toolcontext on <self:SimpleMiscVisitor>*/
}
{
var1 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:ANode>*/
}
{
var2 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var->class->vft[COLOR_nit__toolcontext__ToolContext__warning]))(var, var1, var_tag, var_msg); /* warning on <var:ToolContext>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#init for (self: SimpleMiscVisitor) */
void nit__simple_misc_analysis___nit__simple_misc_analysis__SimpleMiscVisitor___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__simple_misc_analysis___nit__simple_misc_analysis__SimpleMiscVisitor___standard__kernel__Object__init]))(self); /* init on <self:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#ANode#accept_simple_misc for (self: ANode, SimpleMiscVisitor) */
void nit__simple_misc_analysis___ANode___accept_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__simple_misc_analysis__ANode__after_simple_misc]))(self, var_v); /* after_simple_misc on <self:ANode>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#ANode#after_simple_misc for (self: ANode, SimpleMiscVisitor) */
void nit__simple_misc_analysis___ANode___after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method simple_misc_analysis#ASignature#after_simple_misc for (self: ASignature, SimpleMiscVisitor) */
void nit__simple_misc_analysis___ASignature___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
short int var /* : Bool */;
val* var1 /* : nullable TOpar */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : ANodes[AParam] */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_opar]))(self); /* n_opar on <self:ASignature>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable TOpar>*/
var2 = var3;
}
var_ = var2;
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(self); /* n_params on <self:ASignature>*/
}
{
var5 = ((short int(*)(val* self))(var4->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var4); /* is_empty on <var4:ANodes[AParam]>*/
}
var = var5;
} else {
var = var_;
}
if (var){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "parentheses";
var8 = standard___standard__NativeString___to_s_with_length(var7, 11l);
var6 = var8;
varonce = var6;
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Warning: superfluous parentheses.";
var12 = standard___standard__NativeString___to_s_with_length(var11, 33l);
var10 = var12;
varonce9 = var10;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var6, var10); /* warning on <var_v:SimpleMiscVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AExpr#warn_parentheses for (self: AExpr, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AExpr___warn_parentheses(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method simple_misc_analysis#AParExpr#warn_parentheses for (self: AParExpr, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AParExpr___AExpr__warn_parentheses(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "parentheses";
var2 = standard___standard__NativeString___to_s_with_length(var1, 11l);
var = var2;
varonce = var;
}
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "Warning: superfluous parentheses.";
var6 = standard___standard__NativeString___to_s_with_length(var5, 33l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var, var4); /* warning on <var_v:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AParExprs#after_simple_misc for (self: AParExprs, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AParExprs___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : ANodes[AExpr] */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:AParExprs>*/
}
{
var1 = ((short int(*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var); /* is_empty on <var:ANodes[AExpr]>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "parentheses";
var4 = standard___standard__NativeString___to_s_with_length(var3, 11l);
var2 = var4;
varonce = var2;
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "Warning: superfluous parentheses.";
var8 = standard___standard__NativeString___to_s_with_length(var7, 33l);
var6 = var8;
varonce5 = var6;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var2, var6); /* warning on <var_v:SimpleMiscVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AReturnExpr#after_simple_misc for (self: AReturnExpr, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AReturnExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var_e /* var e: nullable AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReturnExpr__n_expr]))(self); /* n_expr on <self:AReturnExpr>*/
}
var_e = var;
if (var_e == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable AExpr>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_e->class->vft[COLOR_nit__simple_misc_analysis__AExpr__warn_parentheses]))(var_e, var_v); /* warn_parentheses on <var_e:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AEscapeExpr#after_simple_misc for (self: AEscapeExpr, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AEscapeExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var_e /* var e: nullable AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AEscapeExpr__n_expr]))(self); /* n_expr on <self:AEscapeExpr>*/
}
var_e = var;
if (var_e == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable AExpr>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_e->class->vft[COLOR_nit__simple_misc_analysis__AExpr__warn_parentheses]))(var_e, var_v); /* warn_parentheses on <var_e:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AWhileExpr#after_simple_misc for (self: AWhileExpr, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AWhileExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_expr]))(self); /* n_expr on <self:AWhileExpr>*/
}
/* <var:AExpr> isa ATrueExpr */
cltype = type_nit__ATrueExpr.color;
idtype = type_nit__ATrueExpr.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "loop";
var4 = standard___standard__NativeString___to_s_with_length(var3, 4l);
var2 = var4;
varonce = var2;
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "Warning: use `loop` instead of `while true do`.";
var8 = standard___standard__NativeString___to_s_with_length(var7, 47l);
var6 = var8;
varonce5 = var6;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var2, var6); /* warning on <var_v:SimpleMiscVisitor>*/
}
} else {
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_expr]))(self); /* n_expr on <self:AWhileExpr>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__simple_misc_analysis__AExpr__warn_parentheses]))(var9, var_v); /* warn_parentheses on <var9:AExpr>*/
}
}
RET_LABEL:;
}
/* method simple_misc_analysis#AForExpr#after_simple_misc for (self: AForExpr, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AForExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_expr]))(self); /* n_expr on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__simple_misc_analysis__AExpr__warn_parentheses]))(var, var_v); /* warn_parentheses on <var:AExpr>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AIfExpr#after_simple_misc for (self: AIfExpr, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AIfExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_expr]))(self); /* n_expr on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__simple_misc_analysis__AExpr__warn_parentheses]))(var, var_v); /* warn_parentheses on <var:AExpr>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AIfexprExpr#after_simple_misc for (self: AIfexprExpr, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AIfexprExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_expr]))(self); /* n_expr on <self:AIfexprExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__simple_misc_analysis__AExpr__warn_parentheses]))(var, var_v); /* warn_parentheses on <var:AExpr>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AOnceExpr#accept_simple_misc for (self: AOnceExpr, SimpleMiscVisitor) */
void nit__simple_misc_analysis___AOnceExpr___ANode__accept_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
var_v = p0;
{
var = ((long(*)(val* self))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__once_count]))(var_v); /* once_count on <var_v:SimpleMiscVisitor>*/
}
{
{ /* Inline kernel#Int#> (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var4 = var > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "nested-once";
var7 = standard___standard__NativeString___to_s_with_length(var6, 11l);
var5 = var7;
varonce = var5;
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Warning: useless once in a once expression.";
var11 = standard___standard__NativeString___to_s_with_length(var10, 43l);
var9 = var11;
varonce8 = var9;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var5, var9); /* warning on <var_v:SimpleMiscVisitor>*/
}
} else {
}
{
var12 = ((long(*)(val* self))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__once_count]))(var_v); /* once_count on <var_v:SimpleMiscVisitor>*/
}
{
{ /* Inline kernel#Int#+ (var12,1l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var19 = var12 + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__once_count_61d]))(var_v, var13); /* once_count= on <var_v:SimpleMiscVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__simple_misc_analysis___AOnceExpr___ANode__accept_simple_misc]))(self, p0); /* accept_simple_misc on <self:AOnceExpr>*/
}
{
var20 = ((long(*)(val* self))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__once_count]))(var_v); /* once_count on <var_v:SimpleMiscVisitor>*/
}
{
{ /* Inline kernel#Int#- (var20,1l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var27 = var20 - 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__simple_misc_analysis__SimpleMiscVisitor__once_count_61d]))(var_v, var21); /* once_count= on <var_v:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
