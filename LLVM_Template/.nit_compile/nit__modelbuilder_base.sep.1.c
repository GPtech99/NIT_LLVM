#include "nit__modelbuilder_base.sep.0.h"
/* method modelbuilder_base#ToolContext#modelbuilder for (self: ToolContext): ModelBuilder */
val* nit__modelbuilder_base___ToolContext___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder_real]))(self); /* modelbuilder_real on <self:ToolContext>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 36);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ToolContext#modelbuilder_real for (self: ToolContext): nullable ModelBuilder */
val* nit__modelbuilder_base___ToolContext___modelbuilder_real(val* self) {
val* var /* : nullable ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ToolContext#modelbuilder_real= for (self: ToolContext, nullable ModelBuilder) */
void nit__modelbuilder_base___ToolContext___modelbuilder_real_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__ToolContext___modelbuilder_real].val = p0; /* _modelbuilder_real on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#model for (self: ModelBuilder): Model */
val* nit___nit__ModelBuilder___model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#model= for (self: ModelBuilder, Model) */
void nit___nit__ModelBuilder___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val = p0; /* _model on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#toolcontext for (self: ModelBuilder): ToolContext */
val* nit___nit__ModelBuilder___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#toolcontext= for (self: ModelBuilder, ToolContext) */
void nit___nit__ModelBuilder___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val = p0; /* _toolcontext on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#init for (self: ModelBuilder) */
void nit___nit__ModelBuilder___standard__kernel__Object__init(val* self) {
val* var /* : ToolContext */;
val* var1 /* : nullable ModelBuilder */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : ToolContext */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder_real]))(var); /* modelbuilder_real on <var:ToolContext>*/
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable ModelBuilder>*/
var2 = var3;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 54);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder_real_61d]))(var4, self); /* modelbuilder_real= on <var4:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#try_get_mclass_by_name for (self: ModelBuilder, ANode, MModule, String): nullable MClass */
val* nit___nit__ModelBuilder___try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MClass */;
val* var_anode /* var anode: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_res /* var res: nullable MClass */;
val* var_ /* var : Array[MClass] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[MClass] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var9 /* : POSetElement[MModule] */;
val* var10 /* : MModule */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MModule */;
val* var14 /* : MVisibility */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : NativeArray[String] */;
static val* varonce;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
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
val* var38 /* : String */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__model__Model__get_mclasses_by_name]))(var1, var_name); /* get_mclasses_by_name on <var1:Model>*/
}
var_classes = var2;
if (var_classes == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_classes->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_classes, ((val*)NULL)); /* == on <var_classes:nullable Array[MClass]>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
var_ = var_classes;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClass]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:ArrayIterator[MClass]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:ArrayIterator[MClass]>*/
}
var_mclass = var8;
{
var9 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var10 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var_mclass); /* intro_mmodule on <var_mclass:MClass>*/
}
{
var11 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_poset__POSetElement___60d_61d]))(var9, var10); /* <= on <var9:POSetElement[MModule]>*/
}
var12 = !var11;
if (var12){
goto BREAK_label;
} else {
}
{
var13 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var_mclass); /* intro_mmodule on <var_mclass:MClass>*/
}
{
var14 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__visibility]))(var_mclass); /* visibility on <var_mclass:MClass>*/
}
{
var15 = ((short int(*)(val* self, val* p0, val* p1))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__is_visible]))(var_mmodule, var13, var14); /* is_visible on <var_mmodule:MModule>*/
}
var16 = !var15;
if (var16){
goto BREAK_label;
} else {
}
if (var_res == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable MClass>*/
var17 = var18;
}
if (var17){
var_res = var_mclass;
} else {
if (unlikely(varonce==NULL)) {
var19 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Error: ambiguous class name `";
var23 = standard___standard__NativeString___to_s_with_length(var22, 29l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "`; conflict between `";
var27 = standard___standard__NativeString___to_s_with_length(var26, 21l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var19)->values[2]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "` and `";
var31 = standard___standard__NativeString___to_s_with_length(var30, 7l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var19)->values[4]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "`.";
var35 = standard___standard__NativeString___to_s_with_length(var34, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var19)->values[6]=var33;
} else {
var19 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var19)->values[1]=var_name;
{
var36 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mclass); /* full_name on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var19)->values[3]=var36;
{
var37 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_res); /* full_name on <var_res:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var19)->values[5]=var37;
{
var38 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce = var19;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_anode, var38); /* error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:ArrayIterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#get_mclass_by_name for (self: ModelBuilder, ANode, MModule, String): nullable MClass */
val* nit___nit__ModelBuilder___get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_name /* var name: String */;
val* var1 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
var_node = p0;
var_mmodule = p1;
var_name = p2;
{
var1 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(self, var_node, var_mmodule, var_name); /* try_get_mclass_by_name on <self:ModelBuilder>*/
}
var_mclass = var1;
if (var_mclass == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var2 = var3;
}
if (var2){
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "Type Error: missing primitive class `";
var8 = standard___standard__NativeString___to_s_with_length(var7, 37l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "\'.";
var12 = standard___standard__NativeString___to_s_with_length(var11, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var4)->values[1]=var_name;
{
var13 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_node, var13); /* error on <self:ModelBuilder>*/
}
} else {
}
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2 for (self: ModelBuilder, ANode, MModule, MType, String): nullable MProperty */
val* nit___nit__ModelBuilder___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MProperty] */;
val* var_props /* var props: nullable Array[MProperty] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var6 /* : nullable Object */;
val* var_cache /* var cache: nullable MProperty */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_res /* var res: nullable MProperty */;
val* var_ress /* var ress: nullable Array[MProperty] */;
val* var_ /* var : Array[MProperty] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MProperty] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MClassDef */;
val* var16 /* : MModule */;
val* var17 /* : MVisibility */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
int cltype;
int idtype;
short int var_23 /* var : Bool */;
short int var24 /* : Bool */;
short int var_25 /* var : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
val* var32 /* : MClassDef */;
val* var33 /* : MClass */;
val* var34 /* : MClass */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var_44 /* var : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
short int var_48 /* var : Bool */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
short int var51 /* : Bool */;
val* var52 /* : MClassDef */;
val* var53 /* : MClassType */;
val* var_restype /* var restype: MClassType */;
val* var54 /* : MClassDef */;
val* var55 /* : MClassType */;
val* var_mproptype /* var mproptype: MClassType */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : Array[MProperty] */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var_65 /* var : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
short int var_69 /* var : Bool */;
short int var70 /* : Bool */;
val* var71 /* : MClassDef */;
val* var72 /* : MClassType */;
val* var_restype73 /* var restype: MClassType */;
val* var74 /* : Array[MProperty] */;
val* var_ress2 /* var ress2: Array[MProperty] */;
val* var_75 /* var : Array[MProperty] */;
val* var76 /* : Iterator[nullable Object] */;
val* var_77 /* var : ArrayIterator[MProperty] */;
short int var78 /* : Bool */;
val* var79 /* : nullable Object */;
val* var_mprop80 /* var mprop: MProperty */;
val* var81 /* : MClassDef */;
val* var82 /* : MClassType */;
val* var_mproptype83 /* var mproptype: MClassType */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
short int var90 /* : Bool */;
short int var_91 /* var : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
long var98 /* : Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name;
short int var104 /* : Bool */;
val* var105 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var_106 /* var : Array[MProperty] */;
val* var107 /* : Iterator[nullable Object] */;
val* var_108 /* var : ArrayIterator[MProperty] */;
short int var109 /* : Bool */;
val* var110 /* : nullable Object */;
val* var_mprop111 /* var mprop: MProperty */;
val* var112 /* : String */;
val* var114 /* : NativeArray[String] */;
static val* varonce;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : FlatString */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : FlatString */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : FlatString */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : FlatString */;
val* var136 /* : String */;
val* var137 /* : String */;
val* var138 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var_anode = p0;
var_mmodule = p1;
var_mtype = p2;
var_name = p3;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__model__Model__get_mproperties_by_name]))(var1, var_name); /* get_mproperties_by_name on <var1:Model>*/
}
var_props = var2;
if (var_props == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_props->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_props, ((val*)NULL)); /* == on <var_props:nullable Array[MProperty]>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name2_cache]))(self); /* try_get_mproperty_by_name2_cache on <self:ModelBuilder>*/
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var5->class->vft[COLOR_more_collections__HashMap3___91d_93d]))(var5, var_mmodule, var_mtype, var_name); /* [] on <var5:HashMap3[MModule, MType, String, nullable MProperty]>*/
}
var_cache = var6;
if (var_cache == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cache, ((val*)NULL)); /* != on <var_cache:nullable MProperty>*/
var7 = var8;
}
if (var7){
var = var_cache;
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
var_ress = ((val*)NULL);
var_ = var_props;
{
var9 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MProperty]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MProperty]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MProperty]>*/
}
var_mprop = var12;
{
var13 = ((short int(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__has_mproperty]))(var_mtype, var_mmodule, var_mprop); /* has_mproperty on <var_mtype:MType>*/
}
var14 = !var13;
if (var14){
goto BREAK_label;
} else {
}
{
var15 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mprop); /* intro_mclassdef on <var_mprop:MProperty>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var15); /* mmodule on <var15:MClassDef>*/
}
{
var17 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mprop); /* visibility on <var_mprop:MProperty>*/
}
{
var18 = ((short int(*)(val* self, val* p0, val* p1))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__is_visible]))(var_mmodule, var16, var17); /* is_visible on <var_mmodule:MModule>*/
}
var19 = !var18;
if (var19){
goto BREAK_label;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var22 = 0;
} else {
var22 = var_mprop->type->type_table[cltype] == idtype;
}
var_23 = var22;
if (var22){
{
var24 = ((short int(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_new]))(var_mprop); /* is_new on <var_mprop:MProperty(MMethod)>*/
}
var21 = var24;
} else {
var21 = var_23;
}
var_25 = var21;
if (var21){
/* <var_mtype:MType> isa MClassType */
cltype28 = type_nit__MClassType.color;
idtype29 = type_nit__MClassType.id;
if(cltype28 >= var_mtype->type->table_size) {
var27 = 0;
} else {
var27 = var_mtype->type->type_table[cltype28] == idtype29;
}
var30 = !var27;
var_31 = var30;
if (var30){
var26 = var_31;
} else {
{
var32 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mprop); /* intro_mclassdef on <var_mprop:MProperty(MMethod)>*/
}
{
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_nit__model__MClassDef__mclass]))(var32); /* mclass on <var32:MClassDef>*/
}
{
var34 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype); /* mclass on <var_mtype:MType(MClassType)>*/
}
{
var35 = ((short int(*)(val* self, val* p0))(var33->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var33, var34); /* != on <var33:MClass>*/
}
var26 = var35;
}
var20 = var26;
} else {
var20 = var_25;
}
if (var20){
goto BREAK_label;
} else {
}
if (var_res == NULL) {
var36 = 1; /* is null */
} else {
var36 = 0; /* arg is null but recv is not */
}
if (0) {
var37 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable MProperty>*/
var36 = var37;
}
if (var36){
var_res = var_mprop;
goto BREAK_label;
} else {
}
/* <var_res:nullable MProperty(MProperty)> isa MMethod */
cltype42 = type_nit__MMethod.color;
idtype43 = type_nit__MMethod.id;
if(cltype42 >= var_res->type->table_size) {
var41 = 0;
} else {
var41 = var_res->type->type_table[cltype42] == idtype43;
}
var_44 = var41;
if (var41){
/* <var_mprop:MProperty> isa MMethod */
cltype46 = type_nit__MMethod.color;
idtype47 = type_nit__MMethod.id;
if(cltype46 >= var_mprop->type->table_size) {
var45 = 0;
} else {
var45 = var_mprop->type->type_table[cltype46] == idtype47;
}
var40 = var45;
} else {
var40 = var_44;
}
var_48 = var40;
if (var40){
{
var49 = ((short int(*)(val* self))(var_res->class->vft[COLOR_nit__model__MMethod__is_init]))(var_res); /* is_init on <var_res:nullable MProperty(MMethod)>*/
}
var39 = var49;
} else {
var39 = var_48;
}
var_50 = var39;
if (var39){
{
var51 = ((short int(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MMethod__is_init]))(var_mprop); /* is_init on <var_mprop:MProperty(MMethod)>*/
}
var38 = var51;
} else {
var38 = var_50;
}
if (var38){
{
var52 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_res); /* intro_mclassdef on <var_res:nullable MProperty(MMethod)>*/
}
{
var53 = ((val*(*)(val* self))(var52->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var52); /* bound_mtype on <var52:MClassDef>*/
}
var_restype = var53;
{
var54 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mprop); /* intro_mclassdef on <var_mprop:MProperty(MMethod)>*/
}
{
var55 = ((val*(*)(val* self))(var54->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var54); /* bound_mtype on <var54:MClassDef>*/
}
var_mproptype = var55;
{
var56 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_mproptype->class->vft[COLOR_nit__model__MType__is_subtype]))(var_mproptype, var_mmodule, ((val*)NULL), var_restype); /* is_subtype on <var_mproptype:MClassType>*/
}
if (var56){
var_res = var_mprop;
goto BREAK_label;
} else {
}
} else {
}
if (var_ress == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
var58 = ((short int(*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ress, ((val*)NULL)); /* == on <var_ress:nullable Array[MProperty]>*/
var57 = var58;
}
if (var57){
var59 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
((void(*)(val* self))(var59->class->vft[COLOR_standard__kernel__Object__init]))(var59); /* init on <var59:Array[MProperty]>*/
}
var_ress = var59;
{
((void(*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_ress, var_res); /* add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_ress, var_mprop); /* add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label60;
}
}
BREAK_label60: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MProperty]>*/
}
if (var_ress == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
var64 = ((short int(*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ress, ((val*)NULL)); /* != on <var_ress:nullable Array[MProperty]>*/
var63 = var64;
}
var_65 = var63;
if (var63){
/* <var_res:nullable MProperty> isa MMethod */
cltype67 = type_nit__MMethod.color;
idtype68 = type_nit__MMethod.id;
if(var_res == NULL) {
var66 = 0;
} else {
if(cltype67 >= var_res->type->table_size) {
var66 = 0;
} else {
var66 = var_res->type->type_table[cltype67] == idtype68;
}
}
var62 = var66;
} else {
var62 = var_65;
}
var_69 = var62;
if (var62){
{
var70 = ((short int(*)(val* self))(var_res->class->vft[COLOR_nit__model__MMethod__is_init]))(var_res); /* is_init on <var_res:nullable MProperty(MMethod)>*/
}
var61 = var70;
} else {
var61 = var_69;
}
if (var61){
{
var71 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_res); /* intro_mclassdef on <var_res:nullable MProperty(MMethod)>*/
}
{
var72 = ((val*(*)(val* self))(var71->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var71); /* bound_mtype on <var71:MClassDef>*/
}
var_restype73 = var72;
var74 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
((void(*)(val* self))(var74->class->vft[COLOR_standard__kernel__Object__init]))(var74); /* init on <var74:Array[MProperty]>*/
}
var_ress2 = var74;
var_75 = var_ress;
{
var76 = ((val*(*)(val* self))(var_75->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_75); /* iterator on <var_75:Array[MProperty]>*/
}
var_77 = var76;
for(;;) {
{
var78 = ((short int(*)(val* self))(var_77->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_77); /* is_ok on <var_77:ArrayIterator[MProperty]>*/
}
if (var78){
{
var79 = ((val*(*)(val* self))(var_77->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_77); /* item on <var_77:ArrayIterator[MProperty]>*/
}
var_mprop80 = var79;
{
var81 = ((val*(*)(val* self))(var_mprop80->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mprop80); /* intro_mclassdef on <var_mprop80:MProperty>*/
}
{
var82 = ((val*(*)(val* self))(var81->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var81); /* bound_mtype on <var81:MClassDef>*/
}
var_mproptype83 = var82;
{
var84 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_restype73->class->vft[COLOR_nit__model__MType__is_subtype]))(var_restype73, var_mmodule, ((val*)NULL), var_mproptype83); /* is_subtype on <var_restype73:MClassType>*/
}
var85 = !var84;
if (var85){
{
((void(*)(val* self, val* p0))(var_ress2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_ress2, var_mprop80); /* add on <var_ress2:Array[MProperty]>*/
}
} else {
/* <var_mprop80:MProperty> isa MMethod */
cltype88 = type_nit__MMethod.color;
idtype89 = type_nit__MMethod.id;
if(cltype88 >= var_mprop80->type->table_size) {
var87 = 0;
} else {
var87 = var_mprop80->type->type_table[cltype88] == idtype89;
}
var90 = !var87;
var_91 = var90;
if (var90){
var86 = var_91;
} else {
{
var92 = ((short int(*)(val* self))(var_mprop80->class->vft[COLOR_nit__model__MMethod__is_init]))(var_mprop80); /* is_init on <var_mprop80:MProperty(MMethod)>*/
}
var93 = !var92;
var86 = var93;
}
if (var86){
{
((void(*)(val* self, val* p0))(var_ress2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_ress2, var_mprop80); /* add on <var_ress2:Array[MProperty]>*/
}
} else {
}
}
{
((void(*)(val* self))(var_77->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_77); /* next on <var_77:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label94;
}
}
BREAK_label94: (void)0;
{
((void(*)(val* self))(var_77->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_77); /* finish on <var_77:ArrayIterator[MProperty]>*/
}
{
var95 = ((short int(*)(val* self))(var_ress2->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_ress2); /* is_empty on <var_ress2:Array[MProperty]>*/
}
if (var95){
var_ress = ((val*)NULL);
} else {
var_ress = var_ress2;
{
((void(*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_ress, var_res); /* add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
}
} else {
}
if (var_ress == NULL) {
var96 = 0; /* is null */
} else {
var96 = 1; /* arg is null and recv is not */
}
if (0) {
var97 = ((short int(*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ress, ((val*)NULL)); /* != on <var_ress:nullable Array[MProperty]>*/
var96 = var97;
}
if (var96){
{
var98 = ((long(*)(val* self))(var_ress->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_ress); /* length on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
{
{ /* Inline kernel#Int#> (var98,1l) on <var98:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var101 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var104 = var98 > 1l;
var99 = var104;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (unlikely(!var99)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 168);
fatal_exit(1);
}
var105 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var105->class->vft[COLOR_standard__kernel__Object__init]))(var105); /* init on <var105:Array[String]>*/
}
var_s = var105;
var_106 = var_ress;
{
var107 = ((val*(*)(val* self))(var_106->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_106); /* iterator on <var_106:Array[MProperty]>*/
}
var_108 = var107;
for(;;) {
{
var109 = ((short int(*)(val* self))(var_108->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_108); /* is_ok on <var_108:ArrayIterator[MProperty]>*/
}
if (var109){
{
var110 = ((val*(*)(val* self))(var_108->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_108); /* item on <var_108:ArrayIterator[MProperty]>*/
}
var_mprop111 = var110;
{
var112 = ((val*(*)(val* self))(var_mprop111->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mprop111); /* full_name on <var_mprop111:MProperty>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_s, var112); /* add on <var_s:Array[String]>*/
}
{
((void(*)(val* self))(var_108->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_108); /* next on <var_108:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label113;
}
}
BREAK_label113: (void)0;
{
((void(*)(val* self))(var_108->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_108); /* finish on <var_108:ArrayIterator[MProperty]>*/
}
if (unlikely(varonce==NULL)) {
var114 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "Error: ambiguous property name `";
var118 = standard___standard__NativeString___to_s_with_length(var117, 32l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var114)->values[0]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "` for `";
var122 = standard___standard__NativeString___to_s_with_length(var121, 7l);
var120 = var122;
varonce119 = var120;
}
((struct instance_standard__NativeArray*)var114)->values[2]=var120;
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "`; conflict between ";
var126 = standard___standard__NativeString___to_s_with_length(var125, 20l);
var124 = var126;
varonce123 = var124;
}
((struct instance_standard__NativeArray*)var114)->values[4]=var124;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = ".";
var130 = standard___standard__NativeString___to_s_with_length(var129, 1l);
var128 = var130;
varonce127 = var128;
}
((struct instance_standard__NativeArray*)var114)->values[6]=var128;
} else {
var114 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var114)->values[1]=var_name;
{
var131 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var114)->values[3]=var131;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = " and ";
var135 = standard___standard__NativeString___to_s_with_length(var134, 5l);
var133 = var135;
varonce132 = var133;
}
{
var136 = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Collection__join]))(var_s, var133); /* join on <var_s:Array[String]>*/
}
((struct instance_standard__NativeArray*)var114)->values[5]=var136;
{
var137 = ((val*(*)(val* self))(var114->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce = var114;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_anode, var137); /* error on <self:ModelBuilder>*/
}
} else {
}
{
var138 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name2_cache]))(self); /* try_get_mproperty_by_name2_cache on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var138->class->vft[COLOR_more_collections__HashMap3___91d_93d_61d]))(var138, var_mmodule, var_mtype, var_name, var_res); /* []= on <var138:HashMap3[MModule, MType, String, nullable MProperty]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2_cache for (self: ModelBuilder): HashMap3[MModule, MType, String, nullable MProperty] */
val* nit___nit__ModelBuilder___try_get_mproperty_by_name2_cache(val* self) {
val* var /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var1 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 178);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2_cache= for (self: ModelBuilder, HashMap3[MModule, MType, String, nullable MProperty]) */
void nit___nit__ModelBuilder___try_get_mproperty_by_name2_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val = p0; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#try_get_mproperty_by_name for (self: ModelBuilder, ANode, MClassDef, String): nullable MProperty */
val* nit___nit__ModelBuilder___try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var3 /* : nullable MProperty */;
var_anode = p0;
var_mclassdef = p1;
var_name = p2;
{
var1 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
{
var2 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name2]))(self, var_anode, var1, var2, var_name); /* try_get_mproperty_by_name2 on <self:ModelBuilder>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#error for (self: ModelBuilder, nullable ANode, String) */
void nit___nit__ModelBuilder___error(val* self, val* p0, val* p1) {
val* var_n /* var n: nullable ANode */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Location */;
val* var3 /* : ToolContext */;
val* var4 /* : Message */;
var_n = p0;
var_text = p1;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n, ((val*)NULL)); /* != on <var_n:nullable ANode>*/
var = var1;
}
if (var){
{
var2 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var2;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var3, var_l, var_text); /* error on <var3:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#warning for (self: ModelBuilder, nullable ANode, String, String) */
void nit___nit__ModelBuilder___warning(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: nullable ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Location */;
val* var3 /* : ToolContext */;
val* var4 /* : nullable Message */;
var_n = p0;
var_tag = p1;
var_text = p2;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n, ((val*)NULL)); /* != on <var_n:nullable ANode>*/
var = var1;
}
if (var){
{
var2 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var2;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var3->class->vft[COLOR_nit__toolcontext__ToolContext__warning]))(var3, var_l, var_tag, var_text); /* warning on <var3:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#advice for (self: ModelBuilder, nullable ANode, String, String) */
void nit___nit__ModelBuilder___advice(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: nullable ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Location */;
val* var3 /* : ToolContext */;
val* var4 /* : nullable Message */;
var_n = p0;
var_tag = p1;
var_text = p2;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n, ((val*)NULL)); /* != on <var_n:nullable ANode>*/
var = var1;
}
if (var){
{
var2 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var2;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var3->class->vft[COLOR_nit__toolcontext__ToolContext__advice]))(var3, var_l, var_tag, var_text); /* advice on <var3:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#force_get_primitive_method for (self: ModelBuilder, nullable ANode, String, MClass, MModule): MMethod */
val* nit___nit__ModelBuilder___force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : MMethod */;
val* var_n /* var n: nullable ANode */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MClass */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable MMethod */;
val* var_res /* var res: nullable MMethod */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_l /* var l: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Location */;
val* var7 /* : ToolContext */;
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
val* var21 /* : String */;
val* var22 /* : String */;
var_n = p0;
var_name = p1;
var_recv = p2;
var_mmodule = p3;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(var_mmodule->class->vft[COLOR_nit__model__MModule__try_get_primitive_method]))(var_mmodule, var_name, var_recv); /* try_get_primitive_method on <var_mmodule:MModule>*/
}
var_res = var1;
if (var_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable MMethod>*/
var2 = var3;
}
if (var2){
var_l = ((val*)NULL);
if (var_n == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n, ((val*)NULL)); /* != on <var_n:nullable ANode>*/
var4 = var5;
}
if (var4){
{
var6 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var6;
} else {
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce==NULL)) {
var8 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Fatal Error: `";
var12 = standard___standard__NativeString___to_s_with_length(var11, 14l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "` must have a property named `";
var16 = standard___standard__NativeString___to_s_with_length(var15, 30l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var8)->values[2]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "`.";
var20 = standard___standard__NativeString___to_s_with_length(var19, 2l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var8)->values[4]=var18;
} else {
var8 = varonce;
varonce = NULL;
}
{
var21 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:MClass>*/
}
((struct instance_standard__NativeArray*)var8)->values[1]=var21;
((struct instance_standard__NativeArray*)var8)->values[3]=var_name;
{
var22 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
((void(*)(val* self, val* p0, val* p1))(var7->class->vft[COLOR_nit__toolcontext__ToolContext__fatal_error]))(var7, var_l, var22); /* fatal_error on <var7:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 222);
fatal_exit(1);
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#resolve_mtype_unchecked for (self: ModelBuilder, MModule, nullable MClassDef, AType, Bool): nullable MType */
val* nit___nit__ModelBuilder___resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
short int var_with_virtual /* var with_virtual: Bool */;
val* var1 /* : TClassid */;
val* var2 /* : String */;
val* var_name /* var name: String */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : nullable MProperty */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_prop /* var prop: nullable MVirtualTypeProp */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ANodes[AType] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : String */;
val* var23 /* : MVirtualType */;
val* var_res /* var res: MType */;
val* var24 /* : nullable TKwnullable */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : MClass */;
val* var31 /* : Array[MParameterType] */;
val* var_32 /* var : Array[MParameterType] */;
val* var33 /* : Iterator[nullable Object] */;
val* var_34 /* var : ArrayIterator[MParameterType] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_p /* var p: MParameterType */;
val* var37 /* : String */;
short int var38 /* : Bool */;
val* var39 /* : ANodes[AType] */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
val* var53 /* : nullable TKwnullable */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : MType */;
val* var58 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : ANodes[AType] */;
long var62 /* : Int */;
long var_arity /* var arity: Int */;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : String */;
long var83 /* : Int */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
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
val* var118 /* : String */;
val* var119 /* : String */;
val* var120 /* : String */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
val* var124 /* : MClassType */;
val* var125 /* : nullable TKwnullable */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var128 /* : MType */;
val* var129 /* : Array[MType] */;
val* var_mtypes /* var mtypes: Array[MType] */;
val* var130 /* : ANodes[AType] */;
val* var_131 /* var : ANodes[AType] */;
val* var132 /* : Iterator[nullable Object] */;
val* var_133 /* var : Iterator[AType] */;
short int var134 /* : Bool */;
val* var135 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var136 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
val* var140 /* : MClassType */;
val* var141 /* : nullable TKwnullable */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
val* var144 /* : MType */;
val* var146 /* : NativeArray[String] */;
static val* varonce145;
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
val* var159 /* : String */;
val* var160 /* : String */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
var_with_virtual = p3;
{
var1 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_id]))(var_ntype); /* n_id on <var_ntype:AType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__Token__text]))(var1); /* text on <var1:TClassid>*/
}
var_name = var2;
if (var_mclassdef == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mclassdef, ((val*)NULL)); /* != on <var_mclassdef:nullable MClassDef>*/
var4 = var5;
}
var_ = var4;
if (var4){
var3 = var_with_virtual;
} else {
var3 = var_;
}
if (var3){
{
var6 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name]))(self, var_ntype, var_mclassdef, var_name); /* try_get_mproperty_by_name on <self:ModelBuilder>*/
}
/* <var6:nullable MProperty> isa nullable MVirtualTypeProp */
cltype = type_nullable__nit__MVirtualTypeProp.color;
idtype = type_nullable__nit__MVirtualTypeProp.id;
if(var6 == NULL) {
var7 = 1;
} else {
if(cltype >= var6->type->table_size) {
var7 = 0;
} else {
var7 = var6->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var6 == NULL ? "null" : var6->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MVirtualTypeProp", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 238);
fatal_exit(1);
}
var_prop = var6;
if (var_prop == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_prop->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_prop, ((val*)NULL)); /* != on <var_prop:nullable MVirtualTypeProp>*/
var8 = var9;
}
if (var8){
{
var10 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(var_ntype); /* n_types on <var_ntype:AType>*/
}
{
var11 = ((short int(*)(val* self))(var10->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var10); /* is_empty on <var10:ANodes[AType]>*/
}
var12 = !var11;
if (var12){
if (unlikely(varonce==NULL)) {
var13 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Type Error: formal type `";
var17 = standard___standard__NativeString___to_s_with_length(var16, 25l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var13)->values[0]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "` cannot have formal parameters.";
var21 = standard___standard__NativeString___to_s_with_length(var20, 32l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var13)->values[2]=var19;
} else {
var13 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var13)->values[1]=var_name;
{
var22 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_ntype, var22); /* error on <self:ModelBuilder>*/
}
} else {
}
{
var23 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_nit__model__MVirtualTypeProp__mvirtualtype]))(var_prop); /* mvirtualtype on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)>*/
}
var_res = var23;
{
var24 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_kwnullable]))(var_ntype); /* n_kwnullable on <var_ntype:AType>*/
}
if (var24 == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
var26 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var24, ((val*)NULL)); /* != on <var24:nullable TKwnullable>*/
var25 = var26;
}
if (var25){
{
var27 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__as_nullable]))(var_res); /* as_nullable on <var_res:MType(MVirtualType)>*/
}
var_res = var27;
} else {
}
{
((void(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_nit__modelbuilder_base__AType__mtype_61d]))(var_ntype, var_res); /* mtype= on <var_ntype:AType>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
if (var_mclassdef == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
var29 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mclassdef, ((val*)NULL)); /* != on <var_mclassdef:nullable MClassDef>*/
var28 = var29;
}
if (var28){
{
var30 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var31 = ((val*(*)(val* self))(var30->class->vft[COLOR_nit__model__MClass__mparameters]))(var30); /* mparameters on <var30:MClass>*/
}
var_32 = var31;
{
var33 = ((val*(*)(val* self))(var_32->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_32); /* iterator on <var_32:Array[MParameterType]>*/
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:ArrayIterator[MParameterType]>*/
}
if (var35){
{
var36 = ((val*(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:ArrayIterator[MParameterType]>*/
}
var_p = var36;
{
var37 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model_base__MEntity__name]))(var_p); /* name on <var_p:MParameterType>*/
}
{
var38 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var37, var_name); /* != on <var37:String>*/
}
if (var38){
goto BREAK_label;
} else {
}
{
var39 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(var_ntype); /* n_types on <var_ntype:AType>*/
}
{
var40 = ((short int(*)(val* self))(var39->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var39); /* is_empty on <var39:ANodes[AType]>*/
}
var41 = !var40;
if (var41){
if (unlikely(varonce42==NULL)) {
var43 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Type Error: formal type `";
var47 = standard___standard__NativeString___to_s_with_length(var46, 25l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "` cannot have formal parameters.";
var51 = standard___standard__NativeString___to_s_with_length(var50, 32l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var43)->values[2]=var49;
} else {
var43 = varonce42;
varonce42 = NULL;
}
((struct instance_standard__NativeArray*)var43)->values[1]=var_name;
{
var52 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_ntype, var52); /* error on <self:ModelBuilder>*/
}
} else {
}
var_res = var_p;
{
var53 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_kwnullable]))(var_ntype); /* n_kwnullable on <var_ntype:AType>*/
}
if (var53 == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
var55 = ((short int(*)(val* self, val* p0))(var53->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var53, ((val*)NULL)); /* != on <var53:nullable TKwnullable>*/
var54 = var55;
}
if (var54){
{
var56 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__as_nullable]))(var_res); /* as_nullable on <var_res:MType(MParameterType)>*/
}
var_res = var56;
} else {
}
{
((void(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_nit__modelbuilder_base__AType__mtype_61d]))(var_ntype, var_res); /* mtype= on <var_ntype:AType>*/
}
var = var_res;
goto RET_LABEL;
BREAK_label: (void)0;
{
((void(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:ArrayIterator[MParameterType]>*/
}
} else {
goto BREAK_label57;
}
}
BREAK_label57: (void)0;
{
((void(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:ArrayIterator[MParameterType]>*/
}
} else {
}
{
var58 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(self, var_ntype, var_mmodule, var_name); /* try_get_mclass_by_name on <self:ModelBuilder>*/
}
var_mclass = var58;
if (var_mclass == NULL) {
var59 = 0; /* is null */
} else {
var59 = 1; /* arg is null and recv is not */
}
if (0) {
var60 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mclass, ((val*)NULL)); /* != on <var_mclass:nullable MClass>*/
var59 = var60;
}
if (var59){
{
var61 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(var_ntype); /* n_types on <var_ntype:AType>*/
}
{
var62 = ((long(*)(val* self))(var61->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var61); /* length on <var61:ANodes[AType]>*/
}
var_arity = var62;
{
var63 = ((long(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__arity]))(var_mclass); /* arity on <var_mclass:nullable MClass(MClass)>*/
}
{
{ /* Inline kernel#Int#!= (var_arity,var63) on <var_arity:Int> */
var66 = var_arity == var63;
var67 = !var66;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var70 = var_arity == 0l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
if (unlikely(varonce71==NULL)) {
var72 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "Type Error: `";
var76 = standard___standard__NativeString___to_s_with_length(var75, 13l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var72)->values[0]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "` is a generic class.";
var80 = standard___standard__NativeString___to_s_with_length(var79, 21l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var72)->values[2]=var78;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
var81 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__signature_to_s]))(var_mclass); /* signature_to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var72)->values[1]=var81;
{
var82 = ((val*(*)(val* self))(var72->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_ntype, var82); /* error on <self:ModelBuilder>*/
}
} else {
{
var83 = ((long(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__arity]))(var_mclass); /* arity on <var_mclass:nullable MClass(MClass)>*/
}
{
{ /* Inline kernel#Int#== (var83,0l) on <var83:Int> */
var86 = var83 == 0l;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
if (var84){
if (unlikely(varonce87==NULL)) {
var88 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "Type Error: `";
var92 = standard___standard__NativeString___to_s_with_length(var91, 13l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var88)->values[0]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "` is not a generic class.";
var96 = standard___standard__NativeString___to_s_with_length(var95, 25l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var88)->values[2]=var94;
} else {
var88 = varonce87;
varonce87 = NULL;
}
((struct instance_standard__NativeArray*)var88)->values[1]=var_name;
{
var97 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_ntype, var97); /* error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce98==NULL)) {
var99 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Type Error: expected ";
var103 = standard___standard__NativeString___to_s_with_length(var102, 21l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = " formal argument(s) for `";
var107 = standard___standard__NativeString___to_s_with_length(var106, 25l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var99)->values[2]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "`; got ";
var111 = standard___standard__NativeString___to_s_with_length(var110, 7l);
var109 = var111;
varonce108 = var109;
}
((struct instance_standard__NativeArray*)var99)->values[4]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = ".";
var115 = standard___standard__NativeString___to_s_with_length(var114, 1l);
var113 = var115;
varonce112 = var113;
}
((struct instance_standard__NativeArray*)var99)->values[6]=var113;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
var116 = ((long(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__arity]))(var_mclass); /* arity on <var_mclass:nullable MClass(MClass)>*/
}
var117 = standard__string___Int___Object__to_s(var116);
((struct instance_standard__NativeArray*)var99)->values[1]=var117;
{
var118 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__signature_to_s]))(var_mclass); /* signature_to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var99)->values[3]=var118;
var119 = standard__string___Int___Object__to_s(var_arity);
((struct instance_standard__NativeArray*)var99)->values[5]=var119;
{
var120 = ((val*(*)(val* self))(var99->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_ntype, var120); /* error on <self:ModelBuilder>*/
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var123 = var_arity == 0l;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
if (var121){
{
var124 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_mclass); /* mclass_type on <var_mclass:nullable MClass(MClass)>*/
}
var_res = var124;
{
var125 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_kwnullable]))(var_ntype); /* n_kwnullable on <var_ntype:AType>*/
}
if (var125 == NULL) {
var126 = 0; /* is null */
} else {
var126 = 1; /* arg is null and recv is not */
}
if (0) {
var127 = ((short int(*)(val* self, val* p0))(var125->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var125, ((val*)NULL)); /* != on <var125:nullable TKwnullable>*/
var126 = var127;
}
if (var126){
{
var128 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__as_nullable]))(var_res); /* as_nullable on <var_res:MType(MClassType)>*/
}
var_res = var128;
} else {
}
{
((void(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_nit__modelbuilder_base__AType__mtype_61d]))(var_ntype, var_res); /* mtype= on <var_ntype:AType>*/
}
var = var_res;
goto RET_LABEL;
} else {
var129 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self))(var129->class->vft[COLOR_standard__kernel__Object__init]))(var129); /* init on <var129:Array[MType]>*/
}
var_mtypes = var129;
{
var130 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(var_ntype); /* n_types on <var_ntype:AType>*/
}
var_131 = var130;
{
var132 = ((val*(*)(val* self))(var_131->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_131); /* iterator on <var_131:ANodes[AType]>*/
}
var_133 = var132;
for(;;) {
{
var134 = ((short int(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_133); /* is_ok on <var_133:Iterator[AType]>*/
}
if (var134){
{
var135 = ((val*(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_133); /* item on <var_133:Iterator[AType]>*/
}
var_nt = var135;
{
var136 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(self, var_mmodule, var_mclassdef, var_nt, var_with_virtual); /* resolve_mtype_unchecked on <self:ModelBuilder>*/
}
var_mt = var136;
if (var_mt == NULL) {
var137 = 1; /* is null */
} else {
var137 = 0; /* arg is null but recv is not */
}
if (0) {
var138 = ((short int(*)(val* self, val* p0))(var_mt->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mt, ((val*)NULL)); /* == on <var_mt:nullable MType>*/
var137 = var138;
}
if (var137){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_mtypes->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mtypes, var_mt); /* add on <var_mtypes:Array[MType]>*/
}
{
((void(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_133); /* next on <var_133:Iterator[AType]>*/
}
} else {
goto BREAK_label139;
}
}
BREAK_label139: (void)0;
{
((void(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_133); /* finish on <var_133:Iterator[AType]>*/
}
{
var140 = ((val*(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_nit__model__MClass__get_mtype]))(var_mclass, var_mtypes); /* get_mtype on <var_mclass:nullable MClass(MClass)>*/
}
var_res = var140;
{
var141 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_kwnullable]))(var_ntype); /* n_kwnullable on <var_ntype:AType>*/
}
if (var141 == NULL) {
var142 = 0; /* is null */
} else {
var142 = 1; /* arg is null and recv is not */
}
if (0) {
var143 = ((short int(*)(val* self, val* p0))(var141->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var141, ((val*)NULL)); /* != on <var141:nullable TKwnullable>*/
var142 = var143;
}
if (var142){
{
var144 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__as_nullable]))(var_res); /* as_nullable on <var_res:MType(MClassType)>*/
}
var_res = var144;
} else {
}
{
((void(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_nit__modelbuilder_base__AType__mtype_61d]))(var_ntype, var_res); /* mtype= on <var_ntype:AType>*/
}
var = var_res;
goto RET_LABEL;
}
} else {
}
if (unlikely(varonce145==NULL)) {
var146 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "Error: class `";
var150 = standard___standard__NativeString___to_s_with_length(var149, 14l);
var148 = var150;
varonce147 = var148;
}
((struct instance_standard__NativeArray*)var146)->values[0]=var148;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "` not found in module `";
var154 = standard___standard__NativeString___to_s_with_length(var153, 23l);
var152 = var154;
varonce151 = var152;
}
((struct instance_standard__NativeArray*)var146)->values[2]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "`.";
var158 = standard___standard__NativeString___to_s_with_length(var157, 2l);
var156 = var158;
varonce155 = var156;
}
((struct instance_standard__NativeArray*)var146)->values[4]=var156;
} else {
var146 = varonce145;
varonce145 = NULL;
}
((struct instance_standard__NativeArray*)var146)->values[1]=var_name;
{
var159 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var146)->values[3]=var159;
{
var160 = ((val*(*)(val* self))(var146->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var146); /* native_to_s on <var146:NativeArray[String]>*/
}
varonce145 = var146;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_ntype, var160); /* error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#resolve_mtype for (self: ModelBuilder, MModule, nullable MClassDef, AType): nullable MType */
val* nit___nit__ModelBuilder___resolve_mtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable MType */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
long var_i /* var i: Int */;
long var10 /* : Int */;
long var_ /* var : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name;
short int var16 /* : Bool */;
val* var17 /* : nullable MClassDef */;
val* var_intro /* var intro: nullable MClassDef */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : MClassType */;
val* var21 /* : Array[MType] */;
val* var22 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var23 /* : ANodes[AType] */;
val* var24 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var25 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : MClassType */;
val* var_anchor /* var anchor: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
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
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
long var49 /* : Int */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
{
var1 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__modelbuilder_base__AType__mtype]))(var_ntype); /* mtype on <var_ntype:AType>*/
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
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(self, var_mmodule, var_mclassdef, var_ntype, 1); /* resolve_mtype_unchecked on <self:ModelBuilder>*/
}
var_mtype = var4;
} else {
}
if (var_mtype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var7 = ((short int(*)(val* self))(var_ntype->class->vft[COLOR_nit__modelbuilder_base__AType__checked_mtype]))(var_ntype); /* checked_mtype on <var_ntype:AType>*/
}
if (var7){
var = var_mtype;
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var8 = 0;
} else {
var8 = var_mtype->type->type_table[cltype] == idtype;
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype); /* mclass on <var_mtype:nullable MType(MGenericType)>*/
}
var_mclass = var9;
var_i = 0l;
{
var10 = ((long(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__arity]))(var_mclass); /* arity on <var_mclass:MClass>*/
}
var_ = var10;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var13 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var16 = var_i < var_;
var11 = var16;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
var17 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__try_intro]))(var_mclass); /* try_intro on <var_mclass:MClass>*/
}
var_intro = var17;
if (var_intro == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var_intro->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_intro, ((val*)NULL)); /* == on <var_intro:nullable MClassDef>*/
var18 = var19;
}
if (var18){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var20 = ((val*(*)(val* self))(var_intro->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_intro); /* bound_mtype on <var_intro:nullable MClassDef(MClassDef)>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__MClassType__arguments]))(var20); /* arguments on <var20:MClassType>*/
}
{
var22 = ((val*(*)(val* self, long p0))(var21->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var21, var_i); /* [] on <var21:Array[MType]>*/
}
var_bound = var22;
{
var23 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(var_ntype); /* n_types on <var_ntype:AType>*/
}
{
var24 = ((val*(*)(val* self, long p0))(var23->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var23, var_i); /* [] on <var23:ANodes[AType]>*/
}
var_nt = var24;
{
var25 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype]))(self, var_mmodule, var_mclassdef, var_nt); /* resolve_mtype on <self:ModelBuilder>*/
}
var_mt = var25;
if (var_mt == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))(var_mt->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mt, ((val*)NULL)); /* == on <var_mt:nullable MType>*/
var26 = var27;
}
if (var26){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_mclassdef == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
var29 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mclassdef, ((val*)NULL)); /* != on <var_mclassdef:nullable MClassDef>*/
var28 = var29;
}
if (var28){
{
var30 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var_anchor = var30;
} else {
var_anchor = ((val*)NULL);
}
{
var31 = ((short int(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__check_subtype]))(self, var_nt, var_mmodule, var_anchor, var_mt, var_bound); /* check_subtype on <self:ModelBuilder>*/
}
var32 = !var31;
if (var32){
if (unlikely(varonce==NULL)) {
var33 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Type Error: expected `";
var37 = standard___standard__NativeString___to_s_with_length(var36, 22l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`, got `";
var41 = standard___standard__NativeString___to_s_with_length(var40, 8l);
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
var33 = varonce;
varonce = NULL;
}
{
var46 = ((val*(*)(val* self))(var_bound->class->vft[COLOR_standard__string__Object__to_s]))(var_bound); /* to_s on <var_bound:MType>*/
}
((struct instance_standard__NativeArray*)var33)->values[1]=var46;
{
var47 = ((val*(*)(val* self))(var_mt->class->vft[COLOR_standard__string__Object__to_s]))(var_mt); /* to_s on <var_mt:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var33)->values[3]=var47;
{
var48 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce = var33;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nt, var48); /* error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var49 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var49;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
((void(*)(val* self, short int p0))(var_ntype->class->vft[COLOR_nit__modelbuilder_base__AType__checked_mtype_61d]))(var_ntype, 1); /* checked_mtype= on <var_ntype:AType>*/
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#check_subtype for (self: ModelBuilder, ANode, MModule, nullable MClassType, MType, MType): Bool */
short int nit___nit__ModelBuilder___check_subtype(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var1 /* : Bool */;
var_node = p0;
var_mmodule = p1;
var_anchor = p2;
var_sub = p3;
var_sup = p4;
{
var1 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__is_subtype]))(var_sub, var_mmodule, var_anchor, var_sup); /* is_subtype on <var_sub:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#check_sametype for (self: ModelBuilder, ANode, MModule, nullable MClassType, MType, MType): Bool */
short int nit___nit__ModelBuilder___check_sametype(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
var_node = p0;
var_mmodule = p1;
var_anchor = p2;
var_sub = p3;
var_sup = p4;
{
var2 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__is_subtype]))(var_sub, var_mmodule, var_anchor, var_sup); /* is_subtype on <var_sub:MType>*/
}
var_ = var2;
if (var2){
{
var3 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sup->class->vft[COLOR_nit__model__MType__is_subtype]))(var_sup, var_mmodule, var_anchor, var_sub); /* is_subtype on <var_sup:MType>*/
}
var1 = var3;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AType#mtype for (self: AType): nullable MType */
val* nit__modelbuilder_base___AType___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AType#mtype= for (self: AType, nullable MType) */
void nit__modelbuilder_base___AType___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val = p0; /* _mtype on <self:AType> */
RET_LABEL:;
}
/* method modelbuilder_base#AType#checked_mtype for (self: AType): Bool */
short int nit__modelbuilder_base___AType___checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__AType___checked_mtype].s; /* _checked_mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AType#checked_mtype= for (self: AType, Bool) */
void nit__modelbuilder_base___AType___checked_mtype_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelbuilder_base__AType___checked_mtype].s = p0; /* _checked_mtype on <self:AType> */
RET_LABEL:;
}
/* method modelbuilder_base#AVisibility#mvisibility for (self: AVisibility): MVisibility */
val* nit__modelbuilder_base___AVisibility___mvisibility(val* self) {
val* var /* : MVisibility */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "mvisibility", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 366);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AIntrudeVisibility#mvisibility for (self: AIntrudeVisibility): MVisibility */
val* nit__modelbuilder_base___AIntrudeVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__Sys__intrude_visibility]))(var1); /* intrude_visibility on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#APublicVisibility#mvisibility for (self: APublicVisibility): MVisibility */
val* nit__modelbuilder_base___APublicVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var1); /* public_visibility on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AProtectedVisibility#mvisibility for (self: AProtectedVisibility): MVisibility */
val* nit__modelbuilder_base___AProtectedVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__Sys__protected_visibility]))(var1); /* protected_visibility on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#APrivateVisibility#mvisibility for (self: APrivateVisibility): MVisibility */
val* nit__modelbuilder_base___APrivateVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var1); /* private_visibility on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ADoc#mdoc_cache for (self: ADoc): nullable MDoc */
val* nit__modelbuilder_base___ADoc___mdoc_cache(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ADoc#mdoc_cache= for (self: ADoc, nullable MDoc) */
void nit__modelbuilder_base___ADoc___mdoc_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__ADoc___mdoc_cache].val = p0; /* _mdoc_cache on <self:ADoc> */
RET_LABEL:;
}
/* method modelbuilder_base#ADoc#to_mdoc for (self: ADoc): MDoc */
val* nit__modelbuilder_base___ADoc___to_mdoc(val* self) {
val* var /* : MDoc */;
val* var1 /* : nullable MDoc */;
val* var_res /* var res: nullable MDoc */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MDoc */;
val* var5 /* : Location */;
val* var6 /* : ANodes[TComment] */;
val* var_ /* var : ANodes[TComment] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[TComment] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_c /* var c: TComment */;
val* var11 /* : String */;
val* var_text /* var text: String */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var16 /* : Bool */;
val* var17 /* : Array[String] */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : SequenceRead[Char] */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
char var26 /* : Char */;
val* var27 /* : SequenceRead[Char] */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
char var32 /* : Char */;
val* var33 /* : Text */;
val* var34 /* : Text */;
val* var35 /* : SequenceRead[Char] */;
val* var36 /* : nullable Object */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
char var40 /* : Char */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
val* var49 /* : Text */;
val* var50 /* : Array[String] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ADoc__mdoc_cache]))(self); /* mdoc_cache on <self:ADoc>*/
}
var_res = var1;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable MDoc>*/
var2 = var3;
}
if (var2){
var = var_res;
goto RET_LABEL;
} else {
}
var4 = NEW_nit__MDoc(&type_nit__MDoc);
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:ADoc>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__mdoc__MDoc__location_61d]))(var4, var5); /* location= on <var4:MDoc>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:MDoc>*/
}
var_res = var4;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoc__n_comment]))(self); /* n_comment on <self:ADoc>*/
}
var_ = var6;
{
var7 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[TComment]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[TComment]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[TComment]>*/
}
var_c = var10;
{
var11 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_c); /* text on <var_c:TComment>*/
}
var_text = var11;
{
var12 = ((long(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__length]))(var_text); /* length on <var_text:String>*/
}
{
{ /* Inline kernel#Int#< (var12,2l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var15 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var16 = var12 < 2l;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
var17 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__mdoc__MDoc__content]))(var_res); /* content on <var_res:nullable MDoc(MDoc)>*/
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "";
var20 = standard___standard__NativeString___to_s_with_length(var19, 0l);
var18 = var20;
varonce = var18;
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var17, var18); /* add on <var17:Array[String]>*/
}
goto BREAK_label;
} else {
}
{
var21 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var22 = ((val*(*)(val* self, long p0))((((long)var21&3)?class_info[((long)var21&3)]:var21->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var21, 0l); /* [] on <var21:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var22,'#') on <var22:nullable Object(Char)> */
var26 = (char)((long)(var22)>>2);
var25 = (var22 != NULL) && (var26 == '#');
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 397);
fatal_exit(1);
}
{
var27 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var28 = ((val*(*)(val* self, long p0))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var27, 1l); /* [] on <var27:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var28,' ') on <var28:nullable Object(Char)> */
var32 = (char)((long)(var28)>>2);
var31 = (var28 != NULL) && (var32 == ' ');
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
var33 = ((val*(*)(val* self, long p0))(var_text->class->vft[COLOR_standard__string__Text__substring_from]))(var_text, 2l); /* substring_from on <var_text:String>*/
}
var_text = var33;
} else {
{
var34 = ((val*(*)(val* self, long p0))(var_text->class->vft[COLOR_standard__string__Text__substring_from]))(var_text, 1l); /* substring_from on <var_text:String>*/
}
var_text = var34;
}
{
var35 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var36 = ((val*(*)(val* self))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var35); /* last on <var35:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var36,'\n') on <var36:nullable Object(Char)> */
var40 = (char)((long)(var36)>>2);
var39 = (var36 != NULL) && (var40 == '\n');
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var41 = ((long(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__length]))(var_text); /* length on <var_text:String>*/
}
{
{ /* Inline kernel#Int#- (var41,1l) on <var41:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var44 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var48 = var41 - 1l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
var49 = ((val*(*)(val* self, long p0, long p1))(var_text->class->vft[COLOR_standard__string__Text__substring]))(var_text, 0l, var42); /* substring on <var_text:String>*/
}
var_text = var49;
} else {
}
{
var50 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__mdoc__MDoc__content]))(var_res); /* content on <var_res:nullable MDoc(MDoc)>*/
}
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var50, var_text); /* add on <var50:Array[String]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[TComment]>*/
}
} else {
goto BREAK_label51;
}
}
BREAK_label51: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[TComment]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelbuilder_base__ADoc__mdoc_cache_61d]))(self, var_res); /* mdoc_cache= on <self:ADoc>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
