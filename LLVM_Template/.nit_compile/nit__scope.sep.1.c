#include "nit__scope.sep.0.h"
/* method scope#ToolContext#scope_phase for (self: ToolContext): Phase */
val* nit__scope___ToolContext___scope_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ToolContext#scope_phase= for (self: ToolContext, Phase) */
void nit__scope___ToolContext___scope_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ToolContext___scope_phase].val = p0; /* _scope_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method scope#ScopePhase#process_npropdef for (self: ScopePhase, APropdef) */
void nit__scope___nit__scope__ScopePhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
var_npropdef = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:ScopePhase>*/
}
{
((void(*)(val* self, val* p0))(var_npropdef->class->vft[COLOR_nit__scope__APropdef__do_scope]))(var_npropdef, var); /* do_scope on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method scope#Variable#name for (self: Variable): String */
val* nit___nit__Variable___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <self:Variable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#name= for (self: Variable, String) */
void nit___nit__Variable___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__Variable___name].val = p0; /* _name on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#to_s for (self: Variable): String */
val* nit___nit__Variable___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__Variable__name]))(self); /* name on <self:Variable>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#Variable#location for (self: Variable): nullable Location */
val* nit___nit__Variable___location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_nit__scope__Variable___location].val; /* _location on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#location= for (self: Variable, nullable Location) */
void nit___nit__Variable___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__Variable___location].val = p0; /* _location on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#warn_unread for (self: Variable): Bool */
short int nit___nit__Variable___warn_unread(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__scope__Variable___warn_unread].s; /* _warn_unread on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#warn_unread= for (self: Variable, Bool) */
void nit___nit__Variable___warn_unread_61d(val* self, short int p0) {
self->attrs[COLOR_nit__scope__Variable___warn_unread].s = p0; /* _warn_unread on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#init for (self: Variable) */
void nit___nit__Variable___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Variable___standard__kernel__Object__init]))(self); /* init on <self:Variable>*/
}
RET_LABEL:;
}
/* method scope#EscapeMark#name for (self: EscapeMark): nullable String */
val* nit___nit__EscapeMark___name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__scope__EscapeMark___name].val; /* _name on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#name= for (self: EscapeMark, nullable String) */
void nit___nit__EscapeMark___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__EscapeMark___name].val = p0; /* _name on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#continue_mark for (self: EscapeMark): nullable EscapeMark */
val* nit___nit__EscapeMark___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#continue_mark= for (self: EscapeMark, nullable EscapeMark) */
void nit___nit__EscapeMark___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val = p0; /* _continue_mark on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#escapes for (self: EscapeMark): Array[AEscapeExpr] */
val* nit___nit__EscapeMark___escapes(val* self) {
val* var /* : Array[AEscapeExpr] */;
val* var1 /* : Array[AEscapeExpr] */;
var1 = self->attrs[COLOR_nit__scope__EscapeMark___escapes].val; /* _escapes on <self:EscapeMark> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 58);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#escapes= for (self: EscapeMark, Array[AEscapeExpr]) */
void nit___nit__EscapeMark___escapes_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__EscapeMark___escapes].val = p0; /* _escapes on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#init for (self: EscapeMark) */
void nit___nit__EscapeMark___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__EscapeMark___standard__kernel__Object__init]))(self); /* init on <self:EscapeMark>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#toolcontext for (self: ScopeVisitor): ToolContext */
val* nit__scope___nit__scope__ScopeVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 70);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#toolcontext= for (self: ScopeVisitor, ToolContext) */
void nit__scope___nit__scope__ScopeVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ScopeVisitor___toolcontext].val = p0; /* _toolcontext on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope#ScopeVisitor#selfvariable for (self: ScopeVisitor): Variable */
val* nit__scope___nit__scope__ScopeVisitor___selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_nit__scope__ScopeVisitor___selfvariable].val; /* _selfvariable on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 73);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#selfvariable= for (self: ScopeVisitor, Variable) */
void nit__scope___nit__scope__ScopeVisitor___selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ScopeVisitor___selfvariable].val = p0; /* _selfvariable on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope#ScopeVisitor#init for (self: ScopeVisitor) */
void nit__scope___nit__scope__ScopeVisitor___standard__kernel__Object__init(val* self) {
val* var /* : List[Scope] */;
val* var1 /* : Scope */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__scope___nit__scope__ScopeVisitor___standard__kernel__Object__init]))(self); /* init on <self:ScopeVisitor>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(self); /* scopes on <self:ScopeVisitor>*/
}
var1 = NEW_nit__scope__Scope(&type_nit__scope__Scope);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Scope>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var, var1); /* add on <var:List[Scope]>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#scopes for (self: ScopeVisitor): List[Scope] */
val* nit__scope___nit__scope__ScopeVisitor___scopes(val* self) {
val* var /* : List[Scope] */;
val* var1 /* : List[Scope] */;
var1 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#scopes= for (self: ScopeVisitor, List[Scope]) */
void nit__scope___nit__scope__ScopeVisitor___scopes_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val = p0; /* _scopes on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope#ScopeVisitor#shift_scope for (self: ScopeVisitor) */
void nit__scope___nit__scope__ScopeVisitor___shift_scope(val* self) {
val* var /* : List[Scope] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : List[Scope] */;
val* var4 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var5 /* : HashMap[String, Variable] */;
val* var6 /* : Collection[nullable Object] */;
val* var_ /* var : RemovableCollection[Variable] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[Variable] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_v /* var v: Variable */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var13 /* : nullable Location */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var18 /* : NativeArray[String] */;
static val* varonce17;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : nullable Message */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(self); /* scopes on <self:ScopeVisitor>*/
}
{
var1 = ((short int(*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var); /* is_empty on <var:List[Scope]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 86);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(self); /* scopes on <self:ScopeVisitor>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__abstract_collection__Sequence__shift]))(var3); /* shift on <var3:List[Scope]>*/
}
var_scope = var4;
{
var5 = ((val*(*)(val* self))(var_scope->class->vft[COLOR_nit__scope__Scope__variables]))(var_scope); /* variables on <var_scope:Scope>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__abstract_collection__MapRead__values]))(var5); /* values on <var5:HashMap[String, Variable]>*/
}
var_ = var6;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[Variable]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[Variable]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[Variable]>*/
}
var_v = var10;
{
var11 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__scope__Variable__warn_unread]))(var_v); /* warn_unread on <var_v:Variable>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__toolcontext]))(self); /* toolcontext on <self:ScopeVisitor>*/
}
{
var13 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__scope__Variable__location]))(var_v); /* location on <var_v:Variable>*/
}
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "unread-variable";
var16 = standard___standard__NativeString___to_s_with_length(var15, 15l);
var14 = var16;
varonce = var14;
}
if (unlikely(varonce17==NULL)) {
var18 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "Warning: local variable ";
var22 = standard___standard__NativeString___to_s_with_length(var21, 24l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " is never read.";
var26 = standard___standard__NativeString___to_s_with_length(var25, 15l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var18)->values[2]=var24;
} else {
var18 = varonce17;
varonce17 = NULL;
}
{
var27 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__scope__Variable__name]))(var_v); /* name on <var_v:Variable>*/
}
((struct instance_standard__NativeArray*)var18)->values[1]=var27;
{
var28 = ((val*(*)(val* self))(var18->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce17 = var18;
{
var29 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var12->class->vft[COLOR_nit__toolcontext__ToolContext__advice]))(var12, var13, var14, var28); /* advice on <var12:ToolContext>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[Variable]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[Variable]>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#register_variable for (self: ScopeVisitor, ANode, Variable): Bool */
short int nit__scope___nit__scope__ScopeVisitor___register_variable(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_variable /* var variable: Variable */;
val* var1 /* : String */;
val* var_name /* var name: String */;
val* var2 /* : nullable Variable */;
val* var_found /* var found: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var15 /* : List[Scope] */;
val* var16 /* : nullable Object */;
val* var17 /* : HashMap[String, Variable] */;
val* var18 /* : Location */;
var_node = p0;
var_variable = p1;
{
var1 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__scope__Variable__name]))(var_variable); /* name on <var_variable:Variable>*/
}
var_name = var1;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ScopeVisitor__search_variable]))(self, var_name); /* search_variable on <self:ScopeVisitor>*/
}
var_found = var2;
if (var_found == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_found->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_found, ((val*)NULL)); /* != on <var_found:nullable Variable>*/
var3 = var4;
}
if (var3){
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "Error: a variable named `";
var9 = standard___standard__NativeString___to_s_with_length(var8, 25l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "` already exists.";
var13 = standard___standard__NativeString___to_s_with_length(var12, 17l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var5)->values[2]=var11;
} else {
var5 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var_name;
{
var14 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__scope__ScopeVisitor__error]))(self, var_node, var14); /* error on <self:ScopeVisitor>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(self); /* scopes on <self:ScopeVisitor>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var15); /* first on <var15:List[Scope]>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__scope__Scope__variables]))(var16); /* variables on <var16:nullable Object(Scope)>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var17->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var17, var_name, var_variable); /* []= on <var17:HashMap[String, Variable]>*/
}
{
var18 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_node); /* location on <var_node:ANode>*/
}
{
((void(*)(val* self, val* p0))(var_variable->class->vft[COLOR_nit__scope__Variable__location_61d]))(var_variable, var18); /* location= on <var_variable:Variable>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#search_variable for (self: ScopeVisitor, String): nullable Variable */
val* nit__scope___nit__scope__ScopeVisitor___search_variable(val* self, val* p0) {
val* var /* : nullable Variable */;
val* var_name /* var name: String */;
val* var1 /* : List[Scope] */;
val* var_ /* var : List[Scope] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ListIterator[Scope] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var6 /* : nullable Variable */;
val* var_res /* var res: nullable Variable */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_name = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(self); /* scopes on <self:ScopeVisitor>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:List[Scope]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ListIterator[Scope]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ListIterator[Scope]>*/
}
var_scope = var5;
{
var6 = ((val*(*)(val* self, val* p0))(var_scope->class->vft[COLOR_nit__scope__Scope__get_variable]))(var_scope, var_name); /* get_variable on <var_scope:Scope>*/
}
var_res = var6;
if (var_res == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable Variable>*/
var7 = var8;
}
if (var7){
var = var_res;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ListIterator[Scope]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#visit for (self: ScopeVisitor, ANode) */
void nit__scope___nit__scope__ScopeVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__scope__ANode__accept_scope_visitor]))(var_n, self); /* accept_scope_visitor on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#enter_visit_block for (self: ScopeVisitor, nullable AExpr, nullable EscapeMark) */
void nit__scope___nit__scope__ScopeVisitor___enter_visit_block(val* self, val* p0, val* p1) {
val* var_node /* var node: nullable AExpr */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Scope */;
val* var_scope /* var scope: Scope */;
val* var3 /* : List[Scope] */;
var_node = p0;
var_escapemark = p1;
if (var_node == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, ((val*)NULL)); /* == on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
var2 = NEW_nit__scope__Scope(&type_nit__scope__Scope);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Scope>*/
}
var_scope = var2;
{
((void(*)(val* self, val* p0))(var_scope->class->vft[COLOR_nit__scope__Scope__escapemark_61d]))(var_scope, var_escapemark); /* escapemark= on <var_scope:Scope>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(self); /* scopes on <self:ScopeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__Sequence__unshift]))(var3, var_scope); /* unshift on <var3:List[Scope]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(self, var_node); /* enter_visit on <self:ScopeVisitor>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__shift_scope]))(self); /* shift_scope on <self:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#search_label for (self: ScopeVisitor, String): nullable EscapeMark */
val* nit__scope___nit__scope__ScopeVisitor___search_label(val* self, val* p0) {
val* var /* : nullable EscapeMark */;
val* var_name /* var name: String */;
val* var1 /* : List[Scope] */;
val* var_ /* var : List[Scope] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ListIterator[Scope] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var6 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_10 /* var : Bool */;
val* var11 /* : nullable String */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
var_name = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(self); /* scopes on <self:ScopeVisitor>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:List[Scope]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ListIterator[Scope]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ListIterator[Scope]>*/
}
var_scope = var5;
{
var6 = ((val*(*)(val* self))(var_scope->class->vft[COLOR_nit__scope__Scope__escapemark]))(var_scope); /* escapemark on <var_scope:Scope>*/
}
var_res = var6;
if (var_res == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable EscapeMark>*/
var8 = var9;
}
var_10 = var8;
if (var8){
{
var11 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__scope__EscapeMark__name]))(var_res); /* name on <var_res:nullable EscapeMark(EscapeMark)>*/
}
if (var11 == NULL) {
var12 = 0; /* <var_name:String> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_name); /* == on <var11:nullable String>*/
var12 = var13;
}
var7 = var12;
} else {
var7 = var_10;
}
if (var7){
var = var_res;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ListIterator[Scope]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#make_escape_mark for (self: ScopeVisitor, nullable ALabel, Bool): EscapeMark */
val* nit__scope___nit__scope__ScopeVisitor___make_escape_mark(val* self, val* p0, short int p1) {
val* var /* : EscapeMark */;
val* var_nlabel /* var nlabel: nullable ALabel */;
short int var_for_loop /* var for_loop: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var_name /* var name: nullable String */;
val* var20 /* : String */;
val* var21 /* : nullable EscapeMark */;
val* var_found /* var found: nullable EscapeMark */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : String */;
val* var35 /* : EscapeMark */;
val* var_res36 /* var res: EscapeMark */;
val* var37 /* : EscapeMark */;
var_nlabel = p0;
var_for_loop = p1;
if (var_nlabel == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_nlabel->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nlabel, ((val*)NULL)); /* != on <var_nlabel:nullable ALabel>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(var_nlabel->class->vft[COLOR_nit__parser_nodes__ALabel__n_id]))(var_nlabel); /* n_id on <var_nlabel:nullable ALabel(ALabel)>*/
}
var_nid = var3;
if (var_nid == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_nid->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nid, ((val*)NULL)); /* == on <var_nid:nullable TId>*/
var4 = var5;
}
if (var4){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var8 = standard___standard__NativeString___to_s_with_length(var7, 0l);
var6 = var8;
varonce = var6;
}
{
var9 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ScopeVisitor__search_label]))(self, var6); /* search_label on <self:ScopeVisitor>*/
}
var_res = var9;
if (var_res == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable EscapeMark>*/
var10 = var11;
}
if (var10){
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Syntax Error: anonymous label already defined.";
var15 = standard___standard__NativeString___to_s_with_length(var14, 46l);
var13 = var15;
varonce12 = var13;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__scope__ScopeVisitor__error]))(self, var_nlabel, var13); /* error on <self:ScopeVisitor>*/
}
} else {
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "";
var19 = standard___standard__NativeString___to_s_with_length(var18, 0l);
var17 = var19;
varonce16 = var17;
}
var_name = var17;
} else {
{
var20 = ((val*(*)(val* self))(var_nid->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_nid); /* text on <var_nid:nullable TId(TId)>*/
}
var_name = var20;
{
var21 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ScopeVisitor__search_label]))(self, var_name); /* search_label on <self:ScopeVisitor>*/
}
var_found = var21;
if (var_found == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
var23 = ((short int(*)(val* self, val* p0))(var_found->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_found, ((val*)NULL)); /* != on <var_found:nullable EscapeMark>*/
var22 = var23;
}
if (var22){
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Syntax Error: label `";
var29 = standard___standard__NativeString___to_s_with_length(var28, 21l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "` already defined.";
var33 = standard___standard__NativeString___to_s_with_length(var32, 18l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var_name;
{
var34 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__scope__ScopeVisitor__error]))(self, var_nlabel, var34); /* error on <self:ScopeVisitor>*/
}
} else {
}
}
} else {
var_name = ((val*)NULL);
}
var35 = NEW_nit__EscapeMark(&type_nit__EscapeMark);
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_nit__scope__EscapeMark__name_61d]))(var35, var_name); /* name= on <var35:EscapeMark>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_standard__kernel__Object__init]))(var35); /* init on <var35:EscapeMark>*/
}
var_res36 = var35;
if (var_for_loop){
var37 = NEW_nit__EscapeMark(&type_nit__EscapeMark);
{
((void(*)(val* self, val* p0))(var37->class->vft[COLOR_nit__scope__EscapeMark__name_61d]))(var37, var_name); /* name= on <var37:EscapeMark>*/
}
{
((void(*)(val* self))(var37->class->vft[COLOR_standard__kernel__Object__init]))(var37); /* init on <var37:EscapeMark>*/
}
{
((void(*)(val* self, val* p0))(var_res36->class->vft[COLOR_nit__scope__EscapeMark__continue_mark_61d]))(var_res36, var37); /* continue_mark= on <var_res36:EscapeMark>*/
}
} else {
}
var = var_res36;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#get_escapemark for (self: ScopeVisitor, ANode, nullable ALabel): nullable EscapeMark */
val* nit__scope___nit__scope__ScopeVisitor___get_escapemark(val* self, val* p0, val* p1) {
val* var /* : nullable EscapeMark */;
val* var_node /* var node: ANode */;
val* var_nlabel /* var nlabel: nullable ALabel */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var_name /* var name: String */;
val* var17 /* : nullable EscapeMark */;
val* var_res18 /* var res: nullable EscapeMark */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var22 /* : NativeArray[String] */;
static val* varonce21;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var32 /* : List[Scope] */;
val* var_ /* var : List[Scope] */;
val* var33 /* : Iterator[nullable Object] */;
val* var_34 /* var : ListIterator[Scope] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var37 /* : nullable EscapeMark */;
val* var_res38 /* var res: nullable EscapeMark */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
var_node = p0;
var_nlabel = p1;
if (var_nlabel == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_nlabel->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nlabel, ((val*)NULL)); /* != on <var_nlabel:nullable ALabel>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(var_nlabel->class->vft[COLOR_nit__parser_nodes__ALabel__n_id]))(var_nlabel); /* n_id on <var_nlabel:nullable ALabel(ALabel)>*/
}
var_nid = var3;
if (var_nid == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_nid->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nid, ((val*)NULL)); /* == on <var_nid:nullable TId>*/
var4 = var5;
}
if (var4){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var8 = standard___standard__NativeString___to_s_with_length(var7, 0l);
var6 = var8;
varonce = var6;
}
{
var9 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ScopeVisitor__search_label]))(self, var6); /* search_label on <self:ScopeVisitor>*/
}
var_res = var9;
if (var_res == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable EscapeMark>*/
var10 = var11;
}
if (var10){
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Syntax Error: invalid anonymous label.";
var15 = standard___standard__NativeString___to_s_with_length(var14, 38l);
var13 = var15;
varonce12 = var13;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__scope__ScopeVisitor__error]))(self, var_nlabel, var13); /* error on <self:ScopeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(var_nid->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_nid); /* text on <var_nid:nullable TId(TId)>*/
}
var_name = var16;
{
var17 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ScopeVisitor__search_label]))(self, var_name); /* search_label on <self:ScopeVisitor>*/
}
var_res18 = var17;
if (var_res18 == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var_res18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res18, ((val*)NULL)); /* == on <var_res18:nullable EscapeMark>*/
var19 = var20;
}
if (var19){
if (unlikely(varonce21==NULL)) {
var22 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Syntax Error: invalid label `";
var26 = standard___standard__NativeString___to_s_with_length(var25, 29l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "`.";
var30 = standard___standard__NativeString___to_s_with_length(var29, 2l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var22)->values[2]=var28;
} else {
var22 = varonce21;
varonce21 = NULL;
}
((struct instance_standard__NativeArray*)var22)->values[1]=var_name;
{
var31 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__scope__ScopeVisitor__error]))(self, var_nlabel, var31); /* error on <self:ScopeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_res18;
goto RET_LABEL;
} else {
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(self); /* scopes on <self:ScopeVisitor>*/
}
var_ = var32;
{
var33 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:List[Scope]>*/
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:ListIterator[Scope]>*/
}
if (var35){
{
var36 = ((val*(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:ListIterator[Scope]>*/
}
var_scope = var36;
{
var37 = ((val*(*)(val* self))(var_scope->class->vft[COLOR_nit__scope__Scope__escapemark]))(var_scope); /* escapemark on <var_scope:Scope>*/
}
var_res38 = var37;
if (var_res38 == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
var40 = ((short int(*)(val* self, val* p0))(var_res38->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res38, ((val*)NULL)); /* != on <var_res38:nullable EscapeMark>*/
var39 = var40;
}
if (var39){
var = var_res38;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:ListIterator[Scope]>*/
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "Syntax Error: `break` statement outside block.";
var44 = standard___standard__NativeString___to_s_with_length(var43, 46l);
var42 = var44;
varonce41 = var42;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__scope__ScopeVisitor__error]))(self, var_node, var42); /* error on <self:ScopeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#error for (self: ScopeVisitor, ANode, String) */
void nit__scope___nit__scope__ScopeVisitor___error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ToolContext */;
val* var1 /* : Location */;
val* var2 /* : Message */;
var_node = p0;
var_message = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ScopeVisitor__toolcontext]))(self); /* toolcontext on <self:ScopeVisitor>*/
}
{
var1 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:ANode>*/
}
{
var2 = ((val*(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var, var1, var_message); /* error on <var:ToolContext>*/
}
RET_LABEL:;
}
/* method scope#Scope#variables for (self: Scope): HashMap[String, Variable] */
val* nit__scope___nit__scope__Scope___variables(val* self) {
val* var /* : HashMap[String, Variable] */;
val* var1 /* : HashMap[String, Variable] */;
var1 = self->attrs[COLOR_nit__scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 225);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#variables= for (self: Scope, HashMap[String, Variable]) */
void nit__scope___nit__scope__Scope___variables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__Scope___variables].val = p0; /* _variables on <self:Scope> */
RET_LABEL:;
}
/* method scope#Scope#escapemark for (self: Scope): nullable EscapeMark */
val* nit__scope___nit__scope__Scope___escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__Scope___escapemark].val; /* _escapemark on <self:Scope> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#escapemark= for (self: Scope, nullable EscapeMark) */
void nit__scope___nit__scope__Scope___escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__Scope___escapemark].val = p0; /* _escapemark on <self:Scope> */
RET_LABEL:;
}
/* method scope#Scope#get_variable for (self: Scope, String): nullable Variable */
val* nit__scope___nit__scope__Scope___get_variable(val* self, val* p0) {
val* var /* : nullable Variable */;
val* var_name /* var name: String */;
val* var1 /* : HashMap[String, Variable] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[String, Variable] */;
val* var4 /* : nullable Object */;
var_name = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__Scope__variables]))(self); /* variables on <self:Scope>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_name); /* has_key on <var1:HashMap[String, Variable]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__Scope__variables]))(self); /* variables on <self:Scope>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var3, var_name); /* [] on <var3:HashMap[String, Variable]>*/
}
var = var4;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method scope#ANode#accept_scope_visitor for (self: ANode, ScopeVisitor) */
void nit__scope___ANode___accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
RET_LABEL:;
}
/* method scope#APropdef#do_scope for (self: APropdef, ToolContext) */
void nit__scope___APropdef___do_scope(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : ScopeVisitor */;
val* var_v /* var v: ScopeVisitor */;
var_toolcontext = p0;
var = NEW_nit__scope__ScopeVisitor(&type_nit__scope__ScopeVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__scope__ScopeVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:ScopeVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:ScopeVisitor>*/
}
var_v = var;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, self); /* enter_visit on <var_v:ScopeVisitor>*/
}
{
((void(*)(val* self))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__shift_scope]))(var_v); /* shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AParam#variable for (self: AParam): nullable Variable */
val* nit__scope___AParam___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__scope__AParam___variable].val; /* _variable on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AParam#variable= for (self: AParam, nullable Variable) */
void nit__scope___AParam___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AParam___variable].val = p0; /* _variable on <self:AParam> */
RET_LABEL:;
}
/* method scope#AParam#accept_scope_visitor for (self: AParam, ScopeVisitor) */
void nit__scope___AParam___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : TId */;
val* var_nid /* var nid: TId */;
val* var1 /* : Variable */;
val* var2 /* : String */;
val* var_variable /* var variable: Variable */;
short int var3 /* : Bool */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___AParam___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AParam>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AParam__n_id]))(self); /* n_id on <self:AParam>*/
}
var_nid = var;
var1 = NEW_nit__Variable(&type_nit__Variable);
{
var2 = ((val*(*)(val* self))(var_nid->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_nid); /* text on <var_nid:TId>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__scope__Variable__name_61d]))(var1, var2); /* name= on <var1:Variable>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Variable>*/
}
var_variable = var1;
{
var3 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__register_variable]))(var_v, var_nid, var_variable); /* register_variable on <var_v:ScopeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AParam__variable_61d]))(self, var_variable); /* variable= on <self:AParam>*/
}
RET_LABEL:;
}
/* method scope#AVardeclExpr#variable for (self: AVardeclExpr): nullable Variable */
val* nit__scope___AVardeclExpr___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVardeclExpr#variable= for (self: AVardeclExpr, nullable Variable) */
void nit__scope___AVardeclExpr___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val = p0; /* _variable on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method scope#AVardeclExpr#accept_scope_visitor for (self: AVardeclExpr, ScopeVisitor) */
void nit__scope___AVardeclExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : TId */;
val* var_nid /* var nid: TId */;
val* var1 /* : Variable */;
val* var2 /* : String */;
val* var_variable /* var variable: Variable */;
short int var3 /* : Bool */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___AVardeclExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AVardeclExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_id]))(self); /* n_id on <self:AVardeclExpr>*/
}
var_nid = var;
var1 = NEW_nit__Variable(&type_nit__Variable);
{
var2 = ((val*(*)(val* self))(var_nid->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_nid); /* text on <var_nid:TId>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__scope__Variable__name_61d]))(var1, var2); /* name= on <var1:Variable>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Variable>*/
}
var_variable = var1;
{
var3 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__register_variable]))(var_v, var_nid, var_variable); /* register_variable on <var_v:ScopeVisitor>*/
}
{
((void(*)(val* self, short int p0))(var_variable->class->vft[COLOR_nit__scope__Variable__warn_unread_61d]))(var_variable, 1); /* warn_unread= on <var_variable:Variable>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AVardeclExpr__variable_61d]))(self, var_variable); /* variable= on <self:AVardeclExpr>*/
}
RET_LABEL:;
}
/* method scope#ASelfExpr#variable for (self: ASelfExpr): nullable Variable */
val* nit__scope___ASelfExpr___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__scope__ASelfExpr___variable].val; /* _variable on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ASelfExpr#variable= for (self: ASelfExpr, nullable Variable) */
void nit__scope___ASelfExpr___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ASelfExpr___variable].val = p0; /* _variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method scope#ASelfExpr#accept_scope_visitor for (self: ASelfExpr, ScopeVisitor) */
void nit__scope___ASelfExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___ASelfExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:ASelfExpr>*/
}
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__selfvariable]))(var_v); /* selfvariable on <var_v:ScopeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ASelfExpr__variable_61d]))(self, var); /* variable= on <self:ASelfExpr>*/
}
RET_LABEL:;
}
/* method scope#AEscapeExpr#escapemark for (self: AEscapeExpr): nullable EscapeMark */
val* nit__scope___AEscapeExpr___escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AEscapeExpr#escapemark= for (self: AEscapeExpr, nullable EscapeMark) */
void nit__scope___AEscapeExpr___escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val = p0; /* _escapemark on <self:AEscapeExpr> */
RET_LABEL:;
}
/* method scope#AContinueExpr#accept_scope_visitor for (self: AContinueExpr, ScopeVisitor) */
void nit__scope___AContinueExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var1 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable EscapeMark */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : Array[AEscapeExpr] */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___AContinueExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AContinueExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label]))(self); /* n_label on <self:AContinueExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__get_escapemark]))(var_v, self, var); /* get_escapemark on <var_v:ScopeVisitor>*/
}
var_escapemark = var1;
if (var_escapemark == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_escapemark, ((val*)NULL)); /* == on <var_escapemark:nullable EscapeMark>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_escapemark->class->vft[COLOR_nit__scope__EscapeMark__continue_mark]))(var_escapemark); /* continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)>*/
}
var_escapemark = var4;
if (var_escapemark == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_escapemark, ((val*)NULL)); /* == on <var_escapemark:nullable EscapeMark>*/
var5 = var6;
}
if (var5){
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "Error: cannot \'continue\', only \'break\'.";
var9 = standard___standard__NativeString___to_s_with_length(var8, 39l);
var7 = var9;
varonce = var7;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__error]))(var_v, self, var7); /* error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var10 = ((val*(*)(val* self))(var_escapemark->class->vft[COLOR_nit__scope__EscapeMark__escapes]))(var_escapemark); /* escapes on <var_escapemark:nullable EscapeMark(EscapeMark)>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var10, self); /* add on <var10:Array[AEscapeExpr]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AEscapeExpr__escapemark_61d]))(self, var_escapemark); /* escapemark= on <self:AContinueExpr>*/
}
RET_LABEL:;
}
/* method scope#ABreakExpr#accept_scope_visitor for (self: ABreakExpr, ScopeVisitor) */
void nit__scope___ABreakExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var1 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[AEscapeExpr] */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___ABreakExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:ABreakExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label]))(self); /* n_label on <self:ABreakExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__get_escapemark]))(var_v, self, var); /* get_escapemark on <var_v:ScopeVisitor>*/
}
var_escapemark = var1;
if (var_escapemark == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_escapemark, ((val*)NULL)); /* == on <var_escapemark:nullable EscapeMark>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_escapemark->class->vft[COLOR_nit__scope__EscapeMark__escapes]))(var_escapemark); /* escapes on <var_escapemark:nullable EscapeMark(EscapeMark)>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var4, self); /* add on <var4:Array[AEscapeExpr]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AEscapeExpr__escapemark_61d]))(self, var_escapemark); /* escapemark= on <self:ABreakExpr>*/
}
RET_LABEL:;
}
/* method scope#ADoExpr#break_mark for (self: ADoExpr): nullable EscapeMark */
val* nit__scope___ADoExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ADoExpr#break_mark= for (self: ADoExpr, nullable EscapeMark) */
void nit__scope___ADoExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val = p0; /* _break_mark on <self:ADoExpr> */
RET_LABEL:;
}
/* method scope#ADoExpr#accept_scope_visitor for (self: ADoExpr, ScopeVisitor) */
void nit__scope___ADoExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var1 /* : EscapeMark */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable EscapeMark */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label]))(self); /* n_label on <self:ADoExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0, short int p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__make_escape_mark]))(var_v, var, 0); /* make_escape_mark on <var_v:ScopeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ADoExpr__break_mark_61d]))(self, var1); /* break_mark= on <self:ADoExpr>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block]))(self); /* n_block on <self:ADoExpr>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ADoExpr__break_mark]))(self); /* break_mark on <self:ADoExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__enter_visit_block]))(var_v, var2, var3); /* enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AIfExpr#accept_scope_visitor for (self: AIfExpr, ScopeVisitor) */
void nit__scope___AIfExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_expr]))(self); /* n_expr on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:ScopeVisitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then]))(self); /* n_then on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__enter_visit_block]))(var_v, var1, ((val*)NULL)); /* enter_visit_block on <var_v:ScopeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_else]))(self); /* n_else on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__enter_visit_block]))(var_v, var2, ((val*)NULL)); /* enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AWhileExpr#break_mark for (self: AWhileExpr): nullable EscapeMark */
val* nit__scope___AWhileExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#break_mark= for (self: AWhileExpr, nullable EscapeMark) */
void nit__scope___AWhileExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val = p0; /* _break_mark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope#AWhileExpr#continue_mark for (self: AWhileExpr): nullable EscapeMark */
val* nit__scope___AWhileExpr___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#continue_mark= for (self: AWhileExpr, nullable EscapeMark) */
void nit__scope___AWhileExpr___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val = p0; /* _continue_mark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope#AWhileExpr#accept_scope_visitor for (self: AWhileExpr, ScopeVisitor) */
void nit__scope___AWhileExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var1 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var2 /* : nullable EscapeMark */;
val* var3 /* : AExpr */;
val* var4 /* : nullable AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label]))(self); /* n_label on <self:AWhileExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0, short int p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__make_escape_mark]))(var_v, var, 1); /* make_escape_mark on <var_v:ScopeVisitor>*/
}
var_escapemark = var1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AWhileExpr__break_mark_61d]))(self, var_escapemark); /* break_mark= on <self:AWhileExpr>*/
}
{
var2 = ((val*(*)(val* self))(var_escapemark->class->vft[COLOR_nit__scope__EscapeMark__continue_mark]))(var_escapemark); /* continue_mark on <var_escapemark:EscapeMark>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AWhileExpr__continue_mark_61d]))(self, var2); /* continue_mark= on <self:AWhileExpr>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_expr]))(self); /* n_expr on <self:AWhileExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:ScopeVisitor>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_block]))(self); /* n_block on <self:AWhileExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__enter_visit_block]))(var_v, var4, var_escapemark); /* enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#ALoopExpr#break_mark for (self: ALoopExpr): nullable EscapeMark */
val* nit__scope___ALoopExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#break_mark= for (self: ALoopExpr, nullable EscapeMark) */
void nit__scope___ALoopExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = p0; /* _break_mark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope#ALoopExpr#continue_mark for (self: ALoopExpr): nullable EscapeMark */
val* nit__scope___ALoopExpr___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#continue_mark= for (self: ALoopExpr, nullable EscapeMark) */
void nit__scope___ALoopExpr___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val = p0; /* _continue_mark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope#ALoopExpr#accept_scope_visitor for (self: ALoopExpr, ScopeVisitor) */
void nit__scope___ALoopExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var1 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var2 /* : nullable EscapeMark */;
val* var3 /* : nullable AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label]))(self); /* n_label on <self:ALoopExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0, short int p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__make_escape_mark]))(var_v, var, 1); /* make_escape_mark on <var_v:ScopeVisitor>*/
}
var_escapemark = var1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ALoopExpr__break_mark_61d]))(self, var_escapemark); /* break_mark= on <self:ALoopExpr>*/
}
{
var2 = ((val*(*)(val* self))(var_escapemark->class->vft[COLOR_nit__scope__EscapeMark__continue_mark]))(var_escapemark); /* continue_mark on <var_escapemark:EscapeMark>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ALoopExpr__continue_mark_61d]))(self, var2); /* continue_mark= on <self:ALoopExpr>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_block]))(self); /* n_block on <self:ALoopExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__enter_visit_block]))(var_v, var3, var_escapemark); /* enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AForExpr#variables for (self: AForExpr): nullable Array[Variable] */
val* nit__scope___AForExpr___variables(val* self) {
val* var /* : nullable Array[Variable] */;
val* var1 /* : nullable Array[Variable] */;
var1 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#variables= for (self: AForExpr, nullable Array[Variable]) */
void nit__scope___AForExpr___variables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AForExpr___variables].val = p0; /* _variables on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#break_mark for (self: AForExpr): nullable EscapeMark */
val* nit__scope___AForExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#break_mark= for (self: AForExpr, nullable EscapeMark) */
void nit__scope___AForExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AForExpr___break_mark].val = p0; /* _break_mark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#continue_mark for (self: AForExpr): nullable EscapeMark */
val* nit__scope___AForExpr___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#continue_mark= for (self: AForExpr, nullable EscapeMark) */
void nit__scope___AForExpr___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AForExpr___continue_mark].val = p0; /* _continue_mark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#accept_scope_visitor for (self: AForExpr, ScopeVisitor) */
void nit__scope___AForExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var1 /* : List[Scope] */;
val* var2 /* : Scope */;
val* var3 /* : Array[Variable] */;
val* var_variables /* var variables: Array[Variable] */;
val* var4 /* : ANodes[TId] */;
val* var_ /* var : ANodes[TId] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[TId] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_nid /* var nid: TId */;
val* var9 /* : Variable */;
val* var10 /* : String */;
val* var_va /* var va: Variable */;
short int var11 /* : Bool */;
val* var12 /* : nullable ALabel */;
val* var13 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var14 /* : nullable EscapeMark */;
val* var15 /* : nullable AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_expr]))(self); /* n_expr on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:ScopeVisitor>*/
}
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(var_v); /* scopes on <var_v:ScopeVisitor>*/
}
var2 = NEW_nit__scope__Scope(&type_nit__scope__Scope);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Scope>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Sequence__unshift]))(var1, var2); /* unshift on <var1:List[Scope]>*/
}
var3 = NEW_standard__Array(&type_standard__Array__nit__Variable);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Variable]>*/
}
var_variables = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AForExpr__variables_61d]))(self, var_variables); /* variables= on <self:AForExpr>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_ids]))(self); /* n_ids on <self:AForExpr>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[TId]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[TId]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[TId]>*/
}
var_nid = var8;
var9 = NEW_nit__Variable(&type_nit__Variable);
{
var10 = ((val*(*)(val* self))(var_nid->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_nid); /* text on <var_nid:TId>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__scope__Variable__name_61d]))(var9, var10); /* name= on <var9:Variable>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:Variable>*/
}
var_va = var9;
{
var11 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__register_variable]))(var_v, var_nid, var_va); /* register_variable on <var_v:ScopeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_variables->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_variables, var_va); /* add on <var_variables:Array[Variable]>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[TId]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[TId]>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label]))(self); /* n_label on <self:AForExpr>*/
}
{
var13 = ((val*(*)(val* self, val* p0, short int p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__make_escape_mark]))(var_v, var12, 1); /* make_escape_mark on <var_v:ScopeVisitor>*/
}
var_escapemark = var13;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AForExpr__break_mark_61d]))(self, var_escapemark); /* break_mark= on <self:AForExpr>*/
}
{
var14 = ((val*(*)(val* self))(var_escapemark->class->vft[COLOR_nit__scope__EscapeMark__continue_mark]))(var_escapemark); /* continue_mark on <var_escapemark:EscapeMark>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AForExpr__continue_mark_61d]))(self, var14); /* continue_mark= on <self:AForExpr>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_block]))(self); /* n_block on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__enter_visit_block]))(var_v, var15, var_escapemark); /* enter_visit_block on <var_v:ScopeVisitor>*/
}
{
((void(*)(val* self))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__shift_scope]))(var_v); /* shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AWithExpr#break_mark for (self: AWithExpr): nullable EscapeMark */
val* nit__scope___AWithExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AWithExpr___break_mark].val; /* _break_mark on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWithExpr#break_mark= for (self: AWithExpr, nullable EscapeMark) */
void nit__scope___AWithExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AWithExpr___break_mark].val = p0; /* _break_mark on <self:AWithExpr> */
RET_LABEL:;
}
/* method scope#AWithExpr#accept_scope_visitor for (self: AWithExpr, ScopeVisitor) */
void nit__scope___AWithExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : List[Scope] */;
val* var1 /* : Scope */;
val* var2 /* : nullable ALabel */;
val* var3 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var4 /* : AExpr */;
val* var5 /* : nullable AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__scopes]))(var_v); /* scopes on <var_v:ScopeVisitor>*/
}
var1 = NEW_nit__scope__Scope(&type_nit__scope__Scope);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Scope>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__abstract_collection__Sequence__unshift]))(var, var1); /* unshift on <var:List[Scope]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label]))(self); /* n_label on <self:AWithExpr>*/
}
{
var3 = ((val*(*)(val* self, val* p0, short int p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__make_escape_mark]))(var_v, var2, 1); /* make_escape_mark on <var_v:ScopeVisitor>*/
}
var_escapemark = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AWithExpr__break_mark_61d]))(self, var_escapemark); /* break_mark= on <self:AWithExpr>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_expr]))(self); /* n_expr on <self:AWithExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:ScopeVisitor>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_block]))(self); /* n_block on <self:AWithExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__enter_visit_block]))(var_v, var5, var_escapemark); /* enter_visit_block on <var_v:ScopeVisitor>*/
}
{
((void(*)(val* self))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__shift_scope]))(var_v); /* shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AVarFormExpr#variable for (self: AVarFormExpr): nullable Variable */
val* nit__scope___AVarFormExpr___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVarFormExpr#variable= for (self: AVarFormExpr, nullable Variable) */
void nit__scope___AVarFormExpr___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val = p0; /* _variable on <self:AVarFormExpr> */
RET_LABEL:;
}
/* method scope#ACallFormExpr#accept_scope_visitor for (self: ACallFormExpr, ScopeVisitor) */
void nit__scope___ACallFormExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : TId */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : AExprs */;
val* var9 /* : ANodes[AExpr] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : AExprs */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : NativeArray[String] */;
static val* varonce;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : String */;
val* var26 /* : AVarFormExpr */;
val* var_n /* var n: AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(self); /* n_expr on <self:ACallFormExpr>*/
}
/* <var:AExpr> isa AImplicitSelfExpr */
cltype = type_nit__AImplicitSelfExpr.color;
idtype = type_nit__AImplicitSelfExpr.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (var1){
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallFormExpr>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__parser_nodes__Token__text]))(var2); /* text on <var2:TId>*/
}
var_name = var3;
{
var4 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__search_variable]))(var_v, var_name); /* search_variable on <var_v:ScopeVisitor>*/
}
var_variable = var4;
if (var_variable == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_variable, ((val*)NULL)); /* != on <var_variable:nullable Variable>*/
var5 = var6;
}
if (var5){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args]))(self); /* n_args on <self:ACallFormExpr>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var8); /* n_exprs on <var8:AExprs>*/
}
{
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var9); /* is_empty on <var9:ANodes[AExpr]>*/
}
var11 = !var10;
var_ = var11;
if (var11){
var7 = var_;
} else {
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args]))(self); /* n_args on <self:ACallFormExpr>*/
}
/* <var12:AExprs> isa AParExprs */
cltype14 = type_nit__AParExprs.color;
idtype15 = type_nit__AParExprs.id;
if(cltype14 >= var12->type->table_size) {
var13 = 0;
} else {
var13 = var12->type->type_table[cltype14] == idtype15;
}
var7 = var13;
}
if (var7){
if (unlikely(varonce==NULL)) {
var16 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Error: `";
var20 = standard___standard__NativeString___to_s_with_length(var19, 8l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "` is a variable, not a method.";
var24 = standard___standard__NativeString___to_s_with_length(var23, 30l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var16)->values[2]=var22;
} else {
var16 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var16)->values[1]=var_name;
{
var25 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce = var16;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__scope__ScopeVisitor__error]))(var_v, self, var25); /* error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var26 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ACallFormExpr__variable_create]))(self, var_variable); /* variable_create on <self:ACallFormExpr>*/
}
var_n = var26;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__scope__AVarFormExpr__variable_61d]))(var_n, var_variable); /* variable= on <var_n:AExpr(AVarFormExpr)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__replace_with]))(self, var_n); /* replace_with on <self:ACallFormExpr>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__scope__ANode__accept_scope_visitor]))(var_n, var_v); /* accept_scope_visitor on <var_n:AExpr(AVarFormExpr)>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___ACallFormExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:ACallFormExpr>*/
}
RET_LABEL:;
}
/* method scope#ACallFormExpr#variable_create for (self: ACallFormExpr, Variable): AVarFormExpr */
val* nit__scope___ACallFormExpr___variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "variable_create", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 460);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method scope#ACallExpr#variable_create for (self: ACallExpr, Variable): AVarFormExpr */
val* nit__scope___ACallExpr___ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var1 /* : AVarExpr */;
val* var2 /* : TId */;
var_variable = p0;
{
((void(*)(val* self, short int p0))(var_variable->class->vft[COLOR_nit__scope__Variable__warn_unread_61d]))(var_variable, 0); /* warn_unread= on <var_variable:Variable>*/
}
var1 = NEW_nit__AVarExpr(&type_nit__AVarExpr);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallExpr>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_prod__AVarExpr__init_avarexpr]))(var1, var2); /* init_avarexpr on <var1:AVarExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ACallAssignExpr#variable_create for (self: ACallAssignExpr, Variable): AVarFormExpr */
val* nit__scope___ACallAssignExpr___ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var1 /* : AVarAssignExpr */;
val* var2 /* : TId */;
val* var3 /* : TAssign */;
val* var4 /* : AExpr */;
var_variable = p0;
var1 = NEW_nit__AVarAssignExpr(&type_nit__AVarAssignExpr);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallAssignExpr>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_assign]))(self); /* n_assign on <self:ACallAssignExpr>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value]))(self); /* n_value on <self:ACallAssignExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nit__parser_prod__AVarAssignExpr__init_avarassignexpr]))(var1, var2, var3, var4); /* init_avarassignexpr on <var1:AVarAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ACallReassignExpr#variable_create for (self: ACallReassignExpr, Variable): AVarFormExpr */
val* nit__scope___ACallReassignExpr___ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var1 /* : AVarReassignExpr */;
val* var2 /* : TId */;
val* var3 /* : AAssignOp */;
val* var4 /* : AExpr */;
var_variable = p0;
{
((void(*)(val* self, short int p0))(var_variable->class->vft[COLOR_nit__scope__Variable__warn_unread_61d]))(var_variable, 0); /* warn_unread= on <var_variable:Variable>*/
}
var1 = NEW_nit__AVarReassignExpr(&type_nit__AVarReassignExpr);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallReassignExpr>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_assign_op]))(self); /* n_assign_op on <self:ACallReassignExpr>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value]))(self); /* n_value on <self:ACallReassignExpr>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nit__parser_prod__AVarReassignExpr__init_avarreassignexpr]))(var1, var2, var3, var4); /* init_avarreassignexpr on <var1:AVarReassignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
