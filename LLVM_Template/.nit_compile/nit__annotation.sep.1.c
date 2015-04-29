#include "nit__annotation.sep.0.h"
/* method annotation#Prod#get_single_annotation for (self: Prod, String, ModelBuilder): nullable AAnnotation */
val* nit__annotation___Prod___get_single_annotation(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var_name /* var name: String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : Array[AAnnotation] */;
val* var_res /* var res: Array[AAnnotation] */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
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
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : nullable Object */;
val* var23 /* : Location */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : nullable Object */;
var_name = p0;
var_modelbuilder = p1;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__get_annotations]))(self, var_name); /* get_annotations on <self:Prod>*/
}
var_res = var1;
{
var2 = ((short int(*)(val* self))(var_res->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_res); /* is_empty on <var_res:Array[AAnnotation]>*/
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))(var_res->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_res); /* length on <var_res:Array[AAnnotation]>*/
}
{
{ /* Inline kernel#Int#> (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var7 = var3 > 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val*(*)(val* self, long p0))(var_res->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_res, 1l); /* [] on <var_res:Array[AAnnotation]>*/
}
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Syntax Error: multiple `";
var13 = standard___standard__NativeString___to_s_with_length(var12, 24l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "`. A previous one is defined line ";
var17 = standard___standard__NativeString___to_s_with_length(var16, 34l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ".";
var21 = standard___standard__NativeString___to_s_with_length(var20, 1l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var9)->values[4]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var9)->values[1]=var_name;
{
var22 = ((val*(*)(val* self, long p0))(var_res->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_res, 0l); /* [] on <var_res:Array[AAnnotation]>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var22); /* location on <var22:nullable Object(AAnnotation)>*/
}
{
var24 = ((long(*)(val* self))(var23->class->vft[COLOR_nit__location__Location__line_start]))(var23); /* line_start on <var23:Location>*/
}
var25 = standard__string___Int___Object__to_s(var24);
((struct instance_standard__NativeArray*)var9)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var8, var26); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var27 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_res); /* first on <var_res:Array[AAnnotation]>*/
}
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_string for (self: AAnnotation, ModelBuilder): nullable String */
val* nit__annotation___AAnnotation___arg_as_string(val* self, val* p0) {
val* var /* : nullable String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var7 /* : nullable String */;
val* var_arg /* var arg: nullable String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
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
var_modelbuilder = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(self); /* n_args on <self:AAnnotation>*/
}
var_args = var1;
{
var2 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:ANodes[AExpr]>*/
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
var6 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:ANodes[AExpr]>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__literal__AExpr__as_string]))(var6); /* as_string on <var6:nullable Object(AExpr)>*/
}
var_arg = var7;
if (var_arg == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_arg->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_arg, ((val*)NULL)); /* != on <var_arg:nullable String>*/
var8 = var9;
}
if (var8){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Syntax Error: `";
var14 = standard___standard__NativeString___to_s_with_length(var13, 15l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "` expects a single String as argument.";
var18 = standard___standard__NativeString___to_s_with_length(var17, 38l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(self); /* name on <self:AAnnotation>*/
}
((struct instance_standard__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var20); /* error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_int for (self: AAnnotation, ModelBuilder): nullable Int */
val* nit__annotation___AAnnotation___arg_as_int(val* self, val* p0) {
val* var /* : nullable Int */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var7 /* : nullable Int */;
val* var_arg /* var arg: nullable Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
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
val* var23 /* : String */;
var_modelbuilder = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(self); /* n_args on <self:AAnnotation>*/
}
var_args = var1;
{
var2 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:ANodes[AExpr]>*/
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
var6 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:ANodes[AExpr]>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__literal__AExpr__as_int]))(var6); /* as_int on <var6:nullable Object(AExpr)>*/
}
var_arg = var7;
if (var_arg == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Int#!= (var_arg,((val*)NULL)) on <var_arg:nullable Int> */
var11 = 0; /* incompatible types Int vs. null; cannot be NULL */
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (unlikely(varonce==NULL)) {
var13 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Syntax Error: `";
var17 = standard___standard__NativeString___to_s_with_length(var16, 15l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var13)->values[0]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "` expects a single Int as argument.";
var21 = standard___standard__NativeString___to_s_with_length(var20, 35l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var13)->values[2]=var19;
} else {
var13 = varonce;
varonce = NULL;
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(self); /* name on <self:AAnnotation>*/
}
((struct instance_standard__NativeArray*)var13)->values[1]=var22;
{
var23 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var23); /* error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_id for (self: AAnnotation, ModelBuilder): nullable String */
val* nit__annotation___AAnnotation___arg_as_id(val* self, val* p0) {
val* var /* : nullable String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var7 /* : nullable String */;
val* var_arg /* var arg: nullable String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
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
var_modelbuilder = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(self); /* n_args on <self:AAnnotation>*/
}
var_args = var1;
{
var2 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:ANodes[AExpr]>*/
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
var6 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:ANodes[AExpr]>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__literal__AExpr__as_id]))(var6); /* as_id on <var6:nullable Object(AExpr)>*/
}
var_arg = var7;
if (var_arg == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_arg->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_arg, ((val*)NULL)); /* != on <var_arg:nullable String>*/
var8 = var9;
}
if (var8){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Syntax Error: `";
var14 = standard___standard__NativeString___to_s_with_length(var13, 15l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "` expects a single identifier as argument.";
var18 = standard___standard__NativeString___to_s_with_length(var17, 42l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(self); /* name on <self:AAnnotation>*/
}
((struct instance_standard__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var20); /* error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#collect_annotations_on_modules for (self: ModelBuilder, String, MModule): Array[AAnnotation] */
val* nit__annotation___ModelBuilder___collect_annotations_on_modules(val* self, val* p0, val* p1) {
val* var /* : Array[AAnnotation] */;
val* var_name /* var name: String */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : Array[AAnnotation] */;
val* var_annotations /* var annotations: Array[AAnnotation] */;
val* var2 /* : POSetElement[MModule] */;
val* var3 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[MModule] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_mmod /* var mmod: MModule */;
val* var8 /* : nullable AModule */;
val* var_amod /* var amod: nullable AModule */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable AModuledecl */;
val* var_module_decl /* var module_decl: nullable AModuledecl */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Array[AAnnotation] */;
val* var_aas /* var aas: Array[AAnnotation] */;
var_name = p0;
var_mmodule = p1;
var1 = NEW_standard__Array(&type_standard__Array__nit__AAnnotation);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[AAnnotation]>*/
}
var_annotations = var1;
{
var2 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__greaters]))(var2); /* greaters on <var2:POSetElement[MModule]>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[MModule]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[MModule]>*/
}
var_mmod = var7;
{
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__mmodule2node]))(self, var_mmod); /* mmodule2node on <self:ModelBuilder>*/
}
var_amod = var8;
if (var_amod == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_amod->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_amod, ((val*)NULL)); /* == on <var_amod:nullable AModule>*/
var9 = var10;
}
if (var9){
goto BREAK_label;
} else {
}
{
var11 = ((val*(*)(val* self))(var_amod->class->vft[COLOR_nit__parser_nodes__AModule__n_moduledecl]))(var_amod); /* n_moduledecl on <var_amod:nullable AModule(AModule)>*/
}
var_module_decl = var11;
if (var_module_decl == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_module_decl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_module_decl, ((val*)NULL)); /* == on <var_module_decl:nullable AModuledecl>*/
var12 = var13;
}
if (var12){
goto BREAK_label;
} else {
}
{
var14 = ((val*(*)(val* self, val* p0))(var_module_decl->class->vft[COLOR_nit__parser_nodes__Prod__get_annotations]))(var_module_decl, var_name); /* get_annotations on <var_module_decl:nullable AModuledecl(AModuledecl)>*/
}
var_aas = var14;
{
((void(*)(val* self, val* p0))(var_annotations->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_annotations, var_aas); /* add_all on <var_annotations:Array[AAnnotation]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[MModule]>*/
}
} else {
goto BREAK_label15;
}
}
BREAK_label15: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[MModule]>*/
}
var = var_annotations;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#get_mmodule_annotation for (self: ModelBuilder, String, MModule): nullable AAnnotation */
val* nit__annotation___ModelBuilder___get_mmodule_annotation(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var_name /* var name: String */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable AModule */;
val* var_amod /* var amod: nullable AModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable AModuledecl */;
val* var_module_decl /* var module_decl: nullable AModuledecl */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable AAnnotation */;
val* var_res /* var res: nullable AAnnotation */;
var_name = p0;
var_mmodule = p1;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__mmodule2node]))(self, var_mmodule); /* mmodule2node on <self:ModelBuilder>*/
}
var_amod = var1;
if (var_amod == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_amod->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_amod, ((val*)NULL)); /* == on <var_amod:nullable AModule>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_amod->class->vft[COLOR_nit__parser_nodes__AModule__n_moduledecl]))(var_amod); /* n_moduledecl on <var_amod:nullable AModule(AModule)>*/
}
var_module_decl = var4;
if (var_module_decl == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_module_decl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_module_decl, ((val*)NULL)); /* == on <var_module_decl:nullable AModuledecl>*/
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_module_decl->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(var_module_decl, var_name, self); /* get_single_annotation on <var_module_decl:nullable AModuledecl(AModuledecl)>*/
}
var_res = var7;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#collect_annotations_data_cache for (self: ModelBuilder): HashMap[String, MModuleData[AAnnotation]] */
val* nit__annotation___ModelBuilder___collect_annotations_data_cache(val* self) {
val* var /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var1 /* : HashMap[String, MModuleData[AAnnotation]] */;
var1 = self->attrs[COLOR_nit__annotation__ModelBuilder___collect_annotations_data_cache].val; /* _collect_annotations_data_cache on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_annotations_data_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__annotation, 112);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#collect_annotations_data_cache= for (self: ModelBuilder, HashMap[String, MModuleData[AAnnotation]]) */
void nit__annotation___ModelBuilder___collect_annotations_data_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__annotation__ModelBuilder___collect_annotations_data_cache].val = p0; /* _collect_annotations_data_cache on <self:ModelBuilder> */
RET_LABEL:;
}
/* method annotation#ModelBuilder#collect_annotations_data for (self: ModelBuilder, String, MModule): MModuleData[AAnnotation] */
val* nit__annotation___ModelBuilder___collect_annotations_data(val* self, val* p0, val* p1) {
val* var /* : MModuleData[AAnnotation] */;
val* var_name /* var name: String */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var2 /* : nullable Object */;
val* var_res /* var res: nullable MModuleData[AAnnotation] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MModuleData[AAnnotation] */;
val* var6 /* : Model */;
val* var7 /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var8 /* : POSetElement[MModule] */;
val* var9 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[MModule] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mmod /* var mmod: MModule */;
short int var14 /* : Bool */;
val* var15 /* : nullable AAnnotation */;
val* var_ass /* var ass: nullable AAnnotation */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_name = p0;
var_mmodule = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__annotation__ModelBuilder__collect_annotations_data_cache]))(self); /* collect_annotations_data_cache on <self:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var1, var_name); /* get_or_null on <var1:HashMap[String, MModuleData[AAnnotation]]>*/
}
var_res = var2;
if (var_res == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable MModuleData[AAnnotation]>*/
var3 = var4;
}
if (var3){
var5 = NEW_nit__MModuleData(&type_nit__MModuleData__nit__AAnnotation);
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__mmodule_data__MModuleData__model_61d]))(var5, var6); /* model= on <var5:MModuleData[AAnnotation]>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:MModuleData[AAnnotation]>*/
}
var_res = var5;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__annotation__ModelBuilder__collect_annotations_data_cache]))(self); /* collect_annotations_data_cache on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var7->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var7, var_name, var_res); /* []= on <var7:HashMap[String, MModuleData[AAnnotation]]>*/
}
} else {
}
{
var8 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_poset__POSetElement__greaters]))(var8); /* greaters on <var8:POSetElement[MModule]>*/
}
var_ = var9;
{
var10 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[MModule]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[MModule]>*/
}
var_mmod = var13;
{
var14 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_nit__mmodule_data__MModuleData__has_mmodule]))(var_res, var_mmod); /* has_mmodule on <var_res:nullable MModuleData[AAnnotation](MModuleData[AAnnotation])>*/
}
if (var14){
goto BREAK_label;
} else {
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__ModelBuilder__get_mmodule_annotation]))(self, var_name, var_mmod); /* get_mmodule_annotation on <self:ModelBuilder>*/
}
var_ass = var15;
if (var_ass == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var_ass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ass, ((val*)NULL)); /* == on <var_ass:nullable AAnnotation>*/
var16 = var17;
}
if (var16){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_nit__mmodule_data__MModuleData___91d_93d_61d]))(var_res, var_mmod, var_ass); /* []= on <var_res:nullable MModuleData[AAnnotation](MModuleData[AAnnotation])>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[MModule]>*/
}
} else {
goto BREAK_label18;
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[MModule]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#lookup_annotation_on_modules for (self: ModelBuilder, String, MModule): nullable AAnnotation */
val* nit__annotation___ModelBuilder___lookup_annotation_on_modules(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var_name /* var name: String */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : MModuleData[AAnnotation] */;
val* var_data /* var data: MModuleData[AAnnotation] */;
val* var2 /* : Sys */;
val* var3 /* : MVisibility */;
val* var4 /* : Sequence[Object] */;
val* var_annotations /* var annotations: Sequence[AAnnotation] */;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : Array[Location] */;
val* var_locs /* var locs: Array[Location] */;
val* var_ /* var : Sequence[AAnnotation] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[AAnnotation] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_annot /* var annot: AAnnotation */;
val* var16 /* : Location */;
val* var17 /* : ToolContext */;
val* var18 /* : Location */;
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
val* var38 /* : Message */;
val* var39 /* : nullable Object */;
var_name = p0;
var_mmodule = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__ModelBuilder__collect_annotations_data]))(self, var_name, var_mmodule); /* collect_annotations_data on <self:ModelBuilder>*/
}
var_data = var1;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model_base__Sys__none_visibility]))(var2); /* none_visibility on <var2:Sys>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var_data->class->vft[COLOR_nit__mmodule_data__MModuleData__lookup_values]))(var_data, var_mmodule, var3); /* lookup_values on <var_data:MModuleData[AAnnotation]>*/
}
var_annotations = var4;
{
var5 = ((short int(*)(val* self))((((long)var_annotations&3)?class_info[((long)var_annotations&3)]:var_annotations->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_annotations); /* is_empty on <var_annotations:Sequence[AAnnotation]>*/
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var6 = ((long(*)(val* self))((((long)var_annotations&3)?class_info[((long)var_annotations&3)]:var_annotations->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_annotations); /* length on <var_annotations:Sequence[AAnnotation]>*/
}
{
{ /* Inline kernel#Int#> (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var10 = var6 > 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var11 = NEW_standard__Array(&type_standard__Array__nit__Location);
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:Array[Location]>*/
}
var_locs = var11;
var_ = var_annotations;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[AAnnotation]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[AAnnotation]>*/
}
if (var14){
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[AAnnotation]>*/
}
var_annot = var15;
{
var16 = ((val*(*)(val* self))(var_annot->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_annot); /* location on <var_annot:AAnnotation>*/
}
{
((void(*)(val* self, val* p0))(var_locs->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_locs, var16); /* add on <var_locs:Array[Location]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[AAnnotation]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[AAnnotation]>*/
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var18 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__location]))(var_mmodule); /* location on <var_mmodule:MModule>*/
}
if (unlikely(varonce==NULL)) {
var19 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Error: priority conflict on annotation `";
var23 = standard___standard__NativeString___to_s_with_length(var22, 40l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "`, it has been defined in: ";
var27 = standard___standard__NativeString___to_s_with_length(var26, 27l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var19)->values[2]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ".";
var31 = standard___standard__NativeString___to_s_with_length(var30, 1l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var19)->values[4]=var29;
} else {
var19 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var19)->values[1]=var_name;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ", ";
var35 = standard___standard__NativeString___to_s_with_length(var34, 2l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((val*(*)(val* self, val* p0))(var_locs->class->vft[COLOR_standard__string__Collection__join]))(var_locs, var33); /* join on <var_locs:Array[Location]>*/
}
((struct instance_standard__NativeArray*)var19)->values[3]=var36;
{
var37 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce = var19;
{
var38 = ((val*(*)(val* self, val* p0, val* p1))(var17->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var17, var18, var37); /* error on <var17:ToolContext>*/
}
} else {
}
{
var39 = ((val*(*)(val* self))((((long)var_annotations&3)?class_info[((long)var_annotations&3)]:var_annotations->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var_annotations); /* first on <var_annotations:Sequence[AAnnotation]>*/
}
var = var39;
goto RET_LABEL;
RET_LABEL:;
return var;
}
