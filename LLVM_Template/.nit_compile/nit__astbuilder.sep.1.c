#include "nit__astbuilder.sep.0.h"
/* method astbuilder#ASTBuilder#mmodule for (self: ASTBuilder): MModule */
val* nit___nit__ASTBuilder___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#mmodule= for (self: ASTBuilder, MModule) */
void nit___nit__ASTBuilder___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__astbuilder__ASTBuilder___mmodule].val = p0; /* _mmodule on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#anchor for (self: ASTBuilder): nullable MClassType */
val* nit___nit__ASTBuilder___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__astbuilder__ASTBuilder___anchor].val; /* _anchor on <self:ASTBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#anchor= for (self: ASTBuilder, nullable MClassType) */
void nit___nit__ASTBuilder___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nit__astbuilder__ASTBuilder___anchor].val = p0; /* _anchor on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#make_int for (self: ASTBuilder, Int): AIntExpr */
val* nit___nit__ASTBuilder___make_int(val* self, long p0) {
val* var /* : AIntExpr */;
long var_value /* var value: Int */;
val* var1 /* : ADecIntExpr */;
val* var2 /* : MModule */;
val* var3 /* : MClassType */;
var_value = p0;
var1 = NEW_nit__ADecIntExpr(&type_nit__ADecIntExpr);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__astbuilder__ASTBuilder__mmodule]))(self); /* mmodule on <self:ASTBuilder>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MModule__int_type]))(var2); /* int_type on <var2:MModule>*/
}
{
((void(*)(val* self, long p0, val* p1))(var1->class->vft[COLOR_nit__astbuilder__ADecIntExpr__make]))(var1, var_value, var3); /* make on <var1:ADecIntExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_new for (self: ASTBuilder, CallSite, nullable Array[AExpr]): ANewExpr */
val* nit___nit__ASTBuilder___make_new(val* self, val* p0, val* p1) {
val* var /* : ANewExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : ANewExpr */;
var_callsite = p0;
var_args = p1;
var1 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nit__astbuilder__ANewExpr__make]))(var1, var_callsite, var_args); /* make on <var1:ANewExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_call for (self: ASTBuilder, AExpr, CallSite, nullable Array[AExpr]): ACallExpr */
val* nit___nit__ASTBuilder___make_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : ACallExpr */;
val* var_recv /* var recv: AExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : ACallExpr */;
var_recv = p0;
var_callsite = p1;
var_args = p2;
var1 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nit__astbuilder__ACallExpr__make]))(var1, var_recv, var_callsite, var_args); /* make on <var1:ACallExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_block for (self: ASTBuilder): ABlockExpr */
val* nit___nit__ASTBuilder___make_block(val* self) {
val* var /* : ABlockExpr */;
val* var1 /* : ABlockExpr */;
var1 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self))(var1->class->vft[COLOR_nit__astbuilder__ABlockExpr__make]))(var1); /* make on <var1:ABlockExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_loop for (self: ASTBuilder): ALoopExpr */
val* nit___nit__ASTBuilder___make_loop(val* self) {
val* var /* : ALoopExpr */;
val* var1 /* : ALoopExpr */;
var1 = NEW_nit__ALoopExpr(&type_nit__ALoopExpr);
{
((void(*)(val* self))(var1->class->vft[COLOR_nit__astbuilder__ALoopExpr__make]))(var1); /* make on <var1:ALoopExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_read for (self: ASTBuilder, Variable, MType): AVarExpr */
val* nit___nit__ASTBuilder___make_var_read(val* self, val* p0, val* p1) {
val* var /* : AVarExpr */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : AVarExpr */;
var_variable = p0;
var_mtype = p1;
var1 = NEW_nit__AVarExpr(&type_nit__AVarExpr);
{
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nit__astbuilder__AVarExpr__make]))(var1, var_variable, var_mtype); /* make on <var1:AVarExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_assign for (self: ASTBuilder, Variable, AExpr): AVarAssignExpr */
val* nit___nit__ASTBuilder___make_var_assign(val* self, val* p0, val* p1) {
val* var /* : AVarAssignExpr */;
val* var_variable /* var variable: Variable */;
val* var_value /* var value: AExpr */;
val* var1 /* : AVarAssignExpr */;
var_variable = p0;
var_value = p1;
var1 = NEW_nit__AVarAssignExpr(&type_nit__AVarAssignExpr);
{
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nit__astbuilder__AVarAssignExpr__make]))(var1, var_variable, var_value); /* make on <var1:AVarAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_read for (self: ASTBuilder, AExpr, MAttribute): AAttrExpr */
val* nit___nit__ASTBuilder___make_attr_read(val* self, val* p0, val* p1) {
val* var /* : AAttrExpr */;
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var1 /* : MPropDef */;
val* var2 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MClassType */;
val* var5 /* : MModule */;
val* var6 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var7 /* : AAttrExpr */;
var_recv = p0;
var_attribute = p1;
{
var1 = ((val*(*)(val* self))(var_attribute->class->vft[COLOR_nit__model__MProperty__intro]))(var_attribute); /* intro on <var_attribute:MAttribute>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var1); /* static_mtype on <var1:MPropDef(MAttributeDef)>*/
}
{
var3 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_recv); /* mtype on <var_recv:AExpr>*/
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 77);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__astbuilder__ASTBuilder__anchor]))(self); /* anchor on <self:ASTBuilder>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__astbuilder__ASTBuilder__mmodule]))(self); /* mmodule on <self:ASTBuilder>*/
}
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 77);
fatal_exit(1);
} else {
var6 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var2->class->vft[COLOR_nit__model__MType__resolve_for]))(var2, var3, var4, var5, 1); /* resolve_for on <var2:nullable MType>*/
}
var_mtype = var6;
var7 = NEW_nit__AAttrExpr(&type_nit__AAttrExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var7->class->vft[COLOR_nit__astbuilder__AAttrExpr__make]))(var7, var_recv, var_attribute, var_mtype); /* make on <var7:AAttrExpr>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_assign for (self: ASTBuilder, AExpr, MAttribute, AExpr): AAttrAssignExpr */
val* nit___nit__ASTBuilder___make_attr_assign(val* self, val* p0, val* p1, val* p2) {
val* var /* : AAttrAssignExpr */;
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var1 /* : AAttrAssignExpr */;
var_recv = p0;
var_attribute = p1;
var_value = p2;
var1 = NEW_nit__AAttrAssignExpr(&type_nit__AAttrAssignExpr);
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nit__astbuilder__AAttrAssignExpr__make]))(var1, var_recv, var_attribute, var_value); /* make on <var1:AAttrAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_do for (self: ASTBuilder): ADoExpr */
val* nit___nit__ASTBuilder___make_do(val* self) {
val* var /* : ADoExpr */;
val* var1 /* : ADoExpr */;
var1 = NEW_nit__ADoExpr(&type_nit__ADoExpr);
{
((void(*)(val* self))(var1->class->vft[COLOR_nit__astbuilder__ADoExpr__make]))(var1); /* make on <var1:ADoExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_break for (self: ASTBuilder, EscapeMark): ABreakExpr */
val* nit___nit__ASTBuilder___make_break(val* self, val* p0) {
val* var /* : ABreakExpr */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var1 /* : ABreakExpr */;
var_escapemark = p0;
var1 = NEW_nit__ABreakExpr(&type_nit__ABreakExpr);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__astbuilder__ABreakExpr__make]))(var1, var_escapemark); /* make on <var1:ABreakExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_if for (self: ASTBuilder, AExpr, nullable MType): AIfExpr */
val* nit___nit__ASTBuilder___make_if(val* self, val* p0, val* p1) {
val* var /* : AIfExpr */;
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : AIfExpr */;
var_condition = p0;
var_mtype = p1;
var1 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nit__astbuilder__AIfExpr__make]))(var1, var_condition, var_mtype); /* make on <var1:AIfExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#init for (self: ASTBuilder) */
void nit___nit__ASTBuilder___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__ASTBuilder___standard__kernel__Object__init]))(self); /* init on <self:ASTBuilder>*/
}
RET_LABEL:;
}
/* method astbuilder#AExpr#make_var_read for (self: AExpr): AVarExpr */
val* nit__astbuilder___AExpr___make_var_read(val* self) {
val* var /* : AVarExpr */;
val* var1 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable ANode */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : AExpr */;
val* var_place /* var place: AExpr */;
val* var8 /* : Variable */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : nullable MType */;
val* var13 /* : AVarAssignExpr */;
val* var_nvar /* var nvar: AVarAssignExpr */;
val* var14 /* : AVarExpr */;
val* var15 /* : nullable MType */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__astbuilder__AExpr__variable_cache]))(self); /* variable_cache on <self:AExpr>*/
}
var_variable = var1;
if (var_variable == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, ((val*)NULL)); /* == on <var_variable:nullable Variable>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(self); /* parent on <self:AExpr>*/
}
if (var4 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var4, ((val*)NULL)); /* != on <var4:nullable ANode>*/
var5 = var6;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 117);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__astbuilder__AExpr__detach_with_placeholder]))(self); /* detach_with_placeholder on <self:AExpr>*/
}
var_place = var7;
var8 = NEW_nit__Variable(&type_nit__Variable);
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "";
var11 = standard___standard__NativeString___to_s_with_length(var10, 0l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__scope__Variable__name_61d]))(var8, var9); /* name= on <var8:Variable>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:Variable>*/
}
var_variable = var8;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
{
((void(*)(val* self, val* p0))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type_61d]))(var_variable, var12); /* declared_type= on <var_variable:nullable Variable(Variable)>*/
}
var13 = NEW_nit__AVarAssignExpr(&type_nit__AVarAssignExpr);
{
((void(*)(val* self, val* p0, val* p1))(var13->class->vft[COLOR_nit__astbuilder__AVarAssignExpr__make]))(var13, var_variable, self); /* make on <var13:AVarAssignExpr>*/
}
var_nvar = var13;
{
((void(*)(val* self, val* p0))(var_place->class->vft[COLOR_nit__parser_nodes__ANode__replace_with]))(var_place, var_nvar); /* replace_with on <var_place:AExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__astbuilder__AExpr__variable_cache_61d]))(self, var_variable); /* variable_cache= on <self:AExpr>*/
}
} else {
}
var14 = NEW_nit__AVarExpr(&type_nit__AVarExpr);
{
var15 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type]))(var_variable); /* declared_type on <var_variable:nullable Variable(Variable)>*/
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 125);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var14->class->vft[COLOR_nit__astbuilder__AVarExpr__make]))(var14, var_variable, var15); /* make on <var14:AVarExpr>*/
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache for (self: AExpr): nullable Variable */
val* nit__astbuilder___AExpr___variable_cache(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__astbuilder__AExpr___variable_cache].val; /* _variable_cache on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache= for (self: AExpr, nullable Variable) */
void nit__astbuilder___AExpr___variable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__astbuilder__AExpr___variable_cache].val = p0; /* _variable_cache on <self:AExpr> */
RET_LABEL:;
}
/* method astbuilder#AExpr#detach_with_placeholder for (self: AExpr): AExpr */
val* nit__astbuilder___AExpr___detach_with_placeholder(val* self) {
val* var /* : AExpr */;
val* var1 /* : APlaceholderExpr */;
val* var_h /* var h: APlaceholderExpr */;
var1 = NEW_nit__APlaceholderExpr(&type_nit__APlaceholderExpr);
{
((void(*)(val* self))(var1->class->vft[COLOR_nit__astbuilder__APlaceholderExpr__make]))(var1); /* make on <var1:APlaceholderExpr>*/
}
var_h = var1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__replace_with]))(self, var_h); /* replace_with on <self:AExpr>*/
}
var = var_h;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#add for (self: AExpr, AExpr) */
void nit__astbuilder___AExpr___add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : Sys */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : String */;
var_expr = p0;
var = glob_sys;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "add not implemented in ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 23l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__inspect]))(self); /* inspect on <self:AExpr>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__file__Sys__print]))(var, var7); /* print on <var:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 160);
fatal_exit(1);
RET_LABEL:;
}
/* method astbuilder#APlaceholderExpr#make for (self: APlaceholderExpr) */
void nit___nit__APlaceholderExpr___make(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APlaceholderExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#make for (self: ABlockExpr) */
void nit__astbuilder___ABlockExpr___make(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABlockExpr>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ABlockExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#add for (self: ABlockExpr, AExpr) */
void nit__astbuilder___ABlockExpr___AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : ANodes[AExpr] */;
var_expr = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var, var_expr); /* add on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method astbuilder#ALoopExpr#make for (self: ALoopExpr) */
void nit__astbuilder___ALoopExpr___make(val* self) {
val* var /* : TKwloop */;
val* var1 /* : ABlockExpr */;
val* var2 /* : nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALoopExpr>*/
}
var = NEW_nit__TKwloop(&type_nit__TKwloop);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TKwloop>*/
}
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val = var; /* _n_kwloop on <self:ALoopExpr> */
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ALoopExpr>*/
}
var1 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:ABlockExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_block_61d]))(self, var1); /* n_block= on <self:ALoopExpr>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_block]))(self); /* n_block on <self:ALoopExpr>*/
}
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 196);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(var2, 1); /* is_typed= on <var2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#ALoopExpr#add for (self: ALoopExpr, AExpr) */
void nit__astbuilder___ALoopExpr___AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : nullable AExpr */;
var_expr = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_block]))(self); /* n_block on <self:ALoopExpr>*/
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 201);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var, var_expr); /* add on <var:nullable AExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#ADoExpr#make for (self: ADoExpr) */
void nit__astbuilder___ADoExpr___make(val* self) {
val* var /* : TKwdo */;
val* var1 /* : ABlockExpr */;
val* var2 /* : nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ADoExpr>*/
}
var = NEW_nit__TKwdo(&type_nit__TKwdo);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TKwdo>*/
}
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val = var; /* _n_kwdo on <self:ADoExpr> */
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ADoExpr>*/
}
var1 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:ABlockExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block_61d]))(self, var1); /* n_block= on <self:ADoExpr>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block]))(self); /* n_block on <self:ADoExpr>*/
}
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 211);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(var2, 1); /* is_typed= on <var2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#ADoExpr#make_break for (self: ADoExpr): ABreakExpr */
val* nit__astbuilder___ADoExpr___make_break(val* self) {
val* var /* : ABreakExpr */;
val* var1 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : EscapeMark */;
val* var5 /* : ABreakExpr */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ADoExpr__break_mark]))(self); /* break_mark on <self:ADoExpr>*/
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
var4 = NEW_nit__EscapeMark(&type_nit__EscapeMark);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__scope__EscapeMark__name_61d]))(var4, ((val*)NULL)); /* name= on <var4:EscapeMark>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:EscapeMark>*/
}
var_escapemark = var4;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ADoExpr__break_mark_61d]))(self, var_escapemark); /* break_mark= on <self:ADoExpr>*/
}
} else {
}
var5 = NEW_nit__ABreakExpr(&type_nit__ABreakExpr);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__astbuilder__ABreakExpr__make]))(var5, var_escapemark); /* make on <var5:ABreakExpr>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ADoExpr#add for (self: ADoExpr, AExpr) */
void nit__astbuilder___ADoExpr___AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : nullable AExpr */;
var_expr = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block]))(self); /* n_block on <self:ADoExpr>*/
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 227);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var, var_expr); /* add on <var:nullable AExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#ABreakExpr#make for (self: ABreakExpr, EscapeMark) */
void nit__astbuilder___ABreakExpr___make(val* self, val* p0) {
val* var_escapemark /* var escapemark: EscapeMark */;
val* var /* : TKwbreak */;
val* var1 /* : Array[AEscapeExpr] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABreakExpr>*/
}
var_escapemark = p0;
var = NEW_nit__TKwbreak(&type_nit__TKwbreak);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TKwbreak>*/
}
self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val = var; /* _n_kwbreak on <self:ABreakExpr> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AEscapeExpr__escapemark_61d]))(self, var_escapemark); /* escapemark= on <self:ABreakExpr>*/
}
{
var1 = ((val*(*)(val* self))(var_escapemark->class->vft[COLOR_nit__scope__EscapeMark__escapes]))(var_escapemark); /* escapes on <var_escapemark:EscapeMark>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var1, self); /* add on <var1:Array[AEscapeExpr]>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ABreakExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#AIfExpr#make for (self: AIfExpr, AExpr, nullable MType) */
void nit__astbuilder___AIfExpr___make(val* self, val* p0, val* p1) {
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : ABlockExpr */;
val* var3 /* : ABlockExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AIfExpr>*/
}
var_condition = p0;
var_mtype = p1;
var = NEW_nit__TKwif(&type_nit__TKwif);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TKwif>*/
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val = var; /* _n_kwif on <self:AIfExpr> */
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val = var_condition; /* _n_expr on <self:AIfExpr> */
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 246);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var1, self); /* parent= on <var1:AExpr>*/
}
var2 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self))(var2->class->vft[COLOR_nit__astbuilder__ABlockExpr__make]))(var2); /* make on <var2:ABlockExpr>*/
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val = var2; /* _n_then on <self:AIfExpr> */
var3 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
((void(*)(val* self))(var3->class->vft[COLOR_nit__astbuilder__ABlockExpr__make]))(var3); /* make on <var3:ABlockExpr>*/
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val = var3; /* _n_else on <self:AIfExpr> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_mtype); /* mtype= on <self:AIfExpr>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AIfExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#AType#make for (self: AType) */
void nit__astbuilder___AType___make(val* self) {
val* var /* : TClassid */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AType>*/
}
var = NEW_nit__TClassid(&type_nit__TClassid);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TClassid>*/
}
self->attrs[COLOR_nit__parser_nodes__AType___n_id].val = var; /* _n_id on <self:AType> */
RET_LABEL:;
}
/* method astbuilder#ADecIntExpr#make for (self: ADecIntExpr, Int, MType) */
void nit__astbuilder___ADecIntExpr___make(val* self, long p0, val* p1) {
long var_value /* var value: Int */;
val* var_t /* var t: MType */;
val* var /* : nullable Int */;
val* var1 /* : TNumber */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ADecIntExpr>*/
}
var_value = p0;
var_t = p1;
{
var = (val*)(var_value<<2|1);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__literal__AIntExpr__value_61d]))(self, var); /* value= on <self:ADecIntExpr>*/
}
var1 = NEW_nit__TNumber(&type_nit__TNumber);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:TNumber>*/
}
self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val = var1; /* _n_number on <self:ADecIntExpr> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_t); /* mtype= on <self:ADecIntExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#ANewExpr#make for (self: ANewExpr, CallSite, nullable Array[AExpr]) */
void nit__astbuilder___ANewExpr___make(val* self, val* p0, val* p1) {
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var /* : TKwnew */;
val* var1 /* : AType */;
val* var2 /* : AListExprs */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : AExprs */;
val* var6 /* : ANodes[AExpr] */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var9 /* : MMethod */;
short int var10 /* : Bool */;
val* var11 /* : MSignature */;
val* var12 /* : nullable MType */;
val* var13 /* : MType */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ANewExpr>*/
}
var_callsite = p0;
var_args = p1;
var = NEW_nit__TKwnew(&type_nit__TKwnew);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TKwnew>*/
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val = var; /* _n_kwnew on <self:ANewExpr> */
var1 = NEW_nit__AType(&type_nit__AType);
{
((void(*)(val* self))(var1->class->vft[COLOR_nit__astbuilder__AType__make]))(var1); /* make on <var1:AType>*/
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val = var1; /* _n_type on <self:ANewExpr> */
var2 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:AListExprs>*/
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val = var2; /* _n_args on <self:ANewExpr> */
if (var_args == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_args, ((val*)NULL)); /* != on <var_args:nullable Array[AExpr]>*/
var3 = var4;
}
if (var3){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_args]))(self); /* n_args on <self:ANewExpr>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var5); /* n_exprs on <var5:AExprs>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var6, var_args); /* add_all on <var6:ANodes[AExpr]>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ANewExpr__callsite_61d]))(self, var_callsite); /* callsite= on <self:ANewExpr>*/
}
{
var7 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__recv]))(var_callsite); /* recv on <var_callsite:CallSite>*/
}
/* <var7:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 280);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ANewExpr__recvtype_61d]))(self, var7); /* recvtype= on <self:ANewExpr>*/
}
{
var9 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:CallSite>*/
}
{
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_nit__model__MMethod__is_new]))(var9); /* is_new on <var9:MMethod>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_callsite); /* msignature on <var_callsite:CallSite>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var11); /* return_mtype on <var11:MSignature>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var12); /* mtype= on <self:ANewExpr>*/
}
} else {
{
var13 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__recv]))(var_callsite); /* recv on <var_callsite:CallSite>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var13); /* mtype= on <self:ANewExpr>*/
}
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ANewExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#ACallExpr#make for (self: ACallExpr, AExpr, CallSite, nullable Array[AExpr]) */
void nit__astbuilder___ACallExpr___make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var /* : AListExprs */;
val* var1 /* : TId */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : AExprs */;
val* var5 /* : ANodes[AExpr] */;
val* var6 /* : MSignature */;
val* var7 /* : nullable MType */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACallExpr>*/
}
var_recv = p0;
var_callsite = p1;
var_args = p2;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_recv; /* _n_expr on <self:ACallExpr> */
var = NEW_nit__AListExprs(&type_nit__AListExprs);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:AListExprs>*/
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var; /* _n_args on <self:ACallExpr> */
var1 = NEW_nit__TId(&type_nit__TId);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:TId>*/
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var1; /* _n_id on <self:ACallExpr> */
if (var_args == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_args, ((val*)NULL)); /* != on <var_args:nullable Array[AExpr]>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args]))(self); /* n_args on <self:ACallExpr>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var4); /* n_exprs on <var4:AExprs>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var5, var_args); /* add_all on <var5:ANodes[AExpr]>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite_61d]))(self, var_callsite); /* callsite= on <self:ACallExpr>*/
}
{
var6 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_callsite); /* msignature on <var_callsite:CallSite>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var6); /* return_mtype on <var6:MSignature>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var7); /* mtype= on <self:ACallExpr>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ACallExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#AAttrExpr#make for (self: AAttrExpr, AExpr, MAttribute, MType) */
void nit__astbuilder___AAttrExpr___make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_t /* var t: MType */;
val* var /* : TAttrid */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAttrExpr>*/
}
var_recv = p0;
var_attribute = p1;
var_t = p2;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrExpr> */
{
((void(*)(val* self, val* p0))(var_recv->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_recv, self); /* parent= on <var_recv:AExpr>*/
}
var = NEW_nit__TAttrid(&type_nit__TAttrid);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TAttrid>*/
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrExpr> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__mproperty_61d]))(self, var_attribute); /* mproperty= on <self:AAttrExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_t); /* mtype= on <self:AAttrExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#AAttrAssignExpr#make for (self: AAttrAssignExpr, AExpr, MAttribute, AExpr) */
void nit__astbuilder___AAttrAssignExpr___make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var /* : TAttrid */;
val* var1 /* : TAssign */;
val* var2 /* : nullable MType */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAttrAssignExpr>*/
}
var_recv = p0;
var_attribute = p1;
var_value = p2;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrAssignExpr> */
{
((void(*)(val* self, val* p0))(var_recv->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_recv, self); /* parent= on <var_recv:AExpr>*/
}
var = NEW_nit__TAttrid(&type_nit__TAttrid);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TAttrid>*/
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrAssignExpr> */
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AAttrAssignExpr> */
{
((void(*)(val* self, val* p0))(var_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_value, self); /* parent= on <var_value:AExpr>*/
}
var1 = NEW_nit__TAssign(&type_nit__TAssign);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:TAssign>*/
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var1; /* _n_assign on <self:AAttrAssignExpr> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__mproperty_61d]))(self, var_attribute); /* mproperty= on <self:AAttrAssignExpr>*/
}
{
var2 = ((val*(*)(val* self))(var_value->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_value); /* mtype on <var_value:AExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var2); /* mtype= on <self:AAttrAssignExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#AVarExpr#make for (self: AVarExpr, Variable, MType) */
void nit__astbuilder___AVarExpr___make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_mtype /* var mtype: MType */;
val* var /* : TId */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AVarExpr>*/
}
var_v = p0;
var_mtype = p1;
var = NEW_nit__TId(&type_nit__TId);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TId>*/
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarExpr> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable_61d]))(self, var_v); /* variable= on <self:AVarExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_mtype); /* mtype= on <self:AVarExpr>*/
}
RET_LABEL:;
}
/* method astbuilder#AVarAssignExpr#make for (self: AVarAssignExpr, Variable, AExpr) */
void nit__astbuilder___AVarAssignExpr___make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_value /* var value: AExpr */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : nullable MType */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AVarAssignExpr>*/
}
var_v = p0;
var_value = p1;
var = NEW_nit__TId(&type_nit__TId);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:TId>*/
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarAssignExpr> */
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AVarAssignExpr> */
{
((void(*)(val* self, val* p0))(var_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_value, self); /* parent= on <var_value:AExpr>*/
}
var1 = NEW_nit__TAssign(&type_nit__TAssign);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:TAssign>*/
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var1; /* _n_assign on <self:AVarAssignExpr> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable_61d]))(self, var_v); /* variable= on <self:AVarAssignExpr>*/
}
{
var2 = ((val*(*)(val* self))(var_value->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_value); /* mtype on <var_value:AExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var2); /* mtype= on <self:AVarAssignExpr>*/
}
RET_LABEL:;
}
