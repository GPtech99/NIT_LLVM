#include "nit__typing.sep.0.h"
/* method typing#AArrayExpr#set_comprehension for (self: AArrayExpr, nullable AExpr) */
void nit__typing___AArrayExpr___set_comprehension(val* self, val* p0) {
val* var_n /* var n: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : nullable AExpr */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : nullable AExpr */;
val* var8 /* : nullable AExpr */;
var_n = p0;
if (var_n == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, ((val*)NULL)); /* == on <var_n:nullable AExpr>*/
var = var1;
}
if (var){
goto RET_LABEL;
} else {
/* <var_n:nullable AExpr(AExpr)> isa AForExpr */
cltype = type_nit__AForExpr.color;
idtype = type_nit__AForExpr.id;
if(cltype >= var_n->type->table_size) {
var2 = 0;
} else {
var2 = var_n->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__AForExpr__n_block]))(var_n); /* n_block on <var_n:nullable AExpr(AForExpr)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AArrayExpr__set_comprehension]))(self, var3); /* set_comprehension on <self:AArrayExpr>*/
}
} else {
/* <var_n:nullable AExpr(AExpr)> isa AIfExpr */
cltype5 = type_nit__AIfExpr.color;
idtype6 = type_nit__AIfExpr.id;
if(cltype5 >= var_n->type->table_size) {
var4 = 0;
} else {
var4 = var_n->type->type_table[cltype5] == idtype6;
}
if (var4){
{
var7 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then]))(var_n); /* n_then on <var_n:nullable AExpr(AIfExpr)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AArrayExpr__set_comprehension]))(self, var7); /* set_comprehension on <self:AArrayExpr>*/
}
{
var8 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_else]))(var_n); /* n_else on <var_n:nullable AExpr(AIfExpr)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AArrayExpr__set_comprehension]))(self, var8); /* set_comprehension on <self:AArrayExpr>*/
}
} else {
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__typing__AExpr__comprehension_61d]))(var_n, self); /* comprehension= on <var_n:nullable AExpr(AExpr)>*/
}
}
}
}
RET_LABEL:;
}
/* method typing#AArrayExpr#accept_typing for (self: AArrayExpr, TypeVisitor) */
void nit__typing___AArrayExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[nullable MType] */;
val* var_mtypes /* var mtypes: Array[nullable MType] */;
short int var_useless /* var useless: Bool */;
val* var7 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[AExpr] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var12 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable MType */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : nullable MType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable MType */;
val* var27 /* : nullable MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
short int var32 /* : Bool */;
int cltype;
int idtype;
val* var33 /* : NativeArray[String] */;
static val* varonce;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : String */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : ModelBuilder */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
val* var67 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : Array[MType] */;
val* var_71 /* var : Array[MType] */;
val* var72 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
val* var77 /* : nullable CallSite */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
val* var82 /* : nullable CallSite */;
var_v = p0;
var_mtype = ((val*)NULL);
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_type]))(self); /* n_type on <self:AArrayExpr>*/
}
var_ntype = var;
if (var_ntype == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype, ((val*)NULL)); /* != on <var_ntype:nullable AType>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__resolve_mtype]))(var_v, var_ntype); /* resolve_mtype on <var_v:TypeVisitor>*/
}
var_mtype = var3;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
} else {
}
var6 = NEW_standard__Array(&type_standard__Array__nullable__nit__MType);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[nullable MType]>*/
}
var_mtypes = var6;
var_useless = 0;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_exprs]))(self); /* n_exprs on <self:AArrayExpr>*/
}
var_ = var7;
{
var8 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AExpr]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[AExpr]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[AExpr]>*/
}
var_e = var11;
{
var12 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var_e); /* visit_expr on <var_v:TypeVisitor>*/
}
var_t = var12;
if (var_t == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, ((val*)NULL)); /* == on <var_t:nullable MType>*/
var13 = var14;
}
if (var13){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AArrayExpr__set_comprehension]))(self, var_e); /* set_comprehension on <self:AArrayExpr>*/
}
if (var_mtype == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mtype, ((val*)NULL)); /* != on <var_mtype:nullable MType>*/
var15 = var16;
}
if (var15){
{
var17 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__check_subtype]))(var_v, var_e, var_t, var_mtype, 0); /* check_subtype on <var_v:TypeVisitor>*/
}
if (var17 == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var17, ((val*)NULL)); /* == on <var17:nullable MType>*/
var18 = var19;
}
if (var18){
goto RET_LABEL;
} else {
}
{
var20 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, var_mtype); /* == on <var_t:nullable MType(MType)>*/
}
if (var20){
var_useless = 1;
} else {
}
} else {
{
((void(*)(val* self, val* p0))(var_mtypes->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mtypes, var_t); /* add on <var_mtypes:Array[nullable MType]>*/
}
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[AExpr]>*/
}
if (var_mtype == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var21 = var22;
}
if (var21){
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AArrayExpr__element_mtype]))(self); /* element_mtype on <self:AArrayExpr>*/
}
if (var23 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var23, ((val*)NULL)); /* != on <var23:nullable MType>*/
var24 = var25;
}
if (var24){
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AArrayExpr__element_mtype]))(self); /* element_mtype on <self:AArrayExpr>*/
}
{
((void(*)(val* self, val* p0))(var_mtypes->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mtypes, var26); /* add on <var_mtypes:Array[nullable MType]>*/
}
} else {
}
{
var27 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__merge_types]))(var_v, self, var_mtypes); /* merge_types on <var_v:TypeVisitor>*/
}
var_mtype = var27;
} else {
}
if (var_mtype == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
var30 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var29 = var30;
}
var_31 = var29;
if (var29){
var28 = var_31;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var32 = 0;
} else {
var32 = var_mtype->type->type_table[cltype] == idtype;
}
var28 = var32;
}
if (var28){
if (unlikely(varonce==NULL)) {
var33 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Type Error: ambiguous array type ";
var37 = standard___standard__NativeString___to_s_with_length(var36, 33l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var35;
} else {
var33 = varonce;
varonce = NULL;
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " ";
var41 = standard___standard__NativeString___to_s_with_length(var40, 1l);
var39 = var41;
varonce38 = var39;
}
{
var42 = ((val*(*)(val* self, val* p0))(var_mtypes->class->vft[COLOR_standard__string__Collection__join]))(var_mtypes, var39); /* join on <var_mtypes:Array[nullable MType]>*/
}
((struct instance_standard__NativeArray*)var33)->values[1]=var42;
{
var43 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce = var33;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var43); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (var_useless){
if (var_ntype == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
var45 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype, ((val*)NULL)); /* != on <var_ntype:nullable AType>*/
var44 = var45;
}
if (unlikely(!var44)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1446);
fatal_exit(1);
}
{
var46 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(var_v); /* modelbuilder on <var_v:TypeVisitor>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "useless-type";
var50 = standard___standard__NativeString___to_s_with_length(var49, 12l);
var48 = var50;
varonce47 = var48;
}
if (unlikely(varonce51==NULL)) {
var52 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "Warning: useless type declaration `";
var56 = standard___standard__NativeString___to_s_with_length(var55, 35l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var52)->values[0]=var54;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "` in literal Array since it can be inferred from the elements type.";
var60 = standard___standard__NativeString___to_s_with_length(var59, 67l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var52)->values[2]=var58;
} else {
var52 = varonce51;
varonce51 = NULL;
}
{
var61 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var52)->values[1]=var61;
{
var62 = ((val*(*)(val* self))(var52->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var46->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var46, var_ntype, var48, var62); /* warning on <var46:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AArrayExpr__element_mtype_61d]))(self, var_mtype); /* element_mtype= on <self:AArrayExpr>*/
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "Array";
var66 = standard___standard__NativeString___to_s_with_length(var65, 5l);
var64 = var66;
varonce63 = var64;
}
{
var67 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var64); /* get_mclass on <var_v:TypeVisitor>*/
}
var_mclass = var67;
if (var_mclass == NULL) {
var68 = 1; /* is null */
} else {
var68 = 0; /* arg is null but recv is not */
}
if (0) {
var69 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var68 = var69;
}
if (var68){
goto RET_LABEL;
} else {
}
var70 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var70->class->vft[COLOR_standard__array__Array__with_capacity]))(var70, 1l); /* with_capacity on <var70:Array[MType]>*/
}
var_71 = var70;
{
((void(*)(val* self, val* p0))(var_71->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_71, var_mtype); /* push on <var_71:Array[MType]>*/
}
{
var72 = ((val*(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_nit__model__MClass__get_mtype]))(var_mclass, var_71); /* get_mtype on <var_mclass:nullable MClass(MClass)>*/
}
var_array_mtype = var72;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "with_capacity";
var76 = standard___standard__NativeString___to_s_with_length(var75, 13l);
var74 = var76;
varonce73 = var74;
}
{
var77 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_array_mtype, var74, 0); /* get_method on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AArrayExpr__with_capacity_callsite_61d]))(self, var77); /* with_capacity_callsite= on <self:AArrayExpr>*/
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "push";
var81 = standard___standard__NativeString___to_s_with_length(var80, 4l);
var79 = var81;
varonce78 = var79;
}
{
var82 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_array_mtype, var79, 0); /* get_method on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AArrayExpr__push_callsite_61d]))(self, var82); /* push_callsite= on <self:AArrayExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_array_mtype); /* mtype= on <self:AArrayExpr>*/
}
RET_LABEL:;
}
/* method typing#ARangeExpr#init_callsite for (self: ARangeExpr): nullable CallSite */
val* nit__typing___ARangeExpr___init_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ARangeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ARangeExpr#init_callsite= for (self: ARangeExpr, nullable CallSite) */
void nit__typing___ARangeExpr___init_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val = p0; /* _init_callsite on <self:ARangeExpr> */
RET_LABEL:;
}
/* method typing#ARangeExpr#accept_typing for (self: ARangeExpr, TypeVisitor) */
void nit__typing___ARangeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : nullable MClass */;
val* var_discrete_class /* var discrete_class: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClassDef */;
val* var7 /* : MClassType */;
val* var_discrete_type /* var discrete_type: MClassType */;
val* var8 /* : AExpr */;
val* var9 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : Array[MType] */;
val* var_26 /* var : Array[MType] */;
val* var27 /* : MClassType */;
val* var_mtype /* var mtype: nullable Object */;
short int var28 /* : Bool */;
val* var29 /* : Array[MType] */;
val* var_30 /* var : Array[MType] */;
val* var31 /* : MClassType */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
short int var49 /* : Bool */;
int cltype;
int idtype;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
val* var54 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable Object */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : nullable CallSite */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Discrete";
var2 = standard___standard__NativeString___to_s_with_length(var1, 8l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var); /* get_mclass on <var_v:TypeVisitor>*/
}
var_discrete_class = var3;
if (var_discrete_class == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_discrete_class->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_discrete_class, ((val*)NULL)); /* == on <var_discrete_class:nullable MClass>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_discrete_class->class->vft[COLOR_nit__model__MClass__intro]))(var_discrete_class); /* intro on <var_discrete_class:nullable MClass(MClass)>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var6); /* bound_mtype on <var6:MClassDef>*/
}
var_discrete_type = var7;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr]))(self); /* n_expr on <self:ARangeExpr>*/
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(var_v, var8, var_discrete_type); /* visit_expr_subtype on <var_v:TypeVisitor>*/
}
var_t1 = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr2]))(self); /* n_expr2 on <self:ARangeExpr>*/
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(var_v, var10, var_discrete_type); /* visit_expr_subtype on <var_v:TypeVisitor>*/
}
var_t2 = var11;
if (var_t1 == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_t1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t1, ((val*)NULL)); /* == on <var_t1:nullable MType>*/
var13 = var14;
}
var_ = var13;
if (var13){
var12 = var_;
} else {
if (var_t2 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_t2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t2, ((val*)NULL)); /* == on <var_t2:nullable MType>*/
var15 = var16;
}
var12 = var15;
}
if (var12){
goto RET_LABEL;
} else {
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Range";
var20 = standard___standard__NativeString___to_s_with_length(var19, 5l);
var18 = var20;
varonce17 = var18;
}
{
var21 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_mclass]))(var_v, self, var18); /* get_mclass on <var_v:TypeVisitor>*/
}
var_mclass = var21;
if (var_mclass == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
var23 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var22 = var23;
}
if (var22){
goto RET_LABEL;
} else {
}
{
var24 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(var_v, var_t1, var_t2); /* is_subtype on <var_v:TypeVisitor>*/
}
if (var24){
var25 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var25->class->vft[COLOR_standard__array__Array__with_capacity]))(var25, 1l); /* with_capacity on <var25:Array[MType]>*/
}
var_26 = var25;
{
((void(*)(val* self, val* p0))(var_26->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_26, var_t2); /* push on <var_26:Array[MType]>*/
}
{
var27 = ((val*(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_nit__model__MClass__get_mtype]))(var_mclass, var_26); /* get_mtype on <var_mclass:nullable MClass(MClass)>*/
}
var_mtype = var27;
} else {
{
var28 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(var_v, var_t2, var_t1); /* is_subtype on <var_v:TypeVisitor>*/
}
if (var28){
var29 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_standard__array__Array__with_capacity]))(var29, 1l); /* with_capacity on <var29:Array[MType]>*/
}
var_30 = var29;
{
((void(*)(val* self, val* p0))(var_30->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_30, var_t1); /* push on <var_30:Array[MType]>*/
}
{
var31 = ((val*(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_nit__model__MClass__get_mtype]))(var_mclass, var_30); /* get_mtype on <var_mclass:nullable MClass(MClass)>*/
}
var_mtype = var31;
} else {
if (unlikely(varonce32==NULL)) {
var33 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Type Error: cannot create range: `";
var37 = standard___standard__NativeString___to_s_with_length(var36, 34l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "` vs `";
var41 = standard___standard__NativeString___to_s_with_length(var40, 6l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var33)->values[2]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "`.";
var45 = standard___standard__NativeString___to_s_with_length(var44, 2l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var33)->values[4]=var43;
} else {
var33 = varonce32;
varonce32 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_standard__string__Object__to_s]))(var_t1); /* to_s on <var_t1:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var33)->values[1]=var46;
{
var47 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_standard__string__Object__to_s]))(var_t2); /* to_s on <var_t2:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var33)->values[3]=var47;
{
var48 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var48); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_mtype); /* mtype= on <self:ARangeExpr>*/
}
/* <self:ARangeExpr> isa ACrangeExpr */
cltype = type_nit__ACrangeExpr.color;
idtype = type_nit__ACrangeExpr.id;
if(cltype >= self->type->table_size) {
var49 = 0;
} else {
var49 = self->type->type_table[cltype] == idtype;
}
if (var49){
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "init";
var53 = standard___standard__NativeString___to_s_with_length(var52, 4l);
var51 = var53;
varonce50 = var51;
}
{
var54 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_mtype, var51, 0); /* get_method on <var_v:TypeVisitor>*/
}
var_callsite = var54;
} else {
/* <self:ARangeExpr> isa AOrangeExpr */
cltype56 = type_nit__AOrangeExpr.color;
idtype57 = type_nit__AOrangeExpr.id;
if(cltype56 >= self->type->table_size) {
var55 = 0;
} else {
var55 = self->type->type_table[cltype56] == idtype57;
}
if (var55){
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "without_last";
var61 = standard___standard__NativeString___to_s_with_length(var60, 12l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, self, var_mtype, var59, 0); /* get_method on <var_v:TypeVisitor>*/
}
var_callsite = var62;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1495);
fatal_exit(1);
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ARangeExpr__init_callsite_61d]))(self, var_callsite); /* init_callsite= on <self:ARangeExpr>*/
}
RET_LABEL:;
}
/* method typing#ANullExpr#accept_typing for (self: ANullExpr, TypeVisitor) */
void nit__typing___ANullExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : MModule */;
val* var1 /* : Model */;
val* var2 /* : MNullType */;
var_v = p0;
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(var_v); /* mmodule on <var_v:TypeVisitor>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model_base__MEntity__model]))(var); /* model on <var:MModule>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__Model__null_type]))(var1); /* null_type on <var1:Model>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var2); /* mtype= on <self:ANullExpr>*/
}
RET_LABEL:;
}
/* method typing#AIsaExpr#cast_type for (self: AIsaExpr): nullable MType */
val* nit__typing___AIsaExpr___cast_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AIsaExpr#cast_type= for (self: AIsaExpr, nullable MType) */
void nit__typing___AIsaExpr___cast_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AIsaExpr___cast_type].val = p0; /* _cast_type on <self:AIsaExpr> */
RET_LABEL:;
}
/* method typing#AIsaExpr#accept_typing for (self: AIsaExpr, TypeVisitor) */
void nit__typing___AIsaExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : AExpr */;
val* var4 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable FlowContext */;
val* var8 /* : FlowContext */;
val* var9 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_expr]))(self); /* n_expr on <self:AIsaExpr>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_type]))(self); /* n_type on <self:AIsaExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_cast]))(var_v, self, var, var1); /* visit_expr_cast on <var_v:TypeVisitor>*/
}
var_mtype = var2;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AIsaExpr__cast_type_61d]))(self, var_mtype); /* cast_type= on <self:AIsaExpr>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_expr]))(self); /* n_expr on <self:AIsaExpr>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__typing__AExpr__its_variable]))(var3); /* its_variable on <var3:AExpr>*/
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
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__AExpr__after_flow_context]))(self); /* after_flow_context on <self:AIsaExpr>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1523);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__flow__FlowContext__when_true]))(var7); /* when_true on <var7:nullable FlowContext>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var8->class->vft[COLOR_nit__typing__FlowContext__set_var]))(var8, var_v, var_variable, var_mtype); /* set_var on <var8:FlowContext>*/
}
} else {
}
{
var9 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__type_bool]))(var_v, self); /* type_bool on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var9); /* mtype= on <self:AIsaExpr>*/
}
RET_LABEL:;
}
/* method typing#AAsCastExpr#accept_typing for (self: AAsCastExpr, TypeVisitor) */
void nit__typing___AAsCastExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_expr]))(self); /* n_expr on <self:AAsCastExpr>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAsCastExpr__n_type]))(self); /* n_type on <self:AAsCastExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_cast]))(var_v, self, var, var1); /* visit_expr_cast on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var2); /* mtype= on <self:AAsCastExpr>*/
}
RET_LABEL:;
}
/* method typing#AAsNotnullExpr#accept_typing for (self: AAsNotnullExpr, TypeVisitor) */
void nit__typing___AAsNotnullExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_expr]))(self); /* n_expr on <self:AAsNotnullExpr>*/
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
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var4 = 0;
} else {
var4 = var_mtype->type->type_table[cltype] == idtype;
}
if (var4){
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "Type Error: `as(not null)` on `null`.";
var7 = standard___standard__NativeString___to_s_with_length(var6, 37l);
var5 = var7;
varonce = var5;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var5); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_expr]))(self); /* n_expr on <self:AAsNotnullExpr>*/
}
{
var9 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__check_can_be_null]))(var_v, var8, var_mtype); /* check_can_be_null on <var_v:TypeVisitor>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnull]))(var_mtype); /* as_notnull on <var_mtype:nullable MType(MType)>*/
}
var_mtype = var10;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_mtype); /* mtype= on <self:AAsNotnullExpr>*/
}
RET_LABEL:;
}
/* method typing#AParExpr#accept_typing for (self: AParExpr, TypeVisitor) */
void nit__typing___AParExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AParExpr__n_expr]))(self); /* n_expr on <self:AParExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var1); /* mtype= on <self:AParExpr>*/
}
RET_LABEL:;
}
/* method typing#AOnceExpr#accept_typing for (self: AOnceExpr, TypeVisitor) */
void nit__typing___AOnceExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AOnceExpr__n_expr]))(self); /* n_expr on <self:AOnceExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var1); /* mtype= on <self:AOnceExpr>*/
}
RET_LABEL:;
}
/* method typing#ASelfExpr#its_variable for (self: ASelfExpr): nullable Variable */
val* nit__typing___ASelfExpr___AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__typing__ASelfExpr___its_variable].val; /* _its_variable on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASelfExpr#its_variable= for (self: ASelfExpr, nullable Variable) */
void nit__typing___ASelfExpr___its_variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASelfExpr___its_variable].val = p0; /* _its_variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method typing#ASelfExpr#accept_typing for (self: ASelfExpr, TypeVisitor) */
void nit__typing___ASelfExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var_ /* var : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : Variable */;
val* var_variable /* var variable: Variable */;
val* var8 /* : nullable MType */;
var_v = p0;
{
var1 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__is_toplevel_context]))(var_v); /* is_toplevel_context on <var_v:TypeVisitor>*/
}
var_ = var1;
if (var1){
/* <self:ASelfExpr> isa AImplicitSelfExpr */
cltype = type_nit__AImplicitSelfExpr.color;
idtype = type_nit__AImplicitSelfExpr.id;
if(cltype >= self->type->table_size) {
var2 = 0;
} else {
var2 = self->type->type_table[cltype] == idtype;
}
var3 = !var2;
var = var3;
} else {
var = var_;
}
if (var){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "Error: `self` cannot be used in top-level method.";
var6 = standard___standard__NativeString___to_s_with_length(var5, 49l);
var4 = var6;
varonce = var4;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var4); /* error on <var_v:TypeVisitor>*/
}
} else {
}
{
var7 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__selfvariable]))(var_v); /* selfvariable on <var_v:TypeVisitor>*/
}
var_variable = var7;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ASelfExpr__its_variable_61d]))(self, var_variable); /* its_variable= on <self:ASelfExpr>*/
}
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_variable]))(var_v, self, var_variable); /* get_variable on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var8); /* mtype= on <self:ASelfExpr>*/
}
RET_LABEL:;
}
/* method typing#AImplicitSelfExpr#is_sys for (self: AImplicitSelfExpr): Bool */
short int nit__typing___AImplicitSelfExpr___is_sys(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__AImplicitSelfExpr___is_sys].s; /* _is_sys on <self:AImplicitSelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AImplicitSelfExpr#is_sys= for (self: AImplicitSelfExpr, Bool) */
void nit__typing___AImplicitSelfExpr___is_sys_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__AImplicitSelfExpr___is_sys].s = p0; /* _is_sys on <self:AImplicitSelfExpr> */
RET_LABEL:;
}
/* method typing#ASendExpr#callsite for (self: ASendExpr): nullable CallSite */
val* nit__typing___ASendExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#callsite= for (self: ASendExpr, nullable CallSite) */
void nit__typing___ASendExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASendExpr___callsite].val = p0; /* _callsite on <self:ASendExpr> */
RET_LABEL:;
}
/* method typing#ASendExpr#accept_typing for (self: ASendExpr, TypeVisitor) */
void nit__typing___ASendExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var_nrecv /* var nrecv: AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : String */;
val* var_name /* var name: String */;
val* var3 /* : ANode */;
val* var_node /* var node: ANode */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_callsite /* var callsite: nullable Object */;
val* var6 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var7 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : nullable MClass */;
val* var_sysclass /* var sysclass: nullable MClass */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MClassType */;
val* var_systype /* var systype: MClassType */;
val* var19 /* : nullable MProperty */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable CallSite */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : nullable CallSite */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var34 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var35 /* : Bool */;
val* var36 /* : MMethod */;
short int var37 /* : Bool */;
val* var38 /* : nullable MPropDef */;
val* var_vmpropdef /* var vmpropdef: nullable MPropDef */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
short int var_43 /* var : Bool */;
val* var44 /* : MProperty */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
short int var_56 /* var : Bool */;
val* var57 /* : MProperty */;
short int var58 /* : Bool */;
short int var_59 /* var : Bool */;
val* var60 /* : MMethod */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
val* var77 /* : String */;
val* var78 /* : MMethod */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var81 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(self); /* n_expr on <self:ASendExpr>*/
}
var_nrecv = var;
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var_nrecv); /* visit_expr on <var_v:TypeVisitor>*/
}
var_recvtype = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__property_name]))(self); /* property_name on <self:ASendExpr>*/
}
var_name = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__property_node]))(self); /* property_node on <self:ASendExpr>*/
}
var_node = var3;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recvtype, ((val*)NULL)); /* == on <var_recvtype:nullable MType>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
var_callsite = ((val*)NULL);
{
var6 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(var_v, var_recvtype); /* anchor_to on <var_v:TypeVisitor>*/
}
var_unsafe_type = var6;
{
var7 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, var_node, var_unsafe_type, var_name); /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/
}
var_mproperty = var7;
if (var_mproperty == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_mproperty->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mproperty, ((val*)NULL)); /* == on <var_mproperty:nullable MProperty>*/
var9 = var10;
}
var_ = var9;
if (var9){
/* <var_nrecv:AExpr> isa AImplicitSelfExpr */
cltype = type_nit__AImplicitSelfExpr.color;
idtype = type_nit__AImplicitSelfExpr.id;
if(cltype >= var_nrecv->type->table_size) {
var11 = 0;
} else {
var11 = var_nrecv->type->type_table[cltype] == idtype;
}
var8 = var11;
} else {
var8 = var_;
}
if (var8){
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "Sys";
var14 = standard___standard__NativeString___to_s_with_length(var13, 3l);
var12 = var14;
varonce = var12;
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mclass]))(var_v, var_node, var12); /* try_get_mclass on <var_v:TypeVisitor>*/
}
var_sysclass = var15;
if (var_sysclass == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var_sysclass->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_sysclass, ((val*)NULL)); /* != on <var_sysclass:nullable MClass>*/
var16 = var17;
}
if (var16){
{
var18 = ((val*(*)(val* self))(var_sysclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_sysclass); /* mclass_type on <var_sysclass:nullable MClass(MClass)>*/
}
var_systype = var18;
{
var19 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, var_node, var_systype, var_name); /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/
}
var_mproperty = var19;
if (var_mproperty == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_mproperty->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mproperty, ((val*)NULL)); /* != on <var_mproperty:nullable MProperty>*/
var20 = var21;
}
if (var20){
{
var22 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, var_node, var_systype, var_name, 0); /* get_method on <var_v:TypeVisitor>*/
}
var_callsite = var22;
if (var_callsite == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, ((val*)NULL)); /* == on <var_callsite:nullable Object(nullable CallSite)>*/
var23 = var24;
}
if (var23){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(var_nrecv->class->vft[COLOR_nit__typing__AImplicitSelfExpr__is_sys_61d]))(var_nrecv, 1); /* is_sys= on <var_nrecv:AExpr(AImplicitSelfExpr)>*/
}
{
((void(*)(val* self, val* p0))(var_nrecv->class->vft[COLOR_nit__typing__ASelfExpr__its_variable_61d]))(var_nrecv, ((val*)NULL)); /* its_variable= on <var_nrecv:AExpr(AImplicitSelfExpr)>*/
}
{
((void(*)(val* self, val* p0))(var_nrecv->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(var_nrecv, var_systype); /* mtype= on <var_nrecv:AExpr(AImplicitSelfExpr)>*/
}
var_recvtype = var_systype;
} else {
}
} else {
}
} else {
}
if (var_callsite == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
var26 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, ((val*)NULL)); /* == on <var_callsite:nullable Object(nullable CallSite)>*/
var25 = var26;
}
if (var25){
/* <var_nrecv:AExpr> isa ASelfExpr */
cltype28 = type_nit__ASelfExpr.color;
idtype29 = type_nit__ASelfExpr.id;
if(cltype28 >= var_nrecv->type->table_size) {
var27 = 0;
} else {
var27 = var_nrecv->type->type_table[cltype28] == idtype29;
}
{
var30 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, var_node, var_recvtype, var_name, var27); /* get_method on <var_v:TypeVisitor>*/
}
var_callsite = var30;
if (var_callsite == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, ((val*)NULL)); /* == on <var_callsite:nullable Object(nullable CallSite)>*/
var31 = var32;
}
if (var31){
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite_61d]))(self, var_callsite); /* callsite= on <self:ASendExpr>*/
}
{
var33 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_callsite); /* msignature on <var_callsite:nullable Object(CallSite)>*/
}
var_msignature = var33;
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__compute_raw_arguments]))(self); /* compute_raw_arguments on <self:ASendExpr>*/
}
var_args = var34;
{
var35 = ((short int(*)(val* self, val* p0, val* p1))(var_callsite->class->vft[COLOR_nit__typing__CallSite__check_signature]))(var_callsite, var_v, var_args); /* check_signature on <var_callsite:nullable Object(CallSite)>*/
}
{
var36 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:nullable Object(CallSite)>*/
}
{
var37 = ((short int(*)(val* self))(var36->class->vft[COLOR_nit__model__MMethod__is_init]))(var36); /* is_init on <var36:MMethod>*/
}
if (var37){
{
var38 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef]))(var_v); /* mpropdef on <var_v:TypeVisitor>*/
}
var_vmpropdef = var38;
/* <var_vmpropdef:nullable MPropDef> isa MMethodDef */
cltype41 = type_nit__MMethodDef.color;
idtype42 = type_nit__MMethodDef.id;
if(var_vmpropdef == NULL) {
var40 = 0;
} else {
if(cltype41 >= var_vmpropdef->type->table_size) {
var40 = 0;
} else {
var40 = var_vmpropdef->type->type_table[cltype41] == idtype42;
}
}
var_43 = var40;
if (var40){
{
var44 = ((val*(*)(val* self))(var_vmpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_vmpropdef); /* mproperty on <var_vmpropdef:nullable MPropDef(MMethodDef)>*/
}
{
var45 = ((short int(*)(val* self))(var44->class->vft[COLOR_nit__model__MMethod__is_init]))(var44); /* is_init on <var44:MProperty(MMethod)>*/
}
var39 = var45;
} else {
var39 = var_43;
}
var46 = !var39;
if (var46){
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "Error: an `init` can only be called from another `init`.";
var50 = standard___standard__NativeString___to_s_with_length(var49, 56l);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, var_node, var48); /* error on <var_v:TypeVisitor>*/
}
} else {
}
/* <var_vmpropdef:nullable MPropDef> isa MMethodDef */
cltype54 = type_nit__MMethodDef.color;
idtype55 = type_nit__MMethodDef.id;
if(var_vmpropdef == NULL) {
var53 = 0;
} else {
if(cltype54 >= var_vmpropdef->type->table_size) {
var53 = 0;
} else {
var53 = var_vmpropdef->type->type_table[cltype54] == idtype55;
}
}
var_56 = var53;
if (var53){
{
var57 = ((val*(*)(val* self))(var_vmpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_vmpropdef); /* mproperty on <var_vmpropdef:nullable MPropDef(MMethodDef)>*/
}
{
var58 = ((short int(*)(val* self))(var57->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var57); /* is_root_init on <var57:MProperty(MMethod)>*/
}
var52 = var58;
} else {
var52 = var_56;
}
var_59 = var52;
if (var52){
{
var60 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:nullable Object(CallSite)>*/
}
{
var61 = ((short int(*)(val* self))(var60->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var60); /* is_root_init on <var60:MMethod>*/
}
var62 = !var61;
var51 = var62;
} else {
var51 = var_59;
}
if (var51){
if (unlikely(varonce63==NULL)) {
var64 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "Error: `";
var68 = standard___standard__NativeString___to_s_with_length(var67, 8l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var64)->values[0]=var66;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "` cannot call a factory `";
var72 = standard___standard__NativeString___to_s_with_length(var71, 25l);
var70 = var72;
varonce69 = var70;
}
((struct instance_standard__NativeArray*)var64)->values[2]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "`.";
var76 = standard___standard__NativeString___to_s_with_length(var75, 2l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var64)->values[4]=var74;
} else {
var64 = varonce63;
varonce63 = NULL;
}
{
var77 = ((val*(*)(val* self))(var_vmpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_vmpropdef); /* to_s on <var_vmpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var64)->values[1]=var77;
{
var78 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:nullable Object(CallSite)>*/
}
{
var79 = ((val*(*)(val* self))(var78->class->vft[COLOR_standard__string__Object__to_s]))(var78); /* to_s on <var78:MMethod>*/
}
((struct instance_standard__NativeArray*)var64)->values[3]=var79;
{
var80 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, var_node, var80); /* error on <var_v:TypeVisitor>*/
}
} else {
}
} else {
}
{
var81 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_msignature); /* return_mtype on <var_msignature:MSignature>*/
}
var_ret = var81;
if (var_ret == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
var83 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ret, ((val*)NULL)); /* != on <var_ret:nullable MType>*/
var82 = var83;
}
if (var82){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_ret); /* mtype= on <self:ASendExpr>*/
}
} else {
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ASendExpr>*/
}
}
RET_LABEL:;
}
/* method typing#ASendExpr#property_name for (self: ASendExpr): String */
val* nit__typing___ASendExpr___property_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "property_name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1658);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#property_node for (self: ASendExpr): ANode */
val* nit__typing___ASendExpr___property_node(val* self) {
val* var /* : ANode */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#raw_arguments for (self: ASendExpr): Array[AExpr] */
val* nit__typing___ASendExpr___raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__compute_raw_arguments]))(self); /* compute_raw_arguments on <self:ASendExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#compute_raw_arguments for (self: ASendExpr): Array[AExpr] */
val* nit__typing___ASendExpr___compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "compute_raw_arguments", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1670);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#compute_raw_arguments for (self: ABinopExpr): Array[AExpr] */
val* nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
val* var_ /* var : Array[AExpr] */;
val* var2 /* : AExpr */;
var1 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_standard__array__Array__with_capacity]))(var1, 1l); /* with_capacity on <var1:Array[AExpr]>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2]))(self); /* n_expr2 on <self:ABinopExpr>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var2); /* push on <var_:Array[AExpr]>*/
}
var = var_;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#property_name for (self: ABinopExpr): String */
val* nit__typing___ABinopExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__operator]))(self); /* operator on <self:ABinopExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#property_node for (self: ABinopExpr): ANode */
val* nit__typing___ABinopExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : Token */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op]))(self); /* n_op on <self:ABinopExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AEqExpr#accept_typing for (self: AEqExpr, TypeVisitor) */
void nit__typing___AEqExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing___AEqExpr___AExpr__accept_typing]))(self, p0); /* accept_typing on <self:AEqExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__null_test]))(var_v, self); /* null_test on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#ANeExpr#accept_typing for (self: ANeExpr, TypeVisitor) */
void nit__typing___ANeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing___ANeExpr___AExpr__accept_typing]))(self, p0); /* accept_typing on <self:ANeExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__null_test]))(var_v, self); /* null_test on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#AUnaryopExpr#property_name for (self: AUnaryopExpr): String */
val* nit__typing___AUnaryopExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "unary ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 6l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AUnaryopExpr__operator]))(self); /* operator on <self:AUnaryopExpr>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AUnaryopExpr#compute_raw_arguments for (self: AUnaryopExpr): Array[AExpr] */
val* nit__typing___AUnaryopExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[AExpr]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#property_name for (self: ACallExpr): String */
val* nit__typing___ACallExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__Token__text]))(var1); /* text on <var1:TId>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#property_node for (self: ACallExpr): ANode */
val* nit__typing___ACallExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : TId */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#compute_raw_arguments for (self: ACallExpr): Array[AExpr] */
val* nit__typing___ACallExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args]))(self); /* n_args on <self:ACallExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__typing__AExprs__to_a]))(var1); /* to_a on <var1:AExprs>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#property_name for (self: ACallAssignExpr): String */
val* nit__typing___ACallAssignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallAssignExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__Token__text]))(var1); /* text on <var1:TId>*/
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "=";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__string__String___43d]))(var2, var3); /* + on <var2:String>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#property_node for (self: ACallAssignExpr): ANode */
val* nit__typing___ACallAssignExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : TId */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#compute_raw_arguments for (self: ACallAssignExpr): Array[AExpr] */
val* nit__typing___ACallAssignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var3 /* : AExpr */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args]))(self); /* n_args on <self:ACallAssignExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__typing__AExprs__to_a]))(var1); /* to_a on <var1:AExprs>*/
}
var_res = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value]))(self); /* n_value on <self:ACallAssignExpr>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var3); /* add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#property_name for (self: ABraExpr): String */
val* nit__typing___ABraExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[]";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#compute_raw_arguments for (self: ABraExpr): Array[AExpr] */
val* nit__typing___ABraExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABraFormExpr__n_args]))(self); /* n_args on <self:ABraExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__typing__AExprs__to_a]))(var1); /* to_a on <var1:AExprs>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#property_name for (self: ABraAssignExpr): String */
val* nit__typing___ABraAssignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[]=";
var3 = standard___standard__NativeString___to_s_with_length(var2, 3l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#compute_raw_arguments for (self: ABraAssignExpr): Array[AExpr] */
val* nit__typing___ABraAssignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var3 /* : AExpr */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABraFormExpr__n_args]))(self); /* n_args on <self:ABraAssignExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__typing__AExprs__to_a]))(var1); /* to_a on <var1:AExprs>*/
}
var_res = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value]))(self); /* n_value on <self:ABraAssignExpr>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var3); /* add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite for (self: ASendReassignFormExpr): nullable CallSite */
val* nit__typing___ASendReassignFormExpr___write_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite= for (self: ASendReassignFormExpr, nullable CallSite) */
void nit__typing___ASendReassignFormExpr___write_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val = p0; /* _write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL:;
}
/* method typing#ASendReassignFormExpr#accept_typing for (self: ASendReassignFormExpr, TypeVisitor) */
void nit__typing___ASendReassignFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : String */;
val* var_name /* var name: String */;
val* var3 /* : ANode */;
val* var_node /* var node: ANode */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : AExpr */;
short int var7 /* : Bool */;
int cltype;
int idtype;
short int var_for_self /* var for_self: Bool */;
val* var8 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var12 /* : Bool */;
val* var13 /* : MSignature */;
val* var14 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : NativeArray[String] */;
static val* varonce;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : nullable CallSite */;
val* var_wcallsite /* var wcallsite: nullable CallSite */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MSignature */;
val* var40 /* : Array[MParameter] */;
val* var41 /* : nullable Object */;
val* var42 /* : MType */;
val* var43 /* : nullable MType */;
val* var_wtype /* var wtype: nullable MType */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : Array[nullable Object] */;
val* var47 /* : AExpr */;
short int var48 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(self); /* n_expr on <self:ASendReassignFormExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:TypeVisitor>*/
}
var_recvtype = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__property_name]))(self); /* property_name on <self:ASendReassignFormExpr>*/
}
var_name = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__property_node]))(self); /* property_node on <self:ASendReassignFormExpr>*/
}
var_node = var3;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recvtype, ((val*)NULL)); /* == on <var_recvtype:nullable MType>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(self); /* n_expr on <self:ASendReassignFormExpr>*/
}
/* <var6:AExpr> isa ASelfExpr */
cltype = type_nit__ASelfExpr.color;
idtype = type_nit__ASelfExpr.id;
if(cltype >= var6->type->table_size) {
var7 = 0;
} else {
var7 = var6->type->type_table[cltype] == idtype;
}
var_for_self = var7;
{
var8 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, var_node, var_recvtype, var_name, var_for_self); /* get_method on <var_v:TypeVisitor>*/
}
var_callsite = var8;
if (var_callsite == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, ((val*)NULL)); /* == on <var_callsite:nullable CallSite>*/
var9 = var10;
}
if (var9){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite_61d]))(self, var_callsite); /* callsite= on <self:ASendReassignFormExpr>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__compute_raw_arguments]))(self); /* compute_raw_arguments on <self:ASendReassignFormExpr>*/
}
var_args = var11;
{
var12 = ((short int(*)(val* self, val* p0, val* p1))(var_callsite->class->vft[COLOR_nit__typing__CallSite__check_signature]))(var_callsite, var_v, var_args); /* check_signature on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var13 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_callsite); /* msignature on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var13); /* return_mtype on <var13:MSignature>*/
}
var_readtype = var14;
if (var_readtype == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_readtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_readtype, ((val*)NULL)); /* == on <var_readtype:nullable MType>*/
var15 = var16;
}
if (var15){
if (unlikely(varonce==NULL)) {
var17 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "Error: `";
var21 = standard___standard__NativeString___to_s_with_length(var20, 8l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "` is not a function.";
var25 = standard___standard__NativeString___to_s_with_length(var24, 20l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var17)->values[2]=var23;
} else {
var17 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var17)->values[1]=var_name;
{
var26 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce = var17;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, var_node, var26); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "=";
var30 = standard___standard__NativeString___to_s_with_length(var29, 1l);
var28 = var30;
varonce27 = var28;
}
{
var31 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__string__String___43d]))(var_name, var28); /* + on <var_name:String>*/
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(self); /* n_expr on <self:ASendReassignFormExpr>*/
}
/* <var32:AExpr> isa ASelfExpr */
cltype34 = type_nit__ASelfExpr.color;
idtype35 = type_nit__ASelfExpr.id;
if(cltype34 >= var32->type->table_size) {
var33 = 0;
} else {
var33 = var32->type->type_table[cltype34] == idtype35;
}
{
var36 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, var_node, var_recvtype, var31, var33); /* get_method on <var_v:TypeVisitor>*/
}
var_wcallsite = var36;
if (var_wcallsite == NULL) {
var37 = 1; /* is null */
} else {
var37 = 0; /* arg is null but recv is not */
}
if (0) {
var38 = ((short int(*)(val* self, val* p0))(var_wcallsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_wcallsite, ((val*)NULL)); /* == on <var_wcallsite:nullable CallSite>*/
var37 = var38;
}
if (var37){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ASendReassignFormExpr__write_callsite_61d]))(self, var_wcallsite); /* write_callsite= on <self:ASendReassignFormExpr>*/
}
{
var39 = ((val*(*)(val* self))(var_wcallsite->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_wcallsite); /* msignature on <var_wcallsite:nullable CallSite(CallSite)>*/
}
{
var40 = ((val*(*)(val* self))(var39->class->vft[COLOR_nit__model__MSignature__mparameters]))(var39); /* mparameters on <var39:MSignature>*/
}
{
var41 = ((val*(*)(val* self))(var40->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var40); /* last on <var40:Array[MParameter]>*/
}
{
var42 = ((val*(*)(val* self))(var41->class->vft[COLOR_nit__model__MParameter__mtype]))(var41); /* mtype on <var41:nullable Object(MParameter)>*/
}
{
var43 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__typing__AReassignFormExpr__resolve_reassignment]))(self, var_v, var_readtype, var42); /* resolve_reassignment on <self:ASendReassignFormExpr>*/
}
var_wtype = var43;
if (var_wtype == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
var45 = ((short int(*)(val* self, val* p0))(var_wtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_wtype, ((val*)NULL)); /* == on <var_wtype:nullable MType>*/
var44 = var45;
}
if (var44){
goto RET_LABEL;
} else {
}
{
var46 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__array__Collection__to_a]))(var_args); /* to_a on <var_args:Array[AExpr]>*/
}
var_args = var46;
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value]))(self); /* n_value on <self:ASendReassignFormExpr>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_args, var47); /* add on <var_args:Array[AExpr]>*/
}
{
var48 = ((short int(*)(val* self, val* p0, val* p1))(var_wcallsite->class->vft[COLOR_nit__typing__CallSite__check_signature]))(var_wcallsite, var_v, var_args); /* check_signature on <var_wcallsite:nullable CallSite(CallSite)>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ASendReassignFormExpr>*/
}
RET_LABEL:;
}
/* method typing#ACallReassignExpr#property_name for (self: ACallReassignExpr): String */
val* nit__typing___ACallReassignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallReassignExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__Token__text]))(var1); /* text on <var1:TId>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#property_node for (self: ACallReassignExpr): ANode */
val* nit__typing___ACallReassignExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : TId */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:ACallReassignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#compute_raw_arguments for (self: ACallReassignExpr): Array[AExpr] */
val* nit__typing___ACallReassignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args]))(self); /* n_args on <self:ACallReassignExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__typing__AExprs__to_a]))(var1); /* to_a on <var1:AExprs>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#property_name for (self: ABraReassignExpr): String */
val* nit__typing___ABraReassignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[]";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#compute_raw_arguments for (self: ABraReassignExpr): Array[AExpr] */
val* nit__typing___ABraReassignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABraFormExpr__n_args]))(self); /* n_args on <self:ABraReassignExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__typing__AExprs__to_a]))(var1); /* to_a on <var1:AExprs>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#property_name for (self: AInitExpr): String */
val* nit__typing___AInitExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "init";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#property_node for (self: AInitExpr): ANode */
val* nit__typing___AInitExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : TKwinit */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AInitExpr__n_kwinit]))(self); /* n_kwinit on <self:AInitExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#compute_raw_arguments for (self: AInitExpr): Array[AExpr] */
val* nit__typing___AInitExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AInitExpr__n_args]))(self); /* n_args on <self:AInitExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__typing__AExprs__to_a]))(var1); /* to_a on <var1:AExprs>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExprs#to_a for (self: AExprs): Array[AExpr] */
val* nit__typing___AExprs___to_a(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : Array[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:AExprs>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__array__Collection__to_a]))(var1); /* to_a on <var1:ANodes[AExpr]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#callsite for (self: ASuperExpr): nullable CallSite */
val* nit__typing___ASuperExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#callsite= for (self: ASuperExpr, nullable CallSite) */
void nit__typing___ASuperExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASuperExpr___callsite].val = p0; /* _callsite on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#mpropdef for (self: ASuperExpr): nullable MMethodDef */
val* nit__typing___ASuperExpr___mpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#mpropdef= for (self: ASuperExpr, nullable MMethodDef) */
void nit__typing___ASuperExpr___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASuperExpr___mpropdef].val = p0; /* _mpropdef on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#accept_typing for (self: ASuperExpr, TypeVisitor) */
void nit__typing___ASuperExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Variable */;
val* var4 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable MPropDef */;
val* var8 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var9 /* : Bool */;
int cltype;
int idtype;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : MModule */;
val* var15 /* : Array[MPropDef] */;
val* var_superprops /* var superprops: Array[MMethodDef] */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
val* var22 /* : nullable MPropDef */;
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
val* var35 /* : String */;
val* var36 /* : nullable Object */;
val* var_superprop /* var superprop: MMethodDef */;
val* var37 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var38 /* : MType */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name;
val* var42 /* : AExprs */;
val* var43 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
val* var52 /* : nullable SignatureMap */;
val* var53 /* : nullable MType */;
val* var54 /* : nullable MPropDef */;
val* var55 /* : nullable MPropDef */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
var_v = p0;
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor]))(var_v); /* anchor on <var_v:TypeVisitor>*/
}
var_anchor = var;
if (var_anchor == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1809);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__selfvariable]))(var_v); /* selfvariable on <var_v:TypeVisitor>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_variable]))(var_v, self, var3); /* get_variable on <var_v:TypeVisitor>*/
}
var_recvtype = var4;
if (var_recvtype == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_recvtype, ((val*)NULL)); /* != on <var_recvtype:nullable MType>*/
var5 = var6;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1811);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef]))(var_v); /* mpropdef on <var_v:TypeVisitor>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1812);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var7); /* mproperty on <var7:nullable MPropDef>*/
}
var_mproperty = var8;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var9 = 0;
} else {
var9 = var_mproperty->type->type_table[cltype] == idtype;
}
var10 = !var9;
if (var10){
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Error: `super` only usable in a `method`.";
var13 = standard___standard__NativeString___to_s_with_length(var12, 41l);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var11); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(var_v); /* mmodule on <var_v:TypeVisitor>*/
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mproperty->class->vft[COLOR_nit__model__MProperty__lookup_super_definitions]))(var_mproperty, var14, var_anchor); /* lookup_super_definitions on <var_mproperty:MProperty(MMethod)>*/
}
var_superprops = var15;
{
var16 = ((long(*)(val* self))(var_superprops->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_superprops); /* length on <var_superprops:Array[MMethodDef]>*/
}
{
{ /* Inline kernel#Int#== (var16,0l) on <var16:Int> */
var19 = var16 == 0l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
var21 = ((short int(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MMethod__is_init]))(var_mproperty); /* is_init on <var_mproperty:MProperty(MMethod)>*/
}
var_ = var21;
if (var21){
{
var22 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef]))(var_v); /* mpropdef on <var_v:TypeVisitor>*/
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1819);
fatal_exit(1);
} else {
var23 = ((short int(*)(val* self))(var22->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var22); /* is_intro on <var22:nullable MPropDef>*/
}
var20 = var23;
} else {
var20 = var_;
}
if (var20){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ASuperExpr__process_superinit]))(self, var_v); /* process_superinit on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Error: no super method to call for `";
var29 = standard___standard__NativeString___to_s_with_length(var28, 36l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "`.";
var33 = standard___standard__NativeString___to_s_with_length(var32, 2l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
var34 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var25)->values[1]=var34;
{
var35 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var35); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var36 = ((val*(*)(val* self))(var_superprops->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_superprops); /* first on <var_superprops:Array[MMethodDef]>*/
}
var_superprop = var36;
{
var37 = ((val*(*)(val* self))(var_superprop->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_superprop); /* msignature on <var_superprop:MMethodDef>*/
}
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1829);
fatal_exit(1);
}
var_msignature = var37;
{
var38 = ((val*(*)(val* self, val* p0, val* p1, short int p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__resolve_for]))(var_v, var_msignature, var_recvtype, 1); /* resolve_for on <var_v:TypeVisitor>*/
}
/* <var38:MType> isa MSignature */
cltype40 = type_nit__MSignature.color;
idtype41 = type_nit__MSignature.id;
if(cltype40 >= var38->type->table_size) {
var39 = 0;
} else {
var39 = var38->type->type_table[cltype40] == idtype41;
}
if (unlikely(!var39)) {
var_class_name = var38 == NULL ? "null" : var38->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1830);
fatal_exit(1);
}
var_msignature = var38;
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperExpr__n_args]))(self); /* n_args on <self:ASuperExpr>*/
}
{
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_nit__typing__AExprs__to_a]))(var42); /* to_a on <var42:AExprs>*/
}
var_args = var43;
{
var44 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
{
{ /* Inline kernel#Int#> (var44,0l) on <var44:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var47 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var51 = var44 > 0l;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
var52 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__check_signature]))(var_v, self, var_args, var_mproperty, var_msignature); /* check_signature on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ASuperExpr__signaturemap_61d]))(self, var52); /* signaturemap= on <self:ASuperExpr>*/
}
} else {
}
{
var53 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_msignature); /* return_mtype on <var_msignature:MSignature>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var53); /* mtype= on <self:ASuperExpr>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ASuperExpr>*/
}
{
var54 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef]))(var_v); /* mpropdef on <var_v:TypeVisitor>*/
}
if (var54 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1837);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var54->class->vft[COLOR_nit__modelize_property__MPropDef__has_supercall_61d]))(var54, 1); /* has_supercall= on <var54:nullable MPropDef>*/
}
{
var55 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef]))(var_v); /* mpropdef on <var_v:TypeVisitor>*/
}
/* <var55:nullable MPropDef> isa MMethodDef */
cltype57 = type_nit__MMethodDef.color;
idtype58 = type_nit__MMethodDef.id;
if(var55 == NULL) {
var56 = 0;
} else {
if(cltype57 >= var55->type->table_size) {
var56 = 0;
} else {
var56 = var55->type->type_table[cltype57] == idtype58;
}
}
if (unlikely(!var56)) {
var_class_name59 = var55 == NULL ? "null" : var55->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1838);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ASuperExpr__mpropdef_61d]))(self, var55); /* mpropdef= on <self:ASuperExpr>*/
}
RET_LABEL:;
}
/* method typing#ASuperExpr#signaturemap for (self: ASuperExpr): nullable SignatureMap */
val* nit__typing___ASuperExpr___signaturemap(val* self) {
val* var /* : nullable SignatureMap */;
val* var1 /* : nullable SignatureMap */;
var1 = self->attrs[COLOR_nit__typing__ASuperExpr___signaturemap].val; /* _signaturemap on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#signaturemap= for (self: ASuperExpr, nullable SignatureMap) */
void nit__typing___ASuperExpr___signaturemap_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASuperExpr___signaturemap].val = p0; /* _signaturemap on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#process_superinit for (self: ASuperExpr, TypeVisitor) */
void nit__typing___ASuperExpr___process_superinit(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Variable */;
val* var4 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var_superprop /* var superprop: nullable MMethodDef */;
val* var10 /* : MClassDef */;
val* var11 /* : Array[MClassType] */;
val* var_ /* var : Array[MClassType] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[MClassType] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var16 /* : MModule */;
val* var17 /* : MType */;
val* var18 /* : ModelBuilder */;
val* var19 /* : ToolContext */;
long var20 /* : Int */;
long var_errcount /* var errcount: Int */;
val* var21 /* : String */;
val* var22 /* : nullable MProperty */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name;
val* var_candidate /* var candidate: nullable MMethod */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
val* var48 /* : MProperty */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
val* var51 /* : MProperty */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : NativeArray[String] */;
static val* varonce;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
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
val* var73 /* : MProperty */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : MModule */;
val* var77 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var_81 /* var : Bool */;
val* var82 /* : MProperty */;
short int var83 /* : Bool */;
val* var84 /* : nullable Object */;
short int var85 /* : Bool */;
long var86 /* : Int */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
short int var93 /* : Bool */;
val* var95 /* : NativeArray[String] */;
static val* varonce94;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : FlatString */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
val* var108 /* : String */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : FlatString */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var116 /* : nullable Object */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
val* var121 /* : NativeArray[String] */;
static val* varonce120;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
val* var125 /* : FlatString */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : FlatString */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var132 /* : MSignature */;
val* var133 /* : nullable MSignature */;
val* var134 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var135 /* : MType */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
val* var140 /* : CallSite */;
val* var141 /* : MModule */;
val* var142 /* : nullable MClassType */;
val* var143 /* : MProperty */;
val* var_callsite /* var callsite: CallSite */;
val* var144 /* : AExprs */;
val* var145 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var146 /* : Int */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
const char* var_class_name152;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : nullable MSignature */;
long var156 /* : Int */;
long var157 /* : Int */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
const char* var_class_name163;
short int var164 /* : Bool */;
val* var166 /* : NativeArray[String] */;
static val* varonce165;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : FlatString */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
val* var174 /* : FlatString */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : FlatString */;
val* var183 /* : nullable MSignature */;
long var184 /* : Int */;
val* var185 /* : String */;
long var186 /* : Int */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var189 /* : String */;
long var_i /* var i: Int */;
val* var190 /* : Array[MParameter] */;
val* var_191 /* var : Array[MParameter] */;
val* var192 /* : Iterator[nullable Object] */;
val* var_193 /* var : ArrayIterator[MParameter] */;
short int var194 /* : Bool */;
val* var195 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var196 /* : nullable MSignature */;
val* var197 /* : Array[MParameter] */;
val* var198 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var199 /* : MType */;
val* var200 /* : MType */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
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
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
val* var216 /* : FlatString */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
val* var220 /* : FlatString */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
val* var224 /* : FlatString */;
val* var225 /* : String */;
val* var226 /* : MType */;
val* var227 /* : String */;
val* var228 /* : String */;
val* var229 /* : MType */;
val* var230 /* : String */;
val* var231 /* : String */;
val* var232 /* : String */;
long var233 /* : Int */;
short int var235 /* : Bool */;
int cltype236;
int idtype237;
const char* var_class_name238;
long var239 /* : Int */;
var_v = p0;
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor]))(var_v); /* anchor on <var_v:TypeVisitor>*/
}
var_anchor = var;
if (var_anchor == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1848);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__selfvariable]))(var_v); /* selfvariable on <var_v:TypeVisitor>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_variable]))(var_v, self, var3); /* get_variable on <var_v:TypeVisitor>*/
}
var_recvtype = var4;
if (var_recvtype == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_recvtype, ((val*)NULL)); /* != on <var_recvtype:nullable MType>*/
var5 = var6;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1850);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef]))(var_v); /* mpropdef on <var_v:TypeVisitor>*/
}
var_mpropdef = var7;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(var_mpropdef == NULL) {
var8 = 0;
} else {
if(cltype >= var_mpropdef->type->table_size) {
var8 = 0;
} else {
var8 = var_mpropdef->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1852);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
var_mproperty = var9;
var_superprop = ((val*)NULL);
{
var10 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model__MClassDef__supertypes]))(var10); /* supertypes on <var10:MClassDef>*/
}
var_ = var11;
{
var12 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassType]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))(var_13->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:ArrayIterator[MClassType]>*/
}
if (var14){
{
var15 = ((val*(*)(val* self))(var_13->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:ArrayIterator[MClassType]>*/
}
var_msupertype = var15;
{
var16 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(var_v); /* mmodule on <var_v:TypeVisitor>*/
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1))(var_msupertype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_msupertype, var16, var_anchor); /* anchor_to on <var_msupertype:MClassType>*/
}
var_msupertype = var17;
{
var18 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(var_v); /* modelbuilder on <var_v:TypeVisitor>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var18); /* toolcontext on <var18:ModelBuilder>*/
}
{
var20 = ((long(*)(val* self))(var19->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var19); /* error_count on <var19:ToolContext>*/
}
var_errcount = var20;
{
var21 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mproperty); /* name on <var_mproperty:MMethod>*/
}
{
var22 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, self, var_msupertype, var21); /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/
}
/* <var22:nullable MProperty> isa nullable MMethod */
cltype24 = type_nullable__nit__MMethod.color;
idtype25 = type_nullable__nit__MMethod.id;
if(var22 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var22->type->table_size) {
var23 = 0;
} else {
var23 = var22->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
var_class_name = var22 == NULL ? "null" : var22->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1858);
fatal_exit(1);
}
var_candidate = var22;
if (var_candidate == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable MMethod>*/
var26 = var27;
}
if (var26){
{
var28 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(var_v); /* modelbuilder on <var_v:TypeVisitor>*/
}
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var28); /* toolcontext on <var28:ModelBuilder>*/
}
{
var30 = ((long(*)(val* self))(var29->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var29); /* error_count on <var29:ToolContext>*/
}
{
{ /* Inline kernel#Int#> (var30,var_errcount) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var_errcount:Int> isa OTHER */
/* <var_errcount:Int> isa OTHER */
var33 = 1; /* easy <var_errcount:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var37 = var30 > var_errcount;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
goto RET_LABEL;
} else {
}
goto BREAK_label;
} else {
}
if (var_superprop == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
var40 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_superprop, ((val*)NULL)); /* != on <var_superprop:nullable MMethodDef>*/
var39 = var40;
}
var_41 = var39;
if (var39){
{
var42 = ((short int(*)(val* self))(var_candidate->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var_candidate); /* is_root_init on <var_candidate:nullable MMethod(MMethod)>*/
}
var38 = var42;
} else {
var38 = var_41;
}
if (var38){
goto BREAK_label;
} else {
}
if (var_superprop == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
var46 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_superprop, ((val*)NULL)); /* != on <var_superprop:nullable MMethodDef>*/
var45 = var46;
}
var_47 = var45;
if (var45){
{
var48 = ((val*(*)(val* self))(var_superprop->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_superprop); /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
{
var49 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var48, var_candidate); /* != on <var48:MProperty(MMethod)>*/
}
var44 = var49;
} else {
var44 = var_47;
}
var_50 = var44;
if (var44){
{
var51 = ((val*(*)(val* self))(var_superprop->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_superprop); /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
{
var52 = ((short int(*)(val* self))(var51->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var51); /* is_root_init on <var51:MProperty(MMethod)>*/
}
var53 = !var52;
var43 = var53;
} else {
var43 = var_50;
}
if (var43){
if (unlikely(varonce==NULL)) {
var54 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "Error: conflicting super constructor to call for `";
var58 = standard___standard__NativeString___to_s_with_length(var57, 50l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var54)->values[0]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "`: `";
var62 = standard___standard__NativeString___to_s_with_length(var61, 4l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var54)->values[2]=var60;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "`, `";
var66 = standard___standard__NativeString___to_s_with_length(var65, 4l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var54)->values[4]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "`";
var70 = standard___standard__NativeString___to_s_with_length(var69, 1l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var54)->values[6]=var68;
} else {
var54 = varonce;
varonce = NULL;
}
{
var71 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MMethod>*/
}
((struct instance_standard__NativeArray*)var54)->values[1]=var71;
{
var72 = ((val*(*)(val* self))(var_candidate->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_candidate); /* full_name on <var_candidate:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var54)->values[3]=var72;
{
var73 = ((val*(*)(val* self))(var_superprop->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_superprop); /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
{
var74 = ((val*(*)(val* self))(var73->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var73); /* full_name on <var73:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var54)->values[5]=var74;
{
var75 = ((val*(*)(val* self))(var54->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce = var54;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var75); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var76 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(var_v); /* mmodule on <var_v:TypeVisitor>*/
}
{
var77 = ((val*(*)(val* self, val* p0, val* p1))(var_candidate->class->vft[COLOR_nit__model__MProperty__lookup_definitions]))(var_candidate, var76, var_anchor); /* lookup_definitions on <var_candidate:nullable MMethod(MMethod)>*/
}
var_candidatedefs = var77;
if (var_superprop == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (0) {
var80 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_superprop, ((val*)NULL)); /* != on <var_superprop:nullable MMethodDef>*/
var79 = var80;
}
var_81 = var79;
if (var79){
{
var82 = ((val*(*)(val* self))(var_superprop->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_superprop); /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
{
var83 = ((short int(*)(val* self, val* p0))(var82->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var82, var_candidate); /* == on <var82:MProperty(MMethod)>*/
}
var78 = var83;
} else {
var78 = var_81;
}
if (var78){
{
var84 = ((val*(*)(val* self))(var_candidatedefs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_candidatedefs); /* first on <var_candidatedefs:Array[MMethodDef]>*/
}
{
var85 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_superprop, var84); /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
if (var85){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_candidatedefs->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_candidatedefs, var_superprop); /* add on <var_candidatedefs:Array[MMethodDef]>*/
}
} else {
}
{
var86 = ((long(*)(val* self))(var_candidatedefs->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_candidatedefs); /* length on <var_candidatedefs:Array[MMethodDef]>*/
}
{
{ /* Inline kernel#Int#> (var86,1l) on <var86:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var89 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var93 = var86 > 1l;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
if (unlikely(varonce94==NULL)) {
var95 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "Error: conflicting property definitions for property `";
var99 = standard___standard__NativeString___to_s_with_length(var98, 54l);
var97 = var99;
varonce96 = var97;
}
((struct instance_standard__NativeArray*)var95)->values[0]=var97;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "` in `";
var103 = standard___standard__NativeString___to_s_with_length(var102, 6l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var95)->values[2]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "`: ";
var107 = standard___standard__NativeString___to_s_with_length(var106, 3l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var95)->values[4]=var105;
} else {
var95 = varonce94;
varonce94 = NULL;
}
{
var108 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MMethod>*/
}
((struct instance_standard__NativeArray*)var95)->values[1]=var108;
{
var109 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var95)->values[3]=var109;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = ", ";
var113 = standard___standard__NativeString___to_s_with_length(var112, 2l);
var111 = var113;
varonce110 = var111;
}
{
var114 = ((val*(*)(val* self, val* p0))(var_candidatedefs->class->vft[COLOR_standard__string__Collection__join]))(var_candidatedefs, var111); /* join on <var_candidatedefs:Array[MMethodDef]>*/
}
((struct instance_standard__NativeArray*)var95)->values[5]=var114;
{
var115 = ((val*(*)(val* self))(var95->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var95); /* native_to_s on <var95:NativeArray[String]>*/
}
varonce94 = var95;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var115); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var116 = ((val*(*)(val* self))(var_candidatedefs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_candidatedefs); /* first on <var_candidatedefs:Array[MMethodDef]>*/
}
var_superprop = var116;
BREAK_label: (void)0;
{
((void(*)(val* self))(var_13->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label117;
}
}
BREAK_label117: (void)0;
{
((void(*)(val* self))(var_13->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:ArrayIterator[MClassType]>*/
}
if (var_superprop == NULL) {
var118 = 1; /* is null */
} else {
var118 = 0; /* arg is null but recv is not */
}
if (0) {
var119 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_superprop, ((val*)NULL)); /* == on <var_superprop:nullable MMethodDef>*/
var118 = var119;
}
if (var118){
if (unlikely(varonce120==NULL)) {
var121 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "Error: no super method to call for `";
var125 = standard___standard__NativeString___to_s_with_length(var124, 36l);
var123 = var125;
varonce122 = var123;
}
((struct instance_standard__NativeArray*)var121)->values[0]=var123;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "`.";
var129 = standard___standard__NativeString___to_s_with_length(var128, 2l);
var127 = var129;
varonce126 = var127;
}
((struct instance_standard__NativeArray*)var121)->values[2]=var127;
} else {
var121 = varonce120;
varonce120 = NULL;
}
{
var130 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MMethod>*/
}
((struct instance_standard__NativeArray*)var121)->values[1]=var130;
{
var131 = ((val*(*)(val* self))(var121->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var121); /* native_to_s on <var121:NativeArray[String]>*/
}
varonce120 = var121;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var131); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var133 = ((val*(*)(val* self))(var_superprop->class->vft[COLOR_nit__model__MMethodDef__new_msignature]))(var_superprop); /* new_msignature on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
if (var133!=NULL) {
var132 = var133;
} else {
{
var134 = ((val*(*)(val* self))(var_superprop->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_superprop); /* msignature on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1886);
fatal_exit(1);
}
var132 = var134;
}
var_msignature = var132;
{
var135 = ((val*(*)(val* self, val* p0, val* p1, short int p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__resolve_for]))(var_v, var_msignature, var_recvtype, 1); /* resolve_for on <var_v:TypeVisitor>*/
}
/* <var135:MType> isa MSignature */
cltype137 = type_nit__MSignature.color;
idtype138 = type_nit__MSignature.id;
if(cltype137 >= var135->type->table_size) {
var136 = 0;
} else {
var136 = var135->type->type_table[cltype137] == idtype138;
}
if (unlikely(!var136)) {
var_class_name139 = var135 == NULL ? "null" : var135->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1887);
fatal_exit(1);
}
var_msignature = var135;
var140 = NEW_nit__CallSite(&type_nit__CallSite);
{
var141 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(var_v); /* mmodule on <var_v:TypeVisitor>*/
}
{
var142 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor]))(var_v); /* anchor on <var_v:TypeVisitor>*/
}
{
var143 = ((val*(*)(val* self))(var_superprop->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_superprop); /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var140->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var140, self); /* node= on <var140:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var140->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var140, var_recvtype); /* recv= on <var140:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var140->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var140, var141); /* mmodule= on <var140:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var140->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var140, var142); /* anchor= on <var140:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var140->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var140, 1); /* recv_is_self= on <var140:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var140->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var140, var143); /* mproperty= on <var140:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var140->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var140, var_superprop); /* mpropdef= on <var140:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var140->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var140, var_msignature); /* msignature= on <var140:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var140->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var140, 0); /* erasure_cast= on <var140:CallSite>*/
}
{
((void(*)(val* self))(var140->class->vft[COLOR_standard__kernel__Object__init]))(var140); /* init on <var140:CallSite>*/
}
var_callsite = var140;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ASuperExpr__callsite_61d]))(self, var_callsite); /* callsite= on <self:ASuperExpr>*/
}
{
var144 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperExpr__n_args]))(self); /* n_args on <self:ASuperExpr>*/
}
{
var145 = ((val*(*)(val* self))(var144->class->vft[COLOR_nit__typing__AExprs__to_a]))(var144); /* to_a on <var144:AExprs>*/
}
var_args = var145;
{
var146 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[AExpr]>*/
}
{
{ /* Inline kernel#Int#> (var146,0l) on <var146:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var149 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var149)) {
var_class_name152 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name152);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var153 = var146 > 0l;
var147 = var153;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
if (var147){
{
var154 = ((short int(*)(val* self, val* p0, val* p1))(var_callsite->class->vft[COLOR_nit__typing__CallSite__check_signature]))(var_callsite, var_v, var_args); /* check_signature on <var_callsite:CallSite>*/
}
} else {
{
var155 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
if (var155 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1897);
fatal_exit(1);
} else {
var156 = ((long(*)(val* self))(var155->class->vft[COLOR_nit__model__MSignature__arity]))(var155); /* arity on <var155:nullable MSignature>*/
}
{
var157 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#< (var156,var157) on <var156:Int> */
/* Covariant cast for argument 0 (i) <var157:Int> isa OTHER */
/* <var157:Int> isa OTHER */
var160 = 1; /* easy <var157:Int> isa OTHER*/
if (unlikely(!var160)) {
var_class_name163 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name163);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var164 = var156 < var157;
var158 = var164;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
if (var158){
if (unlikely(varonce165==NULL)) {
var166 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "Error: not enough implicit arguments to pass. Got `";
var170 = standard___standard__NativeString___to_s_with_length(var169, 51l);
var168 = var170;
varonce167 = var168;
}
((struct instance_standard__NativeArray*)var166)->values[0]=var168;
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "`, expected at least `";
var174 = standard___standard__NativeString___to_s_with_length(var173, 22l);
var172 = var174;
varonce171 = var172;
}
((struct instance_standard__NativeArray*)var166)->values[2]=var172;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "`. Signature is `";
var178 = standard___standard__NativeString___to_s_with_length(var177, 17l);
var176 = var178;
varonce175 = var176;
}
((struct instance_standard__NativeArray*)var166)->values[4]=var176;
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "`.";
var182 = standard___standard__NativeString___to_s_with_length(var181, 2l);
var180 = var182;
varonce179 = var180;
}
((struct instance_standard__NativeArray*)var166)->values[6]=var180;
} else {
var166 = varonce165;
varonce165 = NULL;
}
{
var183 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
if (var183 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1898);
fatal_exit(1);
} else {
var184 = ((long(*)(val* self))(var183->class->vft[COLOR_nit__model__MSignature__arity]))(var183); /* arity on <var183:nullable MSignature>*/
}
var185 = standard__string___Int___Object__to_s(var184);
((struct instance_standard__NativeArray*)var166)->values[1]=var185;
{
var186 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
var187 = standard__string___Int___Object__to_s(var186);
((struct instance_standard__NativeArray*)var166)->values[3]=var187;
{
var188 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var166)->values[5]=var188;
{
var189 = ((val*(*)(val* self))(var166->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var166); /* native_to_s on <var166:NativeArray[String]>*/
}
varonce165 = var166;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var189); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
var_i = 0l;
{
var190 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:MSignature>*/
}
var_191 = var190;
{
var192 = ((val*(*)(val* self))(var_191->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_191); /* iterator on <var_191:Array[MParameter]>*/
}
var_193 = var192;
for(;;) {
{
var194 = ((short int(*)(val* self))(var_193->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_193); /* is_ok on <var_193:ArrayIterator[MParameter]>*/
}
if (var194){
{
var195 = ((val*(*)(val* self))(var_193->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_193); /* item on <var_193:ArrayIterator[MParameter]>*/
}
var_sp = var195;
{
var196 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
if (var196 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1904);
fatal_exit(1);
} else {
var197 = ((val*(*)(val* self))(var196->class->vft[COLOR_nit__model__MSignature__mparameters]))(var196); /* mparameters on <var196:nullable MSignature>*/
}
{
var198 = ((val*(*)(val* self, long p0))(var197->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var197, var_i); /* [] on <var197:Array[MParameter]>*/
}
var_p = var198;
{
var199 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MParameter__mtype]))(var_p); /* mtype on <var_p:MParameter>*/
}
{
var200 = ((val*(*)(val* self))(var_sp->class->vft[COLOR_nit__model__MParameter__mtype]))(var_sp); /* mtype on <var_sp:MParameter>*/
}
{
var201 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__is_subtype]))(var_v, var199, var200); /* is_subtype on <var_v:TypeVisitor>*/
}
var202 = !var201;
if (var202){
if (unlikely(varonce203==NULL)) {
var204 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "Type Error: expected argument #";
var208 = standard___standard__NativeString___to_s_with_length(var207, 31l);
var206 = var208;
varonce205 = var206;
}
((struct instance_standard__NativeArray*)var204)->values[0]=var206;
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = " of type `";
var212 = standard___standard__NativeString___to_s_with_length(var211, 10l);
var210 = var212;
varonce209 = var210;
}
((struct instance_standard__NativeArray*)var204)->values[2]=var210;
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = "`, got implicit argument `";
var216 = standard___standard__NativeString___to_s_with_length(var215, 26l);
var214 = var216;
varonce213 = var214;
}
((struct instance_standard__NativeArray*)var204)->values[4]=var214;
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = "` of type `";
var220 = standard___standard__NativeString___to_s_with_length(var219, 11l);
var218 = var220;
varonce217 = var218;
}
((struct instance_standard__NativeArray*)var204)->values[6]=var218;
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "`. Signature is ";
var224 = standard___standard__NativeString___to_s_with_length(var223, 16l);
var222 = var224;
varonce221 = var222;
}
((struct instance_standard__NativeArray*)var204)->values[8]=var222;
} else {
var204 = varonce203;
varonce203 = NULL;
}
var225 = standard__string___Int___Object__to_s(var_i);
((struct instance_standard__NativeArray*)var204)->values[1]=var225;
{
var226 = ((val*(*)(val* self))(var_sp->class->vft[COLOR_nit__model__MParameter__mtype]))(var_sp); /* mtype on <var_sp:MParameter>*/
}
{
var227 = ((val*(*)(val* self))(var226->class->vft[COLOR_standard__string__Object__to_s]))(var226); /* to_s on <var226:MType>*/
}
((struct instance_standard__NativeArray*)var204)->values[3]=var227;
{
var228 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model_base__MEntity__name]))(var_p); /* name on <var_p:MParameter>*/
}
((struct instance_standard__NativeArray*)var204)->values[5]=var228;
{
var229 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MParameter__mtype]))(var_p); /* mtype on <var_p:MParameter>*/
}
{
var230 = ((val*(*)(val* self))(var229->class->vft[COLOR_standard__string__Object__to_s]))(var229); /* to_s on <var229:MType>*/
}
((struct instance_standard__NativeArray*)var204)->values[7]=var230;
{
var231 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var204)->values[9]=var231;
{
var232 = ((val*(*)(val* self))(var204->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var204); /* native_to_s on <var204:NativeArray[String]>*/
}
varonce203 = var204;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var232); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var235 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var235)) {
var_class_name238 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name238);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var239 = var_i + 1l;
var233 = var239;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
}
var_i = var233;
{
((void(*)(val* self))(var_193->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_193); /* next on <var_193:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label240;
}
}
BREAK_label240: (void)0;
{
((void(*)(val* self))(var_193->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_193); /* finish on <var_193:ArrayIterator[MParameter]>*/
}
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ASuperExpr>*/
}
RET_LABEL:;
}
/* method typing#ANewExpr#callsite for (self: ANewExpr): nullable CallSite */
val* nit__typing___ANewExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite= for (self: ANewExpr, nullable CallSite) */
void nit__typing___ANewExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ANewExpr___callsite].val = p0; /* _callsite on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing#ANewExpr#recvtype for (self: ANewExpr): nullable MClassType */
val* nit__typing___ANewExpr___recvtype(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#recvtype= for (self: ANewExpr, nullable MClassType) */
void nit__typing___ANewExpr___recvtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val = p0; /* _recvtype on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: ANewExpr, TypeVisitor) */
void nit__typing___ANewExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AType */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var19 /* : String */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
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
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : MClass */;
val* var48 /* : MClassKind */;
val* var_kind /* var kind: MClassKind */;
val* var49 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : String */;
val* var_name /* var name: String */;
val* var_node /* var node: ANode */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
val* var57 /* : TKwnew */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
short int var62 /* : Bool */;
val* var63 /* : Sys */;
val* var64 /* : MClassKind */;
short int var65 /* : Bool */;
val* var67 /* : NativeArray[String] */;
static val* varonce66;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : AExprs */;
val* var84 /* : ANodes[AExpr] */;
short int var85 /* : Bool */;
val* var86 /* : AExprs */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
val* var91 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : MMethod */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : Sys */;
val* var98 /* : MClassKind */;
short int var99 /* : Bool */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
val* var105 /* : FlatString */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : FlatString */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : FlatString */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var117 /* : MSignature */;
val* var118 /* : nullable MType */;
val* var119 /* : nullable MType */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : MMethod */;
val* var123 /* : MClass */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
val* var127 /* : NativeArray[String] */;
static val* varonce126;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : FlatString */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : FlatString */;
val* var136 /* : String */;
val* var137 /* : AExprs */;
val* var138 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var139 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_type]))(self); /* n_type on <self:ANewExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__resolve_mtype]))(var_v, var); /* resolve_mtype on <var_v:TypeVisitor>*/
}
var_recvtype = var1;
if (var_recvtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recvtype, ((val*)NULL)); /* == on <var_recvtype:nullable MType>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
/* <var_recvtype:nullable MType(MType)> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var4 = 0;
} else {
var4 = var_recvtype->type->type_table[cltype] == idtype;
}
var5 = !var4;
if (var5){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype7 = type_nit__MNullableType.color;
idtype8 = type_nit__MNullableType.id;
if(cltype7 >= var_recvtype->type->table_size) {
var6 = 0;
} else {
var6 = var_recvtype->type->type_table[cltype7] == idtype8;
}
if (var6){
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Type Error: cannot instantiate the nullable type `";
var13 = standard___standard__NativeString___to_s_with_length(var12, 50l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "`.";
var17 = standard___standard__NativeString___to_s_with_length(var16, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MNullableType)>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var19); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
/* <var_recvtype:nullable MType(MType)> isa MFormalType */
cltype21 = type_nit__MFormalType.color;
idtype22 = type_nit__MFormalType.id;
if(cltype21 >= var_recvtype->type->table_size) {
var20 = 0;
} else {
var20 = var_recvtype->type->type_table[cltype21] == idtype22;
}
if (var20){
if (unlikely(varonce23==NULL)) {
var24 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Type Error: cannot instantiate the formal type `";
var28 = standard___standard__NativeString___to_s_with_length(var27, 48l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "`.";
var32 = standard___standard__NativeString___to_s_with_length(var31, 2l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var24)->values[2]=var30;
} else {
var24 = varonce23;
varonce23 = NULL;
}
{
var33 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MFormalType)>*/
}
((struct instance_standard__NativeArray*)var24)->values[1]=var33;
{
var34 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var34); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
if (unlikely(varonce35==NULL)) {
var36 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "Type Error: cannot instantiate the type `";
var40 = standard___standard__NativeString___to_s_with_length(var39, 41l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "`.";
var44 = standard___standard__NativeString___to_s_with_length(var43, 2l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var36)->values[2]=var42;
} else {
var36 = varonce35;
varonce35 = NULL;
}
{
var45 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var36)->values[1]=var45;
{
var46 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var46); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ANewExpr__recvtype_61d]))(self, var_recvtype); /* recvtype= on <self:ANewExpr>*/
}
{
var47 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_recvtype); /* mclass on <var_recvtype:nullable MType(MClassType)>*/
}
{
var48 = ((val*(*)(val* self))(var47->class->vft[COLOR_nit__model__MClass__kind]))(var47); /* kind on <var47:MClass>*/
}
var_kind = var48;
{
var49 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_id]))(self); /* n_id on <self:ANewExpr>*/
}
var_nid = var49;
if (var_nid == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
var51 = ((short int(*)(val* self, val* p0))(var_nid->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nid, ((val*)NULL)); /* != on <var_nid:nullable TId>*/
var50 = var51;
}
if (var50){
{
var52 = ((val*(*)(val* self))(var_nid->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_nid); /* text on <var_nid:nullable TId(TId)>*/
}
var_name = var52;
var_node = var_nid;
} else {
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "new";
var56 = standard___standard__NativeString___to_s_with_length(var55, 3l);
var54 = var56;
varonce53 = var54;
}
var_name = var54;
{
var57 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_kwnew]))(self); /* n_kwnew on <self:ANewExpr>*/
}
var_node = var57;
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "intern";
var61 = standard___standard__NativeString___to_s_with_length(var60, 6l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var59); /* == on <var_name:String>*/
}
if (var62){
var63 = glob_sys;
{
var64 = ((val*(*)(val* self))(var63->class->vft[COLOR_nit__model__Sys__concrete_kind]))(var63); /* concrete_kind on <var63:Sys>*/
}
{
var65 = ((short int(*)(val* self, val* p0))(var_kind->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_kind, var64); /* != on <var_kind:MClassKind>*/
}
if (var65){
if (unlikely(varonce66==NULL)) {
var67 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "Type Error: cannot instantiate ";
var71 = standard___standard__NativeString___to_s_with_length(var70, 31l);
var69 = var71;
varonce68 = var69;
}
((struct instance_standard__NativeArray*)var67)->values[0]=var69;
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = " ";
var75 = standard___standard__NativeString___to_s_with_length(var74, 1l);
var73 = var75;
varonce72 = var73;
}
((struct instance_standard__NativeArray*)var67)->values[2]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = ".";
var79 = standard___standard__NativeString___to_s_with_length(var78, 1l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var67)->values[4]=var77;
} else {
var67 = varonce66;
varonce66 = NULL;
}
{
var80 = ((val*(*)(val* self))(var_kind->class->vft[COLOR_standard__string__Object__to_s]))(var_kind); /* to_s on <var_kind:MClassKind>*/
}
((struct instance_standard__NativeArray*)var67)->values[1]=var80;
{
var81 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var67)->values[3]=var81;
{
var82 = ((val*(*)(val* self))(var67->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var67); /* native_to_s on <var67:NativeArray[String]>*/
}
varonce66 = var67;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var82); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var83 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_args]))(self); /* n_args on <self:ANewExpr>*/
}
{
var84 = ((val*(*)(val* self))(var83->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var83); /* n_exprs on <var83:AExprs>*/
}
{
var85 = ((short int(*)(val* self))(var84->class->vft[COLOR_standard__abstract_collection__Collection__not_empty]))(var84); /* not_empty on <var84:ANodes[AExpr]>*/
}
if (var85){
{
var86 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_args]))(self); /* n_args on <self:ANewExpr>*/
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Type Error: the intern constructor expects no arguments.";
var90 = standard___standard__NativeString___to_s_with_length(var89, 56l);
var88 = var90;
varonce87 = var88;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, var86, var88); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_recvtype); /* mtype= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
{
var91 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__get_method]))(var_v, var_node, var_recvtype, var_name, 0); /* get_method on <var_v:TypeVisitor>*/
}
var_callsite = var91;
if (var_callsite == NULL) {
var92 = 1; /* is null */
} else {
var92 = 0; /* arg is null but recv is not */
}
if (0) {
var93 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, ((val*)NULL)); /* == on <var_callsite:nullable CallSite>*/
var92 = var93;
}
if (var92){
goto RET_LABEL;
} else {
}
{
var94 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var95 = ((short int(*)(val* self))(var94->class->vft[COLOR_nit__model__MMethod__is_new]))(var94); /* is_new on <var94:MMethod>*/
}
var96 = !var95;
if (var96){
var97 = glob_sys;
{
var98 = ((val*(*)(val* self))(var97->class->vft[COLOR_nit__model__Sys__concrete_kind]))(var97); /* concrete_kind on <var97:Sys>*/
}
{
var99 = ((short int(*)(val* self, val* p0))(var_kind->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_kind, var98); /* != on <var_kind:MClassKind>*/
}
if (var99){
if (unlikely(varonce100==NULL)) {
var101 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "Type Error: cannot instantiate ";
var105 = standard___standard__NativeString___to_s_with_length(var104, 31l);
var103 = var105;
varonce102 = var103;
}
((struct instance_standard__NativeArray*)var101)->values[0]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = " `";
var109 = standard___standard__NativeString___to_s_with_length(var108, 2l);
var107 = var109;
varonce106 = var107;
}
((struct instance_standard__NativeArray*)var101)->values[2]=var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "`.";
var113 = standard___standard__NativeString___to_s_with_length(var112, 2l);
var111 = var113;
varonce110 = var111;
}
((struct instance_standard__NativeArray*)var101)->values[4]=var111;
} else {
var101 = varonce100;
varonce100 = NULL;
}
{
var114 = ((val*(*)(val* self))(var_kind->class->vft[COLOR_standard__string__Object__to_s]))(var_kind); /* to_s on <var_kind:MClassKind>*/
}
((struct instance_standard__NativeArray*)var101)->values[1]=var114;
{
var115 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var101)->values[3]=var115;
{
var116 = ((val*(*)(val* self))(var101->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var116); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var_recvtype); /* mtype= on <self:ANewExpr>*/
}
} else {
{
var117 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_callsite); /* msignature on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var118 = ((val*(*)(val* self))(var117->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var117); /* return_mtype on <var117:MSignature>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var118); /* mtype= on <self:ANewExpr>*/
}
{
var119 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:ANewExpr>*/
}
if (var119 == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (0) {
var121 = ((short int(*)(val* self, val* p0))(var119->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var119, ((val*)NULL)); /* != on <var119:nullable MType>*/
var120 = var121;
}
if (unlikely(!var120)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1982);
fatal_exit(1);
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__ANewExpr__callsite_61d]))(self, var_callsite); /* callsite= on <self:ANewExpr>*/
}
{
var122 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var123 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_recvtype); /* mclass on <var_recvtype:nullable MType(MClassType)>*/
}
{
var124 = ((short int(*)(val* self, val* p0))(var122->class->vft[COLOR_nit__model__MMethod__is_init_for]))(var122, var123); /* is_init_for on <var122:MMethod>*/
}
var125 = !var124;
if (var125){
if (unlikely(varonce126==NULL)) {
var127 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "Error: `";
var131 = standard___standard__NativeString___to_s_with_length(var130, 8l);
var129 = var131;
varonce128 = var129;
}
((struct instance_standard__NativeArray*)var127)->values[0]=var129;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "` is not a constructor.";
var135 = standard___standard__NativeString___to_s_with_length(var134, 23l);
var133 = var135;
varonce132 = var133;
}
((struct instance_standard__NativeArray*)var127)->values[2]=var133;
} else {
var127 = varonce126;
varonce126 = NULL;
}
((struct instance_standard__NativeArray*)var127)->values[1]=var_name;
{
var136 = ((val*(*)(val* self))(var127->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var127); /* native_to_s on <var127:NativeArray[String]>*/
}
varonce126 = var127;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var136); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var137 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_args]))(self); /* n_args on <self:ANewExpr>*/
}
{
var138 = ((val*(*)(val* self))(var137->class->vft[COLOR_nit__typing__AExprs__to_a]))(var137); /* to_a on <var137:AExprs>*/
}
var_args = var138;
{
var139 = ((short int(*)(val* self, val* p0, val* p1))(var_callsite->class->vft[COLOR_nit__typing__CallSite__check_signature]))(var_callsite, var_v, var_args); /* check_signature on <var_callsite:nullable CallSite(CallSite)>*/
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* nit__typing___AAttrFormExpr___mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void nit__typing___AAttrFormExpr___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val = p0; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type for (self: AAttrFormExpr): nullable MType */
val* nit__typing___AAttrFormExpr___attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type= for (self: AAttrFormExpr, nullable MType) */
void nit__typing___AAttrFormExpr___attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val = p0; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void nit__typing___AAttrFormExpr___resolve_property(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : TAttrid */;
val* var_node /* var node: TAttrid */;
val* var5 /* : String */;
val* var_name /* var name: String */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var17 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var18 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : ModelBuilder */;
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
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var37 /* : String */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : MModule */;
val* var42 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var48 /* : nullable MType */;
val* var_attr_type /* var attr_type: nullable MType */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : AExpr */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
val* var55 /* : MType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr]))(self); /* n_expr on <self:AAttrFormExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:TypeVisitor>*/
}
var_recvtype = var1;
if (var_recvtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recvtype, ((val*)NULL)); /* == on <var_recvtype:nullable MType>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_id]))(self); /* n_id on <self:AAttrFormExpr>*/
}
var_node = var4;
{
var5 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_node); /* text on <var_node:TAttrid>*/
}
var_name = var5;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var6 = 0;
} else {
var6 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var6){
if (unlikely(varonce==NULL)) {
var7 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Error: attribute `";
var11 = standard___standard__NativeString___to_s_with_length(var10, 18l);
var9 = var11;
varonce8 = var9;
}
((struct instance_standard__NativeArray*)var7)->values[0]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "` access on `null`.";
var15 = standard___standard__NativeString___to_s_with_length(var14, 19l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var7)->values[2]=var13;
} else {
var7 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var7)->values[1]=var_name;
{
var16 = ((val*(*)(val* self))(var7->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, var_node, var16); /* error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var17 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(var_v, var_recvtype); /* anchor_to on <var_v:TypeVisitor>*/
}
var_unsafe_type = var17;
{
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, var_node, var_unsafe_type, var_name); /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/
}
var_mproperty = var18;
if (var_mproperty == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var_mproperty->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mproperty, ((val*)NULL)); /* == on <var_mproperty:nullable MProperty>*/
var19 = var20;
}
if (var19){
{
var21 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(var_v); /* modelbuilder on <var_v:TypeVisitor>*/
}
if (unlikely(varonce22==NULL)) {
var23 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Error: attribute `";
var27 = standard___standard__NativeString___to_s_with_length(var26, 18l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "` does not exist in `";
var31 = standard___standard__NativeString___to_s_with_length(var30, 21l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var23)->values[2]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "`.";
var35 = standard___standard__NativeString___to_s_with_length(var34, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var23)->values[4]=var33;
} else {
var23 = varonce22;
varonce22 = NULL;
}
((struct instance_standard__NativeArray*)var23)->values[1]=var_name;
{
var36 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var23)->values[3]=var36;
{
var37 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
((void(*)(val* self, val* p0, val* p1))(var21->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var21, var_node, var37); /* error on <var21:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype39 = type_nit__MAttribute.color;
idtype40 = type_nit__MAttribute.id;
if(cltype39 >= var_mproperty->type->table_size) {
var38 = 0;
} else {
var38 = var_mproperty->type->type_table[cltype39] == idtype40;
}
if (unlikely(!var38)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 2024);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__mproperty_61d]))(self, var_mproperty); /* mproperty= on <self:AAttrFormExpr>*/
}
{
var41 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__mmodule]))(var_v); /* mmodule on <var_v:TypeVisitor>*/
}
{
var42 = ((val*(*)(val* self, val* p0, val* p1))(var_mproperty->class->vft[COLOR_nit__model__MProperty__lookup_definitions]))(var_mproperty, var41, var_unsafe_type); /* lookup_definitions on <var_mproperty:nullable MProperty(MAttribute)>*/
}
var_mpropdefs = var42;
{
var43 = ((long(*)(val* self))(var_mpropdefs->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_mpropdefs); /* length on <var_mpropdefs:Array[MAttributeDef]>*/
}
{
{ /* Inline kernel#Int#== (var43,1l) on <var43:Int> */
var46 = var43 == 1l;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (unlikely(!var44)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 2028);
fatal_exit(1);
}
{
var47 = ((val*(*)(val* self))(var_mpropdefs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_mpropdefs); /* first on <var_mpropdefs:Array[MAttributeDef]>*/
}
var_mpropdef = var47;
{
var48 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var_mpropdef); /* static_mtype on <var_mpropdef:MAttributeDef>*/
}
var_attr_type = var48;
if (var_attr_type == NULL) {
var49 = 1; /* is null */
} else {
var49 = 0; /* arg is null but recv is not */
}
if (0) {
var50 = ((short int(*)(val* self, val* p0))(var_attr_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_attr_type, ((val*)NULL)); /* == on <var_attr_type:nullable MType>*/
var49 = var50;
}
if (var49){
goto RET_LABEL;
} else {
}
{
var51 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr]))(self); /* n_expr on <self:AAttrFormExpr>*/
}
/* <var51:AExpr> isa ASelfExpr */
cltype53 = type_nit__ASelfExpr.color;
idtype54 = type_nit__ASelfExpr.id;
if(cltype53 >= var51->type->table_size) {
var52 = 0;
} else {
var52 = var51->type->type_table[cltype53] == idtype54;
}
{
var55 = ((val*(*)(val* self, val* p0, val* p1, short int p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__resolve_for]))(var_v, var_attr_type, var_recvtype, var52); /* resolve_for on <var_v:TypeVisitor>*/
}
var_attr_type = var55;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__attr_type_61d]))(self, var_attr_type); /* attr_type= on <self:AAttrFormExpr>*/
}
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: AAttrExpr, TypeVisitor) */
void nit__typing___AAttrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__resolve_property]))(self, var_v); /* resolve_property on <self:AAttrExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__attr_type]))(self); /* attr_type on <self:AAttrExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var); /* mtype= on <self:AAttrExpr>*/
}
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void nit__typing___AAttrAssignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__resolve_property]))(self, var_v); /* resolve_property on <self:AAttrAssignExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__attr_type]))(self); /* attr_type on <self:AAttrAssignExpr>*/
}
var_mtype = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value]))(self); /* n_value on <self:AAttrAssignExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr_subtype]))(var_v, var1, var_mtype); /* visit_expr_subtype on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AAttrAssignExpr>*/
}
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void nit__typing___AAttrReassignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__resolve_property]))(self, var_v); /* resolve_property on <self:AAttrReassignExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__attr_type]))(self); /* attr_type on <self:AAttrReassignExpr>*/
}
var_mtype = var;
if (var_mtype == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__typing__AReassignFormExpr__resolve_reassignment]))(self, var_v, var_mtype, var_mtype); /* resolve_reassignment on <self:AAttrReassignExpr>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:AAttrReassignExpr>*/
}
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void nit__typing___AIssetAttrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
val* var5 /* : MType */;
val* var_bound /* var bound: MType */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : TAttrid */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : nullable MType */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__resolve_property]))(self, var_v); /* resolve_property on <self:AIssetAttrExpr>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__attr_type]))(self); /* attr_type on <self:AIssetAttrExpr>*/
}
var_mtype = var;
if (var_mtype == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr]))(self); /* n_expr on <self:AIssetAttrExpr>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__typing__AExpr__mtype]))(var3); /* mtype on <var3:AExpr>*/
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 2077);
fatal_exit(1);
}
var_recvtype = var4;
{
var5 = ((val*(*)(val* self, val* p0, val* p1, short int p2))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__resolve_for]))(var_v, var_mtype, var_recvtype, 0); /* resolve_for on <var_v:TypeVisitor>*/
}
var_bound = var5;
/* <var_bound:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var6 = 0;
} else {
var6 = var_bound->type->type_table[cltype] == idtype;
}
if (var6){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_id]))(self); /* n_id on <self:AIssetAttrExpr>*/
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "Type Error: `isset` on a nullable attribute.";
var10 = standard___standard__NativeString___to_s_with_length(var9, 44l);
var8 = var10;
varonce = var8;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, var7, var8); /* error on <var_v:TypeVisitor>*/
}
} else {
}
{
var11 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__type_bool]))(var_v, self); /* type_bool on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing__AExpr__mtype_61d]))(self, var11); /* mtype= on <self:AIssetAttrExpr>*/
}
RET_LABEL:;
}
/* method typing#AVarargExpr#accept_typing for (self: AVarargExpr, TypeVisitor) */
void nit__typing___AVarargExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Syntax Error: unexpected `...`.";
var2 = standard___standard__NativeString___to_s_with_length(var1, 31l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__error]))(var_v, self, var); /* error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void nit__typing___ADebugTypeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_expr /* var expr: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var_unsafe /* var unsafe: MType */;
val* var5 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var6 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
val* var_umtype /* var umtype: MType */;
val* var12 /* : ModelBuilder */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var17 /* : NativeArray[String] */;
static val* varonce16;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADebugTypeExpr__n_expr]))(self); /* n_expr on <self:ADebugTypeExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__visit_expr]))(var_v, var); /* visit_expr on <var_v:TypeVisitor>*/
}
var_expr = var1;
if (var_expr == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_expr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_expr, ((val*)NULL)); /* == on <var_expr:nullable MType>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(var_v, var_expr); /* anchor_to on <var_v:TypeVisitor>*/
}
var_unsafe = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADebugTypeExpr__n_type]))(self); /* n_type on <self:ADebugTypeExpr>*/
}
var_ntype = var5;
{
var6 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__resolve_mtype]))(var_v, var_ntype); /* resolve_mtype on <var_v:TypeVisitor>*/
}
var_mtype = var6;
if (var_mtype == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mtype, ((val*)NULL)); /* != on <var_mtype:nullable MType>*/
var8 = var9;
}
var_ = var8;
if (var8){
{
var10 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mtype, var_expr); /* != on <var_mtype:nullable MType(MType)>*/
}
var7 = var10;
} else {
var7 = var_;
}
if (var7){
{
var11 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__anchor_to]))(var_v, var_mtype); /* anchor_to on <var_v:TypeVisitor>*/
}
var_umtype = var11;
{
var12 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder]))(var_v); /* modelbuilder on <var_v:TypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "debug";
var15 = standard___standard__NativeString___to_s_with_length(var14, 5l);
var13 = var15;
varonce = var13;
}
if (unlikely(varonce16==NULL)) {
var17 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "Found type ";
var21 = standard___standard__NativeString___to_s_with_length(var20, 11l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " (-> ";
var25 = standard___standard__NativeString___to_s_with_length(var24, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var17)->values[2]=var23;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "), expected ";
var29 = standard___standard__NativeString___to_s_with_length(var28, 12l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var17)->values[4]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " (-> ";
var33 = standard___standard__NativeString___to_s_with_length(var32, 5l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var17)->values[6]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ")";
var37 = standard___standard__NativeString___to_s_with_length(var36, 1l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var17)->values[8]=var35;
} else {
var17 = varonce16;
varonce16 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_expr->class->vft[COLOR_standard__string__Object__to_s]))(var_expr); /* to_s on <var_expr:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var17)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var_unsafe->class->vft[COLOR_standard__string__Object__to_s]))(var_unsafe); /* to_s on <var_unsafe:MType>*/
}
((struct instance_standard__NativeArray*)var17)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var17)->values[5]=var40;
{
var41 = ((val*(*)(val* self))(var_umtype->class->vft[COLOR_standard__string__Object__to_s]))(var_umtype); /* to_s on <var_umtype:MType>*/
}
((struct instance_standard__NativeArray*)var17)->values[7]=var41;
{
var42 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce16 = var17;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var12->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var12, self, var13, var42); /* warning on <var12:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__typing__AExpr__is_typed_61d]))(self, 1); /* is_typed= on <self:ADebugTypeExpr>*/
}
RET_LABEL:;
}
