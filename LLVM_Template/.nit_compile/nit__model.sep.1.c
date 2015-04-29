#include "nit__model.sep.0.h"
/* method model#Model#mclasses for (self: Model): Array[MClass] */
val* nit__model___Model___mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_nit__model__Model___mclasses].val; /* _mclasses on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclasses= for (self: Model, Array[MClass]) */
void nit__model___Model___mclasses_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__Model___mclasses].val = p0; /* _mclasses on <self:Model> */
RET_LABEL:;
}
/* method model#Model#mproperties for (self: Model): Array[MProperty] */
val* nit__model___Model___mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nit__model__Model___mproperties].val; /* _mproperties on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties= for (self: Model, Array[MProperty]) */
void nit__model___Model___mproperties_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__Model___mproperties].val = p0; /* _mproperties on <self:Model> */
RET_LABEL:;
}
/* method model#Model#mclassdef_hierarchy for (self: Model): POSet[MClassDef] */
val* nit__model___Model___mclassdef_hierarchy(val* self) {
val* var /* : POSet[MClassDef] */;
val* var1 /* : POSet[MClassDef] */;
var1 = self->attrs[COLOR_nit__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclassdef_hierarchy= for (self: Model, POSet[MClassDef]) */
void nit__model___Model___mclassdef_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__Model___mclassdef_hierarchy].val = p0; /* _mclassdef_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method model#Model#intro_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* nit__model___Model___intro_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_nit__model__Model___intro_mtype_specialization_hierarchy].val; /* _intro_mtype_specialization_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#intro_mtype_specialization_hierarchy= for (self: Model, POSet[MClassType]) */
void nit__model___Model___intro_mtype_specialization_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__Model___intro_mtype_specialization_hierarchy].val = p0; /* _intro_mtype_specialization_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method model#Model#full_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* nit__model___Model___full_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_nit__model__Model___full_mtype_specialization_hierarchy].val; /* _full_mtype_specialization_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 57);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#full_mtype_specialization_hierarchy= for (self: Model, POSet[MClassType]) */
void nit__model___Model___full_mtype_specialization_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__Model___full_mtype_specialization_hierarchy].val = p0; /* _full_mtype_specialization_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method model#Model#mclasses_by_name for (self: Model): MultiHashMap[String, MClass] */
val* nit__model___Model___mclasses_by_name(val* self) {
val* var /* : MultiHashMap[String, MClass] */;
val* var1 /* : MultiHashMap[String, MClass] */;
var1 = self->attrs[COLOR_nit__model__Model___mclasses_by_name].val; /* _mclasses_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 66);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclasses_by_name= for (self: Model, MultiHashMap[String, MClass]) */
void nit__model___Model___mclasses_by_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__Model___mclasses_by_name].val = p0; /* _mclasses_by_name on <self:Model> */
RET_LABEL:;
}
/* method model#Model#get_mclasses_by_name for (self: Model, String): nullable Array[MClass] */
val* nit__model___Model___get_mclasses_by_name(val* self, val* p0) {
val* var /* : nullable Array[MClass] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MClass] */;
val* var2 /* : nullable Object */;
var_name = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__Model__mclasses_by_name]))(self); /* mclasses_by_name on <self:Model>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var1, var_name); /* get_or_null on <var1:MultiHashMap[String, MClass]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties_by_name for (self: Model): MultiHashMap[String, MProperty] */
val* nit__model___Model___mproperties_by_name(val* self) {
val* var /* : MultiHashMap[String, MProperty] */;
val* var1 /* : MultiHashMap[String, MProperty] */;
var1 = self->attrs[COLOR_nit__model__Model___mproperties_by_name].val; /* _mproperties_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 80);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties_by_name= for (self: Model, MultiHashMap[String, MProperty]) */
void nit__model___Model___mproperties_by_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__Model___mproperties_by_name].val = p0; /* _mproperties_by_name on <self:Model> */
RET_LABEL:;
}
/* method model#Model#get_mproperties_by_name for (self: Model, String): nullable Array[MProperty] */
val* nit__model___Model___get_mproperties_by_name(val* self, val* p0) {
val* var /* : nullable Array[MProperty] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MProperty] */;
val* var2 /* : nullable Object */;
var_name = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__Model__mproperties_by_name]))(self); /* mproperties_by_name on <self:Model>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var1, var_name); /* get_or_null on <var1:MultiHashMap[String, MProperty]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Model#null_type for (self: Model): MNullType */
val* nit__model___Model___null_type(val* self) {
val* var /* : MNullType */;
val* var1 /* : MNullType */;
var1 = self->attrs[COLOR_nit__model__Model___null_type].val; /* _null_type on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 94);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#null_type= for (self: Model, MNullType) */
void nit__model___Model___null_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__Model___null_type].val = p0; /* _null_type on <self:Model> */
RET_LABEL:;
}
/* method model#Model#concerns_tree for (self: Model, Collection[MConcern]): ConcernsTree */
val* nit__model___Model___concerns_tree(val* self, val* p0) {
val* var /* : ConcernsTree */;
val* var_mconcerns /* var mconcerns: Collection[MConcern] */;
val* var1 /* : HashSet[MConcern] */;
val* var_seen /* var seen: HashSet[MConcern] */;
val* var2 /* : ConcernsTree */;
val* var_res /* var res: ConcernsTree */;
val* var3 /* : Array[MConcern] */;
val* var_todo /* var todo: Array[MConcern] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_c /* var c: MConcern */;
short int var7 /* : Bool */;
val* var8 /* : nullable MConcern */;
val* var_pc /* var pc: nullable MConcern */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
var_mconcerns = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MConcern);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MConcern]>*/
}
var_seen = var1;
var2 = NEW_nit__ConcernsTree(&type_nit__ConcernsTree);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:ConcernsTree>*/
}
var_res = var2;
var3 = NEW_standard__Array(&type_standard__Array__nit__MConcern);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[MConcern]>*/
}
var_todo = var3;
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_todo, var_mconcerns); /* add_all on <var_todo:Array[MConcern]>*/
}
for(;;) {
{
var4 = ((short int(*)(val* self))(var_todo->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_todo); /* is_empty on <var_todo:Array[MConcern]>*/
}
var5 = !var4;
if (var5){
{
var6 = ((val*(*)(val* self))(var_todo->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var_todo); /* pop on <var_todo:Array[MConcern]>*/
}
var_c = var6;
{
var7 = ((short int(*)(val* self, val* p0))(var_seen->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_seen, var_c); /* has on <var_seen:HashSet[MConcern]>*/
}
if (var7){
goto BREAK_label;
} else {
}
{
var8 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__model_base__MConcern__parent_concern]))(var_c); /* parent_concern on <var_c:MConcern>*/
}
var_pc = var8;
if (var_pc == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_pc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pc, ((val*)NULL)); /* == on <var_pc:nullable MConcern>*/
var9 = var10;
}
if (var9){
{
((void(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_ordered_tree__OrderedTree__add]))(var_res, ((val*)NULL), var_c); /* add on <var_res:ConcernsTree>*/
}
} else {
{
((void(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_ordered_tree__OrderedTree__add]))(var_res, var_pc, var_c); /* add on <var_res:ConcernsTree>*/
}
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_todo, var_pc); /* add on <var_todo:Array[MConcern]>*/
}
}
{
((void(*)(val* self, val* p0))(var_seen->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_seen, var_c); /* add on <var_seen:HashSet[MConcern]>*/
}
} else {
goto BREAK_label11;
}
BREAK_label: (void)0;
}
BREAK_label11: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#intro_mclasses for (self: MModule): Array[MClass] */
val* nit__model___MModule___intro_mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_nit__model__MModule___intro_mclasses].val; /* _intro_mclasses on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 128);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#intro_mclasses= for (self: MModule, Array[MClass]) */
void nit__model___MModule___intro_mclasses_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___intro_mclasses].val = p0; /* _intro_mclasses on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#mclassdefs for (self: MModule): Array[MClassDef] */
val* nit__model___MModule___mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_nit__model__MModule___mclassdefs].val; /* _mclassdefs on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 131);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#mclassdefs= for (self: MModule, Array[MClassDef]) */
void nit__model___MModule___mclassdefs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___mclassdefs].val = p0; /* _mclassdefs on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#has_mclass for (self: MModule, MClass): Bool */
short int nit__model___MModule___has_mclass(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : POSetElement[MModule] */;
val* var2 /* : MModule */;
short int var3 /* : Bool */;
var_mclass = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(self); /* in_importation on <self:MModule>*/
}
{
var2 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var_mclass); /* intro_mmodule on <var_mclass:MClass>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_poset__POSetElement___60d_61d]))(var1, var2); /* <= on <var1:POSetElement[MModule]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy for (self: MModule): POSet[MClass] */
val* nit__model___MModule___flatten_mclass_hierarchy(val* self) {
val* var /* : POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
val* var_res /* var res: nullable POSet[MClass] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : POSet[MClass] */;
val* var5 /* : POSetElement[MModule] */;
val* var6 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[MModule] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var11 /* : Array[MClassDef] */;
val* var_12 /* var : Array[MClassDef] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[MClassDef] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var17 /* : MClass */;
val* var_c /* var c: MClass */;
val* var18 /* : POSetElement[nullable Object] */;
val* var19 /* : Array[MClassType] */;
val* var_20 /* var : Array[MClassType] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : ArrayIterator[MClassType] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var25 /* : MClass */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__flatten_mclass_hierarchy_cache]))(self); /* flatten_mclass_hierarchy_cache on <self:MModule>*/
}
var_res = var1;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable POSet[MClass]>*/
var2 = var3;
}
if (var2){
var = var_res;
goto RET_LABEL;
} else {
}
var4 = NEW_poset__POSet(&type_poset__POSet__nit__MClass);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:POSet[MClass]>*/
}
var_res = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(self); /* in_importation on <self:MModule>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_poset__POSetElement__greaters]))(var5); /* greaters on <var5:POSetElement[MModule]>*/
}
var_ = var6;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[MModule]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[MModule]>*/
}
var_m = var10;
{
var11 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__model__MModule__mclassdefs]))(var_m); /* mclassdefs on <var_m:MModule>*/
}
var_12 = var11;
{
var13 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_12); /* iterator on <var_12:Array[MClassDef]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:ArrayIterator[MClassDef]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:ArrayIterator[MClassDef]>*/
}
var_cd = var16;
{
var17 = ((val*(*)(val* self))(var_cd->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_cd); /* mclass on <var_cd:MClassDef>*/
}
var_c = var17;
{
var18 = ((val*(*)(val* self, val* p0))(var_res->class->vft[COLOR_poset__POSet__add_node]))(var_res, var_c); /* add_node on <var_res:nullable POSet[MClass](POSet[MClass])>*/
}
{
var19 = ((val*(*)(val* self))(var_cd->class->vft[COLOR_nit__model__MClassDef__supertypes]))(var_cd); /* supertypes on <var_cd:MClassDef>*/
}
var_20 = var19;
{
var21 = ((val*(*)(val* self))(var_20->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_20); /* iterator on <var_20:Array[MClassType]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:ArrayIterator[MClassType]>*/
}
if (var23){
{
var24 = ((val*(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:ArrayIterator[MClassType]>*/
}
var_s = var24;
{
var25 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nit__model__MClassType__mclass]))(var_s); /* mclass on <var_s:MClassType>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_poset__POSet__add_edge]))(var_res, var_c, var25); /* add_edge on <var_res:nullable POSet[MClass](POSet[MClass])>*/
}
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:ArrayIterator[MClassType]>*/
}
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label26;
}
}
BREAK_label26: (void)0;
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:ArrayIterator[MClassDef]>*/
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[MModule]>*/
}
} else {
goto BREAK_label27;
}
}
BREAK_label27: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[MModule]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__flatten_mclass_hierarchy_cache_61d]))(self, var_res); /* flatten_mclass_hierarchy_cache= on <self:MModule>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#linearize_mclasses for (self: MModule, Array[MClass]) */
void nit__model___MModule___linearize_mclasses(val* self, val* p0) {
val* var_mclasses /* var mclasses: Array[MClass] */;
val* var /* : POSet[MClass] */;
var_mclasses = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__flatten_mclass_hierarchy]))(self); /* flatten_mclass_hierarchy on <self:MModule>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__sorter__Comparator__sort]))(var, var_mclasses); /* sort on <var:POSet[MClass]>*/
}
RET_LABEL:;
}
/* method model#MModule#linearize_mclassdefs for (self: MModule, Array[MClassDef]) */
void nit__model___MModule___linearize_mclassdefs(val* self, val* p0) {
val* var_mclassdefs /* var mclassdefs: Array[MClassDef] */;
val* var /* : MClassDefSorter */;
val* var_sorter /* var sorter: MClassDefSorter */;
var_mclassdefs = p0;
var = NEW_nit__model__MClassDefSorter(&type_nit__model__MClassDefSorter);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__model__MClassDefSorter__mmodule_61d]))(var, self); /* mmodule= on <var:MClassDefSorter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:MClassDefSorter>*/
}
var_sorter = var;
{
((void(*)(val* self, val* p0))(var_sorter->class->vft[COLOR_standard__sorter__Comparator__sort]))(var_sorter, var_mclassdefs); /* sort on <var_sorter:MClassDefSorter>*/
}
RET_LABEL:;
}
/* method model#MModule#linearize_mpropdefs for (self: MModule, Array[MPropDef]) */
void nit__model___MModule___linearize_mpropdefs(val* self, val* p0) {
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var /* : MPropDefSorter */;
val* var_sorter /* var sorter: MPropDefSorter */;
var_mpropdefs = p0;
var = NEW_nit__model__MPropDefSorter(&type_nit__model__MPropDefSorter);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__model__MPropDefSorter__mmodule_61d]))(var, self); /* mmodule= on <var:MPropDefSorter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:MPropDefSorter>*/
}
var_sorter = var;
{
((void(*)(val* self, val* p0))(var_sorter->class->vft[COLOR_standard__sorter__Comparator__sort]))(var_sorter, var_mpropdefs); /* sort on <var_sorter:MPropDefSorter>*/
}
RET_LABEL:;
}
/* method model#MModule#flatten_mclass_hierarchy_cache for (self: MModule): nullable POSet[MClass] */
val* nit__model___MModule___flatten_mclass_hierarchy_cache(val* self) {
val* var /* : nullable POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
var1 = self->attrs[COLOR_nit__model__MModule___flatten_mclass_hierarchy_cache].val; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy_cache= for (self: MModule, nullable POSet[MClass]) */
void nit__model___MModule___flatten_mclass_hierarchy_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___flatten_mclass_hierarchy_cache].val = p0; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#object_type for (self: MModule): MClassType */
val* nit__model___MModule___object_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___object_type].val != NULL; /* _object_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___object_type].val; /* _object_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _object_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 197);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Object";
var5 = standard___standard__NativeString___to_s_with_length(var4, 6l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__mclass_type]))(var6); /* mclass_type on <var6:MClass>*/
}
self->attrs[COLOR_nit__model__MModule___object_type].val = var7; /* _object_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#object_type= for (self: MModule, MClassType) */
void nit__model___MModule___object_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___object_type].val = p0; /* _object_type on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#pointer_type for (self: MModule): MClassType */
val* nit__model___MModule___pointer_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___pointer_type].val != NULL; /* _pointer_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___pointer_type].val; /* _pointer_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 200);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Pointer";
var5 = standard___standard__NativeString___to_s_with_length(var4, 7l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__mclass_type]))(var6); /* mclass_type on <var6:MClass>*/
}
self->attrs[COLOR_nit__model__MModule___pointer_type].val = var7; /* _pointer_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#pointer_type= for (self: MModule, MClassType) */
void nit__model___MModule___pointer_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___pointer_type].val = p0; /* _pointer_type on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#bool_type for (self: MModule): MClassType */
val* nit__model___MModule___bool_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___bool_type].val != NULL; /* _bool_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___bool_type].val; /* _bool_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bool_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 203);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Bool";
var5 = standard___standard__NativeString___to_s_with_length(var4, 4l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__mclass_type]))(var6); /* mclass_type on <var6:MClass>*/
}
self->attrs[COLOR_nit__model__MModule___bool_type].val = var7; /* _bool_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type= for (self: MModule, MClassType) */
void nit__model___MModule___bool_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___bool_type].val = p0; /* _bool_type on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#int_type for (self: MModule): MClassType */
val* nit__model___MModule___int_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___int_type].val != NULL; /* _int_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___int_type].val; /* _int_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _int_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 206);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Int";
var5 = standard___standard__NativeString___to_s_with_length(var4, 3l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__mclass_type]))(var6); /* mclass_type on <var6:MClass>*/
}
self->attrs[COLOR_nit__model__MModule___int_type].val = var7; /* _int_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#int_type= for (self: MModule, MClassType) */
void nit__model___MModule___int_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___int_type].val = p0; /* _int_type on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#char_type for (self: MModule): MClassType */
val* nit__model___MModule___char_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___char_type].val != NULL; /* _char_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___char_type].val; /* _char_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _char_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 209);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Char";
var5 = standard___standard__NativeString___to_s_with_length(var4, 4l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__mclass_type]))(var6); /* mclass_type on <var6:MClass>*/
}
self->attrs[COLOR_nit__model__MModule___char_type].val = var7; /* _char_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#char_type= for (self: MModule, MClassType) */
void nit__model___MModule___char_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___char_type].val = p0; /* _char_type on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#float_type for (self: MModule): MClassType */
val* nit__model___MModule___float_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___float_type].val != NULL; /* _float_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___float_type].val; /* _float_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _float_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 212);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Float";
var5 = standard___standard__NativeString___to_s_with_length(var4, 5l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__mclass_type]))(var6); /* mclass_type on <var6:MClass>*/
}
self->attrs[COLOR_nit__model__MModule___float_type].val = var7; /* _float_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#float_type= for (self: MModule, MClassType) */
void nit__model___MModule___float_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___float_type].val = p0; /* _float_type on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#string_type for (self: MModule): MClassType */
val* nit__model___MModule___string_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___string_type].val != NULL; /* _string_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___string_type].val; /* _string_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 215);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "String";
var5 = standard___standard__NativeString___to_s_with_length(var4, 6l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__mclass_type]))(var6); /* mclass_type on <var6:MClass>*/
}
self->attrs[COLOR_nit__model__MModule___string_type].val = var7; /* _string_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#string_type= for (self: MModule, MClassType) */
void nit__model___MModule___string_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___string_type].val = p0; /* _string_type on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#native_string_type for (self: MModule): MClassType */
val* nit__model___MModule___native_string_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___native_string_type].val != NULL; /* _native_string_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___native_string_type].val; /* _native_string_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native_string_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 218);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "NativeString";
var5 = standard___standard__NativeString___to_s_with_length(var4, 12l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__mclass_type]))(var6); /* mclass_type on <var6:MClass>*/
}
self->attrs[COLOR_nit__model__MModule___native_string_type].val = var7; /* _native_string_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#native_string_type= for (self: MModule, MClassType) */
void nit__model___MModule___native_string_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___native_string_type].val = p0; /* _native_string_type on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#array_type for (self: MModule, MType): MClassType */
val* nit__model___MModule___array_type(val* self, val* p0) {
val* var /* : MClassType */;
val* var_elt_type /* var elt_type: MType */;
val* var1 /* : MClass */;
val* var2 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var3 /* : MClassType */;
var_elt_type = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__array_class]))(self); /* array_class on <self:MModule>*/
}
var2 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_standard__array__Array__with_capacity]))(var2, 1l); /* with_capacity on <var2:Array[MType]>*/
}
var_ = var2;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_elt_type); /* push on <var_:Array[MType]>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__model__MClass__get_mtype]))(var1, var_); /* get_mtype on <var1:MClass>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#array_class for (self: MModule): MClass */
val* nit__model___MModule___array_class(val* self) {
val* var /* : MClass */;
short int var1 /* : Bool */;
val* var2 /* : MClass */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MModule___array_class].val != NULL; /* _array_class on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___array_class].val; /* _array_class on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array_class");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 224);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Array";
var5 = standard___standard__NativeString___to_s_with_length(var4, 5l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
self->attrs[COLOR_nit__model__MModule___array_class].val = var6; /* _array_class on <self:MModule> */
var2 = var6;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#array_class= for (self: MModule, MClass) */
void nit__model___MModule___array_class_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___array_class].val = p0; /* _array_class on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#native_array_type for (self: MModule, MType): MClassType */
val* nit__model___MModule___native_array_type(val* self, val* p0) {
val* var /* : MClassType */;
val* var_elt_type /* var elt_type: MType */;
val* var1 /* : MClass */;
val* var2 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var3 /* : MClassType */;
var_elt_type = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__native_array_class]))(self); /* native_array_class on <self:MModule>*/
}
var2 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_standard__array__Array__with_capacity]))(var2, 1l); /* with_capacity on <var2:Array[MType]>*/
}
var_ = var2;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_elt_type); /* push on <var_:Array[MType]>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__model__MClass__get_mtype]))(var1, var_); /* get_mtype on <var1:MClass>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#native_array_class for (self: MModule): MClass */
val* nit__model___MModule___native_array_class(val* self) {
val* var /* : MClass */;
short int var1 /* : Bool */;
val* var2 /* : MClass */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MModule___native_array_class].val != NULL; /* _native_array_class on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___native_array_class].val; /* _native_array_class on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native_array_class");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 230);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "NativeArray";
var5 = standard___standard__NativeString___to_s_with_length(var4, 11l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var3); /* get_primitive_class on <self:MModule>*/
}
self->attrs[COLOR_nit__model__MModule___native_array_class].val = var6; /* _native_array_class on <self:MModule> */
var2 = var6;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#native_array_class= for (self: MModule, MClass) */
void nit__model___MModule___native_array_class_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___native_array_class].val = p0; /* _native_array_class on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#sys_type for (self: MModule): nullable MClassType */
val* nit__model___MModule___sys_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : Model */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : nullable Array[MClass] */;
val* var_clas /* var clas: nullable Array[MClass] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : MClass */;
val* var13 /* : MClassType */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MModule>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Sys";
var4 = standard___standard__NativeString___to_s_with_length(var3, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__model__Model__get_mclasses_by_name]))(var1, var2); /* get_mclasses_by_name on <var1:Model>*/
}
var_clas = var5;
if (var_clas == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_clas->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_clas, ((val*)NULL)); /* == on <var_clas:nullable Array[MClass]>*/
var6 = var7;
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Sys";
var11 = standard___standard__NativeString___to_s_with_length(var10, 3l);
var9 = var11;
varonce8 = var9;
}
{
var12 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var9); /* get_primitive_class on <self:MModule>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model__MClass__mclass_type]))(var12); /* mclass_type on <var12:MClass>*/
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#finalizable_type for (self: MModule): nullable MClassType */
val* nit__model___MModule___finalizable_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : Model */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : nullable Array[MClass] */;
val* var_clas /* var clas: nullable Array[MClass] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : MClass */;
val* var13 /* : MClassType */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MModule>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Finalizable";
var4 = standard___standard__NativeString___to_s_with_length(var3, 11l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__model__Model__get_mclasses_by_name]))(var1, var2); /* get_mclasses_by_name on <var1:Model>*/
}
var_clas = var5;
if (var_clas == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_clas->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_clas, ((val*)NULL)); /* == on <var_clas:nullable Array[MClass]>*/
var6 = var7;
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Finalizable";
var11 = standard___standard__NativeString___to_s_with_length(var10, 11l);
var9 = var11;
varonce8 = var9;
}
{
var12 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MModule__get_primitive_class]))(self, var9); /* get_primitive_class on <self:MModule>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model__MClass__mclass_type]))(var12); /* mclass_type on <var12:MClass>*/
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#get_primitive_class for (self: MModule, String): MClass */
val* nit__model___MModule___get_primitive_class(val* self, val* p0) {
val* var /* : MClass */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MClass] */;
val* var_cla /* var cla: nullable Array[MClass] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Array[MClass] */;
val* var_ /* var : Array[MClass] */;
val* var_6 /* var : Array[MClass] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var11 /* : POSetElement[MModule] */;
val* var12 /* : MModule */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
val* var25 /* : Model */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var30 /* : nullable Array[MClass] */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MClass */;
val* var34 /* : Sys */;
val* var35 /* : MClassKind */;
val* var36 /* : Sys */;
val* var37 /* : MVisibility */;
val* var_c38 /* var c: MClass */;
val* var39 /* : MClassDef */;
val* var40 /* : MClassType */;
val* var41 /* : Location */;
val* var_cladef /* var cladef: MClassDef */;
val* var42 /* : Array[MClassType] */;
val* var_43 /* var : Array[MClassType] */;
val* var44 /* : MClassType */;
val* var45 /* : Sys */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Sys */;
long var60 /* : Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
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
val* var79 /* : String */;
val* var80 /* : String */;
val* var_msg /* var msg: String */;
val* var_81 /* var : nullable Array[MClass] */;
val* var82 /* : Iterator[nullable Object] */;
val* var_83 /* var : ArrayIterator[MClass] */;
short int var84 /* : Bool */;
val* var85 /* : nullable Object */;
val* var_c86 /* var c: MClass */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var97 /* : Sys */;
val* var98 /* : nullable Object */;
var_name = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MModule>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__model__Model__get_mclasses_by_name]))(var1, var_name); /* get_mclasses_by_name on <var1:Model>*/
}
var_cla = var2;
if (var_cla == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_cla->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cla, ((val*)NULL)); /* != on <var_cla:nullable Array[MClass]>*/
var3 = var4;
}
if (var3){
var5 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_standard__array__Array__with_capacity]))(var5, 1l); /* with_capacity on <var5:Array[MClass]>*/
}
var_ = var5;
var_6 = var_cla;
{
var7 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_6); /* iterator on <var_6:Array[MClass]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:ArrayIterator[MClass]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:ArrayIterator[MClass]>*/
}
var_c = var10;
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(self); /* in_importation on <self:MModule>*/
}
{
var12 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var_c); /* intro_mmodule on <var_c:MClass>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_poset__POSetElement___60d_61d]))(var11, var12); /* <= on <var11:POSetElement[MModule]>*/
}
if (var13){
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_c); /* push on <var_:Array[MClass]>*/
}
} else {
}
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:ArrayIterator[MClass]>*/
}
var_cla = var_;
} else {
}
if (var_cla == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_cla->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla, ((val*)NULL)); /* == on <var_cla:nullable Array[MClass]>*/
var15 = var16;
}
var_17 = var15;
if (var15){
var14 = var_17;
} else {
{
var18 = ((short int(*)(val* self))(var_cla->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_cla); /* is_empty on <var_cla:nullable Array[MClass](Array[MClass])>*/
}
var14 = var18;
}
if (var14){
if (likely(varonce!=NULL)) {
var20 = varonce;
} else {
var21 = "Bool";
var22 = standard___standard__NativeString___to_s_with_length(var21, 4l);
var20 = var22;
varonce = var20;
}
{
var23 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var20); /* == on <var_name:String>*/
}
var_24 = var23;
if (var23){
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MModule>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Object";
var29 = standard___standard__NativeString___to_s_with_length(var28, 6l);
var27 = var29;
varonce26 = var27;
}
{
var30 = ((val*(*)(val* self, val* p0))(var25->class->vft[COLOR_nit__model__Model__get_mclasses_by_name]))(var25, var27); /* get_mclasses_by_name on <var25:Model>*/
}
if (var30 == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var30, ((val*)NULL)); /* != on <var30:nullable Array[MClass]>*/
var31 = var32;
}
var19 = var31;
} else {
var19 = var_24;
}
if (var19){
var33 = NEW_nit__MClass(&type_nit__MClass);
var34 = glob_sys;
{
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_nit__model__Sys__enum_kind]))(var34); /* enum_kind on <var34:Sys>*/
}
var36 = glob_sys;
{
var37 = ((val*(*)(val* self))(var36->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var36); /* public_visibility on <var36:Sys>*/
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_nit__model__MClass__intro_mmodule_61d]))(var33, self); /* intro_mmodule= on <var33:MClass>*/
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_nit__model__MClass__name_61d]))(var33, var_name); /* name= on <var33:MClass>*/
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_nit__model__MClass__setup_parameter_names]))(var33, ((val*)NULL)); /* setup_parameter_names on <var33:MClass>*/
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_nit__model__MClass__kind_61d]))(var33, var35); /* kind= on <var33:MClass>*/
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_nit__model__MClass__visibility_61d]))(var33, var37); /* visibility= on <var33:MClass>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_standard__kernel__Object__init]))(var33); /* init on <var33:MClass>*/
}
var_c38 = var33;
var39 = NEW_nit__MClassDef(&type_nit__MClassDef);
{
var40 = ((val*(*)(val* self))(var_c38->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_c38); /* mclass_type on <var_c38:MClass>*/
}
var41 = NEW_nit__Location(&type_nit__Location);
{
((void(*)(val* self, val* p0))(var41->class->vft[COLOR_nit__location__Location__file_61d]))(var41, ((val*)NULL)); /* file= on <var41:Location>*/
}
{
((void(*)(val* self, long p0))(var41->class->vft[COLOR_nit__location__Location__line_start_61d]))(var41, 0l); /* line_start= on <var41:Location>*/
}
{
((void(*)(val* self, long p0))(var41->class->vft[COLOR_nit__location__Location__line_end_61d]))(var41, 0l); /* line_end= on <var41:Location>*/
}
{
((void(*)(val* self, long p0))(var41->class->vft[COLOR_nit__location__Location__column_start_61d]))(var41, 0l); /* column_start= on <var41:Location>*/
}
{
((void(*)(val* self, long p0))(var41->class->vft[COLOR_nit__location__Location__column_end_61d]))(var41, 0l); /* column_end= on <var41:Location>*/
}
{
((void(*)(val* self))(var41->class->vft[COLOR_standard__kernel__Object__init]))(var41); /* init on <var41:Location>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__model__MClassDef__mmodule_61d]))(var39, self); /* mmodule= on <var39:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__model__MClassDef__bound_mtype_61d]))(var39, var40); /* bound_mtype= on <var39:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__model__MClassDef__location_61d]))(var39, var41); /* location= on <var39:MClassDef>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_standard__kernel__Object__init]))(var39); /* init on <var39:MClassDef>*/
}
var_cladef = var39;
var42 = NEW_standard__Array(&type_standard__Array__nit__MClassType);
{
((void(*)(val* self, long p0))(var42->class->vft[COLOR_standard__array__Array__with_capacity]))(var42, 1l); /* with_capacity on <var42:Array[MClassType]>*/
}
var_43 = var42;
{
var44 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__object_type]))(self); /* object_type on <self:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_43->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_43, var44); /* push on <var_43:Array[MClassType]>*/
}
{
((void(*)(val* self, val* p0))(var_cladef->class->vft[COLOR_nit__model__MClassDef__set_supertypes]))(var_cladef, var_43); /* set_supertypes on <var_cladef:MClassDef>*/
}
{
((void(*)(val* self))(var_cladef->class->vft[COLOR_nit__model__MClassDef__add_in_hierarchy]))(var_cladef); /* add_in_hierarchy on <var_cladef:MClassDef>*/
}
var = var_c38;
goto RET_LABEL;
} else {
}
var45 = glob_sys;
if (unlikely(varonce46==NULL)) {
var47 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Fatal Error: no primitive class ";
var51 = standard___standard__NativeString___to_s_with_length(var50, 32l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " in ";
var55 = standard___standard__NativeString___to_s_with_length(var54, 4l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce46;
varonce46 = NULL;
}
((struct instance_standard__NativeArray*)var47)->values[1]=var_name;
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:MModule>*/
}
((struct instance_standard__NativeArray*)var47)->values[3]=var56;
{
var57 = ((val*(*)(val* self))(var47->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_standard__file__Sys__print]))(var45, var57); /* print on <var45:Sys>*/
}
var58 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var58,1l) on <var58:Sys> */
exit(1l);
RET_LABEL59:(void)0;
}
}
} else {
}
if (var_cla == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 269);
fatal_exit(1);
} else {
var60 = ((long(*)(val* self))(var_cla->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_cla); /* length on <var_cla:nullable Array[MClass]>*/
}
{
{ /* Inline kernel#Int#!= (var60,1l) on <var60:Int> */
var63 = var60 == 1l;
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
if (unlikely(varonce65==NULL)) {
var66 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "Fatal Error: more than one primitive class ";
var70 = standard___standard__NativeString___to_s_with_length(var69, 43l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var66)->values[0]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = " in ";
var74 = standard___standard__NativeString___to_s_with_length(var73, 4l);
var72 = var74;
varonce71 = var72;
}
((struct instance_standard__NativeArray*)var66)->values[2]=var72;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = ":";
var78 = standard___standard__NativeString___to_s_with_length(var77, 1l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var66)->values[4]=var76;
} else {
var66 = varonce65;
varonce65 = NULL;
}
((struct instance_standard__NativeArray*)var66)->values[1]=var_name;
{
var79 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:MModule>*/
}
((struct instance_standard__NativeArray*)var66)->values[3]=var79;
{
var80 = ((val*(*)(val* self))(var66->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
var_msg = var80;
var_81 = var_cla;
if (var_81 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 271);
fatal_exit(1);
} else {
var82 = ((val*(*)(val* self))(var_81->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_81); /* iterator on <var_81:nullable Array[MClass]>*/
}
var_83 = var82;
for(;;) {
{
var84 = ((short int(*)(val* self))(var_83->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_83); /* is_ok on <var_83:ArrayIterator[MClass]>*/
}
if (var84){
{
var85 = ((val*(*)(val* self))(var_83->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_83); /* item on <var_83:ArrayIterator[MClass]>*/
}
var_c86 = var85;
if (unlikely(varonce87==NULL)) {
var88 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = " ";
var92 = standard___standard__NativeString___to_s_with_length(var91, 1l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var88)->values[0]=var90;
} else {
var88 = varonce87;
varonce87 = NULL;
}
{
var93 = ((val*(*)(val* self))(var_c86->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_c86); /* full_name on <var_c86:MClass>*/
}
((struct instance_standard__NativeArray*)var88)->values[1]=var93;
{
var94 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
var95 = ((val*(*)(val* self, val* p0))(var_msg->class->vft[COLOR_standard__string__String___43d]))(var_msg, var94); /* + on <var_msg:String>*/
}
var_msg = var95;
{
((void(*)(val* self))(var_83->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_83); /* next on <var_83:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label96;
}
}
BREAK_label96: (void)0;
{
((void(*)(val* self))(var_83->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_83); /* finish on <var_83:ArrayIterator[MClass]>*/
}
var97 = glob_sys;
{
((void(*)(val* self, val* p0))(var97->class->vft[COLOR_standard__file__Sys__print]))(var97, var_msg); /* print on <var97:Sys>*/
}
} else {
}
if (var_cla == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 275);
fatal_exit(1);
} else {
var98 = ((val*(*)(val* self))(var_cla->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_cla); /* first on <var_cla:nullable Array[MClass]>*/
}
var = var98;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#try_get_primitive_method for (self: MModule, String, MClass): nullable MMethod */
val* nit__model___MModule___try_get_primitive_method(val* self, val* p0, val* p1) {
val* var /* : nullable MMethod */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MClass */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MProperty] */;
val* var_props /* var props: nullable Array[MProperty] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_res /* var res: nullable MMethod */;
val* var_ /* var : Array[MProperty] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[MProperty] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : MClassDef */;
val* var_intro /* var intro: MClassDef */;
val* var11 /* : Array[MClassDef] */;
val* var_12 /* var : Array[MClassDef] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[MClassDef] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var17 /* : POSetElement[MModule] */;
val* var18 /* : Collection[nullable Object] */;
val* var19 /* : MModule */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable POSetElement[MClassDef] */;
val* var23 /* : Collection[nullable Object] */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : Sys */;
val* var30 /* : NativeArray[String] */;
static val* varonce;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : String */;
var_name = p0;
var_recv = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__model]))(self); /* model on <self:MModule>*/
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
var_res = ((val*)NULL);
var_ = var_props;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MProperty]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:ArrayIterator[MProperty]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:ArrayIterator[MProperty]>*/
}
var_mprop = var8;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var9 = 0;
} else {
var9 = var_mprop->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 285);
fatal_exit(1);
}
{
var10 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mprop); /* intro_mclassdef on <var_mprop:MProperty(MMethod)>*/
}
var_intro = var10;
{
var11 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__model__MClass__mclassdefs]))(var_recv); /* mclassdefs on <var_recv:MClass>*/
}
var_12 = var11;
{
var13 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_12); /* iterator on <var_12:Array[MClassDef]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:ArrayIterator[MClassDef]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var16;
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(self); /* in_importation on <self:MModule>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_poset__POSetElement__greaters]))(var17); /* greaters on <var17:POSetElement[MModule]>*/
}
{
var19 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
{
var20 = ((short int(*)(val* self, val* p0))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var18, var19); /* has on <var18:Collection[nullable Object](Collection[MModule])>*/
}
var21 = !var20;
if (var21){
goto BREAK_label;
} else {
}
{
var22 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(var_mclassdef); /* in_hierarchy on <var_mclassdef:MClassDef>*/
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 289);
fatal_exit(1);
} else {
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_poset__POSetElement__greaters]))(var22); /* greaters on <var22:nullable POSetElement[MClassDef]>*/
}
{
var24 = ((short int(*)(val* self, val* p0))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var23, var_intro); /* has on <var23:Collection[nullable Object](Collection[MClassDef])>*/
}
var25 = !var24;
if (var25){
goto BREAK_label;
} else {
}
if (var_res == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable MMethod>*/
var26 = var27;
}
if (var26){
var_res = var_mprop;
} else {
{
var28 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, var_mprop); /* != on <var_res:nullable MMethod(MMethod)>*/
}
if (var28){
var29 = glob_sys;
if (unlikely(varonce==NULL)) {
var30 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "Fatal Error: ambigous property name \'";
var34 = standard___standard__NativeString___to_s_with_length(var33, 37l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var30)->values[0]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "\'; conflict between ";
var38 = standard___standard__NativeString___to_s_with_length(var37, 20l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var30)->values[2]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " and ";
var42 = standard___standard__NativeString___to_s_with_length(var41, 5l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var30)->values[4]=var40;
} else {
var30 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var30)->values[1]=var_name;
{
var43 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mprop); /* full_name on <var_mprop:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var30)->values[3]=var43;
{
var44 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_res); /* full_name on <var_res:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var30)->values[5]=var44;
{
var45 = ((val*(*)(val* self))(var30->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce = var30;
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__file__Sys__print]))(var29, var45); /* print on <var29:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 294);
fatal_exit(1);
} else {
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label46;
}
}
BREAK_label46: (void)0;
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:ArrayIterator[MClassDef]>*/
}
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:ArrayIterator[MProperty]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#mmodule for (self: MClassDefSorter): MModule */
val* nit__model___nit__model__MClassDefSorter___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 305);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#mmodule= for (self: MClassDefSorter, MModule) */
void nit__model___nit__model__MClassDefSorter___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDefSorter___mmodule].val = p0; /* _mmodule on <self:MClassDefSorter> */
RET_LABEL:;
}
/* method model#MClassDefSorter#compare for (self: MClassDefSorter, MClassDef, MClassDef): Int */
long nit__model___nit__model__MClassDefSorter___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_a /* var a: MClassDef */;
val* var_b /* var b: MClassDef */;
val* var7 /* : MClass */;
val* var_ca /* var ca: MClass */;
val* var8 /* : MClass */;
val* var_cb /* var cb: MClass */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var11 /* : POSet[MClass] */;
long var12 /* : Int */;
val* var13 /* : MModule */;
val* var14 /* : Model */;
val* var15 /* : POSet[MClassDef] */;
long var16 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:MClassDef> isa COMPARED */
/* <p0:MClassDef> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 306);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:MClassDef> isa COMPARED */
/* <p1:MClassDef> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 306);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_a); /* mclass on <var_a:MClassDef>*/
}
var_ca = var7;
{
var8 = ((val*(*)(val* self))(var_b->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_b); /* mclass on <var_b:MClassDef>*/
}
var_cb = var8;
{
var9 = ((short int(*)(val* self, val* p0))(var_ca->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ca, var_cb); /* != on <var_ca:MClass>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDefSorter__mmodule]))(self); /* mmodule on <self:MClassDefSorter>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model__MModule__flatten_mclass_hierarchy]))(var10); /* flatten_mclass_hierarchy on <var10:MModule>*/
}
{
var12 = ((long(*)(val* self, val* p0, val* p1))(var11->class->vft[COLOR_standard__sorter__Comparator__compare]))(var11, var_ca, var_cb); /* compare on <var11:POSet[MClass]>*/
}
var = var12;
goto RET_LABEL;
} else {
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDefSorter__mmodule]))(self); /* mmodule on <self:MClassDefSorter>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model_base__MEntity__model]))(var13); /* model on <var13:MModule>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__Model__mclassdef_hierarchy]))(var14); /* mclassdef_hierarchy on <var14:Model>*/
}
{
var16 = ((long(*)(val* self, val* p0, val* p1))(var15->class->vft[COLOR_standard__sorter__Comparator__compare]))(var15, var_a, var_b); /* compare on <var15:POSet[MClassDef]>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#init for (self: MClassDefSorter) */
void nit__model___nit__model__MClassDefSorter___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__model___nit__model__MClassDefSorter___standard__kernel__Object__init]))(self); /* init on <self:MClassDefSorter>*/
}
RET_LABEL:;
}
/* method model#MPropDefSorter#mmodule for (self: MPropDefSorter): MModule */
val* nit__model___nit__model__MPropDefSorter___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 318);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDefSorter#mmodule= for (self: MPropDefSorter, MModule) */
void nit__model___nit__model__MPropDefSorter___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDefSorter___mmodule].val = p0; /* _mmodule on <self:MPropDefSorter> */
RET_LABEL:;
}
/* method model#MPropDefSorter#compare for (self: MPropDefSorter, MPropDef, MPropDef): Int */
long nit__model___nit__model__MPropDefSorter___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_pa /* var pa: MPropDef */;
val* var_pb /* var pb: MPropDef */;
val* var7 /* : MClassDef */;
val* var_a /* var a: MClassDef */;
val* var8 /* : MClassDef */;
val* var_b /* var b: MClassDef */;
val* var9 /* : MClass */;
val* var_ca /* var ca: MClass */;
val* var10 /* : MClass */;
val* var_cb /* var cb: MClass */;
short int var11 /* : Bool */;
val* var12 /* : MModule */;
val* var13 /* : POSet[MClass] */;
long var14 /* : Int */;
val* var15 /* : MModule */;
val* var16 /* : Model */;
val* var17 /* : POSet[MClassDef] */;
long var18 /* : Int */;
/* Covariant cast for argument 0 (pa) <p0:MPropDef> isa COMPARED */
/* <p0:MPropDef> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 319);
fatal_exit(1);
}
/* Covariant cast for argument 1 (pb) <p1:MPropDef> isa COMPARED */
/* <p1:MPropDef> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 319);
fatal_exit(1);
}
var_pa = p0;
var_pb = p1;
{
var7 = ((val*(*)(val* self))(var_pa->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_pa); /* mclassdef on <var_pa:MPropDef>*/
}
var_a = var7;
{
var8 = ((val*(*)(val* self))(var_pb->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_pb); /* mclassdef on <var_pb:MPropDef>*/
}
var_b = var8;
{
var9 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_a); /* mclass on <var_a:MClassDef>*/
}
var_ca = var9;
{
var10 = ((val*(*)(val* self))(var_b->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_b); /* mclass on <var_b:MClassDef>*/
}
var_cb = var10;
{
var11 = ((short int(*)(val* self, val* p0))(var_ca->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ca, var_cb); /* != on <var_ca:MClass>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDefSorter__mmodule]))(self); /* mmodule on <self:MPropDefSorter>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model__MModule__flatten_mclass_hierarchy]))(var12); /* flatten_mclass_hierarchy on <var12:MModule>*/
}
{
var14 = ((long(*)(val* self, val* p0, val* p1))(var13->class->vft[COLOR_standard__sorter__Comparator__compare]))(var13, var_ca, var_cb); /* compare on <var13:POSet[MClass]>*/
}
var = var14;
goto RET_LABEL;
} else {
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDefSorter__mmodule]))(self); /* mmodule on <self:MPropDefSorter>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model_base__MEntity__model]))(var15); /* model on <var15:MModule>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__model__Model__mclassdef_hierarchy]))(var16); /* mclassdef_hierarchy on <var16:Model>*/
}
{
var18 = ((long(*)(val* self, val* p0, val* p1))(var17->class->vft[COLOR_standard__sorter__Comparator__compare]))(var17, var_a, var_b); /* compare on <var17:POSet[MClassDef]>*/
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDefSorter#init for (self: MPropDefSorter) */
void nit__model___nit__model__MPropDefSorter___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__model___nit__model__MPropDefSorter___standard__kernel__Object__init]))(self); /* init on <self:MPropDefSorter>*/
}
RET_LABEL:;
}
/* method model#MClass#intro_mmodule for (self: MClass): MModule */
val* nit___nit__MClass___intro_mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 354);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro_mmodule= for (self: MClass, MModule) */
void nit___nit__MClass___intro_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___intro_mmodule].val = p0; /* _intro_mmodule on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#name for (self: MClass): String */
val* nit___nit__MClass___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 359);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#name= for (self: MClass, String) */
void nit___nit__MClass___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___name].val = p0; /* _name on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#full_name for (self: MClass): String */
val* nit___nit__MClass___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MModule */;
val* var11 /* : MVisibility */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClass___full_name].val != NULL; /* _full_name on <self:MClass> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClass___full_name].val; /* _full_name on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 363);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "::";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(self); /* intro_mmodule on <self:MClass>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__visibility]))(self); /* visibility on <self:MClass>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__mmodule__MModule__namespace_for]))(var10, var11); /* namespace_for on <var10:MModule>*/
}
((struct instance_standard__NativeArray*)var5)->values[0]=var12;
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
((struct instance_standard__NativeArray*)var5)->values[2]=var13;
{
var14 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var14;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MClass___full_name].val = var3; /* _full_name on <self:MClass> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MClass#full_name= for (self: MClass, String) */
void nit___nit__MClass___full_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___full_name].val = p0; /* _full_name on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#c_name for (self: MClass): String */
val* nit___nit__MClass___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MModule */;
val* var11 /* : MVisibility */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClass___c_name].val != NULL; /* _c_name on <self:MClass> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClass___c_name].val; /* _c_name on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 371);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "__";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(self); /* intro_mmodule on <self:MClass>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__visibility]))(self); /* visibility on <self:MClass>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__mmodule__MModule__c_namespace_for]))(var10, var11); /* c_namespace_for on <var10:MModule>*/
}
((struct instance_standard__NativeArray*)var5)->values[0]=var12;
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__Text__to_cmangle]))(var13); /* to_cmangle on <var13:String>*/
}
((struct instance_standard__NativeArray*)var5)->values[2]=var14;
{
var15 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var15;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MClass___c_name].val = var3; /* _c_name on <self:MClass> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MClass#c_name= for (self: MClass, String) */
void nit___nit__MClass___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___c_name].val = p0; /* _c_name on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#arity for (self: MClass): Int */
long nit___nit__MClass___arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#arity= for (self: MClass, Int) */
void nit___nit__MClass___arity_61d(val* self, long p0) {
self->attrs[COLOR_nit__model__MClass___arity].l = p0; /* _arity on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#mparameters for (self: MClass): Array[MParameterType] */
val* nit___nit__MClass___mparameters(val* self) {
val* var /* : Array[MParameterType] */;
val* var1 /* : Array[MParameterType] */;
var1 = self->attrs[COLOR_nit__model__MClass___mparameters].val; /* _mparameters on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 379);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mparameters= for (self: MClass, Array[MParameterType]) */
void nit___nit__MClass___mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___mparameters].val = p0; /* _mparameters on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#signature_to_s for (self: MClass): String */
val* nit___nit__MClass___signature_to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
val* var6 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
long var_i /* var i: Int */;
long var11 /* : Int */;
long var_ /* var : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : Array[MParameterType] */;
val* var28 /* : nullable Object */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : MClassDef */;
val* var35 /* : MClassType */;
val* var36 /* : Array[MType] */;
val* var37 /* : nullable Object */;
val* var38 /* : String */;
long var39 /* : Int */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__arity]))(self); /* arity on <self:MClass>*/
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
var = var5;
goto RET_LABEL;
} else {
}
var6 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:FlatBuffer>*/
}
var_res = var6;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var7); /* append on <var_res:FlatBuffer>*/
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "[";
var10 = standard___standard__NativeString___to_s_with_length(var9, 1l);
var8 = var10;
varonce = var8;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var8); /* append on <var_res:FlatBuffer>*/
}
var_i = 0l;
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__arity]))(self); /* arity on <self:MClass>*/
}
var_ = var11;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var14 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var15 = var_i < var_;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var18 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var22 = var_i > 0l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ", ";
var26 = standard___standard__NativeString___to_s_with_length(var25, 2l);
var24 = var26;
varonce23 = var24;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var24); /* append on <var_res:FlatBuffer>*/
}
} else {
}
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mparameters]))(self); /* mparameters on <self:MClass>*/
}
{
var28 = ((val*(*)(val* self, long p0))(var27->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var27, var_i); /* [] on <var27:Array[MParameterType]>*/
}
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_nit__model_base__MEntity__name]))(var28); /* name on <var28:nullable Object(MParameterType)>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var29); /* append on <var_res:FlatBuffer>*/
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = ": ";
var33 = standard___standard__NativeString___to_s_with_length(var32, 2l);
var31 = var33;
varonce30 = var31;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var31); /* append on <var_res:FlatBuffer>*/
}
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__intro]))(self); /* intro on <self:MClass>*/
}
{
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var34); /* bound_mtype on <var34:MClassDef>*/
}
{
var36 = ((val*(*)(val* self))(var35->class->vft[COLOR_nit__model__MClassType__arguments]))(var35); /* arguments on <var35:MClassType>*/
}
{
var37 = ((val*(*)(val* self, long p0))(var36->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var36, var_i); /* [] on <var36:Array[MType]>*/
}
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__Object__to_s]))(var37); /* to_s on <var37:nullable Object(MType)>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var38); /* append on <var_res:FlatBuffer>*/
}
var39 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var39;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "]";
var43 = standard___standard__NativeString___to_s_with_length(var42, 1l);
var41 = var43;
varonce40 = var41;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var41); /* append on <var_res:FlatBuffer>*/
}
{
var44 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:FlatBuffer>*/
}
var = var44;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#setup_parameter_names for (self: MClass, nullable Array[String]) */
void nit___nit__MClass___setup_parameter_names(val* self, val* p0) {
val* var_parameter_names /* var parameter_names: nullable Array[String] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[MParameterType] */;
val* var_mparametertypes /* var mparametertypes: Array[MParameterType] */;
long var_i /* var i: Int */;
long var11 /* : Int */;
long var_ /* var : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : MParameterType */;
val* var20 /* : nullable Object */;
val* var_mparametertype /* var mparametertype: MParameterType */;
long var21 /* : Int */;
val* var22 /* : MGenericType */;
val* var_mclass_type /* var mclass_type: MGenericType */;
val* var23 /* : HashMap[Array[MType], MGenericType] */;
val* var24 /* : MClassType */;
var_parameter_names = p0;
if (var_parameter_names == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_parameter_names->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_parameter_names, ((val*)NULL)); /* == on <var_parameter_names:nullable Array[String]>*/
var = var1;
}
if (var){
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__model__MClass__arity_61d]))(self, 0l); /* arity= on <self:MClass>*/
}
} else {
{
var2 = ((long(*)(val* self))(var_parameter_names->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_parameter_names); /* length on <var_parameter_names:nullable Array[String](Array[String])>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__model__MClass__arity_61d]))(self, var2); /* arity= on <self:MClass>*/
}
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__arity]))(self); /* arity on <self:MClass>*/
}
{
{ /* Inline kernel#Int#> (var3,0l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var7 = var3 > 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
if (var_parameter_names == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_parameter_names->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_parameter_names, ((val*)NULL)); /* != on <var_parameter_names:nullable Array[String]>*/
var8 = var9;
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 418);
fatal_exit(1);
}
var10 = NEW_standard__Array(&type_standard__Array__nit__MParameterType);
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:Array[MParameterType]>*/
}
var_mparametertypes = var10;
var_i = 0l;
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__arity]))(self); /* arity on <self:MClass>*/
}
var_ = var11;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var14 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var18 = var_i < var_;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var19 = NEW_nit__MParameterType(&type_nit__MParameterType);
{
var20 = ((val*(*)(val* self, long p0))(var_parameter_names->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_parameter_names, var_i); /* [] on <var_parameter_names:nullable Array[String](Array[String])>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nit__model__MParameterType__mclass_61d]))(var19, self); /* mclass= on <var19:MParameterType>*/
}
{
((void(*)(val* self, long p0))(var19->class->vft[COLOR_nit__model__MParameterType__rank_61d]))(var19, var_i); /* rank= on <var19:MParameterType>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nit__model__MParameterType__name_61d]))(var19, var20); /* name= on <var19:MParameterType>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_standard__kernel__Object__init]))(var19); /* init on <var19:MParameterType>*/
}
var_mparametertype = var19;
{
((void(*)(val* self, val* p0))(var_mparametertypes->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mparametertypes, var_mparametertype); /* add on <var_mparametertypes:Array[MParameterType]>*/
}
var21 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var21;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClass__mparameters_61d]))(self, var_mparametertypes); /* mparameters= on <self:MClass>*/
}
var22 = NEW_nit__MGenericType(&type_nit__MGenericType);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__model__MClassType__mclass_61d]))(var22, self); /* mclass= on <var22:MGenericType>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__model__MClassType__arguments_61d]))(var22, var_mparametertypes); /* arguments= on <var22:MGenericType>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:MGenericType>*/
}
var_mclass_type = var22;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClass__mclass_type_61d]))(self, var_mclass_type); /* mclass_type= on <self:MClass>*/
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__get_mtype_cache]))(self); /* get_mtype_cache on <self:MClass>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var23->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var23, var_mparametertypes, var_mclass_type); /* []= on <var23:HashMap[Array[MType], MGenericType]>*/
}
} else {
var24 = NEW_nit__MClassType(&type_nit__MClassType);
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_nit__model__MClassType__mclass_61d]))(var24, self); /* mclass= on <var24:MClassType>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_standard__kernel__Object__init]))(var24); /* init on <var24:MClassType>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClass__mclass_type_61d]))(self, var24); /* mclass_type= on <self:MClass>*/
}
}
RET_LABEL:;
}
/* method model#MClass#kind for (self: MClass): MClassKind */
val* nit___nit__MClass___kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = self->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 433);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#kind= for (self: MClass, MClassKind) */
void nit___nit__MClass___kind_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___kind].val = p0; /* _kind on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#visibility for (self: MClass): MVisibility */
val* nit___nit__MClass___visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 437);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#visibility= for (self: MClass, MVisibility) */
void nit___nit__MClass___visibility_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___visibility].val = p0; /* _visibility on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#init for (self: MClass) */
void nit___nit__MClass___standard__kernel__Object__init(val* self) {
val* var /* : MModule */;
val* var1 /* : Array[MClass] */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
val* var_model /* var model: Model */;
val* var4 /* : MultiHashMap[String, MClass] */;
val* var5 /* : String */;
val* var6 /* : Array[MClass] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MClass___standard__kernel__Object__init]))(self); /* init on <self:MClass>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(self); /* intro_mmodule on <self:MClass>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model__MModule__intro_mclasses]))(var); /* intro_mclasses on <var:MModule>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var1, self); /* add on <var1:Array[MClass]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(self); /* intro_mmodule on <self:MClass>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model_base__MEntity__model]))(var2); /* model on <var2:MModule>*/
}
var_model = var3;
{
var4 = ((val*(*)(val* self))(var_model->class->vft[COLOR_nit__model__Model__mclasses_by_name]))(var_model); /* mclasses_by_name on <var_model:Model>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_more_collections__MultiHashMap__add_one]))(var4, var5, self); /* add_one on <var4:MultiHashMap[String, MClass]>*/
}
{
var6 = ((val*(*)(val* self))(var_model->class->vft[COLOR_nit__model__Model__mclasses]))(var_model); /* mclasses on <var_model:Model>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var6, self); /* add on <var6:Array[MClass]>*/
}
RET_LABEL:;
}
/* method model#MClass#model for (self: MClass): Model */
val* nit___nit__MClass___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MModule */;
val* var2 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(self); /* intro_mmodule on <self:MClass>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1); /* model on <var1:MModule>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#mclassdefs for (self: MClass): Array[MClassDef] */
val* nit___nit__MClass___mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 451);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclassdefs= for (self: MClass, Array[MClassDef]) */
void nit___nit__MClass___mclassdefs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___mclassdefs].val = p0; /* _mclassdefs on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#to_s for (self: MClass): String */
val* nit___nit__MClass___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#intro for (self: MClass): MClassDef */
val* nit___nit__MClass___intro(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 457);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro= for (self: MClass, MClassDef) */
void nit___nit__MClass___intro_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___intro].val = p0; /* _intro on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#try_intro for (self: MClass): nullable MClassDef */
val* nit___nit__MClass___try_intro(val* self) {
val* var /* : nullable MClassDef */;
short int var1 /* : Bool */;
val* var2 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__model__MClass___intro].val != NULL; /* _intro on <self:MClass> */
if (var1){
var2 = self->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 469);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method model#MClass#in_hierarchy for (self: MClass, MModule): POSetElement[MClass] */
val* nit___nit__MClass___in_hierarchy(val* self, val* p0) {
val* var /* : POSetElement[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : POSet[MClass] */;
val* var2 /* : POSetElement[nullable Object] */;
var_mmodule = p0;
{
var1 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__model__MModule__flatten_mclass_hierarchy]))(var_mmodule); /* flatten_mclass_hierarchy on <var_mmodule:MModule>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_poset__POSet___91d_93d]))(var1, self); /* [] on <var1:POSet[MClass]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#mclass_type for (self: MClass): MClassType */
val* nit___nit__MClass___mclass_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 481);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclass_type= for (self: MClass, MClassType) */
void nit___nit__MClass___mclass_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___mclass_type].val = p0; /* _mclass_type on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#get_mtype for (self: MClass, Array[MType]): MClassType */
val* nit___nit__MClass___get_mtype(val* self, val* p0) {
val* var /* : MClassType */;
val* var_mtype_arguments /* var mtype_arguments: Array[MType] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassType */;
val* var11 /* : HashMap[Array[MType], MGenericType] */;
val* var12 /* : nullable Object */;
val* var_res /* var res: nullable MGenericType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MGenericType */;
val* var16 /* : HashMap[Array[MType], MGenericType] */;
val* var17 /* : Array[nullable Object] */;
var_mtype_arguments = p0;
{
var1 = ((long(*)(val* self))(var_mtype_arguments->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_mtype_arguments); /* length on <var_mtype_arguments:Array[MType]>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__arity]))(self); /* arity on <self:MClass>*/
}
{
{ /* Inline kernel#Int#== (var1,var2) on <var1:Int> */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 504);
fatal_exit(1);
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__arity]))(self); /* arity on <self:MClass>*/
}
{
{ /* Inline kernel#Int#== (var6,0l) on <var6:Int> */
var9 = var6 == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclass_type]))(self); /* mclass_type on <self:MClass>*/
}
var = var10;
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__get_mtype_cache]))(self); /* get_mtype_cache on <self:MClass>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var11, var_mtype_arguments); /* get_or_null on <var11:HashMap[Array[MType], MGenericType]>*/
}
var_res = var12;
if (var_res == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable MGenericType>*/
var13 = var14;
}
if (var13){
var = var_res;
goto RET_LABEL;
} else {
}
var15 = NEW_nit__MGenericType(&type_nit__MGenericType);
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_nit__model__MClassType__mclass_61d]))(var15, self); /* mclass= on <var15:MGenericType>*/
}
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_nit__model__MClassType__arguments_61d]))(var15, var_mtype_arguments); /* arguments= on <var15:MGenericType>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_standard__kernel__Object__init]))(var15); /* init on <var15:MGenericType>*/
}
var_res = var15;
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__get_mtype_cache]))(self); /* get_mtype_cache on <self:MClass>*/
}
{
var17 = ((val*(*)(val* self))(var_mtype_arguments->class->vft[COLOR_standard__array__Collection__to_a]))(var_mtype_arguments); /* to_a on <var_mtype_arguments:Array[MType]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var16->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var16, var17, var_res); /* []= on <var16:HashMap[Array[MType], MGenericType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#get_mtype_cache for (self: MClass): HashMap[Array[MType], MGenericType] */
val* nit___nit__MClass___get_mtype_cache(val* self) {
val* var /* : HashMap[Array[MType], MGenericType] */;
val* var1 /* : HashMap[Array[MType], MGenericType] */;
var1 = self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 513);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#get_mtype_cache= for (self: MClass, HashMap[Array[MType], MGenericType]) */
void nit___nit__MClass___get_mtype_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val = p0; /* _get_mtype_cache on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#has_new_factory for (self: MClass): Bool */
short int nit___nit__MClass___has_new_factory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MClass___has_new_factory].s; /* _has_new_factory on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#has_new_factory= for (self: MClass, Bool) */
void nit___nit__MClass___has_new_factory_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MClass___has_new_factory].s = p0; /* _has_new_factory on <self:MClass> */
RET_LABEL:;
}
/* method model#MClassDef#mmodule for (self: MClassDef): MModule */
val* nit___nit__MClassDef___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 535);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mmodule= for (self: MClassDef, MModule) */
void nit___nit__MClassDef___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___mmodule].val = p0; /* _mmodule on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#mclass for (self: MClassDef): MClass */
val* nit___nit__MClassDef___mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 538);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mclass= for (self: MClassDef, MClass) */
void nit___nit__MClassDef___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___mclass].val = p0; /* _mclass on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#bound_mtype for (self: MClassDef): MClassType */
val* nit___nit__MClassDef___bound_mtype(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 541);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#bound_mtype= for (self: MClassDef, MClassType) */
void nit___nit__MClassDef___bound_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val = p0; /* _bound_mtype on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#location for (self: MClassDef): Location */
val* nit___nit__MClassDef___location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nit__model__MClassDef___location].val; /* _location on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#location= for (self: MClassDef, Location) */
void nit___nit__MClassDef___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___location].val = p0; /* _location on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#to_s for (self: MClassDef): String */
val* nit___nit__MClassDef___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassDef___to_s].val; /* _to_s on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#to_s= for (self: MClassDef, String) */
void nit___nit__MClassDef___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___to_s].val = p0; /* _to_s on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#init for (self: MClassDef) */
void nit___nit__MClassDef___standard__kernel__Object__init(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClass */;
val* var2 /* : MModule */;
val* var3 /* : Array[MClassDef] */;
val* var4 /* : MClass */;
val* var5 /* : Array[MClassDef] */;
val* var6 /* : MClass */;
val* var7 /* : MModule */;
val* var8 /* : MModule */;
short int var9 /* : Bool */;
val* var10 /* : MClass */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MClass */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : MModule */;
val* var20 /* : String */;
val* var21 /* : MClass */;
val* var22 /* : String */;
val* var23 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MClassDef___standard__kernel__Object__init]))(self); /* init on <self:MClassDef>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(self); /* bound_mtype on <self:MClassDef>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model__MClassType__mclass]))(var); /* mclass on <var:MClassType>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClassDef__mclass_61d]))(self, var1); /* mclass= on <self:MClassDef>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MModule__mclassdefs]))(var2); /* mclassdefs on <var2:MModule>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var3, self); /* add on <var3:Array[MClassDef]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__model__MClass__mclassdefs]))(var4); /* mclassdefs on <var4:MClass>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var5, self); /* add on <var5:Array[MClassDef]>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var6); /* intro_mmodule on <var6:MClass>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var7, var8); /* == on <var7:MModule>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
var11 = var10->attrs[COLOR_nit__model__MClass___intro].val != NULL; /* _intro on <var10:MClass> */
var12 = !var11;
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
fatal_exit(1);
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__model__MClass__intro_61d]))(var13, self); /* intro= on <var13:MClass>*/
}
} else {
}
if (unlikely(varonce==NULL)) {
var14 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "#";
var18 = standard___standard__NativeString___to_s_with_length(var17, 1l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var14)->values[1]=var16;
} else {
var14 = varonce;
varonce = NULL;
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__Object__to_s]))(var19); /* to_s on <var19:MModule>*/
}
((struct instance_standard__NativeArray*)var14)->values[0]=var20;
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__Object__to_s]))(var21); /* to_s on <var21:MClass>*/
}
((struct instance_standard__NativeArray*)var14)->values[2]=var22;
{
var23 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClassDef__to_s_61d]))(self, var23); /* to_s= on <self:MClassDef>*/
}
RET_LABEL:;
}
/* method model#MClassDef#name for (self: MClassDef): String */
val* nit___nit__MClassDef___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__name]))(var1); /* name on <var1:MClass>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDef#full_name for (self: MClassDef): String */
val* nit___nit__MClassDef___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : MModule */;
val* var12 /* : MClass */;
val* var13 /* : MVisibility */;
val* var14 /* : String */;
val* var15 /* : MClass */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : MClass */;
val* var19 /* : MModule */;
val* var20 /* : nullable MProject */;
val* var21 /* : MModule */;
val* var22 /* : nullable MProject */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : MModule */;
val* var32 /* : String */;
val* var33 /* : MClass */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : MClass */;
val* var37 /* : MVisibility */;
val* var38 /* : Sys */;
val* var39 /* : MVisibility */;
short int var40 /* : Bool */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : MModule */;
val* var48 /* : String */;
val* var49 /* : MClass */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : MModule */;
val* var63 /* : String */;
val* var64 /* : MClass */;
val* var65 /* : MModule */;
val* var66 /* : String */;
val* var67 /* : MClass */;
val* var68 /* : String */;
val* var69 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassDef___full_name].val != NULL; /* _full_name on <self:MClassDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClassDef___full_name].val; /* _full_name on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 575);
fatal_exit(1);
}
} else {
{
{
var5 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__is_intro]))(self); /* is_intro on <self:MClassDef>*/
}
if (var5){
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "#";
var10 = standard___standard__NativeString___to_s_with_length(var9, 1l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model__MClass__visibility]))(var12); /* visibility on <var12:MClass>*/
}
{
var14 = ((val*(*)(val* self, val* p0))(var11->class->vft[COLOR_nit__mmodule__MModule__namespace_for]))(var11, var13); /* namespace_for on <var11:MModule>*/
}
((struct instance_standard__NativeArray*)var6)->values[0]=var14;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model_base__MEntity__name]))(var15); /* name on <var15:MClass>*/
}
((struct instance_standard__NativeArray*)var6)->values[2]=var16;
{
var17 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var3 = var17;
goto RET_LABEL4;
} else {
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var18); /* intro_mmodule on <var18:MClass>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__mmodule__MModule__mproject]))(var19); /* mproject on <var19:MModule>*/
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__mmodule__MModule__mproject]))(var21); /* mproject on <var21:MModule>*/
}
if (var20 == NULL) {
var23 = (var22 != NULL);
} else {
var24 = ((short int(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var20, var22); /* != on <var20:nullable MProject>*/
var23 = var24;
}
if (var23){
if (unlikely(varonce25==NULL)) {
var26 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "#";
var30 = standard___standard__NativeString___to_s_with_length(var29, 1l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var26)->values[1]=var28;
} else {
var26 = varonce25;
varonce25 = NULL;
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var32 = ((val*(*)(val* self))(var31->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var31); /* full_name on <var31:MModule>*/
}
((struct instance_standard__NativeArray*)var26)->values[0]=var32;
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var34 = ((val*(*)(val* self))(var33->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var33); /* full_name on <var33:MClass>*/
}
((struct instance_standard__NativeArray*)var26)->values[2]=var34;
{
var35 = ((val*(*)(val* self))(var26->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
var3 = var35;
goto RET_LABEL4;
} else {
{
var36 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var37 = ((val*(*)(val* self))(var36->class->vft[COLOR_nit__model__MClass__visibility]))(var36); /* visibility on <var36:MClass>*/
}
var38 = glob_sys;
{
var39 = ((val*(*)(val* self))(var38->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var38); /* private_visibility on <var38:Sys>*/
}
{
var40 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_standard__kernel__Comparable___62d]))(var37, var39); /* > on <var37:MVisibility>*/
}
if (var40){
if (unlikely(varonce41==NULL)) {
var42 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "#";
var46 = standard___standard__NativeString___to_s_with_length(var45, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var42)->values[1]=var44;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var48 = ((val*(*)(val* self))(var47->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var47); /* full_name on <var47:MModule>*/
}
((struct instance_standard__NativeArray*)var42)->values[0]=var48;
{
var49 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var50 = ((val*(*)(val* self))(var49->class->vft[COLOR_nit__model_base__MEntity__name]))(var49); /* name on <var49:MClass>*/
}
((struct instance_standard__NativeArray*)var42)->values[2]=var50;
{
var51 = ((val*(*)(val* self))(var42->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
var3 = var51;
goto RET_LABEL4;
} else {
if (unlikely(varonce52==NULL)) {
var53 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "#::";
var57 = standard___standard__NativeString___to_s_with_length(var56, 3l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var53)->values[1]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "::";
var61 = standard___standard__NativeString___to_s_with_length(var60, 2l);
var59 = var61;
varonce58 = var59;
}
((struct instance_standard__NativeArray*)var53)->values[3]=var59;
} else {
var53 = varonce52;
varonce52 = NULL;
}
{
var62 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var63 = ((val*(*)(val* self))(var62->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var62); /* full_name on <var62:MModule>*/
}
((struct instance_standard__NativeArray*)var53)->values[0]=var63;
{
var64 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var65 = ((val*(*)(val* self))(var64->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var64); /* intro_mmodule on <var64:MClass>*/
}
{
var66 = ((val*(*)(val* self))(var65->class->vft[COLOR_nit__model_base__MEntity__name]))(var65); /* name on <var65:MModule>*/
}
((struct instance_standard__NativeArray*)var53)->values[2]=var66;
{
var67 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var68 = ((val*(*)(val* self))(var67->class->vft[COLOR_nit__model_base__MEntity__name]))(var67); /* name on <var67:MClass>*/
}
((struct instance_standard__NativeArray*)var53)->values[4]=var68;
{
var69 = ((val*(*)(val* self))(var53->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
var3 = var69;
goto RET_LABEL4;
}
}
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MClassDef___full_name].val = var3; /* _full_name on <self:MClassDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MClassDef#full_name= for (self: MClassDef, String) */
void nit___nit__MClassDef___full_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___full_name].val = p0; /* _full_name on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#c_name for (self: MClassDef): String */
val* nit___nit__MClassDef___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : MModule */;
val* var12 /* : MClass */;
val* var13 /* : MVisibility */;
val* var14 /* : String */;
val* var15 /* : MClass */;
val* var16 /* : String */;
val* var17 /* : String */;
short int var18 /* : Bool */;
val* var19 /* : MClass */;
val* var20 /* : MModule */;
val* var21 /* : nullable MProject */;
val* var22 /* : MModule */;
val* var23 /* : nullable MProject */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
val* var26 /* : MClass */;
val* var27 /* : MVisibility */;
val* var28 /* : Sys */;
val* var29 /* : MVisibility */;
short int var30 /* : Bool */;
val* var32 /* : NativeArray[String] */;
static val* varonce31;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
val* var37 /* : MModule */;
val* var38 /* : String */;
val* var39 /* : MClass */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
val* var49 /* : MModule */;
val* var50 /* : String */;
val* var51 /* : MClass */;
val* var52 /* : String */;
val* var53 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassDef___c_name].val != NULL; /* _c_name on <self:MClassDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClassDef___c_name].val; /* _c_name on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 600);
fatal_exit(1);
}
} else {
{
{
var5 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__is_intro]))(self); /* is_intro on <self:MClassDef>*/
}
if (var5){
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "___";
var10 = standard___standard__NativeString___to_s_with_length(var9, 3l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model__MClass__visibility]))(var12); /* visibility on <var12:MClass>*/
}
{
var14 = ((val*(*)(val* self, val* p0))(var11->class->vft[COLOR_nit__mmodule__MModule__c_namespace_for]))(var11, var13); /* c_namespace_for on <var11:MModule>*/
}
((struct instance_standard__NativeArray*)var6)->values[0]=var14;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var15); /* c_name on <var15:MClass>*/
}
((struct instance_standard__NativeArray*)var6)->values[2]=var16;
{
var17 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var3 = var17;
goto RET_LABEL4;
} else {
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var19); /* intro_mmodule on <var19:MClass>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__mmodule__MModule__mproject]))(var20); /* mproject on <var20:MModule>*/
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__mmodule__MModule__mproject]))(var22); /* mproject on <var22:MModule>*/
}
if (var21 == NULL) {
var24 = (var23 == NULL);
} else {
var25 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var23); /* == on <var21:nullable MProject>*/
var24 = var25;
}
var_ = var24;
if (var24){
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var27 = ((val*(*)(val* self))(var26->class->vft[COLOR_nit__model__MClass__visibility]))(var26); /* visibility on <var26:MClass>*/
}
var28 = glob_sys;
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var28); /* private_visibility on <var28:Sys>*/
}
{
var30 = ((short int(*)(val* self, val* p0))(var27->class->vft[COLOR_standard__kernel__Comparable___62d]))(var27, var29); /* > on <var27:MVisibility>*/
}
var18 = var30;
} else {
var18 = var_;
}
if (var18){
if (unlikely(varonce31==NULL)) {
var32 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "___";
var36 = standard___standard__NativeString___to_s_with_length(var35, 3l);
var34 = var36;
varonce33 = var34;
}
((struct instance_standard__NativeArray*)var32)->values[1]=var34;
} else {
var32 = varonce31;
varonce31 = NULL;
}
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var37); /* c_name on <var37:MModule>*/
}
((struct instance_standard__NativeArray*)var32)->values[0]=var38;
{
var39 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var40 = ((val*(*)(val* self))(var39->class->vft[COLOR_nit__model_base__MEntity__name]))(var39); /* name on <var39:MClass>*/
}
{
var41 = ((val*(*)(val* self))(var40->class->vft[COLOR_standard__string__Text__to_cmangle]))(var40); /* to_cmangle on <var40:String>*/
}
((struct instance_standard__NativeArray*)var32)->values[2]=var41;
{
var42 = ((val*(*)(val* self))(var32->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce31 = var32;
var3 = var42;
goto RET_LABEL4;
} else {
if (unlikely(varonce43==NULL)) {
var44 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "___";
var48 = standard___standard__NativeString___to_s_with_length(var47, 3l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var44)->values[1]=var46;
} else {
var44 = varonce43;
varonce43 = NULL;
}
{
var49 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var50 = ((val*(*)(val* self))(var49->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var49); /* c_name on <var49:MModule>*/
}
((struct instance_standard__NativeArray*)var44)->values[0]=var50;
{
var51 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var52 = ((val*(*)(val* self))(var51->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var51); /* c_name on <var51:MClass>*/
}
((struct instance_standard__NativeArray*)var44)->values[2]=var52;
{
var53 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
var3 = var53;
goto RET_LABEL4;
}
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MClassDef___c_name].val = var3; /* _c_name on <self:MClassDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MClassDef#c_name= for (self: MClassDef, String) */
void nit___nit__MClassDef___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___c_name].val = p0; /* _c_name on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#model for (self: MClassDef): Model */
val* nit___nit__MClassDef___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MModule */;
val* var2 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1); /* model on <var1:MModule>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDef#supertypes for (self: MClassDef): Array[MClassType] */
val* nit___nit__MClassDef___supertypes(val* self) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = self->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 612);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#supertypes= for (self: MClassDef, Array[MClassType]) */
void nit___nit__MClassDef___supertypes_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___supertypes].val = p0; /* _supertypes on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#set_supertypes for (self: MClassDef, Array[MClassType]) */
void nit___nit__MClassDef___set_supertypes(val* self, val* p0) {
val* var_supertypes /* var supertypes: Array[MClassType] */;
val* var /* : nullable POSetElement[MClassDef] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var4 /* : Model */;
val* var_model /* var model: Model */;
val* var5 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var_ /* var : Array[MClassType] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MClassType] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var10 /* : Array[MClassType] */;
val* var11 /* : POSet[MClassType] */;
short int var12 /* : Bool */;
val* var13 /* : MClass */;
val* var14 /* : MModule */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : MClass */;
val* var18 /* : MModule */;
short int var19 /* : Bool */;
val* var20 /* : POSet[MClassType] */;
var_supertypes = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(self); /* in_hierarchy on <self:MClassDef>*/
}
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, ((val*)NULL)); /* == on <var:nullable POSetElement[MClassDef]>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 622);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
var_mmodule = var3;
{
var4 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__model_base__MEntity__model]))(var_mmodule); /* model on <var_mmodule:MModule>*/
}
var_model = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(self); /* bound_mtype on <self:MClassDef>*/
}
var_mtype = var5;
var_ = var_supertypes;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassType]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MClassType]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MClassType]>*/
}
var_supertype = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__supertypes]))(self); /* supertypes on <self:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var10, var_supertype); /* add on <var10:Array[MClassType]>*/
}
{
var11 = ((val*(*)(val* self))(var_model->class->vft[COLOR_nit__model__Model__full_mtype_specialization_hierarchy]))(var_model); /* full_mtype_specialization_hierarchy on <var_model:Model>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var11->class->vft[COLOR_poset__POSet__add_edge]))(var11, var_mtype, var_supertype); /* add_edge on <var11:POSet[MClassType]>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var13); /* intro_mmodule on <var13:MClass>*/
}
{
var15 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var14, var_mmodule); /* == on <var14:MModule>*/
}
var_16 = var15;
if (var15){
{
var17 = ((val*(*)(val* self))(var_supertype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_supertype); /* mclass on <var_supertype:MClassType>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var17); /* intro_mmodule on <var17:MClass>*/
}
{
var19 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_mmodule); /* == on <var18:MModule>*/
}
var12 = var19;
} else {
var12 = var_16;
}
if (var12){
{
var20 = ((val*(*)(val* self))(var_model->class->vft[COLOR_nit__model__Model__intro_mtype_specialization_hierarchy]))(var_model); /* intro_mtype_specialization_hierarchy on <var_model:Model>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var20->class->vft[COLOR_poset__POSet__add_edge]))(var20, var_mtype, var_supertype); /* add_edge on <var20:POSet[MClassType]>*/
}
} else {
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MClassType]>*/
}
RET_LABEL:;
}
/* method model#MClassDef#add_in_hierarchy for (self: MClassDef) */
void nit___nit__MClassDef___add_in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
val* var_model /* var model: Model */;
val* var5 /* : POSet[MClassDef] */;
val* var6 /* : POSetElement[nullable Object] */;
val* var_res /* var res: POSetElement[MClassDef] */;
val* var7 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var8 /* : MModule */;
val* var9 /* : Set[MClassDef] */;
val* var_ /* var : Set[MClassDef] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[MClassDef] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var14 /* : POSet[nullable Object] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(self); /* in_hierarchy on <self:MClassDef>*/
}
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, ((val*)NULL)); /* == on <var:nullable POSetElement[MClassDef]>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 647);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__model_base__MEntity__model]))(var3); /* model on <var3:MModule>*/
}
var_model = var4;
{
var5 = ((val*(*)(val* self))(var_model->class->vft[COLOR_nit__model__Model__mclassdef_hierarchy]))(var_model); /* mclassdef_hierarchy on <var_model:Model>*/
}
{
var6 = ((val*(*)(val* self, val* p0))(var5->class->vft[COLOR_poset__POSet__add_node]))(var5, self); /* add_node on <var5:POSet[MClassDef]>*/
}
var_res = var6;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClassDef__in_hierarchy_61d]))(self, var_res); /* in_hierarchy= on <self:MClassDef>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(self); /* bound_mtype on <self:MClassDef>*/
}
var_mtype = var7;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_nit__model__MType__collect_mclassdefs]))(var_mtype, var8); /* collect_mclassdefs on <var_mtype:MClassType>*/
}
var_ = var9;
{
var10 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MClassDef]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[MClassDef]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[MClassDef]>*/
}
var_mclassdef = var13;
{
var14 = ((val*(*)(val* self))(var_res->class->vft[COLOR_poset__POSetElement__poset]))(var_res); /* poset on <var_res:POSetElement[MClassDef]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var14->class->vft[COLOR_poset__POSet__add_edge]))(var14, self, var_mclassdef); /* add_edge on <var14:POSet[nullable Object](POSet[MClassDef])>*/
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[MClassDef]>*/
}
RET_LABEL:;
}
/* method model#MClassDef#in_hierarchy for (self: MClassDef): nullable POSetElement[MClassDef] */
val* nit___nit__MClassDef___in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var1 /* : nullable POSetElement[MClassDef] */;
var1 = self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#in_hierarchy= for (self: MClassDef, nullable POSetElement[MClassDef]) */
void nit___nit__MClassDef___in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val = p0; /* _in_hierarchy on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#is_intro for (self: MClassDef): Bool */
short int nit___nit__MClassDef___is_intro(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : MClass */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var5 /* : MClassDef */;
short int var6 /* : Bool */;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
var3 = var2->attrs[COLOR_nit__model__MClass___intro].val != NULL; /* _intro on <var2:MClass> */
var_ = var3;
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__model__MClass__intro]))(var4); /* intro on <var4:MClass>*/
}
{
var6 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, self); /* == on <var5:MClassDef>*/
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDef#intro_mproperties for (self: MClassDef): Array[MProperty] */
val* nit___nit__MClassDef___intro_mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nit__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 666);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#intro_mproperties= for (self: MClassDef, Array[MProperty]) */
void nit___nit__MClassDef___intro_mproperties_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___intro_mproperties].val = p0; /* _intro_mproperties on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#mpropdefs for (self: MClassDef): Array[MPropDef] */
val* nit___nit__MClassDef___mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_nit__model__MClassDef___mpropdefs].val; /* _mpropdefs on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 669);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mpropdefs= for (self: MClassDef, Array[MPropDef]) */
void nit___nit__MClassDef___mpropdefs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___mpropdefs].val = p0; /* _mpropdefs on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MType#name for (self: MType): String */
val* nit___nit__MType___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#is_subtype for (self: MType, MModule, nullable MClassType, MType): Bool */
short int nit___nit__MType___is_subtype(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_sup /* var sup: MType */;
val* var_sub /* var sub: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MType */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
short int var_sup_accept_null /* var sup_accept_null: Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var13 /* : MType */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : MType */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
short int var_sub_reject_null /* var sub_reject_null: Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
short int var24 /* : Bool */;
val* var25 /* : MType */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : MType */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MType */;
val* var40 /* : MType */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var_ /* var : Bool */;
short int var46 /* : Bool */;
val* var47 /* : MType */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
val* var51 /* : MType */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
val* var58 /* : Sys */;
val* var59 /* : NativeArray[String] */;
static val* varonce;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : MType */;
val* var_resolved_sub /* var resolved_sub: MClassType */;
val* var80 /* : Set[MClass] */;
val* var81 /* : MClass */;
short int var82 /* : Bool */;
short int var_res /* var res: Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
short int var89 /* : Bool */;
val* var90 /* : MClass */;
val* var91 /* : MClassType */;
val* var_sub2 /* var sub2: MClassType */;
val* var92 /* : MClass */;
val* var93 /* : MClass */;
short int var94 /* : Bool */;
long var_i /* var i: Int */;
val* var95 /* : MClass */;
long var96 /* : Int */;
long var_97 /* var : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name;
short int var103 /* : Bool */;
val* var104 /* : Array[MType] */;
val* var105 /* : nullable Object */;
val* var_sub_arg /* var sub_arg: MType */;
val* var106 /* : Array[MType] */;
val* var107 /* : nullable Object */;
val* var_sup_arg /* var sup_arg: MType */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
long var112 /* : Int */;
var_mmodule = p0;
var_anchor = p1;
var_sup = p2;
var_sub = self;
{
var1 = ((short int(*)(val* self, val* p0))(var_sub->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sub, var_sup); /* == on <var_sub:MType>*/
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
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
var4 = ((short int(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MType__need_anchor]))(var_sub); /* need_anchor on <var_sub:MType>*/
}
var5 = !var4;
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 718);
fatal_exit(1);
}
{
var6 = ((short int(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MType__need_anchor]))(var_sup); /* need_anchor on <var_sup:MType>*/
}
var7 = !var6;
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 719);
fatal_exit(1);
}
} else {
{
var8 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_sub, var_anchor, ((val*)NULL), var_mmodule); /* can_resolve_for on <var_sub:MType>*/
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 722);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var_sub, var_mmodule, var_anchor); /* lookup_fixed on <var_sub:MType>*/
}
var_sub = var9;
{
var10 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sup->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_sup, var_anchor, ((val*)NULL), var_mmodule); /* can_resolve_for on <var_sup:MType>*/
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 724);
fatal_exit(1);
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(var_sup->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var_sup, var_mmodule, var_anchor); /* lookup_fixed on <var_sup:MType>*/
}
var_sup = var11;
}
var_sup_accept_null = 0;
/* <var_sup:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_sup->type->table_size) {
var12 = 0;
} else {
var12 = var_sup->type->type_table[cltype] == idtype;
}
if (var12){
var_sup_accept_null = 1;
{
var13 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_sup); /* mtype on <var_sup:MType(MNullableType)>*/
}
var_sup = var13;
} else {
/* <var_sup:MType> isa MNotNullType */
cltype15 = type_nit__MNotNullType.color;
idtype16 = type_nit__MNotNullType.id;
if(cltype15 >= var_sup->type->table_size) {
var14 = 0;
} else {
var14 = var_sup->type->type_table[cltype15] == idtype16;
}
if (var14){
{
var17 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_sup); /* mtype on <var_sup:MType(MNotNullType)>*/
}
var_sup = var17;
} else {
/* <var_sup:MType> isa MNullType */
cltype19 = type_nit__MNullType.color;
idtype20 = type_nit__MNullType.id;
if(cltype19 >= var_sup->type->table_size) {
var18 = 0;
} else {
var18 = var_sup->type->type_table[cltype19] == idtype20;
}
if (var18){
var_sup_accept_null = 1;
} else {
}
}
}
var_sub_reject_null = 0;
/* <var_sub:MType> isa MNullableType */
cltype22 = type_nit__MNullableType.color;
idtype23 = type_nit__MNullableType.id;
if(cltype22 >= var_sub->type->table_size) {
var21 = 0;
} else {
var21 = var_sub->type->type_table[cltype22] == idtype23;
}
if (var21){
var24 = !var_sup_accept_null;
if (var24){
var = 0;
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_sub); /* mtype on <var_sub:MType(MNullableType)>*/
}
var_sub = var25;
} else {
/* <var_sub:MType> isa MNotNullType */
cltype27 = type_nit__MNotNullType.color;
idtype28 = type_nit__MNotNullType.id;
if(cltype27 >= var_sub->type->table_size) {
var26 = 0;
} else {
var26 = var_sub->type->type_table[cltype27] == idtype28;
}
if (var26){
var_sub_reject_null = 1;
{
var29 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_sub); /* mtype on <var_sub:MType(MNotNullType)>*/
}
var_sub = var29;
} else {
/* <var_sub:MType> isa MNullType */
cltype31 = type_nit__MNullType.color;
idtype32 = type_nit__MNullType.id;
if(cltype31 >= var_sub->type->table_size) {
var30 = 0;
} else {
var30 = var_sub->type->type_table[cltype31] == idtype32;
}
if (var30){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
}
for(;;) {
/* <var_sub:MType> isa MFormalType */
cltype34 = type_nit__MFormalType.color;
idtype35 = type_nit__MFormalType.id;
if(cltype34 >= var_sub->type->table_size) {
var33 = 0;
} else {
var33 = var_sub->type->type_table[cltype34] == idtype35;
}
if (var33){
{
var36 = ((short int(*)(val* self, val* p0))(var_sub->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sub, var_sup); /* == on <var_sub:MType(MFormalType)>*/
}
if (var36){
var = 1;
goto RET_LABEL;
} else {
}
if (var_anchor == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
var38 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var37 = var38;
}
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 762);
fatal_exit(1);
}
{
var39 = ((val*(*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nit__model__MType__lookup_bound]))(var_sub, var_mmodule, var_anchor); /* lookup_bound on <var_sub:MType(MFormalType)>*/
}
var_sub = var39;
if (var_sub_reject_null){
{
var40 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MType__as_notnull]))(var_sub); /* as_notnull on <var_sub:MType>*/
}
var_sub = var40;
} else {
}
/* <var_sub:MType> isa MNullableType */
cltype42 = type_nit__MNullableType.color;
idtype43 = type_nit__MNullableType.id;
if(cltype42 >= var_sub->type->table_size) {
var41 = 0;
} else {
var41 = var_sub->type->type_table[cltype42] == idtype43;
}
if (var41){
var45 = !var_sup_accept_null;
var_ = var45;
if (var45){
var46 = !var_sub_reject_null;
var44 = var46;
} else {
var44 = var_;
}
if (var44){
var = 0;
goto RET_LABEL;
} else {
}
{
var47 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_sub); /* mtype on <var_sub:MType(MNullableType)>*/
}
var_sub = var47;
} else {
/* <var_sub:MType> isa MNotNullType */
cltype49 = type_nit__MNotNullType.color;
idtype50 = type_nit__MNotNullType.id;
if(cltype49 >= var_sub->type->table_size) {
var48 = 0;
} else {
var48 = var_sub->type->type_table[cltype49] == idtype50;
}
if (var48){
var_sub_reject_null = 1;
{
var51 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_sub); /* mtype on <var_sub:MType(MNotNullType)>*/
}
var_sub = var51;
} else {
/* <var_sub:MType> isa MNullType */
cltype53 = type_nit__MNullType.color;
idtype54 = type_nit__MNullType.id;
if(cltype53 >= var_sub->type->table_size) {
var52 = 0;
} else {
var52 = var_sub->type->type_table[cltype53] == idtype54;
}
if (var52){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_sub:MType> isa MClassType */
cltype56 = type_nit__MClassType.color;
idtype57 = type_nit__MClassType.id;
if(cltype56 >= var_sub->type->table_size) {
var55 = 0;
} else {
var55 = var_sub->type->type_table[cltype56] == idtype57;
}
if (unlikely(!var55)) {
var58 = glob_sys;
if (unlikely(varonce==NULL)) {
var59 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = " <? ";
var63 = standard___standard__NativeString___to_s_with_length(var62, 4l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var59)->values[1]=var61;
} else {
var59 = varonce;
varonce = NULL;
}
{
var64 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_standard__NativeArray*)var59)->values[0]=var64;
{
var65 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_standard__NativeArray*)var59)->values[2]=var65;
{
var66 = ((val*(*)(val* self))(var59->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce = var59;
{
((void(*)(val* self, val* p0))(var58->class->vft[COLOR_standard__file__Sys__print]))(var58, var66); /* print on <var58:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 781);
fatal_exit(1);
}
/* <var_sup:MType> isa MFormalType */
cltype68 = type_nit__MFormalType.color;
idtype69 = type_nit__MFormalType.id;
if(cltype68 >= var_sup->type->table_size) {
var67 = 0;
} else {
var67 = var_sup->type->type_table[cltype68] == idtype69;
}
if (var67){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType> isa MNullType */
cltype71 = type_nit__MNullType.color;
idtype72 = type_nit__MNullType.id;
if(cltype71 >= var_sup->type->table_size) {
var70 = 0;
} else {
var70 = var_sup->type->type_table[cltype71] == idtype72;
}
if (var70){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType> isa MClassType */
cltype74 = type_nit__MClassType.color;
idtype75 = type_nit__MClassType.id;
if(cltype74 >= var_sup->type->table_size) {
var73 = 0;
} else {
var73 = var_sup->type->type_table[cltype74] == idtype75;
}
if (unlikely(!var73)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 793);
fatal_exit(1);
}
{
var76 = ((short int(*)(val* self, val* p0))(var_sub->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sub, var_sup); /* == on <var_sub:MType(MClassType)>*/
}
if (var76){
var = 1;
goto RET_LABEL;
} else {
}
if (var_anchor == NULL) {
var77 = 1; /* is null */
} else {
var77 = 0; /* arg is null but recv is not */
}
if (0) {
var78 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, ((val*)NULL)); /* == on <var_anchor:nullable MClassType>*/
var77 = var78;
}
if (var77){
var_anchor = var_sub;
} else {
}
{
var79 = ((val*(*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nit__model__MType__anchor_to]))(var_sub, var_mmodule, var_anchor); /* anchor_to on <var_sub:MType(MClassType)>*/
}
var_resolved_sub = var79;
{
var80 = ((val*(*)(val* self, val* p0))(var_resolved_sub->class->vft[COLOR_nit__model__MType__collect_mclasses]))(var_resolved_sub, var_mmodule); /* collect_mclasses on <var_resolved_sub:MClassType>*/
}
{
var81 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sup); /* mclass on <var_sup:MType(MClassType)>*/
}
{
var82 = ((short int(*)(val* self, val* p0))((((long)var80&3)?class_info[((long)var80&3)]:var80->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var80, var81); /* has on <var80:Set[MClass]>*/
}
var_res = var82;
{
{ /* Inline kernel#Bool#== (var_res,0) on <var_res:Bool> */
var85 = var_res == 0;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (var83){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType(MClassType)> isa MGenericType */
cltype87 = type_nit__MGenericType.color;
idtype88 = type_nit__MGenericType.id;
if(cltype87 >= var_sup->type->table_size) {
var86 = 0;
} else {
var86 = var_sup->type->type_table[cltype87] == idtype88;
}
var89 = !var86;
if (var89){
var = 1;
goto RET_LABEL;
} else {
}
{
var90 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sup); /* mclass on <var_sup:MType(MGenericType)>*/
}
{
var91 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__supertype_to]))(var_sub, var_mmodule, var_anchor, var90); /* supertype_to on <var_sub:MType(MClassType)>*/
}
var_sub2 = var91;
{
var92 = ((val*(*)(val* self))(var_sub2->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sub2); /* mclass on <var_sub2:MClassType>*/
}
{
var93 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sup); /* mclass on <var_sup:MType(MGenericType)>*/
}
{
var94 = ((short int(*)(val* self, val* p0))(var92->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var92, var93); /* == on <var92:MClass>*/
}
if (unlikely(!var94)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 805);
fatal_exit(1);
}
var_i = 0l;
{
var95 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sup); /* mclass on <var_sup:MType(MGenericType)>*/
}
{
var96 = ((long(*)(val* self))(var95->class->vft[COLOR_nit__model__MClass__arity]))(var95); /* arity on <var95:MClass>*/
}
var_97 = var96;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_97) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_97:Int> isa OTHER */
/* <var_97:Int> isa OTHER */
var100 = 1; /* easy <var_97:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var103 = var_i < var_97;
var98 = var103;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
{
var104 = ((val*(*)(val* self))(var_sub2->class->vft[COLOR_nit__model__MClassType__arguments]))(var_sub2); /* arguments on <var_sub2:MClassType>*/
}
{
var105 = ((val*(*)(val* self, long p0))(var104->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var104, var_i); /* [] on <var104:Array[MType]>*/
}
var_sub_arg = var105;
{
var106 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__arguments]))(var_sup); /* arguments on <var_sup:MType(MGenericType)>*/
}
{
var107 = ((val*(*)(val* self, long p0))(var106->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var106, var_i); /* [] on <var106:Array[MType]>*/
}
var_sup_arg = var107;
{
var108 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sub_arg->class->vft[COLOR_nit__model__MType__is_subtype]))(var_sub_arg, var_mmodule, var_anchor, var_sup_arg); /* is_subtype on <var_sub_arg:MType>*/
}
var_res = var108;
{
{ /* Inline kernel#Bool#== (var_res,0) on <var_res:Bool> */
var111 = var_res == 0;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
if (var109){
var = 0;
goto RET_LABEL;
} else {
}
var112 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var112;
} else {
goto BREAK_label113;
}
}
BREAK_label113: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#anchor_to for (self: MType, MModule, MClassType): MType */
val* nit___nit__MType___anchor_to(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: MClassType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
val* var_res /* var res: MType */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_mmodule = p0;
var_anchor = p1;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MType>*/
}
var2 = !var1;
if (var2){
var = self;
goto RET_LABEL;
} else {
}
{
var3 = ((short int(*)(val* self))(var_anchor->class->vft[COLOR_nit__model__MType__need_anchor]))(var_anchor); /* need_anchor on <var_anchor:MClassType>*/
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 852);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__model__MType__resolve_for]))(self, var_anchor, ((val*)NULL), var_mmodule, 1); /* resolve_for on <self:MType>*/
}
var_res = var5;
{
var6 = ((short int(*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__need_anchor]))(var_res); /* need_anchor on <var_res:MType>*/
}
var7 = !var6;
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 855);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#need_anchor for (self: MType): Bool */
short int nit___nit__MType___need_anchor(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#supertype_to for (self: MType, MModule, nullable MClassType, MClass): MClassType */
val* nit___nit__MType___supertype_to(val* self, val* p0, val* p1, val* p2) {
val* var /* : MClassType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_super_mclass /* var super_mclass: MClass */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MClassType */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var8 /* : MClass */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MType */;
val* var_resolved_self /* var resolved_self: nullable Object */;
val* var14 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var_15 /* var : Set[MClassType] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[MClassType] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var20 /* : MClass */;
short int var21 /* : Bool */;
val* var22 /* : MType */;
var_mmodule = p0;
var_anchor = p1;
var_super_mclass = p2;
{
var1 = ((long(*)(val* self))(var_super_mclass->class->vft[COLOR_nit__model__MClass__arity]))(var_super_mclass); /* arity on <var_super_mclass:MClass>*/
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((val*(*)(val* self))(var_super_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_super_mclass); /* mclass_type on <var_super_mclass:MClass>*/
}
var = var5;
goto RET_LABEL;
} else {
}
/* <self:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= self->type->table_size) {
var7 = 0;
} else {
var7 = self->type->type_table[cltype] == idtype;
}
var_ = var7;
if (var7){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MType(MClassType)>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var8, var_super_mclass); /* == on <var8:MClass>*/
}
var6 = var9;
} else {
var6 = var_;
}
if (var6){
var = self;
goto RET_LABEL;
} else {
}
{
var10 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MType>*/
}
if (var10){
if (var_anchor == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var11 = var12;
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 885);
fatal_exit(1);
}
{
var13 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MType__anchor_to]))(self, var_mmodule, var_anchor); /* anchor_to on <self:MType>*/
}
var_resolved_self = var13;
} else {
var_resolved_self = self;
}
{
var14 = ((val*(*)(val* self, val* p0))(var_resolved_self->class->vft[COLOR_nit__model__MType__collect_mtypes]))(var_resolved_self, var_mmodule); /* collect_mtypes on <var_resolved_self:nullable Object(MType)>*/
}
var_supertypes = var14;
var_15 = var_supertypes;
{
var16 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_15); /* iterator on <var_15:Set[MClassType]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[MClassType]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[MClassType]>*/
}
var_supertype = var19;
{
var20 = ((val*(*)(val* self))(var_supertype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_supertype); /* mclass on <var_supertype:MClassType>*/
}
{
var21 = ((short int(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var_super_mclass); /* == on <var20:MClass>*/
}
if (var21){
{
var22 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_supertype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_supertype, self, var_anchor, var_mmodule, 0); /* resolve_for on <var_supertype:MClassType>*/
}
var = var22;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[MClassType]>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 897);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MType#resolve_for for (self: MType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MType___resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "resolve_for", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 900);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MType#lookup_bound for (self: MType, MModule, MType): MType */
val* nit___nit__MType___lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#lookup_fixed for (self: MType, MModule, MType): MType */
val* nit___nit__MType___lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#can_resolve_for for (self: MType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MType___can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "can_resolve_for", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 998);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable for (self: MType): MType */
val* nit___nit__MType___as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MNullableType */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MType__as_nullable_cache]))(self); /* as_nullable_cache on <self:MType>*/
}
var_res = var1;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable MType>*/
var2 = var3;
}
if (var2){
var = var_res;
goto RET_LABEL;
} else {
}
var4 = NEW_nit__MNullableType(&type_nit__MNullableType);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__model__MProxyType__mtype_61d]))(var4, self); /* mtype= on <var4:MNullableType>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:MNullableType>*/
}
var_res = var4;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MType__as_nullable_cache_61d]))(self, var_res); /* as_nullable_cache= on <self:MType>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#undecorate for (self: MType): MType */
val* nit___nit__MType___undecorate(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#as_notnull for (self: MType): MType */
val* nit___nit__MType___as_notnull(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache for (self: MType): nullable MType */
val* nit___nit__MType___as_nullable_cache(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__model__MType___as_nullable_cache].val; /* _as_nullable_cache on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache= for (self: MType, nullable MType) */
void nit___nit__MType___as_nullable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = p0; /* _as_nullable_cache on <self:MType> */
RET_LABEL:;
}
/* method model#MType#depth for (self: MType): Int */
long nit___nit__MType___depth(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#length for (self: MType): Int */
long nit___nit__MType___length(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclassdefs for (self: MType, MModule): Set[MClassDef] */
val* nit___nit__MType___collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclassdefs", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1083);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclasses for (self: MType, MModule): Set[MClass] */
val* nit___nit__MType___collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclasses", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1093);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mtypes for (self: MType, MModule): Set[MClassType] */
val* nit___nit__MType___collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mtypes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1099);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MType#has_mproperty for (self: MType, MModule, MProperty): Bool */
short int nit___nit__MType___has_mproperty(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mproperty /* var mproperty: MProperty */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Set[MClassDef] */;
val* var4 /* : MClassDef */;
short int var5 /* : Bool */;
var_mmodule = p0;
var_mproperty = p1;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1112);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MType__collect_mclassdefs]))(self, var_mmodule); /* collect_mclassdefs on <self:MType>*/
}
{
var4 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MProperty>*/
}
{
var5 = ((short int(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var3, var4); /* has on <var3:Set[MClassDef]>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#mclass for (self: MClassType): MClass */
val* nit___nit__MClassType___mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1123);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#mclass= for (self: MClassType, MClass) */
void nit___nit__MClassType___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___mclass].val = p0; /* _mclass on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#model for (self: MClassType): Model */
val* nit___nit__MClassType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MClassType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var1); /* intro_mmodule on <var1:MClass>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model_base__MEntity__model]))(var2); /* model on <var2:MModule>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#arguments for (self: MClassType): Array[MType] */
val* nit___nit__MClassType___arguments(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nit__model__MClassType___arguments].val; /* _arguments on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1130);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#arguments= for (self: MClassType, Array[MType]) */
void nit___nit__MClassType___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___arguments].val = p0; /* _arguments on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#to_s for (self: MClassType): String */
val* nit___nit__MClassType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MClassType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__Object__to_s]))(var1); /* to_s on <var1:MClass>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#full_name for (self: MClassType): String */
val* nit___nit__MClassType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MClassType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var1); /* full_name on <var1:MClass>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#c_name for (self: MClassType): String */
val* nit___nit__MClassType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MClassType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var1); /* c_name on <var1:MClass>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#need_anchor for (self: MClassType): Bool */
short int nit___nit__MClassType___MType__need_anchor(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#anchor_to for (self: MClassType, MModule, MClassType): MClassType */
val* nit___nit__MClassType___MType__anchor_to(val* self, val* p0, val* p1) {
val* var /* : MClassType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: MClassType */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_mmodule = p0;
var_anchor = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit___nit__MClassType___MType__anchor_to]))(self, p0, p1); /* anchor_to on <self:MClassType>*/
}
/* <var1:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1144);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#resolve_for for (self: MClassType, MType, nullable MClassType, MModule, Bool): MClassType */
val* nit___nit__MClassType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MClassType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#can_resolve_for for (self: MClassType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MClassType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclassdefs for (self: MClassType, MModule): Set[MClassDef] */
val* nit___nit__MClassType___MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[MModule, Set[MClassDef]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClassDef]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
var_mmodule = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MClassType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1153);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__collect_mclassdefs_cache]))(self); /* collect_mclassdefs_cache on <self:MClassType>*/
}
var_cache = var3;
{
var4 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var_cache, var_mmodule); /* has_key on <var_cache:HashMap[MModule, Set[MClassDef]]>*/
}
var5 = !var4;
if (var5){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClassType__collect_things]))(self, var_mmodule); /* collect_things on <self:MClassType>*/
}
} else {
}
{
var6 = ((val*(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_cache, var_mmodule); /* [] on <var_cache:HashMap[MModule, Set[MClassDef]]>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses for (self: MClassType, MModule): Set[MClass] */
val* nit___nit__MClassType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable MModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Set[MClass] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : HashMap[MModule, Set[MClass]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClass]] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_res /* var res: Set[MClass] */;
var_mmodule = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__collect_mclasses_last_module]))(self); /* collect_mclasses_last_module on <self:MClassType>*/
}
if (var1 == NULL) {
var2 = 0; /* <var_mmodule:MModule> cannot be null */
} else {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_mmodule); /* == on <var1:nullable MModule>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__collect_mclasses_last_module_cache]))(self); /* collect_mclasses_last_module_cache on <self:MClassType>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MClassType>*/
}
var6 = !var5;
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__collect_mclasses_cache]))(self); /* collect_mclasses_cache on <self:MClassType>*/
}
var_cache = var7;
{
var8 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var_cache, var_mmodule); /* has_key on <var_cache:HashMap[MModule, Set[MClass]]>*/
}
var9 = !var8;
if (var9){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClassType__collect_things]))(self, var_mmodule); /* collect_things on <self:MClassType>*/
}
} else {
}
{
var10 = ((val*(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_cache, var_mmodule); /* [] on <var_cache:HashMap[MModule, Set[MClass]]>*/
}
var_res = var10;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClassType__collect_mclasses_last_module_61d]))(self, var_mmodule); /* collect_mclasses_last_module= on <self:MClassType>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClassType__collect_mclasses_last_module_cache_61d]))(self, var_res); /* collect_mclasses_last_module_cache= on <self:MClassType>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_last_module for (self: MClassType): nullable MModule */
val* nit___nit__MClassType___collect_mclasses_last_module(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module].val; /* _collect_mclasses_last_module on <self:MClassType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_last_module= for (self: MClassType, nullable MModule) */
void nit___nit__MClassType___collect_mclasses_last_module_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module].val = p0; /* _collect_mclasses_last_module on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#collect_mclasses_last_module_cache for (self: MClassType): Set[MClass] */
val* nit___nit__MClassType___collect_mclasses_last_module_cache(val* self) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module_cache].val; /* _collect_mclasses_last_module_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_last_module_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1176);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_last_module_cache= for (self: MClassType, Set[MClass]) */
void nit___nit__MClassType___collect_mclasses_last_module_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module_cache].val = p0; /* _collect_mclasses_last_module_cache on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#collect_mtypes for (self: MClassType, MModule): Set[MClassType] */
val* nit___nit__MClassType___MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[MModule, Set[MClassType]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClassType]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
var_mmodule = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MClassType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1180);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__collect_mtypes_cache]))(self); /* collect_mtypes_cache on <self:MClassType>*/
}
var_cache = var3;
{
var4 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var_cache, var_mmodule); /* has_key on <var_cache:HashMap[MModule, Set[MClassType]]>*/
}
var5 = !var4;
if (var5){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClassType__collect_things]))(self, var_mmodule); /* collect_things on <self:MClassType>*/
}
} else {
}
{
var6 = ((val*(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_cache, var_mmodule); /* [] on <var_cache:HashMap[MModule, Set[MClassType]]>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_things for (self: MClassType, MModule) */
void nit___nit__MClassType___collect_things(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : HashSet[MClassDef] */;
val* var_res /* var res: HashSet[MClassDef] */;
val* var1 /* : HashSet[MClass] */;
val* var_seen /* var seen: HashSet[MClass] */;
val* var2 /* : HashSet[MClassType] */;
val* var_types /* var types: HashSet[MClassType] */;
val* var3 /* : MClass */;
val* var4 /* : Array[MClass] */;
val* var_ /* var : Array[MClass] */;
val* var5 /* : MClass */;
val* var_todo /* var todo: Array[MClass] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var9 /* : Array[MClassDef] */;
val* var_10 /* var : Array[MClassDef] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[MClassDef] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var15 /* : POSetElement[MModule] */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[MClassType] */;
val* var_20 /* var : Array[MClassType] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : ArrayIterator[MClassType] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var25 /* : MClass */;
val* var_superclass /* var superclass: MClass */;
short int var26 /* : Bool */;
val* var31 /* : HashMap[MModule, Set[MClassDef]] */;
val* var32 /* : HashMap[MModule, Set[MClass]] */;
val* var33 /* : HashMap[MModule, Set[MClassType]] */;
var_mmodule = p0;
var = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassDef);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:HashSet[MClassDef]>*/
}
var_res = var;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_seen = var1;
var2 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassType);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:HashSet[MClassType]>*/
}
var_types = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MClassType>*/
}
{
((void(*)(val* self, val* p0))(var_seen->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_seen, var3); /* add on <var_seen:HashSet[MClass]>*/
}
var4 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
((void(*)(val* self, long p0))(var4->class->vft[COLOR_standard__array__Array__with_capacity]))(var4, 1l); /* with_capacity on <var4:Array[MClass]>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MClassType>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var5); /* push on <var_:Array[MClass]>*/
}
var_todo = var_;
for(;;) {
{
var6 = ((short int(*)(val* self))(var_todo->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_todo); /* is_empty on <var_todo:Array[MClass]>*/
}
var7 = !var6;
if (var7){
{
var8 = ((val*(*)(val* self))(var_todo->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var_todo); /* pop on <var_todo:Array[MClass]>*/
}
var_mclass = var8;
{
var9 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclassdefs]))(var_mclass); /* mclassdefs on <var_mclass:MClass>*/
}
var_10 = var9;
{
var11 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_10); /* iterator on <var_10:Array[MClassDef]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:ArrayIterator[MClassDef]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var14;
{
var15 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var16 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
{
var17 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_poset__POSetElement___60d_61d]))(var15, var16); /* <= on <var15:POSetElement[MModule]>*/
}
var18 = !var17;
if (var18){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_mclassdef); /* add on <var_res:HashSet[MClassDef]>*/
}
{
var19 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__supertypes]))(var_mclassdef); /* supertypes on <var_mclassdef:MClassDef>*/
}
var_20 = var19;
{
var21 = ((val*(*)(val* self))(var_20->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_20); /* iterator on <var_20:Array[MClassType]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:ArrayIterator[MClassType]>*/
}
if (var23){
{
var24 = ((val*(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:ArrayIterator[MClassType]>*/
}
var_supertype = var24;
{
((void(*)(val* self, val* p0))(var_types->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_types, var_supertype); /* add on <var_types:HashSet[MClassType]>*/
}
{
var25 = ((val*(*)(val* self))(var_supertype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_supertype); /* mclass on <var_supertype:MClassType>*/
}
var_superclass = var25;
{
var26 = ((short int(*)(val* self, val* p0))(var_seen->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_seen, var_superclass); /* has on <var_seen:HashSet[MClass]>*/
}
if (var26){
goto BREAK_label27;
} else {
}
{
((void(*)(val* self, val* p0))(var_seen->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_seen, var_superclass); /* add on <var_seen:HashSet[MClass]>*/
}
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_todo, var_superclass); /* add on <var_todo:Array[MClass]>*/
}
BREAK_label27: (void)0;
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label28;
}
}
BREAK_label28: (void)0;
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:ArrayIterator[MClassType]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label29;
}
}
BREAK_label29: (void)0;
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label30;
}
}
BREAK_label30: (void)0;
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__collect_mclassdefs_cache]))(self); /* collect_mclassdefs_cache on <self:MClassType>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var31->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var31, var_mmodule, var_res); /* []= on <var31:HashMap[MModule, Set[MClassDef]]>*/
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__collect_mclasses_cache]))(self); /* collect_mclasses_cache on <self:MClassType>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var32->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var32, var_mmodule, var_seen); /* []= on <var32:HashMap[MModule, Set[MClass]]>*/
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__collect_mtypes_cache]))(self); /* collect_mtypes_cache on <self:MClassType>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var33->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var33, var_mmodule, var_types); /* []= on <var33:HashMap[MModule, Set[MClassType]]>*/
}
RET_LABEL:;
}
/* method model#MClassType#collect_mclassdefs_cache for (self: MClassType): HashMap[MModule, Set[MClassDef]] */
val* nit___nit__MClassType___collect_mclassdefs_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassDef]] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1218);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclassdefs_cache= for (self: MClassType, HashMap[MModule, Set[MClassDef]]) */
void nit___nit__MClassType___collect_mclassdefs_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val = p0; /* _collect_mclassdefs_cache on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#collect_mclasses_cache for (self: MClassType): HashMap[MModule, Set[MClass]] */
val* nit___nit__MClassType___collect_mclasses_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClass]] */;
val* var1 /* : HashMap[MModule, Set[MClass]] */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1219);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_cache= for (self: MClassType, HashMap[MModule, Set[MClass]]) */
void nit___nit__MClassType___collect_mclasses_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val = p0; /* _collect_mclasses_cache on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#collect_mtypes_cache for (self: MClassType): HashMap[MModule, Set[MClassType]] */
val* nit___nit__MClassType___collect_mtypes_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassType]] */;
val* var1 /* : HashMap[MModule, Set[MClassType]] */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1220);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mtypes_cache= for (self: MClassType, HashMap[MModule, Set[MClassType]]) */
void nit___nit__MClassType___collect_mtypes_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val = p0; /* _collect_mtypes_cache on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#init for (self: MClassType) */
void nit___nit__MClassType___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MClassType___standard__kernel__Object__init]))(self); /* init on <self:MClassType>*/
}
RET_LABEL:;
}
/* method model#MGenericType#arguments for (self: MGenericType): Array[MType] */
val* nit___nit__MGenericType___MClassType__arguments(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1229);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#arguments= for (self: MGenericType, Array[MType]) */
void nit___nit__MGenericType___MClassType__arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MGenericType___arguments].val = p0; /* _arguments on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#init for (self: MGenericType) */
void nit___nit__MGenericType___standard__kernel__Object__init(val* self) {
val* var /* : MClass */;
long var1 /* : Int */;
val* var2 /* : Array[MType] */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : ArrayIterator[MType] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_t /* var t: MType */;
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
val* var22 /* : MClass */;
val* var23 /* : String */;
val* var24 /* : Array[MType] */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var30 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MGenericType___standard__kernel__Object__init]))(self); /* init on <self:MGenericType>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MGenericType>*/
}
{
var1 = ((long(*)(val* self))(var->class->vft[COLOR_nit__model__MClass__arity]))(var); /* arity on <var:MClass>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var2); /* length on <var2:Array[MType]>*/
}
{
{ /* Inline kernel#Int#== (var1,var3) on <var1:Int> */
var6 = var1 == var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1235);
fatal_exit(1);
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__model__MGenericType__need_anchor_61d]))(self, 0); /* need_anchor= on <self:MGenericType>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
var_ = var7;
{
var8 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MType]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:ArrayIterator[MType]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:ArrayIterator[MType]>*/
}
var_t = var11;
{
var12 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
if (var12){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__model__MGenericType__need_anchor_61d]))(self, 1); /* need_anchor= on <self:MGenericType>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:ArrayIterator[MType]>*/
}
if (unlikely(varonce==NULL)) {
var13 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "[";
var17 = standard___standard__NativeString___to_s_with_length(var16, 1l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var13)->values[1]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "]";
var21 = standard___standard__NativeString___to_s_with_length(var20, 1l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var13)->values[3]=var19;
} else {
var13 = varonce;
varonce = NULL;
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MGenericType>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__Object__to_s]))(var22); /* to_s on <var22:MClass>*/
}
((struct instance_standard__NativeArray*)var13)->values[0]=var23;
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = ", ";
var28 = standard___standard__NativeString___to_s_with_length(var27, 2l);
var26 = var28;
varonce25 = var26;
}
{
var29 = ((val*(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__string__Collection__join]))(var24, var26); /* join on <var24:Array[MType]>*/
}
((struct instance_standard__NativeArray*)var13)->values[2]=var29;
{
var30 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MGenericType__to_s_61d]))(self, var30); /* to_s= on <self:MGenericType>*/
}
RET_LABEL:;
}
/* method model#MGenericType#to_s for (self: MGenericType): String */
val* nit___nit__MGenericType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MGenericType___to_s].val; /* _to_s on <self:MGenericType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1248);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#to_s= for (self: MGenericType, String) */
void nit___nit__MGenericType___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MGenericType___to_s].val = p0; /* _to_s on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#full_name for (self: MGenericType): String */
val* nit___nit__MGenericType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : Array[String] */;
val* var_args /* var args: Array[String] */;
val* var6 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[MType] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var11 /* : String */;
val* var12 /* : NativeArray[String] */;
static val* varonce;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : MClass */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
val* var28 /* : String */;
var1 = self->attrs[COLOR_nit__model__MGenericType___full_name].val != NULL; /* _full_name on <self:MGenericType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MGenericType___full_name].val; /* _full_name on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1252);
fatal_exit(1);
}
} else {
{
var5 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[String]>*/
}
var_args = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
var_ = var6;
{
var7 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MType]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:ArrayIterator[MType]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:ArrayIterator[MType]>*/
}
var_t = var10;
{
var11 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_t); /* full_name on <var_t:MType>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_args, var11); /* add on <var_args:Array[String]>*/
}
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:ArrayIterator[MType]>*/
}
if (unlikely(varonce==NULL)) {
var12 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "[";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[1]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "]";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var12)->values[3]=var18;
} else {
var12 = varonce;
varonce = NULL;
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MGenericType>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var21); /* full_name on <var21:MClass>*/
}
((struct instance_standard__NativeArray*)var12)->values[0]=var22;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ", ";
var26 = standard___standard__NativeString___to_s_with_length(var25, 2l);
var24 = var26;
varonce23 = var24;
}
{
var27 = ((val*(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__string__Collection__join]))(var_args, var24); /* join on <var_args:Array[String]>*/
}
((struct instance_standard__NativeArray*)var12)->values[2]=var27;
{
var28 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
var3 = var28;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MGenericType___full_name].val = var3; /* _full_name on <self:MGenericType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MGenericType#full_name= for (self: MGenericType, String) */
void nit___nit__MGenericType___full_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MGenericType___full_name].val = p0; /* _full_name on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#c_name for (self: MGenericType): String */
val* nit___nit__MGenericType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : String */;
val* var_res /* var res: String */;
val* var7 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : ArrayIterator[MType] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_t /* var t: MType */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
var1 = self->attrs[COLOR_nit__model__MGenericType___c_name].val != NULL; /* _c_name on <self:MGenericType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MGenericType___c_name].val; /* _c_name on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1262);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MGenericType>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var5); /* c_name on <var5:MClass>*/
}
var_res = var6;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
var_ = var7;
{
var8 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MType]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:ArrayIterator[MType]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:ArrayIterator[MType]>*/
}
var_t = var11;
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "__";
var14 = standard___standard__NativeString___to_s_with_length(var13, 2l);
var12 = var14;
varonce = var12;
}
{
var15 = ((val*(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__String___43d]))(var_res, var12); /* + on <var_res:String>*/
}
var_res = var15;
{
var16 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_t); /* c_name on <var_t:MType>*/
}
{
var17 = ((val*(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__String___43d]))(var_res, var16); /* + on <var_res:String>*/
}
var_res = var17;
{
((void(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:ArrayIterator[MType]>*/
}
{
var18 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:String>*/
}
var3 = var18;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MGenericType___c_name].val = var3; /* _c_name on <self:MGenericType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MGenericType#c_name= for (self: MGenericType, String) */
void nit___nit__MGenericType___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MGenericType___c_name].val = p0; /* _c_name on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#need_anchor for (self: MGenericType): Bool */
short int nit___nit__MGenericType___MType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#need_anchor= for (self: MGenericType, Bool) */
void nit___nit__MGenericType___need_anchor_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MGenericType___need_anchor].s = p0; /* _need_anchor on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#resolve_for for (self: MGenericType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MGenericType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[MType] */;
val* var_types /* var types: Array[MType] */;
val* var5 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MType] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var10 /* : MType */;
val* var11 /* : MClass */;
val* var12 /* : MClassType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MGenericType>*/
}
var2 = !var1;
if (var2){
var = self;
goto RET_LABEL;
} else {
}
{
var3 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__model__MType__can_resolve_for]))(self, var_mtype, var_anchor, var_mmodule); /* can_resolve_for on <self:MGenericType>*/
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1277);
fatal_exit(1);
}
var4 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[MType]>*/
}
var_types = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MType]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MType]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MType]>*/
}
var_t = var9;
{
var10 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_t->class->vft[COLOR_nit__model__MType__resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_t:MType>*/
}
{
((void(*)(val* self, val* p0))(var_types->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_types, var10); /* add on <var_types:Array[MType]>*/
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MType]>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__mclass]))(self); /* mclass on <self:MGenericType>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(var11->class->vft[COLOR_nit__model__MClass__get_mtype]))(var11, var_types); /* get_mtype on <var11:MClass>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MGenericType#can_resolve_for for (self: MGenericType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MGenericType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : ArrayIterator[MType] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MGenericType>*/
}
var2 = !var1;
if (var2){
var = 1;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MType]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:ArrayIterator[MType]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:ArrayIterator[MType]>*/
}
var_t = var7;
{
var8 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_t->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule); /* can_resolve_for on <var_t:MType>*/
}
var9 = !var8;
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:ArrayIterator[MType]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MGenericType#depth for (self: MGenericType): Int */
long nit___nit__MGenericType___MType__depth(val* self) {
long var /* : Int */;
long var_dmax /* var dmax: Int */;
val* var1 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ArrayIterator[MType] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_a /* var a: MType */;
long var6 /* : Int */;
long var_d /* var d: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
var_dmax = 0l;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MType]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ArrayIterator[MType]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ArrayIterator[MType]>*/
}
var_a = var5;
{
var6 = ((long(*)(val* self))(var_a->class->vft[COLOR_nit__model__MType__depth]))(var_a); /* depth on <var_a:MType>*/
}
var_d = var6;
{
{ /* Inline kernel#Int#> (var_d,var_dmax) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var_dmax:Int> isa OTHER */
/* <var_dmax:Int> isa OTHER */
var9 = 1; /* easy <var_dmax:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var10 = var_d > var_dmax;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var_dmax = var_d;
} else {
}
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ArrayIterator[MType]>*/
}
{
{ /* Inline kernel#Int#+ (var_dmax,1l) on <var_dmax:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var17 = var_dmax + 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MGenericType#length for (self: MGenericType): Int */
long nit___nit__MGenericType___MType__length(val* self) {
long var /* : Int */;
long var_res /* var res: Int */;
val* var1 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ArrayIterator[MType] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_a /* var a: MType */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
var_res = 1l;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MType]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ArrayIterator[MType]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ArrayIterator[MType]>*/
}
var_a = var5;
{
var6 = ((long(*)(val* self))(var_a->class->vft[COLOR_nit__model__MType__length]))(var_a); /* length on <var_a:MType>*/
}
{
{ /* Inline kernel#Int#+ (var_res,var6) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var10 = var_res + var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_res = var7;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ArrayIterator[MType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MFormalType#as_notnull for (self: MFormalType): MType */
val* nit___nit__MFormalType___MType__as_notnull(val* self) {
val* var /* : MType */;
short int var1 /* : Bool */;
val* var2 /* : MType */;
val* var3 /* : MNotNullType */;
var1 = self->attrs[COLOR_nit__model__MFormalType___as_notnull].val != NULL; /* _as_notnull on <self:MFormalType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MFormalType___as_notnull].val; /* _as_notnull on <self:MFormalType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _as_notnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1322);
fatal_exit(1);
}
} else {
var3 = NEW_nit__MNotNullType(&type_nit__MNotNullType);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__model__MProxyType__mtype_61d]))(var3, self); /* mtype= on <var3:MNotNullType>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:MNotNullType>*/
}
self->attrs[COLOR_nit__model__MFormalType___as_notnull].val = var3; /* _as_notnull on <self:MFormalType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MFormalType#as_notnull= for (self: MFormalType, MType) */
void nit___nit__MFormalType___as_notnull_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MFormalType___as_notnull].val = p0; /* _as_notnull on <self:MFormalType> */
RET_LABEL:;
}
/* method model#MVirtualType#mproperty for (self: MVirtualType): MVirtualTypeProp */
val* nit___nit__MVirtualType___mproperty(val* self) {
val* var /* : MVirtualTypeProp */;
val* var1 /* : MVirtualTypeProp */;
var1 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1329);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#mproperty= for (self: MVirtualType, MVirtualTypeProp) */
void nit___nit__MVirtualType___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MVirtualType___mproperty].val = p0; /* _mproperty on <self:MVirtualType> */
RET_LABEL:;
}
/* method model#MVirtualType#model for (self: MVirtualType): Model */
val* nit___nit__MVirtualType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MVirtualTypeProp */;
val* var2 /* : MClassDef */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MVirtualType__mproperty]))(self); /* mproperty on <self:MVirtualType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var1); /* intro_mclassdef on <var1:MVirtualTypeProp>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var2); /* mmodule on <var2:MClassDef>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__model_base__MEntity__model]))(var3); /* model on <var3:MModule>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#lookup_bound for (self: MVirtualType, MModule, MType): MType */
val* nit___nit__MVirtualType___MType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MVirtualTypeDef */;
val* var2 /* : nullable MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MVirtualType__lookup_single_definition]))(self, var_mmodule, var_resolved_receiver); /* lookup_single_definition on <self:MVirtualType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MVirtualTypeDef__bound]))(var1); /* bound on <var1:MVirtualTypeDef>*/
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1337);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#lookup_single_definition for (self: MVirtualType, MModule, MType): MVirtualTypeDef */
val* nit___nit__MVirtualType___lookup_single_definition(val* self, val* p0, val* p1) {
val* var /* : MVirtualTypeDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : Array[MPropDef] */;
val* var_props /* var props: Array[MVirtualTypeDef] */;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var11 /* : ArraySet[MType] */;
val* var_types /* var types: ArraySet[MType] */;
val* var12 /* : nullable Object */;
val* var_res /* var res: MVirtualTypeDef */;
val* var_ /* var : Array[MVirtualTypeDef] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var17 /* : nullable MType */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1342);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MVirtualType__mproperty]))(self); /* mproperty on <self:MVirtualType>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__model__MProperty__lookup_definitions]))(var3, var_mmodule, var_resolved_receiver); /* lookup_definitions on <var3:MVirtualTypeProp>*/
}
var_props = var4;
{
var5 = ((short int(*)(val* self))(var_props->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_props); /* is_empty on <var_props:Array[MVirtualTypeDef]>*/
}
if (var5){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1345);
fatal_exit(1);
} else {
{
var6 = ((long(*)(val* self))(var_props->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_props); /* length on <var_props:Array[MVirtualTypeDef]>*/
}
{
{ /* Inline kernel#Int#== (var6,1l) on <var6:Int> */
var9 = var6 == 1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var10 = ((val*(*)(val* self))(var_props->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_props); /* first on <var_props:Array[MVirtualTypeDef]>*/
}
var = var10;
goto RET_LABEL;
} else {
}
}
var11 = NEW_standard__ArraySet(&type_standard__ArraySet__nit__MType);
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:ArraySet[MType]>*/
}
var_types = var11;
{
var12 = ((val*(*)(val* self))(var_props->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_props); /* first on <var_props:Array[MVirtualTypeDef]>*/
}
var_res = var12;
var_ = var_props;
{
var13 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MVirtualTypeDef]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:ArrayIterator[MVirtualTypeDef]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:ArrayIterator[MVirtualTypeDef]>*/
}
var_p = var16;
{
var17 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MVirtualTypeDef__bound]))(var_p); /* bound on <var_p:MVirtualTypeDef>*/
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1352);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_types->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_types, var17); /* add on <var_types:ArraySet[MType]>*/
}
{
var18 = ((short int(*)(val* self))(var_res->class->vft[COLOR_nit__model__MVirtualTypeDef__is_fixed]))(var_res); /* is_fixed on <var_res:MVirtualTypeDef>*/
}
var19 = !var18;
if (var19){
var_res = var_p;
} else {
}
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:ArrayIterator[MVirtualTypeDef]>*/
}
{
var20 = ((long(*)(val* self))(var_types->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_types); /* length on <var_types:ArraySet[MType]>*/
}
{
{ /* Inline kernel#Int#== (var20,1l) on <var20:Int> */
var23 = var20 == 1l;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
var = var_res;
goto RET_LABEL;
} else {
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1358);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MVirtualType#lookup_fixed for (self: MVirtualType, MModule, MType): MType */
val* nit___nit__MVirtualType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MVirtualTypeDef */;
val* var_prop /* var prop: MVirtualTypeDef */;
val* var6 /* : nullable MType */;
val* var_res /* var res: MType */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var_ /* var : Bool */;
val* var13 /* : MClass */;
val* var14 /* : MClassKind */;
val* var15 /* : Sys */;
val* var16 /* : MClassKind */;
short int var17 /* : Bool */;
val* var18 /* : MClass */;
val* var19 /* : MClassKind */;
val* var20 /* : Sys */;
val* var21 /* : MClassKind */;
short int var22 /* : Bool */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1367);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__undecorate]))(var_resolved_receiver); /* undecorate on <var_resolved_receiver:MType>*/
}
var_resolved_receiver = var3;
/* <var_resolved_receiver:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_resolved_receiver->type->table_size) {
var4 = 0;
} else {
var4 = var_resolved_receiver->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1369);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MVirtualType__lookup_single_definition]))(self, var_mmodule, var_resolved_receiver); /* lookup_single_definition on <self:MVirtualType>*/
}
var_prop = var5;
{
var6 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_nit__model__MVirtualTypeDef__bound]))(var_prop); /* bound on <var_prop:MVirtualTypeDef>*/
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1372);
fatal_exit(1);
}
var_res = var6;
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var_res, var_mmodule, var_resolved_receiver); /* lookup_fixed on <var_res:MType>*/
}
var_res = var7;
{
var8 = ((short int(*)(val* self))(var_prop->class->vft[COLOR_nit__model__MVirtualTypeDef__is_fixed]))(var_prop); /* is_fixed on <var_prop:MVirtualTypeDef>*/
}
if (var8){
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_res:MType> isa MClassType */
cltype11 = type_nit__MClassType.color;
idtype12 = type_nit__MClassType.id;
if(cltype11 >= var_res->type->table_size) {
var10 = 0;
} else {
var10 = var_res->type->type_table[cltype11] == idtype12;
}
var_ = var10;
if (var10){
{
var13 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model__MClassType__mclass]))(var_res); /* mclass on <var_res:MType(MClassType)>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model__MClass__kind]))(var13); /* kind on <var13:MClass>*/
}
var15 = glob_sys;
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model__Sys__enum_kind]))(var15); /* enum_kind on <var15:Sys>*/
}
{
var17 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var14, var16); /* == on <var14:MClassKind>*/
}
var9 = var17;
} else {
var9 = var_;
}
if (var9){
var = var_res;
goto RET_LABEL;
} else {
}
{
var18 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MClassType__mclass]))(var_resolved_receiver); /* mclass on <var_resolved_receiver:MType(MClassType)>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__model__MClass__kind]))(var18); /* kind on <var18:MClass>*/
}
var20 = glob_sys;
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__Sys__enum_kind]))(var20); /* enum_kind on <var20:Sys>*/
}
{
var22 = ((short int(*)(val* self, val* p0))(var19->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var19, var21); /* == on <var19:MClassKind>*/
}
if (var22){
var = var_res;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#resolve_for for (self: MVirtualType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MVirtualType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MType */;
val* var_resolved_receiver /* var resolved_receiver: nullable Object */;
val* var7 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var8 /* : MType */;
val* var_res /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = !var_cleanup_virtual;
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
var2 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__model__MType__can_resolve_for]))(self, var_mtype, var_anchor, var_mmodule); /* can_resolve_for on <self:MVirtualType>*/
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1392);
fatal_exit(1);
}
{
var3 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var3){
if (var_anchor == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1399);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var_anchor, ((val*)NULL), var_mmodule, 1); /* resolve_for on <var_mtype:MType>*/
}
var_resolved_receiver = var6;
} else {
var_resolved_receiver = var_mtype;
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MType__lookup_bound]))(self, var_mmodule, var_resolved_receiver); /* lookup_bound on <self:MVirtualType>*/
}
var_verbatim_bound = var7;
{
var8 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_verbatim_bound->class->vft[COLOR_nit__model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_verbatim_bound:MType>*/
}
var_res = var8;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#can_resolve_for for (self: MVirtualType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MVirtualType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var5 /* : MVirtualTypeProp */;
short int var6 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var1){
if (var_anchor == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var2 = var3;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1415);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var4;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MVirtualType__mproperty]))(self); /* mproperty on <self:MVirtualType>*/
}
{
var6 = ((short int(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__has_mproperty]))(var_mtype, var_mmodule, var5); /* has_mproperty on <var_mtype:MType>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#to_s for (self: MVirtualType): String */
val* nit___nit__MVirtualType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MVirtualTypeProp */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MVirtualType__mproperty]))(self); /* mproperty on <self:MVirtualType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__Object__to_s]))(var1); /* to_s on <var1:MVirtualTypeProp>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#full_name for (self: MVirtualType): String */
val* nit___nit__MVirtualType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : MVirtualTypeProp */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MVirtualType__mproperty]))(self); /* mproperty on <self:MVirtualType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var1); /* full_name on <var1:MVirtualTypeProp>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#c_name for (self: MVirtualType): String */
val* nit___nit__MVirtualType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
val* var1 /* : MVirtualTypeProp */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MVirtualType__mproperty]))(self); /* mproperty on <self:MVirtualType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var1); /* c_name on <var1:MVirtualTypeProp>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#init for (self: MVirtualType) */
void nit___nit__MVirtualType___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MVirtualType___standard__kernel__Object__init]))(self); /* init on <self:MVirtualType>*/
}
RET_LABEL:;
}
/* method model#MParameterType#mclass for (self: MParameterType): MClass */
val* nit___nit__MParameterType___mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1457);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#mclass= for (self: MParameterType, MClass) */
void nit___nit__MParameterType___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameterType___mclass].val = p0; /* _mclass on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#model for (self: MParameterType): Model */
val* nit___nit__MParameterType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__mclass]))(self); /* mclass on <self:MParameterType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var1); /* intro_mmodule on <var1:MClass>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model_base__MEntity__model]))(var2); /* model on <var2:MModule>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#rank for (self: MParameterType): Int */
long nit___nit__MParameterType___rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#rank= for (self: MParameterType, Int) */
void nit___nit__MParameterType___rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__model__MParameterType___rank].l = p0; /* _rank on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#name for (self: MParameterType): String */
val* nit___nit__MParameterType___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1466);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#name= for (self: MParameterType, String) */
void nit___nit__MParameterType___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameterType___name].val = p0; /* _name on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#to_s for (self: MParameterType): String */
val* nit___nit__MParameterType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MParameterType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#full_name for (self: MParameterType): String */
val* nit___nit__MParameterType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MClass */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = self->attrs[COLOR_nit__model__MParameterType___full_name].val != NULL; /* _full_name on <self:MParameterType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MParameterType___full_name].val; /* _full_name on <self:MParameterType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1470);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "::";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__mclass]))(self); /* mclass on <self:MParameterType>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var10); /* full_name on <var10:MClass>*/
}
((struct instance_standard__NativeArray*)var5)->values[0]=var11;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MParameterType>*/
}
((struct instance_standard__NativeArray*)var5)->values[2]=var12;
{
var13 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var13;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MParameterType___full_name].val = var3; /* _full_name on <self:MParameterType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MParameterType#full_name= for (self: MParameterType, String) */
void nit___nit__MParameterType___full_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameterType___full_name].val = p0; /* _full_name on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#c_name for (self: MParameterType): String */
val* nit___nit__MParameterType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
var1 = self->attrs[COLOR_nit__model__MParameterType___c_name].val != NULL; /* _c_name on <self:MParameterType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MParameterType___c_name].val; /* _c_name on <self:MParameterType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1472);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__mclass]))(self); /* mclass on <self:MParameterType>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var5); /* c_name on <var5:MClass>*/
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "__";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce = var7;
}
{
var10 = ((val*(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__string__String___43d]))(var6, var7); /* + on <var6:String>*/
}
if (unlikely(varonce11==NULL)) {
var12 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "#";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[0]=var14;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MParameterType>*/
}
((struct instance_standard__NativeArray*)var12)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_standard__string__Text__to_cmangle]))(var18); /* to_cmangle on <var18:String>*/
}
{
var20 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__string__String___43d]))(var10, var19); /* + on <var10:String>*/
}
var3 = var20;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MParameterType___c_name].val = var3; /* _c_name on <self:MParameterType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MParameterType#c_name= for (self: MParameterType, String) */
void nit___nit__MParameterType___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameterType___c_name].val = p0; /* _c_name on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#lookup_bound for (self: MParameterType, MModule, MType): MType */
val* nit___nit__MParameterType___MType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MClass */;
val* var_goalclass /* var goalclass: MClass */;
val* var6 /* : MClass */;
short int var7 /* : Bool */;
val* var8 /* : Array[MType] */;
long var9 /* : Int */;
val* var10 /* : nullable Object */;
val* var11 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var_ /* var : Set[MClassType] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : Iterator[MClassType] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var16 /* : MClass */;
short int var17 /* : Bool */;
val* var18 /* : Array[MType] */;
long var19 /* : Int */;
val* var20 /* : nullable Object */;
val* var_res /* var res: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1476);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__undecorate]))(var_resolved_receiver); /* undecorate on <var_resolved_receiver:MType>*/
}
var_resolved_receiver = var3;
/* <var_resolved_receiver:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_resolved_receiver->type->table_size) {
var4 = 0;
} else {
var4 = var_resolved_receiver->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1478);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__mclass]))(self); /* mclass on <self:MParameterType>*/
}
var_goalclass = var5;
{
var6 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MClassType__mclass]))(var_resolved_receiver); /* mclass on <var_resolved_receiver:MType(MClassType)>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var_goalclass); /* == on <var6:MClass>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MClassType__arguments]))(var_resolved_receiver); /* arguments on <var_resolved_receiver:MType(MClassType)>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__rank]))(self); /* rank on <self:MParameterType>*/
}
{
var10 = ((val*(*)(val* self, long p0))(var8->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var8, var9); /* [] on <var8:Array[MType]>*/
}
var = var10;
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self, val* p0))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__collect_mtypes]))(var_resolved_receiver, var_mmodule); /* collect_mtypes on <var_resolved_receiver:MType(MClassType)>*/
}
var_supertypes = var11;
var_ = var_supertypes;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MClassType]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:Iterator[MClassType]>*/
}
if (var14){
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:Iterator[MClassType]>*/
}
var_t = var15;
{
var16 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model__MClassType__mclass]))(var_t); /* mclass on <var_t:MClassType>*/
}
{
var17 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_goalclass); /* == on <var16:MClass>*/
}
if (var17){
{
var18 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model__MClassType__arguments]))(var_t); /* arguments on <var_t:MClassType>*/
}
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__rank]))(self); /* rank on <self:MParameterType>*/
}
{
var20 = ((val*(*)(val* self, long p0))(var18->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var18, var19); /* [] on <var18:Array[MType]>*/
}
var_res = var20;
var = var_res;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:Iterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:Iterator[MClassType]>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1492);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MParameterType#lookup_fixed for (self: MParameterType, MModule, MType): MType */
val* nit___nit__MParameterType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var7 /* : MType */;
val* var_res /* var res: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1504);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__undecorate]))(var_resolved_receiver); /* undecorate on <var_resolved_receiver:MType>*/
}
var_resolved_receiver = var3;
/* <var_resolved_receiver:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_resolved_receiver->type->table_size) {
var4 = 0;
} else {
var4 = var_resolved_receiver->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MClassType__mclass]))(var_resolved_receiver); /* mclass on <var_resolved_receiver:MType(MClassType)>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model__MClass__mclass_type]))(var5); /* mclass_type on <var5:MClass>*/
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__model__MType__resolve_for]))(self, var6, var_resolved_receiver, var_mmodule, 0); /* resolve_for on <self:MParameterType>*/
}
var_res = var7;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#resolve_for for (self: MParameterType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MParameterType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var5 /* : MClass */;
short int var6 /* : Bool */;
val* var7 /* : Array[MType] */;
long var8 /* : Int */;
val* var9 /* : nullable Object */;
val* var_res /* var res: MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_13 /* var : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MType */;
val* var_r2 /* var r2: MType */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var_20 /* var : Bool */;
val* var21 /* : MClass */;
val* var22 /* : MClassKind */;
val* var23 /* : Sys */;
val* var24 /* : MClassKind */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MClass */;
val* var30 /* : MClassType */;
val* var31 /* : MType */;
val* var_resolved_receiver /* var resolved_receiver: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : MType */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : MClass */;
val* var40 /* : MClass */;
short int var41 /* : Bool */;
val* var42 /* : Array[MType] */;
long var43 /* : Int */;
val* var44 /* : nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : MType */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
val* var52 /* : MClass */;
val* var53 /* : MClass */;
short int var54 /* : Bool */;
val* var55 /* : Array[MType] */;
long var56 /* : Int */;
val* var57 /* : nullable Object */;
val* var_res58 /* var res: MType */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : MType */;
val* var63 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var64 /* : MType */;
val* var_res65 /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__model__MType__can_resolve_for]))(self, var_mtype, var_anchor, var_mmodule); /* can_resolve_for on <self:MParameterType>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1513);
fatal_exit(1);
}
/* <var_mtype:MType> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
var4 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype); /* mclass on <var_mtype:MType(MGenericType)>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__mclass]))(self); /* mclass on <self:MParameterType>*/
}
{
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var5); /* == on <var4:MClass>*/
}
var2 = var6;
} else {
var2 = var_;
}
if (var2){
{
var7 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MType(MGenericType)>*/
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__rank]))(self); /* rank on <self:MParameterType>*/
}
{
var9 = ((val*(*)(val* self, long p0))(var7->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, var8); /* [] on <var7:Array[MType]>*/
}
var_res = var9;
if (var_anchor == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var11 = var12;
}
var_13 = var11;
if (var11){
{
var14 = ((short int(*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__need_anchor]))(var_res); /* need_anchor on <var_res:MType>*/
}
var10 = var14;
} else {
var10 = var_13;
}
if (var10){
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_nit__model__MType__anchor_to]))(var_res, var_mmodule, var_anchor); /* anchor_to on <var_res:MType>*/
}
var_r2 = var15;
/* <var_r2:MType> isa MClassType */
cltype18 = type_nit__MClassType.color;
idtype19 = type_nit__MClassType.id;
if(cltype18 >= var_r2->type->table_size) {
var17 = 0;
} else {
var17 = var_r2->type->type_table[cltype18] == idtype19;
}
var_20 = var17;
if (var17){
{
var21 = ((val*(*)(val* self))(var_r2->class->vft[COLOR_nit__model__MClassType__mclass]))(var_r2); /* mclass on <var_r2:MType(MClassType)>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__model__MClass__kind]))(var21); /* kind on <var21:MClass>*/
}
var23 = glob_sys;
{
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_nit__model__Sys__enum_kind]))(var23); /* enum_kind on <var23:Sys>*/
}
{
var25 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var24); /* == on <var22:MClassKind>*/
}
var16 = var25;
} else {
var16 = var_20;
}
if (var16){
var = var_r2;
goto RET_LABEL;
} else {
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var26 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var26){
if (var_anchor == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
var28 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var27 = var28;
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1532);
fatal_exit(1);
}
{
var29 = ((val*(*)(val* self))(var_anchor->class->vft[COLOR_nit__model__MClassType__mclass]))(var_anchor); /* mclass on <var_anchor:nullable MClassType(MClassType)>*/
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_nit__model__MClass__mclass_type]))(var29); /* mclass_type on <var29:MClass>*/
}
{
var31 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var30, var_anchor, var_mmodule, 1); /* resolve_for on <var_mtype:MType>*/
}
var_resolved_receiver = var31;
} else {
var_resolved_receiver = var_mtype;
}
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype33 = type_nit__MNullableType.color;
idtype34 = type_nit__MNullableType.id;
if(cltype33 >= var_resolved_receiver->type->table_size) {
var32 = 0;
} else {
var32 = var_resolved_receiver->type->type_table[cltype33] == idtype34;
}
if (var32){
{
var35 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_resolved_receiver); /* mtype on <var_resolved_receiver:nullable Object(MNullableType)>*/
}
var_resolved_receiver = var35;
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MParameterType */
cltype37 = type_nit__MParameterType.color;
idtype38 = type_nit__MParameterType.id;
if(cltype37 >= var_resolved_receiver->type->table_size) {
var36 = 0;
} else {
var36 = var_resolved_receiver->type->type_table[cltype37] == idtype38;
}
if (var36){
{
var39 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MParameterType__mclass]))(var_resolved_receiver); /* mclass on <var_resolved_receiver:nullable Object(MParameterType)>*/
}
if (var_anchor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1539);
fatal_exit(1);
} else {
var40 = ((val*(*)(val* self))(var_anchor->class->vft[COLOR_nit__model__MClassType__mclass]))(var_anchor); /* mclass on <var_anchor:nullable MClassType>*/
}
{
var41 = ((short int(*)(val* self, val* p0))(var39->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var39, var40); /* == on <var39:MClass>*/
}
if (unlikely(!var41)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1539);
fatal_exit(1);
}
if (var_anchor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1540);
fatal_exit(1);
} else {
var42 = ((val*(*)(val* self))(var_anchor->class->vft[COLOR_nit__model__MClassType__arguments]))(var_anchor); /* arguments on <var_anchor:nullable MClassType>*/
}
{
var43 = ((long(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MParameterType__rank]))(var_resolved_receiver); /* rank on <var_resolved_receiver:nullable Object(MParameterType)>*/
}
{
var44 = ((val*(*)(val* self, long p0))(var42->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var42, var43); /* [] on <var42:Array[MType]>*/
}
var_resolved_receiver = var44;
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype46 = type_nit__MNullableType.color;
idtype47 = type_nit__MNullableType.id;
if(cltype46 >= var_resolved_receiver->type->table_size) {
var45 = 0;
} else {
var45 = var_resolved_receiver->type->type_table[cltype46] == idtype47;
}
if (var45){
{
var48 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_resolved_receiver); /* mtype on <var_resolved_receiver:nullable Object(MNullableType)>*/
}
var_resolved_receiver = var48;
} else {
}
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MClassType */
cltype50 = type_nit__MClassType.color;
idtype51 = type_nit__MClassType.id;
if(cltype50 >= var_resolved_receiver->type->table_size) {
var49 = 0;
} else {
var49 = var_resolved_receiver->type->type_table[cltype50] == idtype51;
}
if (unlikely(!var49)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1543);
fatal_exit(1);
}
{
var52 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MClassType__mclass]))(var_resolved_receiver); /* mclass on <var_resolved_receiver:nullable Object(MClassType)>*/
}
{
var53 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__mclass]))(self); /* mclass on <self:MParameterType>*/
}
{
var54 = ((short int(*)(val* self, val* p0))(var52->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var52, var53); /* == on <var52:MClass>*/
}
if (var54){
{
var55 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MClassType__arguments]))(var_resolved_receiver); /* arguments on <var_resolved_receiver:nullable Object(MClassType)>*/
}
{
var56 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__rank]))(self); /* rank on <self:MParameterType>*/
}
{
var57 = ((val*(*)(val* self, long p0))(var55->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var55, var56); /* [] on <var55:Array[MType]>*/
}
var_res58 = var57;
var = var_res58;
goto RET_LABEL;
} else {
}
{
var59 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:nullable Object(MClassType)>*/
}
if (var59){
if (var_anchor == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
var61 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var60 = var61;
}
if (unlikely(!var60)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1554);
fatal_exit(1);
}
{
var62 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__resolve_for]))(var_resolved_receiver, var_anchor, ((val*)NULL), var_mmodule, 0); /* resolve_for on <var_resolved_receiver:nullable Object(MClassType)>*/
}
var_resolved_receiver = var62;
} else {
}
{
var63 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MType__lookup_bound]))(self, var_mmodule, var_resolved_receiver); /* lookup_bound on <self:MParameterType>*/
}
var_verbatim_bound = var63;
{
var64 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_verbatim_bound->class->vft[COLOR_nit__model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_verbatim_bound:MType>*/
}
var_res65 = var64;
var = var_res65;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#can_resolve_for for (self: MParameterType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MParameterType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var5 /* : Set[MClassDef] */;
val* var6 /* : MClass */;
val* var7 /* : MClassDef */;
short int var8 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var1){
if (var_anchor == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anchor, ((val*)NULL)); /* != on <var_anchor:nullable MClassType>*/
var2 = var3;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1570);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var4;
} else {
}
{
var5 = ((val*(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_nit__model__MType__collect_mclassdefs]))(var_mtype, var_mmodule); /* collect_mclassdefs on <var_mtype:MType>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameterType__mclass]))(self); /* mclass on <self:MParameterType>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MClass__intro]))(var6); /* intro on <var6:MClass>*/
}
{
var8 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var5, var7); /* has on <var5:Set[MClassDef]>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#init for (self: MParameterType) */
void nit___nit__MParameterType___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MParameterType___standard__kernel__Object__init]))(self); /* init on <self:MParameterType>*/
}
RET_LABEL:;
}
/* method model#MProxyType#mtype for (self: MProxyType): MType */
val* nit___nit__MProxyType___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1583);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProxyType#mtype= for (self: MProxyType, MType) */
void nit___nit__MProxyType___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MProxyType___mtype].val = p0; /* _mtype on <self:MProxyType> */
RET_LABEL:;
}
/* method model#MProxyType#model for (self: MProxyType): Model */
val* nit___nit__MProxyType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var2 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1); /* model on <var1:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#need_anchor for (self: MProxyType): Bool */
short int nit___nit__MProxyType___MType__need_anchor(val* self) {
short int var /* : Bool */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_nit__model__MType__need_anchor]))(var1); /* need_anchor on <var1:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#as_nullable for (self: MProxyType): MType */
val* nit___nit__MProxyType___MType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var2 /* : MType */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MType__as_nullable]))(var1); /* as_nullable on <var1:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#as_notnull for (self: MProxyType): MType */
val* nit___nit__MProxyType___MType__as_notnull(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var2 /* : MType */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MType__as_notnull]))(var1); /* as_notnull on <var1:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#undecorate for (self: MProxyType): MType */
val* nit___nit__MProxyType___MType__undecorate(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var2 /* : MType */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MType__undecorate]))(var1); /* undecorate on <var1:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#resolve_for for (self: MProxyType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MProxyType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var2 /* : MType */;
val* var_res /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var1->class->vft[COLOR_nit__model__MType__resolve_for]))(var1, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var1:MType>*/
}
var_res = var2;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#can_resolve_for for (self: MProxyType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MProxyType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var1, var_mtype, var_anchor, var_mmodule); /* can_resolve_for on <var1:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#lookup_fixed for (self: MProxyType, MModule, MType): MType */
val* nit___nit__MProxyType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MType */;
val* var2 /* : MType */;
val* var_t /* var t: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((val*(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var1, var_mmodule, var_resolved_receiver); /* lookup_fixed on <var1:MType>*/
}
var_t = var2;
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#depth for (self: MProxyType): Int */
long nit___nit__MProxyType___MType__depth(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_nit__model__MType__depth]))(var1); /* depth on <var1:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#length for (self: MProxyType): Int */
long nit___nit__MProxyType___MType__length(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_nit__model__MType__length]))(var1); /* length on <var1:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#collect_mclassdefs for (self: MProxyType, MModule): Set[MClassDef] */
val* nit___nit__MProxyType___MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : Set[MClassDef] */;
var_mmodule = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MProxyType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1614);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__model__MType__collect_mclassdefs]))(var3, var_mmodule); /* collect_mclassdefs on <var3:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#collect_mclasses for (self: MProxyType, MModule): Set[MClass] */
val* nit___nit__MProxyType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : Set[MClass] */;
var_mmodule = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MProxyType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1620);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__model__MType__collect_mclasses]))(var3, var_mmodule); /* collect_mclasses on <var3:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#collect_mtypes for (self: MProxyType, MModule): Set[MClassType] */
val* nit___nit__MProxyType___MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : Set[MClassType] */;
var_mmodule = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MProxyType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1626);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MProxyType>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__model__MType__collect_mtypes]))(var3, var_mmodule); /* collect_mtypes on <var3:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProxyType#init for (self: MProxyType) */
void nit___nit__MProxyType___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MProxyType___standard__kernel__Object__init]))(self); /* init on <self:MProxyType>*/
}
RET_LABEL:;
}
/* method model#MNullableType#init for (self: MNullableType) */
void nit___nit__MNullableType___standard__kernel__Object__init(val* self) {
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : MType */;
val* var6 /* : String */;
val* var7 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MNullableType___standard__kernel__Object__init]))(self); /* init on <self:MNullableType>*/
}
if (unlikely(varonce==NULL)) {
var = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "nullable ";
var4 = standard___standard__NativeString___to_s_with_length(var3, 9l);
var2 = var4;
varonce1 = var2;
}
((struct instance_standard__NativeArray*)var)->values[0]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MNullableType>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__Object__to_s]))(var5); /* to_s on <var5:MType>*/
}
((struct instance_standard__NativeArray*)var)->values[1]=var6;
{
var7 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MNullableType__to_s_61d]))(self, var7); /* to_s= on <self:MNullableType>*/
}
RET_LABEL:;
}
/* method model#MNullableType#to_s for (self: MNullableType): String */
val* nit___nit__MNullableType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MNullableType___to_s].val; /* _to_s on <self:MNullableType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1640);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#to_s= for (self: MNullableType, String) */
void nit___nit__MNullableType___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MNullableType___to_s].val = p0; /* _to_s on <self:MNullableType> */
RET_LABEL:;
}
/* method model#MNullableType#full_name for (self: MNullableType): String */
val* nit___nit__MNullableType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MType */;
val* var11 /* : String */;
val* var12 /* : String */;
var1 = self->attrs[COLOR_nit__model__MNullableType___full_name].val != NULL; /* _full_name on <self:MNullableType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MNullableType___full_name].val; /* _full_name on <self:MNullableType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1642);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "nullable ";
var9 = standard___standard__NativeString___to_s_with_length(var8, 9l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MNullableType>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var10); /* full_name on <var10:MType>*/
}
((struct instance_standard__NativeArray*)var5)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var12;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MNullableType___full_name].val = var3; /* _full_name on <self:MNullableType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MNullableType#full_name= for (self: MNullableType, String) */
void nit___nit__MNullableType___full_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MNullableType___full_name].val = p0; /* _full_name on <self:MNullableType> */
RET_LABEL:;
}
/* method model#MNullableType#c_name for (self: MNullableType): String */
val* nit___nit__MNullableType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MType */;
val* var11 /* : String */;
val* var12 /* : String */;
var1 = self->attrs[COLOR_nit__model__MNullableType___c_name].val != NULL; /* _c_name on <self:MNullableType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MNullableType___c_name].val; /* _c_name on <self:MNullableType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1644);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "nullable__";
var9 = standard___standard__NativeString___to_s_with_length(var8, 10l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MNullableType>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var10); /* c_name on <var10:MType>*/
}
((struct instance_standard__NativeArray*)var5)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var12;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MNullableType___c_name].val = var3; /* _c_name on <self:MNullableType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MNullableType#c_name= for (self: MNullableType, String) */
void nit___nit__MNullableType___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MNullableType___c_name].val = p0; /* _c_name on <self:MNullableType> */
RET_LABEL:;
}
/* method model#MNullableType#as_nullable for (self: MNullableType): MType */
val* nit___nit__MNullableType___MType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#resolve_for for (self: MNullableType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MNullableType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var_res /* var res: MType */;
val* var2 /* : MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit___nit__MNullableType___MType__resolve_for]))(self, p0, p1, p2, p3); /* resolve_for on <self:MNullableType>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__as_nullable]))(var_res); /* as_nullable on <var_res:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#lookup_fixed for (self: MNullableType, MModule, MType): MType */
val* nit___nit__MNullableType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MType */;
val* var_t /* var t: MType */;
val* var2 /* : MType */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit___nit__MNullableType___MType__lookup_fixed]))(self, p0, p1); /* lookup_fixed on <self:MNullableType>*/
}
var_t = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MNullableType>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, var2); /* == on <var_t:MType>*/
}
if (var3){
var = self;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__as_nullable]))(var_t); /* as_nullable on <var_t:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNotNullType#to_s for (self: MNotNullType): String */
val* nit___nit__MNotNullType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MType */;
val* var7 /* : String */;
val* var8 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "not null ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 9l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MNotNullType>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__Object__to_s]))(var6); /* to_s on <var6:MType>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var7;
{
var8 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNotNullType#full_name for (self: MNotNullType): String */
val* nit___nit__MNotNullType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MType */;
val* var11 /* : String */;
val* var12 /* : String */;
var1 = self->attrs[COLOR_nit__model__MNotNullType___full_name].val != NULL; /* _full_name on <self:MNotNullType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MNotNullType___full_name].val; /* _full_name on <self:MNotNullType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1669);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "not null ";
var9 = standard___standard__NativeString___to_s_with_length(var8, 9l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MNotNullType>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var10); /* full_name on <var10:MType>*/
}
((struct instance_standard__NativeArray*)var5)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var12;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MNotNullType___full_name].val = var3; /* _full_name on <self:MNotNullType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MNotNullType#full_name= for (self: MNotNullType, String) */
void nit___nit__MNotNullType___full_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MNotNullType___full_name].val = p0; /* _full_name on <self:MNotNullType> */
RET_LABEL:;
}
/* method model#MNotNullType#c_name for (self: MNotNullType): String */
val* nit___nit__MNotNullType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MType */;
val* var11 /* : String */;
val* var12 /* : String */;
var1 = self->attrs[COLOR_nit__model__MNotNullType___c_name].val != NULL; /* _c_name on <self:MNotNullType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MNotNullType___c_name].val; /* _c_name on <self:MNotNullType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1670);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "notnull__";
var9 = standard___standard__NativeString___to_s_with_length(var8, 9l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MNotNullType>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var10); /* c_name on <var10:MType>*/
}
((struct instance_standard__NativeArray*)var5)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var12;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MNotNullType___c_name].val = var3; /* _c_name on <self:MNotNullType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MNotNullType#c_name= for (self: MNotNullType, String) */
void nit___nit__MNotNullType___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MNotNullType___c_name].val = p0; /* _c_name on <self:MNotNullType> */
RET_LABEL:;
}
/* method model#MNotNullType#as_notnull for (self: MNotNullType): MType */
val* nit___nit__MNotNullType___MType__as_notnull(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNotNullType#resolve_for for (self: MNotNullType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MNotNullType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var_res /* var res: MType */;
val* var2 /* : MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit___nit__MNotNullType___MType__resolve_for]))(self, p0, p1, p2, p3); /* resolve_for on <self:MNotNullType>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__as_notnull]))(var_res); /* as_notnull on <var_res:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNotNullType#lookup_fixed for (self: MNotNullType, MModule, MType): MType */
val* nit___nit__MNotNullType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MType */;
val* var_t /* var t: MType */;
val* var2 /* : MType */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit___nit__MNotNullType___MType__lookup_fixed]))(self, p0, p1); /* lookup_fixed on <self:MNotNullType>*/
}
var_t = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProxyType__mtype]))(self); /* mtype on <self:MNotNullType>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, var2); /* == on <var_t:MType>*/
}
if (var3){
var = self;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__as_notnull]))(var_t); /* as_notnull on <var_t:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#model for (self: MNullType): Model */
val* nit___nit__MNullType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__model__MNullType___model].val; /* _model on <self:MNullType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1694);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model= for (self: MNullType, Model) */
void nit___nit__MNullType___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MNullType___model].val = p0; /* _model on <self:MNullType> */
RET_LABEL:;
}
/* method model#MNullType#to_s for (self: MNullType): String */
val* nit___nit__MNullType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "null";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#full_name for (self: MNullType): String */
val* nit___nit__MNullType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "null";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#c_name for (self: MNullType): String */
val* nit___nit__MNullType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "null";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#as_nullable for (self: MNullType): MType */
val* nit___nit__MNullType___MType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#as_notnull for (self: MNullType): MType */
val* nit___nit__MNullType___MType__as_notnull(val* self) {
val* var /* : MType */;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1701);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MNullType#need_anchor for (self: MNullType): Bool */
short int nit___nit__MNullType___MType__need_anchor(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#resolve_for for (self: MNullType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MNullType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#can_resolve_for for (self: MNullType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MNullType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclassdefs for (self: MNullType, MModule): Set[MClassDef] */
val* nit___nit__MNullType___MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassDef] */;
var_mmodule = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClassDef]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclasses for (self: MNullType, MModule): Set[MClass] */
val* nit___nit__MNullType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClass] */;
var_mmodule = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mtypes for (self: MNullType, MModule): Set[MClassType] */
val* nit___nit__MNullType___MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassType] */;
var_mmodule = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassType);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClassType]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#init for (self: MNullType) */
void nit___nit__MNullType___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MNullType___standard__kernel__Object__init]))(self); /* init on <self:MNullType>*/
}
RET_LABEL:;
}
/* method model#MSignature#mparameters for (self: MSignature): Array[MParameter] */
val* nit___nit__MSignature___mparameters(val* self) {
val* var /* : Array[MParameter] */;
val* var1 /* : Array[MParameter] */;
var1 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1717);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters= for (self: MSignature, Array[MParameter]) */
void nit___nit__MSignature___mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MSignature___mparameters].val = p0; /* _mparameters on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#mparameter_by_name for (self: MSignature, String): nullable MParameter */
val* nit___nit__MSignature___mparameter_by_name(val* self, val* p0) {
val* var /* : nullable MParameter */;
val* var_name /* var name: String */;
val* var1 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ArrayIterator[MParameter] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var6 /* : String */;
short int var7 /* : Bool */;
var_name = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MParameter]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ArrayIterator[MParameter]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ArrayIterator[MParameter]>*/
}
var_p = var5;
{
var6 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model_base__MEntity__name]))(var_p); /* name on <var_p:MParameter>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var_name); /* == on <var6:String>*/
}
if (var7){
var = var_p;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ArrayIterator[MParameter]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#return_mtype for (self: MSignature): nullable MType */
val* nit___nit__MSignature___return_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#return_mtype= for (self: MSignature, nullable MType) */
void nit___nit__MSignature___return_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MSignature___return_mtype].val = p0; /* _return_mtype on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#depth for (self: MSignature): Int */
long nit___nit__MSignature___MType__depth(val* self) {
long var /* : Int */;
long var_dmax /* var dmax: Int */;
val* var1 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
val* var5 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MParameter] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var10 /* : MType */;
long var11 /* : Int */;
long var_d /* var d: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
var_dmax = 0l;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__return_mtype]))(self); /* return_mtype on <self:MSignature>*/
}
var_t = var1;
if (var_t == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_t, ((val*)NULL)); /* != on <var_t:nullable MType>*/
var2 = var3;
}
if (var2){
{
var4 = ((long(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__depth]))(var_t); /* depth on <var_t:nullable MType(MType)>*/
}
var_dmax = var4;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MParameter]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MParameter]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MParameter]>*/
}
var_p = var9;
{
var10 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MParameter__mtype]))(var_p); /* mtype on <var_p:MParameter>*/
}
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_nit__model__MType__depth]))(var10); /* depth on <var10:MType>*/
}
var_d = var11;
{
{ /* Inline kernel#Int#> (var_d,var_dmax) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var_dmax:Int> isa OTHER */
/* <var_dmax:Int> isa OTHER */
var14 = 1; /* easy <var_dmax:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var15 = var_d > var_dmax;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var_dmax = var_d;
} else {
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MParameter]>*/
}
{
{ /* Inline kernel#Int#+ (var_dmax,1l) on <var_dmax:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var_dmax + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#length for (self: MSignature): Int */
long nit___nit__MSignature___MType__length(val* self) {
long var /* : Int */;
long var_res /* var res: Int */;
val* var1 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MParameter] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var14 /* : MType */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
var_res = 1l;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__return_mtype]))(self); /* return_mtype on <self:MSignature>*/
}
var_t = var1;
if (var_t == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_t, ((val*)NULL)); /* != on <var_t:nullable MType>*/
var2 = var3;
}
if (var2){
{
var4 = ((long(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__length]))(var_t); /* length on <var_t:nullable MType(MType)>*/
}
{
{ /* Inline kernel#Int#+ (var_res,var4) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var8 = var_res + var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_res = var5;
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
var_ = var9;
{
var10 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MParameter]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:ArrayIterator[MParameter]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:ArrayIterator[MParameter]>*/
}
var_p = var13;
{
var14 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MParameter__mtype]))(var_p); /* mtype on <var_p:MParameter>*/
}
{
var15 = ((long(*)(val* self))(var14->class->vft[COLOR_nit__model__MType__length]))(var14); /* length on <var14:MType>*/
}
{
{ /* Inline kernel#Int#+ (var_res,var15) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var_res + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_res = var16;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:ArrayIterator[MParameter]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#init for (self: MSignature) */
void nit___nit__MSignature___standard__kernel__Object__init(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var_i /* var i: Int */;
val* var3 /* : Array[MParameter] */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : Array[MParameter] */;
val* var10 /* : nullable Object */;
val* var_parameter /* var parameter: MParameter */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MSignature___standard__kernel__Object__init]))(self); /* init on <self:MSignature>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var2 = -1l;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_vararg_rank = var;
var_i = 0l;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var3); /* length on <var3:Array[MParameter]>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
{
var10 = ((val*(*)(val* self, long p0))(var9->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:Array[MParameter]>*/
}
var_parameter = var10;
{
var11 = ((short int(*)(val* self))(var_parameter->class->vft[COLOR_nit__model__MParameter__is_vararg]))(var_parameter); /* is_vararg on <var_parameter:MParameter>*/
}
if (var11){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var14 = -1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_vararg_rank,var12) on <var_vararg_rank:Int> */
var17 = var_vararg_rank == var12;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1762);
fatal_exit(1);
}
var_vararg_rank = var_i;
} else {
}
var18 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var18;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__model__MSignature__vararg_rank_61d]))(self, var_vararg_rank); /* vararg_rank= on <self:MSignature>*/
}
RET_LABEL:;
}
/* method model#MSignature#vararg_rank for (self: MSignature): Int */
long nit___nit__MSignature___vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#vararg_rank= for (self: MSignature, Int) */
void nit___nit__MSignature___vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__model__MSignature___vararg_rank].l = p0; /* _vararg_rank on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#arity for (self: MSignature): Int */
long nit___nit__MSignature___arity(val* self) {
long var /* : Int */;
val* var1 /* : Array[MParameter] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var1); /* length on <var1:Array[MParameter]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#min_arity for (self: MSignature): Int */
long nit___nit__MSignature___min_arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_res /* var res: Int */;
val* var10 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[MParameter] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_p /* var p: MParameter */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__vararg_rank]))(self); /* vararg_rank on <self:MSignature>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var4 = -1l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var1,var2) on <var1:Int> */
var7 = var1 == var2;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__arity]))(self); /* arity on <self:MSignature>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var_res = 0l;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
var_ = var10;
{
var11 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MParameter]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:ArrayIterator[MParameter]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:ArrayIterator[MParameter]>*/
}
var_p = var14;
{
var15 = ((short int(*)(val* self))(var_p->class->vft[COLOR_nit__model__MParameter__is_default]))(var_p); /* is_default on <var_p:MParameter>*/
}
var16 = !var15;
if (var16){
{
{ /* Inline kernel#Int#+ (var_res,1l) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var20 = var_res + 1l;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_res = var17;
} else {
}
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:ArrayIterator[MParameter]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
