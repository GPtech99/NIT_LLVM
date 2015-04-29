#include "nit__mproject.sep.0.h"
/* method mproject#MProject#name for (self: MProject): String */
val* nit___nit__MProject___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <self:MProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#name= for (self: MProject, String) */
void nit___nit__MProject___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MProject___name].val = p0; /* _name on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#full_name for (self: MProject): String */
val* nit___nit__MProject___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MProject>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MProject#c_name for (self: MProject): String */
val* nit___nit__MProject___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
var1 = self->attrs[COLOR_nit__mproject__MProject___c_name].val != NULL; /* _c_name on <self:MProject> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__mproject__MProject___c_name].val; /* _c_name on <self:MProject> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 32);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MProject>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__Text__to_cmangle]))(var3); /* to_cmangle on <var3:String>*/
}
self->attrs[COLOR_nit__mproject__MProject___c_name].val = var4; /* _c_name on <self:MProject> */
var2 = var4;
}
var = var2;
RET_LABEL:;
return var;
}
/* method mproject#MProject#c_name= for (self: MProject, String) */
void nit___nit__MProject___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MProject___c_name].val = p0; /* _c_name on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#model for (self: MProject): Model */
val* nit___nit__MProject___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__mproject__MProject___model].val; /* _model on <self:MProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#model= for (self: MProject, Model) */
void nit___nit__MProject___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MProject___model].val = p0; /* _model on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#root for (self: MProject): nullable MGroup */
val* nit___nit__MProject___root(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_nit__mproject__MProject___root].val; /* _root on <self:MProject> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#root= for (self: MProject, nullable MGroup) */
void nit___nit__MProject___root_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MProject___root].val = p0; /* _root on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#mgroups for (self: MProject): POSet[MGroup] */
val* nit___nit__MProject___mgroups(val* self) {
val* var /* : POSet[MGroup] */;
val* var1 /* : POSet[MGroup] */;
var1 = self->attrs[COLOR_nit__mproject__MProject___mgroups].val; /* _mgroups on <self:MProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#mgroups= for (self: MProject, POSet[MGroup]) */
void nit___nit__MProject___mgroups_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MProject___mgroups].val = p0; /* _mgroups on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#to_s for (self: MProject): String */
val* nit___nit__MProject___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MProject>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MProject#init for (self: MProject) */
void nit___nit__MProject___standard__kernel__Object__init(val* self) {
val* var /* : Model */;
val* var1 /* : Array[MProject] */;
val* var2 /* : Model */;
val* var3 /* : MultiHashMap[String, MProject] */;
val* var4 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MProject___standard__kernel__Object__init]))(self); /* init on <self:MProject>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MProject>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__mproject__Model__mprojects]))(var); /* mprojects on <var:Model>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var1, self); /* add on <var1:Array[MProject]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MProject>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__mproject__Model__mproject_by_name]))(var2); /* mproject_by_name on <var2:Model>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MProject>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_more_collections__MultiHashMap__add_one]))(var3, var4, self); /* add_one on <var3:MultiHashMap[String, MProject]>*/
}
RET_LABEL:;
}
/* method mproject#MProject#parent_concern for (self: MProject): nullable MConcern */
val* nit___nit__MProject___nit__model_base__MConcern__parent_concern(val* self) {
val* var /* : nullable MConcern */;
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MProject#mdoc_or_fallback for (self: MProject): nullable MDoc */
val* nit___nit__MProject___nit__mdoc__MEntity__mdoc_or_fallback(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable MDoc */;
val* var5 /* : nullable MGroup */;
val* var6 /* : nullable MDoc */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mdoc__MEntity__mdoc]))(self); /* mdoc on <self:MProject>*/
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
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mdoc__MEntity__mdoc]))(self); /* mdoc on <self:MProject>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MProject__root]))(self); /* root on <self:MProject>*/
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 57);
fatal_exit(1);
} else {
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__mdoc__MEntity__mdoc_or_fallback]))(var5); /* mdoc_or_fallback on <var5:nullable MGroup>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#name for (self: MGroup): String */
val* nit___nit__MGroup___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#name= for (self: MGroup, String) */
void nit___nit__MGroup___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___name].val = p0; /* _name on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#mproject for (self: MGroup): MProject */
val* nit___nit__MGroup___mproject(val* self) {
val* var /* : MProject */;
val* var1 /* : MProject */;
var1 = self->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#mproject= for (self: MGroup, MProject) */
void nit___nit__MGroup___mproject_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___mproject].val = p0; /* _mproject on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#parent for (self: MGroup): nullable MGroup */
val* nit___nit__MGroup___parent(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_nit__mproject__MGroup___parent].val; /* _parent on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#parent= for (self: MGroup, nullable MGroup) */
void nit___nit__MGroup___parent_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___parent].val = p0; /* _parent on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#full_name for (self: MGroup): String */
val* nit___nit__MGroup___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable MGroup */;
val* var_p /* var p: nullable MGroup */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__parent]))(self); /* parent on <self:MGroup>*/
}
var_p = var1;
if (var_p == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable MGroup>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MGroup>*/
}
var = var4;
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "/";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_p); /* full_name on <var_p:nullable MGroup(MGroup)>*/
}
((struct instance_standard__NativeArray*)var5)->values[0]=var10;
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MGroup>*/
}
((struct instance_standard__NativeArray*)var5)->values[2]=var11;
{
var12 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#in_nesting for (self: MGroup): POSetElement[MGroup] */
val* nit___nit__MGroup___in_nesting(val* self) {
val* var /* : POSetElement[MGroup] */;
val* var1 /* : POSetElement[MGroup] */;
var1 = self->attrs[COLOR_nit__mproject__MGroup___in_nesting].val; /* _in_nesting on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_nesting");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#in_nesting= for (self: MGroup, POSetElement[MGroup]) */
void nit___nit__MGroup___in_nesting_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___in_nesting].val = p0; /* _in_nesting on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#is_root for (self: MGroup): Bool */
short int nit___nit__MGroup___is_root(val* self) {
short int var /* : Bool */;
val* var1 /* : MProject */;
val* var2 /* : nullable MGroup */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__mproject]))(self); /* mproject on <self:MGroup>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__mproject__MProject__root]))(var1); /* root on <var1:MProject>*/
}
if (var2 == NULL) {
var3 = 0; /* <self:MGroup> cannot be null */
} else {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, self); /* == on <var2:nullable MGroup>*/
var3 = var4;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#filepath for (self: MGroup): nullable String */
val* nit___nit__MGroup___filepath(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__mproject__MGroup___filepath].val; /* _filepath on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#filepath= for (self: MGroup, nullable String) */
void nit___nit__MGroup___filepath_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___filepath].val = p0; /* _filepath on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#init for (self: MGroup) */
void nit___nit__MGroup___standard__kernel__Object__init(val* self) {
val* var /* : MProject */;
val* var1 /* : POSet[MGroup] */;
val* var_tree /* var tree: POSet[MGroup] */;
val* var2 /* : POSetElement[nullable Object] */;
val* var3 /* : nullable MGroup */;
val* var_parent /* var parent: nullable MGroup */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MGroup___standard__kernel__Object__init]))(self); /* init on <self:MGroup>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__mproject]))(self); /* mproject on <self:MGroup>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__mproject__MProject__mgroups]))(var); /* mgroups on <var:MProject>*/
}
var_tree = var1;
{
var2 = ((val*(*)(val* self, val* p0))(var_tree->class->vft[COLOR_poset__POSet__add_node]))(var_tree, self); /* add_node on <var_tree:POSet[MGroup]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__mproject__MGroup__in_nesting_61d]))(self, var2); /* in_nesting= on <self:MGroup>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__parent]))(self); /* parent on <self:MGroup>*/
}
var_parent = var3;
if (var_parent == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_parent->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_parent, ((val*)NULL)); /* != on <var_parent:nullable MGroup>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0, val* p1))(var_tree->class->vft[COLOR_poset__POSet__add_edge]))(var_tree, self, var_parent); /* add_edge on <var_tree:POSet[MGroup]>*/
}
} else {
}
RET_LABEL:;
}
/* method mproject#MGroup#model for (self: MGroup): Model */
val* nit___nit__MGroup___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MProject */;
val* var2 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__mproject]))(self); /* mproject on <self:MGroup>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1); /* model on <var1:MProject>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#parent_concern for (self: MGroup): nullable MConcern */
val* nit___nit__MGroup___nit__model_base__MConcern__parent_concern(val* self) {
val* var /* : nullable MConcern */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MGroup */;
val* var4 /* : MProject */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__is_root]))(self); /* is_root on <self:MGroup>*/
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__parent]))(self); /* parent on <self:MGroup>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__mproject]))(self); /* mproject on <self:MGroup>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#to_s for (self: MGroup): String */
val* nit___nit__MGroup___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MGroup>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#Model#mprojects for (self: Model): Array[MProject] */
val* nit__mproject___Model___mprojects(val* self) {
val* var /* : Array[MProject] */;
val* var1 /* : Array[MProject] */;
var1 = self->attrs[COLOR_nit__mproject__Model___mprojects].val; /* _mprojects on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprojects");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 117);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mprojects= for (self: Model, Array[MProject]) */
void nit__mproject___Model___mprojects_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__Model___mprojects].val = p0; /* _mprojects on <self:Model> */
RET_LABEL:;
}
/* method mproject#Model#mproject_by_name for (self: Model): MultiHashMap[String, MProject] */
val* nit__mproject___Model___mproject_by_name(val* self) {
val* var /* : MultiHashMap[String, MProject] */;
val* var1 /* : MultiHashMap[String, MProject] */;
var1 = self->attrs[COLOR_nit__mproject__Model___mproject_by_name].val; /* _mproject_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 120);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mproject_by_name= for (self: Model, MultiHashMap[String, MProject]) */
void nit__mproject___Model___mproject_by_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__Model___mproject_by_name].val = p0; /* _mproject_by_name on <self:Model> */
RET_LABEL:;
}
/* method mproject#Model#get_mprojects_by_name for (self: Model, String): nullable Array[MProject] */
val* nit__mproject___Model___get_mprojects_by_name(val* self, val* p0) {
val* var /* : nullable Array[MProject] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MProject] */;
short int var2 /* : Bool */;
val* var3 /* : MultiHashMap[String, MProject] */;
val* var4 /* : nullable Object */;
var_name = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__Model__mproject_by_name]))(self); /* mproject_by_name on <self:Model>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_name); /* has_key on <var1:MultiHashMap[String, MProject]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__Model__mproject_by_name]))(self); /* mproject_by_name on <self:Model>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var3, var_name); /* [] on <var3:MultiHashMap[String, MProject]>*/
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
