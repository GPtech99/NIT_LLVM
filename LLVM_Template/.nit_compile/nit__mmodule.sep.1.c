#include "nit__mmodule.sep.0.h"
/* method mmodule#Model#mmodules for (self: Model): Array[MModule] */
val* nit__mmodule___Model___mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__Model___mmodules].val; /* _mmodules on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodules= for (self: Model, Array[MModule]) */
void nit__mmodule___Model___mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__Model___mmodules].val = p0; /* _mmodules on <self:Model> */
RET_LABEL:;
}
/* method mmodule#Model#mmodule_importation_hierarchy for (self: Model): POSet[MModule] */
val* nit__mmodule___Model___mmodule_importation_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodule_importation_hierarchy= for (self: Model, POSet[MModule]) */
void nit__mmodule___Model___mmodule_importation_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__Model___mmodule_importation_hierarchy].val = p0; /* _mmodule_importation_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method mmodule#Model#mmodules_by_name for (self: Model): MultiHashMap[String, MModule] */
val* nit__mmodule___Model___mmodules_by_name(val* self) {
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : MultiHashMap[String, MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 33);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodules_by_name= for (self: Model, MultiHashMap[String, MModule]) */
void nit__mmodule___Model___mmodules_by_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val = p0; /* _mmodules_by_name on <self:Model> */
RET_LABEL:;
}
/* method mmodule#Model#get_mmodules_by_name for (self: Model, String): nullable Array[MModule] */
val* nit__mmodule___Model___get_mmodules_by_name(val* self, val* p0) {
val* var /* : nullable Array[MModule] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MModule] */;
short int var2 /* : Bool */;
val* var3 /* : MultiHashMap[String, MModule] */;
val* var4 /* : nullable Object */;
var_name = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__Model__mmodules_by_name]))(self); /* mmodules_by_name on <self:Model>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_name); /* has_key on <var1:MultiHashMap[String, MModule]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__Model__mmodules_by_name]))(self); /* mmodules_by_name on <self:Model>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var3, var_name); /* [] on <var3:MultiHashMap[String, MModule]>*/
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
/* method mmodule#MGroup#mmodules for (self: MGroup): Array[MModule] */
val* nit__mmodule___MGroup___mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MGroup___mmodules].val; /* _mmodules on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 51);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#mmodules= for (self: MGroup, Array[MModule]) */
void nit__mmodule___MGroup___mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MGroup___mmodules].val = p0; /* _mmodules on <self:MGroup> */
RET_LABEL:;
}
/* method mmodule#MGroup#default_mmodule for (self: MGroup): nullable MModule */
val* nit__mmodule___MGroup___default_mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__mmodule__MGroup___default_mmodule].val; /* _default_mmodule on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#default_mmodule= for (self: MGroup, nullable MModule) */
void nit__mmodule___MGroup___default_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MGroup___default_mmodule].val = p0; /* _default_mmodule on <self:MGroup> */
RET_LABEL:;
}
/* method mmodule#MGroup#mdoc_or_fallback for (self: MGroup): nullable MDoc */
val* nit__mmodule___MGroup___nit__mdoc__MEntity__mdoc_or_fallback(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable MDoc */;
val* var5 /* : nullable MModule */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MModule */;
val* var9 /* : nullable MDoc */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mdoc__MEntity__mdoc]))(self); /* mdoc on <self:MGroup>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable MDoc>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mdoc__MEntity__mdoc]))(self); /* mdoc on <self:MGroup>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MGroup__default_mmodule]))(self); /* default_mmodule on <self:MGroup>*/
}
if (var5 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, ((val*)NULL)); /* == on <var5:nullable MModule>*/
var6 = var7;
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MGroup__default_mmodule]))(self); /* default_mmodule on <self:MGroup>*/
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 65);
fatal_exit(1);
} else {
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__mdoc__MEntity__mdoc_or_fallback]))(var8); /* mdoc_or_fallback on <var8:nullable MModule>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#model for (self: MModule): Model */
val* nit___nit__MModule___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#model= for (self: MModule, Model) */
void nit___nit__MModule___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___model].val = p0; /* _model on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#mgroup for (self: MModule): nullable MGroup */
val* nit___nit__MModule___mgroup(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#mgroup= for (self: MModule, nullable MGroup) */
void nit___nit__MModule___mgroup_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___mgroup].val = p0; /* _mgroup on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#mproject for (self: MModule): nullable MProject */
val* nit___nit__MModule___mproject(val* self) {
val* var /* : nullable MProject */;
val* var1 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MProject */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
var_g = var1;
if (var_g == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_g, ((val*)NULL)); /* == on <var_g:nullable MGroup>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var4 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_g); /* mproject on <var_g:nullable MGroup(MGroup)>*/
}
var = var4;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#name for (self: MModule): String */
val* nit___nit__MModule___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#name= for (self: MModule, String) */
void nit___nit__MModule___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___name].val = p0; /* _name on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#location for (self: MModule): Location */
val* nit___nit__MModule___location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#location= for (self: MModule, Location) */
void nit___nit__MModule___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___location].val = p0; /* _location on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#to_s for (self: MModule): String */
val* nit___nit__MModule___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_importation for (self: MModule): POSetElement[MModule] */
val* nit___nit__MModule___in_importation(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_importation= for (self: MModule, POSetElement[MModule]) */
void nit___nit__MModule___in_importation_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___in_importation].val = p0; /* _in_importation on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#full_name for (self: MModule): String */
val* nit___nit__MModule___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : MProject */;
val* var10 /* : String */;
val* var11 /* : String */;
short int var12 /* : Bool */;
val* var13 /* : String */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : MProject */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___full_name].val != NULL; /* _full_name on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__mmodule__MModule___full_name].val; /* _full_name on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 99);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
var_mgroup = var5;
if (var_mgroup == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, ((val*)NULL)); /* == on <var_mgroup:nullable MGroup>*/
var7 = var8;
}
var_ = var7;
if (var7){
var6 = var_;
} else {
{
var9 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_mgroup); /* mproject on <var_mgroup:nullable MGroup(MGroup)>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__model_base__MEntity__name]))(var9); /* name on <var9:MProject>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
{
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var11); /* == on <var10:String>*/
}
var6 = var12;
}
if (var6){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
var3 = var13;
goto RET_LABEL4;
} else {
if (unlikely(varonce==NULL)) {
var14 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "::";
var18 = standard___standard__NativeString___to_s_with_length(var17, 2l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var14)->values[1]=var16;
} else {
var14 = varonce;
varonce = NULL;
}
{
var19 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_mgroup); /* mproject on <var_mgroup:nullable MGroup(MGroup)>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__model_base__MEntity__name]))(var19); /* name on <var19:MProject>*/
}
((struct instance_standard__NativeArray*)var14)->values[0]=var20;
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
((struct instance_standard__NativeArray*)var14)->values[2]=var21;
{
var22 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
var3 = var22;
goto RET_LABEL4;
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__mmodule__MModule___full_name].val = var3; /* _full_name on <self:MModule> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#full_name= for (self: MModule, String) */
void nit___nit__MModule___full_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___full_name].val = p0; /* _full_name on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#namespace_for for (self: MModule, MVisibility): String */
val* nit___nit__MModule___namespace_for(val* self, val* p0) {
val* var /* : String */;
val* var_v /* var v: MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : String */;
val* var9 /* : MProject */;
val* var10 /* : String */;
var_v = p0;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var1); /* private_visibility on <var1:Sys>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Comparable___60d_61d]))(var_v, var2); /* <= on <var_v:MVisibility>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__full_name]))(self); /* full_name on <self:MModule>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
var_mgroup = var5;
if (var_mgroup == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, ((val*)NULL)); /* == on <var_mgroup:nullable MGroup>*/
var6 = var7;
}
if (var6){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__full_name]))(self); /* full_name on <self:MModule>*/
}
var = var8;
goto RET_LABEL;
} else {
{
var9 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_mgroup); /* mproject on <var_mgroup:nullable MGroup(MGroup)>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var9); /* full_name on <var9:MProject>*/
}
var = var10;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#c_name for (self: MModule): String */
val* nit___nit__MModule___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : MProject */;
val* var10 /* : String */;
val* var11 /* : String */;
short int var12 /* : Bool */;
val* var13 /* : MProject */;
val* var14 /* : String */;
val* var15 /* : String */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_res /* var res: nullable Object */;
val* var23 /* : String */;
val* var24 /* : String */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___c_name].val != NULL; /* _c_name on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__mmodule__MModule___c_name].val; /* _c_name on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 131);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
var_g = var5;
if (var_g == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_g, ((val*)NULL)); /* != on <var_g:nullable MGroup>*/
var7 = var8;
}
var_ = var7;
if (var7){
{
var9 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_g); /* mproject on <var_g:nullable MGroup(MGroup)>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__model_base__MEntity__name]))(var9); /* name on <var9:MProject>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
{
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var10, var11); /* != on <var10:String>*/
}
var6 = var12;
} else {
var6 = var_;
}
if (var6){
{
var13 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_g); /* mproject on <var_g:nullable MGroup(MGroup)>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model_base__MEntity__name]))(var13); /* name on <var13:MProject>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__Text__to_cmangle]))(var14); /* to_cmangle on <var14:String>*/
}
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "__";
var18 = standard___standard__NativeString___to_s_with_length(var17, 2l);
var16 = var18;
varonce = var16;
}
{
var19 = ((val*(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__string__String___43d]))(var15, var16); /* + on <var15:String>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__Text__to_cmangle]))(var20); /* to_cmangle on <var20:String>*/
}
{
var22 = ((val*(*)(val* self, val* p0))(var19->class->vft[COLOR_standard__string__String___43d]))(var19, var21); /* + on <var19:String>*/
}
var_res = var22;
} else {
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
{
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__Text__to_cmangle]))(var23); /* to_cmangle on <var23:String>*/
}
var_res = var24;
}
var3 = var_res;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__mmodule__MModule___c_name].val = var3; /* _c_name on <self:MModule> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#c_name= for (self: MModule, String) */
void nit___nit__MModule___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___c_name].val = p0; /* _c_name on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#c_namespace_for for (self: MModule, MVisibility): String */
val* nit___nit__MModule___c_namespace_for(val* self, val* p0) {
val* var /* : String */;
val* var_v /* var v: MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : String */;
val* var9 /* : MProject */;
val* var10 /* : String */;
var_v = p0;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var1); /* private_visibility on <var1:Sys>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Comparable___60d_61d]))(var_v, var2); /* <= on <var_v:MVisibility>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__c_name]))(self); /* c_name on <self:MModule>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
var_mgroup = var5;
if (var_mgroup == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, ((val*)NULL)); /* == on <var_mgroup:nullable MGroup>*/
var6 = var7;
}
if (var6){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__c_name]))(self); /* c_name on <self:MModule>*/
}
var = var8;
goto RET_LABEL;
} else {
{
var9 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_mgroup); /* mproject on <var_mgroup:nullable MGroup(MGroup)>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var9); /* c_name on <var9:MProject>*/
}
var = var10;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#init for (self: MModule) */
void nit___nit__MModule___standard__kernel__Object__init(val* self) {
val* var /* : Model */;
val* var1 /* : MultiHashMap[String, MModule] */;
val* var2 /* : String */;
val* var3 /* : Model */;
val* var4 /* : Array[MModule] */;
val* var5 /* : nullable MGroup */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MGroup */;
val* var9 /* : Array[MModule] */;
val* var10 /* : nullable MGroup */;
val* var11 /* : String */;
val* var12 /* : String */;
short int var13 /* : Bool */;
val* var14 /* : nullable MGroup */;
val* var15 /* : nullable MModule */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable MGroup */;
val* var19 /* : Model */;
val* var20 /* : POSet[MModule] */;
val* var21 /* : POSetElement[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MModule___standard__kernel__Object__init]))(self); /* init on <self:MModule>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MModule>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__mmodule__Model__mmodules_by_name]))(var); /* mmodules_by_name on <var:Model>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_more_collections__MultiHashMap__add_one]))(var1, var2, self); /* add_one on <var1:MultiHashMap[String, MModule]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MModule>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__mmodule__Model__mmodules]))(var3); /* mmodules on <var3:Model>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var4, self); /* add on <var4:Array[MModule]>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
if (var5 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var5, ((val*)NULL)); /* != on <var5:nullable MGroup>*/
var6 = var7;
}
if (var6){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 164);
fatal_exit(1);
} else {
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__mmodule__MGroup__mmodules]))(var8); /* mmodules on <var8:nullable MGroup>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var9, self); /* add on <var9:Array[MModule]>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 165);
fatal_exit(1);
} else {
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model_base__MEntity__name]))(var10); /* name on <var10:nullable MGroup>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var12); /* == on <var11:String>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 166);
fatal_exit(1);
} else {
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__mmodule__MGroup__default_mmodule]))(var14); /* default_mmodule on <var14:nullable MGroup>*/
}
if (var15 == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, ((val*)NULL)); /* == on <var15:nullable MModule>*/
var16 = var17;
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 166);
fatal_exit(1);
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 167);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__mmodule__MGroup__default_mmodule_61d]))(var18, self); /* default_mmodule= on <var18:nullable MGroup>*/
}
} else {
}
} else {
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MModule>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__mmodule__Model__mmodule_importation_hierarchy]))(var19); /* mmodule_importation_hierarchy on <var19:Model>*/
}
{
var21 = ((val*(*)(val* self, val* p0))(var20->class->vft[COLOR_poset__POSet__add_node]))(var20, self); /* add_node on <var20:POSet[MModule]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__mmodule__MModule__in_importation_61d]))(self, var21); /* in_importation= on <self:MModule>*/
}
RET_LABEL:;
}
/* method mmodule#MModule#set_imported_mmodules for (self: MModule, Array[MModule]) */
void nit___nit__MModule___set_imported_mmodules(val* self, val* p0) {
val* var_imported_mmodules /* var imported_mmodules: Array[MModule] */;
val* var /* : POSetElement[MModule] */;
val* var1 /* : Collection[nullable Object] */;
short int var2 /* : Bool */;
val* var_ /* var : Array[MModule] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MModule] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var7 /* : Model */;
val* var8 /* : POSet[MModule] */;
var_imported_mmodules = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(self); /* in_importation on <self:MModule>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var); /* direct_greaters on <var:POSetElement[MModule]>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:Collection[nullable Object](Collection[MModule])>*/
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 178);
fatal_exit(1);
}
var_ = var_imported_mmodules;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MModule]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MModule]>*/
}
var_m = var6;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MModule>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__mmodule__Model__mmodule_importation_hierarchy]))(var7); /* mmodule_importation_hierarchy on <var7:Model>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_poset__POSet__add_edge]))(var8, self, var_m); /* add_edge on <var8:POSet[MModule]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MModule]>*/
}
RET_LABEL:;
}
/* method mmodule#MModule#intrude_mmodules for (self: MModule): HashSet[MModule] */
val* nit___nit__MModule___intrude_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#intrude_mmodules= for (self: MModule, HashSet[MModule]) */
void nit___nit__MModule___intrude_mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val = p0; /* _intrude_mmodules on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#public_mmodules for (self: MModule): HashSet[MModule] */
val* nit___nit__MModule___public_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#public_mmodules= for (self: MModule, HashSet[MModule]) */
void nit___nit__MModule___public_mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val = p0; /* _public_mmodules on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#private_mmodules for (self: MModule): HashSet[MModule] */
val* nit___nit__MModule___private_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#private_mmodules= for (self: MModule, HashSet[MModule]) */
void nit___nit__MModule___private_mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val = p0; /* _private_mmodules on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#visibility_for for (self: MModule, MModule): MVisibility */
val* nit___nit__MModule___visibility_for(val* self, val* p0) {
val* var /* : MVisibility */;
val* var_m /* var m: MModule */;
short int var1 /* : Bool */;
val* var2 /* : Sys */;
val* var3 /* : MVisibility */;
val* var4 /* : HashSet[MModule] */;
short int var5 /* : Bool */;
val* var6 /* : Sys */;
val* var7 /* : MVisibility */;
val* var8 /* : HashSet[MModule] */;
short int var9 /* : Bool */;
val* var10 /* : Sys */;
val* var11 /* : MVisibility */;
val* var12 /* : HashSet[MModule] */;
short int var13 /* : Bool */;
val* var14 /* : Sys */;
val* var15 /* : MVisibility */;
val* var16 /* : Sys */;
val* var17 /* : MVisibility */;
var_m = p0;
{
var1 = ((short int(*)(val* self, val* p0))(var_m->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_m, self); /* == on <var_m:MModule>*/
}
if (var1){
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model_base__Sys__intrude_visibility]))(var2); /* intrude_visibility on <var2:Sys>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__intrude_mmodules]))(self); /* intrude_mmodules on <self:MModule>*/
}
{
var5 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var4, var_m); /* has on <var4:HashSet[MModule]>*/
}
if (var5){
var6 = glob_sys;
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model_base__Sys__intrude_visibility]))(var6); /* intrude_visibility on <var6:Sys>*/
}
var = var7;
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__public_mmodules]))(self); /* public_mmodules on <self:MModule>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var8, var_m); /* has on <var8:HashSet[MModule]>*/
}
if (var9){
var10 = glob_sys;
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var10); /* public_visibility on <var10:Sys>*/
}
var = var11;
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__private_mmodules]))(self); /* private_mmodules on <self:MModule>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var12, var_m); /* has on <var12:HashSet[MModule]>*/
}
if (var13){
var14 = glob_sys;
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var14); /* private_visibility on <var14:Sys>*/
}
var = var15;
goto RET_LABEL;
} else {
}
var16 = glob_sys;
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__model_base__Sys__none_visibility]))(var16); /* none_visibility on <var16:Sys>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#set_visibility_for for (self: MModule, MModule, MVisibility) */
void nit___nit__MModule___set_visibility_for(val* self, val* p0, val* p1) {
val* var_m /* var m: MModule */;
val* var_v /* var v: MVisibility */;
val* var /* : Sys */;
val* var1 /* : MVisibility */;
short int var2 /* : Bool */;
val* var3 /* : HashSet[MModule] */;
val* var4 /* : HashSet[MModule] */;
val* var5 /* : HashSet[MModule] */;
val* var6 /* : HashSet[MModule] */;
val* var7 /* : HashSet[MModule] */;
val* var8 /* : HashSet[MModule] */;
val* var9 /* : HashSet[MModule] */;
val* var10 /* : Sys */;
val* var11 /* : MVisibility */;
short int var12 /* : Bool */;
val* var13 /* : HashSet[MModule] */;
val* var14 /* : HashSet[MModule] */;
val* var15 /* : HashSet[MModule] */;
val* var16 /* : HashSet[MModule] */;
val* var17 /* : HashSet[MModule] */;
val* var18 /* : Sys */;
val* var19 /* : MVisibility */;
short int var20 /* : Bool */;
val* var21 /* : HashSet[MModule] */;
val* var22 /* : HashSet[MModule] */;
val* var23 /* : HashSet[MModule] */;
val* var24 /* : HashSet[MModule] */;
val* var25 /* : HashSet[MModule] */;
val* var26 /* : Sys */;
val* var27 /* : NativeArray[String] */;
static val* varonce;
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
val* var39 /* : String */;
var_m = p0;
var_v = p1;
var = glob_sys;
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model_base__Sys__intrude_visibility]))(var); /* intrude_visibility on <var:Sys>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var1); /* == on <var_v:MVisibility>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__intrude_mmodules]))(self); /* intrude_mmodules on <self:MModule>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var3, var_m); /* add on <var3:HashSet[MModule]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__intrude_mmodules]))(self); /* intrude_mmodules on <self:MModule>*/
}
{
var5 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__mmodule__MModule__intrude_mmodules]))(var_m); /* intrude_mmodules on <var_m:MModule>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var4, var5); /* add_all on <var4:HashSet[MModule]>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__public_mmodules]))(self); /* public_mmodules on <self:MModule>*/
}
{
var7 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__mmodule__MModule__public_mmodules]))(var_m); /* public_mmodules on <var_m:MModule>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var6, var7); /* add_all on <var6:HashSet[MModule]>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__private_mmodules]))(self); /* private_mmodules on <self:MModule>*/
}
{
var9 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__mmodule__MModule__private_mmodules]))(var_m); /* private_mmodules on <var_m:MModule>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var8, var9); /* add_all on <var8:HashSet[MModule]>*/
}
} else {
var10 = glob_sys;
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var10); /* public_visibility on <var10:Sys>*/
}
{
var12 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var11); /* == on <var_v:MVisibility>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__public_mmodules]))(self); /* public_mmodules on <self:MModule>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var13, var_m); /* add on <var13:HashSet[MModule]>*/
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__public_mmodules]))(self); /* public_mmodules on <self:MModule>*/
}
{
var15 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__mmodule__MModule__intrude_mmodules]))(var_m); /* intrude_mmodules on <var_m:MModule>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var14, var15); /* add_all on <var14:HashSet[MModule]>*/
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__public_mmodules]))(self); /* public_mmodules on <self:MModule>*/
}
{
var17 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__mmodule__MModule__public_mmodules]))(var_m); /* public_mmodules on <var_m:MModule>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var16, var17); /* add_all on <var16:HashSet[MModule]>*/
}
} else {
var18 = glob_sys;
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var18); /* private_visibility on <var18:Sys>*/
}
{
var20 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var19); /* == on <var_v:MVisibility>*/
}
if (var20){
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__private_mmodules]))(self); /* private_mmodules on <self:MModule>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var21, var_m); /* add on <var21:HashSet[MModule]>*/
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__private_mmodules]))(self); /* private_mmodules on <self:MModule>*/
}
{
var23 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__mmodule__MModule__intrude_mmodules]))(var_m); /* intrude_mmodules on <var_m:MModule>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var22, var23); /* add_all on <var22:HashSet[MModule]>*/
}
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__private_mmodules]))(self); /* private_mmodules on <self:MModule>*/
}
{
var25 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__mmodule__MModule__public_mmodules]))(var_m); /* public_mmodules on <var_m:MModule>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var24, var25); /* add_all on <var24:HashSet[MModule]>*/
}
} else {
var26 = glob_sys;
if (unlikely(varonce==NULL)) {
var27 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = " visibility for ";
var31 = standard___standard__NativeString___to_s_with_length(var30, 16l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var27)->values[1]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " = ";
var35 = standard___standard__NativeString___to_s_with_length(var34, 3l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var27)->values[3]=var33;
} else {
var27 = varonce;
varonce = NULL;
}
{
var36 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:MModule>*/
}
((struct instance_standard__NativeArray*)var27)->values[0]=var36;
{
var37 = ((val*(*)(val* self))(var_m->class->vft[COLOR_standard__string__Object__to_s]))(var_m); /* to_s on <var_m:MModule>*/
}
((struct instance_standard__NativeArray*)var27)->values[2]=var37;
{
var38 = ((val*(*)(val* self))(var_v->class->vft[COLOR_standard__string__Object__to_s]))(var_v); /* to_s on <var_v:MVisibility>*/
}
((struct instance_standard__NativeArray*)var27)->values[4]=var38;
{
var39 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce = var27;
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__file__Sys__print]))(var26, var39); /* print on <var26:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 217);
fatal_exit(1);
}
}
}
RET_LABEL:;
}
/* method mmodule#MModule#is_visible for (self: MModule, MModule, MVisibility): Bool */
short int nit___nit__MModule___is_visible(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_intro_mmodule /* var intro_mmodule: MModule */;
val* var_visibility /* var visibility: MVisibility */;
val* var1 /* : MVisibility */;
val* var_v /* var v: MVisibility */;
val* var2 /* : Sys */;
val* var3 /* : MVisibility */;
short int var4 /* : Bool */;
val* var5 /* : Sys */;
val* var6 /* : MVisibility */;
short int var7 /* : Bool */;
val* var8 /* : Sys */;
val* var9 /* : MVisibility */;
short int var10 /* : Bool */;
val* var11 /* : Sys */;
val* var12 /* : MVisibility */;
short int var13 /* : Bool */;
val* var14 /* : Sys */;
val* var15 /* : MVisibility */;
short int var16 /* : Bool */;
val* var17 /* : Sys */;
val* var18 /* : MVisibility */;
short int var19 /* : Bool */;
val* var20 /* : Sys */;
val* var21 /* : MVisibility */;
short int var22 /* : Bool */;
var_intro_mmodule = p0;
var_visibility = p1;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__mmodule__MModule__visibility_for]))(self, var_intro_mmodule); /* visibility_for on <self:MModule>*/
}
var_v = var1;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model_base__Sys__intrude_visibility]))(var2); /* intrude_visibility on <var2:Sys>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var3); /* == on <var_v:MVisibility>*/
}
if (var4){
var5 = glob_sys;
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var5); /* private_visibility on <var5:Sys>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var_visibility->class->vft[COLOR_standard__kernel__Comparable___62d_61d]))(var_visibility, var6); /* >= on <var_visibility:MVisibility>*/
}
var = var7;
goto RET_LABEL;
} else {
var8 = glob_sys;
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var8); /* public_visibility on <var8:Sys>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var9); /* == on <var_v:MVisibility>*/
}
if (var10){
var11 = glob_sys;
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var11); /* private_visibility on <var11:Sys>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var_visibility->class->vft[COLOR_standard__kernel__Comparable___62d]))(var_visibility, var12); /* > on <var_visibility:MVisibility>*/
}
var = var13;
goto RET_LABEL;
} else {
var14 = glob_sys;
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var14); /* private_visibility on <var14:Sys>*/
}
{
var16 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var15); /* == on <var_v:MVisibility>*/
}
if (var16){
var17 = glob_sys;
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var17); /* private_visibility on <var17:Sys>*/
}
{
var19 = ((short int(*)(val* self, val* p0))(var_visibility->class->vft[COLOR_standard__kernel__Comparable___62d]))(var_visibility, var18); /* > on <var_visibility:MVisibility>*/
}
var = var19;
goto RET_LABEL;
} else {
var20 = glob_sys;
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model_base__Sys__none_visibility]))(var20); /* none_visibility on <var20:Sys>*/
}
{
var22 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var21); /* == on <var_v:MVisibility>*/
}
if (var22){
var = 0;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 234);
fatal_exit(1);
}
}
}
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#is_fictive for (self: MModule): Bool */
short int nit___nit__MModule___is_fictive(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___is_fictive].s; /* _is_fictive on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#is_fictive= for (self: MModule, Bool) */
void nit___nit__MModule___is_fictive_61d(val* self, short int p0) {
self->attrs[COLOR_nit__mmodule__MModule___is_fictive].s = p0; /* _is_fictive on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#is_test_suite for (self: MModule): Bool */
short int nit___nit__MModule___is_test_suite(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___is_test_suite].s; /* _is_test_suite on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#is_test_suite= for (self: MModule, Bool) */
void nit___nit__MModule___is_test_suite_61d(val* self, short int p0) {
self->attrs[COLOR_nit__mmodule__MModule___is_test_suite].s = p0; /* _is_test_suite on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#first_real_mmodule for (self: MModule): MModule */
val* nit___nit__MModule___first_real_mmodule(val* self) {
val* var /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
val* var2 /* : POSetElement[MModule] */;
val* var3 /* : Collection[nullable Object] */;
val* var4 /* : nullable Object */;
var_mmodule = self;
for(;;) {
{
var1 = ((short int(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__is_fictive]))(var_mmodule); /* is_fictive on <var_mmodule:MModule>*/
}
if (var1){
{
var2 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var2); /* direct_greaters on <var2:POSetElement[MModule]>*/
}
{
var4 = ((val*(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var3); /* first on <var3:Collection[nullable Object](Collection[MModule])>*/
}
var_mmodule = var4;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_mmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#parent_concern for (self: MModule): nullable MConcern */
val* nit___nit__MModule___nit__model_base__MConcern__parent_concern(val* self) {
val* var /* : nullable MConcern */;
val* var1 /* : nullable MGroup */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
