#include "nit__typing.sep.0.h"
/* method typing#ToolContext#typing_phase for (self: ToolContext): Phase */
val* nit__typing___ToolContext___typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ToolContext#typing_phase= for (self: ToolContext, Phase) */
void nit__typing___ToolContext___typing_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ToolContext___typing_phase].val = p0; /* _typing_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method typing#TypingPhase#process_npropdef for (self: TypingPhase, APropdef) */
void nit__typing___nit__typing__TypingPhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var1 /* : ModelBuilder */;
var_npropdef = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:TypingPhase>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(var); /* modelbuilder on <var:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var_npropdef->class->vft[COLOR_nit__typing__APropdef__do_typing]))(var_npropdef, var1); /* do_typing on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#modelbuilder for (self: TypeVisitor): ModelBuilder */
val* nit__typing___nit__typing__TypeVisitor___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#modelbuilder= for (self: TypeVisitor, ModelBuilder) */
void nit__typing___nit__typing__TypeVisitor___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val = p0; /* _modelbuilder on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mmodule for (self: TypeVisitor): MModule */
val* nit__typing___nit__typing__TypeVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mmodule= for (self: TypeVisitor, MModule) */
void nit__typing___nit__typing__TypeVisitor___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val = p0; /* _mmodule on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#anchor for (self: TypeVisitor): nullable MClassType */
val* nit__typing___nit__typing__TypeVisitor___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor= for (self: TypeVisitor, nullable MClassType) */
void nit__typing___nit__typing__TypeVisitor___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val = p0; /* _anchor on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mclassdef for (self: TypeVisitor): nullable MClassDef */
val* nit__typing___nit__typing__TypeVisitor___mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___mclassdef].val; /* _mclassdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mclassdef= for (self: TypeVisitor, nullable MClassDef) */
void nit__typing___nit__typing__TypeVisitor___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___mclassdef].val = p0; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mpropdef for (self: TypeVisitor): nullable MPropDef */
val* nit__typing___nit__typing__TypeVisitor___mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mpropdef= for (self: TypeVisitor, nullable MPropDef) */
void nit__typing___nit__typing__TypeVisitor___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#selfvariable for (self: TypeVisitor): Variable */
val* nit__typing___nit__typing__TypeVisitor___selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#selfvariable= for (self: TypeVisitor, Variable) */
void nit__typing___nit__typing__TypeVisitor___selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val = p0; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#is_toplevel_context for (self: TypeVisitor): Bool */
short int nit__typing___nit__typing__TypeVisitor___is_toplevel_context(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_toplevel_context= for (self: TypeVisitor, Bool) */
void nit__typing___nit__typing__TypeVisitor___is_toplevel_context_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s = p0; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#init for (self: TypeVisitor) */
void nit__typing___nit__typing__TypeVisitor___standard__kernel__Object__init(val* self) {
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var4 /* : MClassType */;
val* var5 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : Variable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var_selfvariable /* var selfvariable: Variable */;
val* var10 /* : MClassType */;
val* var11 /* : MProperty */;
val* var_mprop /* var mprop: MProperty */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef]))(self); /* mpropdef on <self:TypeVisitor>*/
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mpropdef, ((val*)NULL)); /* != on <var_mpropdef:nullable MPropDef>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef_61d]))(self, var_mpropdef); /* mpropdef= on <self:TypeVisitor>*/
}
{
var3 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MPropDef(MPropDef)>*/
}
var_mclassdef = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__mclassdef_61d]))(self, var_mclassdef); /* mclassdef= on <self:TypeVisitor>*/
}
{
var4 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor_61d]))(self, var4); /* anchor= on <self:TypeVisitor>*/
}
{
var5 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
var_mclass = var5;
var6 = NEW_nit__Variable(&type_nit__Variable);
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "self";
var9 = standard___standard__NativeString___to_s_with_length(var8, 4l);
var7 = var9;
varonce = var7;
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__scope__Variable__name_61d]))(var6, var7); /* name= on <var6:Variable>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Variable>*/
}
var_selfvariable = var6;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__selfvariable_61d]))(self, var_selfvariable); /* selfvariable= on <self:TypeVisitor>*/
}
{
var10 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_mclass); /* mclass_type on <var_mclass:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_selfvariable->class->vft[COLOR_nit__typing__Variable__declared_type_61d]))(var_selfvariable, var10); /* declared_type= on <var_selfvariable:Variable>*/
}
{
var11 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MPropDef(MPropDef)>*/
}
var_mprop = var11;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var13 = 0;
} else {
var13 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var13;
if (var13){
{
var14 = ((short int(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_new]))(var_mprop); /* is_new on <var_mprop:MProperty(MMethod)>*/
}
var12 = var14;
} else {
var12 = var_;
}
if (var12){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__is_toplevel_context_61d]))(self, 1); /* is_toplevel_context= on <self:TypeVisitor>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method typing#TypeVisitor#anchor_to for (self: TypeVisitor, MType): MType */
val* nit__typing___nit__typing__TypeVisitor___anchor_to(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MModule */;
val* var7 /* : MType */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor]))(self); /* anchor on <self:TypeVisitor>*/
}
var_anchor = var1;
if (var_anchor == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, ((val*)NULL)); /* == on <var_anchor:nullable MClassType>*/
var2 = var3;
}
if (var2){
{
var4 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var5 = !var4;
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 85);
fatal_exit(1);
}
var = var_mtype;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var6, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_subtype for (self: TypeVisitor, MType, MType): Bool */
short int nit__typing___nit__typing__TypeVisitor___is_subtype(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
val* var1 /* : MModule */;
val* var2 /* : nullable MClassType */;
short int var3 /* : Bool */;
var_sub = p0;
var_sup = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor]))(self); /* anchor on <self:TypeVisitor>*/
}
{
var3 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__is_subtype]))(var_sub, var1, var2, var_sup); /* is_subtype on <var_sub:MType>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_for for (self: TypeVisitor, MType, MType, Bool): MType */
val* nit__typing___nit__typing__TypeVisitor___resolve_for(val* self, val* p0, val* p1, short int p2) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_subtype /* var subtype: MType */;
short int var_for_self /* var for_self: Bool */;
val* var1 /* : nullable MClassType */;
val* var2 /* : MModule */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var_res /* var res: MType */;
var_mtype = p0;
var_subtype = p1;
var_for_self = p2;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor]))(self); /* anchor on <self:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
var3 = !var_for_self;
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var_subtype, var1, var2, var3); /* resolve_for on <var_mtype:MType>*/
}
var_res = var4;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_subtype for (self: TypeVisitor, ANode, MType, MType, Bool): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___check_subtype(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var_autocast /* var autocast: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MType */;
val* var_u /* var u: MType */;
val* var7 /* : ModelBuilder */;
val* var8 /* : NativeArray[String] */;
static val* varonce;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : ModelBuilder */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
var_node = p0;
var_sub = p1;
var_sup = p2;
var_autocast = p3;
{
var1 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(self, var_sub, var_sup); /* is_subtype on <self:TypeVisitor>*/
}
if (var1){
var = var_sub;
goto RET_LABEL;
} else {
}
var_ = var_autocast;
if (var_autocast){
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(self, var_sup); /* anchor_to on <self:TypeVisitor>*/
}
{
var4 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(self, var_sub, var3); /* is_subtype on <self:TypeVisitor>*/
}
var2 = var4;
} else {
var2 = var_;
}
if (var2){
var = var_sup;
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MType__need_anchor]))(var_sub); /* need_anchor on <var_sub:MType>*/
}
if (var5){
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(self, var_sub); /* anchor_to on <self:TypeVisitor>*/
}
var_u = var6;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce==NULL)) {
var8 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Type Error: expected `";
var12 = standard___standard__NativeString___to_s_with_length(var11, 22l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "`, got `";
var16 = standard___standard__NativeString___to_s_with_length(var15, 8l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var8)->values[2]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = ": ";
var20 = standard___standard__NativeString___to_s_with_length(var19, 2l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var8)->values[4]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "`.";
var24 = standard___standard__NativeString___to_s_with_length(var23, 2l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var8)->values[6]=var22;
} else {
var8 = varonce;
varonce = NULL;
}
{
var25 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_standard__NativeArray*)var8)->values[1]=var25;
{
var26 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_standard__NativeArray*)var8)->values[3]=var26;
{
var27 = ((val*(*)(val* self))(var_u->class->vft[COLOR_standard__string__Object__to_s]))(var_u); /* to_s on <var_u:MType>*/
}
((struct instance_standard__NativeArray*)var8)->values[5]=var27;
{
var28 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
((void(*)(val* self, val* p0, val* p1))(var7->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var7, var_node, var28); /* error on <var7:ModelBuilder>*/
}
} else {
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce30==NULL)) {
var31 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Type Error: expected `";
var35 = standard___standard__NativeString___to_s_with_length(var34, 22l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "`, got `";
var39 = standard___standard__NativeString___to_s_with_length(var38, 8l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var31)->values[2]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "`.";
var43 = standard___standard__NativeString___to_s_with_length(var42, 2l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var31)->values[4]=var41;
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
var44 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_standard__NativeArray*)var31)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_standard__NativeArray*)var31)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var31->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
((void(*)(val* self, val* p0, val* p1))(var29->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var29, var_node, var46); /* error on <var29:ModelBuilder>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_stmt for (self: TypeVisitor, nullable AExpr) */
void nit__typing___nit__typing__TypeVisitor___visit_stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_nexpr = p0;
if (var_nexpr == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, ((val*)NULL)); /* == on <var_nexpr:nullable AExpr>*/
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__accept_typing]))(var_nexpr, self); /* accept_typing on <var_nexpr:nullable AExpr(AExpr)>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#visit_expr for (self: TypeVisitor, AExpr): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___visit_expr(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : ModelBuilder */;
val* var7 /* : ToolContext */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : ModelBuilder */;
val* var15 /* : ToolContext */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
var_nexpr = p0;
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__accept_typing]))(var_nexpr, self); /* accept_typing on <var_nexpr:AExpr>*/
}
{
var1 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
}
var_mtype = var1;
if (var_mtype == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mtype, ((val*)NULL)); /* != on <var_mtype:nullable MType>*/
var2 = var3;
}
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__is_typed]))(var_nexpr); /* is_typed on <var_nexpr:AExpr>*/
}
var5 = !var4;
if (var5){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var6); /* toolcontext on <var6:ModelBuilder>*/
}
{
var8 = ((long(*)(val* self))(var7->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var7); /* error_count on <var7:ToolContext>*/
}
{
{ /* Inline kernel#Int#> (var8,0l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var12 = var8 > 0l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var13 = !var9;
if (var13){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var14); /* toolcontext on <var14:ModelBuilder>*/
}
{
var16 = ((long(*)(val* self))(var15->class->vft[COLOR_nit__toolcontext__ToolContext__verbose_level]))(var15); /* verbose_level on <var15:ToolContext>*/
}
{
{ /* Inline kernel#Int#> (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var23 = var16 > 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "No return type but no error.";
var26 = standard___standard__NativeString___to_s_with_length(var25, 28l);
var24 = var26;
varonce = var24;
}
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(var_nexpr, var24); /* debug on <var_nexpr:AExpr>*/
}
} else {
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "Error: expected an expression.";
var30 = standard___standard__NativeString___to_s_with_length(var29, 30l);
var28 = var30;
varonce27 = var28;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__error]))(self, var_nexpr, var28); /* error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_subtype for (self: TypeVisitor, AExpr, nullable MType): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_sup /* var sup: nullable MType */;
val* var1 /* : nullable MType */;
val* var_sub /* var sub: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_nexpr = p0;
var_sup = p1;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(self, var_nexpr); /* visit_expr on <self:TypeVisitor>*/
}
var_sub = var1;
if (var_sub == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_sub->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sub, ((val*)NULL)); /* == on <var_sub:nullable MType>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_sup == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_sup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sup, ((val*)NULL)); /* == on <var_sup:nullable MType>*/
var4 = var5;
}
if (var4){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__typing__TypeVisitor__check_subtype]))(self, var_nexpr, var_sub, var_sup, 1); /* check_subtype on <self:TypeVisitor>*/
}
var_res = var6;
if (var_res == NULL) {
var7 = 1; /* <var_sub:nullable MType(MType)> cannot be null */
} else {
var8 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, var_sub); /* != on <var_res:nullable MType>*/
var7 = var8;
}
if (var7){
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__implicit_cast_to_61d]))(var_nexpr, var_res); /* implicit_cast_to= on <var_nexpr:AExpr>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_bool for (self: TypeVisitor, AExpr): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___visit_expr_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable MType */;
var_nexpr = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__type_bool]))(self, var_nexpr); /* type_bool on <self:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(self, var_nexpr, var1); /* visit_expr_subtype on <self:TypeVisitor>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_cast for (self: TypeVisitor, ANode, AExpr, AType): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___visit_expr_cast(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var_sub /* var sub: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable MType */;
val* var_sup /* var sup: nullable MType */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ModelBuilder */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var13 /* : NativeArray[String] */;
static val* varonce12;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : String */;
val* var23 /* : String */;
short int var24 /* : Bool */;
val* var25 /* : ModelBuilder */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
var_node = p0;
var_nexpr = p1;
var_ntype = p2;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(self, var_nexpr); /* visit_expr on <self:TypeVisitor>*/
}
var_sub = var1;
if (var_sub == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_sub->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sub, ((val*)NULL)); /* == on <var_sub:nullable MType>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__resolve_mtype]))(self, var_ntype); /* resolve_mtype on <self:TypeVisitor>*/
}
var_sup = var4;
if (var_sup == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_sup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sup, ((val*)NULL)); /* == on <var_sup:nullable MType>*/
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var7 = ((short int(*)(val* self, val* p0))(var_sup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sup, var_sub); /* == on <var_sup:nullable MType(MType)>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "useless-type-test";
var11 = standard___standard__NativeString___to_s_with_length(var10, 17l);
var9 = var11;
varonce = var9;
}
if (unlikely(varonce12==NULL)) {
var13 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Warning: expression is already a `";
var17 = standard___standard__NativeString___to_s_with_length(var16, 34l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var13)->values[0]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "`.";
var21 = standard___standard__NativeString___to_s_with_length(var20, 2l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var13)->values[2]=var19;
} else {
var13 = varonce12;
varonce12 = NULL;
}
{
var22 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var13)->values[1]=var22;
{
var23 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce12 = var13;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var8, var_node, var9, var23); /* warning on <var8:ModelBuilder>*/
}
} else {
{
var24 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(self, var_sub, var_sup); /* is_subtype on <self:TypeVisitor>*/
}
if (var24){
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "useless-type-test";
var29 = standard___standard__NativeString___to_s_with_length(var28, 17l);
var27 = var29;
varonce26 = var27;
}
if (unlikely(varonce30==NULL)) {
var31 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Warning: expression is already a `";
var35 = standard___standard__NativeString___to_s_with_length(var34, 34l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "` since it is a `";
var39 = standard___standard__NativeString___to_s_with_length(var38, 17l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var31)->values[2]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "`.";
var43 = standard___standard__NativeString___to_s_with_length(var42, 2l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var31)->values[4]=var41;
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
var44 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var31)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var31)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var31->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var25->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var25, var_node, var27, var46); /* warning on <var25:ModelBuilder>*/
}
} else {
}
}
var = var_sup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#can_be_null for (self: TypeVisitor, MType): Bool */
short int nit__typing___nit__typing__TypeVisitor___can_be_null(val* self, val* p0) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : MType */;
val* var_x /* var x: MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var_14 /* var : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
var_mtype = p0;
/* <var_mtype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var2;
if (var2){
var1 = var_;
} else {
/* <var_mtype:MType> isa MNullType */
cltype4 = type_nit__MNullType.color;
idtype5 = type_nit__MNullType.id;
if(cltype4 >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype4] == idtype5;
}
var1 = var3;
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_mtype:MType> isa MFormalType */
cltype7 = type_nit__MFormalType.color;
idtype8 = type_nit__MFormalType.id;
if(cltype7 >= var_mtype->type->table_size) {
var6 = 0;
} else {
var6 = var_mtype->type->type_table[cltype7] == idtype8;
}
if (var6){
{
var9 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(self, var_mtype); /* anchor_to on <self:TypeVisitor>*/
}
var_x = var9;
/* <var_x:MType> isa MNullableType */
cltype12 = type_nit__MNullableType.color;
idtype13 = type_nit__MNullableType.id;
if(cltype12 >= var_x->type->table_size) {
var11 = 0;
} else {
var11 = var_x->type->type_table[cltype12] == idtype13;
}
var_14 = var11;
if (var11){
var10 = var_14;
} else {
/* <var_x:MType> isa MNullType */
cltype16 = type_nit__MNullType.color;
idtype17 = type_nit__MNullType.id;
if(cltype16 >= var_x->type->table_size) {
var15 = 0;
} else {
var15 = var_x->type->type_table[cltype16] == idtype17;
}
var10 = var15;
}
if (var10){
var = 1;
goto RET_LABEL;
} else {
}
} else {
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_can_be_null for (self: TypeVisitor, ANode, MType): Bool */
short int nit__typing___nit__typing__TypeVisitor___check_can_be_null(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_anode /* var anode: ANode */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : MType */;
val* var_res /* var res: MType */;
val* var4 /* : ModelBuilder */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var9 /* : NativeArray[String] */;
static val* varonce8;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : ModelBuilder */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
val* var41 /* : String */;
var_anode = p0;
var_mtype = p1;
{
var1 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__can_be_null]))(self, var_mtype); /* can_be_null on <self:TypeVisitor>*/
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_mtype:MType> isa MFormalType */
cltype = type_nit__MFormalType.color;
idtype = type_nit__MFormalType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(self, var_mtype); /* anchor_to on <self:TypeVisitor>*/
}
var_res = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "useless-null-test";
var7 = standard___standard__NativeString___to_s_with_length(var6, 17l);
var5 = var7;
varonce = var5;
}
if (unlikely(varonce8==NULL)) {
var9 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Warning: expression is not null, since it is a `";
var13 = standard___standard__NativeString___to_s_with_length(var12, 48l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ": ";
var17 = standard___standard__NativeString___to_s_with_length(var16, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "`.";
var21 = standard___standard__NativeString___to_s_with_length(var20, 2l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var9)->values[4]=var19;
} else {
var9 = varonce8;
varonce8 = NULL;
}
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType(MFormalType)>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var22;
{
var23 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:MType>*/
}
((struct instance_standard__NativeArray*)var9)->values[3]=var23;
{
var24 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce8 = var9;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var4->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var4, var_anode, var5, var24); /* warning on <var4:ModelBuilder>*/
}
} else {
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "useless-null-test";
var29 = standard___standard__NativeString___to_s_with_length(var28, 17l);
var27 = var29;
varonce26 = var27;
}
if (unlikely(varonce30==NULL)) {
var31 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Warning: expression is not null, since it is a `";
var35 = standard___standard__NativeString___to_s_with_length(var34, 48l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "`.";
var39 = standard___standard__NativeString___to_s_with_length(var38, 2l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
var40 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var31)->values[1]=var40;
{
var41 = ((val*(*)(val* self))(var31->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var25->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var25, var_anode, var27, var41); /* warning on <var25:ModelBuilder>*/
}
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#null_test for (self: TypeVisitor, ABinopExpr) */
void nit__typing___nit__typing__TypeVisitor___null_test(val* self, val* p0) {
val* var_anode /* var anode: ABinopExpr */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype2 /* var mtype2: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
short int var10 /* : Bool */;
val* var11 /* : AExpr */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : MType */;
val* var18 /* : AExpr */;
val* var19 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : nullable FlowContext */;
val* var26 /* : FlowContext */;
val* var27 /* : nullable FlowContext */;
val* var28 /* : FlowContext */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : nullable FlowContext */;
val* var33 /* : FlowContext */;
val* var34 /* : nullable FlowContext */;
val* var35 /* : FlowContext */;
var_anode = p0;
{
var = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(var_anode); /* n_expr on <var_anode:ABinopExpr>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__typing__AExpr__mtype]))(var); /* mtype on <var:AExpr>*/
}
var_mtype = var1;
{
var2 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2]))(var_anode); /* n_expr2 on <var_anode:ABinopExpr>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__typing__AExpr__mtype]))(var2); /* mtype on <var2:AExpr>*/
}
var_mtype2 = var3;
if (var_mtype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var5 = var6;
}
var_ = var5;
if (var5){
var4 = var_;
} else {
if (var_mtype2 == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_mtype2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype2, ((val*)NULL)); /* == on <var_mtype2:nullable MType>*/
var7 = var8;
}
var4 = var7;
}
if (var4){
goto RET_LABEL;
} else {
}
/* <var_mtype2:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype2->type->table_size) {
var9 = 0;
} else {
var9 = var_mtype2->type->type_table[cltype] == idtype;
}
var10 = !var9;
if (var10){
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(var_anode); /* n_expr on <var_anode:ABinopExpr>*/
}
{
var12 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__check_can_be_null]))(self, var11, var_mtype); /* check_can_be_null on <self:TypeVisitor>*/
}
var13 = !var12;
if (var13){
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype15 = type_nit__MNullType.color;
idtype16 = type_nit__MNullType.id;
if(cltype15 >= var_mtype->type->table_size) {
var14 = 0;
} else {
var14 = var_mtype->type->type_table[cltype15] == idtype16;
}
if (var14){
var_mtype = ((val*)NULL);
} else {
{
var17 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnull]))(var_mtype); /* as_notnull on <var_mtype:nullable MType(MType)>*/
}
var_mtype = var17;
}
{
var18 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(var_anode); /* n_expr on <var_anode:ABinopExpr>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__typing__AExpr__its_variable]))(var18); /* its_variable on <var18:AExpr>*/
}
var_variable = var19;
if (var_variable == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, ((val*)NULL)); /* == on <var_variable:nullable Variable>*/
var20 = var21;
}
if (var20){
goto RET_LABEL;
} else {
}
/* <var_anode:ABinopExpr> isa AEqExpr */
cltype23 = type_nit__AEqExpr.color;
idtype24 = type_nit__AEqExpr.id;
if(cltype23 >= var_anode->type->table_size) {
var22 = 0;
} else {
var22 = var_anode->type->type_table[cltype23] == idtype24;
}
if (var22){
{
var25 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_anode); /* after_flow_context on <var_anode:ABinopExpr(AEqExpr)>*/
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 259);
fatal_exit(1);
} else {
var26 = ((val*(*)(val* self))(var25->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var25); /* when_true on <var25:nullable FlowContext>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var26->class->vft[COLOR_nit__typing__FlowContext__set_var]))(var26, self, var_variable, var_mtype2); /* set_var on <var26:FlowContext>*/
}
{
var27 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_anode); /* after_flow_context on <var_anode:ABinopExpr(AEqExpr)>*/
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 260);
fatal_exit(1);
} else {
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var27); /* when_false on <var27:nullable FlowContext>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var28->class->vft[COLOR_nit__typing__FlowContext__set_var]))(var28, self, var_variable, var_mtype); /* set_var on <var28:FlowContext>*/
}
} else {
/* <var_anode:ABinopExpr> isa ANeExpr */
cltype30 = type_nit__ANeExpr.color;
idtype31 = type_nit__ANeExpr.id;
if(cltype30 >= var_anode->type->table_size) {
var29 = 0;
} else {
var29 = var_anode->type->type_table[cltype30] == idtype31;
}
if (var29){
{
var32 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_anode); /* after_flow_context on <var_anode:ABinopExpr(ANeExpr)>*/
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 262);
fatal_exit(1);
} else {
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_nit__flow__FlowContext__when_false]))(var32); /* when_false on <var32:nullable FlowContext>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var33->class->vft[COLOR_nit__typing__FlowContext__set_var]))(var33, self, var_variable, var_mtype2); /* set_var on <var33:FlowContext>*/
}
{
var34 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_anode); /* after_flow_context on <var_anode:ABinopExpr(ANeExpr)>*/
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 263);
fatal_exit(1);
} else {
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var34); /* when_true on <var34:nullable FlowContext>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var35->class->vft[COLOR_nit__typing__FlowContext__set_var]))(var35, self, var_variable, var_mtype); /* set_var on <var35:FlowContext>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 265);
fatal_exit(1);
}
}
RET_LABEL:;
}
/* method typing#TypeVisitor#try_get_mproperty_by_name2 for (self: TypeVisitor, ANode, MType, String): nullable MProperty */
val* nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var2 /* : MModule */;
val* var3 /* : nullable MProperty */;
var_anode = p0;
var_mtype = p1;
var_name = p2;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name2]))(var1, var_anode, var2, var_mtype, var_name); /* try_get_mproperty_by_name2 on <var1:ModelBuilder>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_mtype for (self: TypeVisitor, AType): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___resolve_mtype(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_node /* var node: AType */;
val* var1 /* : ModelBuilder */;
val* var2 /* : MModule */;
val* var3 /* : nullable MClassDef */;
val* var4 /* : nullable MType */;
var_node = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mclassdef]))(self); /* mclassdef on <self:TypeVisitor>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype]))(var1, var2, var3, var_node); /* resolve_mtype on <var1:ModelBuilder>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* nit__typing___nit__typing__TypeVisitor___try_get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var2 /* : MModule */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
var_node = p0;
var_name = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(var1, var_node, var2, var_name); /* try_get_mclass_by_name on <var1:ModelBuilder>*/
}
var_mclass = var3;
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* nit__typing___nit__typing__TypeVisitor___get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var2 /* : MModule */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
var_node = p0;
var_name = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__get_mclass_by_name]))(var1, var_node, var2, var_name); /* get_mclass_by_name on <var1:ModelBuilder>*/
}
var_mclass = var3;
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#type_bool for (self: TypeVisitor, ANode): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___type_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MClassType */;
var_node = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Bool";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(self, var_node, var1); /* get_mclass on <self:TypeVisitor>*/
}
var_mclass = var4;
if (var_mclass == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_mclass); /* mclass_type on <var_mclass:nullable MClass(MClass)>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
val* nit__typing___nit__typing__TypeVisitor___get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable CallSite */;
val* var_node /* var node: ANode */;
val* var_recvtype /* var recvtype: MType */;
val* var_name /* var name: String */;
short int var_recv_is_self /* var recv_is_self: Bool */;
val* var1 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
short int var13 /* : Bool */;
short int var_14 /* var : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : nullable MClass */;
val* var_objclass /* var objclass: nullable MClass */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MClassType */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var39 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
val* var53 /* : nullable MProperty */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : ModelBuilder */;
val* var58 /* : NativeArray[String] */;
static val* varonce57;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
val* var71 /* : String */;
val* var72 /* : String */;
short int var73 /* : Bool */;
val* var74 /* : ModelBuilder */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : ModelBuilder */;
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
val* var111 /* : String */;
val* var112 /* : String */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var_119 /* var : Bool */;
short int var_120 /* var : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
val* var133 /* : String */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var_136 /* var : Bool */;
short int var137 /* : Bool */;
val* var139 /* : NativeArray[String] */;
static val* varonce138;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : FlatString */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : FlatString */;
val* var148 /* : String */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
val* var152 /* : MVisibility */;
val* var153 /* : Sys */;
val* var154 /* : MVisibility */;
short int var155 /* : Bool */;
short int var_156 /* var : Bool */;
short int var157 /* : Bool */;
short int var_158 /* var : Bool */;
val* var159 /* : MModule */;
val* var160 /* : MClassDef */;
val* var161 /* : MModule */;
val* var162 /* : MVisibility */;
val* var163 /* : Sys */;
val* var164 /* : MVisibility */;
short int var165 /* : Bool */;
short int var_166 /* var : Bool */;
val* var167 /* : ModelBuilder */;
val* var168 /* : ToolContext */;
val* var169 /* : OptionBool */;
val* var170 /* : nullable Object */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
val* var173 /* : ModelBuilder */;
val* var175 /* : NativeArray[String] */;
static val* varonce174;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : FlatString */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : FlatString */;
val* var184 /* : String */;
val* var185 /* : nullable MDeprecationInfo */;
val* var_info /* var info: nullable MDeprecationInfo */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
short int var_189 /* var : Bool */;
val* var190 /* : nullable MPropDef */;
val* var191 /* : MProperty */;
val* var192 /* : nullable MDeprecationInfo */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
val* var195 /* : nullable MDoc */;
val* var_mdoc /* var mdoc: nullable MDoc */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
val* var198 /* : ModelBuilder */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : FlatString */;
val* var204 /* : NativeArray[String] */;
static val* varonce203;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : FlatString */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
val* var212 /* : FlatString */;
val* var213 /* : Array[String] */;
val* var214 /* : nullable Object */;
val* var215 /* : String */;
val* var216 /* : ModelBuilder */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
val* var220 /* : FlatString */;
val* var222 /* : NativeArray[String] */;
static val* varonce221;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
val* var226 /* : FlatString */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : NativeString */;
val* var230 /* : FlatString */;
val* var231 /* : String */;
val* var232 /* : MModule */;
val* var233 /* : Array[MPropDef] */;
val* var_propdefs /* var propdefs: Array[MMethodDef] */;
long var234 /* : Int */;
short int var235 /* : Bool */;
short int var237 /* : Bool */;
val* var238 /* : ModelBuilder */;
val* var240 /* : NativeArray[String] */;
static val* varonce239;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
val* var244 /* : FlatString */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
val* var248 /* : FlatString */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : NativeString */;
val* var252 /* : FlatString */;
val* var253 /* : String */;
val* var254 /* : String */;
long var255 /* : Int */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
val* var259 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable Object */;
val* var260 /* : ModelBuilder */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
val* var264 /* : FlatString */;
val* var266 /* : NativeArray[String] */;
static val* varonce265;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
val* var270 /* : FlatString */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
val* var274 /* : FlatString */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
val* var278 /* : FlatString */;
val* var279 /* : String */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
val* var283 /* : FlatString */;
val* var284 /* : String */;
val* var285 /* : String */;
val* var286 /* : MPropDef */;
val* var287 /* : nullable MSignature */;
val* var288 /* : nullable MSignature */;
val* var289 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
val* var292 /* : MType */;
short int var293 /* : Bool */;
int cltype294;
int idtype295;
const char* var_class_name;
short int var_erasure_cast /* var erasure_cast: Bool */;
val* var296 /* : nullable MSignature */;
val* var297 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
short int var_300 /* var : Bool */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
val* var303 /* : MType */;
short int var304 /* : Bool */;
int cltype305;
int idtype306;
val* var307 /* : nullable MType */;
val* var_erased_rettype /* var erased_rettype: nullable MType */;
short int var308 /* : Bool */;
short int var309 /* : Bool */;
val* var310 /* : CallSite */;
val* var311 /* : MModule */;
val* var312 /* : nullable MClassType */;
val* var_callsite /* var callsite: CallSite */;
var_node = p0;
var_recvtype = p1;
var_name = p2;
var_recv_is_self = p3;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(self, var_recvtype); /* anchor_to on <self:TypeVisitor>*/
}
var_unsafe_type = var1;
/* <var_recvtype:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var2 = 0;
} else {
var2 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var2){
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "==";
var7 = standard___standard__NativeString___to_s_with_length(var6, 2l);
var5 = var7;
varonce = var5;
}
{
var8 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var5); /* == on <var_name:String>*/
}
var_ = var8;
if (var8){
var4 = var_;
} else {
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "!=";
var12 = standard___standard__NativeString___to_s_with_length(var11, 2l);
var10 = var12;
varonce9 = var10;
}
{
var13 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var10); /* == on <var_name:String>*/
}
var4 = var13;
}
var_14 = var4;
if (var4){
var3 = var_14;
} else {
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "is_same_instance";
var18 = standard___standard__NativeString___to_s_with_length(var17, 16l);
var16 = var18;
varonce15 = var16;
}
{
var19 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var16); /* == on <var_name:String>*/
}
var3 = var19;
}
if (var3){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Object";
var23 = standard___standard__NativeString___to_s_with_length(var22, 6l);
var21 = var23;
varonce20 = var21;
}
{
var24 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(self, var_node, var21); /* get_mclass on <self:TypeVisitor>*/
}
var_objclass = var24;
if (var_objclass == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
var26 = ((short int(*)(val* self, val* p0))(var_objclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_objclass, ((val*)NULL)); /* == on <var_objclass:nullable MClass>*/
var25 = var26;
}
if (var25){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var27 = ((val*(*)(val* self))(var_objclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_objclass); /* mclass_type on <var_objclass:nullable MClass(MClass)>*/
}
var_unsafe_type = var27;
} else {
if (unlikely(varonce28==NULL)) {
var29 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Error: method `";
var33 = standard___standard__NativeString___to_s_with_length(var32, 15l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "` called on `null`.";
var37 = standard___standard__NativeString___to_s_with_length(var36, 19l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[2]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_standard__NativeArray*)var29)->values[1]=var_name;
{
var38 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__error]))(self, var_node, var38); /* error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
}
} else {
}
{
var39 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mproperty_by_name2]))(self, var_node, var_unsafe_type, var_name); /* try_get_mproperty_by_name2 on <self:TypeVisitor>*/
}
var_mproperty = var39;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "new";
var44 = standard___standard__NativeString___to_s_with_length(var43, 3l);
var42 = var44;
varonce41 = var42;
}
{
var45 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var42); /* == on <var_name:String>*/
}
var_46 = var45;
if (var45){
if (var_mproperty == NULL) {
var47 = 1; /* is null */
} else {
var47 = 0; /* arg is null but recv is not */
}
if (0) {
var48 = ((short int(*)(val* self, val* p0))(var_mproperty->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mproperty, ((val*)NULL)); /* == on <var_mproperty:nullable MProperty>*/
var47 = var48;
}
var40 = var47;
} else {
var40 = var_46;
}
if (var40){
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "init";
var52 = standard___standard__NativeString___to_s_with_length(var51, 4l);
var50 = var52;
varonce49 = var50;
}
var_name = var50;
{
var53 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mproperty_by_name2]))(self, var_node, var_unsafe_type, var_name); /* try_get_mproperty_by_name2 on <self:TypeVisitor>*/
}
var_mproperty = var53;
} else {
}
if (var_mproperty == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
var55 = ((short int(*)(val* self, val* p0))(var_mproperty->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mproperty, ((val*)NULL)); /* == on <var_mproperty:nullable MProperty>*/
var54 = var55;
}
if (var54){
if (var_recv_is_self){
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce57==NULL)) {
var58 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "Error: method or variable `";
var62 = standard___standard__NativeString___to_s_with_length(var61, 27l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var58)->values[0]=var60;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "` unknown in `";
var66 = standard___standard__NativeString___to_s_with_length(var65, 14l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var58)->values[2]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "`.";
var70 = standard___standard__NativeString___to_s_with_length(var69, 2l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var58)->values[4]=var68;
} else {
var58 = varonce57;
varonce57 = NULL;
}
((struct instance_standard__NativeArray*)var58)->values[1]=var_name;
{
var71 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_standard__NativeArray*)var58)->values[3]=var71;
{
var72 = ((val*(*)(val* self))(var58->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce57 = var58;
{
((void(*)(val* self, val* p0, val* p1))(var56->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var56, var_node, var72); /* error on <var56:ModelBuilder>*/
}
} else {
{
var73 = ((short int(*)(val* self))(var_recvtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_recvtype); /* need_anchor on <var_recvtype:MType>*/
}
if (var73){
{
var74 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce75==NULL)) {
var76 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "Error: method `";
var80 = standard___standard__NativeString___to_s_with_length(var79, 15l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var76)->values[0]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "` does not exists in `";
var84 = standard___standard__NativeString___to_s_with_length(var83, 22l);
var82 = var84;
varonce81 = var82;
}
((struct instance_standard__NativeArray*)var76)->values[2]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = ": ";
var88 = standard___standard__NativeString___to_s_with_length(var87, 2l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var76)->values[4]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "`.";
var92 = standard___standard__NativeString___to_s_with_length(var91, 2l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var76)->values[6]=var90;
} else {
var76 = varonce75;
varonce75 = NULL;
}
((struct instance_standard__NativeArray*)var76)->values[1]=var_name;
{
var93 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_standard__NativeArray*)var76)->values[3]=var93;
{
var94 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_standard__string__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_standard__NativeArray*)var76)->values[5]=var94;
{
var95 = ((val*(*)(val* self))(var76->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
((void(*)(val* self, val* p0, val* p1))(var74->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var74, var_node, var95); /* error on <var74:ModelBuilder>*/
}
} else {
{
var96 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce97==NULL)) {
var98 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "Error: method `";
var102 = standard___standard__NativeString___to_s_with_length(var101, 15l);
var100 = var102;
varonce99 = var100;
}
((struct instance_standard__NativeArray*)var98)->values[0]=var100;
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "` does not exists in `";
var106 = standard___standard__NativeString___to_s_with_length(var105, 22l);
var104 = var106;
varonce103 = var104;
}
((struct instance_standard__NativeArray*)var98)->values[2]=var104;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "`.";
var110 = standard___standard__NativeString___to_s_with_length(var109, 2l);
var108 = var110;
varonce107 = var108;
}
((struct instance_standard__NativeArray*)var98)->values[4]=var108;
} else {
var98 = varonce97;
varonce97 = NULL;
}
((struct instance_standard__NativeArray*)var98)->values[1]=var_name;
{
var111 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_standard__NativeArray*)var98)->values[3]=var111;
{
var112 = ((val*(*)(val* self))(var98->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
{
((void(*)(val* self, val* p0, val* p1))(var96->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var96, var_node, var112); /* error on <var96:ModelBuilder>*/
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MMethod */
cltype114 = type_nit__MMethod.color;
idtype115 = type_nit__MMethod.id;
if(cltype114 >= var_mproperty->type->table_size) {
var113 = 0;
} else {
var113 = var_mproperty->type->type_table[cltype114] == idtype115;
}
if (unlikely(!var113)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 332);
fatal_exit(1);
}
{
var118 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__is_toplevel_context]))(self); /* is_toplevel_context on <self:TypeVisitor>*/
}
var_119 = var118;
if (var118){
var117 = var_recv_is_self;
} else {
var117 = var_119;
}
var_120 = var117;
if (var117){
{
var121 = ((short int(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MMethod__is_toplevel]))(var_mproperty); /* is_toplevel on <var_mproperty:nullable MProperty(MMethod)>*/
}
var122 = !var121;
var116 = var122;
} else {
var116 = var_120;
}
if (var116){
if (unlikely(varonce123==NULL)) {
var124 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Error: `";
var128 = standard___standard__NativeString___to_s_with_length(var127, 8l);
var126 = var128;
varonce125 = var126;
}
((struct instance_standard__NativeArray*)var124)->values[0]=var126;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "` is not a top-level method, thus need a receiver.";
var132 = standard___standard__NativeString___to_s_with_length(var131, 50l);
var130 = var132;
varonce129 = var130;
}
((struct instance_standard__NativeArray*)var124)->values[2]=var130;
} else {
var124 = varonce123;
varonce123 = NULL;
}
((struct instance_standard__NativeArray*)var124)->values[1]=var_name;
{
var133 = ((val*(*)(val* self))(var124->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__error]))(self, var_node, var133); /* error on <self:TypeVisitor>*/
}
} else {
}
var135 = !var_recv_is_self;
var_136 = var135;
if (var135){
{
var137 = ((short int(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MMethod__is_toplevel]))(var_mproperty); /* is_toplevel on <var_mproperty:nullable MProperty(MMethod)>*/
}
var134 = var137;
} else {
var134 = var_136;
}
if (var134){
if (unlikely(varonce138==NULL)) {
var139 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "Error: cannot call `";
var143 = standard___standard__NativeString___to_s_with_length(var142, 20l);
var141 = var143;
varonce140 = var141;
}
((struct instance_standard__NativeArray*)var139)->values[0]=var141;
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "`, a top-level method, with a receiver.";
var147 = standard___standard__NativeString___to_s_with_length(var146, 39l);
var145 = var147;
varonce144 = var145;
}
((struct instance_standard__NativeArray*)var139)->values[2]=var145;
} else {
var139 = varonce138;
varonce138 = NULL;
}
((struct instance_standard__NativeArray*)var139)->values[1]=var_name;
{
var148 = ((val*(*)(val* self))(var139->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var139); /* native_to_s on <var139:NativeArray[String]>*/
}
varonce138 = var139;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__error]))(self, var_node, var148); /* error on <self:TypeVisitor>*/
}
} else {
}
{
var152 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mproperty); /* visibility on <var_mproperty:nullable MProperty(MMethod)>*/
}
var153 = glob_sys;
{
var154 = ((val*(*)(val* self))(var153->class->vft[COLOR_nit__model_base__Sys__protected_visibility]))(var153); /* protected_visibility on <var153:Sys>*/
}
{
var155 = ((short int(*)(val* self, val* p0))(var152->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var152, var154); /* == on <var152:MVisibility>*/
}
var_156 = var155;
if (var155){
var157 = !var_recv_is_self;
var151 = var157;
} else {
var151 = var_156;
}
var_158 = var151;
if (var151){
{
var159 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
{
var160 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:nullable MProperty(MMethod)>*/
}
{
var161 = ((val*(*)(val* self))(var160->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var160); /* mmodule on <var160:MClassDef>*/
}
{
var162 = ((val*(*)(val* self, val* p0))(var159->class->vft[COLOR_nit__mmodule__MModule__visibility_for]))(var159, var161); /* visibility_for on <var159:MModule>*/
}
var163 = glob_sys;
{
var164 = ((val*(*)(val* self))(var163->class->vft[COLOR_nit__model_base__Sys__intrude_visibility]))(var163); /* intrude_visibility on <var163:Sys>*/
}
{
var165 = ((short int(*)(val* self, val* p0))(var162->class->vft[COLOR_standard__kernel__Comparable___60d]))(var162, var164); /* < on <var162:MVisibility>*/
}
var150 = var165;
} else {
var150 = var_158;
}
var_166 = var150;
if (var150){
{
var167 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
{
var168 = ((val*(*)(val* self))(var167->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var167); /* toolcontext on <var167:ModelBuilder>*/
}
{
var169 = ((val*(*)(val* self))(var168->class->vft[COLOR_nit__modelbuilder__ToolContext__opt_ignore_visibility]))(var168); /* opt_ignore_visibility on <var168:ToolContext>*/
}
{
var170 = ((val*(*)(val* self))(var169->class->vft[COLOR_opts__Option__value]))(var169); /* value on <var169:OptionBool>*/
}
var171 = (short int)((long)(var170)>>2);
var172 = !var171;
var149 = var172;
} else {
var149 = var_166;
}
if (var149){
{
var173 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce174==NULL)) {
var175 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "Error: method `";
var179 = standard___standard__NativeString___to_s_with_length(var178, 15l);
var177 = var179;
varonce176 = var177;
}
((struct instance_standard__NativeArray*)var175)->values[0]=var177;
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "` is protected and can only accessed by `self`.";
var183 = standard___standard__NativeString___to_s_with_length(var182, 47l);
var181 = var183;
varonce180 = var181;
}
((struct instance_standard__NativeArray*)var175)->values[2]=var181;
} else {
var175 = varonce174;
varonce174 = NULL;
}
((struct instance_standard__NativeArray*)var175)->values[1]=var_name;
{
var184 = ((val*(*)(val* self))(var175->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var175); /* native_to_s on <var175:NativeArray[String]>*/
}
varonce174 = var175;
{
((void(*)(val* self, val* p0, val* p1))(var173->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var173, var_node, var184); /* error on <var173:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var185 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__mdoc__MEntity__deprecation]))(var_mproperty); /* deprecation on <var_mproperty:nullable MProperty(MMethod)>*/
}
var_info = var185;
if (var_info == NULL) {
var187 = 0; /* is null */
} else {
var187 = 1; /* arg is null and recv is not */
}
if (0) {
var188 = ((short int(*)(val* self, val* p0))(var_info->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_info, ((val*)NULL)); /* != on <var_info:nullable MDeprecationInfo>*/
var187 = var188;
}
var_189 = var187;
if (var187){
{
var190 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef]))(self); /* mpropdef on <self:TypeVisitor>*/
}
if (var190 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 347);
fatal_exit(1);
} else {
var191 = ((val*(*)(val* self))(var190->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var190); /* mproperty on <var190:nullable MPropDef>*/
}
{
var192 = ((val*(*)(val* self))(var191->class->vft[COLOR_nit__mdoc__MEntity__deprecation]))(var191); /* deprecation on <var191:MProperty>*/
}
if (var192 == NULL) {
var193 = 1; /* is null */
} else {
var193 = 0; /* arg is null but recv is not */
}
if (0) {
var194 = ((short int(*)(val* self, val* p0))(var192->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var192, ((val*)NULL)); /* == on <var192:nullable MDeprecationInfo>*/
var193 = var194;
}
var186 = var193;
} else {
var186 = var_189;
}
if (var186){
{
var195 = ((val*(*)(val* self))(var_info->class->vft[COLOR_nit__mdoc__MDeprecationInfo__mdoc]))(var_info); /* mdoc on <var_info:nullable MDeprecationInfo(MDeprecationInfo)>*/
}
var_mdoc = var195;
if (var_mdoc == NULL) {
var196 = 0; /* is null */
} else {
var196 = 1; /* arg is null and recv is not */
}
if (0) {
var197 = ((short int(*)(val* self, val* p0))(var_mdoc->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mdoc, ((val*)NULL)); /* != on <var_mdoc:nullable MDoc>*/
var196 = var197;
}
if (var196){
{
var198 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "deprecated-method";
var202 = standard___standard__NativeString___to_s_with_length(var201, 17l);
var200 = var202;
varonce199 = var200;
}
if (unlikely(varonce203==NULL)) {
var204 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "Deprecation Warning: method `";
var208 = standard___standard__NativeString___to_s_with_length(var207, 29l);
var206 = var208;
varonce205 = var206;
}
((struct instance_standard__NativeArray*)var204)->values[0]=var206;
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = "` is deprecated: ";
var212 = standard___standard__NativeString___to_s_with_length(var211, 17l);
var210 = var212;
varonce209 = var210;
}
((struct instance_standard__NativeArray*)var204)->values[2]=var210;
} else {
var204 = varonce203;
varonce203 = NULL;
}
((struct instance_standard__NativeArray*)var204)->values[1]=var_name;
{
var213 = ((val*(*)(val* self))(var_mdoc->class->vft[COLOR_nit__mdoc__MDoc__content]))(var_mdoc); /* content on <var_mdoc:nullable MDoc(MDoc)>*/
}
{
var214 = ((val*(*)(val* self))(var213->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var213); /* first on <var213:Array[String]>*/
}
((struct instance_standard__NativeArray*)var204)->values[3]=var214;
{
var215 = ((val*(*)(val* self))(var204->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var204); /* native_to_s on <var204:NativeArray[String]>*/
}
varonce203 = var204;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var198->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var198, var_node, var200, var215); /* warning on <var198:ModelBuilder>*/
}
} else {
{
var216 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = "deprecated-method";
var220 = standard___standard__NativeString___to_s_with_length(var219, 17l);
var218 = var220;
varonce217 = var218;
}
if (unlikely(varonce221==NULL)) {
var222 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce223!=NULL)) {
var224 = varonce223;
} else {
var225 = "Deprecation Warning: method `";
var226 = standard___standard__NativeString___to_s_with_length(var225, 29l);
var224 = var226;
varonce223 = var224;
}
((struct instance_standard__NativeArray*)var222)->values[0]=var224;
if (likely(varonce227!=NULL)) {
var228 = varonce227;
} else {
var229 = "` is deprecated.";
var230 = standard___standard__NativeString___to_s_with_length(var229, 16l);
var228 = var230;
varonce227 = var228;
}
((struct instance_standard__NativeArray*)var222)->values[2]=var228;
} else {
var222 = varonce221;
varonce221 = NULL;
}
((struct instance_standard__NativeArray*)var222)->values[1]=var_name;
{
var231 = ((val*(*)(val* self))(var222->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var222); /* native_to_s on <var222:NativeArray[String]>*/
}
varonce221 = var222;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var216->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var216, var_node, var218, var231); /* warning on <var216:ModelBuilder>*/
}
}
} else {
}
{
var232 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
{
var233 = ((val*(*)(val* self, val* p0, val* p1))(var_mproperty->class->vft[COLOR_nit__model__MProperty__lookup_definitions]))(var_mproperty, var232, var_unsafe_type); /* lookup_definitions on <var_mproperty:nullable MProperty(MMethod)>*/
}
var_propdefs = var233;
{
var234 = ((long(*)(val* self))(var_propdefs->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_propdefs); /* length on <var_propdefs:Array[MMethodDef]>*/
}
{
{ /* Inline kernel#Int#== (var234,0l) on <var234:Int> */
var237 = var234 == 0l;
var235 = var237;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
}
if (var235){
{
var238 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce239==NULL)) {
var240 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "Type Error: no definition found for property `";
var244 = standard___standard__NativeString___to_s_with_length(var243, 46l);
var242 = var244;
varonce241 = var242;
}
((struct instance_standard__NativeArray*)var240)->values[0]=var242;
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = "` in `";
var248 = standard___standard__NativeString___to_s_with_length(var247, 6l);
var246 = var248;
varonce245 = var246;
}
((struct instance_standard__NativeArray*)var240)->values[2]=var246;
if (likely(varonce249!=NULL)) {
var250 = varonce249;
} else {
var251 = "`.";
var252 = standard___standard__NativeString___to_s_with_length(var251, 2l);
var250 = var252;
varonce249 = var250;
}
((struct instance_standard__NativeArray*)var240)->values[4]=var250;
} else {
var240 = varonce239;
varonce239 = NULL;
}
((struct instance_standard__NativeArray*)var240)->values[1]=var_name;
{
var253 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_standard__string__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_standard__NativeArray*)var240)->values[3]=var253;
{
var254 = ((val*(*)(val* self))(var240->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var240); /* native_to_s on <var240:NativeArray[String]>*/
}
varonce239 = var240;
{
((void(*)(val* self, val* p0, val* p1))(var238->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var238, var_node, var254); /* error on <var238:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var255 = ((long(*)(val* self))(var_propdefs->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_propdefs); /* length on <var_propdefs:Array[MMethodDef]>*/
}
{
{ /* Inline kernel#Int#== (var255,1l) on <var255:Int> */
var258 = var255 == 1l;
var256 = var258;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
if (var256){
{
var259 = ((val*(*)(val* self))(var_propdefs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_propdefs); /* first on <var_propdefs:Array[MMethodDef]>*/
}
var_mpropdef = var259;
} else {
{
var260 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "property-conflict";
var264 = standard___standard__NativeString___to_s_with_length(var263, 17l);
var262 = var264;
varonce261 = var262;
}
if (unlikely(varonce265==NULL)) {
var266 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = "Warning: conflicting property definitions for property `";
var270 = standard___standard__NativeString___to_s_with_length(var269, 56l);
var268 = var270;
varonce267 = var268;
}
((struct instance_standard__NativeArray*)var266)->values[0]=var268;
if (likely(varonce271!=NULL)) {
var272 = varonce271;
} else {
var273 = "` in `";
var274 = standard___standard__NativeString___to_s_with_length(var273, 6l);
var272 = var274;
varonce271 = var272;
}
((struct instance_standard__NativeArray*)var266)->values[2]=var272;
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = "`: ";
var278 = standard___standard__NativeString___to_s_with_length(var277, 3l);
var276 = var278;
varonce275 = var276;
}
((struct instance_standard__NativeArray*)var266)->values[4]=var276;
} else {
var266 = varonce265;
varonce265 = NULL;
}
((struct instance_standard__NativeArray*)var266)->values[1]=var_name;
{
var279 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_standard__string__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_standard__NativeArray*)var266)->values[3]=var279;
if (likely(varonce280!=NULL)) {
var281 = varonce280;
} else {
var282 = " ";
var283 = standard___standard__NativeString___to_s_with_length(var282, 1l);
var281 = var283;
varonce280 = var281;
}
{
var284 = ((val*(*)(val* self, val* p0))(var_propdefs->class->vft[COLOR_standard__string__Collection__join]))(var_propdefs, var281); /* join on <var_propdefs:Array[MMethodDef]>*/
}
((struct instance_standard__NativeArray*)var266)->values[5]=var284;
{
var285 = ((val*(*)(val* self))(var266->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var266); /* native_to_s on <var266:NativeArray[String]>*/
}
varonce265 = var266;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var260->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var260, var_node, var262, var285); /* warning on <var260:ModelBuilder>*/
}
{
var286 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro]))(var_mproperty); /* intro on <var_mproperty:nullable MProperty(MMethod)>*/
}
var_mpropdef = var286;
}
}
{
var288 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__new_msignature]))(var_mpropdef); /* new_msignature on <var_mpropdef:nullable Object(MMethodDef)>*/
}
if (var288!=NULL) {
var287 = var288;
} else {
{
var289 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:nullable Object(MMethodDef)>*/
}
var287 = var289;
}
var_msignature = var287;
if (var_msignature == NULL) {
var290 = 1; /* is null */
} else {
var290 = 0; /* arg is null but recv is not */
}
if (0) {
var291 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, ((val*)NULL)); /* == on <var_msignature:nullable MSignature>*/
var290 = var291;
}
if (var290){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var292 = ((val*(*)(val* self, val* p0, val* p1, short int p2))(self->class->vft[COLOR_nit__typing__TypeVisitor__resolve_for]))(self, var_msignature, var_recvtype, var_recv_is_self); /* resolve_for on <self:TypeVisitor>*/
}
/* <var292:MType> isa MSignature */
cltype294 = type_nit__MSignature.color;
idtype295 = type_nit__MSignature.id;
if(cltype294 >= var292->type->table_size) {
var293 = 0;
} else {
var293 = var292->type->type_table[cltype294] == idtype295;
}
if (unlikely(!var293)) {
var_class_name = var292 == NULL ? "null" : var292->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 371);
fatal_exit(1);
}
var_msignature = var292;
var_erasure_cast = 0;
{
var296 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:nullable Object(MMethodDef)>*/
}
if (var296 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 374);
fatal_exit(1);
} else {
var297 = ((val*(*)(val* self))(var296->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var296); /* return_mtype on <var296:nullable MSignature>*/
}
var_rettype = var297;
var299 = !var_recv_is_self;
var_300 = var299;
if (var299){
if (var_rettype == NULL) {
var301 = 0; /* is null */
} else {
var301 = 1; /* arg is null and recv is not */
}
if (0) {
var302 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_rettype, ((val*)NULL)); /* != on <var_rettype:nullable MType>*/
var301 = var302;
}
var298 = var301;
} else {
var298 = var_300;
}
if (var298){
{
var303 = ((val*(*)(val* self))(var_rettype->class->vft[COLOR_nit__model__MType__undecorate]))(var_rettype); /* undecorate on <var_rettype:nullable MType(MType)>*/
}
var_rettype = var303;
/* <var_rettype:nullable MType(MType)> isa MParameterType */
cltype305 = type_nit__MParameterType.color;
idtype306 = type_nit__MParameterType.id;
if(cltype305 >= var_rettype->type->table_size) {
var304 = 0;
} else {
var304 = var_rettype->type->type_table[cltype305] == idtype306;
}
if (var304){
{
var307 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_msignature); /* return_mtype on <var_msignature:nullable MSignature(MSignature)>*/
}
var_erased_rettype = var307;
if (var_erased_rettype == NULL) {
var308 = 0; /* is null */
} else {
var308 = 1; /* arg is null and recv is not */
}
if (0) {
var309 = ((short int(*)(val* self, val* p0))(var_erased_rettype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_erased_rettype, ((val*)NULL)); /* != on <var_erased_rettype:nullable MType>*/
var308 = var309;
}
if (unlikely(!var308)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 379);
fatal_exit(1);
}
var_erasure_cast = 1;
} else {
}
} else {
}
var310 = NEW_nit__CallSite(&type_nit__CallSite);
{
var311 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(self); /* mmodule on <self:TypeVisitor>*/
}
{
var312 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor]))(self); /* anchor on <self:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var310->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var310, var_node); /* node= on <var310:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var310->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var310, var_recvtype); /* recv= on <var310:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var310->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var310, var311); /* mmodule= on <var310:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var310->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var310, var312); /* anchor= on <var310:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var310->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var310, var_recv_is_self); /* recv_is_self= on <var310:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var310->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var310, var_mproperty); /* mproperty= on <var310:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var310->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var310, var_mpropdef); /* mpropdef= on <var310:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var310->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var310, var_msignature); /* msignature= on <var310:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var310->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var310, var_erasure_cast); /* erasure_cast= on <var310:CallSite>*/
}
{
((void(*)(val* self))(var310->class->vft[COLOR_standard__kernel__Object__init]))(var310); /* init on <var310:CallSite>*/
}
var_callsite = var310;
var = var_callsite;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
val* nit__typing___nit__typing__TypeVisitor___try_get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable CallSite */;
val* var_node /* var node: ANode */;
val* var_recvtype /* var recvtype: MType */;
val* var_name /* var name: String */;
short int var_recv_is_self /* var recv_is_self: Bool */;
val* var1 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var2 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable CallSite */;
var_node = p0;
var_recvtype = p1;
var_name = p2;
var_recv_is_self = p3;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(self, var_recvtype); /* anchor_to on <self:TypeVisitor>*/
}
var_unsafe_type = var1;
{
var2 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mproperty_by_name2]))(self, var_node, var_unsafe_type, var_name); /* try_get_mproperty_by_name2 on <self:TypeVisitor>*/
}
var_mproperty = var2;
if (var_mproperty == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_mproperty->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mproperty, ((val*)NULL)); /* == on <var_mproperty:nullable MProperty>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(self, var_node, var_recvtype, var_name, var_recv_is_self); /* get_method on <self:TypeVisitor>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_signature for (self: TypeVisitor, ANode, Array[AExpr], MProperty, MSignature): nullable SignatureMap */
val* nit__typing___nit__typing__TypeVisitor___check_signature(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : nullable SignatureMap */;
val* var_node /* var node: ANode */;
val* var_args /* var args: Array[AExpr] */;
val* var_mproperty /* var mproperty: MProperty */;
val* var_msignature /* var msignature: MSignature */;
long var1 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : ModelBuilder */;
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
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : String */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : ModelBuilder */;
val* var58 /* : NativeArray[String] */;
static val* varonce57;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
long var83 /* : Int */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var86 /* : String */;
long var87 /* : Int */;
long var88 /* : Int */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
short int var95 /* : Bool */;
val* var96 /* : ModelBuilder */;
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var122 /* : String */;
long var123 /* : Int */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : String */;
long var127 /* : Int */;
long var128 /* : Int */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
const char* var_class_name134;
short int var135 /* : Bool */;
val* var136 /* : ModelBuilder */;
val* var138 /* : NativeArray[String] */;
static val* varonce137;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
val* var142 /* : FlatString */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : FlatString */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : FlatString */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : FlatString */;
long var159 /* : Int */;
val* var160 /* : String */;
val* var161 /* : String */;
val* var162 /* : String */;
long var163 /* : Int */;
val* var164 /* : String */;
val* var165 /* : String */;
val* var166 /* : String */;
val* var167 /* : SignatureMap */;
val* var_map /* var map: SignatureMap */;
long var168 /* : Int */;
long var169 /* : Int */;
long var170 /* : Int */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
const char* var_class_name175;
long var176 /* : Int */;
long var_setted /* var setted: Int */;
long var_i /* var i: Int */;
long var177 /* : Int */;
long var_ /* var : Int */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
short int var184 /* : Bool */;
val* var185 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var186 /* : Bool */;
int cltype187;
int idtype188;
short int var189 /* : Bool */;
val* var190 /* : TId */;
val* var191 /* : String */;
val* var_name /* var name: String */;
val* var192 /* : nullable MParameter */;
val* var_param /* var param: nullable MParameter */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
val* var195 /* : ModelBuilder */;
val* var196 /* : TId */;
val* var198 /* : NativeArray[String] */;
static val* varonce197;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : FlatString */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
val* var210 /* : FlatString */;
val* var211 /* : String */;
val* var212 /* : String */;
val* var213 /* : String */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : ModelBuilder */;
val* var218 /* : NativeArray[String] */;
static val* varonce217;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
val* var222 /* : FlatString */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
val* var226 /* : FlatString */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : NativeString */;
val* var230 /* : FlatString */;
val* var231 /* : String */;
val* var232 /* : String */;
val* var233 /* : String */;
val* var234 /* : Array[MParameter] */;
long var235 /* : Int */;
long var_idx /* var idx: Int */;
val* var236 /* : ArrayMap[Int, Int] */;
val* var237 /* : nullable Object */;
val* var238 /* : nullable Object */;
val* var_prev /* var prev: nullable Int */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
val* var244 /* : ModelBuilder */;
val* var246 /* : NativeArray[String] */;
static val* varonce245;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
val* var250 /* : FlatString */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
val* var254 /* : FlatString */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
val* var258 /* : FlatString */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
val* var262 /* : FlatString */;
val* var263 /* : String */;
long var264 /* : Int */;
val* var265 /* : String */;
val* var266 /* : String */;
val* var267 /* : String */;
val* var268 /* : ArrayMap[Int, Int] */;
val* var269 /* : nullable Object */;
val* var270 /* : nullable Object */;
long var271 /* : Int */;
short int var273 /* : Bool */;
int cltype274;
int idtype275;
const char* var_class_name276;
long var277 /* : Int */;
val* var278 /* : AExpr */;
val* var279 /* : MType */;
val* var280 /* : nullable MType */;
long var281 /* : Int */;
long var283 /* : Int */;
long var284 /* : Int */;
long var285 /* : Int */;
short int var287 /* : Bool */;
int cltype288;
int idtype289;
const char* var_class_name290;
long var291 /* : Int */;
long var_vararg_decl /* var vararg_decl: Int */;
long var_j /* var j: Int */;
long var_i292 /* var i: Int */;
long var293 /* : Int */;
long var_294 /* var : Int */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
int cltype298;
int idtype299;
const char* var_class_name300;
short int var301 /* : Bool */;
val* var302 /* : ArrayMap[Int, Int] */;
short int var303 /* : Bool */;
val* var304 /* : nullable Object */;
val* var306 /* : Array[MParameter] */;
val* var307 /* : nullable Object */;
val* var_param308 /* var param: MParameter */;
short int var309 /* : Bool */;
short int var310 /* : Bool */;
short int var312 /* : Bool */;
int cltype313;
int idtype314;
const char* var_class_name315;
short int var316 /* : Bool */;
long var317 /* : Int */;
short int var319 /* : Bool */;
int cltype320;
int idtype321;
const char* var_class_name322;
long var323 /* : Int */;
val* var324 /* : nullable Object */;
short int var325 /* : Bool */;
int cltype326;
int idtype327;
long var328 /* : Int */;
short int var330 /* : Bool */;
int cltype331;
int idtype332;
const char* var_class_name333;
long var334 /* : Int */;
val* var336 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var337 /* : ArrayMap[Int, Int] */;
val* var338 /* : nullable Object */;
val* var339 /* : nullable Object */;
long var340 /* : Int */;
short int var342 /* : Bool */;
int cltype343;
int idtype344;
const char* var_class_name345;
long var346 /* : Int */;
short int var347 /* : Bool */;
short int var349 /* : Bool */;
long var350 /* : Int */;
short int var352 /* : Bool */;
int cltype353;
int idtype354;
const char* var_class_name355;
long var356 /* : Int */;
val* var357 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var358 /* : nullable MType */;
long var359 /* : Int */;
short int var361 /* : Bool */;
short int var363 /* : Bool */;
int cltype364;
int idtype365;
const char* var_class_name366;
short int var367 /* : Bool */;
val* var368 /* : Array[MParameter] */;
val* var369 /* : nullable Object */;
val* var370 /* : MType */;
val* var_paramtype371 /* var paramtype: MType */;
val* var372 /* : nullable Object */;
val* var_first /* var first: AExpr */;
short int var373 /* : Bool */;
short int var375 /* : Bool */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
val* var379 /* : FlatString */;
val* var380 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var381 /* : Bool */;
short int var382 /* : Bool */;
val* var383 /* : Array[MType] */;
val* var_384 /* var : Array[MType] */;
val* var385 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
short int var386 /* : Bool */;
int cltype387;
int idtype388;
val* var389 /* : AExpr */;
val* var390 /* : nullable MType */;
val* var391 /* : AExpr */;
val* var392 /* : nullable MType */;
val* var393 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var394 /* : Bool */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
short int var397 /* : Bool */;
short int var398 /* : Bool */;
short int var_399 /* var : Bool */;
short int var400 /* : Bool */;
val* var402 /* : NativeArray[String] */;
static val* varonce401;
static val* varonce403;
val* var404 /* : String */;
char* var405 /* : NativeString */;
val* var406 /* : FlatString */;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
val* var410 /* : FlatString */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
val* var414 /* : FlatString */;
val* var415 /* : String */;
val* var416 /* : String */;
val* var417 /* : String */;
val* var418 /* : nullable MType */;
long var419 /* : Int */;
short int var421 /* : Bool */;
int cltype422;
int idtype423;
const char* var_class_name424;
long var425 /* : Int */;
long var_i426 /* var i: Int */;
long var427 /* : Int */;
short int var429 /* : Bool */;
int cltype430;
int idtype431;
const char* var_class_name432;
long var433 /* : Int */;
long var_434 /* var : Int */;
short int var435 /* : Bool */;
short int var437 /* : Bool */;
int cltype438;
int idtype439;
const char* var_class_name440;
short int var441 /* : Bool */;
val* var442 /* : nullable Object */;
val* var443 /* : nullable MType */;
long var444 /* : Int */;
var_node = p0;
var_args = p1;
var_mproperty = p2;
var_msignature = p3;
{
var1 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__vararg_rank]))(var_msignature); /* vararg_rank on <var_msignature:MSignature>*/
}
var_vararg_rank = var1;
{
{ /* Inline kernel#Int#>= (var_vararg_rank,0l) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var5 = var_vararg_rank >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
{
var7 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#< (var6,var7) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var14 = var6 < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce==NULL)) {
var16 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Error: expected at least ";
var20 = standard___standard__NativeString___to_s_with_length(var19, 25l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = " argument(s) for `";
var24 = standard___standard__NativeString___to_s_with_length(var23, 18l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var16)->values[2]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "`; got ";
var28 = standard___standard__NativeString___to_s_with_length(var27, 7l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var16)->values[5]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ". See introduction at `";
var32 = standard___standard__NativeString___to_s_with_length(var31, 23l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var16)->values[7]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "`.";
var36 = standard___standard__NativeString___to_s_with_length(var35, 2l);
var34 = var36;
varonce33 = var34;
}
((struct instance_standard__NativeArray*)var16)->values[9]=var34;
} else {
var16 = varonce;
varonce = NULL;
}
{
var37 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
var38 = standard__string___Int___Object__to_s(var37);
((struct instance_standard__NativeArray*)var16)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var16)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var16)->values[4]=var40;
{
var41 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
var42 = standard__string___Int___Object__to_s(var41);
((struct instance_standard__NativeArray*)var16)->values[6]=var42;
{
var43 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mproperty); /* full_name on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var16)->values[8]=var43;
{
var44 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce = var16;
{
((void(*)(val* self, val* p0, val* p1))(var15->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var15, var_node, var44); /* error on <var15:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
{
var45 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
{
var46 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#!= (var45,var46) on <var45:Int> */
var49 = var45 == var46;
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
var51 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
{
var52 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__min_arity]))(var_msignature); /* min_arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#== (var51,var52) on <var51:Int> */
var55 = var51 == var52;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce57==NULL)) {
var58 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "Error: expected ";
var62 = standard___standard__NativeString___to_s_with_length(var61, 16l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var58)->values[0]=var60;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = " argument(s) for `";
var66 = standard___standard__NativeString___to_s_with_length(var65, 18l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var58)->values[2]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "`; got ";
var70 = standard___standard__NativeString___to_s_with_length(var69, 7l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var58)->values[5]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = ". See introduction at `";
var74 = standard___standard__NativeString___to_s_with_length(var73, 23l);
var72 = var74;
varonce71 = var72;
}
((struct instance_standard__NativeArray*)var58)->values[7]=var72;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "`.";
var78 = standard___standard__NativeString___to_s_with_length(var77, 2l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var58)->values[9]=var76;
} else {
var58 = varonce57;
varonce57 = NULL;
}
{
var79 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
var80 = standard__string___Int___Object__to_s(var79);
((struct instance_standard__NativeArray*)var58)->values[1]=var80;
{
var81 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var58)->values[3]=var81;
{
var82 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var58)->values[4]=var82;
{
var83 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
var84 = standard__string___Int___Object__to_s(var83);
((struct instance_standard__NativeArray*)var58)->values[6]=var84;
{
var85 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mproperty); /* full_name on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var58)->values[8]=var85;
{
var86 = ((val*(*)(val* self))(var58->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce57 = var58;
{
((void(*)(val* self, val* p0, val* p1))(var56->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var56, var_node, var86); /* error on <var56:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var87 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
{
var88 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#> (var87,var88) on <var87:Int> */
/* Covariant cast for argument 0 (i) <var88:Int> isa OTHER */
/* <var88:Int> isa OTHER */
var91 = 1; /* easy <var88:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var95 = var87 > var88;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
if (var89){
{
var96 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce97==NULL)) {
var98 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "Error: expected at most ";
var102 = standard___standard__NativeString___to_s_with_length(var101, 24l);
var100 = var102;
varonce99 = var100;
}
((struct instance_standard__NativeArray*)var98)->values[0]=var100;
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = " argument(s) for `";
var106 = standard___standard__NativeString___to_s_with_length(var105, 18l);
var104 = var106;
varonce103 = var104;
}
((struct instance_standard__NativeArray*)var98)->values[2]=var104;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "`; got ";
var110 = standard___standard__NativeString___to_s_with_length(var109, 7l);
var108 = var110;
varonce107 = var108;
}
((struct instance_standard__NativeArray*)var98)->values[5]=var108;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = ". See introduction at `";
var114 = standard___standard__NativeString___to_s_with_length(var113, 23l);
var112 = var114;
varonce111 = var112;
}
((struct instance_standard__NativeArray*)var98)->values[7]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "`.";
var118 = standard___standard__NativeString___to_s_with_length(var117, 2l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var98)->values[9]=var116;
} else {
var98 = varonce97;
varonce97 = NULL;
}
{
var119 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
var120 = standard__string___Int___Object__to_s(var119);
((struct instance_standard__NativeArray*)var98)->values[1]=var120;
{
var121 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var98)->values[3]=var121;
{
var122 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var98)->values[4]=var122;
{
var123 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
var124 = standard__string___Int___Object__to_s(var123);
((struct instance_standard__NativeArray*)var98)->values[6]=var124;
{
var125 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mproperty); /* full_name on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var98)->values[8]=var125;
{
var126 = ((val*(*)(val* self))(var98->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
{
((void(*)(val* self, val* p0, val* p1))(var96->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var96, var_node, var126); /* error on <var96:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var127 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
{
var128 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__min_arity]))(var_msignature); /* min_arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#< (var127,var128) on <var127:Int> */
/* Covariant cast for argument 0 (i) <var128:Int> isa OTHER */
/* <var128:Int> isa OTHER */
var131 = 1; /* easy <var128:Int> isa OTHER*/
if (unlikely(!var131)) {
var_class_name134 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name134);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var135 = var127 < var128;
var129 = var135;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
if (var129){
{
var136 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce137==NULL)) {
var138 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "Error: expected at least ";
var142 = standard___standard__NativeString___to_s_with_length(var141, 25l);
var140 = var142;
varonce139 = var140;
}
((struct instance_standard__NativeArray*)var138)->values[0]=var140;
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = " argument(s) for `";
var146 = standard___standard__NativeString___to_s_with_length(var145, 18l);
var144 = var146;
varonce143 = var144;
}
((struct instance_standard__NativeArray*)var138)->values[2]=var144;
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "`; got ";
var150 = standard___standard__NativeString___to_s_with_length(var149, 7l);
var148 = var150;
varonce147 = var148;
}
((struct instance_standard__NativeArray*)var138)->values[5]=var148;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = ". See introduction at `";
var154 = standard___standard__NativeString___to_s_with_length(var153, 23l);
var152 = var154;
varonce151 = var152;
}
((struct instance_standard__NativeArray*)var138)->values[7]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "`.";
var158 = standard___standard__NativeString___to_s_with_length(var157, 2l);
var156 = var158;
varonce155 = var156;
}
((struct instance_standard__NativeArray*)var138)->values[9]=var156;
} else {
var138 = varonce137;
varonce137 = NULL;
}
{
var159 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__min_arity]))(var_msignature); /* min_arity on <var_msignature:MSignature>*/
}
var160 = standard__string___Int___Object__to_s(var159);
((struct instance_standard__NativeArray*)var138)->values[1]=var160;
{
var161 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var138)->values[3]=var161;
{
var162 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var138)->values[4]=var162;
{
var163 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
var164 = standard__string___Int___Object__to_s(var163);
((struct instance_standard__NativeArray*)var138)->values[6]=var164;
{
var165 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mproperty); /* full_name on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var138)->values[8]=var165;
{
var166 = ((val*(*)(val* self))(var138->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var138); /* native_to_s on <var138:NativeArray[String]>*/
}
varonce137 = var138;
{
((void(*)(val* self, val* p0, val* p1))(var136->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var136, var_node, var166); /* error on <var136:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
}
var167 = NEW_nit__SignatureMap(&type_nit__SignatureMap);
{
((void(*)(val* self))(var167->class->vft[COLOR_standard__kernel__Object__init]))(var167); /* init on <var167:SignatureMap>*/
}
var_map = var167;
{
var168 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
{
var169 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__min_arity]))(var_msignature); /* min_arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#- (var168,var169) on <var168:Int> */
/* Covariant cast for argument 0 (i) <var169:Int> isa OTHER */
/* <var169:Int> isa OTHER */
var172 = 1; /* easy <var169:Int> isa OTHER*/
if (unlikely(!var172)) {
var_class_name175 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name175);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var176 = var168 - var169;
var170 = var176;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
var_setted = var170;
var_i = 0l;
{
var177 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
var_ = var177;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var180 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var184 = var_i < var_;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
if (var178){
{
var185 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i); /* [] on <var_args:Array[AExpr]>*/
}
var_e = var185;
/* <var_e:AExpr> isa ANamedargExpr */
cltype187 = type_nit__ANamedargExpr.color;
idtype188 = type_nit__ANamedargExpr.id;
if(cltype187 >= var_e->type->table_size) {
var186 = 0;
} else {
var186 = var_e->type->type_table[cltype187] == idtype188;
}
var189 = !var186;
if (var189){
goto BREAK_label;
} else {
}
{
var190 = ((val*(*)(val* self))(var_e->class->vft[COLOR_nit__parser_nodes__ANamedargExpr__n_id]))(var_e); /* n_id on <var_e:AExpr(ANamedargExpr)>*/
}
{
var191 = ((val*(*)(val* self))(var190->class->vft[COLOR_nit__parser_nodes__Token__text]))(var190); /* text on <var190:TId>*/
}
var_name = var191;
{
var192 = ((val*(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameter_by_name]))(var_msignature, var_name); /* mparameter_by_name on <var_msignature:MSignature>*/
}
var_param = var192;
if (var_param == NULL) {
var193 = 1; /* is null */
} else {
var193 = 0; /* arg is null but recv is not */
}
if (0) {
var194 = ((short int(*)(val* self, val* p0))(var_param->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_param, ((val*)NULL)); /* == on <var_param:nullable MParameter>*/
var193 = var194;
}
if (var193){
{
var195 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
{
var196 = ((val*(*)(val* self))(var_e->class->vft[COLOR_nit__parser_nodes__ANamedargExpr__n_id]))(var_e); /* n_id on <var_e:AExpr(ANamedargExpr)>*/
}
if (unlikely(varonce197==NULL)) {
var198 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "Error: no parameter `";
var202 = standard___standard__NativeString___to_s_with_length(var201, 21l);
var200 = var202;
varonce199 = var200;
}
((struct instance_standard__NativeArray*)var198)->values[0]=var200;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "` for `";
var206 = standard___standard__NativeString___to_s_with_length(var205, 7l);
var204 = var206;
varonce203 = var204;
}
((struct instance_standard__NativeArray*)var198)->values[2]=var204;
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = "`.";
var210 = standard___standard__NativeString___to_s_with_length(var209, 2l);
var208 = var210;
varonce207 = var208;
}
((struct instance_standard__NativeArray*)var198)->values[5]=var208;
} else {
var198 = varonce197;
varonce197 = NULL;
}
((struct instance_standard__NativeArray*)var198)->values[1]=var_name;
{
var211 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var198)->values[3]=var211;
{
var212 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var198)->values[4]=var212;
{
var213 = ((val*(*)(val* self))(var198->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var198); /* native_to_s on <var198:NativeArray[String]>*/
}
varonce197 = var198;
{
((void(*)(val* self, val* p0, val* p1))(var195->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var195, var196, var213); /* error on <var195:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var214 = ((short int(*)(val* self))(var_param->class->vft[COLOR_nit__model__MParameter__is_default]))(var_param); /* is_default on <var_param:nullable MParameter(MParameter)>*/
}
var215 = !var214;
if (var215){
{
var216 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce217==NULL)) {
var218 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "Error: parameter `";
var222 = standard___standard__NativeString___to_s_with_length(var221, 18l);
var220 = var222;
varonce219 = var220;
}
((struct instance_standard__NativeArray*)var218)->values[0]=var220;
if (likely(varonce223!=NULL)) {
var224 = varonce223;
} else {
var225 = "` is not optional for `";
var226 = standard___standard__NativeString___to_s_with_length(var225, 23l);
var224 = var226;
varonce223 = var224;
}
((struct instance_standard__NativeArray*)var218)->values[2]=var224;
if (likely(varonce227!=NULL)) {
var228 = varonce227;
} else {
var229 = "`.";
var230 = standard___standard__NativeString___to_s_with_length(var229, 2l);
var228 = var230;
varonce227 = var228;
}
((struct instance_standard__NativeArray*)var218)->values[5]=var228;
} else {
var218 = varonce217;
varonce217 = NULL;
}
((struct instance_standard__NativeArray*)var218)->values[1]=var_name;
{
var231 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var218)->values[3]=var231;
{
var232 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var218)->values[4]=var232;
{
var233 = ((val*(*)(val* self))(var218->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var218); /* native_to_s on <var218:NativeArray[String]>*/
}
varonce217 = var218;
{
((void(*)(val* self, val* p0, val* p1))(var216->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var216, var_e, var233); /* error on <var216:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var234 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:MSignature>*/
}
{
var235 = ((long(*)(val* self, val* p0))(var234->class->vft[COLOR_standard__abstract_collection__SequenceRead__index_of]))(var234, var_param); /* index_of on <var234:Array[MParameter]>*/
}
var_idx = var235;
{
var236 = ((val*(*)(val* self))(var_map->class->vft[COLOR_nit__typing__SignatureMap__map]))(var_map); /* map on <var_map:SignatureMap>*/
}
{
var238 = (val*)(var_idx<<2|1);
var237 = ((val*(*)(val* self, val* p0))(var236->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var236, var238); /* get_or_null on <var236:ArrayMap[Int, Int]>*/
}
var_prev = var237;
if (var_prev == NULL) {
var239 = 0; /* is null */
} else {
var239 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Int#!= (var_prev,((val*)NULL)) on <var_prev:nullable Int> */
var242 = 0; /* incompatible types Int vs. null; cannot be NULL */
var243 = !var242;
var240 = var243;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
var239 = var240;
}
if (var239){
{
var244 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
if (unlikely(varonce245==NULL)) {
var246 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "Error: parameter `";
var250 = standard___standard__NativeString___to_s_with_length(var249, 18l);
var248 = var250;
varonce247 = var248;
}
((struct instance_standard__NativeArray*)var246)->values[0]=var248;
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "` already associated with argument #";
var254 = standard___standard__NativeString___to_s_with_length(var253, 36l);
var252 = var254;
varonce251 = var252;
}
((struct instance_standard__NativeArray*)var246)->values[2]=var252;
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = " for `";
var258 = standard___standard__NativeString___to_s_with_length(var257, 6l);
var256 = var258;
varonce255 = var256;
}
((struct instance_standard__NativeArray*)var246)->values[4]=var256;
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "`.";
var262 = standard___standard__NativeString___to_s_with_length(var261, 2l);
var260 = var262;
varonce259 = var260;
}
((struct instance_standard__NativeArray*)var246)->values[7]=var260;
} else {
var246 = varonce245;
varonce245 = NULL;
}
((struct instance_standard__NativeArray*)var246)->values[1]=var_name;
var264 = (long)(var_prev)>>2;
var263 = standard__string___Int___Object__to_s(var264);
((struct instance_standard__NativeArray*)var246)->values[3]=var263;
{
var265 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var246)->values[5]=var265;
{
var266 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var246)->values[6]=var266;
{
var267 = ((val*(*)(val* self))(var246->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var246); /* native_to_s on <var246:NativeArray[String]>*/
}
varonce245 = var246;
{
((void(*)(val* self, val* p0, val* p1))(var244->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var244, var_e, var267); /* error on <var244:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var268 = ((val*(*)(val* self))(var_map->class->vft[COLOR_nit__typing__SignatureMap__map]))(var_map); /* map on <var_map:SignatureMap>*/
}
{
var269 = (val*)(var_idx<<2|1);
var270 = (val*)(var_i<<2|1);
((void(*)(val* self, val* p0, val* p1))(var268->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var268, var269, var270); /* []= on <var268:ArrayMap[Int, Int]>*/
}
{
{ /* Inline kernel#Int#- (var_setted,1l) on <var_setted:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var273 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var273)) {
var_class_name276 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name276);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var277 = var_setted - 1l;
var271 = var277;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
var_setted = var271;
{
var278 = ((val*(*)(val* self))(var_e->class->vft[COLOR_nit__parser_nodes__ANamedargExpr__n_expr]))(var_e); /* n_expr on <var_e:AExpr(ANamedargExpr)>*/
}
{
var279 = ((val*(*)(val* self))(var_param->class->vft[COLOR_nit__model__MParameter__mtype]))(var_param); /* mtype on <var_param:nullable MParameter(MParameter)>*/
}
{
var280 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(self, var278, var279); /* visit_expr_subtype on <self:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_e->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(var_e, var280); /* mtype= on <var_e:AExpr(ANamedargExpr)>*/
}
BREAK_label: (void)0;
var281 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var281;
} else {
goto BREAK_label282;
}
}
BREAK_label282: (void)0;
{
var283 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
{
var284 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#- (var283,var284) on <var283:Int> */
/* Covariant cast for argument 0 (i) <var284:Int> isa OTHER */
/* <var284:Int> isa OTHER */
var287 = 1; /* easy <var284:Int> isa OTHER*/
if (unlikely(!var287)) {
var_class_name290 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name290);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var291 = var283 - var284;
var285 = var291;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
}
var_vararg_decl = var285;
var_j = 0l;
var_i292 = 0l;
{
var293 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
var_294 = var293;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i292,var_294) on <var_i292:Int> */
/* Covariant cast for argument 0 (i) <var_294:Int> isa OTHER */
/* <var_294:Int> isa OTHER */
var297 = 1; /* easy <var_294:Int> isa OTHER*/
if (unlikely(!var297)) {
var_class_name300 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name300);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var301 = var_i292 < var_294;
var295 = var301;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
}
if (var295){
{
var302 = ((val*(*)(val* self))(var_map->class->vft[COLOR_nit__typing__SignatureMap__map]))(var_map); /* map on <var_map:SignatureMap>*/
}
{
var304 = (val*)(var_i292<<2|1);
var303 = ((short int(*)(val* self, val* p0))(var302->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var302, var304); /* has_key on <var302:ArrayMap[Int, Int]>*/
}
if (var303){
goto BREAK_label305;
} else {
}
{
var306 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:MSignature>*/
}
{
var307 = ((val*(*)(val* self, long p0))(var306->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var306, var_i292); /* [] on <var306:Array[MParameter]>*/
}
var_param308 = var307;
{
var309 = ((short int(*)(val* self))(var_param308->class->vft[COLOR_nit__model__MParameter__is_default]))(var_param308); /* is_default on <var_param308:MParameter>*/
}
if (var309){
{
{ /* Inline kernel#Int#> (var_setted,0l) on <var_setted:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var312 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var312)) {
var_class_name315 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name315);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var316 = var_setted > 0l;
var310 = var316;
goto RET_LABEL311;
RET_LABEL311:(void)0;
}
}
if (var310){
{
{ /* Inline kernel#Int#- (var_setted,1l) on <var_setted:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var319 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var319)) {
var_class_name322 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name322);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var323 = var_setted - 1l;
var317 = var323;
goto RET_LABEL318;
RET_LABEL318:(void)0;
}
}
var_setted = var317;
} else {
goto BREAK_label305;
}
} else {
}
for(;;) {
{
var324 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var_j); /* [] on <var_args:Array[AExpr]>*/
}
/* <var324:nullable Object(AExpr)> isa ANamedargExpr */
cltype326 = type_nit__ANamedargExpr.color;
idtype327 = type_nit__ANamedargExpr.id;
if(cltype326 >= var324->type->table_size) {
var325 = 0;
} else {
var325 = var324->type->type_table[cltype326] == idtype327;
}
if (var325){
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var330 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var330)) {
var_class_name333 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name333);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var334 = var_j + 1l;
var328 = var334;
goto RET_LABEL329;
RET_LABEL329:(void)0;
}
}
var_j = var328;
} else {
goto BREAK_label335;
}
}
BREAK_label335: (void)0;
{
var336 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var_j); /* [] on <var_args:Array[AExpr]>*/
}
var_arg = var336;
{
var337 = ((val*(*)(val* self))(var_map->class->vft[COLOR_nit__typing__SignatureMap__map]))(var_map); /* map on <var_map:SignatureMap>*/
}
{
var338 = (val*)(var_i292<<2|1);
var339 = (val*)(var_j<<2|1);
((void(*)(val* self, val* p0, val* p1))(var337->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var337, var338, var339); /* []= on <var337:ArrayMap[Int, Int]>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var342 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var342)) {
var_class_name345 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name345);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var346 = var_j + 1l;
var340 = var346;
goto RET_LABEL341;
RET_LABEL341:(void)0;
}
}
var_j = var340;
{
{ /* Inline kernel#Int#== (var_i292,var_vararg_rank) on <var_i292:Int> */
var349 = var_i292 == var_vararg_rank;
var347 = var349;
goto RET_LABEL348;
RET_LABEL348:(void)0;
}
}
if (var347){
{
{ /* Inline kernel#Int#+ (var_j,var_vararg_decl) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var352 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var352)) {
var_class_name355 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name355);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var356 = var_j + var_vararg_decl;
var350 = var356;
goto RET_LABEL351;
RET_LABEL351:(void)0;
}
}
var_j = var350;
goto BREAK_label305;
} else {
}
{
var357 = ((val*(*)(val* self))(var_param308->class->vft[COLOR_nit__model__MParameter__mtype]))(var_param308); /* mtype on <var_param308:MParameter>*/
}
var_paramtype = var357;
{
var358 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(self, var_arg, var_paramtype); /* visit_expr_subtype on <self:TypeVisitor>*/
}
BREAK_label305: (void)0;
var359 = standard___standard__Int___Discrete__successor(var_i292, 1l);
var_i292 = var359;
} else {
goto BREAK_label360;
}
}
BREAK_label360: (void)0;
{
{ /* Inline kernel#Int#>= (var_vararg_rank,0l) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var363 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var363)) {
var_class_name366 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name366);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var367 = var_vararg_rank >= 0l;
var361 = var367;
goto RET_LABEL362;
RET_LABEL362:(void)0;
}
}
if (var361){
{
var368 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:MSignature>*/
}
{
var369 = ((val*(*)(val* self, long p0))(var368->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var368, var_vararg_rank); /* [] on <var368:Array[MParameter]>*/
}
{
var370 = ((val*(*)(val* self))(var369->class->vft[COLOR_nit__model__MParameter__mtype]))(var369); /* mtype on <var369:nullable Object(MParameter)>*/
}
var_paramtype371 = var370;
{
var372 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var_vararg_rank); /* [] on <var_args:Array[AExpr]>*/
}
var_first = var372;
{
{ /* Inline kernel#Int#== (var_vararg_decl,0l) on <var_vararg_decl:Int> */
var375 = var_vararg_decl == 0l;
var373 = var375;
goto RET_LABEL374;
RET_LABEL374:(void)0;
}
}
if (var373){
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = "Array";
var379 = standard___standard__NativeString___to_s_with_length(var378, 5l);
var377 = var379;
varonce376 = var377;
}
{
var380 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(self, var_node, var377); /* get_mclass on <self:TypeVisitor>*/
}
var_mclass = var380;
if (var_mclass == NULL) {
var381 = 1; /* is null */
} else {
var381 = 0; /* arg is null but recv is not */
}
if (0) {
var382 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var381 = var382;
}
if (var381){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var383 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var383->class->vft[COLOR_standard__array__Array__with_capacity]))(var383, 1l); /* with_capacity on <var383:Array[MType]>*/
}
var_384 = var383;
{
((void(*)(val* self, val* p0))(var_384->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_384, var_paramtype371); /* push on <var_384:Array[MType]>*/
}
{
var385 = ((val*(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_nit__model__MClass__get_mtype]))(var_mclass, var_384); /* get_mtype on <var_mclass:nullable MClass(MClass)>*/
}
var_array_mtype = var385;
/* <var_first:AExpr> isa AVarargExpr */
cltype387 = type_nit__AVarargExpr.color;
idtype388 = type_nit__AVarargExpr.id;
if(cltype387 >= var_first->type->table_size) {
var386 = 0;
} else {
var386 = var_first->type->type_table[cltype387] == idtype388;
}
if (var386){
{
var389 = ((val*(*)(val* self))(var_first->class->vft[COLOR_nit__parser_nodes__AVarargExpr__n_expr]))(var_first); /* n_expr on <var_first:AExpr(AVarargExpr)>*/
}
{
var390 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(self, var389, var_array_mtype); /* visit_expr_subtype on <self:TypeVisitor>*/
}
{
var391 = ((val*(*)(val* self))(var_first->class->vft[COLOR_nit__parser_nodes__AVarargExpr__n_expr]))(var_first); /* n_expr on <var_first:AExpr(AVarargExpr)>*/
}
{
var392 = ((val*(*)(val* self))(var391->class->vft[COLOR_nit__typing__AExpr__mtype]))(var391); /* mtype on <var391:AExpr>*/
}
{
((void(*)(val* self, val* p0))(var_first->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(var_first, var392); /* mtype= on <var_first:AExpr(AVarargExpr)>*/
}
} else {
{
var393 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(self, var_first); /* visit_expr on <self:TypeVisitor>*/
}
var_t = var393;
if (var_t == NULL) {
var394 = 1; /* is null */
} else {
var394 = 0; /* arg is null but recv is not */
}
if (0) {
var395 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, ((val*)NULL)); /* == on <var_t:nullable MType>*/
var394 = var395;
}
if (var394){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var397 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(self, var_t, var_paramtype371); /* is_subtype on <self:TypeVisitor>*/
}
var398 = !var397;
var_399 = var398;
if (var398){
{
var400 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(self, var_t, var_array_mtype); /* is_subtype on <self:TypeVisitor>*/
}
var396 = var400;
} else {
var396 = var_399;
}
if (var396){
if (unlikely(varonce401==NULL)) {
var402 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce403!=NULL)) {
var404 = varonce403;
} else {
var405 = "Type Error: expected `";
var406 = standard___standard__NativeString___to_s_with_length(var405, 22l);
var404 = var406;
varonce403 = var404;
}
((struct instance_standard__NativeArray*)var402)->values[0]=var404;
if (likely(varonce407!=NULL)) {
var408 = varonce407;
} else {
var409 = "`, got `";
var410 = standard___standard__NativeString___to_s_with_length(var409, 8l);
var408 = var410;
varonce407 = var408;
}
((struct instance_standard__NativeArray*)var402)->values[2]=var408;
if (likely(varonce411!=NULL)) {
var412 = varonce411;
} else {
var413 = "`. Is an ellipsis `...` missing on the argument?";
var414 = standard___standard__NativeString___to_s_with_length(var413, 48l);
var412 = var414;
varonce411 = var412;
}
((struct instance_standard__NativeArray*)var402)->values[4]=var412;
} else {
var402 = varonce401;
varonce401 = NULL;
}
{
var415 = ((val*(*)(val* self))(var_paramtype371->class->vft[COLOR_standard__string__Object__to_s]))(var_paramtype371); /* to_s on <var_paramtype371:MType>*/
}
((struct instance_standard__NativeArray*)var402)->values[1]=var415;
{
var416 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__string__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var402)->values[3]=var416;
{
var417 = ((val*(*)(val* self))(var402->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var402); /* native_to_s on <var402:NativeArray[String]>*/
}
varonce401 = var402;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__error]))(self, var_first, var417); /* error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, long p0))(var_map->class->vft[COLOR_nit__typing__SignatureMap__vararg_decl_61d]))(var_map, 1l); /* vararg_decl= on <var_map:SignatureMap>*/
}
{
var418 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(self, var_first, var_paramtype371); /* visit_expr_subtype on <self:TypeVisitor>*/
}
}
} else {
{
{ /* Inline kernel#Int#+ (var_vararg_decl,1l) on <var_vararg_decl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var421 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var421)) {
var_class_name424 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name424);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var425 = var_vararg_decl + 1l;
var419 = var425;
goto RET_LABEL420;
RET_LABEL420:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_map->class->vft[COLOR_nit__typing__SignatureMap__vararg_decl_61d]))(var_map, var419); /* vararg_decl= on <var_map:SignatureMap>*/
}
var_i426 = var_vararg_rank;
{
{ /* Inline kernel#Int#+ (var_vararg_rank,var_vararg_decl) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var429 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var429)) {
var_class_name432 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name432);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var433 = var_vararg_rank + var_vararg_decl;
var427 = var433;
goto RET_LABEL428;
RET_LABEL428:(void)0;
}
}
var_434 = var427;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i426,var_434) on <var_i426:Int> */
/* Covariant cast for argument 0 (i) <var_434:Int> isa OTHER */
/* <var_434:Int> isa OTHER */
var437 = 1; /* easy <var_434:Int> isa OTHER*/
if (unlikely(!var437)) {
var_class_name440 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name440);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var441 = var_i426 <= var_434;
var435 = var441;
goto RET_LABEL436;
RET_LABEL436:(void)0;
}
}
if (var435){
{
var442 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i426); /* [] on <var_args:Array[AExpr]>*/
}
{
var443 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(self, var442, var_paramtype371); /* visit_expr_subtype on <self:TypeVisitor>*/
}
var444 = standard___standard__Int___Discrete__successor(var_i426, 1l);
var_i426 = var444;
} else {
goto BREAK_label445;
}
}
BREAK_label445: (void)0;
}
} else {
}
var = var_map;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#error for (self: TypeVisitor, ANode, String) */
void nit__typing___nit__typing__TypeVisitor___error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ModelBuilder */;
val* var1 /* : ToolContext */;
val* var2 /* : Location */;
val* var3 /* : Message */;
var_node = p0;
var_message = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(self); /* modelbuilder on <self:TypeVisitor>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var); /* toolcontext on <var:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:ANode>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var1, var2, var_message); /* error on <var1:ToolContext>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#get_variable for (self: TypeVisitor, AExpr, Variable): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___get_variable(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: Variable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable FlowContext */;
val* var_flow /* var flow: nullable FlowContext */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : HashMap[Variable, nullable MType] */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[Variable, nullable MType] */;
val* var10 /* : nullable Object */;
val* var11 /* : Array[nullable MType] */;
val* var_mtypes /* var mtypes: Array[nullable MType] */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable MType */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var22 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable MType */;
var_node = p0;
var_variable = p1;
{
var1 = ((short int(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__is_adapted]))(var_variable); /* is_adapted on <var_variable:Variable>*/
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type]))(var_variable); /* declared_type on <var_variable:Variable>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_node); /* after_flow_context on <var_node:AExpr>*/
}
var_flow = var4;
if (var_flow == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_flow->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_flow, ((val*)NULL)); /* == on <var_flow:nullable FlowContext>*/
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(var_flow->class->vft[COLOR_nit__typing__FlowContext__vars]))(var_flow); /* vars on <var_flow:nullable FlowContext(FlowContext)>*/
}
{
var8 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var7, var_variable); /* has_key on <var7:HashMap[Variable, nullable MType]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_flow->class->vft[COLOR_nit__typing__FlowContext__vars]))(var_flow); /* vars on <var_flow:nullable FlowContext(FlowContext)>*/
}
{
var10 = ((val*(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var9, var_variable); /* [] on <var9:HashMap[Variable, nullable MType]>*/
}
var = var10;
goto RET_LABEL;
} else {
{
var11 = ((val*(*)(val* self, val* p0))(var_flow->class->vft[COLOR_nit__typing__FlowContext__collect_types]))(var_flow, var_variable); /* collect_types on <var_flow:nullable FlowContext(FlowContext)>*/
}
var_mtypes = var11;
{
var12 = ((long(*)(val* self))(var_mtypes->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_mtypes); /* length on <var_mtypes:Array[nullable MType]>*/
}
{
{ /* Inline kernel#Int#== (var12,0l) on <var12:Int> */
var15 = var12 == 0l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
var16 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type]))(var_variable); /* declared_type on <var_variable:Variable>*/
}
var = var16;
goto RET_LABEL;
} else {
{
var17 = ((long(*)(val* self))(var_mtypes->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_mtypes); /* length on <var_mtypes:Array[nullable MType]>*/
}
{
{ /* Inline kernel#Int#== (var17,1l) on <var17:Int> */
var20 = var17 == 1l;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
var21 = ((val*(*)(val* self))(var_mtypes->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_mtypes); /* first on <var_mtypes:Array[nullable MType]>*/
}
var = var21;
goto RET_LABEL;
} else {
{
var22 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__merge_types]))(self, var_node, var_mtypes); /* merge_types on <self:TypeVisitor>*/
}
var_res = var22;
if (var_res == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable MType>*/
var23 = var24;
}
if (var23){
{
var25 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type]))(var_variable); /* declared_type on <var_variable:Variable>*/
}
var_res = var25;
} else {
}
var = var_res;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#dirty for (self: TypeVisitor): Bool */
short int nit__typing___nit__typing__TypeVisitor___dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___dirty].s; /* _dirty on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#dirty= for (self: TypeVisitor, Bool) */
void nit__typing___nit__typing__TypeVisitor___dirty_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___dirty].s = p0; /* _dirty on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#has_loop for (self: TypeVisitor): Bool */
short int nit__typing___nit__typing__TypeVisitor___has_loop(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___has_loop].s; /* _has_loop on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#has_loop= for (self: TypeVisitor, Bool) */
void nit__typing___nit__typing__TypeVisitor___has_loop_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___has_loop].s = p0; /* _has_loop on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#set_variable for (self: TypeVisitor, AExpr, Variable, nullable MType) */
void nit__typing___nit__typing__TypeVisitor___set_variable(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : nullable FlowContext */;
val* var_flow /* var flow: nullable FlowContext */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var_node = p0;
var_variable = p1;
var_mtype = p2;
{
var = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_node); /* after_flow_context on <var_node:AExpr>*/
}
var_flow = var;
if (var_flow == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_flow->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_flow, ((val*)NULL)); /* != on <var_flow:nullable FlowContext>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 561);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_flow->class->vft[COLOR_nit__typing__FlowContext__set_var]))(var_flow, self, var_variable, var_mtype); /* set_var on <var_flow:nullable FlowContext(FlowContext)>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#merge_types for (self: TypeVisitor, ANode, Array[nullable MType]): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___merge_types(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_col /* var col: Array[nullable MType] */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[nullable MType] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_t1 /* var t1: nullable MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_found /* var found: Bool */;
val* var_12 /* var : Array[nullable MType] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[nullable MType] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_t2 /* var t2: nullable MType */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_22 /* var : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MType */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
var_node = p0;
var_col = p1;
{
var1 = ((long(*)(val* self))(var_col->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_col); /* length on <var_col:Array[nullable MType]>*/
}
{
{ /* Inline kernel#Int#== (var1,1l) on <var1:Int> */
var4 = var1 == 1l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((val*(*)(val* self))(var_col->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_col); /* first on <var_col:Array[nullable MType]>*/
}
var = var5;
goto RET_LABEL;
} else {
}
var_ = var_col;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[nullable MType]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[nullable MType]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[nullable MType]>*/
}
var_t1 = var9;
if (var_t1 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_t1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t1, ((val*)NULL)); /* == on <var_t1:nullable MType>*/
var10 = var11;
}
if (var10){
goto BREAK_label;
} else {
}
var_found = 1;
var_12 = var_col;
{
var13 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_12); /* iterator on <var_12:Array[nullable MType]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:ArrayIterator[nullable MType]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:ArrayIterator[nullable MType]>*/
}
var_t2 = var16;
if (var_t2 == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var_t2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t2, ((val*)NULL)); /* == on <var_t2:nullable MType>*/
var17 = var18;
}
if (var17){
goto BREAK_label19;
} else {
}
{
var21 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__can_be_null]))(self, var_t2); /* can_be_null on <self:TypeVisitor>*/
}
var_22 = var21;
if (var21){
{
var23 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__TypeVisitor__can_be_null]))(self, var_t1); /* can_be_null on <self:TypeVisitor>*/
}
var24 = !var23;
var20 = var24;
} else {
var20 = var_22;
}
if (var20){
{
var25 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nit__model__MType__as_nullable]))(var_t1); /* as_nullable on <var_t1:nullable MType(MType)>*/
}
var_t1 = var25;
} else {
}
{
var26 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(self, var_t2, var_t1); /* is_subtype on <self:TypeVisitor>*/
}
var27 = !var26;
if (var27){
var_found = 0;
} else {
}
BREAK_label19: (void)0;
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label28;
}
}
BREAK_label28: (void)0;
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:ArrayIterator[nullable MType]>*/
}
if (var_found){
var = var_t1;
goto RET_LABEL;
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label29;
}
}
BREAK_label29: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[nullable MType]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#SignatureMap#map for (self: SignatureMap): ArrayMap[Int, Int] */
val* nit___nit__SignatureMap___map(val* self) {
val* var /* : ArrayMap[Int, Int] */;
val* var1 /* : ArrayMap[Int, Int] */;
var1 = self->attrs[COLOR_nit__typing__SignatureMap___map].val; /* _map on <self:SignatureMap> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 595);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#SignatureMap#map= for (self: SignatureMap, ArrayMap[Int, Int]) */
void nit___nit__SignatureMap___map_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__SignatureMap___map].val = p0; /* _map on <self:SignatureMap> */
RET_LABEL:;
}
/* method typing#SignatureMap#vararg_decl for (self: SignatureMap): Int */
long nit___nit__SignatureMap___vararg_decl(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__typing__SignatureMap___vararg_decl].l; /* _vararg_decl on <self:SignatureMap> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#SignatureMap#vararg_decl= for (self: SignatureMap, Int) */
void nit___nit__SignatureMap___vararg_decl_61d(val* self, long p0) {
self->attrs[COLOR_nit__typing__SignatureMap___vararg_decl].l = p0; /* _vararg_decl on <self:SignatureMap> */
RET_LABEL:;
}
/* method typing#CallSite#node for (self: CallSite): ANode */
val* nit___nit__CallSite___node(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_nit__typing__CallSite___node].val; /* _node on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 605);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#node= for (self: CallSite, ANode) */
void nit___nit__CallSite___node_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___node].val = p0; /* _node on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv for (self: CallSite): MType */
val* nit___nit__CallSite___recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 608);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv= for (self: CallSite, MType) */
void nit___nit__CallSite___recv_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___recv].val = p0; /* _recv on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mmodule for (self: CallSite): MModule */
val* nit___nit__CallSite___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__typing__CallSite___mmodule].val; /* _mmodule on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 611);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mmodule= for (self: CallSite, MModule) */
void nit___nit__CallSite___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___mmodule].val = p0; /* _mmodule on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#anchor for (self: CallSite): nullable MClassType */
val* nit___nit__CallSite___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__typing__CallSite___anchor].val; /* _anchor on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#anchor= for (self: CallSite, nullable MClassType) */
void nit___nit__CallSite___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___anchor].val = p0; /* _anchor on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv_is_self for (self: CallSite): Bool */
short int nit___nit__CallSite___recv_is_self(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__CallSite___recv_is_self].s; /* _recv_is_self on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv_is_self= for (self: CallSite, Bool) */
void nit___nit__CallSite___recv_is_self_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__CallSite___recv_is_self].s = p0; /* _recv_is_self on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mproperty for (self: CallSite): MMethod */
val* nit___nit__CallSite___mproperty(val* self) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = self->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 622);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mproperty= for (self: CallSite, MMethod) */
void nit___nit__CallSite___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___mproperty].val = p0; /* _mproperty on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mpropdef for (self: CallSite): MMethodDef */
val* nit___nit__CallSite___mpropdef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 625);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mpropdef= for (self: CallSite, MMethodDef) */
void nit___nit__CallSite___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___mpropdef].val = p0; /* _mpropdef on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#msignature for (self: CallSite): MSignature */
val* nit___nit__CallSite___msignature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 629);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#msignature= for (self: CallSite, MSignature) */
void nit___nit__CallSite___msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___msignature].val = p0; /* _msignature on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#erasure_cast for (self: CallSite): Bool */
short int nit___nit__CallSite___erasure_cast(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__CallSite___erasure_cast].s; /* _erasure_cast on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#erasure_cast= for (self: CallSite, Bool) */
void nit___nit__CallSite___erasure_cast_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__CallSite___erasure_cast].s = p0; /* _erasure_cast on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#signaturemap for (self: CallSite): nullable SignatureMap */
val* nit___nit__CallSite___signaturemap(val* self) {
val* var /* : nullable SignatureMap */;
val* var1 /* : nullable SignatureMap */;
var1 = self->attrs[COLOR_nit__typing__CallSite___signaturemap].val; /* _signaturemap on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#signaturemap= for (self: CallSite, nullable SignatureMap) */
void nit___nit__CallSite___signaturemap_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___signaturemap].val = p0; /* _signaturemap on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#check_signature for (self: CallSite, TypeVisitor, Array[AExpr]): Bool */
short int nit___nit__CallSite___check_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_v /* var v: TypeVisitor */;
val* var_args /* var args: Array[AExpr] */;
val* var1 /* : ANode */;
val* var2 /* : MMethod */;
val* var3 /* : MSignature */;
val* var4 /* : nullable SignatureMap */;
val* var_map /* var map: nullable SignatureMap */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_v = p0;
var_args = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__CallSite__node]))(self); /* node on <self:CallSite>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__CallSite__mproperty]))(self); /* mproperty on <self:CallSite>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__CallSite__msignature]))(self); /* msignature on <self:CallSite>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__check_signature]))(var_v, var1, var_args, var2, var3); /* check_signature on <var_v:TypeVisitor>*/
}
var_map = var4;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__CallSite__signaturemap_61d]))(self, var_map); /* signaturemap= on <self:CallSite>*/
}
if (var_map == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_map->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_map, ((val*)NULL)); /* == on <var_map:nullable SignatureMap>*/
var5 = var6;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#CallSite#init for (self: CallSite) */
void nit___nit__CallSite___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__CallSite___standard__kernel__Object__init]))(self); /* init on <self:CallSite>*/
}
RET_LABEL:;
}
/* method typing#Variable#declared_type for (self: Variable): nullable MType */
val* nit__typing___Variable___declared_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#declared_type= for (self: Variable, nullable MType) */
void nit__typing___Variable___declared_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__Variable___declared_type].val = p0; /* _declared_type on <self:Variable> */
RET_LABEL:;
}
/* method typing#Variable#is_adapted for (self: Variable): Bool */
short int nit__typing___Variable___is_adapted(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__Variable___is_adapted].s; /* _is_adapted on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#is_adapted= for (self: Variable, Bool) */
void nit__typing___Variable___is_adapted_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__Variable___is_adapted].s = p0; /* _is_adapted on <self:Variable> */
RET_LABEL:;
}
/* method typing#FlowContext#vars for (self: FlowContext): HashMap[Variable, nullable MType] */
val* nit__typing___FlowContext___vars(val* self) {
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable MType] */;
var1 = self->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 657);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#vars= for (self: FlowContext, HashMap[Variable, nullable MType]) */
void nit__typing___FlowContext___vars_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__FlowContext___vars].val = p0; /* _vars on <self:FlowContext> */
RET_LABEL:;
}
/* method typing#FlowContext#set_var for (self: FlowContext, TypeVisitor, Variable, nullable MType) */
void nit__typing___FlowContext___set_var(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: TypeVisitor */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: nullable MType */;
short int var /* : Bool */;
val* var1 /* : nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : HashMap[Variable, nullable MType] */;
short int var8 /* : Bool */;
short int var_9 /* var : Bool */;
val* var10 /* : HashMap[Variable, nullable MType] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : HashMap[Variable, nullable MType] */;
var_v = p0;
var_variable = p1;
var_mtype = p2;
{
var1 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type]))(var_variable); /* declared_type on <var_variable:Variable>*/
}
if (var1 == NULL) {
var2 = (var_mtype == NULL);
} else {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_mtype); /* == on <var1:nullable MType>*/
var2 = var3;
}
var_ = var2;
if (var2){
{
var4 = ((short int(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__is_adapted]))(var_variable); /* is_adapted on <var_variable:Variable>*/
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__FlowContext__vars]))(self); /* vars on <self:FlowContext>*/
}
{
var8 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var7, var_variable); /* has_key on <var7:HashMap[Variable, nullable MType]>*/
}
var_9 = var8;
if (var8){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__FlowContext__vars]))(self); /* vars on <self:FlowContext>*/
}
{
var11 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var10, var_variable); /* [] on <var10:HashMap[Variable, nullable MType]>*/
}
if (var11 == NULL) {
var12 = (var_mtype == NULL);
} else {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_mtype); /* == on <var11:nullable Object(nullable MType)>*/
var12 = var13;
}
var6 = var12;
} else {
var6 = var_9;
}
if (var6){
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__FlowContext__vars]))(self); /* vars on <self:FlowContext>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var14->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var14, var_variable, var_mtype); /* []= on <var14:HashMap[Variable, nullable MType]>*/
}
{
((void(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__dirty_61d]))(var_v, 1); /* dirty= on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, short int p0))(var_variable->class->vft[COLOR_nit__typing__Variable__is_adapted_61d]))(var_variable, 1); /* is_adapted= on <var_variable:Variable>*/
}
RET_LABEL:;
}
/* method typing#FlowContext#collect_types for (self: FlowContext, Variable): Array[nullable MType] */
val* nit__typing___FlowContext___collect_types(val* self, val* p0) {
val* var /* : Array[nullable MType] */;
val* var_variable /* var variable: Variable */;
val* var1 /* : Array[nullable MType] */;
val* var_res /* var res: Array[nullable MType] */;
val* var2 /* : Array[FlowContext] */;
val* var_ /* var : Array[FlowContext] */;
val* var_todo /* var todo: Array[FlowContext] */;
val* var3 /* : HashSet[FlowContext] */;
val* var_seen /* var seen: HashSet[FlowContext] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_f /* var f: FlowContext */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[Variable, nullable MType] */;
short int var10 /* : Bool */;
val* var11 /* : HashMap[Variable, nullable MType] */;
val* var12 /* : nullable Object */;
val* var13 /* : Array[FlowContext] */;
val* var14 /* : Array[FlowContext] */;
val* var15 /* : Array[FlowContext] */;
short int var16 /* : Bool */;
val* var17 /* : nullable MType */;
var_variable = p0;
var1 = NEW_standard__Array(&type_standard__Array__nullable__nit__MType);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[nullable MType]>*/
}
var_res = var1;
var2 = NEW_standard__Array(&type_standard__Array__nit__FlowContext);
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_standard__array__Array__with_capacity]))(var2, 1l); /* with_capacity on <var2:Array[FlowContext]>*/
}
var_ = var2;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, self); /* push on <var_:Array[FlowContext]>*/
}
var_todo = var_;
var3 = NEW_standard__HashSet(&type_standard__HashSet__nit__FlowContext);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:HashSet[FlowContext]>*/
}
var_seen = var3;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_todo->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_todo); /* is_empty on <var_todo:Array[FlowContext]>*/
}
var5 = !var4;
if (var5){
{
var6 = ((val*(*)(val* self))(var_todo->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var_todo); /* pop on <var_todo:Array[FlowContext]>*/
}
var_f = var6;
{
var7 = ((short int(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__is_unreachable]))(var_f); /* is_unreachable on <var_f:FlowContext>*/
}
if (var7){
goto BREAK_label;
} else {
}
{
var8 = ((short int(*)(val* self, val* p0))(var_seen->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_seen, var_f); /* has on <var_seen:HashSet[FlowContext]>*/
}
if (var8){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_seen->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_seen, var_f); /* add on <var_seen:HashSet[FlowContext]>*/
}
{
var9 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__typing__FlowContext__vars]))(var_f); /* vars on <var_f:FlowContext>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var9, var_variable); /* has_key on <var9:HashMap[Variable, nullable MType]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__typing__FlowContext__vars]))(var_f); /* vars on <var_f:FlowContext>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var11, var_variable); /* [] on <var11:HashMap[Variable, nullable MType]>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var12); /* add on <var_res:Array[nullable MType]>*/
}
} else {
{
var13 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__previous]))(var_f); /* previous on <var_f:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_todo, var13); /* add_all on <var_todo:Array[FlowContext]>*/
}
{
var14 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__loops]))(var_f); /* loops on <var_f:FlowContext>*/
}
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_todo, var14); /* add_all on <var_todo:Array[FlowContext]>*/
}
{
var15 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__flow__FlowContext__previous]))(var_f); /* previous on <var_f:FlowContext>*/
}
{
var16 = ((short int(*)(val* self))(var15->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var15); /* is_empty on <var15:Array[FlowContext]>*/
}
if (var16){
{
var17 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type]))(var_variable); /* declared_type on <var_variable:Variable>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var17); /* add on <var_res:Array[nullable MType]>*/
}
} else {
}
}
} else {
goto BREAK_label18;
}
BREAK_label: (void)0;
}
BREAK_label18: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#APropdef#do_typing for (self: APropdef, ModelBuilder) */
void nit__typing___APropdef___do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method typing#APropdef#selfvariable for (self: APropdef): nullable Variable */
val* nit__typing___APropdef___selfvariable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__typing__APropdef___selfvariable].val; /* _selfvariable on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#APropdef#selfvariable= for (self: APropdef, nullable Variable) */
void nit__typing___APropdef___selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__APropdef___selfvariable].val = p0; /* _selfvariable on <self:APropdef> */
RET_LABEL:;
}
/* method typing#AMethPropdef#do_typing for (self: AMethPropdef, ModelBuilder) */
void nit__typing___AMethPropdef___APropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : TypeVisitor */;
val* var7 /* : MClassDef */;
val* var8 /* : MModule */;
val* var_v /* var v: TypeVisitor */;
val* var9 /* : Variable */;
val* var10 /* : nullable MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var11 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
long var_i /* var i: Int */;
long var14 /* : Int */;
long var_ /* var : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var18 /* : Bool */;
val* var19 /* : Array[MParameter] */;
val* var20 /* : nullable Object */;
val* var21 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable ASignature */;
val* var27 /* : ANodes[AParam] */;
val* var28 /* : nullable Object */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : nullable MClass */;
val* var_arrayclass /* var arrayclass: nullable MClass */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Array[MType] */;
val* var_36 /* var : Array[MType] */;
val* var37 /* : MClassType */;
val* var38 /* : nullable ASignature */;
val* var39 /* : ANodes[AParam] */;
val* var40 /* : nullable Object */;
val* var41 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var_48 /* var : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable FlowContext */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var_56 /* var : Bool */;
val* var57 /* : nullable MType */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
var_modelbuilder = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(self); /* n_block on <self:AMethPropdef>*/
}
var_nblock = var;
if (var_nblock == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nblock, ((val*)NULL)); /* == on <var_nblock:nullable AExpr>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
var_mpropdef = var3;
if (var_mpropdef == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MMethodDef>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
var6 = NEW_nit__typing__TypeVisitor(&type_nit__typing__TypeVisitor);
{
var7 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var7); /* mmodule on <var7:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder_61d]))(var6, var_modelbuilder); /* modelbuilder= on <var6:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__typing__TypeVisitor__mmodule_61d]))(var6, var8); /* mmodule= on <var6:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef_61d]))(var6, var_mpropdef); /* mpropdef= on <var6:TypeVisitor>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:TypeVisitor>*/
}
var_v = var6;
{
var9 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__selfvariable]))(var_v); /* selfvariable on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__APropdef__selfvariable_61d]))(self, var9); /* selfvariable= on <self:AMethPropdef>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 728);
fatal_exit(1);
}
var_mmethoddef = var10;
{
var11 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mmethoddef); /* msignature on <var_mmethoddef:MMethodDef>*/
}
var_msignature = var11;
if (var_msignature == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, ((val*)NULL)); /* == on <var_msignature:nullable MSignature>*/
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
var_i = 0l;
{
var14 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:nullable MSignature(MSignature)>*/
}
var_ = var14;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var17 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var18 = var_i < var_;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var19 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:nullable MSignature(MSignature)>*/
}
{
var20 = ((val*(*)(val* self, long p0))(var19->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var19, var_i); /* [] on <var19:Array[MParameter]>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__MParameter__mtype]))(var20); /* mtype on <var20:nullable Object(MParameter)>*/
}
var_mtype = var21;
{
var22 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__vararg_rank]))(var_msignature); /* vararg_rank on <var_msignature:nullable MSignature(MSignature)>*/
}
{
{ /* Inline kernel#Int#== (var22,var_i) on <var22:Int> */
var25 = var22 == var_i;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 734);
fatal_exit(1);
} else {
var27 = ((val*(*)(val* self))(var26->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var26); /* n_params on <var26:nullable ASignature>*/
}
{
var28 = ((val*(*)(val* self, long p0))(var27->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var27, var_i); /* [] on <var27:ANodes[AParam]>*/
}
if (likely(varonce!=NULL)) {
var29 = varonce;
} else {
var30 = "Array";
var31 = standard___standard__NativeString___to_s_with_length(var30, 5l);
var29 = var31;
varonce = var29;
}
{
var32 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, var28, var29); /* get_mclass on <var_v:TypeVisitor>*/
}
var_arrayclass = var32;
if (var_arrayclass == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
var34 = ((short int(*)(val* self, val* p0))(var_arrayclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_arrayclass, ((val*)NULL)); /* == on <var_arrayclass:nullable MClass>*/
var33 = var34;
}
if (var33){
goto RET_LABEL;
} else {
}
var35 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var35->class->vft[COLOR_standard__array__Array__with_capacity]))(var35, 1l); /* with_capacity on <var35:Array[MType]>*/
}
var_36 = var35;
{
((void(*)(val* self, val* p0))(var_36->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_36, var_mtype); /* push on <var_36:Array[MType]>*/
}
{
var37 = ((val*(*)(val* self, val* p0))(var_arrayclass->class->vft[COLOR_nit__model__MClass__get_mtype]))(var_arrayclass, var_36); /* get_mtype on <var_arrayclass:nullable MClass(MClass)>*/
}
var_mtype = var37;
} else {
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 738);
fatal_exit(1);
} else {
var39 = ((val*(*)(val* self))(var38->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var38); /* n_params on <var38:nullable ASignature>*/
}
{
var40 = ((val*(*)(val* self, long p0))(var39->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var39, var_i); /* [] on <var39:ANodes[AParam]>*/
}
{
var41 = ((val*(*)(val* self))(var40->class->vft[COLOR_nit__scope__AParam__variable]))(var40); /* variable on <var40:nullable Object(AParam)>*/
}
var_variable = var41;
if (var_variable == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
var43 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_variable, ((val*)NULL)); /* != on <var_variable:nullable Variable>*/
var42 = var43;
}
if (unlikely(!var42)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 739);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type_61d]))(var_variable, var_mtype); /* declared_type= on <var_variable:nullable Variable(Variable)>*/
}
var44 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
for(;;) {
{
((void(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__dirty_61d]))(var_v, 0); /* dirty= on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var_nblock); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
var46 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__has_loop]))(var_v); /* has_loop on <var_v:TypeVisitor>*/
}
var47 = !var46;
var_48 = var47;
if (var47){
var45 = var_48;
} else {
{
var49 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__dirty]))(var_v); /* dirty on <var_v:TypeVisitor>*/
}
var50 = !var49;
var45 = var50;
}
if (var45){
goto BREAK_label51;
} else {
}
}
BREAK_label51: (void)0;
{
var53 = ((val*(*)(val* self))(var_nblock->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_nblock); /* after_flow_context on <var_nblock:nullable AExpr(AExpr)>*/
}
if (var53 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 749);
fatal_exit(1);
} else {
var54 = ((short int(*)(val* self))(var53->class->vft[COLOR_nit__flow__FlowContext__is_unreachable]))(var53); /* is_unreachable on <var53:nullable FlowContext>*/
}
var55 = !var54;
var_56 = var55;
if (var55){
{
var57 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_msignature); /* return_mtype on <var_msignature:nullable MSignature(MSignature)>*/
}
if (var57 == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
var59 = ((short int(*)(val* self, val* p0))(var57->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var57, ((val*)NULL)); /* != on <var57:nullable MType>*/
var58 = var59;
}
var52 = var58;
} else {
var52 = var_56;
}
if (var52){
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "Error: reached end of function; expected `return` with a value.";
var63 = standard___standard__NativeString___to_s_with_length(var62, 63l);
var61 = var63;
varonce60 = var61;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var61); /* error on <var_v:TypeVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method typing#AAttrPropdef#do_typing for (self: AAttrPropdef, ModelBuilder) */
void nit__typing___AAttrPropdef___APropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : TypeVisitor */;
val* var6 /* : MClassDef */;
val* var7 /* : MModule */;
val* var_v /* var v: TypeVisitor */;
val* var8 /* : Variable */;
val* var9 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable MPropDef */;
val* var13 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var14 /* : nullable MType */;
val* var15 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable FlowContext */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
var_modelbuilder = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__has_value]))(self); /* has_value on <self:AAttrPropdef>*/
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
var_mpropdef = var2;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MAttributeDef>*/
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
var5 = NEW_nit__typing__TypeVisitor(&type_nit__typing__TypeVisitor);
{
var6 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var6); /* mmodule on <var6:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder_61d]))(var5, var_modelbuilder); /* modelbuilder= on <var5:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__typing__TypeVisitor__mmodule_61d]))(var5, var7); /* mmodule= on <var5:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef_61d]))(var5, var_mpropdef); /* mpropdef= on <var5:TypeVisitor>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:TypeVisitor>*/
}
var_v = var5;
{
var8 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__selfvariable]))(var_v); /* selfvariable on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__APropdef__selfvariable_61d]))(self, var8); /* selfvariable= on <self:AAttrPropdef>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_expr]))(self); /* n_expr on <self:AAttrPropdef>*/
}
var_nexpr = var9;
if (var_nexpr == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nexpr, ((val*)NULL)); /* != on <var_nexpr:nullable AExpr>*/
var10 = var11;
}
if (var10){
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 769);
fatal_exit(1);
} else {
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var12); /* static_mtype on <var12:nullable MPropDef(nullable MAttributeDef)>*/
}
var_mtype = var13;
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(var_v, var_nexpr, var_mtype); /* visit_expr_subtype on <var_v:TypeVisitor>*/
}
} else {
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_block]))(self); /* n_block on <self:AAttrPropdef>*/
}
var_nblock = var15;
if (var_nblock == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nblock, ((val*)NULL)); /* != on <var_nblock:nullable AExpr>*/
var16 = var17;
}
if (var16){
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var_nblock); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
var18 = ((val*(*)(val* self))(var_nblock->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(var_nblock); /* after_flow_context on <var_nblock:nullable AExpr(AExpr)>*/
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 775);
fatal_exit(1);
} else {
var19 = ((short int(*)(val* self))(var18->class->vft[COLOR_nit__flow__FlowContext__is_unreachable]))(var18); /* is_unreachable on <var18:nullable FlowContext>*/
}
var20 = !var19;
if (var20){
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "Error: reached end of block; expected `return`.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 47l);
var21 = var23;
varonce = var21;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var21); /* error on <var_v:TypeVisitor>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method typing#AExpr#mtype for (self: AExpr): nullable MType */
val* nit__typing___AExpr___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#mtype= for (self: AExpr, nullable MType) */
void nit__typing___AExpr___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AExpr___mtype].val = p0; /* _mtype on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#is_typed for (self: AExpr): Bool */
short int nit__typing___AExpr___is_typed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#is_typed= for (self: AExpr, Bool) */
void nit__typing___AExpr___is_typed_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = p0; /* _is_typed on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#implicit_cast_to for (self: AExpr): nullable MType */
val* nit__typing___AExpr___implicit_cast_to(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#implicit_cast_to= for (self: AExpr, nullable MType) */
void nit__typing___AExpr___implicit_cast_to_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = p0; /* _implicit_cast_to on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#its_variable for (self: AExpr): nullable Variable */
val* nit__typing___AExpr___its_variable(val* self) {
val* var /* : nullable Variable */;
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExpr#accept_typing for (self: AExpr, TypeVisitor) */
void nit__typing___AExpr___accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "no implemented accept_typing for ";
var4 = standard___standard__NativeString___to_s_with_length(var3, 33l);
var2 = var4;
varonce1 = var2;
}
((struct instance_standard__NativeArray*)var)->values[0]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__class_name]))(self); /* class_name on <self:AExpr>*/
}
((struct instance_standard__NativeArray*)var)->values[1]=var5;
{
var6 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var6); /* error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#AExpr#comprehension for (self: AExpr): nullable AArrayExpr */
val* nit__typing___AExpr___comprehension(val* self) {
val* var /* : nullable AArrayExpr */;
val* var1 /* : nullable AArrayExpr */;
var1 = self->attrs[COLOR_nit__typing__AExpr___comprehension].val; /* _comprehension on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#comprehension= for (self: AExpr, nullable AArrayExpr) */
void nit__typing___AExpr___comprehension_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = p0; /* _comprehension on <self:AExpr> */
RET_LABEL:;
}
/* method typing#ABlockExpr#accept_typing for (self: ABlockExpr, TypeVisitor) */
void nit__typing___ABlockExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[AExpr] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: AExpr */;
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
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var_e); /* visit_stmt on <var_v:TypeVisitor>*/
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
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ABlockExpr>*/
}
RET_LABEL:;
}
/* method typing#ABlockExpr#mtype for (self: ABlockExpr): nullable MType */
val* nit__typing___ABlockExpr___AExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : ANodes[AExpr] */;
short int var2 /* : Bool */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : nullable Object */;
val* var5 /* : nullable MType */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:ANodes[AExpr]>*/
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var3); /* last on <var3:ANodes[AExpr]>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__typing__AExpr__mtype]))(var4); /* mtype on <var4:nullable Object(AExpr)>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVardeclExpr#accept_typing for (self: AVardeclExpr, TypeVisitor) */
void nit__typing___AVardeclExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_mtype /* var mtype: nullable MType */;
val* var6 /* : nullable MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable MType */;
val* var_etype /* var etype: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : ModelBuilder */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : nullable MType */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var_decltype /* var decltype: nullable MType */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var_ /* var : Bool */;
short int var41 /* : Bool */;
int cltype;
int idtype;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : nullable MClass */;
val* var_objclass /* var objclass: nullable MClass */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : MClassType */;
val* var50 /* : MType */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVardeclExpr__variable]))(self); /* variable on <self:AVardeclExpr>*/
}
var_variable = var;
if (var_variable == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, ((val*)NULL)); /* == on <var_variable:nullable Variable>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_type]))(self); /* n_type on <self:AVardeclExpr>*/
}
var_ntype = var3;
if (var_ntype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, ((val*)NULL)); /* == on <var_ntype:nullable AType>*/
var4 = var5;
}
if (var4){
var_mtype = ((val*)NULL);
} else {
{
var6 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__resolve_mtype]))(var_v, var_ntype); /* resolve_mtype on <var_v:TypeVisitor>*/
}
var_mtype = var6;
if (var_mtype == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_expr]))(self); /* n_expr on <self:AVardeclExpr>*/
}
var_nexpr = var9;
if (var_nexpr == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nexpr, ((val*)NULL)); /* != on <var_nexpr:nullable AExpr>*/
var10 = var11;
}
if (var10){
if (var_mtype == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mtype, ((val*)NULL)); /* != on <var_mtype:nullable MType>*/
var12 = var13;
}
if (var12){
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(var_v, var_nexpr, var_mtype); /* visit_expr_subtype on <var_v:TypeVisitor>*/
}
var_etype = var14;
if (var_etype == NULL) {
var15 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
var16 = ((short int(*)(val* self, val* p0))(var_etype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_etype, var_mtype); /* == on <var_etype:nullable MType>*/
var15 = var16;
}
if (var15){
if (var_ntype == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype, ((val*)NULL)); /* != on <var_ntype:nullable AType>*/
var17 = var18;
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 851);
fatal_exit(1);
}
{
var19 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(var_v); /* modelbuilder on <var_v:TypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var20 = varonce;
} else {
var21 = "useless-type";
var22 = standard___standard__NativeString___to_s_with_length(var21, 12l);
var20 = var22;
varonce = var20;
}
if (unlikely(varonce23==NULL)) {
var24 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Warning: useless type definition for variable `";
var28 = standard___standard__NativeString___to_s_with_length(var27, 47l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "`";
var32 = standard___standard__NativeString___to_s_with_length(var31, 1l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var24)->values[2]=var30;
} else {
var24 = varonce23;
varonce23 = NULL;
}
{
var33 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__scope__Variable__name]))(var_variable); /* name on <var_variable:nullable Variable(Variable)>*/
}
((struct instance_standard__NativeArray*)var24)->values[1]=var33;
{
var34 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var19->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(var19, var_ntype, var20, var34); /* advice on <var19:ModelBuilder>*/
}
} else {
}
} else {
{
var35 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var_nexpr); /* visit_expr on <var_v:TypeVisitor>*/
}
var_mtype = var35;
if (var_mtype == NULL) {
var36 = 1; /* is null */
} else {
var36 = 0; /* arg is null but recv is not */
}
if (0) {
var37 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var36 = var37;
}
if (var36){
goto RET_LABEL;
} else {
}
}
} else {
}
var_decltype = var_mtype;
if (var_mtype == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (0) {
var40 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var39 = var40;
}
var_ = var39;
if (var39){
var38 = var_;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var41 = 0;
} else {
var41 = var_mtype->type->type_table[cltype] == idtype;
}
var38 = var41;
}
if (var38){
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Object";
var45 = standard___standard__NativeString___to_s_with_length(var44, 6l);
var43 = var45;
varonce42 = var43;
}
{
var46 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var43); /* get_mclass on <var_v:TypeVisitor>*/
}
var_objclass = var46;
if (var_objclass == NULL) {
var47 = 1; /* is null */
} else {
var47 = 0; /* arg is null but recv is not */
}
if (0) {
var48 = ((short int(*)(val* self, val* p0))(var_objclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_objclass, ((val*)NULL)); /* == on <var_objclass:nullable MClass>*/
var47 = var48;
}
if (var47){
goto RET_LABEL;
} else {
}
{
var49 = ((val*(*)(val* self))(var_objclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_objclass); /* mclass_type on <var_objclass:nullable MClass(MClass)>*/
}
{
var50 = ((val*(*)(val* self))(var49->class->vft[COLOR_nit__model__MType__as_nullable]))(var49); /* as_nullable on <var49:MClassType>*/
}
var_decltype = var50;
if (var_mtype == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (0) {
var52 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType(nullable MNullType)>*/
var51 = var52;
}
if (var51){
var_mtype = var_decltype;
} else {
}
} else {
}
{
((void(*)(val* self, val* p0))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type_61d]))(var_variable, var_decltype); /* declared_type= on <var_variable:nullable Variable(Variable)>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__set_variable]))(var_v, self, var_variable, var_mtype); /* set_variable on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_mtype); /* mtype= on <self:AVardeclExpr>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AVardeclExpr>*/
}
RET_LABEL:;
}
/* method typing#AVarExpr#its_variable for (self: AVarExpr): nullable Variable */
val* nit__typing___AVarExpr___AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVarExpr#accept_typing for (self: AVarExpr, TypeVisitor) */
void nit__typing___AVarExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarExpr>*/
}
var_variable = var;
if (var_variable == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, ((val*)NULL)); /* == on <var_variable:nullable Variable>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_variable]))(var_v, self, var_variable); /* get_variable on <var_v:TypeVisitor>*/
}
var_mtype = var3;
if (var_mtype == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mtype, ((val*)NULL)); /* != on <var_mtype:nullable MType>*/
var4 = var5;
}
if (var4){
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_mtype); /* mtype= on <self:AVarExpr>*/
}
RET_LABEL:;
}
/* method typing#AVarAssignExpr#accept_typing for (self: AVarAssignExpr, TypeVisitor) */
void nit__typing___AVarAssignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var5 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarAssignExpr>*/
}
var_variable = var;
if (var_variable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_variable, ((val*)NULL)); /* != on <var_variable:nullable Variable>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 900);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value]))(self); /* n_value on <self:AVarAssignExpr>*/
}
{
var4 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type]))(var_variable); /* declared_type on <var_variable:nullable Variable(Variable)>*/
}
{
var5 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(var_v, var3, var4); /* visit_expr_subtype on <var_v:TypeVisitor>*/
}
var_mtype = var5;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__set_variable]))(var_v, self, var_variable, var_mtype); /* set_variable on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AVarAssignExpr>*/
}
RET_LABEL:;
}
/* method typing#AReassignFormExpr#reassign_callsite for (self: AReassignFormExpr): nullable CallSite */
val* nit__typing___AReassignFormExpr___reassign_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#reassign_callsite= for (self: AReassignFormExpr, nullable CallSite) */
void nit__typing___AReassignFormExpr___reassign_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val = p0; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#read_type for (self: AReassignFormExpr): nullable MType */
val* nit__typing___AReassignFormExpr___read_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val; /* _read_type on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#read_type= for (self: AReassignFormExpr, nullable MType) */
void nit__typing___AReassignFormExpr___read_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val = p0; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#resolve_reassignment for (self: AReassignFormExpr, TypeVisitor, MType, MType): nullable MType */
val* nit__typing___AReassignFormExpr___resolve_reassignment(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_v /* var v: TypeVisitor */;
val* var_readtype /* var readtype: MType */;
val* var_writetype /* var writetype: MType */;
val* var1 /* : AAssignOp */;
val* var2 /* : String */;
val* var_reassign_name /* var reassign_name: String */;
val* var3 /* : AAssignOp */;
val* var4 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var8 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AExpr */;
val* var17 /* : Array[MParameter] */;
val* var18 /* : nullable Object */;
val* var19 /* : MType */;
val* var20 /* : nullable MType */;
val* var_value_type /* var value_type: nullable MType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : nullable MType */;
var_v = p0;
var_readtype = p1;
var_writetype = p2;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_assign_op]))(self); /* n_assign_op on <self:AReassignFormExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__AAssignOp__operator]))(var1); /* operator on <var1:AAssignOp>*/
}
var_reassign_name = var2;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AReassignFormExpr__read_type_61d]))(self, var_readtype); /* read_type= on <self:AReassignFormExpr>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_assign_op]))(self); /* n_assign_op on <self:AReassignFormExpr>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, var3, var_readtype, var_reassign_name, 0); /* get_method on <var_v:TypeVisitor>*/
}
var_callsite = var4;
if (var_callsite == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, ((val*)NULL)); /* == on <var_callsite:nullable CallSite>*/
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AReassignFormExpr__reassign_callsite_61d]))(self, var_callsite); /* reassign_callsite= on <self:AReassignFormExpr>*/
}
{
var7 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_callsite); /* msignature on <var_callsite:nullable CallSite(CallSite)>*/
}
var_msignature = var7;
{
var8 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_msignature); /* return_mtype on <var_msignature:MSignature>*/
}
var_rettype = var8;
{
var10 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#== (var10,1l) on <var10:Int> */
var13 = var10 == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
if (var_rettype == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_rettype, ((val*)NULL)); /* != on <var_rettype:nullable MType>*/
var14 = var15;
}
var9 = var14;
} else {
var9 = var_;
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 933);
fatal_exit(1);
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value]))(self); /* n_value on <self:AReassignFormExpr>*/
}
{
var17 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:MSignature>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var17); /* first on <var17:Array[MParameter]>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__model__MParameter__mtype]))(var18); /* mtype on <var18:nullable Object(MParameter)>*/
}
{
var20 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(var_v, var16, var19); /* visit_expr_subtype on <var_v:TypeVisitor>*/
}
var_value_type = var20;
if (var_value_type == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = ((short int(*)(val* self, val* p0))(var_value_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_value_type, ((val*)NULL)); /* == on <var_value_type:nullable MType>*/
var21 = var22;
}
if (var21){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var23 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__check_subtype]))(var_v, self, var_rettype, var_writetype, 0); /* check_subtype on <var_v:TypeVisitor>*/
}
var = var_rettype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVarReassignExpr#accept_typing for (self: AVarReassignExpr, TypeVisitor) */
void nit__typing___AVarReassignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable MType */;
val* var_writetype /* var writetype: nullable MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarReassignExpr>*/
}
var_variable = var;
if (var_variable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_variable, ((val*)NULL)); /* != on <var_variable:nullable Variable>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 947);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_variable]))(var_v, self, var_variable); /* get_variable on <var_v:TypeVisitor>*/
}
var_readtype = var3;
if (var_readtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_readtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_readtype, ((val*)NULL)); /* == on <var_readtype:nullable MType>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AReassignFormExpr__read_type_61d]))(self, var_readtype); /* read_type= on <self:AVarReassignExpr>*/
}
{
var6 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type]))(var_variable); /* declared_type on <var_variable:nullable Variable(Variable)>*/
}
var_writetype = var6;
if (var_writetype == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_writetype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_writetype, ((val*)NULL)); /* == on <var_writetype:nullable MType>*/
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__typing__AReassignFormExpr__resolve_reassignment]))(self, var_v, var_readtype, var_writetype); /* resolve_reassignment on <self:AVarReassignExpr>*/
}
var_rettype = var9;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__set_variable]))(var_v, self, var_variable, var_rettype); /* set_variable on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AVarReassignExpr>*/
}
RET_LABEL:;
}
/* method typing#AContinueExpr#accept_typing for (self: AContinueExpr, TypeVisitor) */
void nit__typing___AContinueExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AEscapeExpr__n_expr]))(self); /* n_expr on <self:AContinueExpr>*/
}
var_nexpr = var;
if (var_nexpr == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nexpr, ((val*)NULL)); /* != on <var_nexpr:nullable AExpr>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var_nexpr); /* visit_expr on <var_v:TypeVisitor>*/
}
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AContinueExpr>*/
}
RET_LABEL:;
}
/* method typing#ABreakExpr#accept_typing for (self: ABreakExpr, TypeVisitor) */
void nit__typing___ABreakExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AEscapeExpr__n_expr]))(self); /* n_expr on <self:ABreakExpr>*/
}
var_nexpr = var;
if (var_nexpr == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nexpr, ((val*)NULL)); /* != on <var_nexpr:nullable AExpr>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var_nexpr); /* visit_expr on <var_v:TypeVisitor>*/
}
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ABreakExpr>*/
}
RET_LABEL:;
}
/* method typing#AReturnExpr#accept_typing for (self: AReturnExpr, TypeVisitor) */
void nit__typing___AReturnExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : nullable MSignature */;
val* var4 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : nullable MType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable MType */;
val* var14 /* : nullable MType */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReturnExpr__n_expr]))(self); /* n_expr on <self:AReturnExpr>*/
}
var_nexpr = var;
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef]))(var_v); /* mpropdef on <var_v:TypeVisitor>*/
}
var_mpropdef = var1;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(var_mpropdef == NULL) {
var2 = 0;
} else {
if(cltype >= var_mpropdef->type->table_size) {
var2 = 0;
} else {
var2 = var_mpropdef->type->type_table[cltype] == idtype;
}
}
if (var2){
{
var3 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 995);
fatal_exit(1);
} else {
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var3); /* return_mtype on <var3:nullable MSignature>*/
}
var_ret_type = var4;
} else {
/* <var_mpropdef:nullable MPropDef> isa MAttributeDef */
cltype6 = type_nit__MAttributeDef.color;
idtype7 = type_nit__MAttributeDef.id;
if(var_mpropdef == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_mpropdef->type->table_size) {
var5 = 0;
} else {
var5 = var_mpropdef->type->type_table[cltype6] == idtype7;
}
}
if (var5){
{
var8 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var_mpropdef); /* static_mtype on <var_mpropdef:nullable MPropDef(MAttributeDef)>*/
}
var_ret_type = var8;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 999);
fatal_exit(1);
}
}
if (var_nexpr == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nexpr, ((val*)NULL)); /* != on <var_nexpr:nullable AExpr>*/
var9 = var10;
}
if (var9){
if (var_ret_type == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ret_type, ((val*)NULL)); /* != on <var_ret_type:nullable Object(nullable MType)>*/
var11 = var12;
}
if (var11){
{
var13 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(var_v, var_nexpr, var_ret_type); /* visit_expr_subtype on <var_v:TypeVisitor>*/
}
} else {
{
var14 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var_nexpr); /* visit_expr on <var_v:TypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "Error: `return` with value in a procedure.";
var17 = standard___standard__NativeString___to_s_with_length(var16, 42l);
var15 = var17;
varonce = var15;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, var_nexpr, var15); /* error on <var_v:TypeVisitor>*/
}
}
} else {
if (var_ret_type == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ret_type, ((val*)NULL)); /* != on <var_ret_type:nullable Object(nullable MType)>*/
var18 = var19;
}
if (var18){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Error: `return` without value in a function.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 44l);
var21 = var23;
varonce20 = var21;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var21); /* error on <var_v:TypeVisitor>*/
}
} else {
}
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AReturnExpr>*/
}
RET_LABEL:;
}
/* method typing#AAbortExpr#accept_typing for (self: AAbortExpr, TypeVisitor) */
void nit__typing___AAbortExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AAbortExpr>*/
}
RET_LABEL:;
}
/* method typing#AIfExpr#accept_typing for (self: AIfExpr, TypeVisitor) */
void nit__typing___AIfExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
short int var4 /* : Bool */;
val* var5 /* : nullable AExpr */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable AExpr */;
val* var12 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_expr]))(self); /* n_expr on <self:AIfExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then]))(self); /* n_then on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var2); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_else]))(self); /* n_else on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var3); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AIfExpr>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then]))(self); /* n_then on <self:AIfExpr>*/
}
if (var5 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var5, ((val*)NULL)); /* != on <var5:nullable AExpr>*/
var6 = var7;
}
var_ = var6;
if (var6){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_else]))(self); /* n_else on <self:AIfExpr>*/
}
if (var8 == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var8, ((val*)NULL)); /* == on <var8:nullable AExpr>*/
var9 = var10;
}
var4 = var9;
} else {
var4 = var_;
}
if (var4){
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then]))(self); /* n_then on <self:AIfExpr>*/
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1033);
fatal_exit(1);
} else {
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__typing__AExpr__mtype]))(var11); /* mtype on <var11:nullable AExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var12); /* mtype= on <self:AIfExpr>*/
}
} else {
}
RET_LABEL:;
}
/* method typing#AIfexprExpr#accept_typing for (self: AIfexprExpr, TypeVisitor) */
void nit__typing___AIfexprExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var4 /* : AExpr */;
val* var5 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[MType] */;
val* var_12 /* var : Array[MType] */;
val* var13 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
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
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_expr]))(self); /* n_expr on <self:AIfexprExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_then]))(self); /* n_then on <self:AIfexprExpr>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var2); /* visit_expr on <var_v:TypeVisitor>*/
}
var_t1 = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_else]))(self); /* n_else on <self:AIfexprExpr>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var4); /* visit_expr on <var_v:TypeVisitor>*/
}
var_t2 = var5;
if (var_t1 == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_t1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t1, ((val*)NULL)); /* == on <var_t1:nullable MType>*/
var7 = var8;
}
var_ = var7;
if (var7){
var6 = var_;
} else {
if (var_t2 == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_t2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t2, ((val*)NULL)); /* == on <var_t2:nullable MType>*/
var9 = var10;
}
var6 = var9;
}
if (var6){
goto RET_LABEL;
} else {
}
var11 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var11->class->vft[COLOR_standard__array__Array__with_capacity]))(var11, 2l); /* with_capacity on <var11:Array[MType]>*/
}
var_12 = var11;
{
((void(*)(val* self, val* p0))(var_12->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_12, var_t1); /* push on <var_12:Array[MType]>*/
}
{
((void(*)(val* self, val* p0))(var_12->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_12, var_t2); /* push on <var_12:Array[MType]>*/
}
{
var13 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__merge_types]))(var_v, self, var_12); /* merge_types on <var_v:TypeVisitor>*/
}
var_t = var13;
if (var_t == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, ((val*)NULL)); /* == on <var_t:nullable MType>*/
var14 = var15;
}
if (var14){
if (unlikely(varonce==NULL)) {
var16 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Type Error: ambiguous type `";
var20 = standard___standard__NativeString___to_s_with_length(var19, 28l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "` vs `";
var24 = standard___standard__NativeString___to_s_with_length(var23, 6l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var16)->values[2]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "`.";
var28 = standard___standard__NativeString___to_s_with_length(var27, 2l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var16)->values[4]=var26;
} else {
var16 = varonce;
varonce = NULL;
}
{
var29 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_standard__string__Object__to_s]))(var_t1); /* to_s on <var_t1:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var16)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_standard__string__Object__to_s]))(var_t2); /* to_s on <var_t2:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var16)->values[3]=var30;
{
var31 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce = var16;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var31); /* error on <var_v:TypeVisitor>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_t); /* mtype= on <self:AIfexprExpr>*/
}
RET_LABEL:;
}
/* method typing#ADoExpr#accept_typing for (self: ADoExpr, TypeVisitor) */
void nit__typing___ADoExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block]))(self); /* n_block on <self:ADoExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ADoExpr>*/
}
RET_LABEL:;
}
/* method typing#AWhileExpr#accept_typing for (self: AWhileExpr, TypeVisitor) */
void nit__typing___AWhileExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable AExpr */;
var_v = p0;
{
((void(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__has_loop_61d]))(var_v, 1); /* has_loop= on <var_v:TypeVisitor>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_expr]))(self); /* n_expr on <self:AWhileExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_block]))(self); /* n_block on <self:AWhileExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var2); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AWhileExpr>*/
}
RET_LABEL:;
}
/* method typing#ALoopExpr#accept_typing for (self: ALoopExpr, TypeVisitor) */
void nit__typing___ALoopExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
var_v = p0;
{
((void(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__has_loop_61d]))(var_v, 1); /* has_loop= on <var_v:TypeVisitor>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_block]))(self); /* n_block on <self:ALoopExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ALoopExpr>*/
}
RET_LABEL:;
}
/* method typing#AForExpr#coltype for (self: AForExpr): nullable MClassType */
val* nit__typing___AForExpr___coltype(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___coltype].val; /* _coltype on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#coltype= for (self: AForExpr, nullable MClassType) */
void nit__typing___AForExpr___coltype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___coltype].val = p0; /* _coltype on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_iterator for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_iterator(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_iterator= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_iterator_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val = p0; /* _method_iterator on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_is_ok for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_is_ok(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_is_ok= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_is_ok_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val = p0; /* _method_is_ok on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_item for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_item(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_item= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_item_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_item].val = p0; /* _method_item on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_next for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_next(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_next= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_next_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_next].val = p0; /* _method_next on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_key for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_key(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_key= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_key_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_key].val = p0; /* _method_key on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_finish for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_finish(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_finish= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_finish_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_finish].val = p0; /* _method_finish on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_lt for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_lt(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_lt].val; /* _method_lt on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_lt= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_lt_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_lt].val = p0; /* _method_lt on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_successor for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_successor(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_successor].val; /* _method_successor on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_successor= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_successor_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_successor].val = p0; /* _method_successor on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#do_type_iterator for (self: AForExpr, TypeVisitor, MType) */
void nit__typing___AForExpr___do_type_iterator(val* self, val* p0, val* p1) {
val* var_v /* var v: TypeVisitor */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : nullable MClass */;
val* var_objcla /* var objcla: nullable MClass */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : AExpr */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : nullable CallSite */;
val* var_itdef /* var itdef: nullable CallSite */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : MSignature */;
val* var35 /* : nullable MType */;
val* var_ittype /* var ittype: nullable MType */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : nullable MClass */;
val* var_colit_cla /* var colit_cla: nullable MClass */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : nullable MClass */;
val* var_mapit_cla /* var mapit_cla: nullable MClass */;
short int var_is_col /* var is_col: Bool */;
short int var_is_map /* var is_map: Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var_ /* var : Bool */;
val* var55 /* : Array[MType] */;
val* var_56 /* var : Array[MType] */;
val* var57 /* : MClassType */;
val* var58 /* : MType */;
val* var59 /* : MClassType */;
short int var60 /* : Bool */;
val* var61 /* : MModule */;
val* var62 /* : nullable MClassType */;
val* var63 /* : MClassType */;
val* var_coltype /* var coltype: MClassType */;
val* var64 /* : nullable Array[Variable] */;
val* var_variables /* var variables: nullable Array[Variable] */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : nullable Object */;
val* var75 /* : Array[MType] */;
val* var76 /* : nullable Object */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var_80 /* var : Bool */;
val* var81 /* : Array[MType] */;
val* var_82 /* var : Array[MType] */;
val* var83 /* : MClassType */;
val* var84 /* : MType */;
val* var85 /* : MClassType */;
val* var86 /* : MType */;
val* var87 /* : MClassType */;
short int var88 /* : Bool */;
val* var89 /* : MModule */;
val* var90 /* : nullable MClassType */;
val* var91 /* : MClassType */;
val* var_coltype92 /* var coltype: MClassType */;
val* var93 /* : nullable Array[Variable] */;
val* var_variables94 /* var variables: nullable Array[Variable] */;
long var95 /* : Int */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
val* var104 /* : nullable Object */;
val* var105 /* : Array[MType] */;
val* var106 /* : nullable Object */;
val* var107 /* : nullable Object */;
val* var108 /* : Array[MType] */;
val* var109 /* : nullable Object */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var_112 /* var : Bool */;
short int var113 /* : Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : FlatString */;
short int var118 /* : Bool */;
val* var119 /* : MType */;
val* var120 /* : MType */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : FlatString */;
val* var128 /* : nullable CallSite */;
val* var_ikdef /* var ikdef: nullable CallSite */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
val* var132 /* : NativeArray[String] */;
static val* varonce131;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
val* var140 /* : FlatString */;
val* var141 /* : String */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : FlatString */;
val* var147 /* : nullable CallSite */;
val* var_itemdef /* var itemdef: nullable CallSite */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
val* var151 /* : NativeArray[String] */;
static val* varonce150;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
val* var155 /* : FlatString */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
val* var159 /* : FlatString */;
val* var160 /* : String */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
val* var165 /* : FlatString */;
val* var166 /* : nullable CallSite */;
val* var_nextdef /* var nextdef: nullable CallSite */;
short int var167 /* : Bool */;
short int var168 /* : Bool */;
val* var170 /* : NativeArray[String] */;
static val* varonce169;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
val* var174 /* : FlatString */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
val* var179 /* : String */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : FlatString */;
val* var185 /* : nullable CallSite */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : FlatString */;
val* var190 /* : nullable CallSite */;
val* var_keydef /* var keydef: nullable CallSite */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
val* var194 /* : NativeArray[String] */;
static val* varonce193;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
val* var198 /* : FlatString */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : FlatString */;
val* var203 /* : String */;
val* var204 /* : String */;
short int var205 /* : Bool */;
val* var206 /* : nullable Array[Variable] */;
long var207 /* : Int */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
short int var_211 /* var : Bool */;
val* var212 /* : AExpr */;
short int var213 /* : Bool */;
int cltype214;
int idtype215;
val* var216 /* : nullable Array[Variable] */;
val* var217 /* : nullable Object */;
val* var_variable /* var variable: Variable */;
val* var218 /* : nullable MType */;
val* var_vtype /* var vtype: MType */;
val* var219 /* : AExpr */;
short int var220 /* : Bool */;
int cltype221;
int idtype222;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
val* var226 /* : FlatString */;
val* var227 /* : nullable CallSite */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
val* var231 /* : FlatString */;
val* var232 /* : nullable CallSite */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
val* var236 /* : FlatString */;
val* var237 /* : nullable CallSite */;
var_v = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var = 0;
} else {
var = var_mtype->type->type_table[cltype] == idtype;
}
if (var){
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Type Error: `for` cannot iterate over `null`.";
var3 = standard___standard__NativeString___to_s_with_length(var2, 45l);
var1 = var3;
varonce = var1;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var1); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "Object";
var7 = standard___standard__NativeString___to_s_with_length(var6, 6l);
var5 = var7;
varonce4 = var5;
}
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var5); /* get_mclass on <var_v:TypeVisitor>*/
}
var_objcla = var8;
if (var_objcla == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_objcla->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_objcla, ((val*)NULL)); /* == on <var_objcla:nullable MClass>*/
var9 = var10;
}
if (var9){
goto RET_LABEL;
} else {
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "iterator";
var14 = standard___standard__NativeString___to_s_with_length(var13, 8l);
var12 = var14;
varonce11 = var12;
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_expr]))(self); /* n_expr on <self:AForExpr>*/
}
/* <var15:AExpr> isa ASelfExpr */
cltype17 = type_nit__ASelfExpr.color;
idtype18 = type_nit__ASelfExpr.id;
if(cltype17 >= var15->type->table_size) {
var16 = 0;
} else {
var16 = var15->type->type_table[cltype17] == idtype18;
}
{
var19 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_mtype, var12, var16); /* get_method on <var_v:TypeVisitor>*/
}
var_itdef = var19;
if (var_itdef == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_itdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_itdef, ((val*)NULL)); /* == on <var_itdef:nullable CallSite>*/
var20 = var21;
}
if (var20){
if (unlikely(varonce22==NULL)) {
var23 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Type Error: `for` expects a type providing an `iterator` method, got `";
var27 = standard___standard__NativeString___to_s_with_length(var26, 70l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "`.";
var31 = standard___standard__NativeString___to_s_with_length(var30, 2l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var32 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var23)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var33); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__method_iterator_61d]))(self, var_itdef); /* method_iterator= on <self:AForExpr>*/
}
{
var34 = ((val*(*)(val* self))(var_itdef->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_itdef); /* msignature on <var_itdef:nullable CallSite(CallSite)>*/
}
{
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var34); /* return_mtype on <var34:MSignature>*/
}
var_ittype = var35;
if (var_ittype == NULL) {
var36 = 1; /* is null */
} else {
var36 = 0; /* arg is null but recv is not */
}
if (0) {
var37 = ((short int(*)(val* self, val* p0))(var_ittype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ittype, ((val*)NULL)); /* == on <var_ittype:nullable MType>*/
var36 = var37;
}
if (var36){
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Type Error: `for` expects the method `iterator` to return an `Iterator` or `MapIterator` type.";
var41 = standard___standard__NativeString___to_s_with_length(var40, 94l);
var39 = var41;
varonce38 = var39;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var39); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Iterator";
var45 = standard___standard__NativeString___to_s_with_length(var44, 8l);
var43 = var45;
varonce42 = var43;
}
{
var46 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mclass]))(var_v, self, var43); /* try_get_mclass on <var_v:TypeVisitor>*/
}
var_colit_cla = var46;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "MapIterator";
var50 = standard___standard__NativeString___to_s_with_length(var49, 11l);
var48 = var50;
varonce47 = var48;
}
{
var51 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mclass]))(var_v, self, var48); /* try_get_mclass on <var_v:TypeVisitor>*/
}
var_mapit_cla = var51;
var_is_col = 0;
var_is_map = 0;
if (var_colit_cla == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (0) {
var54 = ((short int(*)(val* self, val* p0))(var_colit_cla->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_colit_cla, ((val*)NULL)); /* != on <var_colit_cla:nullable MClass>*/
var53 = var54;
}
var_ = var53;
if (var53){
var55 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var55->class->vft[COLOR_standard__array__Array__with_capacity]))(var55, 1l); /* with_capacity on <var55:Array[MType]>*/
}
var_56 = var55;
{
var57 = ((val*(*)(val* self))(var_objcla->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_objcla); /* mclass_type on <var_objcla:nullable MClass(MClass)>*/
}
{
var58 = ((val*(*)(val* self))(var57->class->vft[COLOR_nit__model__MType__as_nullable]))(var57); /* as_nullable on <var57:MClassType>*/
}
{
((void(*)(val* self, val* p0))(var_56->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_56, var58); /* push on <var_56:Array[MType]>*/
}
{
var59 = ((val*(*)(val* self, val* p0))(var_colit_cla->class->vft[COLOR_nit__model__MClass__get_mtype]))(var_colit_cla, var_56); /* get_mtype on <var_colit_cla:nullable MClass(MClass)>*/
}
{
var60 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(var_v, var_ittype, var59); /* is_subtype on <var_v:TypeVisitor>*/
}
var52 = var60;
} else {
var52 = var_;
}
if (var52){
{
var61 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(var_v); /* mmodule on <var_v:TypeVisitor>*/
}
{
var62 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor]))(var_v); /* anchor on <var_v:TypeVisitor>*/
}
{
var63 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_ittype->class->vft[COLOR_nit__model__MType__supertype_to]))(var_ittype, var61, var62, var_colit_cla); /* supertype_to on <var_ittype:nullable MType(MType)>*/
}
var_coltype = var63;
{
var64 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
var_variables = var64;
if (var_variables == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1134);
fatal_exit(1);
} else {
var65 = ((long(*)(val* self))(var_variables->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_variables); /* length on <var_variables:nullable Array[Variable]>*/
}
{
{ /* Inline kernel#Int#!= (var65,1l) on <var65:Int> */
var68 = var65 == 1l;
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "Type Error: `for` expects only one variable when using `Iterator`.";
var73 = standard___standard__NativeString___to_s_with_length(var72, 66l);
var71 = var73;
varonce70 = var71;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var71); /* error on <var_v:TypeVisitor>*/
}
} else {
if (var_variables == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1137);
fatal_exit(1);
} else {
var74 = ((val*(*)(val* self))(var_variables->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_variables); /* first on <var_variables:nullable Array[Variable]>*/
}
{
var75 = ((val*(*)(val* self))(var_coltype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_coltype); /* arguments on <var_coltype:MClassType>*/
}
{
var76 = ((val*(*)(val* self))(var75->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var75); /* first on <var75:Array[MType]>*/
}
{
((void(*)(val* self, val* p0))(var74->class->vft[COLOR_nit__typing__Variable__declared_type_61d]))(var74, var76); /* declared_type= on <var74:nullable Object(Variable)>*/
}
}
var_is_col = 1;
} else {
}
if (var_mapit_cla == NULL) {
var78 = 0; /* is null */
} else {
var78 = 1; /* arg is null and recv is not */
}
if (0) {
var79 = ((short int(*)(val* self, val* p0))(var_mapit_cla->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mapit_cla, ((val*)NULL)); /* != on <var_mapit_cla:nullable MClass>*/
var78 = var79;
}
var_80 = var78;
if (var78){
var81 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var81->class->vft[COLOR_standard__array__Array__with_capacity]))(var81, 2l); /* with_capacity on <var81:Array[MType]>*/
}
var_82 = var81;
{
var83 = ((val*(*)(val* self))(var_objcla->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_objcla); /* mclass_type on <var_objcla:nullable MClass(MClass)>*/
}
{
var84 = ((val*(*)(val* self))(var83->class->vft[COLOR_nit__model__MType__as_nullable]))(var83); /* as_nullable on <var83:MClassType>*/
}
{
((void(*)(val* self, val* p0))(var_82->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_82, var84); /* push on <var_82:Array[MType]>*/
}
{
var85 = ((val*(*)(val* self))(var_objcla->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_objcla); /* mclass_type on <var_objcla:nullable MClass(MClass)>*/
}
{
var86 = ((val*(*)(val* self))(var85->class->vft[COLOR_nit__model__MType__as_nullable]))(var85); /* as_nullable on <var85:MClassType>*/
}
{
((void(*)(val* self, val* p0))(var_82->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_82, var86); /* push on <var_82:Array[MType]>*/
}
{
var87 = ((val*(*)(val* self, val* p0))(var_mapit_cla->class->vft[COLOR_nit__model__MClass__get_mtype]))(var_mapit_cla, var_82); /* get_mtype on <var_mapit_cla:nullable MClass(MClass)>*/
}
{
var88 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(var_v, var_ittype, var87); /* is_subtype on <var_v:TypeVisitor>*/
}
var77 = var88;
} else {
var77 = var_80;
}
if (var77){
{
var89 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(var_v); /* mmodule on <var_v:TypeVisitor>*/
}
{
var90 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor]))(var_v); /* anchor on <var_v:TypeVisitor>*/
}
{
var91 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_ittype->class->vft[COLOR_nit__model__MType__supertype_to]))(var_ittype, var89, var90, var_mapit_cla); /* supertype_to on <var_ittype:nullable MType(MType)>*/
}
var_coltype92 = var91;
{
var93 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
var_variables94 = var93;
if (var_variables94 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1146);
fatal_exit(1);
} else {
var95 = ((long(*)(val* self))(var_variables94->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_variables94); /* length on <var_variables94:nullable Array[Variable]>*/
}
{
{ /* Inline kernel#Int#!= (var95,2l) on <var95:Int> */
var98 = var95 == 2l;
var99 = !var98;
var96 = var99;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
if (var96){
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Type Error: `for` expects two variables when using `MapIterator`.";
var103 = standard___standard__NativeString___to_s_with_length(var102, 65l);
var101 = var103;
varonce100 = var101;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var101); /* error on <var_v:TypeVisitor>*/
}
} else {
if (var_variables94 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1149);
fatal_exit(1);
} else {
var104 = ((val*(*)(val* self, long p0))(var_variables94->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_variables94, 0l); /* [] on <var_variables94:nullable Array[Variable]>*/
}
{
var105 = ((val*(*)(val* self))(var_coltype92->class->vft[COLOR_nit__model__MClassType__arguments]))(var_coltype92); /* arguments on <var_coltype92:MClassType>*/
}
{
var106 = ((val*(*)(val* self, long p0))(var105->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var105, 0l); /* [] on <var105:Array[MType]>*/
}
{
((void(*)(val* self, val* p0))(var104->class->vft[COLOR_nit__typing__Variable__declared_type_61d]))(var104, var106); /* declared_type= on <var104:nullable Object(Variable)>*/
}
if (var_variables94 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1150);
fatal_exit(1);
} else {
var107 = ((val*(*)(val* self, long p0))(var_variables94->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_variables94, 1l); /* [] on <var_variables94:nullable Array[Variable]>*/
}
{
var108 = ((val*(*)(val* self))(var_coltype92->class->vft[COLOR_nit__model__MClassType__arguments]))(var_coltype92); /* arguments on <var_coltype92:MClassType>*/
}
{
var109 = ((val*(*)(val* self, long p0))(var108->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var108, 1l); /* [] on <var108:Array[MType]>*/
}
{
((void(*)(val* self, val* p0))(var107->class->vft[COLOR_nit__typing__Variable__declared_type_61d]))(var107, var109); /* declared_type= on <var107:nullable Object(Variable)>*/
}
}
var_is_map = 1;
} else {
}
var111 = !var_is_col;
var_112 = var111;
if (var111){
var113 = !var_is_map;
var110 = var113;
} else {
var110 = var_112;
}
if (var110){
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "Type Error: `for` expects the method `iterator` to return an `Iterator` or `MapIterator` type.";
var117 = standard___standard__NativeString___to_s_with_length(var116, 94l);
var115 = var117;
varonce114 = var115;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var115); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var118 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var118){
{
var119 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(var_v, var_mtype); /* anchor_to on <var_v:TypeVisitor>*/
}
var_mtype = var119;
} else {
}
{
var120 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var120;
/* <var_mtype:MType> isa MClassType */
cltype122 = type_nit__MClassType.color;
idtype123 = type_nit__MClassType.id;
if(cltype122 >= var_mtype->type->table_size) {
var121 = 0;
} else {
var121 = var_mtype->type->type_table[cltype122] == idtype123;
}
if (unlikely(!var121)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1164);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__coltype_61d]))(self, var_mtype); /* coltype= on <self:AForExpr>*/
}
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "is_ok";
var127 = standard___standard__NativeString___to_s_with_length(var126, 5l);
var125 = var127;
varonce124 = var125;
}
{
var128 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_ittype, var125, 0); /* get_method on <var_v:TypeVisitor>*/
}
var_ikdef = var128;
if (var_ikdef == NULL) {
var129 = 1; /* is null */
} else {
var129 = 0; /* arg is null but recv is not */
}
if (0) {
var130 = ((short int(*)(val* self, val* p0))(var_ikdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ikdef, ((val*)NULL)); /* == on <var_ikdef:nullable CallSite>*/
var129 = var130;
}
if (var129){
if (unlikely(varonce131==NULL)) {
var132 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "Type Error: `for` expects a method `is_ok` in type `";
var136 = standard___standard__NativeString___to_s_with_length(var135, 52l);
var134 = var136;
varonce133 = var134;
}
((struct instance_standard__NativeArray*)var132)->values[0]=var134;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "`.";
var140 = standard___standard__NativeString___to_s_with_length(var139, 2l);
var138 = var140;
varonce137 = var138;
}
((struct instance_standard__NativeArray*)var132)->values[2]=var138;
} else {
var132 = varonce131;
varonce131 = NULL;
}
{
var141 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_standard__string__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var132)->values[1]=var141;
{
var142 = ((val*(*)(val* self))(var132->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var132); /* native_to_s on <var132:NativeArray[String]>*/
}
varonce131 = var132;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var142); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__method_is_ok_61d]))(self, var_ikdef); /* method_is_ok= on <self:AForExpr>*/
}
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "item";
var146 = standard___standard__NativeString___to_s_with_length(var145, 4l);
var144 = var146;
varonce143 = var144;
}
{
var147 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_ittype, var144, 0); /* get_method on <var_v:TypeVisitor>*/
}
var_itemdef = var147;
if (var_itemdef == NULL) {
var148 = 1; /* is null */
} else {
var148 = 0; /* arg is null but recv is not */
}
if (0) {
var149 = ((short int(*)(val* self, val* p0))(var_itemdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_itemdef, ((val*)NULL)); /* == on <var_itemdef:nullable CallSite>*/
var148 = var149;
}
if (var148){
if (unlikely(varonce150==NULL)) {
var151 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "Type Error: `for` expects a method `item` in type `";
var155 = standard___standard__NativeString___to_s_with_length(var154, 51l);
var153 = var155;
varonce152 = var153;
}
((struct instance_standard__NativeArray*)var151)->values[0]=var153;
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "`.";
var159 = standard___standard__NativeString___to_s_with_length(var158, 2l);
var157 = var159;
varonce156 = var157;
}
((struct instance_standard__NativeArray*)var151)->values[2]=var157;
} else {
var151 = varonce150;
varonce150 = NULL;
}
{
var160 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_standard__string__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var151)->values[1]=var160;
{
var161 = ((val*(*)(val* self))(var151->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var151); /* native_to_s on <var151:NativeArray[String]>*/
}
varonce150 = var151;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var161); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__method_item_61d]))(self, var_itemdef); /* method_item= on <self:AForExpr>*/
}
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "next";
var165 = standard___standard__NativeString___to_s_with_length(var164, 4l);
var163 = var165;
varonce162 = var163;
}
{
var166 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_ittype, var163, 0); /* get_method on <var_v:TypeVisitor>*/
}
var_nextdef = var166;
if (var_nextdef == NULL) {
var167 = 1; /* is null */
} else {
var167 = 0; /* arg is null but recv is not */
}
if (0) {
var168 = ((short int(*)(val* self, val* p0))(var_nextdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nextdef, ((val*)NULL)); /* == on <var_nextdef:nullable CallSite>*/
var167 = var168;
}
if (var167){
if (unlikely(varonce169==NULL)) {
var170 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "Type Error: `for` expects a method `next` in type ";
var174 = standard___standard__NativeString___to_s_with_length(var173, 50l);
var172 = var174;
varonce171 = var172;
}
((struct instance_standard__NativeArray*)var170)->values[0]=var172;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = ".";
var178 = standard___standard__NativeString___to_s_with_length(var177, 1l);
var176 = var178;
varonce175 = var176;
}
((struct instance_standard__NativeArray*)var170)->values[2]=var176;
} else {
var170 = varonce169;
varonce169 = NULL;
}
{
var179 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_standard__string__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var170)->values[1]=var179;
{
var180 = ((val*(*)(val* self))(var170->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var170); /* native_to_s on <var170:NativeArray[String]>*/
}
varonce169 = var170;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var180); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__method_next_61d]))(self, var_nextdef); /* method_next= on <self:AForExpr>*/
}
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "finish";
var184 = standard___standard__NativeString___to_s_with_length(var183, 6l);
var182 = var184;
varonce181 = var182;
}
{
var185 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__try_get_method]))(var_v, self, var_ittype, var182, 0); /* try_get_method on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__method_finish_61d]))(self, var185); /* method_finish= on <self:AForExpr>*/
}
if (var_is_map){
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "key";
var189 = standard___standard__NativeString___to_s_with_length(var188, 3l);
var187 = var189;
varonce186 = var187;
}
{
var190 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_ittype, var187, 0); /* get_method on <var_v:TypeVisitor>*/
}
var_keydef = var190;
if (var_keydef == NULL) {
var191 = 1; /* is null */
} else {
var191 = 0; /* arg is null but recv is not */
}
if (0) {
var192 = ((short int(*)(val* self, val* p0))(var_keydef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_keydef, ((val*)NULL)); /* == on <var_keydef:nullable CallSite>*/
var191 = var192;
}
if (var191){
if (unlikely(varonce193==NULL)) {
var194 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "Type Error: `for` expects a method `key` in type `";
var198 = standard___standard__NativeString___to_s_with_length(var197, 50l);
var196 = var198;
varonce195 = var196;
}
((struct instance_standard__NativeArray*)var194)->values[0]=var196;
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "`.";
var202 = standard___standard__NativeString___to_s_with_length(var201, 2l);
var200 = var202;
varonce199 = var200;
}
((struct instance_standard__NativeArray*)var194)->values[2]=var200;
} else {
var194 = varonce193;
varonce193 = NULL;
}
{
var203 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_standard__string__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var194)->values[1]=var203;
{
var204 = ((val*(*)(val* self))(var194->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var194); /* native_to_s on <var194:NativeArray[String]>*/
}
varonce193 = var194;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var204); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__method_key_61d]))(self, var_keydef); /* method_key= on <self:AForExpr>*/
}
} else {
}
{
var206 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var206 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1199);
fatal_exit(1);
} else {
var207 = ((long(*)(val* self))(var206->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var206); /* length on <var206:nullable Array[Variable]>*/
}
{
{ /* Inline kernel#Int#== (var207,1l) on <var207:Int> */
var210 = var207 == 1l;
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
}
var_211 = var208;
if (var208){
{
var212 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_expr]))(self); /* n_expr on <self:AForExpr>*/
}
/* <var212:AExpr> isa ARangeExpr */
cltype214 = type_nit__ARangeExpr.color;
idtype215 = type_nit__ARangeExpr.id;
if(cltype214 >= var212->type->table_size) {
var213 = 0;
} else {
var213 = var212->type->type_table[cltype214] == idtype215;
}
var205 = var213;
} else {
var205 = var_211;
}
if (var205){
{
var216 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var216 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1200);
fatal_exit(1);
} else {
var217 = ((val*(*)(val* self))(var216->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var216); /* first on <var216:nullable Array[Variable]>*/
}
var_variable = var217;
{
var218 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_nit__typing__Variable__declared_type]))(var_variable); /* declared_type on <var_variable:Variable>*/
}
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1201);
fatal_exit(1);
}
var_vtype = var218;
{
var219 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_expr]))(self); /* n_expr on <self:AForExpr>*/
}
/* <var219:AExpr> isa AOrangeExpr */
cltype221 = type_nit__AOrangeExpr.color;
idtype222 = type_nit__AOrangeExpr.id;
if(cltype221 >= var219->type->table_size) {
var220 = 0;
} else {
var220 = var219->type->type_table[cltype221] == idtype222;
}
if (var220){
if (likely(varonce223!=NULL)) {
var224 = varonce223;
} else {
var225 = "<";
var226 = standard___standard__NativeString___to_s_with_length(var225, 1l);
var224 = var226;
varonce223 = var224;
}
{
var227 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_vtype, var224, 0); /* get_method on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__method_lt_61d]))(self, var227); /* method_lt= on <self:AForExpr>*/
}
} else {
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = "<=";
var231 = standard___standard__NativeString___to_s_with_length(var230, 2l);
var229 = var231;
varonce228 = var229;
}
{
var232 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_vtype, var229, 0); /* get_method on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__method_lt_61d]))(self, var232); /* method_lt= on <self:AForExpr>*/
}
}
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "successor";
var236 = standard___standard__NativeString___to_s_with_length(var235, 9l);
var234 = var236;
varonce233 = var234;
}
{
var237 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_vtype, var234, 0); /* get_method on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AForExpr__method_successor_61d]))(self, var237); /* method_successor= on <self:AForExpr>*/
}
} else {
}
RET_LABEL:;
}
/* method typing#AForExpr#accept_typing for (self: AForExpr, TypeVisitor) */
void nit__typing___AForExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var6 /* : nullable MType */;
var_v = p0;
{
((void(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__has_loop_61d]))(var_v, 1); /* has_loop= on <var_v:TypeVisitor>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_expr]))(self); /* n_expr on <self:AForExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:TypeVisitor>*/
}
var_mtype = var1;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__typing__AForExpr__do_type_iterator]))(self, var_v, var_mtype); /* do_type_iterator on <self:AForExpr>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_block]))(self); /* n_block on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var4); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_block]))(self); /* n_block on <self:AForExpr>*/
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1223);
fatal_exit(1);
} else {
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__typing__AExpr__mtype]))(var5); /* mtype on <var5:nullable AExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var6); /* mtype= on <self:AForExpr>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AForExpr>*/
}
RET_LABEL:;
}
/* method typing#AWithExpr#method_start for (self: AWithExpr): nullable CallSite */
val* nit__typing___AWithExpr___method_start(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AWithExpr___method_start].val; /* _method_start on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AWithExpr#method_start= for (self: AWithExpr, nullable CallSite) */
void nit__typing___AWithExpr___method_start_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AWithExpr___method_start].val = p0; /* _method_start on <self:AWithExpr> */
RET_LABEL:;
}
/* method typing#AWithExpr#method_finish for (self: AWithExpr): nullable CallSite */
val* nit__typing___AWithExpr___method_finish(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AWithExpr___method_finish].val; /* _method_finish on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AWithExpr#method_finish= for (self: AWithExpr, nullable CallSite) */
void nit__typing___AWithExpr___method_finish_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AWithExpr___method_finish].val = p0; /* _method_finish on <self:AWithExpr> */
RET_LABEL:;
}
/* method typing#AWithExpr#accept_typing for (self: AWithExpr, TypeVisitor) */
void nit__typing___AWithExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : AExpr */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : nullable CallSite */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : AExpr */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : nullable CallSite */;
val* var19 /* : nullable AExpr */;
val* var20 /* : nullable AExpr */;
val* var21 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_expr]))(self); /* n_expr on <self:AWithExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:TypeVisitor>*/
}
var_mtype = var1;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "start";
var6 = standard___standard__NativeString___to_s_with_length(var5, 5l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_expr]))(self); /* n_expr on <self:AWithExpr>*/
}
/* <var7:AExpr> isa ASelfExpr */
cltype = type_nit__ASelfExpr.color;
idtype = type_nit__ASelfExpr.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_mtype, var4, var8); /* get_method on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AWithExpr__method_start_61d]))(self, var9); /* method_start= on <self:AWithExpr>*/
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "finish";
var13 = standard___standard__NativeString___to_s_with_length(var12, 6l);
var11 = var13;
varonce10 = var11;
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_expr]))(self); /* n_expr on <self:AWithExpr>*/
}
/* <var14:AExpr> isa ASelfExpr */
cltype16 = type_nit__ASelfExpr.color;
idtype17 = type_nit__ASelfExpr.id;
if(cltype16 >= var14->type->table_size) {
var15 = 0;
} else {
var15 = var14->type->type_table[cltype16] == idtype17;
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_mtype, var11, var15); /* get_method on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AWithExpr__method_finish_61d]))(self, var18); /* method_finish= on <self:AWithExpr>*/
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_block]))(self); /* n_block on <self:AWithExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var19); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_block]))(self); /* n_block on <self:AWithExpr>*/
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1241);
fatal_exit(1);
} else {
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__typing__AExpr__mtype]))(var20); /* mtype on <var20:nullable AExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var21); /* mtype= on <self:AWithExpr>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AWithExpr>*/
}
RET_LABEL:;
}
/* method typing#AAssertExpr#accept_typing for (self: AAssertExpr, TypeVisitor) */
void nit__typing___AAssertExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_expr]))(self); /* n_expr on <self:AAssertExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_else]))(self); /* n_else on <self:AAssertExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_stmt]))(var_v, var2); /* visit_stmt on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AAssertExpr>*/
}
RET_LABEL:;
}
/* method typing#AOrExpr#accept_typing for (self: AOrExpr, TypeVisitor) */
void nit__typing___AOrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AOrExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AOrExpr>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var2); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__type_bool]))(var_v, self); /* type_bool on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var4); /* mtype= on <self:AOrExpr>*/
}
RET_LABEL:;
}
/* method typing#AImpliesExpr#accept_typing for (self: AImpliesExpr, TypeVisitor) */
void nit__typing___AImpliesExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AImpliesExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AImpliesExpr>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var2); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__type_bool]))(var_v, self); /* type_bool on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var4); /* mtype= on <self:AImpliesExpr>*/
}
RET_LABEL:;
}
/* method typing#AAndExpr#accept_typing for (self: AAndExpr, TypeVisitor) */
void nit__typing___AAndExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AAndExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AAndExpr>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var2); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__type_bool]))(var_v, self); /* type_bool on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var4); /* mtype= on <self:AAndExpr>*/
}
RET_LABEL:;
}
/* method typing#ANotExpr#accept_typing for (self: ANotExpr, TypeVisitor) */
void nit__typing___ANotExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANotExpr__n_expr]))(self); /* n_expr on <self:ANotExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_bool]))(var_v, var); /* visit_expr_bool on <var_v:TypeVisitor>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__type_bool]))(var_v, self); /* type_bool on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var2); /* mtype= on <self:ANotExpr>*/
}
RET_LABEL:;
}
/* method typing#AOrElseExpr#accept_typing for (self: AOrElseExpr, TypeVisitor) */
void nit__typing___AOrElseExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : AExpr */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : AExpr */;
short int var15 /* : Bool */;
val* var16 /* : MType */;
val* var17 /* : Array[MType] */;
val* var_18 /* var : Array[MType] */;
val* var19 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : nullable MClass */;
val* var_c /* var c: nullable MClass */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MClassType */;
short int var30 /* : Bool */;
val* var31 /* : MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AOrElseExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:TypeVisitor>*/
}
var_t1 = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AOrElseExpr>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var2); /* visit_expr on <var_v:TypeVisitor>*/
}
var_t2 = var3;
if (var_t1 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_t1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t1, ((val*)NULL)); /* == on <var_t1:nullable MType>*/
var5 = var6;
}
var_ = var5;
if (var5){
var4 = var_;
} else {
if (var_t2 == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_t2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t2, ((val*)NULL)); /* == on <var_t2:nullable MType>*/
var7 = var8;
}
var4 = var7;
}
if (var4){
goto RET_LABEL;
} else {
}
/* <var_t1:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_t1->type->table_size) {
var9 = 0;
} else {
var9 = var_t1->type->type_table[cltype] == idtype;
}
if (var9){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AOrElseExpr>*/
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Type Error: `or else` on `null`.";
var13 = standard___standard__NativeString___to_s_with_length(var12, 32l);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, var10, var11); /* error on <var_v:TypeVisitor>*/
}
} else {
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AOrElseExpr>*/
}
{
var15 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__check_can_be_null]))(var_v, var14, var_t1); /* check_can_be_null on <var_v:TypeVisitor>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nit__model__MType__as_notnull]))(var_t1); /* as_notnull on <var_t1:nullable MType(MType)>*/
}
var_t1 = var16;
} else {
}
}
var17 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var17->class->vft[COLOR_standard__array__Array__with_capacity]))(var17, 2l); /* with_capacity on <var17:Array[MType]>*/
}
var_18 = var17;
{
((void(*)(val* self, val* p0))(var_18->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_18, var_t1); /* push on <var_18:Array[MType]>*/
}
{
((void(*)(val* self, val* p0))(var_18->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_18, var_t2); /* push on <var_18:Array[MType]>*/
}
{
var19 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__merge_types]))(var_v, self, var_18); /* merge_types on <var_v:TypeVisitor>*/
}
var_t = var19;
if (var_t == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, ((val*)NULL)); /* == on <var_t:nullable MType>*/
var20 = var21;
}
if (var20){
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "Object";
var25 = standard___standard__NativeString___to_s_with_length(var24, 6l);
var23 = var25;
varonce22 = var23;
}
{
var26 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var23); /* get_mclass on <var_v:TypeVisitor>*/
}
var_c = var26;
if (var_c == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
var28 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, ((val*)NULL)); /* == on <var_c:nullable MClass>*/
var27 = var28;
}
if (var27){
goto RET_LABEL;
} else {
}
{
var29 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_c); /* mclass_type on <var_c:nullable MClass(MClass)>*/
}
var_t = var29;
{
var30 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__can_be_null]))(var_v, var_t2); /* can_be_null on <var_v:TypeVisitor>*/
}
if (var30){
{
var31 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__as_nullable]))(var_t); /* as_nullable on <var_t:nullable MType(MClassType)>*/
}
var_t = var31;
} else {
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_t); /* mtype= on <self:AOrElseExpr>*/
}
RET_LABEL:;
}
/* method typing#ATrueExpr#accept_typing for (self: ATrueExpr, TypeVisitor) */
void nit__typing___ATrueExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__type_bool]))(var_v, self); /* type_bool on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var); /* mtype= on <self:ATrueExpr>*/
}
RET_LABEL:;
}
/* method typing#AFalseExpr#accept_typing for (self: AFalseExpr, TypeVisitor) */
void nit__typing___AFalseExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__type_bool]))(var_v, self); /* type_bool on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var); /* mtype= on <self:AFalseExpr>*/
}
RET_LABEL:;
}
/* method typing#AIntExpr#accept_typing for (self: AIntExpr, TypeVisitor) */
void nit__typing___AIntExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClassType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Int";
var2 = standard___standard__NativeString___to_s_with_length(var1, 3l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var); /* get_mclass on <var_v:TypeVisitor>*/
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_mclass); /* mclass_type on <var_mclass:nullable MClass(MClass)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var6); /* mtype= on <self:AIntExpr>*/
}
RET_LABEL:;
}
/* method typing#AFloatExpr#accept_typing for (self: AFloatExpr, TypeVisitor) */
void nit__typing___AFloatExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClassType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Float";
var2 = standard___standard__NativeString___to_s_with_length(var1, 5l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var); /* get_mclass on <var_v:TypeVisitor>*/
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_mclass); /* mclass_type on <var_mclass:nullable MClass(MClass)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var6); /* mtype= on <self:AFloatExpr>*/
}
RET_LABEL:;
}
/* method typing#ACharExpr#accept_typing for (self: ACharExpr, TypeVisitor) */
void nit__typing___ACharExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClassType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Char";
var2 = standard___standard__NativeString___to_s_with_length(var1, 4l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var); /* get_mclass on <var_v:TypeVisitor>*/
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_mclass); /* mclass_type on <var_mclass:nullable MClass(MClass)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var6); /* mtype= on <self:ACharExpr>*/
}
RET_LABEL:;
}
/* method typing#AStringFormExpr#accept_typing for (self: AStringFormExpr, TypeVisitor) */
void nit__typing___AStringFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClassType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "String";
var2 = standard___standard__NativeString___to_s_with_length(var1, 6l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var); /* get_mclass on <var_v:TypeVisitor>*/
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_mclass); /* mclass_type on <var_mclass:nullable MClass(MClass)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var6); /* mtype= on <self:AStringFormExpr>*/
}
RET_LABEL:;
}
/* method typing#ASuperstringExpr#accept_typing for (self: ASuperstringExpr, TypeVisitor) */
void nit__typing___ASuperstringExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClassType */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : nullable MClass */;
val* var_objclass /* var objclass: nullable MClass */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MClassType */;
val* var_objtype /* var objtype: MClassType */;
val* var15 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[AExpr] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var20 /* : nullable MType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "String";
var2 = standard___standard__NativeString___to_s_with_length(var1, 6l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var); /* get_mclass on <var_v:TypeVisitor>*/
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_mclass); /* mclass_type on <var_mclass:nullable MClass(MClass)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var6); /* mtype= on <self:ASuperstringExpr>*/
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Object";
var10 = standard___standard__NativeString___to_s_with_length(var9, 6l);
var8 = var10;
varonce7 = var8;
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var8); /* get_mclass on <var_v:TypeVisitor>*/
}
var_objclass = var11;
if (var_objclass == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_objclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_objclass, ((val*)NULL)); /* == on <var_objclass:nullable MClass>*/
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(var_objclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_objclass); /* mclass_type on <var_objclass:nullable MClass(MClass)>*/
}
var_objtype = var14;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperstringExpr__n_exprs]))(self); /* n_exprs on <self:ASuperstringExpr>*/
}
var_ = var15;
{
var16 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AExpr]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[AExpr]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[AExpr]>*/
}
var_nexpr = var19;
{
var20 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(var_v, var_nexpr, var_objtype); /* visit_expr_subtype on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method typing#AArrayExpr#with_capacity_callsite for (self: AArrayExpr): nullable CallSite */
val* nit__typing___AArrayExpr___with_capacity_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#with_capacity_callsite= for (self: AArrayExpr, nullable CallSite) */
void nit__typing___AArrayExpr___with_capacity_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AArrayExpr___with_capacity_callsite].val = p0; /* _with_capacity_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#push_callsite for (self: AArrayExpr): nullable CallSite */
val* nit__typing___AArrayExpr___push_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#push_callsite= for (self: AArrayExpr, nullable CallSite) */
void nit__typing___AArrayExpr___push_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val = p0; /* _push_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#element_mtype for (self: AArrayExpr): nullable MType */
val* nit__typing___AArrayExpr___element_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#element_mtype= for (self: AArrayExpr, nullable MType) */
void nit__typing___AArrayExpr___element_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AArrayExpr___element_mtype].val = p0; /* _element_mtype on <self:AArrayExpr> */
RET_LABEL:;
}
