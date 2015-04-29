#include "nitllvm.classes.0.h"
/* runtime class nit__Model */
const struct class class_nit__Model = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to model_base:Model:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model_base:Model:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model_base:Model:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model_base:Model:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to model_base:Model:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model_base:Model:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model_base:Model:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model_base:Model:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model_base:Model:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model_base:Model:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model_base:Model:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model_base:Model:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model_base:Model:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to model_base:Model:kernel#Object#output */
(nitmethod_t)nit__mmodule___Model___mmodules, /* pointer to model_base:Model:mmodule#Model#mmodules */
(nitmethod_t)nit__mmodule___Model___mmodule_importation_hierarchy, /* pointer to model_base:Model:mmodule#Model#mmodule_importation_hierarchy */
(nitmethod_t)nit__mproject___Model___mprojects, /* pointer to model_base:Model:mproject#Model#mprojects */
(nitmethod_t)nit__mproject___Model___mproject_by_name, /* pointer to model_base:Model:mproject#Model#mproject_by_name */
(nitmethod_t)nit__mmodule___Model___get_mmodules_by_name, /* pointer to model_base:Model:mmodule#Model#get_mmodules_by_name */
(nitmethod_t)nit__mmodule___Model___mmodules_by_name, /* pointer to model_base:Model:mmodule#Model#mmodules_by_name */
(nitmethod_t)nit__model___Model___get_mclasses_by_name, /* pointer to model_base:Model:model#Model#get_mclasses_by_name */
(nitmethod_t)nit__model___Model___mclassdef_hierarchy, /* pointer to model_base:Model:model#Model#mclassdef_hierarchy */
(nitmethod_t)nit__model___Model___get_mproperties_by_name, /* pointer to model_base:Model:model#Model#get_mproperties_by_name */
(nitmethod_t)nit__model___Model___null_type, /* pointer to model_base:Model:model#Model#null_type */
(nitmethod_t)nit__model___Model___mclasses_by_name, /* pointer to model_base:Model:model#Model#mclasses_by_name */
(nitmethod_t)nit__model___Model___mclasses, /* pointer to model_base:Model:model#Model#mclasses */
(nitmethod_t)nit__model___Model___full_mtype_specialization_hierarchy, /* pointer to model_base:Model:model#Model#full_mtype_specialization_hierarchy */
(nitmethod_t)nit__model___Model___intro_mtype_specialization_hierarchy, /* pointer to model_base:Model:model#Model#intro_mtype_specialization_hierarchy */
(nitmethod_t)nit__model___Model___mproperties_by_name, /* pointer to model_base:Model:model#Model#mproperties_by_name */
(nitmethod_t)nit__model___Model___mproperties, /* pointer to model_base:Model:model#Model#mproperties */
}
};
/* allocate Model */
val* NEW_nit__Model(const struct type* type) {
val* self /* : Model */;
val* var /* : Array[MProject] */;
val* var1 /* : MultiHashMap[String, MProject] */;
val* var2 /* : Array[MModule] */;
val* var3 /* : POSet[MModule] */;
val* var4 /* : MultiHashMap[String, MModule] */;
val* var5 /* : Array[MClass] */;
val* var6 /* : Array[MProperty] */;
val* var7 /* : POSet[MClassDef] */;
val* var8 /* : POSet[MClassType] */;
val* var9 /* : POSet[MClassType] */;
val* var10 /* : MultiHashMap[String, MClass] */;
val* var11 /* : MultiHashMap[String, MProperty] */;
val* var12 /* : MNullType */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Model;
var = NEW_standard__Array(&type_standard__Array__nit__MProject);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[MProject]>*/
}
self->attrs[COLOR_nit__mproject__Model___mprojects].val = var; /* _mprojects on <self:Model exact> */
var1 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__nit__MProject);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:MultiHashMap[String, MProject]>*/
}
self->attrs[COLOR_nit__mproject__Model___mproject_by_name].val = var1; /* _mproject_by_name on <self:Model exact> */
var2 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__Model___mmodules].val = var2; /* _mmodules on <self:Model exact> */
var3 = NEW_poset__POSet(&type_poset__POSet__nit__MModule);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:POSet[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__Model___mmodule_importation_hierarchy].val = var3; /* _mmodule_importation_hierarchy on <self:Model exact> */
var4 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__nit__MModule);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:MultiHashMap[String, MModule]>*/
}
self->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val = var4; /* _mmodules_by_name on <self:Model exact> */
var5 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[MClass]>*/
}
self->attrs[COLOR_nit__model__Model___mclasses].val = var5; /* _mclasses on <self:Model exact> */
var6 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Array[MProperty]>*/
}
self->attrs[COLOR_nit__model__Model___mproperties].val = var6; /* _mproperties on <self:Model exact> */
var7 = NEW_poset__POSet(&type_poset__POSet__nit__MClassDef);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:POSet[MClassDef]>*/
}
self->attrs[COLOR_nit__model__Model___mclassdef_hierarchy].val = var7; /* _mclassdef_hierarchy on <self:Model exact> */
var8 = NEW_poset__POSet(&type_poset__POSet__nit__MClassType);
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:POSet[MClassType]>*/
}
self->attrs[COLOR_nit__model__Model___intro_mtype_specialization_hierarchy].val = var8; /* _intro_mtype_specialization_hierarchy on <self:Model exact> */
var9 = NEW_poset__POSet(&type_poset__POSet__nit__MClassType);
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:POSet[MClassType]>*/
}
self->attrs[COLOR_nit__model__Model___full_mtype_specialization_hierarchy].val = var9; /* _full_mtype_specialization_hierarchy on <self:Model exact> */
var10 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__nit__MClass);
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:MultiHashMap[String, MClass]>*/
}
self->attrs[COLOR_nit__model__Model___mclasses_by_name].val = var10; /* _mclasses_by_name on <self:Model exact> */
var11 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__nit__MProperty);
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:MultiHashMap[String, MProperty]>*/
}
self->attrs[COLOR_nit__model__Model___mproperties_by_name].val = var11; /* _mproperties_by_name on <self:Model exact> */
var12 = NEW_nit__MNullType(&type_nit__MNullType);
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_nit__model__MNullType__model_61d]))(var12, self); /* model= on <var12:MNullType>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_standard__kernel__Object__init]))(var12); /* init on <var12:MNullType>*/
}
self->attrs[COLOR_nit__model__Model___null_type].val = var12; /* _null_type on <self:Model exact> */
return self;
}
/* runtime class nit__MEntity */
/* allocate MEntity */
val* NEW_nit__MEntity(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MEntity is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MConcern */
/* allocate MConcern */
val* NEW_nit__MConcern(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MConcern is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MVisibility */
const struct class class_nit__MVisibility = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MVisibility___standard__kernel__Object__init, /* pointer to model_base:MVisibility:model_base#MVisibility#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model_base:MVisibility:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model_base:MVisibility:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model_base:MVisibility:kernel#Object#== */
(nitmethod_t)nit___nit__MVisibility___standard__string__Object__to_s, /* pointer to model_base:MVisibility:model_base#MVisibility#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model_base:MVisibility:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model_base:MVisibility:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model_base:MVisibility:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model_base:MVisibility:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model_base:MVisibility:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model_base:MVisibility:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model_base:MVisibility:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model_base:MVisibility:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to model_base:MVisibility:kernel#Object#output */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to model_base:MVisibility:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to model_base:MVisibility:kernel#Comparable#<= */
(nitmethod_t)nit___nit__MVisibility___standard__kernel__Comparable___60d, /* pointer to model_base:MVisibility:model_base#MVisibility#< */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to model_base:MVisibility:kernel#Comparable#> */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to model_base:MVisibility:kernel#Comparable#<=> */
(nitmethod_t)nit___nit__MVisibility___to_s_61d, /* pointer to model_base:MVisibility:model_base#MVisibility#to_s= */
(nitmethod_t)nit___nit__MVisibility___level_61d, /* pointer to model_base:MVisibility:model_base#MVisibility#level= */
(nitmethod_t)nit___nit__MVisibility___level, /* pointer to model_base:MVisibility:model_base#MVisibility#level */
(nitmethod_t)standard___standard__Object___init, /* pointer to model_base:MVisibility:kernel#Object#init */
}
};
/* allocate MVisibility */
val* NEW_nit__MVisibility(const struct type* type) {
val* self /* : MVisibility */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MVisibility;
return self;
}
/* runtime class more_collections__MultiHashMap */
const struct class class_more_collections__MultiHashMap = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__HashMap___standard__kernel__Object__init, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to more_collections:MultiHashMap:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to more_collections:MultiHashMap:kernel#Object#!= */
(nitmethod_t)standard___standard__MapRead___standard__kernel__Object___61d_61d, /* pointer to more_collections:MultiHashMap:abstract_collection#MapRead#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to more_collections:MultiHashMap:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to more_collections:MultiHashMap:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to more_collections:MultiHashMap:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to more_collections:MultiHashMap:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to more_collections:MultiHashMap:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to more_collections:MultiHashMap:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to more_collections:MultiHashMap:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to more_collections:MultiHashMap:string#Object#native_class_name */
(nitmethod_t)standard___standard__MapRead___standard__kernel__Object__hash, /* pointer to more_collections:MultiHashMap:abstract_collection#MapRead#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to more_collections:MultiHashMap:kernel#Object#output */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__is_empty, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#is_empty */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__length, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#length */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__iterator, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#iterator */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__has_key, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#has_key */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#[] */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__keys, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#keys */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#get_or_null */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__values, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#values */
(nitmethod_t)more_collections___more_collections__MultiHashMap___standard__abstract_collection__MapRead__provide_default_value, /* pointer to more_collections:MultiHashMap:more_collections#MultiHashMap#provide_default_value */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#[]= */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map__clear, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#clear */
(nitmethod_t)standard___standard__Object___init, /* pointer to more_collections:MultiHashMap:kernel#Object#init */
(nitmethod_t)more_collections___more_collections__MultiHashMap___add_one, /* pointer to more_collections:MultiHashMap:more_collections#MultiHashMap#add_one */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___enlarge, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___index_at, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#index_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___store, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#store */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#node_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___remove_node, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#remove_node */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___raz, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#raz */
}
};
/* allocate MultiHashMap[nullable Object, nullable Object] */
val* NEW_more_collections__MultiHashMap(const struct type* type) {
val* self /* : MultiHashMap[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__MultiHashMap;
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:MultiHashMap[nullable Object, nullable Object] exact> */
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:MultiHashMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__HashMap2 */
const struct class class_more_collections__HashMap2 = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to more_collections:HashMap2:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to more_collections:HashMap2:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to more_collections:HashMap2:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to more_collections:HashMap2:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to more_collections:HashMap2:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to more_collections:HashMap2:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to more_collections:HashMap2:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to more_collections:HashMap2:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to more_collections:HashMap2:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to more_collections:HashMap2:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to more_collections:HashMap2:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to more_collections:HashMap2:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to more_collections:HashMap2:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to more_collections:HashMap2:kernel#Object#output */
(nitmethod_t)more_collections___more_collections__HashMap2____91d_93d, /* pointer to more_collections:HashMap2:more_collections#HashMap2#[] */
(nitmethod_t)more_collections___more_collections__HashMap2____91d_93d_61d, /* pointer to more_collections:HashMap2:more_collections#HashMap2#[]= */
(nitmethod_t)more_collections___more_collections__HashMap2___level1, /* pointer to more_collections:HashMap2:more_collections#HashMap2#level1 */
}
};
/* allocate HashMap2[nullable Object, nullable Object, nullable Object] */
val* NEW_more_collections__HashMap2(const struct type* type) {
val* self /* : HashMap2[nullable Object, nullable Object, nullable Object] */;
val* var /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__HashMap2;
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__more_collections__HashMap2___35dK1__standard__HashMap__more_collections__HashMap2___35dK2__more_collections__HashMap2___35dV]);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
self->attrs[COLOR_more_collections__HashMap2___level1].val = var; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__HashMap3 */
const struct class class_more_collections__HashMap3 = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to more_collections:HashMap3:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to more_collections:HashMap3:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to more_collections:HashMap3:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to more_collections:HashMap3:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to more_collections:HashMap3:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to more_collections:HashMap3:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to more_collections:HashMap3:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to more_collections:HashMap3:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to more_collections:HashMap3:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to more_collections:HashMap3:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to more_collections:HashMap3:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to more_collections:HashMap3:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to more_collections:HashMap3:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to more_collections:HashMap3:kernel#Object#output */
(nitmethod_t)more_collections___more_collections__HashMap3____91d_93d, /* pointer to more_collections:HashMap3:more_collections#HashMap3#[] */
(nitmethod_t)more_collections___more_collections__HashMap3____91d_93d_61d, /* pointer to more_collections:HashMap3:more_collections#HashMap3#[]= */
(nitmethod_t)more_collections___more_collections__HashMap3___level1, /* pointer to more_collections:HashMap3:more_collections#HashMap3#level1 */
}
};
/* allocate HashMap3[nullable Object, nullable Object, nullable Object, nullable Object] */
val* NEW_more_collections__HashMap3(const struct type* type) {
val* self /* : HashMap3[nullable Object, nullable Object, nullable Object, nullable Object] */;
val* var /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__HashMap3;
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__more_collections__HashMap3___35dK1__more_collections__HashMap2__more_collections__HashMap3___35dK2__more_collections__HashMap3___35dK3__more_collections__HashMap3___35dV]);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
self->attrs[COLOR_more_collections__HashMap3___level1].val = var; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__DefaultMap */
/* allocate DefaultMap[nullable Object, nullable Object] */
val* NEW_more_collections__DefaultMap(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DefaultMap is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class poset__POSet */
const struct class class_poset__POSet = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to poset:POSet:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to poset:POSet:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to poset:POSet:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to poset:POSet:kernel#Object#== */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to poset:POSet:string#Collection#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to poset:POSet:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to poset:POSet:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to poset:POSet:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to poset:POSet:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to poset:POSet:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to poset:POSet:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to poset:POSet:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to poset:POSet:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to poset:POSet:kernel#Object#output */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to poset:POSet:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to poset:POSet:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to poset:POSet:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to poset:POSet:sorter#Comparator#bubble_sort */
(nitmethod_t)poset___poset__POSet___standard__sorter__Comparator__compare, /* pointer to poset:POSet:poset#POSet#compare */
(nitmethod_t)standard__string___Collection___join, /* pointer to poset:POSet:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to poset:POSet:array#Collection#to_a */
(nitmethod_t)standard___standard__Collection___is_empty, /* pointer to poset:POSet:abstract_collection#Collection#is_empty */
(nitmethod_t)poset___poset__POSet___standard__abstract_collection__Collection__iterator, /* pointer to poset:POSet:poset#POSet#iterator */
(nitmethod_t)standard___standard__Collection___length, /* pointer to poset:POSet:abstract_collection#Collection#length */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to poset:POSet:abstract_collection#Collection#has_all */
(nitmethod_t)poset___poset__POSet___standard__abstract_collection__Collection__has, /* pointer to poset:POSet:poset#POSet#has */
(nitmethod_t)standard___standard__Collection___first, /* pointer to poset:POSet:abstract_collection#Collection#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to poset:POSet:abstract_collection#Collection#not_empty */
(nitmethod_t)poset___poset__POSet___add_node, /* pointer to poset:POSet:poset#POSet#add_node */
(nitmethod_t)poset___poset__POSet___add_edge, /* pointer to poset:POSet:poset#POSet#add_edge */
(nitmethod_t)poset___poset__POSet___elements, /* pointer to poset:POSet:poset#POSet#elements */
(nitmethod_t)poset___poset__POSet___linearize, /* pointer to poset:POSet:poset#POSet#linearize */
(nitmethod_t)poset___poset__POSet___has_edge, /* pointer to poset:POSet:poset#POSet#has_edge */
(nitmethod_t)poset___poset__POSet____91d_93d, /* pointer to poset:POSet:poset#POSet#[] */
}
};
/* allocate POSet[nullable Object] */
val* NEW_poset__POSet(const struct type* type) {
val* self /* : POSet[nullable Object] */;
val* var /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_poset__POSet;
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__poset__POSet___35dE__poset__POSetElement__poset__POSet___35dE]);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
self->attrs[COLOR_poset__POSet___elements].val = var; /* _elements on <self:POSet[nullable Object] exact> */
return self;
}
/* runtime class poset__POSetElement */
const struct class class_poset__POSetElement = {
0, /* box_kind */
{
(nitmethod_t)poset___poset__POSetElement___standard__kernel__Object__init, /* pointer to poset:POSetElement:poset#POSetElement#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to poset:POSetElement:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to poset:POSetElement:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to poset:POSetElement:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to poset:POSetElement:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to poset:POSetElement:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to poset:POSetElement:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to poset:POSetElement:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to poset:POSetElement:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to poset:POSetElement:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to poset:POSetElement:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to poset:POSetElement:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to poset:POSetElement:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to poset:POSetElement:kernel#Object#output */
(nitmethod_t)poset___poset__POSetElement___direct_greaters, /* pointer to poset:POSetElement:poset#POSetElement#direct_greaters */
(nitmethod_t)poset___poset__POSetElement___poset_61d, /* pointer to poset:POSetElement:poset#POSetElement#poset= */
(nitmethod_t)poset___poset__POSetElement___element_61d, /* pointer to poset:POSetElement:poset#POSetElement#element= */
(nitmethod_t)poset___poset__POSetElement___count_61d, /* pointer to poset:POSetElement:poset#POSetElement#count= */
(nitmethod_t)poset___poset__POSetElement___tos, /* pointer to poset:POSetElement:poset#POSetElement#tos */
(nitmethod_t)poset___poset__POSetElement___froms, /* pointer to poset:POSetElement:poset#POSetElement#froms */
(nitmethod_t)poset___poset__POSetElement___dfroms, /* pointer to poset:POSetElement:poset#POSetElement#dfroms */
(nitmethod_t)poset___poset__POSetElement___dtos, /* pointer to poset:POSetElement:poset#POSetElement#dtos */
(nitmethod_t)poset___poset__POSetElement___smallers, /* pointer to poset:POSetElement:poset#POSetElement#smallers */
(nitmethod_t)poset___poset__POSetElement____60d, /* pointer to poset:POSetElement:poset#POSetElement#< */
(nitmethod_t)poset___poset__POSetElement___greaters, /* pointer to poset:POSetElement:poset#POSetElement#greaters */
(nitmethod_t)poset___poset__POSetElement___direct_smallers, /* pointer to poset:POSetElement:poset#POSetElement#direct_smallers */
(nitmethod_t)poset___poset__POSetElement___element, /* pointer to poset:POSetElement:poset#POSetElement#element */
(nitmethod_t)poset___poset__POSetElement____60d_61d, /* pointer to poset:POSetElement:poset#POSetElement#<= */
(nitmethod_t)poset___poset__POSetElement___poset, /* pointer to poset:POSetElement:poset#POSetElement#poset */
(nitmethod_t)poset___poset__POSetElement___count, /* pointer to poset:POSetElement:poset#POSetElement#count */
(nitmethod_t)standard___standard__Object___init, /* pointer to poset:POSetElement:kernel#Object#init */
}
};
/* allocate POSetElement[nullable Object] */
val* NEW_poset__POSetElement(const struct type* type) {
val* self /* : POSetElement[nullable Object] */;
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
val* var2 /* : HashSet[nullable Object] */;
val* var3 /* : HashSet[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_poset__POSetElement;
var = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE]);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___tos].val = var; /* _tos on <self:POSetElement[nullable Object] exact> */
var1 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE]);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___froms].val = var1; /* _froms on <self:POSetElement[nullable Object] exact> */
var2 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE]);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___dtos].val = var2; /* _dtos on <self:POSetElement[nullable Object] exact> */
var3 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE]);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___dfroms].val = var3; /* _dfroms on <self:POSetElement[nullable Object] exact> */
return self;
}
/* runtime class nit__MDoc */
const struct class class_nit__MDoc = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MDoc___standard__kernel__Object__init, /* pointer to mdoc:MDoc:mdoc#MDoc#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mdoc:MDoc:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mdoc:MDoc:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mdoc:MDoc:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to mdoc:MDoc:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mdoc:MDoc:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mdoc:MDoc:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mdoc:MDoc:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mdoc:MDoc:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mdoc:MDoc:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mdoc:MDoc:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mdoc:MDoc:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mdoc:MDoc:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to mdoc:MDoc:kernel#Object#output */
(nitmethod_t)nit___nit__MDoc___original_mentity_61d, /* pointer to mdoc:MDoc:mdoc#MDoc#original_mentity= */
(nitmethod_t)nit___nit__MDoc___location_61d, /* pointer to mdoc:MDoc:mdoc#MDoc#location= */
(nitmethod_t)nit___nit__MDoc___content, /* pointer to mdoc:MDoc:mdoc#MDoc#content */
(nitmethod_t)standard___standard__Object___init, /* pointer to mdoc:MDoc:kernel#Object#init */
}
};
/* allocate MDoc */
val* NEW_nit__MDoc(const struct type* type) {
val* self /* : MDoc */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MDoc;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[String]>*/
}
self->attrs[COLOR_nit__mdoc__MDoc___content].val = var; /* _content on <self:MDoc exact> */
return self;
}
/* runtime class nit__MDeprecationInfo */
const struct class class_nit__MDeprecationInfo = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to mdoc:MDeprecationInfo:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mdoc:MDeprecationInfo:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mdoc:MDeprecationInfo:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mdoc:MDeprecationInfo:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to mdoc:MDeprecationInfo:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mdoc:MDeprecationInfo:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mdoc:MDeprecationInfo:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mdoc:MDeprecationInfo:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mdoc:MDeprecationInfo:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mdoc:MDeprecationInfo:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mdoc:MDeprecationInfo:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mdoc:MDeprecationInfo:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mdoc:MDeprecationInfo:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to mdoc:MDeprecationInfo:kernel#Object#output */
(nitmethod_t)nit___nit__MDeprecationInfo___mdoc_61d, /* pointer to mdoc:MDeprecationInfo:mdoc#MDeprecationInfo#mdoc= */
(nitmethod_t)nit___nit__MDeprecationInfo___mdoc, /* pointer to mdoc:MDeprecationInfo:mdoc#MDeprecationInfo#mdoc */
}
};
/* allocate MDeprecationInfo */
val* NEW_nit__MDeprecationInfo(const struct type* type) {
val* self /* : MDeprecationInfo */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MDeprecationInfo;
return self;
}
/* runtime class ordered_tree__OrderedTree */
/* allocate OrderedTree[Object] */
val* NEW_ordered_tree__OrderedTree(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OrderedTree is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class ordered_tree__OrderedTreeIterator */
/* allocate OrderedTreeIterator[Object] */
val* NEW_ordered_tree__OrderedTreeIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OrderedTreeIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__Message */
const struct class class_nit__Message = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Message___standard__kernel__Object__init, /* pointer to toolcontext:Message:toolcontext#Message#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to toolcontext:Message:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to toolcontext:Message:kernel#Object#!= */
(nitmethod_t)nit___nit__Message___standard__kernel__Object___61d_61d, /* pointer to toolcontext:Message:toolcontext#Message#== */
(nitmethod_t)nit___nit__Message___standard__string__Object__to_s, /* pointer to toolcontext:Message:toolcontext#Message#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to toolcontext:Message:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to toolcontext:Message:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to toolcontext:Message:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to toolcontext:Message:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to toolcontext:Message:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to toolcontext:Message:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to toolcontext:Message:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to toolcontext:Message:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to toolcontext:Message:kernel#Object#output */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to toolcontext:Message:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to toolcontext:Message:kernel#Comparable#<= */
(nitmethod_t)nit___nit__Message___standard__kernel__Comparable___60d, /* pointer to toolcontext:Message:toolcontext#Message#< */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to toolcontext:Message:kernel#Comparable#> */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to toolcontext:Message:kernel#Comparable#<=> */
(nitmethod_t)nit___nit__Message___to_color_string, /* pointer to toolcontext:Message:toolcontext#Message#to_color_string */
(nitmethod_t)nit___nit__Message___location_61d, /* pointer to toolcontext:Message:toolcontext#Message#location= */
(nitmethod_t)nit___nit__Message___tag_61d, /* pointer to toolcontext:Message:toolcontext#Message#tag= */
(nitmethod_t)nit___nit__Message___text_61d, /* pointer to toolcontext:Message:toolcontext#Message#text= */
(nitmethod_t)nit___nit__Message___tag, /* pointer to toolcontext:Message:toolcontext#Message#tag */
(nitmethod_t)nit___nit__Message___location, /* pointer to toolcontext:Message:toolcontext#Message#location */
(nitmethod_t)nit___nit__Message___text, /* pointer to toolcontext:Message:toolcontext#Message#text */
(nitmethod_t)standard___standard__Object___init, /* pointer to toolcontext:Message:kernel#Object#init */
}
};
/* allocate Message */
val* NEW_nit__Message(const struct type* type) {
val* self /* : Message */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Message;
return self;
}
/* runtime class nit__ToolContext */
const struct class class_nit__ToolContext = {
0, /* box_kind */
{
(nitmethod_t)nit__naive_interpreter___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:naive_interpreter#ToolContext#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to toolcontext:ToolContext:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to toolcontext:ToolContext:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to toolcontext:ToolContext:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to toolcontext:ToolContext:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to toolcontext:ToolContext:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to toolcontext:ToolContext:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to toolcontext:ToolContext:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to toolcontext:ToolContext:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to toolcontext:ToolContext:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to toolcontext:ToolContext:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to toolcontext:ToolContext:kernel#Object#output */
(nitmethod_t)nit__phase___ToolContext___phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases */
(nitmethod_t)nit__scope___ToolContext___scope_phase, /* pointer to toolcontext:ToolContext:scope#ToolContext#scope_phase */
(nitmethod_t)nit__literal___ToolContext___literal_phase, /* pointer to toolcontext:ToolContext:literal#ToolContext#literal_phase */
(nitmethod_t)nit__flow___ToolContext___flow_phase, /* pointer to toolcontext:ToolContext:flow#ToolContext#flow_phase */
(nitmethod_t)nit__modelbuilder_base___ToolContext___modelbuilder, /* pointer to toolcontext:ToolContext:modelbuilder_base#ToolContext#modelbuilder */
(nitmethod_t)nit__modelize_class___ToolContext___modelize_class_phase, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase */
(nitmethod_t)nit__serialization_phase___ToolContext___serialization_phase_pre_model, /* pointer to toolcontext:ToolContext:serialization_phase#ToolContext#serialization_phase_pre_model */
(nitmethod_t)nit__modelize_property___ToolContext___modelize_property_phase, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase */
(nitmethod_t)nit__local_var_init___ToolContext___local_var_init_phase, /* pointer to toolcontext:ToolContext:local_var_init#ToolContext#local_var_init_phase */
(nitmethod_t)nit__typing___ToolContext___typing_phase, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase */
(nitmethod_t)nit__frontend___ToolContext___do_dummy, /* pointer to toolcontext:ToolContext:frontend#ToolContext#do_dummy */
(nitmethod_t)nit__phase___ToolContext___process_options, /* pointer to toolcontext:ToolContext:phase#ToolContext#process_options */
(nitmethod_t)nit___nit__ToolContext___option_context, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#option_context */
(nitmethod_t)nit__modelbuilder___ToolContext___run_global_phases, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#run_global_phases */
(nitmethod_t)nit__naive_interpreter___ToolContext___opt_discover_call_trace, /* pointer to toolcontext:ToolContext:naive_interpreter#ToolContext#opt_discover_call_trace */
(nitmethod_t)nit__modelbuilder_base___ToolContext___modelbuilder_real, /* pointer to toolcontext:ToolContext:modelbuilder_base#ToolContext#modelbuilder_real */
(nitmethod_t)nit__no_warning___ToolContext___no_warning_phase, /* pointer to toolcontext:ToolContext:no_warning#ToolContext#no_warning_phase */
(nitmethod_t)nit__simple_misc_analysis___ToolContext___simple_misc_analysis_phase, /* pointer to toolcontext:ToolContext:simple_misc_analysis#ToolContext#simple_misc_analysis_phase */
(nitmethod_t)nit__parallelization_phase___ToolContext___parallelization_phase, /* pointer to toolcontext:ToolContext:parallelization_phase#ToolContext#parallelization_phase */
(nitmethod_t)nit__phase___ToolContext___opt_disable_phase, /* pointer to toolcontext:ToolContext:phase#ToolContext#opt_disable_phase */
(nitmethod_t)nit__phase___ToolContext___phases_list, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases_list */
(nitmethod_t)nit___nit__ToolContext___fatal_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#fatal_error */
(nitmethod_t)nit__phase___ToolContext___opt_sloppy, /* pointer to toolcontext:ToolContext:phase#ToolContext#opt_sloppy */
(nitmethod_t)nit__phase___ToolContext___semantize_is_lazy_61d, /* pointer to toolcontext:ToolContext:phase#ToolContext#semantize_is_lazy= */
(nitmethod_t)nit__loader___ToolContext___opt_path, /* pointer to toolcontext:ToolContext:loader#ToolContext#opt_path */
(nitmethod_t)nit___nit__ToolContext___nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#nit_dir */
(nitmethod_t)nit___nit__ToolContext___info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#info */
(nitmethod_t)nit___nit__ToolContext___check_errors, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#check_errors */
(nitmethod_t)nit__loader___ToolContext___opt_only_parse, /* pointer to toolcontext:ToolContext:loader#ToolContext#opt_only_parse */
(nitmethod_t)nit__phase___ToolContext___run_phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#run_phases */
(nitmethod_t)nit__loader___ToolContext___opt_only_metamodel, /* pointer to toolcontext:ToolContext:loader#ToolContext#opt_only_metamodel */
(nitmethod_t)nit__mixin___ToolContext___make_main_module, /* pointer to toolcontext:ToolContext:mixin#ToolContext#make_main_module */
(nitmethod_t)nit___nit__ToolContext___errors_info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#errors_info */
(nitmethod_t)nit__mixin___ToolContext___opt_mixins, /* pointer to toolcontext:ToolContext:mixin#ToolContext#opt_mixins */
(nitmethod_t)nit__mixin___ToolContext___opt_defines, /* pointer to toolcontext:ToolContext:mixin#ToolContext#opt_defines */
(nitmethod_t)nit___nit__ToolContext___opt_warn, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warn */
(nitmethod_t)nit___nit__ToolContext___opt_help, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_help */
(nitmethod_t)nit___nit__ToolContext___usage, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#usage */
(nitmethod_t)nit___nit__ToolContext___opt_version, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_version */
(nitmethod_t)nit___nit__ToolContext___version, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#version */
(nitmethod_t)nit___nit__ToolContext___opt_bash_completion, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_bash_completion */
(nitmethod_t)nit___nit__ToolContext___opt_stub_man, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stub_man */
(nitmethod_t)nit___nit__ToolContext___toolname, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#toolname */
(nitmethod_t)nit___nit__ToolContext___tooldescription, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#tooldescription */
(nitmethod_t)nit___nit__ToolContext___nit_dir_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#nit_dir= */
(nitmethod_t)nit___nit__ToolContext___compute_nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#compute_nit_dir */
(nitmethod_t)nit___nit__ToolContext___accept_no_arguments, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#accept_no_arguments */
(nitmethod_t)nit___nit__ToolContext___verbose_level_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level= */
(nitmethod_t)nit___nit__ToolContext___opt_verbose, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_verbose */
(nitmethod_t)nit___nit__ToolContext___opt_keep_going, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_keep_going */
(nitmethod_t)nit___nit__ToolContext___keep_going_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#keep_going= */
(nitmethod_t)nit___nit__ToolContext___opt_quiet, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_quiet */
(nitmethod_t)nit___nit__ToolContext___opt_log_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log_dir */
(nitmethod_t)nit___nit__ToolContext___log_directory_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory= */
(nitmethod_t)nit___nit__ToolContext___opt_log, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log */
(nitmethod_t)nit___nit__ToolContext___log_directory, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory */
(nitmethod_t)nit___nit__ToolContext___log_info_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_info= */
(nitmethod_t)nit___nit__ToolContext___error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error */
(nitmethod_t)nit__modelbuilder_base___ToolContext___modelbuilder_real_61d, /* pointer to toolcontext:ToolContext:modelbuilder_base#ToolContext#modelbuilder_real= */
(nitmethod_t)nit___nit__ToolContext___verbose_level, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level */
(nitmethod_t)nit___nit__ToolContext___log_info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_info */
(nitmethod_t)nit___nit__ToolContext___messages, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#messages */
(nitmethod_t)nit___nit__ToolContext___message_sorter, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#message_sorter */
(nitmethod_t)nit___nit__ToolContext___opt_no_color, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_no_color */
(nitmethod_t)nit___nit__ToolContext___error_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count */
(nitmethod_t)nit___nit__ToolContext___keep_going, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#keep_going */
(nitmethod_t)nit__phase___ToolContext___phased_modules, /* pointer to toolcontext:ToolContext:phase#ToolContext#phased_modules */
(nitmethod_t)nit__phase___ToolContext___semantize_is_lazy, /* pointer to toolcontext:ToolContext:phase#ToolContext#semantize_is_lazy */
(nitmethod_t)nit__phase___ToolContext___phase_process_npropdef, /* pointer to toolcontext:ToolContext:phase#ToolContext#phase_process_npropdef */
(nitmethod_t)nit___nit__ToolContext___warning_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count */
(nitmethod_t)nit__modelbuilder___ToolContext___opt_ignore_visibility, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_ignore_visibility */
(nitmethod_t)nit___nit__ToolContext___opt_set_dummy_tool, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_set_dummy_tool */
(nitmethod_t)nit___nit__ToolContext___opt_nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_nit_dir */
(nitmethod_t)nit___nit__ToolContext___check_nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#check_nit_dir */
(nitmethod_t)nit___nit__ToolContext___error_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count= */
(nitmethod_t)nit___nit__ToolContext___opt_stop_on_first_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stop_on_first_error */
(nitmethod_t)nit___nit__ToolContext___warning_blacklist, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_blacklist */
(nitmethod_t)nit___nit__ToolContext___warning, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning */
(nitmethod_t)nit__parser_util___ToolContext___parse_superclass, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_superclass */
(nitmethod_t)nit__parser_util___ToolContext___parse_classdef, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_classdef */
(nitmethod_t)nit__parser_util___ToolContext___parse_something, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_something */
(nitmethod_t)nit___nit__ToolContext___advice, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#advice */
(nitmethod_t)nit__parser_util___ToolContext___parse_propdef, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_propdef */
(nitmethod_t)nit___nit__ToolContext___opt_warning, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warning */
(nitmethod_t)nit___nit__ToolContext___is_warning_blacklisted, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#is_warning_blacklisted */
(nitmethod_t)nit___nit__ToolContext___warning_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count= */
(nitmethod_t)nit__serialization_phase___ToolContext___place_holder_type_name, /* pointer to toolcontext:ToolContext:serialization_phase#ToolContext#place_holder_type_name */
(nitmethod_t)nit__parser_util___ToolContext___parse_module, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_module */
(nitmethod_t)nit__mixin___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:mixin#ToolContext#init */
(nitmethod_t)nit___nit__ToolContext___process_options, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#process_options */
(nitmethod_t)nit__modelbuilder___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#init */
(nitmethod_t)nit__modelbuilder___ToolContext___make_main_module, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#make_main_module */
(nitmethod_t)nit__loader___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:loader#ToolContext#init */
(nitmethod_t)nit__phase___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:phase#ToolContext#init */
(nitmethod_t)nit___nit__ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#init */
}
};
/* allocate ToolContext */
val* NEW_nit__ToolContext(const struct type* type) {
val* self /* : ToolContext */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : Array[Message] */;
val* var4 /* : Sys */;
val* var5 /* : DefaultComparator */;
val* var6 /* : MultiHashMap[SourceFile, String] */;
val* var7 /* : OptionContext */;
val* var8 /* : OptionCount */;
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
val* var21 /* : Array[String] */;
val* var22 /* : NativeArray[String] */;
val* var23 /* : OptionArray */;
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
val* var36 /* : Array[String] */;
val* var37 /* : NativeArray[String] */;
val* var38 /* : OptionBool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : Array[String] */;
val* var52 /* : NativeArray[String] */;
val* var53 /* : OptionBool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : Array[String] */;
val* var63 /* : NativeArray[String] */;
val* var64 /* : OptionString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
val* var73 /* : Array[String] */;
val* var74 /* : NativeArray[String] */;
val* var75 /* : OptionString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var84 /* : Array[String] */;
val* var85 /* : NativeArray[String] */;
val* var86 /* : OptionBool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var103 /* : Array[String] */;
val* var104 /* : NativeArray[String] */;
val* var105 /* : OptionBool */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : FlatString */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : FlatString */;
val* var114 /* : Array[String] */;
val* var115 /* : NativeArray[String] */;
val* var116 /* : OptionBool */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
val* var125 /* : Array[String] */;
val* var126 /* : NativeArray[String] */;
val* var127 /* : OptionCount */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : FlatString */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : FlatString */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : FlatString */;
val* var140 /* : Array[String] */;
val* var141 /* : NativeArray[String] */;
val* var142 /* : OptionBool */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : FlatString */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
val* var151 /* : Array[String] */;
val* var152 /* : NativeArray[String] */;
val* var153 /* : OptionBool */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : FlatString */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : FlatString */;
val* var162 /* : Array[String] */;
val* var163 /* : NativeArray[String] */;
val* var164 /* : OptionBool */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : FlatString */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
val* var172 /* : FlatString */;
val* var173 /* : Array[String] */;
val* var174 /* : NativeArray[String] */;
val* var175 /* : OptionBool */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : FlatString */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : FlatString */;
val* var184 /* : Array[String] */;
val* var185 /* : NativeArray[String] */;
val* var186 /* : OptionBool */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : FlatString */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
val* var195 /* : Array[String] */;
val* var196 /* : NativeArray[String] */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
val* var200 /* : FlatString */;
val* var201 /* : POSet[Phase] */;
val* var202 /* : OptionArray */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : FlatString */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
val* var210 /* : FlatString */;
val* var211 /* : Array[String] */;
val* var212 /* : NativeArray[String] */;
val* var213 /* : OptionBool */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
val* var217 /* : FlatString */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
val* var221 /* : FlatString */;
val* var222 /* : Array[String] */;
val* var223 /* : NativeArray[String] */;
val* var224 /* : HashSet[AModule] */;
val* var225 /* : LiteralPhase */;
val* var226 /* : SimpleMiscAnalysisPhase */;
val* var227 /* : ScopePhase */;
val* var228 /* : OptionArray */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
val* var232 /* : FlatString */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
val* var236 /* : FlatString */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
val* var240 /* : FlatString */;
val* var241 /* : Array[String] */;
val* var242 /* : NativeArray[String] */;
val* var243 /* : OptionBool */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
val* var247 /* : FlatString */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : FlatString */;
val* var252 /* : Array[String] */;
val* var253 /* : NativeArray[String] */;
val* var254 /* : OptionBool */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
val* var258 /* : FlatString */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
val* var262 /* : FlatString */;
val* var263 /* : Array[String] */;
val* var264 /* : NativeArray[String] */;
val* var265 /* : FlowPhase */;
val* var266 /* : Array[Phase] */;
val* var_ /* var : Array[Phase] */;
val* var267 /* : Phase */;
val* var268 /* : GLSLValidationPhase */;
val* var269 /* : Array[Phase] */;
val* var_270 /* var : Array[Phase] */;
val* var271 /* : Phase */;
val* var272 /* : LocalVarInitPhase */;
val* var273 /* : Array[Phase] */;
val* var_274 /* var : Array[Phase] */;
val* var275 /* : Phase */;
val* var276 /* : OptionBool */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
val* var280 /* : FlatString */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : FlatString */;
val* var285 /* : Array[String] */;
val* var286 /* : NativeArray[String] */;
val* var287 /* : ModelizeClassPhase */;
val* var288 /* : OptionArray */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
val* var292 /* : FlatString */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
val* var296 /* : FlatString */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
val* var300 /* : FlatString */;
val* var301 /* : Array[String] */;
val* var302 /* : NativeArray[String] */;
val* var303 /* : OptionArray */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
val* var307 /* : FlatString */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
val* var311 /* : FlatString */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
val* var315 /* : FlatString */;
val* var316 /* : Array[String] */;
val* var317 /* : NativeArray[String] */;
val* var318 /* : NoWarningPhase */;
val* var319 /* : Array[Phase] */;
val* var_320 /* var : Array[Phase] */;
val* var321 /* : Phase */;
val* var322 /* : CheckAnnotationPhase */;
val* var323 /* : ModelizePropertyPhase */;
val* var324 /* : Array[Phase] */;
val* var_325 /* var : Array[Phase] */;
val* var326 /* : Phase */;
val* var327 /* : SerializationPhasePreModel */;
val* var328 /* : SerializationPhasePostModel */;
val* var329 /* : Array[Phase] */;
val* var_330 /* var : Array[Phase] */;
val* var331 /* : Phase */;
val* var332 /* : Phase */;
val* var333 /* : DerivingPhase */;
val* var334 /* : TypingPhase */;
val* var335 /* : Array[Phase] */;
val* var_336 /* var : Array[Phase] */;
val* var337 /* : Phase */;
val* var338 /* : Phase */;
val* var339 /* : Phase */;
val* var340 /* : AutoSuperInitPhase */;
val* var341 /* : Array[Phase] */;
val* var_342 /* var : Array[Phase] */;
val* var343 /* : Phase */;
val* var344 /* : DivByZeroPhase */;
val* var345 /* : Array[Phase] */;
val* var_346 /* var : Array[Phase] */;
val* var347 /* : Phase */;
val* var348 /* : Phase */;
val* var349 /* : ParallelizationPhase */;
val* var350 /* : OptionBool */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
val* var354 /* : FlatString */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
val* var358 /* : FlatString */;
val* var359 /* : Array[String] */;
val* var360 /* : NativeArray[String] */;
short int var361 /* : Bool */;
val* var362 /* : LLVMPhase */;
self = nit_alloc(sizeof(struct instance) + 62*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ToolContext;
self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l = 0l; /* _error_count on <self:ToolContext exact> */
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l = 0l; /* _warning_count on <self:ToolContext exact> */
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "logs";
var2 = standard___standard__NativeString___to_s_with_length(var1, 4l);
var = var2;
varonce = var;
}
self->attrs[COLOR_nit__toolcontext__ToolContext___log_directory].val = var; /* _log_directory on <self:ToolContext exact> */
var3 = NEW_standard__Array(&type_standard__Array__nit__Message);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Message]>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val = var3; /* _messages on <self:ToolContext exact> */
var4 = glob_sys;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__sorter__Sys__default_comparator]))(var4); /* default_comparator on <var4:Sys>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___message_sorter].val = var5; /* _message_sorter on <self:ToolContext exact> */
self->attrs[COLOR_nit__toolcontext__ToolContext___keep_going].s = 0; /* _keep_going on <self:ToolContext exact> */
var6 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__nit__SourceFile__standard__String);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:MultiHashMap[SourceFile, String]>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_blacklist].val = var6; /* _warning_blacklist on <self:ToolContext exact> */
var7 = NEW_opts__OptionContext(&type_opts__OptionContext);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:OptionContext>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val = var7; /* _option_context on <self:ToolContext exact> */
var8 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Show more warnings";
var12 = standard___standard__NativeString___to_s_with_length(var11, 18l);
var10 = var12;
varonce9 = var10;
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "-W";
var16 = standard___standard__NativeString___to_s_with_length(var15, 2l);
var14 = var16;
varonce13 = var14;
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "--warn";
var20 = standard___standard__NativeString___to_s_with_length(var19, 6l);
var18 = var20;
varonce17 = var18;
}
var21 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var21 = array_instance Array[String] */
var22 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var22)->values[0] = (val*) var14;
((struct instance_standard__NativeArray*)var22)->values[1] = (val*) var18;
{
((void(*)(val* self, val* p0, long p1))(var21->class->vft[COLOR_standard__array__Array__with_native]))(var21, var22, 2l); /* with_native on <var21:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_opts__OptionCount__init]))(var8, var10, var21); /* init on <var8:OptionCount>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val = var8; /* _opt_warn on <self:ToolContext exact> */
var23 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Show/hide a specific warning";
var27 = standard___standard__NativeString___to_s_with_length(var26, 28l);
var25 = var27;
varonce24 = var25;
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "-w";
var31 = standard___standard__NativeString___to_s_with_length(var30, 2l);
var29 = var31;
varonce28 = var29;
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "--warning";
var35 = standard___standard__NativeString___to_s_with_length(var34, 9l);
var33 = var35;
varonce32 = var33;
}
var36 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var36 = array_instance Array[String] */
var37 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var37)->values[0] = (val*) var29;
((struct instance_standard__NativeArray*)var37)->values[1] = (val*) var33;
{
((void(*)(val* self, val* p0, long p1))(var36->class->vft[COLOR_standard__array__Array__with_native]))(var36, var37, 2l); /* with_native on <var36:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var23->class->vft[COLOR_opts__OptionArray__init]))(var23, var25, var36); /* init on <var23:OptionArray>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val = var23; /* _opt_warning on <self:ToolContext exact> */
var38 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Do not show warnings";
var42 = standard___standard__NativeString___to_s_with_length(var41, 20l);
var40 = var42;
varonce39 = var40;
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "-q";
var46 = standard___standard__NativeString___to_s_with_length(var45, 2l);
var44 = var46;
varonce43 = var44;
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "--quiet";
var50 = standard___standard__NativeString___to_s_with_length(var49, 7l);
var48 = var50;
varonce47 = var48;
}
var51 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var51 = array_instance Array[String] */
var52 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var52)->values[0] = (val*) var44;
((struct instance_standard__NativeArray*)var52)->values[1] = (val*) var48;
{
((void(*)(val* self, val* p0, long p1))(var51->class->vft[COLOR_standard__array__Array__with_native]))(var51, var52, 2l); /* with_native on <var51:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var38->class->vft[COLOR_opts__OptionBool__init]))(var38, var40, var51); /* init on <var38:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_quiet].val = var38; /* _opt_quiet on <self:ToolContext exact> */
var53 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "Generate various log files";
var57 = standard___standard__NativeString___to_s_with_length(var56, 26l);
var55 = var57;
varonce54 = var55;
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "--log";
var61 = standard___standard__NativeString___to_s_with_length(var60, 5l);
var59 = var61;
varonce58 = var59;
}
var62 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var62 = array_instance Array[String] */
var63 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var63)->values[0] = (val*) var59;
{
((void(*)(val* self, val* p0, long p1))(var62->class->vft[COLOR_standard__array__Array__with_native]))(var62, var63, 1l); /* with_native on <var62:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var53->class->vft[COLOR_opts__OptionBool__init]))(var53, var55, var62); /* init on <var53:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log].val = var53; /* _opt_log on <self:ToolContext exact> */
var64 = NEW_opts__OptionString(&type_opts__OptionString);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "Directory where to generate log files";
var68 = standard___standard__NativeString___to_s_with_length(var67, 37l);
var66 = var68;
varonce65 = var66;
}
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "--log-dir";
var72 = standard___standard__NativeString___to_s_with_length(var71, 9l);
var70 = var72;
varonce69 = var70;
}
var73 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var73 = array_instance Array[String] */
var74 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var74)->values[0] = (val*) var70;
{
((void(*)(val* self, val* p0, long p1))(var73->class->vft[COLOR_standard__array__Array__with_native]))(var73, var74, 1l); /* with_native on <var73:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var64->class->vft[COLOR_opts__OptionString__init]))(var64, var66, var73); /* init on <var64:OptionString>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log_dir].val = var64; /* _opt_log_dir on <self:ToolContext exact> */
var75 = NEW_opts__OptionString(&type_opts__OptionString);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Base directory of the Nit installation";
var79 = standard___standard__NativeString___to_s_with_length(var78, 38l);
var77 = var79;
varonce76 = var77;
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "--nit-dir";
var83 = standard___standard__NativeString___to_s_with_length(var82, 9l);
var81 = var83;
varonce80 = var81;
}
var84 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var84 = array_instance Array[String] */
var85 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var85)->values[0] = (val*) var81;
{
((void(*)(val* self, val* p0, long p1))(var84->class->vft[COLOR_standard__array__Array__with_native]))(var84, var85, 1l); /* with_native on <var84:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var75->class->vft[COLOR_opts__OptionString__init]))(var75, var77, var84); /* init on <var75:OptionString>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_nit_dir].val = var75; /* _opt_nit_dir on <self:ToolContext exact> */
var86 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Show Help (This screen)";
var90 = standard___standard__NativeString___to_s_with_length(var89, 23l);
var88 = var90;
varonce87 = var88;
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "-h";
var94 = standard___standard__NativeString___to_s_with_length(var93, 2l);
var92 = var94;
varonce91 = var92;
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "-?";
var98 = standard___standard__NativeString___to_s_with_length(var97, 2l);
var96 = var98;
varonce95 = var96;
}
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "--help";
var102 = standard___standard__NativeString___to_s_with_length(var101, 6l);
var100 = var102;
varonce99 = var100;
}
var103 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var103 = array_instance Array[String] */
var104 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var104)->values[0] = (val*) var92;
((struct instance_standard__NativeArray*)var104)->values[1] = (val*) var96;
((struct instance_standard__NativeArray*)var104)->values[2] = (val*) var100;
{
((void(*)(val* self, val* p0, long p1))(var103->class->vft[COLOR_standard__array__Array__with_native]))(var103, var104, 3l); /* with_native on <var103:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var86->class->vft[COLOR_opts__OptionBool__init]))(var86, var88, var103); /* init on <var86:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_help].val = var86; /* _opt_help on <self:ToolContext exact> */
var105 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "Show version and exit";
var109 = standard___standard__NativeString___to_s_with_length(var108, 21l);
var107 = var109;
varonce106 = var107;
}
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "--version";
var113 = standard___standard__NativeString___to_s_with_length(var112, 9l);
var111 = var113;
varonce110 = var111;
}
var114 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var114 = array_instance Array[String] */
var115 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var115)->values[0] = (val*) var111;
{
((void(*)(val* self, val* p0, long p1))(var114->class->vft[COLOR_standard__array__Array__with_native]))(var114, var115, 1l); /* with_native on <var114:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var105->class->vft[COLOR_opts__OptionBool__init]))(var105, var107, var114); /* init on <var105:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_version].val = var105; /* _opt_version on <self:ToolContext exact> */
var116 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "Set toolname and version to DUMMY. Useful for testing";
var120 = standard___standard__NativeString___to_s_with_length(var119, 53l);
var118 = var120;
varonce117 = var118;
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "--set-dummy-tool";
var124 = standard___standard__NativeString___to_s_with_length(var123, 16l);
var122 = var124;
varonce121 = var122;
}
var125 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var125 = array_instance Array[String] */
var126 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var126)->values[0] = (val*) var122;
{
((void(*)(val* self, val* p0, long p1))(var125->class->vft[COLOR_standard__array__Array__with_native]))(var125, var126, 1l); /* with_native on <var125:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var116->class->vft[COLOR_opts__OptionBool__init]))(var116, var118, var125); /* init on <var116:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_set_dummy_tool].val = var116; /* _opt_set_dummy_tool on <self:ToolContext exact> */
var127 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "Verbose";
var131 = standard___standard__NativeString___to_s_with_length(var130, 7l);
var129 = var131;
varonce128 = var129;
}
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "-v";
var135 = standard___standard__NativeString___to_s_with_length(var134, 2l);
var133 = var135;
varonce132 = var133;
}
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "--verbose";
var139 = standard___standard__NativeString___to_s_with_length(var138, 9l);
var137 = var139;
varonce136 = var137;
}
var140 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var140 = array_instance Array[String] */
var141 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var141)->values[0] = (val*) var133;
((struct instance_standard__NativeArray*)var141)->values[1] = (val*) var137;
{
((void(*)(val* self, val* p0, long p1))(var140->class->vft[COLOR_standard__array__Array__with_native]))(var140, var141, 2l); /* with_native on <var140:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var127->class->vft[COLOR_opts__OptionCount__init]))(var127, var129, var140); /* init on <var127:OptionCount>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_verbose].val = var127; /* _opt_verbose on <self:ToolContext exact> */
var142 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "Stop on first error";
var146 = standard___standard__NativeString___to_s_with_length(var145, 19l);
var144 = var146;
varonce143 = var144;
}
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "--stop-on-first-error";
var150 = standard___standard__NativeString___to_s_with_length(var149, 21l);
var148 = var150;
varonce147 = var148;
}
var151 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var151 = array_instance Array[String] */
var152 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var152)->values[0] = (val*) var148;
{
((void(*)(val* self, val* p0, long p1))(var151->class->vft[COLOR_standard__array__Array__with_native]))(var151, var152, 1l); /* with_native on <var151:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var142->class->vft[COLOR_opts__OptionBool__init]))(var142, var144, var151); /* init on <var142:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stop_on_first_error].val = var142; /* _opt_stop_on_first_error on <self:ToolContext exact> */
var153 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "Continue after errors, whatever the consequences";
var157 = standard___standard__NativeString___to_s_with_length(var156, 48l);
var155 = var157;
varonce154 = var155;
}
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "--keep-going";
var161 = standard___standard__NativeString___to_s_with_length(var160, 12l);
var159 = var161;
varonce158 = var159;
}
var162 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var162 = array_instance Array[String] */
var163 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var163)->values[0] = (val*) var159;
{
((void(*)(val* self, val* p0, long p1))(var162->class->vft[COLOR_standard__array__Array__with_native]))(var162, var163, 1l); /* with_native on <var162:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var153->class->vft[COLOR_opts__OptionBool__init]))(var153, var155, var162); /* init on <var153:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_keep_going].val = var153; /* _opt_keep_going on <self:ToolContext exact> */
var164 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "Do not use color to display errors and warnings";
var168 = standard___standard__NativeString___to_s_with_length(var167, 47l);
var166 = var168;
varonce165 = var166;
}
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "--no-color";
var172 = standard___standard__NativeString___to_s_with_length(var171, 10l);
var170 = var172;
varonce169 = var170;
}
var173 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var173 = array_instance Array[String] */
var174 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var174)->values[0] = (val*) var170;
{
((void(*)(val* self, val* p0, long p1))(var173->class->vft[COLOR_standard__array__Array__with_native]))(var173, var174, 1l); /* with_native on <var173:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var164->class->vft[COLOR_opts__OptionBool__init]))(var164, var166, var173); /* init on <var164:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_no_color].val = var164; /* _opt_no_color on <self:ToolContext exact> */
var175 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "Generate bash_completion file for this program";
var179 = standard___standard__NativeString___to_s_with_length(var178, 46l);
var177 = var179;
varonce176 = var177;
}
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "--bash-completion";
var183 = standard___standard__NativeString___to_s_with_length(var182, 17l);
var181 = var183;
varonce180 = var181;
}
var184 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var184 = array_instance Array[String] */
var185 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var185)->values[0] = (val*) var181;
{
((void(*)(val* self, val* p0, long p1))(var184->class->vft[COLOR_standard__array__Array__with_native]))(var184, var185, 1l); /* with_native on <var184:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var175->class->vft[COLOR_opts__OptionBool__init]))(var175, var177, var184); /* init on <var175:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_bash_completion].val = var175; /* _opt_bash_completion on <self:ToolContext exact> */
var186 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "Generate a stub manpage in pandoc markdown format";
var190 = standard___standard__NativeString___to_s_with_length(var189, 49l);
var188 = var190;
varonce187 = var188;
}
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "--stub-man";
var194 = standard___standard__NativeString___to_s_with_length(var193, 10l);
var192 = var194;
varonce191 = var192;
}
var195 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var195 = array_instance Array[String] */
var196 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var196)->values[0] = (val*) var192;
{
((void(*)(val* self, val* p0, long p1))(var195->class->vft[COLOR_standard__array__Array__with_native]))(var195, var196, 1l); /* with_native on <var195:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var186->class->vft[COLOR_opts__OptionBool__init]))(var186, var188, var195); /* init on <var186:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stub_man].val = var186; /* _opt_stub_man on <self:ToolContext exact> */
self->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l = 0l; /* _verbose_level on <self:ToolContext exact> */
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "Usage: [OPTION]... [ARG]...";
var200 = standard___standard__NativeString___to_s_with_length(var199, 27l);
var198 = var200;
varonce197 = var198;
}
self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val = var198; /* _tooldescription on <self:ToolContext exact> */
self->attrs[COLOR_nit__toolcontext__ToolContext___accept_no_arguments].s = 0; /* _accept_no_arguments on <self:ToolContext exact> */
var201 = NEW_poset__POSet(&type_poset__POSet__nit__Phase);
{
((void(*)(val* self))(var201->class->vft[COLOR_standard__kernel__Object__init]))(var201); /* init on <var201:POSet[Phase]>*/
}
self->attrs[COLOR_nit__phase__ToolContext___phases].val = var201; /* _phases on <self:ToolContext exact> */
var202 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "DEBUG: Disable a specific phase; use `list` to get the list.";
var206 = standard___standard__NativeString___to_s_with_length(var205, 60l);
var204 = var206;
varonce203 = var204;
}
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = "--disable-phase";
var210 = standard___standard__NativeString___to_s_with_length(var209, 15l);
var208 = var210;
varonce207 = var208;
}
var211 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var211 = array_instance Array[String] */
var212 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var212)->values[0] = (val*) var208;
{
((void(*)(val* self, val* p0, long p1))(var211->class->vft[COLOR_standard__array__Array__with_native]))(var211, var212, 1l); /* with_native on <var211:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var202->class->vft[COLOR_opts__OptionArray__init]))(var202, var204, var211); /* init on <var202:OptionArray>*/
}
self->attrs[COLOR_nit__phase__ToolContext___opt_disable_phase].val = var202; /* _opt_disable_phase on <self:ToolContext exact> */
var213 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "DEBUG: force lazy semantic analysis of the source-code";
var217 = standard___standard__NativeString___to_s_with_length(var216, 54l);
var215 = var217;
varonce214 = var215;
}
if (likely(varonce218!=NULL)) {
var219 = varonce218;
} else {
var220 = "--sloppy";
var221 = standard___standard__NativeString___to_s_with_length(var220, 8l);
var219 = var221;
varonce218 = var219;
}
var222 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var222 = array_instance Array[String] */
var223 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var223)->values[0] = (val*) var219;
{
((void(*)(val* self, val* p0, long p1))(var222->class->vft[COLOR_standard__array__Array__with_native]))(var222, var223, 1l); /* with_native on <var222:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var213->class->vft[COLOR_opts__OptionBool__init]))(var213, var215, var222); /* init on <var213:OptionBool>*/
}
self->attrs[COLOR_nit__phase__ToolContext___opt_sloppy].val = var213; /* _opt_sloppy on <self:ToolContext exact> */
self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s = 0; /* _semantize_is_lazy on <self:ToolContext exact> */
var224 = NEW_standard__HashSet(&type_standard__HashSet__nit__AModule);
{
((void(*)(val* self))(var224->class->vft[COLOR_standard__kernel__Object__init]))(var224); /* init on <var224:HashSet[AModule]>*/
}
self->attrs[COLOR_nit__phase__ToolContext___phased_modules].val = var224; /* _phased_modules on <self:ToolContext exact> */
var225 = NEW_nit__literal__LiteralPhase(&type_nit__literal__LiteralPhase);
{
((void(*)(val* self, val* p0))(var225->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var225, self); /* toolcontext= on <var225:LiteralPhase>*/
}
{
((void(*)(val* self, val* p0))(var225->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var225, ((val*)NULL)); /* depends= on <var225:LiteralPhase>*/
}
{
((void(*)(val* self))(var225->class->vft[COLOR_standard__kernel__Object__init]))(var225); /* init on <var225:LiteralPhase>*/
}
self->attrs[COLOR_nit__literal__ToolContext___literal_phase].val = var225; /* _literal_phase on <self:ToolContext exact> */
var226 = NEW_nit__simple_misc_analysis__SimpleMiscAnalysisPhase(&type_nit__simple_misc_analysis__SimpleMiscAnalysisPhase);
{
((void(*)(val* self, val* p0))(var226->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var226, self); /* toolcontext= on <var226:SimpleMiscAnalysisPhase>*/
}
{
((void(*)(val* self, val* p0))(var226->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var226, ((val*)NULL)); /* depends= on <var226:SimpleMiscAnalysisPhase>*/
}
{
((void(*)(val* self))(var226->class->vft[COLOR_standard__kernel__Object__init]))(var226); /* init on <var226:SimpleMiscAnalysisPhase>*/
}
self->attrs[COLOR_nit__simple_misc_analysis__ToolContext___simple_misc_analysis_phase].val = var226; /* _simple_misc_analysis_phase on <self:ToolContext exact> */
var227 = NEW_nit__scope__ScopePhase(&type_nit__scope__ScopePhase);
{
((void(*)(val* self, val* p0))(var227->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var227, self); /* toolcontext= on <var227:ScopePhase>*/
}
{
((void(*)(val* self, val* p0))(var227->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var227, ((val*)NULL)); /* depends= on <var227:ScopePhase>*/
}
{
((void(*)(val* self))(var227->class->vft[COLOR_standard__kernel__Object__init]))(var227); /* init on <var227:ScopePhase>*/
}
self->attrs[COLOR_nit__scope__ToolContext___scope_phase].val = var227; /* _scope_phase on <self:ToolContext exact> */
var228 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "Set include path for loaders (may be used more than once)";
var232 = standard___standard__NativeString___to_s_with_length(var231, 57l);
var230 = var232;
varonce229 = var230;
}
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "-I";
var236 = standard___standard__NativeString___to_s_with_length(var235, 2l);
var234 = var236;
varonce233 = var234;
}
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "--path";
var240 = standard___standard__NativeString___to_s_with_length(var239, 6l);
var238 = var240;
varonce237 = var238;
}
var241 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var241 = array_instance Array[String] */
var242 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var242)->values[0] = (val*) var234;
((struct instance_standard__NativeArray*)var242)->values[1] = (val*) var238;
{
((void(*)(val* self, val* p0, long p1))(var241->class->vft[COLOR_standard__array__Array__with_native]))(var241, var242, 2l); /* with_native on <var241:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var228->class->vft[COLOR_opts__OptionArray__init]))(var228, var230, var241); /* init on <var228:OptionArray>*/
}
self->attrs[COLOR_nit__loader__ToolContext___opt_path].val = var228; /* _opt_path on <self:ToolContext exact> */
var243 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = "Stop after meta-model processing";
var247 = standard___standard__NativeString___to_s_with_length(var246, 32l);
var245 = var247;
varonce244 = var245;
}
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "--only-metamodel";
var251 = standard___standard__NativeString___to_s_with_length(var250, 16l);
var249 = var251;
varonce248 = var249;
}
var252 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var252 = array_instance Array[String] */
var253 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var253)->values[0] = (val*) var249;
{
((void(*)(val* self, val* p0, long p1))(var252->class->vft[COLOR_standard__array__Array__with_native]))(var252, var253, 1l); /* with_native on <var252:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var243->class->vft[COLOR_opts__OptionBool__init]))(var243, var245, var252); /* init on <var243:OptionBool>*/
}
self->attrs[COLOR_nit__loader__ToolContext___opt_only_metamodel].val = var243; /* _opt_only_metamodel on <self:ToolContext exact> */
var254 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = "Only proceed to parse step of loaders";
var258 = standard___standard__NativeString___to_s_with_length(var257, 37l);
var256 = var258;
varonce255 = var256;
}
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "--only-parse";
var262 = standard___standard__NativeString___to_s_with_length(var261, 12l);
var260 = var262;
varonce259 = var260;
}
var263 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var263 = array_instance Array[String] */
var264 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var264)->values[0] = (val*) var260;
{
((void(*)(val* self, val* p0, long p1))(var263->class->vft[COLOR_standard__array__Array__with_native]))(var263, var264, 1l); /* with_native on <var263:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var254->class->vft[COLOR_opts__OptionBool__init]))(var254, var256, var263); /* init on <var254:OptionBool>*/
}
self->attrs[COLOR_nit__loader__ToolContext___opt_only_parse].val = var254; /* _opt_only_parse on <self:ToolContext exact> */
var265 = NEW_nit__flow__FlowPhase(&type_nit__flow__FlowPhase);
var266 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
((void(*)(val* self, long p0))(var266->class->vft[COLOR_standard__array__Array__with_capacity]))(var266, 1l); /* with_capacity on <var266:Array[Phase]>*/
}
var_ = var266;
{
var267 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ToolContext__scope_phase]))(self); /* scope_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var267); /* push on <var_:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var265->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var265, self); /* toolcontext= on <var265:FlowPhase>*/
}
{
((void(*)(val* self, val* p0))(var265->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var265, var_); /* depends= on <var265:FlowPhase>*/
}
{
((void(*)(val* self))(var265->class->vft[COLOR_standard__kernel__Object__init]))(var265); /* init on <var265:FlowPhase>*/
}
self->attrs[COLOR_nit__flow__ToolContext___flow_phase].val = var265; /* _flow_phase on <self:ToolContext exact> */
var268 = NEW_nit__glsl_validation__GLSLValidationPhase(&type_nit__glsl_validation__GLSLValidationPhase);
var269 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
((void(*)(val* self, long p0))(var269->class->vft[COLOR_standard__array__Array__with_capacity]))(var269, 1l); /* with_capacity on <var269:Array[Phase]>*/
}
var_270 = var269;
{
var271 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__ToolContext__literal_phase]))(self); /* literal_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_270->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_270, var271); /* push on <var_270:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var268, self); /* toolcontext= on <var268:GLSLValidationPhase>*/
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var268, var_270); /* depends= on <var268:GLSLValidationPhase>*/
}
{
((void(*)(val* self))(var268->class->vft[COLOR_standard__kernel__Object__init]))(var268); /* init on <var268:GLSLValidationPhase>*/
}
self->attrs[COLOR_nit__glsl_validation__ToolContext___glsl_validation_phase].val = var268; /* _glsl_validation_phase on <self:ToolContext exact> */
var272 = NEW_nit__local_var_init__LocalVarInitPhase(&type_nit__local_var_init__LocalVarInitPhase);
var273 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
((void(*)(val* self, long p0))(var273->class->vft[COLOR_standard__array__Array__with_capacity]))(var273, 1l); /* with_capacity on <var273:Array[Phase]>*/
}
var_274 = var273;
{
var275 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__ToolContext__flow_phase]))(self); /* flow_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_274->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_274, var275); /* push on <var_274:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var272->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var272, self); /* toolcontext= on <var272:LocalVarInitPhase>*/
}
{
((void(*)(val* self, val* p0))(var272->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var272, var_274); /* depends= on <var272:LocalVarInitPhase>*/
}
{
((void(*)(val* self))(var272->class->vft[COLOR_standard__kernel__Object__init]))(var272); /* init on <var272:LocalVarInitPhase>*/
}
self->attrs[COLOR_nit__local_var_init__ToolContext___local_var_init_phase].val = var272; /* _local_var_init_phase on <self:ToolContext exact> */
var276 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "Do not check, and produce errors, on visibility issues.";
var280 = standard___standard__NativeString___to_s_with_length(var279, 55l);
var278 = var280;
varonce277 = var278;
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "--ignore-visibility";
var284 = standard___standard__NativeString___to_s_with_length(var283, 19l);
var282 = var284;
varonce281 = var282;
}
var285 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var285 = array_instance Array[String] */
var286 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var286)->values[0] = (val*) var282;
{
((void(*)(val* self, val* p0, long p1))(var285->class->vft[COLOR_standard__array__Array__with_native]))(var285, var286, 1l); /* with_native on <var285:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var276->class->vft[COLOR_opts__OptionBool__init]))(var276, var278, var285); /* init on <var276:OptionBool>*/
}
self->attrs[COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility].val = var276; /* _opt_ignore_visibility on <self:ToolContext exact> */
var287 = NEW_nit__modelize_class__ModelizeClassPhase(&type_nit__modelize_class__ModelizeClassPhase);
{
((void(*)(val* self, val* p0))(var287->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var287, self); /* toolcontext= on <var287:ModelizeClassPhase>*/
}
{
((void(*)(val* self, val* p0))(var287->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var287, ((val*)NULL)); /* depends= on <var287:ModelizeClassPhase>*/
}
{
((void(*)(val* self))(var287->class->vft[COLOR_standard__kernel__Object__init]))(var287); /* init on <var287:ModelizeClassPhase>*/
}
self->attrs[COLOR_nit__modelize_class__ToolContext___modelize_class_phase].val = var287; /* _modelize_class_phase on <self:ToolContext exact> */
var288 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "Additionals module to min-in";
var292 = standard___standard__NativeString___to_s_with_length(var291, 28l);
var290 = var292;
varonce289 = var290;
}
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "-m";
var296 = standard___standard__NativeString___to_s_with_length(var295, 2l);
var294 = var296;
varonce293 = var294;
}
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "--mixin";
var300 = standard___standard__NativeString___to_s_with_length(var299, 7l);
var298 = var300;
varonce297 = var298;
}
var301 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var301 = array_instance Array[String] */
var302 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var302)->values[0] = (val*) var294;
((struct instance_standard__NativeArray*)var302)->values[1] = (val*) var298;
{
((void(*)(val* self, val* p0, long p1))(var301->class->vft[COLOR_standard__array__Array__with_native]))(var301, var302, 2l); /* with_native on <var301:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var288->class->vft[COLOR_opts__OptionArray__init]))(var288, var290, var301); /* init on <var288:OptionArray>*/
}
self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val = var288; /* _opt_mixins on <self:ToolContext exact> */
var303 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "Define a specific property";
var307 = standard___standard__NativeString___to_s_with_length(var306, 26l);
var305 = var307;
varonce304 = var305;
}
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = "-D";
var311 = standard___standard__NativeString___to_s_with_length(var310, 2l);
var309 = var311;
varonce308 = var309;
}
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "--define";
var315 = standard___standard__NativeString___to_s_with_length(var314, 8l);
var313 = var315;
varonce312 = var313;
}
var316 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var316 = array_instance Array[String] */
var317 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var317)->values[0] = (val*) var309;
((struct instance_standard__NativeArray*)var317)->values[1] = (val*) var313;
{
((void(*)(val* self, val* p0, long p1))(var316->class->vft[COLOR_standard__array__Array__with_native]))(var316, var317, 2l); /* with_native on <var316:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var303->class->vft[COLOR_opts__OptionArray__init]))(var303, var305, var316); /* init on <var303:OptionArray>*/
}
self->attrs[COLOR_nit__mixin__ToolContext___opt_defines].val = var303; /* _opt_defines on <self:ToolContext exact> */
var318 = NEW_nit__no_warning__NoWarningPhase(&type_nit__no_warning__NoWarningPhase);
var319 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
((void(*)(val* self, long p0))(var319->class->vft[COLOR_standard__array__Array__with_capacity]))(var319, 1l); /* with_capacity on <var319:Array[Phase]>*/
}
var_320 = var319;
{
var321 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__ToolContext__literal_phase]))(self); /* literal_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_320->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_320, var321); /* push on <var_320:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var318->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var318, self); /* toolcontext= on <var318:NoWarningPhase>*/
}
{
((void(*)(val* self, val* p0))(var318->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var318, var_320); /* depends= on <var318:NoWarningPhase>*/
}
{
((void(*)(val* self))(var318->class->vft[COLOR_standard__kernel__Object__init]))(var318); /* init on <var318:NoWarningPhase>*/
}
self->attrs[COLOR_nit__no_warning__ToolContext___no_warning_phase].val = var318; /* _no_warning_phase on <self:ToolContext exact> */
var322 = NEW_nit__check_annotation__CheckAnnotationPhase(&type_nit__check_annotation__CheckAnnotationPhase);
{
((void(*)(val* self, val* p0))(var322->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var322, self); /* toolcontext= on <var322:CheckAnnotationPhase>*/
}
{
((void(*)(val* self, val* p0))(var322->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var322, ((val*)NULL)); /* depends= on <var322:CheckAnnotationPhase>*/
}
{
((void(*)(val* self))(var322->class->vft[COLOR_standard__kernel__Object__init]))(var322); /* init on <var322:CheckAnnotationPhase>*/
}
self->attrs[COLOR_nit__check_annotation__ToolContext___check_annotation_phase].val = var322; /* _check_annotation_phase on <self:ToolContext exact> */
var323 = NEW_nit__modelize_property__ModelizePropertyPhase(&type_nit__modelize_property__ModelizePropertyPhase);
var324 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
((void(*)(val* self, long p0))(var324->class->vft[COLOR_standard__array__Array__with_capacity]))(var324, 1l); /* with_capacity on <var324:Array[Phase]>*/
}
var_325 = var324;
{
var326 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ToolContext__modelize_class_phase]))(self); /* modelize_class_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_325->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_325, var326); /* push on <var_325:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var323->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var323, self); /* toolcontext= on <var323:ModelizePropertyPhase>*/
}
{
((void(*)(val* self, val* p0))(var323->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var323, var_325); /* depends= on <var323:ModelizePropertyPhase>*/
}
{
((void(*)(val* self))(var323->class->vft[COLOR_standard__kernel__Object__init]))(var323); /* init on <var323:ModelizePropertyPhase>*/
}
self->attrs[COLOR_nit__modelize_property__ToolContext___modelize_property_phase].val = var323; /* _modelize_property_phase on <self:ToolContext exact> */
var327 = NEW_nit__serialization_phase__SerializationPhasePreModel(&type_nit__serialization_phase__SerializationPhasePreModel);
{
((void(*)(val* self, val* p0))(var327->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var327, self); /* toolcontext= on <var327:SerializationPhasePreModel>*/
}
{
((void(*)(val* self, val* p0))(var327->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var327, ((val*)NULL)); /* depends= on <var327:SerializationPhasePreModel>*/
}
{
((void(*)(val* self))(var327->class->vft[COLOR_standard__kernel__Object__init]))(var327); /* init on <var327:SerializationPhasePreModel>*/
}
self->attrs[COLOR_nit__serialization_phase__ToolContext___serialization_phase_pre_model].val = var327; /* _serialization_phase_pre_model on <self:ToolContext exact> */
var328 = NEW_nit__serialization_phase__SerializationPhasePostModel(&type_nit__serialization_phase__SerializationPhasePostModel);
var329 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
((void(*)(val* self, long p0))(var329->class->vft[COLOR_standard__array__Array__with_capacity]))(var329, 2l); /* with_capacity on <var329:Array[Phase]>*/
}
var_330 = var329;
{
var331 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ToolContext__modelize_class_phase]))(self); /* modelize_class_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_330->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_330, var331); /* push on <var_330:Array[Phase]>*/
}
{
var332 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__serialization_phase__ToolContext__serialization_phase_pre_model]))(self); /* serialization_phase_pre_model on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_330->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_330, var332); /* push on <var_330:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var328->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var328, self); /* toolcontext= on <var328:SerializationPhasePostModel>*/
}
{
((void(*)(val* self, val* p0))(var328->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var328, var_330); /* depends= on <var328:SerializationPhasePostModel>*/
}
{
((void(*)(val* self))(var328->class->vft[COLOR_standard__kernel__Object__init]))(var328); /* init on <var328:SerializationPhasePostModel>*/
}
self->attrs[COLOR_nit__serialization_phase__ToolContext___serialization_phase_post_model].val = var328; /* _serialization_phase_post_model on <self:ToolContext exact> */
var333 = NEW_nit__deriving__DerivingPhase(&type_nit__deriving__DerivingPhase);
{
((void(*)(val* self, val* p0))(var333->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var333, self); /* toolcontext= on <var333:DerivingPhase>*/
}
{
((void(*)(val* self, val* p0))(var333->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var333, ((val*)NULL)); /* depends= on <var333:DerivingPhase>*/
}
{
((void(*)(val* self))(var333->class->vft[COLOR_standard__kernel__Object__init]))(var333); /* init on <var333:DerivingPhase>*/
}
self->attrs[COLOR_nit__deriving__ToolContext___deriving_phase].val = var333; /* _deriving_phase on <self:ToolContext exact> */
var334 = NEW_nit__typing__TypingPhase(&type_nit__typing__TypingPhase);
var335 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
((void(*)(val* self, long p0))(var335->class->vft[COLOR_standard__array__Array__with_capacity]))(var335, 3l); /* with_capacity on <var335:Array[Phase]>*/
}
var_336 = var335;
{
var337 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__flow__ToolContext__flow_phase]))(self); /* flow_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_336->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_336, var337); /* push on <var_336:Array[Phase]>*/
}
{
var338 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ToolContext__modelize_property_phase]))(self); /* modelize_property_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_336->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_336, var338); /* push on <var_336:Array[Phase]>*/
}
{
var339 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__local_var_init__ToolContext__local_var_init_phase]))(self); /* local_var_init_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_336->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_336, var339); /* push on <var_336:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var334->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var334, self); /* toolcontext= on <var334:TypingPhase>*/
}
{
((void(*)(val* self, val* p0))(var334->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var334, var_336); /* depends= on <var334:TypingPhase>*/
}
{
((void(*)(val* self))(var334->class->vft[COLOR_standard__kernel__Object__init]))(var334); /* init on <var334:TypingPhase>*/
}
self->attrs[COLOR_nit__typing__ToolContext___typing_phase].val = var334; /* _typing_phase on <self:ToolContext exact> */
var340 = NEW_nit__auto_super_init__AutoSuperInitPhase(&type_nit__auto_super_init__AutoSuperInitPhase);
var341 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
((void(*)(val* self, long p0))(var341->class->vft[COLOR_standard__array__Array__with_capacity]))(var341, 1l); /* with_capacity on <var341:Array[Phase]>*/
}
var_342 = var341;
{
var343 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ToolContext__typing_phase]))(self); /* typing_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_342->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_342, var343); /* push on <var_342:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var340->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var340, self); /* toolcontext= on <var340:AutoSuperInitPhase>*/
}
{
((void(*)(val* self, val* p0))(var340->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var340, var_342); /* depends= on <var340:AutoSuperInitPhase>*/
}
{
((void(*)(val* self))(var340->class->vft[COLOR_standard__kernel__Object__init]))(var340); /* init on <var340:AutoSuperInitPhase>*/
}
self->attrs[COLOR_nit__auto_super_init__ToolContext___auto_super_init_phase].val = var340; /* _auto_super_init_phase on <self:ToolContext exact> */
var344 = NEW_nit__div_by_zero__DivByZeroPhase(&type_nit__div_by_zero__DivByZeroPhase);
var345 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
((void(*)(val* self, long p0))(var345->class->vft[COLOR_standard__array__Array__with_capacity]))(var345, 2l); /* with_capacity on <var345:Array[Phase]>*/
}
var_346 = var345;
{
var347 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__ToolContext__literal_phase]))(self); /* literal_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_346->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_346, var347); /* push on <var_346:Array[Phase]>*/
}
{
var348 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ToolContext__typing_phase]))(self); /* typing_phase on <self:ToolContext exact>*/
}
{
((void(*)(val* self, val* p0))(var_346->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_346, var348); /* push on <var_346:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var344->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var344, self); /* toolcontext= on <var344:DivByZeroPhase>*/
}
{
((void(*)(val* self, val* p0))(var344->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var344, var_346); /* depends= on <var344:DivByZeroPhase>*/
}
{
((void(*)(val* self))(var344->class->vft[COLOR_standard__kernel__Object__init]))(var344); /* init on <var344:DivByZeroPhase>*/
}
self->attrs[COLOR_nit__div_by_zero__ToolContext___div_by_zero_phase].val = var344; /* _div_by_zero_phase on <self:ToolContext exact> */
var349 = NEW_nit__parallelization_phase__ParallelizationPhase(&type_nit__parallelization_phase__ParallelizationPhase);
{
((void(*)(val* self, val* p0))(var349->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var349, self); /* toolcontext= on <var349:ParallelizationPhase>*/
}
{
((void(*)(val* self, val* p0))(var349->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var349, ((val*)NULL)); /* depends= on <var349:ParallelizationPhase>*/
}
{
((void(*)(val* self))(var349->class->vft[COLOR_standard__kernel__Object__init]))(var349); /* init on <var349:ParallelizationPhase>*/
}
self->attrs[COLOR_nit__parallelization_phase__ToolContext___parallelization_phase].val = var349; /* _parallelization_phase on <self:ToolContext exact> */
var350 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "Trace calls of the first invocation of a method";
var354 = standard___standard__NativeString___to_s_with_length(var353, 47l);
var352 = var354;
varonce351 = var352;
}
if (likely(varonce355!=NULL)) {
var356 = varonce355;
} else {
var357 = "--discover-call-trace";
var358 = standard___standard__NativeString___to_s_with_length(var357, 21l);
var356 = var358;
varonce355 = var356;
}
var359 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var359 = array_instance Array[String] */
var360 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var360)->values[0] = (val*) var356;
{
((void(*)(val* self, val* p0, long p1))(var359->class->vft[COLOR_standard__array__Array__with_native]))(var359, var360, 1l); /* with_native on <var359:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var350->class->vft[COLOR_opts__OptionBool__init]))(var350, var352, var359); /* init on <var350:OptionBool>*/
}
self->attrs[COLOR_nit__naive_interpreter__ToolContext___opt_discover_call_trace].val = var350; /* _opt_discover_call_trace on <self:ToolContext exact> */
{
var361 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__frontend__ToolContext__do_dummy]))(self); /* do_dummy on <self:ToolContext exact>*/
}
self->attrs[COLOR_nit__frontend__ToolContext___dummy].s = var361; /* _dummy on <self:ToolContext exact> */
var362 = NEW_nitllvm__LLVMPhase(&type_nitllvm__LLVMPhase);
{
((void(*)(val* self, val* p0))(var362->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var362, self); /* toolcontext= on <var362:LLVMPhase>*/
}
{
((void(*)(val* self, val* p0))(var362->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var362, ((val*)NULL)); /* depends= on <var362:LLVMPhase>*/
}
{
((void(*)(val* self))(var362->class->vft[COLOR_standard__kernel__Object__init]))(var362); /* init on <var362:LLVMPhase>*/
}
self->attrs[COLOR_nitllvm__ToolContext___llvm_phase].val = var362; /* _llvm_phase on <self:ToolContext exact> */
return self;
}
/* runtime class nit__BashCompletion */
const struct class class_nit__BashCompletion = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__BashCompletion___standard__kernel__Object__init, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to toolcontext:BashCompletion:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to toolcontext:BashCompletion:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to toolcontext:BashCompletion:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to toolcontext:BashCompletion:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to toolcontext:BashCompletion:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to toolcontext:BashCompletion:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to toolcontext:BashCompletion:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to toolcontext:BashCompletion:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to toolcontext:BashCompletion:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to toolcontext:BashCompletion:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to toolcontext:BashCompletion:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to toolcontext:BashCompletion:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to toolcontext:BashCompletion:kernel#Object#output */
(nitmethod_t)template___template__Template___is_writing, /* pointer to toolcontext:BashCompletion:template#Template#is_writing */
(nitmethod_t)template___template__Template___is_writing_61d, /* pointer to toolcontext:BashCompletion:template#Template#is_writing= */
(nitmethod_t)template___template__Template___force_render, /* pointer to toolcontext:BashCompletion:template#Template#force_render */
(nitmethod_t)template___template__Template___content, /* pointer to toolcontext:BashCompletion:template#Template#content */
(nitmethod_t)template___template__Template___render_done, /* pointer to toolcontext:BashCompletion:template#Template#render_done */
(nitmethod_t)template___template__Template___render_done_61d, /* pointer to toolcontext:BashCompletion:template#Template#render_done= */
(nitmethod_t)nit___nit__BashCompletion___template__Template__rendering, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#rendering */
(nitmethod_t)template___template__Template___freeze, /* pointer to toolcontext:BashCompletion:template#Template#freeze */
(nitmethod_t)template___template__Template___addn, /* pointer to toolcontext:BashCompletion:template#Template#addn */
(nitmethod_t)template___template__Template___is_frozen, /* pointer to toolcontext:BashCompletion:template#Template#is_frozen */
(nitmethod_t)template___template__Template___is_frozen_61d, /* pointer to toolcontext:BashCompletion:template#Template#is_frozen= */
(nitmethod_t)template___template__Template___add, /* pointer to toolcontext:BashCompletion:template#Template#add */
(nitmethod_t)nit___nit__BashCompletion___toolcontext_61d, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#toolcontext= */
(nitmethod_t)nit___nit__BashCompletion___toolcontext, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#toolcontext */
(nitmethod_t)template___template__Template___standard__stream__Writable__write_to, /* pointer to toolcontext:BashCompletion:template#Template#write_to */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to toolcontext:BashCompletion:file#Writable#write_to_file */
(nitmethod_t)nit___nit__BashCompletion___extract_options_names, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#extract_options_names */
(nitmethod_t)standard___standard__Object___init, /* pointer to toolcontext:BashCompletion:kernel#Object#init */
}
};
/* allocate BashCompletion */
val* NEW_nit__BashCompletion(const struct type* type) {
val* self /* : BashCompletion */;
val* var /* : Array[Writable] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__BashCompletion;
self->attrs[COLOR_template__Template___is_frozen].s = 0; /* _is_frozen on <self:BashCompletion exact> */
var = NEW_standard__Array(&type_standard__Array__standard__Writable);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[Writable]>*/
}
self->attrs[COLOR_template__Template___content].val = var; /* _content on <self:BashCompletion exact> */
self->attrs[COLOR_template__Template___render_done].s = 0; /* _render_done on <self:BashCompletion exact> */
self->attrs[COLOR_template__Template___is_writing].s = 0; /* _is_writing on <self:BashCompletion exact> */
return self;
}
/* runtime class opts__Option */
/* allocate Option */
val* NEW_opts__Option(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Option is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionText */
/* allocate OptionText */
val* NEW_opts__OptionText(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionText is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionBool */
const struct class class_opts__OptionBool = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionBool:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionBool:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionBool:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionBool:kernel#Object#== */
(nitmethod_t)opts___opts__Option___standard__string__Object__to_s, /* pointer to opts:OptionBool:opts#Option#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionBool:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionBool:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionBool:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionBool:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionBool:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionBool:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionBool:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionBool:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to opts:OptionBool:kernel#Object#output */
(nitmethod_t)opts___opts__Option___init, /* pointer to opts:OptionBool:opts#Option#init */
(nitmethod_t)opts___opts__Option___value, /* pointer to opts:OptionBool:opts#Option#value */
(nitmethod_t)opts___opts__Option___pretty, /* pointer to opts:OptionBool:opts#Option#pretty */
(nitmethod_t)opts___opts__Option___init_opt, /* pointer to opts:OptionBool:opts#Option#init_opt */
(nitmethod_t)opts___opts__Option___value_61d, /* pointer to opts:OptionBool:opts#Option#value= */
(nitmethod_t)opts___opts__Option___names, /* pointer to opts:OptionBool:opts#Option#names */
(nitmethod_t)opts___opts__Option___helptext, /* pointer to opts:OptionBool:opts#Option#helptext */
(nitmethod_t)opts___opts__Option___names_61d, /* pointer to opts:OptionBool:opts#Option#names= */
(nitmethod_t)opts___opts__Option___helptext_61d, /* pointer to opts:OptionBool:opts#Option#helptext= */
(nitmethod_t)opts___opts__Option___default_value_61d, /* pointer to opts:OptionBool:opts#Option#default_value= */
(nitmethod_t)opts___opts__Option___errors, /* pointer to opts:OptionBool:opts#Option#errors */
(nitmethod_t)opts___opts__OptionBool___Option__read_param, /* pointer to opts:OptionBool:opts#OptionBool#read_param */
(nitmethod_t)opts___opts__Option___mandatory, /* pointer to opts:OptionBool:opts#Option#mandatory */
(nitmethod_t)opts___opts__Option___read, /* pointer to opts:OptionBool:opts#Option#read */
(nitmethod_t)opts___opts__Option___hidden, /* pointer to opts:OptionBool:opts#Option#hidden */
(nitmethod_t)opts___opts__Option___hidden_61d, /* pointer to opts:OptionBool:opts#Option#hidden= */
(nitmethod_t)opts___opts__Option___read_61d, /* pointer to opts:OptionBool:opts#Option#read= */
(nitmethod_t)opts___opts__OptionBool___init, /* pointer to opts:OptionBool:opts#OptionBool#init */
(nitmethod_t)opts___opts__Option___read_param, /* pointer to opts:OptionBool:opts#Option#read_param */
}
};
/* allocate OptionBool */
val* NEW_opts__OptionBool(const struct type* type) {
val* self /* : OptionBool */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionBool;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[String]>*/
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionBool exact> */
self->attrs[COLOR_opts__Option___mandatory].s = 0; /* _mandatory on <self:OptionBool exact> */
self->attrs[COLOR_opts__Option___hidden].s = 0; /* _hidden on <self:OptionBool exact> */
self->attrs[COLOR_opts__Option___read].s = 0; /* _read on <self:OptionBool exact> */
return self;
}
/* runtime class opts__OptionCount */
const struct class class_opts__OptionCount = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionCount:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionCount:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionCount:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionCount:kernel#Object#== */
(nitmethod_t)opts___opts__Option___standard__string__Object__to_s, /* pointer to opts:OptionCount:opts#Option#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionCount:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionCount:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionCount:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionCount:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionCount:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionCount:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionCount:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionCount:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to opts:OptionCount:kernel#Object#output */
(nitmethod_t)opts___opts__Option___init, /* pointer to opts:OptionCount:opts#Option#init */
(nitmethod_t)opts___opts__Option___value, /* pointer to opts:OptionCount:opts#Option#value */
(nitmethod_t)opts___opts__Option___pretty, /* pointer to opts:OptionCount:opts#Option#pretty */
(nitmethod_t)opts___opts__Option___init_opt, /* pointer to opts:OptionCount:opts#Option#init_opt */
(nitmethod_t)opts___opts__Option___value_61d, /* pointer to opts:OptionCount:opts#Option#value= */
(nitmethod_t)opts___opts__Option___names, /* pointer to opts:OptionCount:opts#Option#names */
(nitmethod_t)opts___opts__Option___helptext, /* pointer to opts:OptionCount:opts#Option#helptext */
(nitmethod_t)opts___opts__Option___names_61d, /* pointer to opts:OptionCount:opts#Option#names= */
(nitmethod_t)opts___opts__Option___helptext_61d, /* pointer to opts:OptionCount:opts#Option#helptext= */
(nitmethod_t)opts___opts__Option___default_value_61d, /* pointer to opts:OptionCount:opts#Option#default_value= */
(nitmethod_t)opts___opts__Option___errors, /* pointer to opts:OptionCount:opts#Option#errors */
(nitmethod_t)opts___opts__OptionCount___Option__read_param, /* pointer to opts:OptionCount:opts#OptionCount#read_param */
(nitmethod_t)opts___opts__Option___mandatory, /* pointer to opts:OptionCount:opts#Option#mandatory */
(nitmethod_t)opts___opts__Option___read, /* pointer to opts:OptionCount:opts#Option#read */
(nitmethod_t)opts___opts__Option___hidden, /* pointer to opts:OptionCount:opts#Option#hidden */
(nitmethod_t)opts___opts__Option___hidden_61d, /* pointer to opts:OptionCount:opts#Option#hidden= */
(nitmethod_t)opts___opts__Option___read_61d, /* pointer to opts:OptionCount:opts#Option#read= */
(nitmethod_t)opts___opts__OptionCount___init, /* pointer to opts:OptionCount:opts#OptionCount#init */
(nitmethod_t)opts___opts__Option___read_param, /* pointer to opts:OptionCount:opts#Option#read_param */
}
};
/* allocate OptionCount */
val* NEW_opts__OptionCount(const struct type* type) {
val* self /* : OptionCount */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionCount;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[String]>*/
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionCount exact> */
self->attrs[COLOR_opts__Option___mandatory].s = 0; /* _mandatory on <self:OptionCount exact> */
self->attrs[COLOR_opts__Option___hidden].s = 0; /* _hidden on <self:OptionCount exact> */
self->attrs[COLOR_opts__Option___read].s = 0; /* _read on <self:OptionCount exact> */
return self;
}
/* runtime class opts__OptionParameter */
/* allocate OptionParameter */
val* NEW_opts__OptionParameter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionParameter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionString */
const struct class class_opts__OptionString = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionString:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionString:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionString:kernel#Object#== */
(nitmethod_t)opts___opts__Option___standard__string__Object__to_s, /* pointer to opts:OptionString:opts#Option#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionString:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionString:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionString:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionString:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionString:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionString:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionString:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to opts:OptionString:kernel#Object#output */
(nitmethod_t)opts___opts__Option___init, /* pointer to opts:OptionString:opts#Option#init */
(nitmethod_t)opts___opts__Option___value, /* pointer to opts:OptionString:opts#Option#value */
(nitmethod_t)opts___opts__Option___pretty, /* pointer to opts:OptionString:opts#Option#pretty */
(nitmethod_t)opts___opts__Option___init_opt, /* pointer to opts:OptionString:opts#Option#init_opt */
(nitmethod_t)opts___opts__Option___value_61d, /* pointer to opts:OptionString:opts#Option#value= */
(nitmethod_t)opts___opts__Option___names, /* pointer to opts:OptionString:opts#Option#names */
(nitmethod_t)opts___opts__Option___helptext, /* pointer to opts:OptionString:opts#Option#helptext */
(nitmethod_t)opts___opts__Option___names_61d, /* pointer to opts:OptionString:opts#Option#names= */
(nitmethod_t)opts___opts__Option___helptext_61d, /* pointer to opts:OptionString:opts#Option#helptext= */
(nitmethod_t)opts___opts__Option___default_value_61d, /* pointer to opts:OptionString:opts#Option#default_value= */
(nitmethod_t)opts___opts__Option___errors, /* pointer to opts:OptionString:opts#Option#errors */
(nitmethod_t)opts___opts__OptionParameter___Option__read_param, /* pointer to opts:OptionString:opts#OptionParameter#read_param */
(nitmethod_t)opts___opts__Option___mandatory, /* pointer to opts:OptionString:opts#Option#mandatory */
(nitmethod_t)opts___opts__Option___read, /* pointer to opts:OptionString:opts#Option#read */
(nitmethod_t)opts___opts__Option___hidden, /* pointer to opts:OptionString:opts#Option#hidden */
(nitmethod_t)opts___opts__Option___hidden_61d, /* pointer to opts:OptionString:opts#Option#hidden= */
(nitmethod_t)opts___opts__Option___read_61d, /* pointer to opts:OptionString:opts#Option#read= */
(nitmethod_t)opts___opts__OptionString___OptionParameter__convert, /* pointer to opts:OptionString:opts#OptionString#convert */
(nitmethod_t)opts___opts__OptionParameter___parameter_mandatory, /* pointer to opts:OptionString:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)opts___opts__Option___read_param, /* pointer to opts:OptionString:opts#Option#read_param */
(nitmethod_t)opts___opts__OptionString___init, /* pointer to opts:OptionString:opts#OptionString#init */
}
};
/* allocate OptionString */
val* NEW_opts__OptionString(const struct type* type) {
val* self /* : OptionString */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionString;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[String]>*/
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionString exact> */
self->attrs[COLOR_opts__Option___mandatory].s = 0; /* _mandatory on <self:OptionString exact> */
self->attrs[COLOR_opts__Option___hidden].s = 0; /* _hidden on <self:OptionString exact> */
self->attrs[COLOR_opts__Option___read].s = 0; /* _read on <self:OptionString exact> */
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = 1; /* _parameter_mandatory on <self:OptionString exact> */
return self;
}
/* runtime class opts__OptionEnum */
/* allocate OptionEnum */
val* NEW_opts__OptionEnum(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionEnum is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionInt */
/* allocate OptionInt */
val* NEW_opts__OptionInt(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionInt is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionFloat */
/* allocate OptionFloat */
val* NEW_opts__OptionFloat(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionFloat is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionArray */
const struct class class_opts__OptionArray = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionArray:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionArray:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionArray:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionArray:kernel#Object#== */
(nitmethod_t)opts___opts__Option___standard__string__Object__to_s, /* pointer to opts:OptionArray:opts#Option#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionArray:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionArray:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionArray:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionArray:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionArray:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionArray:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionArray:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionArray:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to opts:OptionArray:kernel#Object#output */
(nitmethod_t)opts___opts__Option___init, /* pointer to opts:OptionArray:opts#Option#init */
(nitmethod_t)opts___opts__Option___value, /* pointer to opts:OptionArray:opts#Option#value */
(nitmethod_t)opts___opts__Option___pretty, /* pointer to opts:OptionArray:opts#Option#pretty */
(nitmethod_t)opts___opts__Option___init_opt, /* pointer to opts:OptionArray:opts#Option#init_opt */
(nitmethod_t)opts___opts__Option___value_61d, /* pointer to opts:OptionArray:opts#Option#value= */
(nitmethod_t)opts___opts__Option___names, /* pointer to opts:OptionArray:opts#Option#names */
(nitmethod_t)opts___opts__Option___helptext, /* pointer to opts:OptionArray:opts#Option#helptext */
(nitmethod_t)opts___opts__Option___names_61d, /* pointer to opts:OptionArray:opts#Option#names= */
(nitmethod_t)opts___opts__Option___helptext_61d, /* pointer to opts:OptionArray:opts#Option#helptext= */
(nitmethod_t)opts___opts__Option___default_value_61d, /* pointer to opts:OptionArray:opts#Option#default_value= */
(nitmethod_t)opts___opts__Option___errors, /* pointer to opts:OptionArray:opts#Option#errors */
(nitmethod_t)opts___opts__OptionParameter___Option__read_param, /* pointer to opts:OptionArray:opts#OptionParameter#read_param */
(nitmethod_t)opts___opts__Option___mandatory, /* pointer to opts:OptionArray:opts#Option#mandatory */
(nitmethod_t)opts___opts__Option___read, /* pointer to opts:OptionArray:opts#Option#read */
(nitmethod_t)opts___opts__Option___hidden, /* pointer to opts:OptionArray:opts#Option#hidden */
(nitmethod_t)opts___opts__Option___hidden_61d, /* pointer to opts:OptionArray:opts#Option#hidden= */
(nitmethod_t)opts___opts__Option___read_61d, /* pointer to opts:OptionArray:opts#Option#read= */
(nitmethod_t)opts___opts__OptionArray___OptionParameter__convert, /* pointer to opts:OptionArray:opts#OptionArray#convert */
(nitmethod_t)opts___opts__OptionParameter___parameter_mandatory, /* pointer to opts:OptionArray:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)opts___opts__Option___read_param, /* pointer to opts:OptionArray:opts#Option#read_param */
(nitmethod_t)opts___opts__OptionArray___init, /* pointer to opts:OptionArray:opts#OptionArray#init */
(nitmethod_t)opts___opts__OptionArray___values_61d, /* pointer to opts:OptionArray:opts#OptionArray#values= */
(nitmethod_t)opts___opts__OptionArray___values, /* pointer to opts:OptionArray:opts#OptionArray#values */
}
};
/* allocate OptionArray */
val* NEW_opts__OptionArray(const struct type* type) {
val* self /* : OptionArray */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionArray;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[String]>*/
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionArray exact> */
self->attrs[COLOR_opts__Option___mandatory].s = 0; /* _mandatory on <self:OptionArray exact> */
self->attrs[COLOR_opts__Option___hidden].s = 0; /* _hidden on <self:OptionArray exact> */
self->attrs[COLOR_opts__Option___read].s = 0; /* _read on <self:OptionArray exact> */
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = 1; /* _parameter_mandatory on <self:OptionArray exact> */
return self;
}
/* runtime class opts__OptionContext */
const struct class class_opts__OptionContext = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionContext:kernel#Object#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionContext:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionContext:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionContext:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to opts:OptionContext:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionContext:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionContext:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionContext:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionContext:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionContext:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionContext:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionContext:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionContext:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to opts:OptionContext:kernel#Object#output */
(nitmethod_t)opts___opts__OptionContext___rest, /* pointer to opts:OptionContext:opts#OptionContext#rest */
(nitmethod_t)opts___opts__OptionContext___add_option, /* pointer to opts:OptionContext:opts#OptionContext#add_option */
(nitmethod_t)opts___opts__OptionContext___options, /* pointer to opts:OptionContext:opts#OptionContext#options */
(nitmethod_t)opts___opts__OptionContext___parse, /* pointer to opts:OptionContext:opts#OptionContext#parse */
(nitmethod_t)opts___opts__OptionContext___get_errors, /* pointer to opts:OptionContext:opts#OptionContext#get_errors */
(nitmethod_t)opts___opts__OptionContext___parse_intern, /* pointer to opts:OptionContext:opts#OptionContext#parse_intern */
(nitmethod_t)opts___opts__OptionContext___usage, /* pointer to opts:OptionContext:opts#OptionContext#usage */
(nitmethod_t)opts___opts__OptionContext___build, /* pointer to opts:OptionContext:opts#OptionContext#build */
(nitmethod_t)opts___opts__OptionContext___optmap, /* pointer to opts:OptionContext:opts#OptionContext#optmap */
(nitmethod_t)opts___opts__OptionContext___options_before_rest, /* pointer to opts:OptionContext:opts#OptionContext#options_before_rest */
(nitmethod_t)opts___opts__OptionContext___errors, /* pointer to opts:OptionContext:opts#OptionContext#errors */
}
};
/* allocate OptionContext */
val* NEW_opts__OptionContext(const struct type* type) {
val* self /* : OptionContext */;
val* var /* : Array[Option] */;
val* var1 /* : Array[String] */;
val* var2 /* : Array[String] */;
val* var3 /* : HashMap[String, Option] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionContext;
var = NEW_standard__Array(&type_standard__Array__opts__Option);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[Option]>*/
}
self->attrs[COLOR_opts__OptionContext___options].val = var; /* _options on <self:OptionContext exact> */
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
self->attrs[COLOR_opts__OptionContext___rest].val = var1; /* _rest on <self:OptionContext exact> */
var2 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[String]>*/
}
self->attrs[COLOR_opts__OptionContext___errors].val = var2; /* _errors on <self:OptionContext exact> */
var3 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__opts__Option);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:HashMap[String, Option]>*/
}
self->attrs[COLOR_opts__OptionContext___optmap].val = var3; /* _optmap on <self:OptionContext exact> */
self->attrs[COLOR_opts__OptionContext___options_before_rest].s = 0; /* _options_before_rest on <self:OptionContext exact> */
return self;
}
/* runtime class template__Template */
/* allocate Template */
val* NEW_template__Template(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Template is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__parser__ReduceAction0 */
const struct class class_nit__parser__ReduceAction0 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction0:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction0:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction0:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction0:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction0:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction0:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction0:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction0:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction0:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction0:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction0:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction0:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction0:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction0:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction0___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction0:parser#ReduceAction0#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction0:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction0:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction0:kernel#Object#init */
}
};
/* allocate ReduceAction0 */
val* NEW_nit__parser__ReduceAction0(const struct type* type) {
val* self /* : ReduceAction0 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction0;
return self;
}
/* runtime class nit__parser__ReduceAction1 */
const struct class class_nit__parser__ReduceAction1 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction1:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction1:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction1:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction1:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction1:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction1:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction1:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction1:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction1:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction1:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction1:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction1:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction1:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction1:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction1___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction1:parser#ReduceAction1#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction1:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction1:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction1:kernel#Object#init */
}
};
/* allocate ReduceAction1 */
val* NEW_nit__parser__ReduceAction1(const struct type* type) {
val* self /* : ReduceAction1 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction1;
return self;
}
/* runtime class nit__parser__ReduceAction2 */
const struct class class_nit__parser__ReduceAction2 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction2:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction2:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction2:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction2:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction2:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction2:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction2:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction2:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction2:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction2:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction2:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction2:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction2:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction2:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction2___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction2:parser#ReduceAction2#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction2:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction2:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction2:kernel#Object#init */
}
};
/* allocate ReduceAction2 */
val* NEW_nit__parser__ReduceAction2(const struct type* type) {
val* self /* : ReduceAction2 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction2;
return self;
}
/* runtime class nit__parser__ReduceAction3 */
const struct class class_nit__parser__ReduceAction3 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction3:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction3:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction3:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction3:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction3:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction3:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction3:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction3:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction3:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction3:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction3:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction3:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction3:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction3:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction3___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction3:parser#ReduceAction3#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction3:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction3:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction3:kernel#Object#init */
}
};
/* allocate ReduceAction3 */
val* NEW_nit__parser__ReduceAction3(const struct type* type) {
val* self /* : ReduceAction3 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction3;
return self;
}
/* runtime class nit__parser__ReduceAction4 */
const struct class class_nit__parser__ReduceAction4 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction4:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction4:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction4:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction4:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction4:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction4:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction4:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction4:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction4:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction4:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction4:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction4:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction4:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction4:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction4___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction4:parser#ReduceAction4#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction4:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction4:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction4:kernel#Object#init */
}
};
/* allocate ReduceAction4 */
val* NEW_nit__parser__ReduceAction4(const struct type* type) {
val* self /* : ReduceAction4 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction4;
return self;
}
/* runtime class nit__parser__ReduceAction5 */
const struct class class_nit__parser__ReduceAction5 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction5:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction5:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction5:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction5:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction5:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction5:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction5:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction5:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction5:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction5:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction5:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction5:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction5:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction5:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction5___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction5:parser#ReduceAction5#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction5:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction5:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction5:kernel#Object#init */
}
};
/* allocate ReduceAction5 */
val* NEW_nit__parser__ReduceAction5(const struct type* type) {
val* self /* : ReduceAction5 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction5;
return self;
}
/* runtime class nit__parser__ReduceAction6 */
const struct class class_nit__parser__ReduceAction6 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction6:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction6:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction6:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction6:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction6:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction6:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction6:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction6:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction6:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction6:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction6:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction6:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction6:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction6:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction6___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction6:parser#ReduceAction6#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction6:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction6:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction6:kernel#Object#init */
}
};
/* allocate ReduceAction6 */
val* NEW_nit__parser__ReduceAction6(const struct type* type) {
val* self /* : ReduceAction6 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction6;
return self;
}
/* runtime class nit__parser__ReduceAction7 */
const struct class class_nit__parser__ReduceAction7 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction7:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction7:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction7:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction7:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction7:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction7:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction7:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction7:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction7:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction7:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction7:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction7:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction7:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction7:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction7___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction7:parser#ReduceAction7#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction7:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction7:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction7:kernel#Object#init */
}
};
/* allocate ReduceAction7 */
val* NEW_nit__parser__ReduceAction7(const struct type* type) {
val* self /* : ReduceAction7 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction7;
return self;
}
/* runtime class nit__parser__ReduceAction8 */
const struct class class_nit__parser__ReduceAction8 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction8:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction8:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction8:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction8:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction8:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction8:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction8:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction8:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction8:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction8:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction8:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction8:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction8:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction8:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction8___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction8:parser#ReduceAction8#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction8:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction8:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction8:kernel#Object#init */
}
};
/* allocate ReduceAction8 */
val* NEW_nit__parser__ReduceAction8(const struct type* type) {
val* self /* : ReduceAction8 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction8;
return self;
}
/* runtime class nit__parser__ReduceAction9 */
const struct class class_nit__parser__ReduceAction9 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction9:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction9:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction9:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction9:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction9:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction9:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction9:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction9:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction9:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction9:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction9:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction9:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction9:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction9:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction9___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction9:parser#ReduceAction9#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction9:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction9:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction9:kernel#Object#init */
}
};
/* allocate ReduceAction9 */
val* NEW_nit__parser__ReduceAction9(const struct type* type) {
val* self /* : ReduceAction9 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction9;
return self;
}
/* runtime class nit__parser__ReduceAction10 */
const struct class class_nit__parser__ReduceAction10 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction10:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction10:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction10:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction10:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction10:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction10:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction10:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction10:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction10:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction10:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction10:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction10:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction10:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction10:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction10___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction10:parser#ReduceAction10#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction10:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction10:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction10:kernel#Object#init */
}
};
/* allocate ReduceAction10 */
val* NEW_nit__parser__ReduceAction10(const struct type* type) {
val* self /* : ReduceAction10 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction10;
return self;
}
/* runtime class nit__parser__ReduceAction11 */
const struct class class_nit__parser__ReduceAction11 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction11:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction11:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction11:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction11:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction11:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction11:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction11:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction11:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction11:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction11:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction11:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction11:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction11:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction11:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction11___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction11:parser#ReduceAction11#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction11:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction11:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction11:kernel#Object#init */
}
};
/* allocate ReduceAction11 */
val* NEW_nit__parser__ReduceAction11(const struct type* type) {
val* self /* : ReduceAction11 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction11;
return self;
}
/* runtime class nit__parser__ReduceAction12 */
const struct class class_nit__parser__ReduceAction12 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction12:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction12:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction12:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction12:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction12:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction12:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction12:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction12:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction12:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction12:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction12:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction12:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction12:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction12:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction12___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction12:parser#ReduceAction12#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction12:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction12:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction12:kernel#Object#init */
}
};
/* allocate ReduceAction12 */
val* NEW_nit__parser__ReduceAction12(const struct type* type) {
val* self /* : ReduceAction12 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction12;
return self;
}
/* runtime class nit__parser__ReduceAction13 */
const struct class class_nit__parser__ReduceAction13 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction13:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction13:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction13:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction13:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction13:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction13:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction13:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction13:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction13:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction13:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction13:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction13:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction13:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction13:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction13___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction13:parser#ReduceAction13#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction13:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction13:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction13:kernel#Object#init */
}
};
/* allocate ReduceAction13 */
val* NEW_nit__parser__ReduceAction13(const struct type* type) {
val* self /* : ReduceAction13 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction13;
return self;
}
/* runtime class nit__parser__ReduceAction14 */
const struct class class_nit__parser__ReduceAction14 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction14:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction14:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction14:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction14:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction14:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction14:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction14:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction14:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction14:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction14:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction14:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction14:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction14:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction14:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction14___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction14:parser#ReduceAction14#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction14:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction14:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction14:kernel#Object#init */
}
};
/* allocate ReduceAction14 */
val* NEW_nit__parser__ReduceAction14(const struct type* type) {
val* self /* : ReduceAction14 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction14;
return self;
}
/* runtime class nit__parser__ReduceAction15 */
const struct class class_nit__parser__ReduceAction15 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction15:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction15:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction15:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction15:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction15:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction15:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction15:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction15:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction15:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction15:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction15:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction15:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction15:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction15:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction15___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction15:parser#ReduceAction15#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction15:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction15:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction15:kernel#Object#init */
}
};
/* allocate ReduceAction15 */
val* NEW_nit__parser__ReduceAction15(const struct type* type) {
val* self /* : ReduceAction15 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction15;
return self;
}
/* runtime class nit__parser__ReduceAction16 */
const struct class class_nit__parser__ReduceAction16 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction16:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction16:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction16:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction16:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction16:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction16:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction16:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction16:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction16:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction16:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction16:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction16:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction16:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction16:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction16___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction16:parser#ReduceAction16#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction16:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction16:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction16:kernel#Object#init */
}
};
/* allocate ReduceAction16 */
val* NEW_nit__parser__ReduceAction16(const struct type* type) {
val* self /* : ReduceAction16 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction16;
return self;
}
/* runtime class nit__parser__ReduceAction17 */
const struct class class_nit__parser__ReduceAction17 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction17:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction17:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction17:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction17:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction17:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction17:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction17:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction17:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction17:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction17:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction17:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction17:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction17:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction17:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction17___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction17:parser#ReduceAction17#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction17:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction17:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction17:kernel#Object#init */
}
};
/* allocate ReduceAction17 */
val* NEW_nit__parser__ReduceAction17(const struct type* type) {
val* self /* : ReduceAction17 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction17;
return self;
}
/* runtime class nit__parser__ReduceAction18 */
const struct class class_nit__parser__ReduceAction18 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction18:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction18:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction18:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction18:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction18:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction18:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction18:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction18:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction18:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction18:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction18:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction18:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction18:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction18:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction18___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction18:parser#ReduceAction18#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction18:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction18:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction18:kernel#Object#init */
}
};
/* allocate ReduceAction18 */
val* NEW_nit__parser__ReduceAction18(const struct type* type) {
val* self /* : ReduceAction18 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction18;
return self;
}
/* runtime class nit__parser__ReduceAction19 */
const struct class class_nit__parser__ReduceAction19 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction19:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction19:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction19:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction19:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction19:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction19:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction19:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction19:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction19:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction19:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction19:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction19:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction19:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction19:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction19___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction19:parser#ReduceAction19#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction19:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction19:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction19:kernel#Object#init */
}
};
/* allocate ReduceAction19 */
val* NEW_nit__parser__ReduceAction19(const struct type* type) {
val* self /* : ReduceAction19 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction19;
return self;
}
/* runtime class nit__parser__ReduceAction20 */
const struct class class_nit__parser__ReduceAction20 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction20:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction20:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction20:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction20:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction20:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction20:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction20:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction20:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction20:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction20:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction20:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction20:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction20:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction20:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction20___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction20:parser#ReduceAction20#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction20:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction20:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction20:kernel#Object#init */
}
};
/* allocate ReduceAction20 */
val* NEW_nit__parser__ReduceAction20(const struct type* type) {
val* self /* : ReduceAction20 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction20;
return self;
}
/* runtime class nit__parser__ReduceAction21 */
const struct class class_nit__parser__ReduceAction21 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction21:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction21:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction21:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction21:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction21:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction21:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction21:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction21:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction21:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction21:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction21:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction21:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction21:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction21:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction21___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction21:parser#ReduceAction21#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction21:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction21:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction21:kernel#Object#init */
}
};
/* allocate ReduceAction21 */
val* NEW_nit__parser__ReduceAction21(const struct type* type) {
val* self /* : ReduceAction21 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction21;
return self;
}
/* runtime class nit__parser__ReduceAction22 */
const struct class class_nit__parser__ReduceAction22 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction22:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction22:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction22:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction22:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction22:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction22:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction22:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction22:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction22:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction22:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction22:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction22:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction22:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction22:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction22___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction22:parser#ReduceAction22#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction22:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction22:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction22:kernel#Object#init */
}
};
/* allocate ReduceAction22 */
val* NEW_nit__parser__ReduceAction22(const struct type* type) {
val* self /* : ReduceAction22 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction22;
return self;
}
/* runtime class nit__parser__ReduceAction23 */
const struct class class_nit__parser__ReduceAction23 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction23:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction23:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction23:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction23:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction23:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction23:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction23:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction23:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction23:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction23:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction23:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction23:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction23:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction23:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction23___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction23:parser#ReduceAction23#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction23:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction23:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction23:kernel#Object#init */
}
};
/* allocate ReduceAction23 */
val* NEW_nit__parser__ReduceAction23(const struct type* type) {
val* self /* : ReduceAction23 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction23;
return self;
}
/* runtime class nit__parser__ReduceAction24 */
const struct class class_nit__parser__ReduceAction24 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction24:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction24:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction24:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction24:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction24:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction24:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction24:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction24:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction24:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction24:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction24:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction24:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction24:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction24:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction24___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction24:parser#ReduceAction24#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction24:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction24:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction24:kernel#Object#init */
}
};
/* allocate ReduceAction24 */
val* NEW_nit__parser__ReduceAction24(const struct type* type) {
val* self /* : ReduceAction24 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction24;
return self;
}
/* runtime class nit__parser__ReduceAction26 */
const struct class class_nit__parser__ReduceAction26 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction26:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction26:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction26:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction26:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction26:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction26:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction26:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction26:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction26:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction26:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction26:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction26:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction26:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction26:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction26___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction26:parser#ReduceAction26#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction26:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction26:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction26:kernel#Object#init */
}
};
/* allocate ReduceAction26 */
val* NEW_nit__parser__ReduceAction26(const struct type* type) {
val* self /* : ReduceAction26 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction26;
return self;
}
/* runtime class nit__parser__ReduceAction27 */
const struct class class_nit__parser__ReduceAction27 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction27:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction27:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction27:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction27:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction27:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction27:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction27:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction27:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction27:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction27:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction27:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction27:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction27:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction27:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction27___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction27:parser#ReduceAction27#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction27:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction27:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction27:kernel#Object#init */
}
};
/* allocate ReduceAction27 */
val* NEW_nit__parser__ReduceAction27(const struct type* type) {
val* self /* : ReduceAction27 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction27;
return self;
}
/* runtime class nit__parser__ReduceAction29 */
const struct class class_nit__parser__ReduceAction29 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction29:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction29:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction29:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction29:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction29:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction29:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction29:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction29:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction29:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction29:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction29:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction29:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction29:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction29:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction29___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction29:parser#ReduceAction29#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction29:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction29:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction29:kernel#Object#init */
}
};
/* allocate ReduceAction29 */
val* NEW_nit__parser__ReduceAction29(const struct type* type) {
val* self /* : ReduceAction29 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction29;
return self;
}
/* runtime class nit__parser__ReduceAction30 */
const struct class class_nit__parser__ReduceAction30 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction30:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction30:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction30:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction30:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction30:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction30:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction30:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction30:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction30:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction30:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction30:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction30:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction30:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction30:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction30___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction30:parser#ReduceAction30#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction30:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction30:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction30:kernel#Object#init */
}
};
/* allocate ReduceAction30 */
val* NEW_nit__parser__ReduceAction30(const struct type* type) {
val* self /* : ReduceAction30 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction30;
return self;
}
/* runtime class nit__parser__ReduceAction31 */
const struct class class_nit__parser__ReduceAction31 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction31:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction31:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction31:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction31:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction31:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction31:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction31:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction31:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction31:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction31:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction31:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction31:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction31:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction31:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction31___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction31:parser#ReduceAction31#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction31:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction31:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction31:kernel#Object#init */
}
};
/* allocate ReduceAction31 */
val* NEW_nit__parser__ReduceAction31(const struct type* type) {
val* self /* : ReduceAction31 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction31;
return self;
}
/* runtime class nit__parser__ReduceAction32 */
const struct class class_nit__parser__ReduceAction32 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction32:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction32:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction32:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction32:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction32:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction32:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction32:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction32:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction32:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction32:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction32:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction32:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction32:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction32:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction32___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction32:parser#ReduceAction32#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction32:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction32:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction32:kernel#Object#init */
}
};
/* allocate ReduceAction32 */
val* NEW_nit__parser__ReduceAction32(const struct type* type) {
val* self /* : ReduceAction32 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction32;
return self;
}
/* runtime class nit__parser__ReduceAction33 */
const struct class class_nit__parser__ReduceAction33 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction33:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction33:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction33:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction33:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction33:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction33:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction33:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction33:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction33:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction33:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction33:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction33:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction33:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction33:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction33___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction33:parser#ReduceAction33#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction33:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction33:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction33:kernel#Object#init */
}
};
/* allocate ReduceAction33 */
val* NEW_nit__parser__ReduceAction33(const struct type* type) {
val* self /* : ReduceAction33 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction33;
return self;
}
/* runtime class nit__parser__ReduceAction34 */
const struct class class_nit__parser__ReduceAction34 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction34:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction34:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction34:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction34:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction34:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction34:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction34:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction34:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction34:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction34:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction34:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction34:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction34:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction34:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction34___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction34:parser#ReduceAction34#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction34:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction34:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction34:kernel#Object#init */
}
};
/* allocate ReduceAction34 */
val* NEW_nit__parser__ReduceAction34(const struct type* type) {
val* self /* : ReduceAction34 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction34;
return self;
}
/* runtime class nit__parser__ReduceAction35 */
const struct class class_nit__parser__ReduceAction35 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction35:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction35:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction35:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction35:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction35:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction35:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction35:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction35:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction35:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction35:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction35:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction35:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction35:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction35:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction35___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction35:parser#ReduceAction35#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction35:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction35:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction35:kernel#Object#init */
}
};
/* allocate ReduceAction35 */
val* NEW_nit__parser__ReduceAction35(const struct type* type) {
val* self /* : ReduceAction35 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction35;
return self;
}
/* runtime class nit__parser__ReduceAction36 */
const struct class class_nit__parser__ReduceAction36 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction36:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction36:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction36:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction36:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction36:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction36:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction36:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction36:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction36:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction36:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction36:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction36:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction36:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction36:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction36___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction36:parser#ReduceAction36#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction36:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction36:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction36:kernel#Object#init */
}
};
/* allocate ReduceAction36 */
val* NEW_nit__parser__ReduceAction36(const struct type* type) {
val* self /* : ReduceAction36 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction36;
return self;
}
/* runtime class nit__parser__ReduceAction37 */
const struct class class_nit__parser__ReduceAction37 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction37:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction37:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction37:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction37:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction37:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction37:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction37:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction37:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction37:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction37:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction37:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction37:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction37:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction37:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction37___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction37:parser#ReduceAction37#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction37:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction37:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction37:kernel#Object#init */
}
};
/* allocate ReduceAction37 */
val* NEW_nit__parser__ReduceAction37(const struct type* type) {
val* self /* : ReduceAction37 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction37;
return self;
}
/* runtime class nit__parser__ReduceAction38 */
const struct class class_nit__parser__ReduceAction38 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction38:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction38:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction38:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction38:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction38:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction38:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction38:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction38:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction38:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction38:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction38:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction38:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction38:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction38:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction38___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction38:parser#ReduceAction38#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction38:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction38:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction38:kernel#Object#init */
}
};
/* allocate ReduceAction38 */
val* NEW_nit__parser__ReduceAction38(const struct type* type) {
val* self /* : ReduceAction38 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction38;
return self;
}
/* runtime class nit__parser__ReduceAction39 */
const struct class class_nit__parser__ReduceAction39 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction39:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction39:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction39:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction39:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction39:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction39:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction39:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction39:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction39:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction39:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction39:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction39:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction39:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction39:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction39___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction39:parser#ReduceAction39#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction39:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction39:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction39:kernel#Object#init */
}
};
/* allocate ReduceAction39 */
val* NEW_nit__parser__ReduceAction39(const struct type* type) {
val* self /* : ReduceAction39 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction39;
return self;
}
/* runtime class nit__parser__ReduceAction40 */
const struct class class_nit__parser__ReduceAction40 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction40:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction40:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction40:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction40:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction40:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction40:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction40:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction40:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction40:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction40:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction40:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction40:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction40:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction40:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction40___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction40:parser#ReduceAction40#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction40:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction40:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction40:kernel#Object#init */
}
};
/* allocate ReduceAction40 */
val* NEW_nit__parser__ReduceAction40(const struct type* type) {
val* self /* : ReduceAction40 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction40;
return self;
}
/* runtime class nit__parser__ReduceAction41 */
const struct class class_nit__parser__ReduceAction41 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction41:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction41:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction41:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction41:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction41:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction41:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction41:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction41:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction41:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction41:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction41:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction41:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction41:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction41:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction41___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction41:parser#ReduceAction41#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction41:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction41:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction41:kernel#Object#init */
}
};
/* allocate ReduceAction41 */
val* NEW_nit__parser__ReduceAction41(const struct type* type) {
val* self /* : ReduceAction41 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction41;
return self;
}
/* runtime class nit__parser__ReduceAction42 */
const struct class class_nit__parser__ReduceAction42 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction42:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction42:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction42:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction42:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction42:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction42:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction42:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction42:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction42:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction42:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction42:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction42:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction42:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction42:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction42___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction42:parser#ReduceAction42#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction42:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction42:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction42:kernel#Object#init */
}
};
/* allocate ReduceAction42 */
val* NEW_nit__parser__ReduceAction42(const struct type* type) {
val* self /* : ReduceAction42 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction42;
return self;
}
/* runtime class nit__parser__ReduceAction43 */
const struct class class_nit__parser__ReduceAction43 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction43:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction43:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction43:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction43:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction43:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction43:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction43:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction43:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction43:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction43:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction43:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction43:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction43:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction43:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction43___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction43:parser#ReduceAction43#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction43:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction43:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction43:kernel#Object#init */
}
};
/* allocate ReduceAction43 */
val* NEW_nit__parser__ReduceAction43(const struct type* type) {
val* self /* : ReduceAction43 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction43;
return self;
}
/* runtime class nit__parser__ReduceAction44 */
const struct class class_nit__parser__ReduceAction44 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction44:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction44:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction44:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction44:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction44:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction44:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction44:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction44:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction44:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction44:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction44:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction44:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction44:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction44:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction44___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction44:parser#ReduceAction44#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction44:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction44:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction44:kernel#Object#init */
}
};
/* allocate ReduceAction44 */
val* NEW_nit__parser__ReduceAction44(const struct type* type) {
val* self /* : ReduceAction44 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction44;
return self;
}
/* runtime class nit__parser__ReduceAction45 */
const struct class class_nit__parser__ReduceAction45 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction45:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction45:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction45:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction45:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction45:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction45:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction45:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction45:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction45:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction45:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction45:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction45:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction45:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction45:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction45___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction45:parser#ReduceAction45#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction45:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction45:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction45:kernel#Object#init */
}
};
/* allocate ReduceAction45 */
val* NEW_nit__parser__ReduceAction45(const struct type* type) {
val* self /* : ReduceAction45 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction45;
return self;
}
/* runtime class nit__parser__ReduceAction46 */
const struct class class_nit__parser__ReduceAction46 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction46:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction46:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction46:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction46:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction46:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction46:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction46:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction46:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction46:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction46:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction46:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction46:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction46:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction46:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction46___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction46:parser#ReduceAction46#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction46:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction46:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction46:kernel#Object#init */
}
};
/* allocate ReduceAction46 */
val* NEW_nit__parser__ReduceAction46(const struct type* type) {
val* self /* : ReduceAction46 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction46;
return self;
}
/* runtime class nit__parser__ReduceAction47 */
const struct class class_nit__parser__ReduceAction47 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction47:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction47:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction47:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction47:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction47:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction47:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction47:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction47:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction47:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction47:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction47:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction47:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction47:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction47:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction47___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction47:parser#ReduceAction47#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction47:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction47:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction47:kernel#Object#init */
}
};
/* allocate ReduceAction47 */
val* NEW_nit__parser__ReduceAction47(const struct type* type) {
val* self /* : ReduceAction47 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction47;
return self;
}
/* runtime class nit__parser__ReduceAction48 */
const struct class class_nit__parser__ReduceAction48 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction48:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction48:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction48:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction48:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction48:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction48:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction48:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction48:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction48:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction48:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction48:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction48:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction48:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction48:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction48___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction48:parser#ReduceAction48#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction48:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction48:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction48:kernel#Object#init */
}
};
/* allocate ReduceAction48 */
val* NEW_nit__parser__ReduceAction48(const struct type* type) {
val* self /* : ReduceAction48 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction48;
return self;
}
/* runtime class nit__parser__ReduceAction49 */
const struct class class_nit__parser__ReduceAction49 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction49:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction49:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction49:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction49:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction49:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction49:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction49:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction49:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction49:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction49:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction49:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction49:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction49:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction49:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction49___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction49:parser#ReduceAction49#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction49:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction49:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction49:kernel#Object#init */
}
};
/* allocate ReduceAction49 */
val* NEW_nit__parser__ReduceAction49(const struct type* type) {
val* self /* : ReduceAction49 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction49;
return self;
}
/* runtime class nit__parser__ReduceAction50 */
const struct class class_nit__parser__ReduceAction50 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction50:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction50:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction50:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction50:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction50:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction50:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction50:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction50:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction50:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction50:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction50:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction50:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction50:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction50:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction50___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction50:parser#ReduceAction50#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction50:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction50:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction50:kernel#Object#init */
}
};
/* allocate ReduceAction50 */
val* NEW_nit__parser__ReduceAction50(const struct type* type) {
val* self /* : ReduceAction50 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction50;
return self;
}
/* runtime class nit__parser__ReduceAction51 */
const struct class class_nit__parser__ReduceAction51 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction51:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction51:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction51:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction51:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction51:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction51:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction51:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction51:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction51:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction51:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction51:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction51:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction51:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction51:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction51___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction51:parser#ReduceAction51#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction51:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction51:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction51:kernel#Object#init */
}
};
/* allocate ReduceAction51 */
val* NEW_nit__parser__ReduceAction51(const struct type* type) {
val* self /* : ReduceAction51 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction51;
return self;
}
/* runtime class nit__parser__ReduceAction52 */
const struct class class_nit__parser__ReduceAction52 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction52:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction52:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction52:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction52:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction52:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction52:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction52:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction52:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction52:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction52:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction52:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction52:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction52:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction52:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction52___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction52:parser#ReduceAction52#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction52:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction52:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction52:kernel#Object#init */
}
};
/* allocate ReduceAction52 */
val* NEW_nit__parser__ReduceAction52(const struct type* type) {
val* self /* : ReduceAction52 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction52;
return self;
}
/* runtime class nit__parser__ReduceAction53 */
const struct class class_nit__parser__ReduceAction53 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction53:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction53:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction53:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction53:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction53:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction53:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction53:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction53:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction53:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction53:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction53:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction53:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction53:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction53:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction53___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction53:parser#ReduceAction53#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction53:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction53:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction53:kernel#Object#init */
}
};
/* allocate ReduceAction53 */
val* NEW_nit__parser__ReduceAction53(const struct type* type) {
val* self /* : ReduceAction53 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction53;
return self;
}
/* runtime class nit__parser__ReduceAction54 */
const struct class class_nit__parser__ReduceAction54 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction54:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction54:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction54:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction54:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction54:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction54:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction54:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction54:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction54:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction54:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction54:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction54:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction54:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction54:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction54___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction54:parser#ReduceAction54#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction54:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction54:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction54:kernel#Object#init */
}
};
/* allocate ReduceAction54 */
val* NEW_nit__parser__ReduceAction54(const struct type* type) {
val* self /* : ReduceAction54 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction54;
return self;
}
/* runtime class nit__parser__ReduceAction55 */
const struct class class_nit__parser__ReduceAction55 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction55:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction55:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction55:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction55:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction55:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction55:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction55:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction55:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction55:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction55:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction55:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction55:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction55:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction55:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction55___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction55:parser#ReduceAction55#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction55:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction55:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction55:kernel#Object#init */
}
};
/* allocate ReduceAction55 */
val* NEW_nit__parser__ReduceAction55(const struct type* type) {
val* self /* : ReduceAction55 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction55;
return self;
}
/* runtime class nit__parser__ReduceAction56 */
const struct class class_nit__parser__ReduceAction56 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction56:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction56:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction56:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction56:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction56:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction56:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction56:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction56:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction56:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction56:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction56:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction56:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction56:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction56:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction56___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction56:parser#ReduceAction56#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction56:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction56:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction56:kernel#Object#init */
}
};
/* allocate ReduceAction56 */
val* NEW_nit__parser__ReduceAction56(const struct type* type) {
val* self /* : ReduceAction56 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction56;
return self;
}
/* runtime class nit__parser__ReduceAction57 */
const struct class class_nit__parser__ReduceAction57 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction57:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction57:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction57:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction57:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction57:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction57:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction57:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction57:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction57:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction57:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction57:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction57:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction57:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction57:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction57___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction57:parser#ReduceAction57#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction57:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction57:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction57:kernel#Object#init */
}
};
/* allocate ReduceAction57 */
val* NEW_nit__parser__ReduceAction57(const struct type* type) {
val* self /* : ReduceAction57 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction57;
return self;
}
/* runtime class nit__parser__ReduceAction58 */
const struct class class_nit__parser__ReduceAction58 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction58:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction58:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction58:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction58:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction58:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction58:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction58:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction58:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction58:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction58:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction58:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction58:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction58:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction58:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction58___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction58:parser#ReduceAction58#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction58:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction58:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction58:kernel#Object#init */
}
};
/* allocate ReduceAction58 */
val* NEW_nit__parser__ReduceAction58(const struct type* type) {
val* self /* : ReduceAction58 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction58;
return self;
}
/* runtime class nit__parser__ReduceAction59 */
const struct class class_nit__parser__ReduceAction59 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction59:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction59:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction59:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction59:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction59:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction59:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction59:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction59:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction59:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction59:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction59:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction59:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction59:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction59:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction59___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction59:parser#ReduceAction59#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction59:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction59:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction59:kernel#Object#init */
}
};
/* allocate ReduceAction59 */
val* NEW_nit__parser__ReduceAction59(const struct type* type) {
val* self /* : ReduceAction59 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction59;
return self;
}
/* runtime class nit__parser__ReduceAction60 */
const struct class class_nit__parser__ReduceAction60 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction60:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction60:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction60:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction60:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction60:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction60:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction60:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction60:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction60:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction60:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction60:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction60:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction60:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction60:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction60___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction60:parser#ReduceAction60#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction60:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction60:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction60:kernel#Object#init */
}
};
/* allocate ReduceAction60 */
val* NEW_nit__parser__ReduceAction60(const struct type* type) {
val* self /* : ReduceAction60 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction60;
return self;
}
/* runtime class nit__parser__ReduceAction61 */
const struct class class_nit__parser__ReduceAction61 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction61:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction61:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction61:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction61:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction61:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction61:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction61:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction61:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction61:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction61:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction61:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction61:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction61:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction61:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction61___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction61:parser#ReduceAction61#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction61:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction61:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction61:kernel#Object#init */
}
};
/* allocate ReduceAction61 */
val* NEW_nit__parser__ReduceAction61(const struct type* type) {
val* self /* : ReduceAction61 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction61;
return self;
}
/* runtime class nit__parser__ReduceAction62 */
const struct class class_nit__parser__ReduceAction62 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction62:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction62:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction62:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction62:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction62:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction62:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction62:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction62:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction62:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction62:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction62:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction62:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction62:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction62:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction62___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction62:parser#ReduceAction62#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction62:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction62:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction62:kernel#Object#init */
}
};
/* allocate ReduceAction62 */
val* NEW_nit__parser__ReduceAction62(const struct type* type) {
val* self /* : ReduceAction62 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction62;
return self;
}
/* runtime class nit__parser__ReduceAction63 */
const struct class class_nit__parser__ReduceAction63 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction63:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction63:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction63:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction63:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction63:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction63:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction63:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction63:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction63:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction63:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction63:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction63:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction63:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction63:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction63___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction63:parser#ReduceAction63#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction63:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction63:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction63:kernel#Object#init */
}
};
/* allocate ReduceAction63 */
val* NEW_nit__parser__ReduceAction63(const struct type* type) {
val* self /* : ReduceAction63 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction63;
return self;
}
/* runtime class nit__parser__ReduceAction64 */
const struct class class_nit__parser__ReduceAction64 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction64:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction64:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction64:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction64:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction64:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction64:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction64:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction64:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction64:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction64:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction64:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction64:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction64:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction64:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction64___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction64:parser#ReduceAction64#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction64:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction64:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction64:kernel#Object#init */
}
};
/* allocate ReduceAction64 */
val* NEW_nit__parser__ReduceAction64(const struct type* type) {
val* self /* : ReduceAction64 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction64;
return self;
}
/* runtime class nit__parser__ReduceAction65 */
const struct class class_nit__parser__ReduceAction65 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction65:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction65:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction65:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction65:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction65:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction65:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction65:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction65:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction65:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction65:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction65:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction65:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction65:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction65:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction65___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction65:parser#ReduceAction65#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction65:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction65:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction65:kernel#Object#init */
}
};
/* allocate ReduceAction65 */
val* NEW_nit__parser__ReduceAction65(const struct type* type) {
val* self /* : ReduceAction65 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction65;
return self;
}
/* runtime class nit__parser__ReduceAction66 */
const struct class class_nit__parser__ReduceAction66 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction66:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction66:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction66:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction66:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction66:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction66:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction66:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction66:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction66:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction66:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction66:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction66:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction66:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction66:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction66___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction66:parser#ReduceAction66#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction66:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction66:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction66:kernel#Object#init */
}
};
/* allocate ReduceAction66 */
val* NEW_nit__parser__ReduceAction66(const struct type* type) {
val* self /* : ReduceAction66 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction66;
return self;
}
/* runtime class nit__parser__ReduceAction67 */
const struct class class_nit__parser__ReduceAction67 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction67:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction67:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction67:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction67:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction67:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction67:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction67:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction67:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction67:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction67:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction67:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction67:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction67:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction67:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction67___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction67:parser#ReduceAction67#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction67:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction67:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction67:kernel#Object#init */
}
};
/* allocate ReduceAction67 */
val* NEW_nit__parser__ReduceAction67(const struct type* type) {
val* self /* : ReduceAction67 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction67;
return self;
}
/* runtime class nit__parser__ReduceAction68 */
const struct class class_nit__parser__ReduceAction68 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction68:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction68:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction68:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction68:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction68:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction68:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction68:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction68:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction68:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction68:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction68:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction68:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction68:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction68:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction68___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction68:parser#ReduceAction68#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction68:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction68:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction68:kernel#Object#init */
}
};
/* allocate ReduceAction68 */
val* NEW_nit__parser__ReduceAction68(const struct type* type) {
val* self /* : ReduceAction68 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction68;
return self;
}
/* runtime class nit__parser__ReduceAction69 */
const struct class class_nit__parser__ReduceAction69 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction69:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction69:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction69:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction69:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction69:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction69:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction69:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction69:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction69:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction69:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction69:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction69:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction69:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction69:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction69___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction69:parser#ReduceAction69#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction69:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction69:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction69:kernel#Object#init */
}
};
/* allocate ReduceAction69 */
val* NEW_nit__parser__ReduceAction69(const struct type* type) {
val* self /* : ReduceAction69 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction69;
return self;
}
/* runtime class nit__parser__ReduceAction70 */
const struct class class_nit__parser__ReduceAction70 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction70:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction70:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction70:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction70:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction70:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction70:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction70:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction70:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction70:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction70:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction70:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction70:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction70:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction70:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction70___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction70:parser#ReduceAction70#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction70:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction70:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction70:kernel#Object#init */
}
};
/* allocate ReduceAction70 */
val* NEW_nit__parser__ReduceAction70(const struct type* type) {
val* self /* : ReduceAction70 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction70;
return self;
}
/* runtime class nit__parser__ReduceAction71 */
const struct class class_nit__parser__ReduceAction71 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction71:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction71:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction71:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction71:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction71:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction71:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction71:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction71:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction71:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction71:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction71:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction71:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction71:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction71:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction71___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction71:parser#ReduceAction71#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction71:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction71:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction71:kernel#Object#init */
}
};
/* allocate ReduceAction71 */
val* NEW_nit__parser__ReduceAction71(const struct type* type) {
val* self /* : ReduceAction71 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction71;
return self;
}
/* runtime class nit__parser__ReduceAction72 */
const struct class class_nit__parser__ReduceAction72 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction72:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction72:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction72:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction72:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction72:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction72:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction72:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction72:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction72:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction72:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction72:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction72:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction72:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction72:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction72___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction72:parser#ReduceAction72#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction72:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction72:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction72:kernel#Object#init */
}
};
/* allocate ReduceAction72 */
val* NEW_nit__parser__ReduceAction72(const struct type* type) {
val* self /* : ReduceAction72 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction72;
return self;
}
/* runtime class nit__parser__ReduceAction74 */
const struct class class_nit__parser__ReduceAction74 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction74:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction74:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction74:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction74:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction74:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction74:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction74:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction74:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction74:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction74:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction74:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction74:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction74:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction74:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction74___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction74:parser#ReduceAction74#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction74:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction74:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction74:kernel#Object#init */
}
};
/* allocate ReduceAction74 */
val* NEW_nit__parser__ReduceAction74(const struct type* type) {
val* self /* : ReduceAction74 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction74;
return self;
}
/* runtime class nit__parser__ReduceAction75 */
const struct class class_nit__parser__ReduceAction75 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction75:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction75:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction75:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction75:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction75:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction75:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction75:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction75:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction75:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction75:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction75:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction75:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction75:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction75:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction75___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction75:parser#ReduceAction75#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction75:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction75:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction75:kernel#Object#init */
}
};
/* allocate ReduceAction75 */
val* NEW_nit__parser__ReduceAction75(const struct type* type) {
val* self /* : ReduceAction75 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction75;
return self;
}
/* runtime class nit__parser__ReduceAction78 */
const struct class class_nit__parser__ReduceAction78 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction78:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction78:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction78:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction78:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction78:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction78:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction78:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction78:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction78:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction78:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction78:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction78:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction78:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction78:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction78___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction78:parser#ReduceAction78#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction78:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction78:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction78:kernel#Object#init */
}
};
/* allocate ReduceAction78 */
val* NEW_nit__parser__ReduceAction78(const struct type* type) {
val* self /* : ReduceAction78 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction78;
return self;
}
/* runtime class nit__parser__ReduceAction79 */
const struct class class_nit__parser__ReduceAction79 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction79:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction79:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction79:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction79:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction79:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction79:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction79:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction79:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction79:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction79:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction79:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction79:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction79:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction79:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction79___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction79:parser#ReduceAction79#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction79:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction79:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction79:kernel#Object#init */
}
};
/* allocate ReduceAction79 */
val* NEW_nit__parser__ReduceAction79(const struct type* type) {
val* self /* : ReduceAction79 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction79;
return self;
}
/* runtime class nit__parser__ReduceAction80 */
const struct class class_nit__parser__ReduceAction80 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction80:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction80:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction80:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction80:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction80:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction80:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction80:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction80:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction80:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction80:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction80:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction80:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction80:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction80:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction80___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction80:parser#ReduceAction80#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction80:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction80:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction80:kernel#Object#init */
}
};
/* allocate ReduceAction80 */
val* NEW_nit__parser__ReduceAction80(const struct type* type) {
val* self /* : ReduceAction80 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction80;
return self;
}
/* runtime class nit__parser__ReduceAction81 */
const struct class class_nit__parser__ReduceAction81 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction81:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction81:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction81:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction81:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction81:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction81:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction81:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction81:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction81:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction81:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction81:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction81:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction81:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction81:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction81___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction81:parser#ReduceAction81#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction81:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction81:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction81:kernel#Object#init */
}
};
/* allocate ReduceAction81 */
val* NEW_nit__parser__ReduceAction81(const struct type* type) {
val* self /* : ReduceAction81 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction81;
return self;
}
/* runtime class nit__parser__ReduceAction82 */
const struct class class_nit__parser__ReduceAction82 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction82:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction82:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction82:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction82:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction82:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction82:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction82:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction82:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction82:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction82:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction82:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction82:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction82:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction82:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction82___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction82:parser#ReduceAction82#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction82:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction82:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction82:kernel#Object#init */
}
};
/* allocate ReduceAction82 */
val* NEW_nit__parser__ReduceAction82(const struct type* type) {
val* self /* : ReduceAction82 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction82;
return self;
}
/* runtime class nit__parser__ReduceAction83 */
const struct class class_nit__parser__ReduceAction83 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction83:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction83:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction83:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction83:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction83:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction83:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction83:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction83:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction83:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction83:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction83:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction83:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction83:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction83:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction83___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction83:parser#ReduceAction83#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction83:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction83:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction83:kernel#Object#init */
}
};
/* allocate ReduceAction83 */
val* NEW_nit__parser__ReduceAction83(const struct type* type) {
val* self /* : ReduceAction83 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction83;
return self;
}
/* runtime class nit__parser__ReduceAction84 */
const struct class class_nit__parser__ReduceAction84 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction84:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction84:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction84:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction84:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction84:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction84:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction84:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction84:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction84:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction84:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction84:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction84:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction84:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction84:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction84___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction84:parser#ReduceAction84#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction84:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction84:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction84:kernel#Object#init */
}
};
/* allocate ReduceAction84 */
val* NEW_nit__parser__ReduceAction84(const struct type* type) {
val* self /* : ReduceAction84 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction84;
return self;
}
/* runtime class nit__parser__ReduceAction85 */
const struct class class_nit__parser__ReduceAction85 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction85:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction85:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction85:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction85:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction85:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction85:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction85:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction85:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction85:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction85:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction85:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction85:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction85:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction85:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction85___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction85:parser#ReduceAction85#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction85:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction85:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction85:kernel#Object#init */
}
};
/* allocate ReduceAction85 */
val* NEW_nit__parser__ReduceAction85(const struct type* type) {
val* self /* : ReduceAction85 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction85;
return self;
}
/* runtime class nit__parser__ReduceAction86 */
const struct class class_nit__parser__ReduceAction86 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction86:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction86:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction86:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction86:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction86:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction86:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction86:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction86:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction86:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction86:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction86:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction86:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction86:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction86:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction86___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction86:parser#ReduceAction86#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction86:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction86:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction86:kernel#Object#init */
}
};
/* allocate ReduceAction86 */
val* NEW_nit__parser__ReduceAction86(const struct type* type) {
val* self /* : ReduceAction86 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction86;
return self;
}
/* runtime class nit__parser__ReduceAction87 */
const struct class class_nit__parser__ReduceAction87 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction87:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction87:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction87:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction87:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction87:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction87:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction87:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction87:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction87:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction87:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction87:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction87:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction87:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction87:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction87___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction87:parser#ReduceAction87#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction87:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction87:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction87:kernel#Object#init */
}
};
/* allocate ReduceAction87 */
val* NEW_nit__parser__ReduceAction87(const struct type* type) {
val* self /* : ReduceAction87 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction87;
return self;
}
/* runtime class nit__parser__ReduceAction88 */
const struct class class_nit__parser__ReduceAction88 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction88:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction88:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction88:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction88:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction88:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction88:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction88:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction88:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction88:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction88:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction88:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction88:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction88:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction88:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction88___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction88:parser#ReduceAction88#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction88:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction88:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction88:kernel#Object#init */
}
};
/* allocate ReduceAction88 */
val* NEW_nit__parser__ReduceAction88(const struct type* type) {
val* self /* : ReduceAction88 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction88;
return self;
}
/* runtime class nit__parser__ReduceAction89 */
const struct class class_nit__parser__ReduceAction89 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction89:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction89:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction89:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction89:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction89:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction89:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction89:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction89:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction89:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction89:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction89:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction89:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction89:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction89:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction89___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction89:parser#ReduceAction89#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction89:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction89:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction89:kernel#Object#init */
}
};
/* allocate ReduceAction89 */
val* NEW_nit__parser__ReduceAction89(const struct type* type) {
val* self /* : ReduceAction89 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction89;
return self;
}
/* runtime class nit__parser__ReduceAction90 */
const struct class class_nit__parser__ReduceAction90 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction90:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction90:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction90:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction90:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction90:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction90:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction90:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction90:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction90:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction90:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction90:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction90:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction90:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction90:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction90___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction90:parser#ReduceAction90#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction90:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction90:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction90:kernel#Object#init */
}
};
/* allocate ReduceAction90 */
val* NEW_nit__parser__ReduceAction90(const struct type* type) {
val* self /* : ReduceAction90 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction90;
return self;
}
/* runtime class nit__parser__ReduceAction91 */
const struct class class_nit__parser__ReduceAction91 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction91:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction91:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction91:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction91:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction91:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction91:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction91:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction91:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction91:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction91:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction91:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction91:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction91:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction91:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction91___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction91:parser#ReduceAction91#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction91:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction91:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction91:kernel#Object#init */
}
};
/* allocate ReduceAction91 */
val* NEW_nit__parser__ReduceAction91(const struct type* type) {
val* self /* : ReduceAction91 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction91;
return self;
}
/* runtime class nit__parser__ReduceAction92 */
const struct class class_nit__parser__ReduceAction92 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction92:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction92:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction92:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction92:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction92:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction92:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction92:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction92:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction92:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction92:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction92:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction92:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction92:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction92:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction92___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction92:parser#ReduceAction92#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction92:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction92:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction92:kernel#Object#init */
}
};
/* allocate ReduceAction92 */
val* NEW_nit__parser__ReduceAction92(const struct type* type) {
val* self /* : ReduceAction92 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction92;
return self;
}
/* runtime class nit__parser__ReduceAction93 */
const struct class class_nit__parser__ReduceAction93 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction93:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction93:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction93:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction93:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction93:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction93:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction93:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction93:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction93:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction93:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction93:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction93:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction93:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction93:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction93___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction93:parser#ReduceAction93#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction93:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction93:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction93:kernel#Object#init */
}
};
/* allocate ReduceAction93 */
val* NEW_nit__parser__ReduceAction93(const struct type* type) {
val* self /* : ReduceAction93 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction93;
return self;
}
/* runtime class nit__parser__ReduceAction94 */
const struct class class_nit__parser__ReduceAction94 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction94:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction94:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction94:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction94:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction94:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction94:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction94:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction94:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction94:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction94:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction94:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction94:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction94:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction94:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction94___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction94:parser#ReduceAction94#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction94:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction94:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction94:kernel#Object#init */
}
};
/* allocate ReduceAction94 */
val* NEW_nit__parser__ReduceAction94(const struct type* type) {
val* self /* : ReduceAction94 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction94;
return self;
}
/* runtime class nit__parser__ReduceAction95 */
const struct class class_nit__parser__ReduceAction95 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction95:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction95:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction95:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction95:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction95:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction95:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction95:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction95:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction95:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction95:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction95:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction95:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction95:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction95:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction95___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction95:parser#ReduceAction95#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction95:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction95:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction95:kernel#Object#init */
}
};
/* allocate ReduceAction95 */
val* NEW_nit__parser__ReduceAction95(const struct type* type) {
val* self /* : ReduceAction95 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction95;
return self;
}
/* runtime class nit__parser__ReduceAction96 */
const struct class class_nit__parser__ReduceAction96 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction96:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction96:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction96:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction96:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction96:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction96:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction96:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction96:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction96:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction96:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction96:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction96:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction96:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction96:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction96___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction96:parser#ReduceAction96#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction96:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction96:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction96:kernel#Object#init */
}
};
/* allocate ReduceAction96 */
val* NEW_nit__parser__ReduceAction96(const struct type* type) {
val* self /* : ReduceAction96 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction96;
return self;
}
/* runtime class nit__parser__ReduceAction97 */
const struct class class_nit__parser__ReduceAction97 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction97:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction97:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction97:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction97:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction97:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction97:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction97:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction97:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction97:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction97:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction97:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction97:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction97:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction97:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction97___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction97:parser#ReduceAction97#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction97:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction97:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction97:kernel#Object#init */
}
};
/* allocate ReduceAction97 */
val* NEW_nit__parser__ReduceAction97(const struct type* type) {
val* self /* : ReduceAction97 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction97;
return self;
}
/* runtime class nit__parser__ReduceAction98 */
const struct class class_nit__parser__ReduceAction98 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction98:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction98:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction98:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction98:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction98:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction98:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction98:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction98:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction98:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction98:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction98:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction98:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction98:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction98:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction98___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction98:parser#ReduceAction98#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction98:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction98:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction98:kernel#Object#init */
}
};
/* allocate ReduceAction98 */
val* NEW_nit__parser__ReduceAction98(const struct type* type) {
val* self /* : ReduceAction98 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction98;
return self;
}
/* runtime class nit__parser__ReduceAction99 */
const struct class class_nit__parser__ReduceAction99 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction99:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction99:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction99:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction99:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction99:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction99:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction99:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction99:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction99:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction99:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction99:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction99:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction99:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction99:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction99___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction99:parser#ReduceAction99#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction99:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction99:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction99:kernel#Object#init */
}
};
/* allocate ReduceAction99 */
val* NEW_nit__parser__ReduceAction99(const struct type* type) {
val* self /* : ReduceAction99 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction99;
return self;
}
/* runtime class nit__parser__ReduceAction100 */
const struct class class_nit__parser__ReduceAction100 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction100:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction100:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction100:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction100:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction100:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction100:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction100:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction100:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction100:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction100:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction100:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction100:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction100:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction100:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction100___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction100:parser#ReduceAction100#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction100:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction100:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction100:kernel#Object#init */
}
};
/* allocate ReduceAction100 */
val* NEW_nit__parser__ReduceAction100(const struct type* type) {
val* self /* : ReduceAction100 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction100;
return self;
}
/* runtime class nit__parser__ReduceAction101 */
const struct class class_nit__parser__ReduceAction101 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction101:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction101:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction101:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction101:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction101:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction101:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction101:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction101:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction101:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction101:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction101:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction101:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction101:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction101:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction101___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction101:parser#ReduceAction101#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction101:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction101:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction101:kernel#Object#init */
}
};
/* allocate ReduceAction101 */
val* NEW_nit__parser__ReduceAction101(const struct type* type) {
val* self /* : ReduceAction101 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction101;
return self;
}
/* runtime class nit__parser__ReduceAction102 */
const struct class class_nit__parser__ReduceAction102 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction102:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction102:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction102:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction102:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction102:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction102:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction102:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction102:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction102:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction102:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction102:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction102:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction102:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction102:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction102___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction102:parser#ReduceAction102#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction102:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction102:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction102:kernel#Object#init */
}
};
/* allocate ReduceAction102 */
val* NEW_nit__parser__ReduceAction102(const struct type* type) {
val* self /* : ReduceAction102 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction102;
return self;
}
/* runtime class nit__parser__ReduceAction103 */
const struct class class_nit__parser__ReduceAction103 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction103:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction103:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction103:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction103:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction103:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction103:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction103:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction103:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction103:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction103:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction103:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction103:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction103:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction103:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction103___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction103:parser#ReduceAction103#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction103:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction103:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction103:kernel#Object#init */
}
};
/* allocate ReduceAction103 */
val* NEW_nit__parser__ReduceAction103(const struct type* type) {
val* self /* : ReduceAction103 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction103;
return self;
}
/* runtime class nit__parser__ReduceAction104 */
const struct class class_nit__parser__ReduceAction104 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction104:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction104:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction104:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction104:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction104:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction104:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction104:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction104:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction104:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction104:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction104:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction104:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction104:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction104:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction104___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction104:parser#ReduceAction104#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction104:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction104:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction104:kernel#Object#init */
}
};
/* allocate ReduceAction104 */
val* NEW_nit__parser__ReduceAction104(const struct type* type) {
val* self /* : ReduceAction104 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction104;
return self;
}
/* runtime class nit__parser__ReduceAction105 */
const struct class class_nit__parser__ReduceAction105 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction105:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction105:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction105:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction105:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction105:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction105:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction105:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction105:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction105:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction105:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction105:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction105:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction105:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction105:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction105___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction105:parser#ReduceAction105#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction105:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction105:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction105:kernel#Object#init */
}
};
/* allocate ReduceAction105 */
val* NEW_nit__parser__ReduceAction105(const struct type* type) {
val* self /* : ReduceAction105 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction105;
return self;
}
/* runtime class nit__parser__ReduceAction106 */
const struct class class_nit__parser__ReduceAction106 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction106:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction106:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction106:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction106:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction106:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction106:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction106:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction106:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction106:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction106:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction106:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction106:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction106:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction106:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction106___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction106:parser#ReduceAction106#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction106:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction106:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction106:kernel#Object#init */
}
};
/* allocate ReduceAction106 */
val* NEW_nit__parser__ReduceAction106(const struct type* type) {
val* self /* : ReduceAction106 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction106;
return self;
}
/* runtime class nit__parser__ReduceAction107 */
const struct class class_nit__parser__ReduceAction107 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction107:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction107:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction107:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction107:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction107:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction107:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction107:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction107:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction107:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction107:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction107:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction107:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction107:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction107:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction107___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction107:parser#ReduceAction107#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction107:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction107:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction107:kernel#Object#init */
}
};
/* allocate ReduceAction107 */
val* NEW_nit__parser__ReduceAction107(const struct type* type) {
val* self /* : ReduceAction107 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction107;
return self;
}
/* runtime class nit__parser__ReduceAction108 */
const struct class class_nit__parser__ReduceAction108 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction108:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction108:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction108:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction108:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction108:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction108:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction108:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction108:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction108:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction108:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction108:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction108:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction108:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction108:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction108___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction108:parser#ReduceAction108#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction108:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction108:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction108:kernel#Object#init */
}
};
/* allocate ReduceAction108 */
val* NEW_nit__parser__ReduceAction108(const struct type* type) {
val* self /* : ReduceAction108 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction108;
return self;
}
/* runtime class nit__parser__ReduceAction109 */
const struct class class_nit__parser__ReduceAction109 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction109:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction109:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction109:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction109:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction109:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction109:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction109:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction109:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction109:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction109:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction109:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction109:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction109:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction109:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction109___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction109:parser#ReduceAction109#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction109:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction109:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction109:kernel#Object#init */
}
};
/* allocate ReduceAction109 */
val* NEW_nit__parser__ReduceAction109(const struct type* type) {
val* self /* : ReduceAction109 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction109;
return self;
}
/* runtime class nit__parser__ReduceAction110 */
const struct class class_nit__parser__ReduceAction110 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction110:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction110:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction110:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction110:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction110:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction110:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction110:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction110:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction110:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction110:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction110:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction110:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction110:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction110:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction110___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction110:parser#ReduceAction110#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction110:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction110:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction110:kernel#Object#init */
}
};
/* allocate ReduceAction110 */
val* NEW_nit__parser__ReduceAction110(const struct type* type) {
val* self /* : ReduceAction110 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction110;
return self;
}
/* runtime class nit__parser__ReduceAction111 */
const struct class class_nit__parser__ReduceAction111 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction111:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction111:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction111:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction111:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction111:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction111:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction111:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction111:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction111:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction111:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction111:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction111:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction111:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction111:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction111___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction111:parser#ReduceAction111#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction111:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction111:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction111:kernel#Object#init */
}
};
/* allocate ReduceAction111 */
val* NEW_nit__parser__ReduceAction111(const struct type* type) {
val* self /* : ReduceAction111 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction111;
return self;
}
/* runtime class nit__parser__ReduceAction112 */
const struct class class_nit__parser__ReduceAction112 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction112:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction112:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction112:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction112:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction112:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction112:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction112:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction112:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction112:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction112:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction112:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction112:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction112:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction112:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction112___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction112:parser#ReduceAction112#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction112:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction112:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction112:kernel#Object#init */
}
};
/* allocate ReduceAction112 */
val* NEW_nit__parser__ReduceAction112(const struct type* type) {
val* self /* : ReduceAction112 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction112;
return self;
}
/* runtime class nit__parser__ReduceAction114 */
const struct class class_nit__parser__ReduceAction114 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction114:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction114:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction114:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction114:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction114:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction114:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction114:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction114:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction114:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction114:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction114:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction114:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction114:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction114:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction114___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction114:parser#ReduceAction114#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction114:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction114:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction114:kernel#Object#init */
}
};
/* allocate ReduceAction114 */
val* NEW_nit__parser__ReduceAction114(const struct type* type) {
val* self /* : ReduceAction114 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction114;
return self;
}
/* runtime class nit__parser__ReduceAction115 */
const struct class class_nit__parser__ReduceAction115 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction115:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction115:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction115:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction115:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction115:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction115:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction115:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction115:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction115:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction115:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction115:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction115:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction115:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction115:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction115___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction115:parser#ReduceAction115#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction115:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction115:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction115:kernel#Object#init */
}
};
/* allocate ReduceAction115 */
val* NEW_nit__parser__ReduceAction115(const struct type* type) {
val* self /* : ReduceAction115 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction115;
return self;
}
/* runtime class nit__parser__ReduceAction116 */
const struct class class_nit__parser__ReduceAction116 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction116:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction116:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction116:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction116:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction116:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction116:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction116:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction116:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction116:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction116:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction116:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction116:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction116:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction116:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction116___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction116:parser#ReduceAction116#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction116:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction116:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction116:kernel#Object#init */
}
};
/* allocate ReduceAction116 */
val* NEW_nit__parser__ReduceAction116(const struct type* type) {
val* self /* : ReduceAction116 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction116;
return self;
}
/* runtime class nit__parser__ReduceAction117 */
const struct class class_nit__parser__ReduceAction117 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction117:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction117:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction117:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction117:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction117:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction117:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction117:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction117:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction117:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction117:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction117:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction117:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction117:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction117:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction117___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction117:parser#ReduceAction117#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction117:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction117:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction117:kernel#Object#init */
}
};
/* allocate ReduceAction117 */
val* NEW_nit__parser__ReduceAction117(const struct type* type) {
val* self /* : ReduceAction117 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction117;
return self;
}
/* runtime class nit__parser__ReduceAction118 */
const struct class class_nit__parser__ReduceAction118 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction118:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction118:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction118:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction118:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction118:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction118:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction118:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction118:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction118:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction118:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction118:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction118:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction118:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction118:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction118___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction118:parser#ReduceAction118#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction118:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction118:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction118:kernel#Object#init */
}
};
/* allocate ReduceAction118 */
val* NEW_nit__parser__ReduceAction118(const struct type* type) {
val* self /* : ReduceAction118 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction118;
return self;
}
/* runtime class nit__parser__ReduceAction119 */
const struct class class_nit__parser__ReduceAction119 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction119:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction119:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction119:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction119:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction119:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction119:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction119:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction119:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction119:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction119:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction119:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction119:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction119:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction119:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction119___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction119:parser#ReduceAction119#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction119:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction119:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction119:kernel#Object#init */
}
};
/* allocate ReduceAction119 */
val* NEW_nit__parser__ReduceAction119(const struct type* type) {
val* self /* : ReduceAction119 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction119;
return self;
}
/* runtime class nit__parser__ReduceAction120 */
const struct class class_nit__parser__ReduceAction120 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction120:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction120:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction120:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction120:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction120:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction120:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction120:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction120:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction120:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction120:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction120:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction120:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction120:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction120:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction120___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction120:parser#ReduceAction120#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction120:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction120:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction120:kernel#Object#init */
}
};
/* allocate ReduceAction120 */
val* NEW_nit__parser__ReduceAction120(const struct type* type) {
val* self /* : ReduceAction120 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction120;
return self;
}
/* runtime class nit__parser__ReduceAction121 */
const struct class class_nit__parser__ReduceAction121 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction121:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction121:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction121:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction121:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction121:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction121:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction121:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction121:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction121:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction121:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction121:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction121:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction121:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction121:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction121___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction121:parser#ReduceAction121#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction121:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction121:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction121:kernel#Object#init */
}
};
/* allocate ReduceAction121 */
val* NEW_nit__parser__ReduceAction121(const struct type* type) {
val* self /* : ReduceAction121 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction121;
return self;
}
/* runtime class nit__parser__ReduceAction123 */
const struct class class_nit__parser__ReduceAction123 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction123:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction123:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction123:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction123:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction123:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction123:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction123:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction123:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction123:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction123:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction123:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction123:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction123:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction123:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction123___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction123:parser#ReduceAction123#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction123:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction123:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction123:kernel#Object#init */
}
};
/* allocate ReduceAction123 */
val* NEW_nit__parser__ReduceAction123(const struct type* type) {
val* self /* : ReduceAction123 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction123;
return self;
}
/* runtime class nit__parser__ReduceAction124 */
const struct class class_nit__parser__ReduceAction124 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction124:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction124:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction124:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction124:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction124:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction124:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction124:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction124:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction124:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction124:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction124:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction124:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction124:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction124:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction124___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction124:parser#ReduceAction124#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction124:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction124:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction124:kernel#Object#init */
}
};
/* allocate ReduceAction124 */
val* NEW_nit__parser__ReduceAction124(const struct type* type) {
val* self /* : ReduceAction124 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction124;
return self;
}
/* runtime class nit__parser__ReduceAction126 */
const struct class class_nit__parser__ReduceAction126 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction126:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction126:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction126:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction126:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction126:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction126:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction126:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction126:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction126:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction126:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction126:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction126:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction126:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction126:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction126___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction126:parser#ReduceAction126#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction126:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction126:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction126:kernel#Object#init */
}
};
/* allocate ReduceAction126 */
val* NEW_nit__parser__ReduceAction126(const struct type* type) {
val* self /* : ReduceAction126 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction126;
return self;
}
/* runtime class nit__parser__ReduceAction127 */
const struct class class_nit__parser__ReduceAction127 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction127:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction127:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction127:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction127:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction127:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction127:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction127:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction127:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction127:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction127:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction127:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction127:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction127:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction127:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction127___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction127:parser#ReduceAction127#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction127:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction127:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction127:kernel#Object#init */
}
};
/* allocate ReduceAction127 */
val* NEW_nit__parser__ReduceAction127(const struct type* type) {
val* self /* : ReduceAction127 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction127;
return self;
}
/* runtime class nit__parser__ReduceAction128 */
const struct class class_nit__parser__ReduceAction128 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction128:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction128:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction128:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction128:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction128:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction128:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction128:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction128:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction128:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction128:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction128:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction128:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction128:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction128:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction128___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction128:parser#ReduceAction128#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction128:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction128:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction128:kernel#Object#init */
}
};
/* allocate ReduceAction128 */
val* NEW_nit__parser__ReduceAction128(const struct type* type) {
val* self /* : ReduceAction128 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction128;
return self;
}
/* runtime class nit__parser__ReduceAction129 */
const struct class class_nit__parser__ReduceAction129 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction129:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction129:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction129:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction129:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction129:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction129:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction129:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction129:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction129:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction129:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction129:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction129:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction129:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction129:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction129___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction129:parser#ReduceAction129#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction129:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction129:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction129:kernel#Object#init */
}
};
/* allocate ReduceAction129 */
val* NEW_nit__parser__ReduceAction129(const struct type* type) {
val* self /* : ReduceAction129 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction129;
return self;
}
/* runtime class nit__parser__ReduceAction130 */
const struct class class_nit__parser__ReduceAction130 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction130:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction130:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction130:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction130:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction130:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction130:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction130:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction130:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction130:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction130:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction130:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction130:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction130:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction130:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction130___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction130:parser#ReduceAction130#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction130:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction130:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction130:kernel#Object#init */
}
};
/* allocate ReduceAction130 */
val* NEW_nit__parser__ReduceAction130(const struct type* type) {
val* self /* : ReduceAction130 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction130;
return self;
}
/* runtime class nit__parser__ReduceAction131 */
const struct class class_nit__parser__ReduceAction131 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction131:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction131:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction131:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction131:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction131:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction131:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction131:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction131:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction131:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction131:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction131:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction131:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction131:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction131:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction131___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction131:parser#ReduceAction131#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction131:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction131:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction131:kernel#Object#init */
}
};
/* allocate ReduceAction131 */
val* NEW_nit__parser__ReduceAction131(const struct type* type) {
val* self /* : ReduceAction131 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction131;
return self;
}
/* runtime class nit__parser__ReduceAction132 */
const struct class class_nit__parser__ReduceAction132 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction132:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction132:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction132:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction132:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction132:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction132:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction132:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction132:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction132:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction132:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction132:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction132:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction132:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction132:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction132___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction132:parser#ReduceAction132#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction132:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction132:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction132:kernel#Object#init */
}
};
/* allocate ReduceAction132 */
val* NEW_nit__parser__ReduceAction132(const struct type* type) {
val* self /* : ReduceAction132 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction132;
return self;
}
/* runtime class nit__parser__ReduceAction133 */
const struct class class_nit__parser__ReduceAction133 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction133:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction133:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction133:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction133:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction133:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction133:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction133:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction133:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction133:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction133:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction133:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction133:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction133:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction133:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction133___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction133:parser#ReduceAction133#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction133:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction133:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction133:kernel#Object#init */
}
};
/* allocate ReduceAction133 */
val* NEW_nit__parser__ReduceAction133(const struct type* type) {
val* self /* : ReduceAction133 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction133;
return self;
}
/* runtime class nit__parser__ReduceAction134 */
const struct class class_nit__parser__ReduceAction134 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction134:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction134:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction134:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction134:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction134:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction134:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction134:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction134:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction134:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction134:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction134:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction134:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction134:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction134:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction134___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction134:parser#ReduceAction134#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction134:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction134:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction134:kernel#Object#init */
}
};
/* allocate ReduceAction134 */
val* NEW_nit__parser__ReduceAction134(const struct type* type) {
val* self /* : ReduceAction134 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction134;
return self;
}
/* runtime class nit__parser__ReduceAction135 */
const struct class class_nit__parser__ReduceAction135 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction135:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction135:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction135:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction135:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction135:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction135:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction135:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction135:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction135:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction135:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction135:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction135:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction135:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction135:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction135___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction135:parser#ReduceAction135#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction135:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction135:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction135:kernel#Object#init */
}
};
/* allocate ReduceAction135 */
val* NEW_nit__parser__ReduceAction135(const struct type* type) {
val* self /* : ReduceAction135 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction135;
return self;
}
/* runtime class nit__parser__ReduceAction137 */
const struct class class_nit__parser__ReduceAction137 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction137:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction137:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction137:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction137:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction137:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction137:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction137:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction137:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction137:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction137:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction137:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction137:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction137:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction137:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction137___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction137:parser#ReduceAction137#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction137:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction137:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction137:kernel#Object#init */
}
};
/* allocate ReduceAction137 */
val* NEW_nit__parser__ReduceAction137(const struct type* type) {
val* self /* : ReduceAction137 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction137;
return self;
}
/* runtime class nit__parser__ReduceAction138 */
const struct class class_nit__parser__ReduceAction138 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction138:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction138:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction138:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction138:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction138:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction138:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction138:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction138:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction138:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction138:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction138:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction138:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction138:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction138:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction138___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction138:parser#ReduceAction138#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction138:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction138:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction138:kernel#Object#init */
}
};
/* allocate ReduceAction138 */
val* NEW_nit__parser__ReduceAction138(const struct type* type) {
val* self /* : ReduceAction138 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction138;
return self;
}
/* runtime class nit__parser__ReduceAction139 */
const struct class class_nit__parser__ReduceAction139 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction139:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction139:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction139:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction139:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction139:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction139:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction139:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction139:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction139:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction139:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction139:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction139:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction139:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction139:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction139___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction139:parser#ReduceAction139#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction139:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction139:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction139:kernel#Object#init */
}
};
/* allocate ReduceAction139 */
val* NEW_nit__parser__ReduceAction139(const struct type* type) {
val* self /* : ReduceAction139 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction139;
return self;
}
/* runtime class nit__parser__ReduceAction140 */
const struct class class_nit__parser__ReduceAction140 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction140:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction140:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction140:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction140:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction140:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction140:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction140:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction140:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction140:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction140:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction140:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction140:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction140:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction140:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction140___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction140:parser#ReduceAction140#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction140:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction140:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction140:kernel#Object#init */
}
};
/* allocate ReduceAction140 */
val* NEW_nit__parser__ReduceAction140(const struct type* type) {
val* self /* : ReduceAction140 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction140;
return self;
}
/* runtime class nit__parser__ReduceAction141 */
const struct class class_nit__parser__ReduceAction141 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction141:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction141:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction141:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction141:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction141:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction141:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction141:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction141:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction141:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction141:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction141:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction141:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction141:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction141:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction141___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction141:parser#ReduceAction141#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction141:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction141:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction141:kernel#Object#init */
}
};
/* allocate ReduceAction141 */
val* NEW_nit__parser__ReduceAction141(const struct type* type) {
val* self /* : ReduceAction141 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction141;
return self;
}
/* runtime class nit__parser__ReduceAction143 */
const struct class class_nit__parser__ReduceAction143 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction143:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction143:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction143:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction143:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction143:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction143:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction143:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction143:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction143:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction143:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction143:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction143:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction143:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction143:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction143___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction143:parser#ReduceAction143#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction143:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction143:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction143:kernel#Object#init */
}
};
/* allocate ReduceAction143 */
val* NEW_nit__parser__ReduceAction143(const struct type* type) {
val* self /* : ReduceAction143 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction143;
return self;
}
/* runtime class nit__parser__ReduceAction144 */
const struct class class_nit__parser__ReduceAction144 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction144:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction144:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction144:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction144:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction144:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction144:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction144:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction144:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction144:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction144:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction144:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction144:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction144:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction144:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction144___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction144:parser#ReduceAction144#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction144:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction144:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction144:kernel#Object#init */
}
};
/* allocate ReduceAction144 */
val* NEW_nit__parser__ReduceAction144(const struct type* type) {
val* self /* : ReduceAction144 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction144;
return self;
}
/* runtime class nit__parser__ReduceAction145 */
const struct class class_nit__parser__ReduceAction145 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction145:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction145:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction145:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction145:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction145:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction145:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction145:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction145:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction145:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction145:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction145:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction145:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction145:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction145:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction145___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction145:parser#ReduceAction145#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction145:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction145:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction145:kernel#Object#init */
}
};
/* allocate ReduceAction145 */
val* NEW_nit__parser__ReduceAction145(const struct type* type) {
val* self /* : ReduceAction145 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction145;
return self;
}
/* runtime class nit__parser__ReduceAction146 */
const struct class class_nit__parser__ReduceAction146 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction146:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction146:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction146:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction146:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction146:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction146:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction146:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction146:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction146:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction146:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction146:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction146:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction146:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction146:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction146___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction146:parser#ReduceAction146#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction146:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction146:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction146:kernel#Object#init */
}
};
/* allocate ReduceAction146 */
val* NEW_nit__parser__ReduceAction146(const struct type* type) {
val* self /* : ReduceAction146 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction146;
return self;
}
/* runtime class nit__parser__ReduceAction147 */
const struct class class_nit__parser__ReduceAction147 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction147:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction147:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction147:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction147:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction147:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction147:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction147:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction147:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction147:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction147:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction147:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction147:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction147:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction147:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction147___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction147:parser#ReduceAction147#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction147:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction147:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction147:kernel#Object#init */
}
};
/* allocate ReduceAction147 */
val* NEW_nit__parser__ReduceAction147(const struct type* type) {
val* self /* : ReduceAction147 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction147;
return self;
}
/* runtime class nit__parser__ReduceAction148 */
const struct class class_nit__parser__ReduceAction148 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction148:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction148:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction148:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction148:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction148:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction148:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction148:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction148:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction148:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction148:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction148:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction148:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction148:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction148:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction148___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction148:parser#ReduceAction148#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction148:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction148:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction148:kernel#Object#init */
}
};
/* allocate ReduceAction148 */
val* NEW_nit__parser__ReduceAction148(const struct type* type) {
val* self /* : ReduceAction148 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction148;
return self;
}
/* runtime class nit__parser__ReduceAction149 */
const struct class class_nit__parser__ReduceAction149 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction149:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction149:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction149:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction149:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction149:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction149:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction149:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction149:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction149:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction149:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction149:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction149:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction149:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction149:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction149___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction149:parser#ReduceAction149#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction149:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction149:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction149:kernel#Object#init */
}
};
/* allocate ReduceAction149 */
val* NEW_nit__parser__ReduceAction149(const struct type* type) {
val* self /* : ReduceAction149 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction149;
return self;
}
/* runtime class nit__parser__ReduceAction150 */
const struct class class_nit__parser__ReduceAction150 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction150:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction150:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction150:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction150:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction150:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction150:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction150:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction150:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction150:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction150:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction150:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction150:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction150:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction150:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction150___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction150:parser#ReduceAction150#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction150:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction150:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction150:kernel#Object#init */
}
};
/* allocate ReduceAction150 */
val* NEW_nit__parser__ReduceAction150(const struct type* type) {
val* self /* : ReduceAction150 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction150;
return self;
}
/* runtime class nit__parser__ReduceAction154 */
const struct class class_nit__parser__ReduceAction154 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction154:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction154:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction154:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction154:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction154:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction154:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction154:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction154:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction154:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction154:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction154:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction154:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction154:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction154:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction154___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction154:parser#ReduceAction154#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction154:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction154:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction154:kernel#Object#init */
}
};
/* allocate ReduceAction154 */
val* NEW_nit__parser__ReduceAction154(const struct type* type) {
val* self /* : ReduceAction154 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction154;
return self;
}
/* runtime class nit__parser__ReduceAction155 */
const struct class class_nit__parser__ReduceAction155 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction155:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction155:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction155:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction155:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction155:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction155:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction155:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction155:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction155:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction155:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction155:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction155:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction155:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction155:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction155___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction155:parser#ReduceAction155#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction155:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction155:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction155:kernel#Object#init */
}
};
/* allocate ReduceAction155 */
val* NEW_nit__parser__ReduceAction155(const struct type* type) {
val* self /* : ReduceAction155 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction155;
return self;
}
/* runtime class nit__parser__ReduceAction156 */
const struct class class_nit__parser__ReduceAction156 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction156:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction156:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction156:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction156:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction156:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction156:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction156:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction156:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction156:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction156:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction156:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction156:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction156:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction156:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction156___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction156:parser#ReduceAction156#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction156:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction156:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction156:kernel#Object#init */
}
};
/* allocate ReduceAction156 */
val* NEW_nit__parser__ReduceAction156(const struct type* type) {
val* self /* : ReduceAction156 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction156;
return self;
}
/* runtime class nit__parser__ReduceAction157 */
const struct class class_nit__parser__ReduceAction157 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction157:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction157:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction157:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction157:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction157:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction157:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction157:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction157:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction157:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction157:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction157:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction157:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction157:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction157:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction157___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction157:parser#ReduceAction157#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction157:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction157:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction157:kernel#Object#init */
}
};
/* allocate ReduceAction157 */
val* NEW_nit__parser__ReduceAction157(const struct type* type) {
val* self /* : ReduceAction157 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction157;
return self;
}
/* runtime class nit__parser__ReduceAction158 */
const struct class class_nit__parser__ReduceAction158 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction158:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction158:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction158:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction158:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction158:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction158:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction158:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction158:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction158:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction158:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction158:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction158:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction158:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction158:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction158___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction158:parser#ReduceAction158#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction158:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction158:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction158:kernel#Object#init */
}
};
/* allocate ReduceAction158 */
val* NEW_nit__parser__ReduceAction158(const struct type* type) {
val* self /* : ReduceAction158 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction158;
return self;
}
/* runtime class nit__parser__ReduceAction159 */
const struct class class_nit__parser__ReduceAction159 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction159:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction159:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction159:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction159:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction159:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction159:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction159:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction159:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction159:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction159:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction159:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction159:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction159:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction159:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction159___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction159:parser#ReduceAction159#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction159:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction159:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction159:kernel#Object#init */
}
};
/* allocate ReduceAction159 */
val* NEW_nit__parser__ReduceAction159(const struct type* type) {
val* self /* : ReduceAction159 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction159;
return self;
}
/* runtime class nit__parser__ReduceAction160 */
const struct class class_nit__parser__ReduceAction160 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction160:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction160:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction160:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction160:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction160:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction160:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction160:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction160:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction160:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction160:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction160:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction160:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction160:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction160:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction160___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction160:parser#ReduceAction160#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction160:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction160:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction160:kernel#Object#init */
}
};
/* allocate ReduceAction160 */
val* NEW_nit__parser__ReduceAction160(const struct type* type) {
val* self /* : ReduceAction160 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction160;
return self;
}
/* runtime class nit__parser__ReduceAction161 */
const struct class class_nit__parser__ReduceAction161 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction161:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction161:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction161:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction161:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction161:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction161:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction161:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction161:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction161:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction161:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction161:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction161:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction161:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction161:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction161___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction161:parser#ReduceAction161#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction161:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction161:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction161:kernel#Object#init */
}
};
/* allocate ReduceAction161 */
val* NEW_nit__parser__ReduceAction161(const struct type* type) {
val* self /* : ReduceAction161 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction161;
return self;
}
/* runtime class nit__parser__ReduceAction162 */
const struct class class_nit__parser__ReduceAction162 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction162:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction162:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction162:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction162:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction162:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction162:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction162:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction162:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction162:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction162:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction162:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction162:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction162:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction162:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction162___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction162:parser#ReduceAction162#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction162:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction162:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction162:kernel#Object#init */
}
};
/* allocate ReduceAction162 */
val* NEW_nit__parser__ReduceAction162(const struct type* type) {
val* self /* : ReduceAction162 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction162;
return self;
}
/* runtime class nit__parser__ReduceAction163 */
const struct class class_nit__parser__ReduceAction163 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction163:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction163:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction163:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction163:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction163:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction163:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction163:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction163:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction163:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction163:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction163:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction163:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction163:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction163:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction163___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction163:parser#ReduceAction163#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction163:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction163:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction163:kernel#Object#init */
}
};
/* allocate ReduceAction163 */
val* NEW_nit__parser__ReduceAction163(const struct type* type) {
val* self /* : ReduceAction163 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction163;
return self;
}
/* runtime class nit__parser__ReduceAction167 */
const struct class class_nit__parser__ReduceAction167 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction167:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction167:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction167:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction167:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction167:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction167:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction167:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction167:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction167:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction167:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction167:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction167:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction167:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction167:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction167___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction167:parser#ReduceAction167#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction167:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction167:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction167:kernel#Object#init */
}
};
/* allocate ReduceAction167 */
val* NEW_nit__parser__ReduceAction167(const struct type* type) {
val* self /* : ReduceAction167 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction167;
return self;
}
/* runtime class nit__parser__ReduceAction168 */
const struct class class_nit__parser__ReduceAction168 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction168:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction168:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction168:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction168:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction168:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction168:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction168:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction168:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction168:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction168:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction168:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction168:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction168:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction168:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction168___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction168:parser#ReduceAction168#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction168:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction168:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction168:kernel#Object#init */
}
};
/* allocate ReduceAction168 */
val* NEW_nit__parser__ReduceAction168(const struct type* type) {
val* self /* : ReduceAction168 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction168;
return self;
}
/* runtime class nit__parser__ReduceAction169 */
const struct class class_nit__parser__ReduceAction169 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction169:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction169:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction169:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction169:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction169:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction169:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction169:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction169:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction169:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction169:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction169:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction169:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction169:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction169:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction169___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction169:parser#ReduceAction169#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction169:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction169:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction169:kernel#Object#init */
}
};
/* allocate ReduceAction169 */
val* NEW_nit__parser__ReduceAction169(const struct type* type) {
val* self /* : ReduceAction169 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction169;
return self;
}
/* runtime class nit__parser__ReduceAction170 */
const struct class class_nit__parser__ReduceAction170 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction170:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction170:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction170:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction170:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction170:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction170:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction170:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction170:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction170:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction170:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction170:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction170:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction170:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction170:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction170___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction170:parser#ReduceAction170#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction170:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction170:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction170:kernel#Object#init */
}
};
/* allocate ReduceAction170 */
val* NEW_nit__parser__ReduceAction170(const struct type* type) {
val* self /* : ReduceAction170 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction170;
return self;
}
/* runtime class nit__parser__ReduceAction171 */
const struct class class_nit__parser__ReduceAction171 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction171:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction171:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction171:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction171:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction171:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction171:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction171:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction171:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction171:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction171:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction171:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction171:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction171:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction171:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction171___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction171:parser#ReduceAction171#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction171:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction171:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction171:kernel#Object#init */
}
};
/* allocate ReduceAction171 */
val* NEW_nit__parser__ReduceAction171(const struct type* type) {
val* self /* : ReduceAction171 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction171;
return self;
}
/* runtime class nit__parser__ReduceAction172 */
const struct class class_nit__parser__ReduceAction172 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction172:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction172:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction172:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction172:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction172:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction172:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction172:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction172:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction172:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction172:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction172:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction172:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction172:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction172:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction172___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction172:parser#ReduceAction172#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction172:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction172:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction172:kernel#Object#init */
}
};
/* allocate ReduceAction172 */
val* NEW_nit__parser__ReduceAction172(const struct type* type) {
val* self /* : ReduceAction172 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction172;
return self;
}
/* runtime class nit__parser__ReduceAction173 */
const struct class class_nit__parser__ReduceAction173 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction173:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction173:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction173:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction173:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction173:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction173:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction173:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction173:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction173:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction173:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction173:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction173:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction173:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction173:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction173___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction173:parser#ReduceAction173#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction173:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction173:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction173:kernel#Object#init */
}
};
/* allocate ReduceAction173 */
val* NEW_nit__parser__ReduceAction173(const struct type* type) {
val* self /* : ReduceAction173 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction173;
return self;
}
/* runtime class nit__parser__ReduceAction181 */
const struct class class_nit__parser__ReduceAction181 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction181:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction181:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction181:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction181:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction181:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction181:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction181:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction181:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction181:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction181:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction181:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction181:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction181:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction181:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction181___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction181:parser#ReduceAction181#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction181:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction181:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction181:kernel#Object#init */
}
};
/* allocate ReduceAction181 */
val* NEW_nit__parser__ReduceAction181(const struct type* type) {
val* self /* : ReduceAction181 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction181;
return self;
}
/* runtime class nit__parser__ReduceAction182 */
const struct class class_nit__parser__ReduceAction182 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction182:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction182:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction182:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction182:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction182:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction182:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction182:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction182:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction182:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction182:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction182:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction182:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction182:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction182:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction182___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction182:parser#ReduceAction182#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction182:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction182:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction182:kernel#Object#init */
}
};
/* allocate ReduceAction182 */
val* NEW_nit__parser__ReduceAction182(const struct type* type) {
val* self /* : ReduceAction182 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction182;
return self;
}
/* runtime class nit__parser__ReduceAction183 */
const struct class class_nit__parser__ReduceAction183 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction183:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction183:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction183:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction183:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction183:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction183:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction183:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction183:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction183:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction183:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction183:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction183:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction183:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction183:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction183___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction183:parser#ReduceAction183#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction183:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction183:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction183:kernel#Object#init */
}
};
/* allocate ReduceAction183 */
val* NEW_nit__parser__ReduceAction183(const struct type* type) {
val* self /* : ReduceAction183 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction183;
return self;
}
/* runtime class nit__parser__ReduceAction185 */
const struct class class_nit__parser__ReduceAction185 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction185:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction185:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction185:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction185:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction185:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction185:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction185:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction185:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction185:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction185:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction185:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction185:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction185:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction185:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction185___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction185:parser#ReduceAction185#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction185:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction185:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction185:kernel#Object#init */
}
};
/* allocate ReduceAction185 */
val* NEW_nit__parser__ReduceAction185(const struct type* type) {
val* self /* : ReduceAction185 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction185;
return self;
}
/* runtime class nit__parser__ReduceAction186 */
const struct class class_nit__parser__ReduceAction186 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction186:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction186:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction186:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction186:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction186:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction186:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction186:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction186:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction186:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction186:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction186:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction186:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction186:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction186:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction186___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction186:parser#ReduceAction186#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction186:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction186:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction186:kernel#Object#init */
}
};
/* allocate ReduceAction186 */
val* NEW_nit__parser__ReduceAction186(const struct type* type) {
val* self /* : ReduceAction186 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction186;
return self;
}
/* runtime class nit__parser__ReduceAction187 */
const struct class class_nit__parser__ReduceAction187 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction187:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction187:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction187:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction187:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction187:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction187:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction187:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction187:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction187:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction187:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction187:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction187:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction187:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction187:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction187___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction187:parser#ReduceAction187#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction187:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction187:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction187:kernel#Object#init */
}
};
/* allocate ReduceAction187 */
val* NEW_nit__parser__ReduceAction187(const struct type* type) {
val* self /* : ReduceAction187 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction187;
return self;
}
/* runtime class nit__parser__ReduceAction189 */
const struct class class_nit__parser__ReduceAction189 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction189:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction189:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction189:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction189:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction189:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction189:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction189:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction189:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction189:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction189:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction189:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction189:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction189:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction189:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction189___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction189:parser#ReduceAction189#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction189:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction189:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction189:kernel#Object#init */
}
};
/* allocate ReduceAction189 */
val* NEW_nit__parser__ReduceAction189(const struct type* type) {
val* self /* : ReduceAction189 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction189;
return self;
}
/* runtime class nit__parser__ReduceAction190 */
const struct class class_nit__parser__ReduceAction190 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction190:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction190:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction190:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction190:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction190:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction190:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction190:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction190:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction190:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction190:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction190:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction190:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction190:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction190:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction190___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction190:parser#ReduceAction190#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction190:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction190:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction190:kernel#Object#init */
}
};
/* allocate ReduceAction190 */
val* NEW_nit__parser__ReduceAction190(const struct type* type) {
val* self /* : ReduceAction190 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction190;
return self;
}
/* runtime class nit__parser__ReduceAction191 */
const struct class class_nit__parser__ReduceAction191 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction191:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction191:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction191:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction191:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction191:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction191:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction191:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction191:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction191:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction191:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction191:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction191:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction191:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction191:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction191___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction191:parser#ReduceAction191#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction191:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction191:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction191:kernel#Object#init */
}
};
/* allocate ReduceAction191 */
val* NEW_nit__parser__ReduceAction191(const struct type* type) {
val* self /* : ReduceAction191 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction191;
return self;
}
/* runtime class nit__parser__ReduceAction192 */
const struct class class_nit__parser__ReduceAction192 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction192:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction192:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction192:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction192:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction192:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction192:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction192:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction192:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction192:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction192:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction192:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction192:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction192:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction192:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction192___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction192:parser#ReduceAction192#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction192:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction192:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction192:kernel#Object#init */
}
};
/* allocate ReduceAction192 */
val* NEW_nit__parser__ReduceAction192(const struct type* type) {
val* self /* : ReduceAction192 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction192;
return self;
}
/* runtime class nit__parser__ReduceAction193 */
const struct class class_nit__parser__ReduceAction193 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction193:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction193:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction193:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction193:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction193:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction193:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction193:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction193:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction193:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction193:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction193:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction193:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction193:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction193:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction193___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction193:parser#ReduceAction193#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction193:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction193:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction193:kernel#Object#init */
}
};
/* allocate ReduceAction193 */
val* NEW_nit__parser__ReduceAction193(const struct type* type) {
val* self /* : ReduceAction193 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction193;
return self;
}
/* runtime class nit__parser__ReduceAction195 */
const struct class class_nit__parser__ReduceAction195 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction195:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction195:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction195:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction195:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction195:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction195:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction195:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction195:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction195:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction195:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction195:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction195:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction195:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction195:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction195___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction195:parser#ReduceAction195#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction195:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction195:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction195:kernel#Object#init */
}
};
/* allocate ReduceAction195 */
val* NEW_nit__parser__ReduceAction195(const struct type* type) {
val* self /* : ReduceAction195 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction195;
return self;
}
/* runtime class nit__parser__ReduceAction196 */
const struct class class_nit__parser__ReduceAction196 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction196:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction196:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction196:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction196:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction196:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction196:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction196:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction196:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction196:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction196:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction196:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction196:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction196:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction196:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction196___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction196:parser#ReduceAction196#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction196:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction196:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction196:kernel#Object#init */
}
};
/* allocate ReduceAction196 */
val* NEW_nit__parser__ReduceAction196(const struct type* type) {
val* self /* : ReduceAction196 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction196;
return self;
}
/* runtime class nit__parser__ReduceAction198 */
const struct class class_nit__parser__ReduceAction198 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction198:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction198:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction198:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction198:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction198:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction198:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction198:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction198:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction198:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction198:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction198:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction198:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction198:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction198:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction198___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction198:parser#ReduceAction198#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction198:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction198:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction198:kernel#Object#init */
}
};
/* allocate ReduceAction198 */
val* NEW_nit__parser__ReduceAction198(const struct type* type) {
val* self /* : ReduceAction198 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction198;
return self;
}
/* runtime class nit__parser__ReduceAction199 */
const struct class class_nit__parser__ReduceAction199 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction199:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction199:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction199:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction199:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction199:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction199:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction199:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction199:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction199:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction199:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction199:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction199:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction199:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction199:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction199___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction199:parser#ReduceAction199#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction199:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction199:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction199:kernel#Object#init */
}
};
/* allocate ReduceAction199 */
val* NEW_nit__parser__ReduceAction199(const struct type* type) {
val* self /* : ReduceAction199 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction199;
return self;
}
/* runtime class nit__parser__ReduceAction200 */
const struct class class_nit__parser__ReduceAction200 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction200:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction200:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction200:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction200:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction200:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction200:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction200:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction200:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction200:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction200:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction200:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction200:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction200:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction200:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction200___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction200:parser#ReduceAction200#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction200:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction200:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction200:kernel#Object#init */
}
};
/* allocate ReduceAction200 */
val* NEW_nit__parser__ReduceAction200(const struct type* type) {
val* self /* : ReduceAction200 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction200;
return self;
}
/* runtime class nit__parser__ReduceAction201 */
const struct class class_nit__parser__ReduceAction201 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction201:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction201:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction201:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction201:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction201:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction201:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction201:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction201:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction201:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction201:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction201:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction201:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction201:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction201:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction201___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction201:parser#ReduceAction201#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction201:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction201:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction201:kernel#Object#init */
}
};
/* allocate ReduceAction201 */
val* NEW_nit__parser__ReduceAction201(const struct type* type) {
val* self /* : ReduceAction201 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction201;
return self;
}
/* runtime class nit__parser__ReduceAction202 */
const struct class class_nit__parser__ReduceAction202 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction202:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction202:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction202:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction202:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction202:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction202:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction202:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction202:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction202:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction202:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction202:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction202:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction202:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction202:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction202___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction202:parser#ReduceAction202#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction202:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction202:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction202:kernel#Object#init */
}
};
/* allocate ReduceAction202 */
val* NEW_nit__parser__ReduceAction202(const struct type* type) {
val* self /* : ReduceAction202 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction202;
return self;
}
/* runtime class nit__parser__ReduceAction203 */
const struct class class_nit__parser__ReduceAction203 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction203:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction203:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction203:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction203:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction203:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction203:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction203:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction203:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction203:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction203:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction203:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction203:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction203:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction203:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction203___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction203:parser#ReduceAction203#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction203:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction203:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction203:kernel#Object#init */
}
};
/* allocate ReduceAction203 */
val* NEW_nit__parser__ReduceAction203(const struct type* type) {
val* self /* : ReduceAction203 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction203;
return self;
}
/* runtime class nit__parser__ReduceAction204 */
const struct class class_nit__parser__ReduceAction204 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction204:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction204:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction204:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction204:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction204:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction204:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction204:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction204:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction204:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction204:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction204:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction204:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction204:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction204:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction204___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction204:parser#ReduceAction204#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction204:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction204:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction204:kernel#Object#init */
}
};
/* allocate ReduceAction204 */
val* NEW_nit__parser__ReduceAction204(const struct type* type) {
val* self /* : ReduceAction204 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction204;
return self;
}
/* runtime class nit__parser__ReduceAction205 */
const struct class class_nit__parser__ReduceAction205 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction205:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction205:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction205:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction205:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction205:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction205:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction205:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction205:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction205:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction205:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction205:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction205:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction205:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction205:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction205___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction205:parser#ReduceAction205#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction205:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction205:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction205:kernel#Object#init */
}
};
/* allocate ReduceAction205 */
val* NEW_nit__parser__ReduceAction205(const struct type* type) {
val* self /* : ReduceAction205 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction205;
return self;
}
/* runtime class nit__parser__ReduceAction206 */
const struct class class_nit__parser__ReduceAction206 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction206:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction206:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction206:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction206:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction206:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction206:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction206:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction206:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction206:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction206:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction206:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction206:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction206:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction206:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction206___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction206:parser#ReduceAction206#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction206:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction206:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction206:kernel#Object#init */
}
};
/* allocate ReduceAction206 */
val* NEW_nit__parser__ReduceAction206(const struct type* type) {
val* self /* : ReduceAction206 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction206;
return self;
}
/* runtime class nit__parser__ReduceAction207 */
const struct class class_nit__parser__ReduceAction207 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction207:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction207:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction207:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction207:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction207:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction207:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction207:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction207:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction207:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction207:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction207:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction207:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction207:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction207:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction207___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction207:parser#ReduceAction207#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction207:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction207:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction207:kernel#Object#init */
}
};
/* allocate ReduceAction207 */
val* NEW_nit__parser__ReduceAction207(const struct type* type) {
val* self /* : ReduceAction207 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction207;
return self;
}
/* runtime class nit__parser__ReduceAction208 */
const struct class class_nit__parser__ReduceAction208 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction208:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction208:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction208:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction208:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction208:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction208:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction208:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction208:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction208:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction208:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction208:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction208:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction208:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction208:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction208___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction208:parser#ReduceAction208#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction208:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction208:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction208:kernel#Object#init */
}
};
/* allocate ReduceAction208 */
val* NEW_nit__parser__ReduceAction208(const struct type* type) {
val* self /* : ReduceAction208 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction208;
return self;
}
/* runtime class nit__parser__ReduceAction209 */
const struct class class_nit__parser__ReduceAction209 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction209:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction209:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction209:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction209:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction209:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction209:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction209:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction209:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction209:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction209:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction209:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction209:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction209:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction209:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction209___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction209:parser#ReduceAction209#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction209:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction209:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction209:kernel#Object#init */
}
};
/* allocate ReduceAction209 */
val* NEW_nit__parser__ReduceAction209(const struct type* type) {
val* self /* : ReduceAction209 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction209;
return self;
}
/* runtime class nit__parser__ReduceAction210 */
const struct class class_nit__parser__ReduceAction210 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction210:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction210:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction210:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction210:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction210:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction210:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction210:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction210:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction210:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction210:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction210:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction210:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction210:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction210:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction210___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction210:parser#ReduceAction210#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction210:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction210:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction210:kernel#Object#init */
}
};
/* allocate ReduceAction210 */
val* NEW_nit__parser__ReduceAction210(const struct type* type) {
val* self /* : ReduceAction210 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction210;
return self;
}
/* runtime class nit__parser__ReduceAction211 */
const struct class class_nit__parser__ReduceAction211 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction211:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction211:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction211:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction211:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction211:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction211:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction211:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction211:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction211:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction211:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction211:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction211:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction211:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction211:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction211___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction211:parser#ReduceAction211#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction211:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction211:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction211:kernel#Object#init */
}
};
/* allocate ReduceAction211 */
val* NEW_nit__parser__ReduceAction211(const struct type* type) {
val* self /* : ReduceAction211 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction211;
return self;
}
/* runtime class nit__parser__ReduceAction212 */
const struct class class_nit__parser__ReduceAction212 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction212:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction212:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction212:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction212:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction212:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction212:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction212:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction212:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction212:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction212:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction212:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction212:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction212:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction212:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction212___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction212:parser#ReduceAction212#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction212:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction212:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction212:kernel#Object#init */
}
};
/* allocate ReduceAction212 */
val* NEW_nit__parser__ReduceAction212(const struct type* type) {
val* self /* : ReduceAction212 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction212;
return self;
}
/* runtime class nit__parser__ReduceAction215 */
const struct class class_nit__parser__ReduceAction215 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction215:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction215:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction215:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction215:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction215:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction215:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction215:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction215:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction215:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction215:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction215:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction215:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction215:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction215:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction215___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction215:parser#ReduceAction215#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction215:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction215:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction215:kernel#Object#init */
}
};
/* allocate ReduceAction215 */
val* NEW_nit__parser__ReduceAction215(const struct type* type) {
val* self /* : ReduceAction215 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction215;
return self;
}
/* runtime class nit__parser__ReduceAction216 */
const struct class class_nit__parser__ReduceAction216 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction216:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction216:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction216:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction216:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction216:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction216:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction216:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction216:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction216:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction216:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction216:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction216:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction216:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction216:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction216___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction216:parser#ReduceAction216#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction216:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction216:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction216:kernel#Object#init */
}
};
/* allocate ReduceAction216 */
val* NEW_nit__parser__ReduceAction216(const struct type* type) {
val* self /* : ReduceAction216 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction216;
return self;
}
/* runtime class nit__parser__ReduceAction217 */
const struct class class_nit__parser__ReduceAction217 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction217:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction217:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction217:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction217:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction217:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction217:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction217:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction217:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction217:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction217:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction217:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction217:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction217:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction217:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction217___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction217:parser#ReduceAction217#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction217:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction217:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction217:kernel#Object#init */
}
};
/* allocate ReduceAction217 */
val* NEW_nit__parser__ReduceAction217(const struct type* type) {
val* self /* : ReduceAction217 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction217;
return self;
}
/* runtime class nit__parser__ReduceAction218 */
const struct class class_nit__parser__ReduceAction218 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction218:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction218:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction218:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction218:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction218:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction218:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction218:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction218:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction218:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction218:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction218:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction218:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction218:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction218:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction218___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction218:parser#ReduceAction218#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction218:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction218:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction218:kernel#Object#init */
}
};
/* allocate ReduceAction218 */
val* NEW_nit__parser__ReduceAction218(const struct type* type) {
val* self /* : ReduceAction218 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction218;
return self;
}
/* runtime class nit__parser__ReduceAction219 */
const struct class class_nit__parser__ReduceAction219 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction219:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction219:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction219:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction219:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction219:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction219:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction219:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction219:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction219:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction219:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction219:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction219:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction219:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction219:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction219___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction219:parser#ReduceAction219#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction219:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction219:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction219:kernel#Object#init */
}
};
/* allocate ReduceAction219 */
val* NEW_nit__parser__ReduceAction219(const struct type* type) {
val* self /* : ReduceAction219 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction219;
return self;
}
/* runtime class nit__parser__ReduceAction220 */
const struct class class_nit__parser__ReduceAction220 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction220:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction220:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction220:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction220:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction220:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction220:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction220:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction220:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction220:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction220:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction220:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction220:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction220:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction220:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction220___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction220:parser#ReduceAction220#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction220:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction220:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction220:kernel#Object#init */
}
};
/* allocate ReduceAction220 */
val* NEW_nit__parser__ReduceAction220(const struct type* type) {
val* self /* : ReduceAction220 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction220;
return self;
}
/* runtime class nit__parser__ReduceAction223 */
const struct class class_nit__parser__ReduceAction223 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction223:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction223:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction223:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction223:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction223:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction223:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction223:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction223:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction223:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction223:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction223:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction223:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction223:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction223:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction223___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction223:parser#ReduceAction223#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction223:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction223:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction223:kernel#Object#init */
}
};
/* allocate ReduceAction223 */
val* NEW_nit__parser__ReduceAction223(const struct type* type) {
val* self /* : ReduceAction223 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction223;
return self;
}
/* runtime class nit__parser__ReduceAction224 */
const struct class class_nit__parser__ReduceAction224 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction224:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction224:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction224:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction224:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction224:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction224:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction224:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction224:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction224:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction224:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction224:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction224:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction224:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction224:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction224___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction224:parser#ReduceAction224#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction224:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction224:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction224:kernel#Object#init */
}
};
/* allocate ReduceAction224 */
val* NEW_nit__parser__ReduceAction224(const struct type* type) {
val* self /* : ReduceAction224 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction224;
return self;
}
/* runtime class nit__parser__ReduceAction225 */
const struct class class_nit__parser__ReduceAction225 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction225:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction225:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction225:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction225:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction225:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction225:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction225:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction225:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction225:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction225:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction225:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction225:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction225:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction225:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction225___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction225:parser#ReduceAction225#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction225:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction225:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction225:kernel#Object#init */
}
};
/* allocate ReduceAction225 */
val* NEW_nit__parser__ReduceAction225(const struct type* type) {
val* self /* : ReduceAction225 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction225;
return self;
}
/* runtime class nit__parser__ReduceAction226 */
const struct class class_nit__parser__ReduceAction226 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction226:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction226:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction226:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction226:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction226:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction226:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction226:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction226:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction226:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction226:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction226:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction226:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction226:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction226:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction226___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction226:parser#ReduceAction226#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction226:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction226:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction226:kernel#Object#init */
}
};
/* allocate ReduceAction226 */
val* NEW_nit__parser__ReduceAction226(const struct type* type) {
val* self /* : ReduceAction226 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction226;
return self;
}
/* runtime class nit__parser__ReduceAction227 */
const struct class class_nit__parser__ReduceAction227 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction227:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction227:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction227:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction227:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction227:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction227:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction227:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction227:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction227:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction227:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction227:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction227:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction227:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction227:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction227___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction227:parser#ReduceAction227#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction227:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction227:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction227:kernel#Object#init */
}
};
/* allocate ReduceAction227 */
val* NEW_nit__parser__ReduceAction227(const struct type* type) {
val* self /* : ReduceAction227 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction227;
return self;
}
/* runtime class nit__parser__ReduceAction228 */
const struct class class_nit__parser__ReduceAction228 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction228:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction228:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction228:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction228:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction228:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction228:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction228:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction228:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction228:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction228:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction228:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction228:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction228:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction228:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction228___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction228:parser#ReduceAction228#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction228:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction228:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction228:kernel#Object#init */
}
};
/* allocate ReduceAction228 */
val* NEW_nit__parser__ReduceAction228(const struct type* type) {
val* self /* : ReduceAction228 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction228;
return self;
}
/* runtime class nit__parser__ReduceAction229 */
const struct class class_nit__parser__ReduceAction229 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction229:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction229:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction229:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction229:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction229:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction229:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction229:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction229:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction229:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction229:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction229:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction229:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction229:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction229:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction229___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction229:parser#ReduceAction229#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction229:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction229:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction229:kernel#Object#init */
}
};
/* allocate ReduceAction229 */
val* NEW_nit__parser__ReduceAction229(const struct type* type) {
val* self /* : ReduceAction229 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction229;
return self;
}
/* runtime class nit__parser__ReduceAction230 */
const struct class class_nit__parser__ReduceAction230 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction230:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction230:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction230:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction230:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction230:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction230:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction230:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction230:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction230:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction230:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction230:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction230:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction230:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction230:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction230___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction230:parser#ReduceAction230#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction230:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction230:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction230:kernel#Object#init */
}
};
/* allocate ReduceAction230 */
val* NEW_nit__parser__ReduceAction230(const struct type* type) {
val* self /* : ReduceAction230 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction230;
return self;
}
/* runtime class nit__parser__ReduceAction231 */
const struct class class_nit__parser__ReduceAction231 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction231:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction231:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction231:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction231:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction231:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction231:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction231:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction231:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction231:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction231:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction231:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction231:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction231:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction231:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction231___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction231:parser#ReduceAction231#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction231:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction231:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction231:kernel#Object#init */
}
};
/* allocate ReduceAction231 */
val* NEW_nit__parser__ReduceAction231(const struct type* type) {
val* self /* : ReduceAction231 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction231;
return self;
}
/* runtime class nit__parser__ReduceAction234 */
const struct class class_nit__parser__ReduceAction234 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction234:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction234:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction234:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction234:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction234:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction234:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction234:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction234:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction234:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction234:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction234:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction234:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction234:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction234:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction234___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction234:parser#ReduceAction234#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction234:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction234:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction234:kernel#Object#init */
}
};
/* allocate ReduceAction234 */
val* NEW_nit__parser__ReduceAction234(const struct type* type) {
val* self /* : ReduceAction234 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction234;
return self;
}
/* runtime class nit__parser__ReduceAction235 */
const struct class class_nit__parser__ReduceAction235 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction235:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction235:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction235:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction235:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction235:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction235:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction235:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction235:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction235:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction235:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction235:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction235:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction235:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction235:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction235___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction235:parser#ReduceAction235#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction235:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction235:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction235:kernel#Object#init */
}
};
/* allocate ReduceAction235 */
val* NEW_nit__parser__ReduceAction235(const struct type* type) {
val* self /* : ReduceAction235 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction235;
return self;
}
/* runtime class nit__parser__ReduceAction236 */
const struct class class_nit__parser__ReduceAction236 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction236:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction236:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction236:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction236:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction236:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction236:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction236:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction236:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction236:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction236:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction236:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction236:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction236:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction236:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction236___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction236:parser#ReduceAction236#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction236:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction236:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction236:kernel#Object#init */
}
};
/* allocate ReduceAction236 */
val* NEW_nit__parser__ReduceAction236(const struct type* type) {
val* self /* : ReduceAction236 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction236;
return self;
}
/* runtime class nit__parser__ReduceAction237 */
const struct class class_nit__parser__ReduceAction237 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction237:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction237:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction237:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction237:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction237:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction237:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction237:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction237:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction237:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction237:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction237:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction237:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction237:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction237:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction237___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction237:parser#ReduceAction237#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction237:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction237:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction237:kernel#Object#init */
}
};
/* allocate ReduceAction237 */
val* NEW_nit__parser__ReduceAction237(const struct type* type) {
val* self /* : ReduceAction237 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction237;
return self;
}
/* runtime class nit__parser__ReduceAction238 */
const struct class class_nit__parser__ReduceAction238 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction238:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction238:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction238:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction238:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction238:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction238:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction238:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction238:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction238:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction238:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction238:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction238:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction238:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction238:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction238___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction238:parser#ReduceAction238#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction238:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction238:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction238:kernel#Object#init */
}
};
/* allocate ReduceAction238 */
val* NEW_nit__parser__ReduceAction238(const struct type* type) {
val* self /* : ReduceAction238 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction238;
return self;
}
/* runtime class nit__parser__ReduceAction239 */
const struct class class_nit__parser__ReduceAction239 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction239:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction239:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction239:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction239:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction239:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction239:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction239:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction239:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction239:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction239:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction239:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction239:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction239:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction239:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction239___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction239:parser#ReduceAction239#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction239:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction239:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction239:kernel#Object#init */
}
};
/* allocate ReduceAction239 */
val* NEW_nit__parser__ReduceAction239(const struct type* type) {
val* self /* : ReduceAction239 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction239;
return self;
}
/* runtime class nit__parser__ReduceAction242 */
const struct class class_nit__parser__ReduceAction242 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction242:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction242:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction242:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction242:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction242:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction242:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction242:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction242:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction242:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction242:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction242:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction242:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction242:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction242:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction242___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction242:parser#ReduceAction242#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction242:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction242:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction242:kernel#Object#init */
}
};
/* allocate ReduceAction242 */
val* NEW_nit__parser__ReduceAction242(const struct type* type) {
val* self /* : ReduceAction242 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction242;
return self;
}
/* runtime class nit__parser__ReduceAction243 */
const struct class class_nit__parser__ReduceAction243 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction243:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction243:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction243:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction243:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction243:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction243:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction243:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction243:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction243:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction243:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction243:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction243:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction243:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction243:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction243___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction243:parser#ReduceAction243#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction243:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction243:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction243:kernel#Object#init */
}
};
/* allocate ReduceAction243 */
val* NEW_nit__parser__ReduceAction243(const struct type* type) {
val* self /* : ReduceAction243 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction243;
return self;
}
/* runtime class nit__parser__ReduceAction244 */
const struct class class_nit__parser__ReduceAction244 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction244:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction244:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction244:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction244:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction244:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction244:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction244:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction244:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction244:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction244:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction244:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction244:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction244:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction244:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction244___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction244:parser#ReduceAction244#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction244:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction244:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction244:kernel#Object#init */
}
};
/* allocate ReduceAction244 */
val* NEW_nit__parser__ReduceAction244(const struct type* type) {
val* self /* : ReduceAction244 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction244;
return self;
}
/* runtime class nit__parser__ReduceAction245 */
const struct class class_nit__parser__ReduceAction245 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction245:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction245:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction245:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction245:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction245:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction245:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction245:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction245:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction245:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction245:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction245:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction245:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction245:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction245:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction245___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction245:parser#ReduceAction245#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction245:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction245:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction245:kernel#Object#init */
}
};
/* allocate ReduceAction245 */
val* NEW_nit__parser__ReduceAction245(const struct type* type) {
val* self /* : ReduceAction245 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction245;
return self;
}
/* runtime class nit__parser__ReduceAction246 */
const struct class class_nit__parser__ReduceAction246 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction246:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction246:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction246:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction246:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction246:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction246:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction246:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction246:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction246:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction246:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction246:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction246:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction246:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction246:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction246___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction246:parser#ReduceAction246#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction246:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction246:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction246:kernel#Object#init */
}
};
/* allocate ReduceAction246 */
val* NEW_nit__parser__ReduceAction246(const struct type* type) {
val* self /* : ReduceAction246 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction246;
return self;
}
/* runtime class nit__parser__ReduceAction247 */
const struct class class_nit__parser__ReduceAction247 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction247:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction247:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction247:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction247:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction247:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction247:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction247:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction247:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction247:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction247:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction247:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction247:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction247:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction247:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction247___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction247:parser#ReduceAction247#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction247:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction247:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction247:kernel#Object#init */
}
};
/* allocate ReduceAction247 */
val* NEW_nit__parser__ReduceAction247(const struct type* type) {
val* self /* : ReduceAction247 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction247;
return self;
}
/* runtime class nit__parser__ReduceAction248 */
const struct class class_nit__parser__ReduceAction248 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction248:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction248:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction248:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction248:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction248:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction248:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction248:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction248:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction248:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction248:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction248:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction248:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction248:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction248:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction248___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction248:parser#ReduceAction248#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction248:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction248:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction248:kernel#Object#init */
}
};
/* allocate ReduceAction248 */
val* NEW_nit__parser__ReduceAction248(const struct type* type) {
val* self /* : ReduceAction248 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction248;
return self;
}
/* runtime class nit__parser__ReduceAction249 */
const struct class class_nit__parser__ReduceAction249 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction249:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction249:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction249:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction249:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction249:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction249:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction249:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction249:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction249:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction249:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction249:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction249:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction249:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction249:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction249___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction249:parser#ReduceAction249#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction249:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction249:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction249:kernel#Object#init */
}
};
/* allocate ReduceAction249 */
val* NEW_nit__parser__ReduceAction249(const struct type* type) {
val* self /* : ReduceAction249 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction249;
return self;
}
/* runtime class nit__parser__ReduceAction250 */
const struct class class_nit__parser__ReduceAction250 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction250:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction250:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction250:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction250:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction250:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction250:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction250:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction250:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction250:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction250:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction250:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction250:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction250:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction250:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction250___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction250:parser#ReduceAction250#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction250:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction250:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction250:kernel#Object#init */
}
};
/* allocate ReduceAction250 */
val* NEW_nit__parser__ReduceAction250(const struct type* type) {
val* self /* : ReduceAction250 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction250;
return self;
}
/* runtime class nit__parser__ReduceAction251 */
const struct class class_nit__parser__ReduceAction251 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction251:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction251:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction251:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction251:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction251:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction251:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction251:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction251:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction251:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction251:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction251:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction251:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction251:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction251:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction251___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction251:parser#ReduceAction251#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction251:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction251:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction251:kernel#Object#init */
}
};
/* allocate ReduceAction251 */
val* NEW_nit__parser__ReduceAction251(const struct type* type) {
val* self /* : ReduceAction251 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction251;
return self;
}
/* runtime class nit__parser__ReduceAction252 */
const struct class class_nit__parser__ReduceAction252 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction252:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction252:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction252:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction252:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction252:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction252:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction252:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction252:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction252:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction252:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction252:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction252:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction252:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction252:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction252___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction252:parser#ReduceAction252#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction252:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction252:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction252:kernel#Object#init */
}
};
/* allocate ReduceAction252 */
val* NEW_nit__parser__ReduceAction252(const struct type* type) {
val* self /* : ReduceAction252 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction252;
return self;
}
/* runtime class nit__parser__ReduceAction253 */
const struct class class_nit__parser__ReduceAction253 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction253:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction253:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction253:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction253:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction253:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction253:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction253:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction253:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction253:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction253:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction253:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction253:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction253:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction253:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction253___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction253:parser#ReduceAction253#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction253:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction253:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction253:kernel#Object#init */
}
};
/* allocate ReduceAction253 */
val* NEW_nit__parser__ReduceAction253(const struct type* type) {
val* self /* : ReduceAction253 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction253;
return self;
}
/* runtime class nit__parser__ReduceAction254 */
const struct class class_nit__parser__ReduceAction254 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction254:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction254:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction254:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction254:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction254:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction254:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction254:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction254:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction254:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction254:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction254:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction254:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction254:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction254:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction254___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction254:parser#ReduceAction254#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction254:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction254:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction254:kernel#Object#init */
}
};
/* allocate ReduceAction254 */
val* NEW_nit__parser__ReduceAction254(const struct type* type) {
val* self /* : ReduceAction254 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction254;
return self;
}
/* runtime class nit__parser__ReduceAction255 */
const struct class class_nit__parser__ReduceAction255 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction255:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction255:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction255:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction255:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction255:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction255:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction255:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction255:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction255:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction255:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction255:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction255:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction255:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction255:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction255___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction255:parser#ReduceAction255#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction255:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction255:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction255:kernel#Object#init */
}
};
/* allocate ReduceAction255 */
val* NEW_nit__parser__ReduceAction255(const struct type* type) {
val* self /* : ReduceAction255 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction255;
return self;
}
/* runtime class nit__parser__ReduceAction256 */
const struct class class_nit__parser__ReduceAction256 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction256:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction256:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction256:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction256:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction256:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction256:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction256:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction256:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction256:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction256:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction256:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction256:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction256:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction256:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction256___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction256:parser#ReduceAction256#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction256:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction256:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction256:kernel#Object#init */
}
};
/* allocate ReduceAction256 */
val* NEW_nit__parser__ReduceAction256(const struct type* type) {
val* self /* : ReduceAction256 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction256;
return self;
}
/* runtime class nit__parser__ReduceAction257 */
const struct class class_nit__parser__ReduceAction257 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction257:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction257:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction257:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction257:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction257:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction257:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction257:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction257:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction257:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction257:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction257:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction257:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction257:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction257:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction257___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction257:parser#ReduceAction257#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction257:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction257:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction257:kernel#Object#init */
}
};
/* allocate ReduceAction257 */
val* NEW_nit__parser__ReduceAction257(const struct type* type) {
val* self /* : ReduceAction257 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction257;
return self;
}
/* runtime class nit__parser__ReduceAction258 */
const struct class class_nit__parser__ReduceAction258 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction258:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction258:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction258:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction258:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction258:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction258:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction258:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction258:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction258:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction258:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction258:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction258:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction258:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction258:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction258___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction258:parser#ReduceAction258#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction258:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction258:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction258:kernel#Object#init */
}
};
/* allocate ReduceAction258 */
val* NEW_nit__parser__ReduceAction258(const struct type* type) {
val* self /* : ReduceAction258 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction258;
return self;
}
/* runtime class nit__parser__ReduceAction259 */
const struct class class_nit__parser__ReduceAction259 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction259:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction259:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction259:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction259:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction259:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction259:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction259:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction259:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction259:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction259:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction259:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction259:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction259:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction259:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction259___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction259:parser#ReduceAction259#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction259:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction259:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction259:kernel#Object#init */
}
};
/* allocate ReduceAction259 */
val* NEW_nit__parser__ReduceAction259(const struct type* type) {
val* self /* : ReduceAction259 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction259;
return self;
}
/* runtime class nit__parser__ReduceAction260 */
const struct class class_nit__parser__ReduceAction260 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction260:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction260:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction260:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction260:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction260:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction260:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction260:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction260:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction260:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction260:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction260:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction260:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction260:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction260:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction260___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction260:parser#ReduceAction260#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction260:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction260:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction260:kernel#Object#init */
}
};
/* allocate ReduceAction260 */
val* NEW_nit__parser__ReduceAction260(const struct type* type) {
val* self /* : ReduceAction260 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction260;
return self;
}
/* runtime class nit__parser__ReduceAction263 */
const struct class class_nit__parser__ReduceAction263 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction263:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction263:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction263:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction263:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction263:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction263:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction263:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction263:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction263:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction263:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction263:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction263:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction263:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction263:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction263___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction263:parser#ReduceAction263#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction263:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction263:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction263:kernel#Object#init */
}
};
/* allocate ReduceAction263 */
val* NEW_nit__parser__ReduceAction263(const struct type* type) {
val* self /* : ReduceAction263 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction263;
return self;
}
/* runtime class nit__parser__ReduceAction264 */
const struct class class_nit__parser__ReduceAction264 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction264:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction264:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction264:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction264:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction264:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction264:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction264:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction264:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction264:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction264:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction264:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction264:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction264:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction264:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction264___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction264:parser#ReduceAction264#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction264:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction264:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction264:kernel#Object#init */
}
};
/* allocate ReduceAction264 */
val* NEW_nit__parser__ReduceAction264(const struct type* type) {
val* self /* : ReduceAction264 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction264;
return self;
}
/* runtime class nit__parser__ReduceAction265 */
const struct class class_nit__parser__ReduceAction265 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction265:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction265:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction265:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction265:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction265:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction265:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction265:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction265:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction265:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction265:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction265:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction265:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction265:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction265:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction265___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction265:parser#ReduceAction265#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction265:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction265:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction265:kernel#Object#init */
}
};
/* allocate ReduceAction265 */
val* NEW_nit__parser__ReduceAction265(const struct type* type) {
val* self /* : ReduceAction265 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction265;
return self;
}
/* runtime class nit__parser__ReduceAction266 */
const struct class class_nit__parser__ReduceAction266 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction266:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction266:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction266:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction266:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction266:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction266:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction266:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction266:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction266:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction266:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction266:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction266:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction266:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction266:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction266___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction266:parser#ReduceAction266#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction266:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction266:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction266:kernel#Object#init */
}
};
/* allocate ReduceAction266 */
val* NEW_nit__parser__ReduceAction266(const struct type* type) {
val* self /* : ReduceAction266 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction266;
return self;
}
/* runtime class nit__parser__ReduceAction267 */
const struct class class_nit__parser__ReduceAction267 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction267:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction267:kernel#Object#sys */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction267:kernel#Object#!= */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction267:kernel#Object#== */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction267:string#Object#to_s */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction267:time#Object#get_time */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction267:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction267:kernel#Object#is_same_instance */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction267:string#Object#inspect */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction267:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction267:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction267:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction267:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___output, /* pointer to parser:ReduceAction267:kernel#Object#output */
(nitmethod_t)nit__parser___nit__parser__ReduceAction267___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction267:parser#ReduceAction267#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction267:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction267:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction267:kernel#Object#init */
}
};
/* allocate ReduceAction267 */
val* NEW_nit__parser__ReduceAction267(const struct type* type) {
val* self /* : ReduceAction267 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction267;
return self;
}
