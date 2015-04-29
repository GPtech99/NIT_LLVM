#include "nit__mmodule_data.sep.0.h"
/* method mmodule_data#MModuleData#model for (self: MModuleData[Object]): Model */
val* nit___nit__MModuleData___model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__mmodule_data__MModuleData___model].val; /* _model on <self:MModuleData[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule_data, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#model= for (self: MModuleData[Object], Model) */
void nit___nit__MModuleData___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule_data__MModuleData___model].val = p0; /* _model on <self:MModuleData[Object]> */
RET_LABEL:;
}
/* method mmodule_data#MModuleData#has_mmodule for (self: MModuleData[Object], MModule): Bool */
short int nit___nit__MModuleData___has_mmodule(val* self, val* p0) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[MModule, Object] */;
short int var2 /* : Bool */;
var_mmodule = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleData[Object]>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_mmodule); /* has_key on <var1:HashMap[MModule, Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#[] for (self: MModuleData[Object], MModule): nullable Object */
val* nit___nit__MModuleData____91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[MModule, Object] */;
val* var2 /* : nullable Object */;
var_mmodule = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleData[Object]>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var1, var_mmodule); /* get_or_null on <var1:HashMap[MModule, Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#[]= for (self: MModuleData[Object], MModule, nullable Object) */
void nit___nit__MModuleData____91d_93d_61d(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mmodule /* var mmodule: MModule */;
val* var_value /* var value: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[MModule, Object] */;
val* var4 /* : Collection[nullable Object] */;
val* var5 /* : HashMap[MModule, Object] */;
/* Covariant cast for argument 1 (value) <p1:nullable Object> isa nullable E */
/* <p1:nullable Object> isa nullable E */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__MModuleData___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p1 == NULL) {
var = 1;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule_data, 43);
fatal_exit(1);
}
var_mmodule = p0;
var_value = p1;
if (var_value == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_value&3)?class_info[((long)var_value&3)]:var_value->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_value, ((val*)NULL)); /* == on <var_value:nullable Object>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleData[Object]>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var3); /* keys on <var3:HashMap[MModule, Object]>*/
}
{
((void(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var4, var_mmodule); /* remove on <var4:Collection[nullable Object](RemovableCollection[MModule])>*/
}
} else {
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleData[Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var5->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var5, var_mmodule, var_value); /* []= on <var5:HashMap[MModule, Object]>*/
}
}
RET_LABEL:;
}
/* method mmodule_data#MModuleData#defs for (self: MModuleData[Object]): HashMap[MModule, Object] */
val* nit___nit__MModuleData___defs(val* self) {
val* var /* : HashMap[MModule, Object] */;
val* var1 /* : HashMap[MModule, Object] */;
var1 = self->attrs[COLOR_nit__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleData[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule_data, 54);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#defs= for (self: MModuleData[Object], HashMap[MModule, Object]) */
void nit___nit__MModuleData___defs_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (defs) <p0:HashMap[MModule, Object]> isa HashMap[MModule, E] */
/* <p0:HashMap[MModule, Object]> isa HashMap[MModule, E] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__nit__MModule__nit__MModuleData___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[MModule, E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule_data, 54);
fatal_exit(1);
}
self->attrs[COLOR_nit__mmodule_data__MModuleData___defs].val = p0; /* _defs on <self:MModuleData[Object]> */
RET_LABEL:;
}
/* method mmodule_data#MModuleData#lookup_all_modules for (self: MModuleData[Object], MModule, MVisibility): Sequence[MModule] */
val* nit___nit__MModuleData___lookup_all_modules(val* self, val* p0, val* p1) {
val* var /* : Sequence[MModule] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var2 /* : POSetElement[MModule] */;
val* var3 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[MModule] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var8 /* : MVisibility */;
short int var9 /* : Bool */;
val* var10 /* : HashMap[MModule, Object] */;
short int var11 /* : Bool */;
var_mmodule = p0;
var_min_visibility = p1;
var1 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[MModule]>*/
}
var_res = var1;
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
var_m = var7;
{
var8 = ((val*(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__visibility_for]))(var_mmodule, var_m); /* visibility_for on <var_mmodule:MModule>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Comparable___60d]))(var8, var_min_visibility); /* < on <var8:MVisibility>*/
}
if (var9){
goto BREAK_label;
} else {
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleData[Object]>*/
}
{
var11 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var10, var_m); /* has_key on <var10:HashMap[MModule, Object]>*/
}
if (var11){
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_m); /* add on <var_res:Array[MModule]>*/
}
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[MModule]>*/
}
} else {
goto BREAK_label12;
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[MModule]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#lookup_all_values for (self: MModuleData[Object], MModule, MVisibility): Sequence[Object] */
val* nit___nit__MModuleData___lookup_all_values(val* self, val* p0, val* p1) {
val* var /* : Sequence[Object] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : Sequence[MModule] */;
val* var_mmodules /* var mmodules: Sequence[MModule] */;
val* var2 /* : Model */;
val* var3 /* : POSet[MModule] */;
val* var4 /* : Array[nullable Object] */;
val* var5 /* : Array[Object] */;
val* var_res /* var res: Array[Object] */;
val* var_ /* var : Array[MModule] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MModule] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var10 /* : HashMap[MModule, Object] */;
val* var11 /* : nullable Object */;
var_mmodule = p0;
var_min_visibility = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__lookup_all_modules]))(self, var_mmodule, var_min_visibility); /* lookup_all_modules on <self:MModuleData[Object]>*/
}
var_mmodules = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__model]))(self); /* model on <self:MModuleData[Object]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__mmodule__Model__mmodule_importation_hierarchy]))(var2); /* mmodule_importation_hierarchy on <var2:Model>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_poset__POSet__linearize]))(var3, var_mmodules); /* linearize on <var3:POSet[MModule]>*/
}
var_mmodules = var4;
var5 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__MModuleData___35dE]);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_res = var5;
var_ = var_mmodules;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MModule]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MModule]>*/
}
var_m = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleData[Object]>*/
}
{
var11 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var10, var_m); /* [] on <var10:HashMap[MModule, Object]>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var11); /* add on <var_res:Array[Object]>*/
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MModule]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#lookup_values for (self: MModuleData[Object], MModule, MVisibility): Sequence[Object] */
val* nit___nit__MModuleData___lookup_values(val* self, val* p0, val* p1) {
val* var /* : Sequence[Object] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : Sequence[MModule] */;
val* var_mmodules /* var mmodules: Sequence[MModule] */;
val* var2 /* : Model */;
val* var3 /* : POSet[MModule] */;
val* var4 /* : Array[nullable Object] */;
val* var5 /* : Array[Object] */;
val* var_res /* var res: Array[Object] */;
val* var_ /* var : Array[MModule] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MModule] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var10 /* : HashMap[MModule, Object] */;
val* var11 /* : nullable Object */;
var_mmodule = p0;
var_min_visibility = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__lookup_all_modules]))(self, var_mmodule, var_min_visibility); /* lookup_all_modules on <self:MModuleData[Object]>*/
}
var_mmodules = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__model]))(self); /* model on <self:MModuleData[Object]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__mmodule__Model__mmodule_importation_hierarchy]))(var2); /* mmodule_importation_hierarchy on <var2:Model>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_poset__POSet__select_smallest]))(var3, var_mmodules); /* select_smallest on <var3:POSet[MModule]>*/
}
var_mmodules = var4;
var5 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__MModuleData___35dE]);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[Object]>*/
}
var_res = var5;
var_ = var_mmodules;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MModule]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MModule]>*/
}
var_m = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleData[Object]>*/
}
{
var11 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var10, var_m); /* [] on <var10:HashMap[MModule, Object]>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var11); /* add on <var_res:Array[Object]>*/
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MModule]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#lookup_first_value for (self: MModuleData[Object], MModule, MVisibility): nullable Object */
val* nit___nit__MModuleData___lookup_first_value(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : Sequence[MModule] */;
val* var_mmodules /* var mmodules: Sequence[MModule] */;
short int var2 /* : Bool */;
val* var3 /* : Model */;
val* var4 /* : POSet[MModule] */;
val* var5 /* : Array[nullable Object] */;
val* var6 /* : HashMap[MModule, Object] */;
val* var7 /* : nullable Object */;
val* var8 /* : nullable Object */;
var_mmodule = p0;
var_min_visibility = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__lookup_all_modules]))(self, var_mmodule, var_min_visibility); /* lookup_all_modules on <self:MModuleData[Object]>*/
}
var_mmodules = var1;
{
var2 = ((short int(*)(val* self))((((long)var_mmodules&3)?class_info[((long)var_mmodules&3)]:var_mmodules->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_mmodules); /* is_empty on <var_mmodules:Sequence[MModule]>*/
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__model]))(self); /* model on <self:MModuleData[Object]>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__mmodule__Model__mmodule_importation_hierarchy]))(var3); /* mmodule_importation_hierarchy on <var3:Model>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var4->class->vft[COLOR_poset__POSet__linearize]))(var4, var_mmodules); /* linearize on <var4:POSet[MModule]>*/
}
var_mmodules = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleData[Object]>*/
}
{
var7 = ((val*(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var_mmodules); /* last on <var_mmodules:Sequence[MModule](Array[MModule])>*/
}
{
var8 = ((val*(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var6, var7); /* [] on <var6:HashMap[MModule, Object]>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#init for (self: MModuleData[Object]) */
void nit___nit__MModuleData___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MModuleData___standard__kernel__Object__init]))(self); /* init on <self:MModuleData[Object]>*/
}
RET_LABEL:;
}
/* method mmodule_data#MModuleMultiData#[] for (self: MModuleMultiData[nullable Object], MModule): nullable Array[nullable Object] */
val* nit___nit__MModuleMultiData___MModuleData___91d_93d(val* self, val* p0) {
val* var /* : nullable Array[nullable Object] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable Object */;
val* var_res /* var res: nullable Array[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[nullable Object] */;
val* var5 /* : HashMap[MModule, Object] */;
var_mmodule = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit___nit__MModuleMultiData___MModuleData___91d_93d]))(self, p0); /* [] on <self:MModuleMultiData[nullable Object]>*/
}
var_res = var1;
if (var_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable Array[nullable Object]>*/
var2 = var3;
}
if (var2){
var4 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__MModuleMultiData___35dE]);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[nullable Object]>*/
}
var_res = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleMultiData[nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var5->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var5, var_mmodule, var_res); /* []= on <var5:HashMap[MModule, Object](HashMap[MModule, Array[nullable Object]])>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleMultiData#lookup_joined_values for (self: MModuleMultiData[nullable Object], MModule, MVisibility): Sequence[nullable Object] */
val* nit___nit__MModuleMultiData___lookup_joined_values(val* self, val* p0, val* p1) {
val* var /* : Sequence[nullable Object] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : Sequence[MModule] */;
val* var_mmodules /* var mmodules: Sequence[MModule] */;
val* var2 /* : Model */;
val* var3 /* : POSet[MModule] */;
val* var4 /* : Array[nullable Object] */;
val* var5 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
val* var_ /* var : Array[MModule] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MModule] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var10 /* : HashMap[MModule, Object] */;
val* var11 /* : nullable Object */;
var_mmodule = p0;
var_min_visibility = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__lookup_all_modules]))(self, var_mmodule, var_min_visibility); /* lookup_all_modules on <self:MModuleMultiData[nullable Object]>*/
}
var_mmodules = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__model]))(self); /* model on <self:MModuleMultiData[nullable Object]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__mmodule__Model__mmodule_importation_hierarchy]))(var2); /* mmodule_importation_hierarchy on <var2:Model>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_poset__POSet__linearize]))(var3, var_mmodules); /* linearize on <var3:POSet[MModule]>*/
}
var_mmodules = var4;
var5 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__MModuleMultiData___35dE]);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[nullable Object]>*/
}
var_res = var5;
var_ = var_mmodules;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MModule]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MModule]>*/
}
var_m = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule_data__MModuleData__defs]))(self); /* defs on <self:MModuleMultiData[nullable Object]>*/
}
{
var11 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var10, var_m); /* [] on <var10:HashMap[MModule, Object](HashMap[MModule, Array[nullable Object]])>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var11); /* add_all on <var_res:Array[nullable Object]>*/
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MModule]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
