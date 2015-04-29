#include "poset.sep.0.h"
/* method poset#POSet#iterator for (self: POSet[nullable Object]): Iterator[nullable Object] */
val* poset___poset__POSet___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var2 /* : Collection[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var1); /* keys on <var1:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var2); /* iterator on <var2:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#elements for (self: POSet[nullable Object]): HashMap[nullable Object, POSetElement[nullable Object]] */
val* poset___poset__POSet___elements(val* self) {
val* var /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var1 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
var1 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#elements= for (self: POSet[nullable Object], HashMap[nullable Object, POSetElement[nullable Object]]) */
void poset___poset__POSet___elements_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (elements) <p0:HashMap[nullable Object, POSetElement[nullable Object]]> isa HashMap[E, POSetElement[E]] */
/* <p0:HashMap[nullable Object, POSetElement[nullable Object]]> isa HashMap[E, POSetElement[E]] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__poset__POSet___35dE__poset__POSetElement__poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[E, POSetElement[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
self->attrs[COLOR_poset__POSet___elements].val = p0; /* _elements on <self:POSet[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSet#has for (self: POSet[nullable Object], nullable Object): Bool */
short int poset___poset__POSet___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var3 /* : Collection[nullable Object] */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 85);
fatal_exit(1);
}
var_e = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var2); /* keys on <var2:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var3, var_e); /* has on <var3:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#add_node for (self: POSet[nullable Object], nullable Object): POSetElement[nullable Object] */
val* poset___poset__POSet___add_node(val* self, val* p0) {
val* var /* : POSetElement[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var3 /* : Collection[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var6 /* : nullable Object */;
val* var7 /* : POSetElement[nullable Object] */;
val* var8 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
long var9 /* : Int */;
val* var_poe /* var poe: POSetElement[nullable Object] */;
val* var10 /* : HashSet[nullable Object] */;
val* var11 /* : HashSet[nullable Object] */;
val* var12 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 87);
fatal_exit(1);
}
var_e = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var2); /* keys on <var2:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var3, var_e); /* has on <var3:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var6 = ((val*(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var5, var_e); /* [] on <var5:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var = var6;
goto RET_LABEL;
} else {
}
var7 = NEW_poset__POSetElement(self->type->resolution_table->types[COLOR_poset__POSetElement__poset__POSet___35dE]);
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_standard__abstract_collection__MapRead__length]))(var8); /* length on <var8:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_poset__POSetElement__poset_61d]))(var7, self); /* poset= on <var7:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_poset__POSetElement__element_61d]))(var7, var_e); /* element= on <var7:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, long p0))(var7->class->vft[COLOR_poset__POSetElement__count_61d]))(var7, var9); /* count= on <var7:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:POSetElement[nullable Object]>*/
}
var_poe = var7;
{
var10 = ((val*(*)(val* self))(var_poe->class->vft[COLOR_poset__POSetElement__tos]))(var_poe); /* tos on <var_poe:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var10, var_e); /* add on <var10:HashSet[nullable Object]>*/
}
{
var11 = ((val*(*)(val* self))(var_poe->class->vft[COLOR_poset__POSetElement__froms]))(var_poe); /* froms on <var_poe:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var11, var_e); /* add on <var11:HashSet[nullable Object]>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var12->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var12, var_e, var_poe); /* []= on <var12:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var = var_poe;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#[] for (self: POSet[nullable Object], nullable Object): POSetElement[nullable Object] */
val* poset___poset__POSet____91d_93d(val* self, val* p0) {
val* var /* : POSetElement[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var3 /* : Collection[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var6 /* : nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 101);
fatal_exit(1);
}
var_e = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var2); /* keys on <var2:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var3, var_e); /* has on <var3:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 115);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var6 = ((val*(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var5, var_e); /* [] on <var5:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#add_edge for (self: POSet[nullable Object], nullable Object, nullable Object) */
void poset___poset__POSet___add_edge(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable5;
const char* var_class_name6;
val* var_f /* var f: nullable Object */;
val* var_t /* var t: nullable Object */;
val* var7 /* : POSetElement[nullable Object] */;
val* var_fe /* var fe: POSetElement[nullable Object] */;
val* var8 /* : POSetElement[nullable Object] */;
val* var_te /* var te: POSetElement[nullable Object] */;
val* var9 /* : HashSet[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : HashSet[nullable Object] */;
val* var_ /* var : HashSet[nullable Object] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_ff /* var ff: nullable Object */;
val* var16 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var17 /* : nullable Object */;
val* var_ffe /* var ffe: POSetElement[nullable Object] */;
val* var18 /* : HashSet[nullable Object] */;
val* var_19 /* var : HashSet[nullable Object] */;
val* var20 /* : Iterator[nullable Object] */;
val* var_21 /* var : Iterator[nullable Object] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_tt /* var tt: nullable Object */;
val* var24 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var25 /* : nullable Object */;
val* var_tte /* var tte: POSetElement[nullable Object] */;
val* var26 /* : HashSet[nullable Object] */;
val* var27 /* : HashSet[nullable Object] */;
val* var29 /* : HashSet[nullable Object] */;
short int var30 /* : Bool */;
val* var_to_remove /* var to_remove: nullable Array[nullable Object] */;
val* var31 /* : HashSet[nullable Object] */;
val* var_32 /* var : HashSet[nullable Object] */;
val* var33 /* : Iterator[nullable Object] */;
val* var_34 /* var : Iterator[nullable Object] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_x /* var x: nullable Object */;
val* var37 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var38 /* : nullable Object */;
val* var_xe /* var xe: POSetElement[nullable Object] */;
val* var39 /* : HashSet[nullable Object] */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : Array[nullable Object] */;
val* var44 /* : HashSet[nullable Object] */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_48 /* var : Array[nullable Object] */;
val* var49 /* : Iterator[nullable Object] */;
val* var_50 /* var : ArrayIterator[nullable Object] */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
val* var_x53 /* var x: nullable Object */;
val* var54 /* : HashSet[nullable Object] */;
val* var56 /* : HashSet[nullable Object] */;
val* var_57 /* var : HashSet[nullable Object] */;
val* var58 /* : Iterator[nullable Object] */;
val* var_59 /* var : Iterator[nullable Object] */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
val* var_x62 /* var x: nullable Object */;
val* var63 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var64 /* : nullable Object */;
val* var_xe65 /* var xe: POSetElement[nullable Object] */;
val* var66 /* : HashSet[nullable Object] */;
short int var67 /* : Bool */;
val* var68 /* : HashSet[nullable Object] */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : Array[nullable Object] */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var_75 /* var : Array[nullable Object] */;
val* var76 /* : Iterator[nullable Object] */;
val* var_77 /* var : ArrayIterator[nullable Object] */;
short int var78 /* : Bool */;
val* var79 /* : nullable Object */;
val* var_x80 /* var x: nullable Object */;
val* var81 /* : HashSet[nullable Object] */;
val* var83 /* : HashSet[nullable Object] */;
val* var84 /* : HashSet[nullable Object] */;
/* Covariant cast for argument 0 (f) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 119);
fatal_exit(1);
}
/* Covariant cast for argument 1 (t) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable5 = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable5;
} else {
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 119);
fatal_exit(1);
}
var_f = p0;
var_t = p1;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_poset__POSet__add_node]))(self, var_f); /* add_node on <self:POSet[nullable Object]>*/
}
var_fe = var7;
{
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_poset__POSet__add_node]))(self, var_t); /* add_node on <self:POSet[nullable Object]>*/
}
var_te = var8;
{
var9 = ((val*(*)(val* self))(var_fe->class->vft[COLOR_poset__POSetElement__tos]))(var_fe); /* tos on <var_fe:POSetElement[nullable Object]>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var9, var_t); /* has on <var9:HashSet[nullable Object]>*/
}
if (var10){
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(var_fe->class->vft[COLOR_poset__POSetElement__froms]))(var_fe); /* froms on <var_fe:POSetElement[nullable Object]>*/
}
var_ = var11;
{
var12 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:HashSet[nullable Object]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:Iterator[nullable Object]>*/
}
if (var14){
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:Iterator[nullable Object]>*/
}
var_ff = var15;
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var17 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var16, var_ff); /* [] on <var16:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_ffe = var17;
{
var18 = ((val*(*)(val* self))(var_te->class->vft[COLOR_poset__POSetElement__tos]))(var_te); /* tos on <var_te:POSetElement[nullable Object]>*/
}
var_19 = var18;
{
var20 = ((val*(*)(val* self))(var_19->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_19); /* iterator on <var_19:HashSet[nullable Object]>*/
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:Iterator[nullable Object]>*/
}
if (var22){
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:Iterator[nullable Object]>*/
}
var_tt = var23;
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var25 = ((val*(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var24, var_tt); /* [] on <var24:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_tte = var25;
{
var26 = ((val*(*)(val* self))(var_tte->class->vft[COLOR_poset__POSetElement__froms]))(var_tte); /* froms on <var_tte:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var26, var_ff); /* add on <var26:HashSet[nullable Object]>*/
}
{
var27 = ((val*(*)(val* self))(var_ffe->class->vft[COLOR_poset__POSetElement__tos]))(var_ffe); /* tos on <var_ffe:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var27, var_tt); /* add on <var27:HashSet[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:Iterator[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label28;
}
}
BREAK_label28: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:Iterator[nullable Object]>*/
}
{
var29 = ((val*(*)(val* self))(var_te->class->vft[COLOR_poset__POSetElement__tos]))(var_te); /* tos on <var_te:POSetElement[nullable Object]>*/
}
{
var30 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var29, var_f); /* has on <var29:HashSet[nullable Object]>*/
}
if (var30){
goto RET_LABEL;
} else {
}
var_to_remove = ((val*)NULL);
{
var31 = ((val*(*)(val* self))(var_te->class->vft[COLOR_poset__POSetElement__dfroms]))(var_te); /* dfroms on <var_te:POSetElement[nullable Object]>*/
}
var_32 = var31;
{
var33 = ((val*(*)(val* self))(var_32->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_32); /* iterator on <var_32:HashSet[nullable Object]>*/
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:Iterator[nullable Object]>*/
}
if (var35){
{
var36 = ((val*(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:Iterator[nullable Object]>*/
}
var_x = var36;
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var38 = ((val*(*)(val* self, val* p0))(var37->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var37, var_x); /* [] on <var37:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_xe = var38;
{
var39 = ((val*(*)(val* self))(var_xe->class->vft[COLOR_poset__POSetElement__tos]))(var_xe); /* tos on <var_xe:POSetElement[nullable Object]>*/
}
{
var40 = ((short int(*)(val* self, val* p0))(var39->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var39, var_f); /* has on <var39:HashSet[nullable Object]>*/
}
if (var40){
if (var_to_remove == NULL) {
var41 = 1; /* is null */
} else {
var41 = 0; /* arg is null but recv is not */
}
if (0) {
var42 = ((short int(*)(val* self, val* p0))(var_to_remove->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_to_remove, ((val*)NULL)); /* == on <var_to_remove:nullable Array[nullable Object]>*/
var41 = var42;
}
if (var41){
var43 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__poset__POSet___35dE]);
{
((void(*)(val* self))(var43->class->vft[COLOR_standard__kernel__Object__init]))(var43); /* init on <var43:Array[nullable Object]>*/
}
var_to_remove = var43;
} else {
}
{
((void(*)(val* self, val* p0))(var_to_remove->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_to_remove, var_x); /* add on <var_to_remove:nullable Array[nullable Object](Array[nullable Object])>*/
}
{
var44 = ((val*(*)(val* self))(var_xe->class->vft[COLOR_poset__POSetElement__dtos]))(var_xe); /* dtos on <var_xe:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var44->class->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var44, var_t); /* remove on <var44:HashSet[nullable Object]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label45;
}
}
BREAK_label45: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:Iterator[nullable Object]>*/
}
if (var_to_remove == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
var47 = ((short int(*)(val* self, val* p0))(var_to_remove->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_to_remove, ((val*)NULL)); /* != on <var_to_remove:nullable Array[nullable Object]>*/
var46 = var47;
}
if (var46){
var_48 = var_to_remove;
{
var49 = ((val*(*)(val* self))(var_48->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_48); /* iterator on <var_48:Array[nullable Object]>*/
}
var_50 = var49;
for(;;) {
{
var51 = ((short int(*)(val* self))(var_50->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_50); /* is_ok on <var_50:ArrayIterator[nullable Object]>*/
}
if (var51){
{
var52 = ((val*(*)(val* self))(var_50->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_50); /* item on <var_50:ArrayIterator[nullable Object]>*/
}
var_x53 = var52;
{
var54 = ((val*(*)(val* self))(var_te->class->vft[COLOR_poset__POSetElement__dfroms]))(var_te); /* dfroms on <var_te:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var54, var_x53); /* remove on <var54:HashSet[nullable Object]>*/
}
{
((void(*)(val* self))(var_50->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_50); /* next on <var_50:ArrayIterator[nullable Object]>*/
}
} else {
goto BREAK_label55;
}
}
BREAK_label55: (void)0;
{
((void(*)(val* self))(var_50->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_50); /* finish on <var_50:ArrayIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var_to_remove->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var_to_remove); /* clear on <var_to_remove:nullable Array[nullable Object](Array[nullable Object])>*/
}
} else {
}
{
var56 = ((val*(*)(val* self))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe); /* dtos on <var_fe:POSetElement[nullable Object]>*/
}
var_57 = var56;
{
var58 = ((val*(*)(val* self))(var_57->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_57); /* iterator on <var_57:HashSet[nullable Object]>*/
}
var_59 = var58;
for(;;) {
{
var60 = ((short int(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_59); /* is_ok on <var_59:Iterator[nullable Object]>*/
}
if (var60){
{
var61 = ((val*(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_59); /* item on <var_59:Iterator[nullable Object]>*/
}
var_x62 = var61;
{
var63 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var64 = ((val*(*)(val* self, val* p0))(var63->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var63, var_x62); /* [] on <var63:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_xe65 = var64;
{
var66 = ((val*(*)(val* self))(var_xe65->class->vft[COLOR_poset__POSetElement__froms]))(var_xe65); /* froms on <var_xe65:POSetElement[nullable Object]>*/
}
{
var67 = ((short int(*)(val* self, val* p0))(var66->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var66, var_t); /* has on <var66:HashSet[nullable Object]>*/
}
if (var67){
{
var68 = ((val*(*)(val* self))(var_xe65->class->vft[COLOR_poset__POSetElement__dfroms]))(var_xe65); /* dfroms on <var_xe65:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var68, var_f); /* remove on <var68:HashSet[nullable Object]>*/
}
if (var_to_remove == NULL) {
var69 = 1; /* is null */
} else {
var69 = 0; /* arg is null but recv is not */
}
if (0) {
var70 = ((short int(*)(val* self, val* p0))(var_to_remove->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_to_remove, ((val*)NULL)); /* == on <var_to_remove:nullable Array[nullable Object]>*/
var69 = var70;
}
if (var69){
var71 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__poset__POSet___35dE]);
{
((void(*)(val* self))(var71->class->vft[COLOR_standard__kernel__Object__init]))(var71); /* init on <var71:Array[nullable Object]>*/
}
var_to_remove = var71;
} else {
}
{
((void(*)(val* self, val* p0))(var_to_remove->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_to_remove, var_x62); /* add on <var_to_remove:nullable Array[nullable Object](Array[nullable Object])>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_59); /* next on <var_59:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label72;
}
}
BREAK_label72: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_59); /* finish on <var_59:Iterator[nullable Object]>*/
}
if (var_to_remove == NULL) {
var73 = 0; /* is null */
} else {
var73 = 1; /* arg is null and recv is not */
}
if (0) {
var74 = ((short int(*)(val* self, val* p0))(var_to_remove->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_to_remove, ((val*)NULL)); /* != on <var_to_remove:nullable Array[nullable Object]>*/
var73 = var74;
}
if (var73){
var_75 = var_to_remove;
{
var76 = ((val*(*)(val* self))(var_75->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_75); /* iterator on <var_75:Array[nullable Object]>*/
}
var_77 = var76;
for(;;) {
{
var78 = ((short int(*)(val* self))(var_77->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_77); /* is_ok on <var_77:ArrayIterator[nullable Object]>*/
}
if (var78){
{
var79 = ((val*(*)(val* self))(var_77->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_77); /* item on <var_77:ArrayIterator[nullable Object]>*/
}
var_x80 = var79;
{
var81 = ((val*(*)(val* self))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe); /* dtos on <var_fe:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var81->class->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var81, var_x80); /* remove on <var81:HashSet[nullable Object]>*/
}
{
((void(*)(val* self))(var_77->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_77); /* next on <var_77:ArrayIterator[nullable Object]>*/
}
} else {
goto BREAK_label82;
}
}
BREAK_label82: (void)0;
{
((void(*)(val* self))(var_77->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_77); /* finish on <var_77:ArrayIterator[nullable Object]>*/
}
} else {
}
{
var83 = ((val*(*)(val* self))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe); /* dtos on <var_fe:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var83->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var83, var_t); /* add on <var83:HashSet[nullable Object]>*/
}
{
var84 = ((val*(*)(val* self))(var_te->class->vft[COLOR_poset__POSetElement__dfroms]))(var_te); /* dfroms on <var_te:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var84->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var84, var_f); /* add on <var84:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method poset#POSet#add_chain for (self: POSet[nullable Object], SequenceRead[nullable Object]) */
void poset___poset__POSet___add_chain(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_es /* var es: SequenceRead[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[nullable Object] */;
val* var3 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var_ /* var : IndexedIterator[nullable Object] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_f /* var f: nullable Object */;
/* Covariant cast for argument 0 (es) <p0:SequenceRead[nullable Object]> isa SequenceRead[E] */
/* <p0:SequenceRead[nullable Object]> isa SequenceRead[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__SequenceRead__poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SequenceRead[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 187);
fatal_exit(1);
}
var_es = p0;
{
var1 = ((short int(*)(val* self))((((long)var_es&3)?class_info[((long)var_es&3)]:var_es->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_es); /* is_empty on <var_es:SequenceRead[nullable Object]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))((((long)var_es&3)?class_info[((long)var_es&3)]:var_es->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_es); /* iterator on <var_es:SequenceRead[nullable Object]>*/
}
var_i = var2;
{
var3 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:IndexedIterator[nullable Object]>*/
}
var_e = var3;
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:IndexedIterator[nullable Object]>*/
}
var_ = var_i;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:IndexedIterator[nullable Object]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[nullable Object]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[nullable Object]>*/
}
var_f = var7;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_poset__POSet__add_edge]))(self, var_e, var_f); /* add_edge on <self:POSet[nullable Object]>*/
}
var_e = var_f;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method poset#POSet#has_edge for (self: POSet[nullable Object], nullable Object, nullable Object): Bool */
short int poset___poset__POSet___has_edge(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_f /* var f: nullable Object */;
val* var_t /* var t: nullable Object */;
val* var8 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var9 /* : Collection[nullable Object] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var13 /* : nullable Object */;
val* var_fe /* var fe: POSetElement[nullable Object] */;
val* var14 /* : HashSet[nullable Object] */;
short int var15 /* : Bool */;
/* Covariant cast for argument 0 (f) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 208);
fatal_exit(1);
}
/* Covariant cast for argument 1 (t) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 208);
fatal_exit(1);
}
var_f = p0;
var_t = p1;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var8); /* keys on <var8:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
{
var10 = ((short int(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var9, var_f); /* has on <var9:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
var11 = !var10;
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var13 = ((val*(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var12, var_f); /* [] on <var12:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_fe = var13;
{
var14 = ((val*(*)(val* self))(var_fe->class->vft[COLOR_poset__POSetElement__tos]))(var_fe); /* tos on <var_fe:POSetElement[nullable Object]>*/
}
{
var15 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var14, var_t); /* has on <var14:HashSet[nullable Object]>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#has_direct_edge for (self: POSet[nullable Object], nullable Object, nullable Object): Bool */
short int poset___poset__POSet___has_direct_edge(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_f /* var f: nullable Object */;
val* var_t /* var t: nullable Object */;
val* var8 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var9 /* : Collection[nullable Object] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var13 /* : nullable Object */;
val* var_fe /* var fe: POSetElement[nullable Object] */;
val* var14 /* : HashSet[nullable Object] */;
short int var15 /* : Bool */;
/* Covariant cast for argument 0 (f) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 226);
fatal_exit(1);
}
/* Covariant cast for argument 1 (t) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 226);
fatal_exit(1);
}
var_f = p0;
var_t = p1;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var8); /* keys on <var8:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
{
var10 = ((short int(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var9, var_f); /* has on <var9:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
var11 = !var10;
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var13 = ((val*(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var12, var_f); /* [] on <var12:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_fe = var13;
{
var14 = ((val*(*)(val* self))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe); /* dtos on <var_fe:POSetElement[nullable Object]>*/
}
{
var15 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var14, var_t); /* has on <var14:HashSet[nullable Object]>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#write_dot for (self: POSet[nullable Object], Writer) */
void poset___poset__POSet___write_dot(val* self, val* p0) {
val* var_f /* var f: Writer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : HashMap[nullable Object, Int] */;
val* var_ids /* var ids: HashMap[nullable Object, Int] */;
val* var4 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var5 /* : Collection[nullable Object] */;
val* var_ /* var : RemovableCollection[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_x /* var x: nullable Object */;
long var10 /* : Int */;
val* var11 /* : nullable Object */;
val* var12 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var13 /* : Collection[nullable Object] */;
val* var_14 /* var : RemovableCollection[nullable Object] */;
val* var15 /* : Iterator[nullable Object] */;
val* var_16 /* var : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_x19 /* var x: nullable Object */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var_xstr /* var xstr: String */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : nullable Object */;
val* var29 /* : String */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var_nx /* var nx: String */;
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
val* var42 /* : String */;
val* var43 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var44 /* : nullable Object */;
val* var_xe /* var xe: POSetElement[nullable Object] */;
val* var45 /* : HashSet[nullable Object] */;
val* var_46 /* var : HashSet[nullable Object] */;
val* var47 /* : Iterator[nullable Object] */;
val* var_48 /* var : Iterator[nullable Object] */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var_y /* var y: nullable Object */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
val* var57 /* : nullable Object */;
val* var58 /* : String */;
long var59 /* : Int */;
val* var60 /* : String */;
val* var_ny /* var ny: String */;
short int var61 /* : Bool */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
val* var72 /* : String */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
val* var83 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
var_f = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "digraph {\n";
var2 = standard___standard__NativeString___to_s_with_length(var1, 10l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_standard__stream__Writer__write]))(var_f, var); /* write on <var_f:Writer>*/
}
var3 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__poset__POSet___35dE__standard__Int]);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:HashMap[nullable Object, Int]>*/
}
var_ids = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var4); /* keys on <var4:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[nullable Object]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[nullable Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[nullable Object]>*/
}
var_x = var9;
{
var10 = ((long(*)(val* self))(var_ids->class->vft[COLOR_standard__abstract_collection__MapRead__length]))(var_ids); /* length on <var_ids:HashMap[nullable Object, Int]>*/
}
{
var11 = (val*)(var10<<2|1);
((void(*)(val* self, val* p0, val* p1))(var_ids->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_ids, var_x, var11); /* []= on <var_ids:HashMap[nullable Object, Int]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[nullable Object]>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var12); /* keys on <var12:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_14 = var13;
{
var15 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_14); /* iterator on <var_14:RemovableCollection[nullable Object]>*/
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:Iterator[nullable Object]>*/
}
if (var17){
{
var18 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:Iterator[nullable Object]>*/
}
var_x19 = var18;
if (var_x19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 256);
fatal_exit(1);
} else {
var20 = ((val*(*)(val* self))((((long)var_x19&3)?class_info[((long)var_x19&3)]:var_x19->class)->vft[COLOR_standard__string__Object__to_s]))(var_x19); /* to_s on <var_x19:nullable Object>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__Text__escape_to_dot]))(var20); /* escape_to_dot on <var20:String>*/
}
var_xstr = var21;
if (unlikely(varonce22==NULL)) {
var23 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "n";
var27 = standard___standard__NativeString___to_s_with_length(var26, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[0]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var28 = ((val*(*)(val* self, val* p0))(var_ids->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_ids, var_x19); /* [] on <var_ids:HashMap[nullable Object, Int]>*/
}
var30 = (long)(var28)>>2;
var29 = standard__string___Int___Object__to_s(var30);
((struct instance_standard__NativeArray*)var23)->values[1]=var29;
{
var31 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
var_nx = var31;
if (unlikely(varonce32==NULL)) {
var33 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "[label=\"";
var37 = standard___standard__NativeString___to_s_with_length(var36, 8l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[1]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "\"];\n";
var41 = standard___standard__NativeString___to_s_with_length(var40, 4l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var33)->values[3]=var39;
} else {
var33 = varonce32;
varonce32 = NULL;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var_nx;
((struct instance_standard__NativeArray*)var33)->values[2]=var_xstr;
{
var42 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_standard__stream__Writer__write]))(var_f, var42); /* write on <var_f:Writer>*/
}
{
var43 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var44 = ((val*(*)(val* self, val* p0))(var43->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var43, var_x19); /* [] on <var43:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_xe = var44;
{
var45 = ((val*(*)(val* self))(var_xe->class->vft[COLOR_poset__POSetElement__dtos]))(var_xe); /* dtos on <var_xe:POSetElement[nullable Object]>*/
}
var_46 = var45;
{
var47 = ((val*(*)(val* self))(var_46->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_46); /* iterator on <var_46:HashSet[nullable Object]>*/
}
var_48 = var47;
for(;;) {
{
var49 = ((short int(*)(val* self))((((long)var_48&3)?class_info[((long)var_48&3)]:var_48->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_48); /* is_ok on <var_48:Iterator[nullable Object]>*/
}
if (var49){
{
var50 = ((val*(*)(val* self))((((long)var_48&3)?class_info[((long)var_48&3)]:var_48->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_48); /* item on <var_48:Iterator[nullable Object]>*/
}
var_y = var50;
if (unlikely(varonce51==NULL)) {
var52 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "n";
var56 = standard___standard__NativeString___to_s_with_length(var55, 1l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var52)->values[0]=var54;
} else {
var52 = varonce51;
varonce51 = NULL;
}
{
var57 = ((val*(*)(val* self, val* p0))(var_ids->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_ids, var_y); /* [] on <var_ids:HashMap[nullable Object, Int]>*/
}
var59 = (long)(var57)>>2;
var58 = standard__string___Int___Object__to_s(var59);
((struct instance_standard__NativeArray*)var52)->values[1]=var58;
{
var60 = ((val*(*)(val* self))(var52->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
var_ny = var60;
{
var61 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_poset__POSet__has_edge]))(self, var_y, var_x19); /* has_edge on <self:POSet[nullable Object]>*/
}
if (var61){
if (unlikely(varonce62==NULL)) {
var63 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = " -> ";
var67 = standard___standard__NativeString___to_s_with_length(var66, 4l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var63)->values[1]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "[dir=both];\n";
var71 = standard___standard__NativeString___to_s_with_length(var70, 12l);
var69 = var71;
varonce68 = var69;
}
((struct instance_standard__NativeArray*)var63)->values[3]=var69;
} else {
var63 = varonce62;
varonce62 = NULL;
}
((struct instance_standard__NativeArray*)var63)->values[0]=var_nx;
((struct instance_standard__NativeArray*)var63)->values[2]=var_ny;
{
var72 = ((val*(*)(val* self))(var63->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_standard__stream__Writer__write]))(var_f, var72); /* write on <var_f:Writer>*/
}
} else {
if (unlikely(varonce73==NULL)) {
var74 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = " -> ";
var78 = standard___standard__NativeString___to_s_with_length(var77, 4l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var74)->values[1]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ";\n";
var82 = standard___standard__NativeString___to_s_with_length(var81, 2l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var74)->values[3]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
((struct instance_standard__NativeArray*)var74)->values[0]=var_nx;
((struct instance_standard__NativeArray*)var74)->values[2]=var_ny;
{
var83 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_standard__stream__Writer__write]))(var_f, var83); /* write on <var_f:Writer>*/
}
}
{
((void(*)(val* self))((((long)var_48&3)?class_info[((long)var_48&3)]:var_48->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_48); /* next on <var_48:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label84;
}
}
BREAK_label84: (void)0;
{
((void(*)(val* self))((((long)var_48&3)?class_info[((long)var_48&3)]:var_48->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_48); /* finish on <var_48:Iterator[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label85;
}
}
BREAK_label85: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:Iterator[nullable Object]>*/
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "}\n";
var89 = standard___standard__NativeString___to_s_with_length(var88, 2l);
var87 = var89;
varonce86 = var87;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_standard__stream__Writer__write]))(var_f, var87); /* write on <var_f:Writer>*/
}
RET_LABEL:;
}
/* method poset#POSet#show_dot for (self: POSet[nullable Object]) */
void poset___poset__POSet___show_dot(val* self) {
val* var /* : ProcessWriter */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : Array[String] */;
val* var9 /* : NativeArray[String] */;
val* var_f /* var f: ProcessWriter */;
var = NEW_standard__ProcessWriter(&type_standard__ProcessWriter);
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "dot";
var3 = standard___standard__NativeString___to_s_with_length(var2, 3l);
var1 = var3;
varonce = var1;
}
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "-Txlib";
var7 = standard___standard__NativeString___to_s_with_length(var6, 6l);
var5 = var7;
varonce4 = var5;
}
var8 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var8 = array_instance Array[String] */
var9 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var9)->values[0] = (val*) var5;
{
((void(*)(val* self, val* p0, long p1))(var8->class->vft[COLOR_standard__array__Array__with_native]))(var8, var9, 1l); /* with_native on <var8:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_standard__exec__Process__init]))(var, var1, var8); /* init on <var:ProcessWriter>*/
}
var_f = var;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_poset__POSet__write_dot]))(self, var_f); /* write_dot on <self:POSet[nullable Object]>*/
}
{
((void(*)(val* self))(var_f->class->vft[COLOR_standard__stream__Stream__close]))(var_f); /* close on <var_f:ProcessWriter>*/
}
{
((void(*)(val* self))(var_f->class->vft[COLOR_standard__exec__Process__wait]))(var_f); /* wait on <var_f:ProcessWriter>*/
}
RET_LABEL:;
}
/* method poset#POSet#compare for (self: POSet[nullable Object], nullable Object, nullable Object): Int */
long poset___poset__POSet___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_a /* var a: nullable Object */;
val* var_b /* var b: nullable Object */;
val* var8 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var9 /* : nullable Object */;
val* var_ae /* var ae: POSetElement[nullable Object] */;
val* var10 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var11 /* : nullable Object */;
val* var_be /* var be: POSetElement[nullable Object] */;
val* var12 /* : HashSet[nullable Object] */;
long var13 /* : Int */;
val* var14 /* : HashSet[nullable Object] */;
long var15 /* : Int */;
long var16 /* : Int */;
long var_res /* var res: Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var22 /* : nullable Object */;
long var23 /* : Int */;
val* var24 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var25 /* : nullable Object */;
long var26 /* : Int */;
long var27 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 284);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 284);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var8, var_a); /* [] on <var8:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_ae = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var11 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var10, var_b); /* [] on <var10:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var_be = var11;
{
var12 = ((val*(*)(val* self))(var_ae->class->vft[COLOR_poset__POSetElement__tos]))(var_ae); /* tos on <var_ae:POSetElement[nullable Object]>*/
}
{
var13 = ((long(*)(val* self))(var12->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var12); /* length on <var12:HashSet[nullable Object]>*/
}
{
var14 = ((val*(*)(val* self))(var_be->class->vft[COLOR_poset__POSetElement__tos]))(var_be); /* tos on <var_be:POSetElement[nullable Object]>*/
}
{
var15 = ((long(*)(val* self))(var14->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var14); /* length on <var14:HashSet[nullable Object]>*/
}
var16 = standard___standard__Int___Comparable___60d_61d_62d(var13, var15);
var_res = var16;
{
{ /* Inline kernel#Int#!= (var_res,0l) on <var_res:Int> */
var19 = var_res == 0l;
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
var = var_res;
goto RET_LABEL;
} else {
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var22 = ((val*(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var21, var_a); /* [] on <var21:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
{
var23 = ((long(*)(val* self))(var22->class->vft[COLOR_poset__POSetElement__count]))(var22); /* count on <var22:nullable Object(POSetElement[nullable Object])>*/
}
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSet__elements]))(self); /* elements on <self:POSet[nullable Object]>*/
}
{
var25 = ((val*(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var24, var_b); /* [] on <var24:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
{
var26 = ((long(*)(val* self))(var25->class->vft[COLOR_poset__POSetElement__count]))(var25); /* count on <var25:nullable Object(POSetElement[nullable Object])>*/
}
var27 = standard___standard__Int___Comparable___60d_61d_62d(var23, var26);
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#select_smallest for (self: POSet[nullable Object], Collection[nullable Object]): Array[nullable Object] */
val* poset___poset__POSet___select_smallest(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Collection[nullable Object] */;
val* var2 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var_7 /* var : Collection[nullable Object] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_f /* var f: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
/* Covariant cast for argument 0 (elements) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 320);
fatal_exit(1);
}
var_elements = p0;
var2 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__poset__POSet___35dE]);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[nullable Object]>*/
}
var_res = var2;
var_ = var_elements;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[nullable Object]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[nullable Object]>*/
}
var_e = var6;
var_7 = var_elements;
{
var8 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_7); /* iterator on <var_7:Collection[nullable Object]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[nullable Object]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[nullable Object]>*/
}
var_f = var11;
if (var_e == NULL) {
var12 = (var_f == NULL);
} else {
var13 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e, var_f); /* == on <var_e:nullable Object>*/
var12 = var13;
}
if (var12){
goto BREAK_label;
} else {
}
{
var14 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_poset__POSet__has_edge]))(self, var_f, var_e); /* has_edge on <self:POSet[nullable Object]>*/
}
if (var14){
goto BREAK_;
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label15;
}
}
BREAK_label15: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_e); /* add on <var_res:Array[nullable Object]>*/
}
BREAK_: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[nullable Object]>*/
}
} else {
goto BREAK_16;
}
}
BREAK_16: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#select_greatest for (self: POSet[nullable Object], Collection[nullable Object]): Array[nullable Object] */
val* poset___poset__POSet___select_greatest(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Collection[nullable Object] */;
val* var2 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var_7 /* var : Collection[nullable Object] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_f /* var f: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
/* Covariant cast for argument 0 (elements) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 345);
fatal_exit(1);
}
var_elements = p0;
var2 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__poset__POSet___35dE]);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[nullable Object]>*/
}
var_res = var2;
var_ = var_elements;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[nullable Object]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[nullable Object]>*/
}
var_e = var6;
var_7 = var_elements;
{
var8 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_7); /* iterator on <var_7:Collection[nullable Object]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[nullable Object]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[nullable Object]>*/
}
var_f = var11;
if (var_e == NULL) {
var12 = (var_f == NULL);
} else {
var13 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e, var_f); /* == on <var_e:nullable Object>*/
var12 = var13;
}
if (var12){
goto BREAK_label;
} else {
}
{
var14 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_poset__POSet__has_edge]))(self, var_e, var_f); /* has_edge on <self:POSet[nullable Object]>*/
}
if (var14){
goto BREAK_;
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label15;
}
}
BREAK_label15: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_e); /* add on <var_res:Array[nullable Object]>*/
}
BREAK_: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[nullable Object]>*/
}
} else {
goto BREAK_16;
}
}
BREAK_16: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#linearize for (self: POSet[nullable Object], Collection[nullable Object]): Array[nullable Object] */
val* poset___poset__POSet___linearize(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Collection[nullable Object] */;
val* var2 /* : Array[nullable Object] */;
val* var_lin /* var lin: Array[nullable Object] */;
/* Covariant cast for argument 0 (elements) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 370);
fatal_exit(1);
}
var_elements = p0;
{
var2 = ((val*(*)(val* self))((((long)var_elements&3)?class_info[((long)var_elements&3)]:var_elements->class)->vft[COLOR_standard__array__Collection__to_a]))(var_elements); /* to_a on <var_elements:Collection[nullable Object]>*/
}
var_lin = var2;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__sorter__Comparator__sort]))(self, var_lin); /* sort on <self:POSet[nullable Object]>*/
}
var = var_lin;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#poset for (self: POSetElement[nullable Object]): POSet[nullable Object] */
val* poset___poset__POSetElement___poset(val* self) {
val* var /* : POSet[nullable Object] */;
val* var1 /* : POSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___poset].val; /* _poset on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 400);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#poset= for (self: POSetElement[nullable Object], POSet[nullable Object]) */
void poset___poset__POSetElement___poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset) <p0:POSet[nullable Object]> isa POSet[E] */
/* <p0:POSet[nullable Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet__poset__POSetElement___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 400);
fatal_exit(1);
}
self->attrs[COLOR_poset__POSetElement___poset].val = p0; /* _poset on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#element for (self: POSetElement[nullable Object]): nullable Object */
val* poset___poset__POSetElement___element(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_poset__POSetElement___element].val; /* _element on <self:POSetElement[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#element= for (self: POSetElement[nullable Object], nullable Object) */
void poset___poset__POSetElement___element_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (element) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 403);
fatal_exit(1);
}
self->attrs[COLOR_poset__POSetElement___element].val = p0; /* _element on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#tos for (self: POSetElement[nullable Object]): HashSet[nullable Object] */
val* poset___poset__POSetElement___tos(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#tos= for (self: POSetElement[nullable Object], HashSet[nullable Object]) */
void poset___poset__POSetElement___tos_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (tos) <p0:HashSet[nullable Object]> isa HashSet[E] */
/* <p0:HashSet[nullable Object]> isa HashSet[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
}
self->attrs[COLOR_poset__POSetElement___tos].val = p0; /* _tos on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#froms for (self: POSetElement[nullable Object]): HashSet[nullable Object] */
val* poset___poset__POSetElement___froms(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 407);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#froms= for (self: POSetElement[nullable Object], HashSet[nullable Object]) */
void poset___poset__POSetElement___froms_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (froms) <p0:HashSet[nullable Object]> isa HashSet[E] */
/* <p0:HashSet[nullable Object]> isa HashSet[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 407);
fatal_exit(1);
}
self->attrs[COLOR_poset__POSetElement___froms].val = p0; /* _froms on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#dtos for (self: POSetElement[nullable Object]): HashSet[nullable Object] */
val* poset___poset__POSetElement___dtos(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 408);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dtos= for (self: POSetElement[nullable Object], HashSet[nullable Object]) */
void poset___poset__POSetElement___dtos_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (dtos) <p0:HashSet[nullable Object]> isa HashSet[E] */
/* <p0:HashSet[nullable Object]> isa HashSet[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 408);
fatal_exit(1);
}
self->attrs[COLOR_poset__POSetElement___dtos].val = p0; /* _dtos on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#dfroms for (self: POSetElement[nullable Object]): HashSet[nullable Object] */
val* poset___poset__POSetElement___dfroms(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 409);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dfroms= for (self: POSetElement[nullable Object], HashSet[nullable Object]) */
void poset___poset__POSetElement___dfroms_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (dfroms) <p0:HashSet[nullable Object]> isa HashSet[E] */
/* <p0:HashSet[nullable Object]> isa HashSet[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 409);
fatal_exit(1);
}
self->attrs[COLOR_poset__POSetElement___dfroms].val = p0; /* _dfroms on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#count for (self: POSetElement[nullable Object]): Int */
long poset___poset__POSetElement___count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_poset__POSetElement___count].l; /* _count on <self:POSetElement[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#count= for (self: POSetElement[nullable Object], Int) */
void poset___poset__POSetElement___count_61d(val* self, long p0) {
self->attrs[COLOR_poset__POSetElement___count].l = p0; /* _count on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#greaters for (self: POSetElement[nullable Object]): Collection[nullable Object] */
val* poset___poset__POSetElement___greaters(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__tos]))(self); /* tos on <self:POSetElement[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#direct_greaters for (self: POSetElement[nullable Object]): Collection[nullable Object] */
val* poset___poset__POSetElement___direct_greaters(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__dtos]))(self); /* dtos on <self:POSetElement[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#smallers for (self: POSetElement[nullable Object]): Collection[nullable Object] */
val* poset___poset__POSetElement___smallers(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__froms]))(self); /* froms on <self:POSetElement[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#direct_smallers for (self: POSetElement[nullable Object]): Collection[nullable Object] */
val* poset___poset__POSetElement___direct_smallers(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__dfroms]))(self); /* dfroms on <self:POSetElement[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#<= for (self: POSetElement[nullable Object], nullable Object): Bool */
short int poset___poset__POSetElement____60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_t /* var t: nullable Object */;
val* var2 /* : HashSet[nullable Object] */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (t) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 465);
fatal_exit(1);
}
var_t = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__tos]))(self); /* tos on <self:POSetElement[nullable Object]>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var2, var_t); /* has on <var2:HashSet[nullable Object]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#< for (self: POSetElement[nullable Object], nullable Object): Bool */
short int poset___poset__POSetElement____60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_t /* var t: nullable Object */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : HashSet[nullable Object] */;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (t) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 480);
fatal_exit(1);
}
var_t = p0;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__element]))(self); /* element on <self:POSetElement[nullable Object]>*/
}
if (var_t == NULL) {
var4 = (var3 != NULL);
} else {
var5 = ((short int(*)(val* self, val* p0))((((long)var_t&3)?class_info[((long)var_t&3)]:var_t->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_t, var3); /* != on <var_t:nullable Object>*/
var4 = var5;
}
var_ = var4;
if (var4){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__tos]))(self); /* tos on <self:POSetElement[nullable Object]>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var6, var_t); /* has on <var6:HashSet[nullable Object]>*/
}
var2 = var7;
} else {
var2 = var_;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#depth for (self: POSetElement[nullable Object]): Int */
long poset___poset__POSetElement___depth(val* self) {
long var /* : Int */;
val* var1 /* : Collection[nullable Object] */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_min /* var min: Int */;
val* var6 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_p /* var p: nullable Object */;
val* var11 /* : POSet[nullable Object] */;
val* var12 /* : POSetElement[nullable Object] */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var17 /* : Int */;
long var_d /* var d: Int */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var_25 /* var : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__direct_greaters]))(self); /* direct_greaters on <self:POSetElement[nullable Object]>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:Collection[nullable Object]>*/
}
if (var2){
var = 0l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var5 = -1l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_min = var3;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__direct_greaters]))(self); /* direct_greaters on <self:POSetElement[nullable Object]>*/
}
var_ = var6;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[nullable Object]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[nullable Object]>*/
}
var_p = var10;
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_poset__POSetElement__poset]))(self); /* poset on <self:POSetElement[nullable Object]>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(var11->class->vft[COLOR_poset__POSet___91d_93d]))(var11, var_p); /* [] on <var11:POSet[nullable Object]>*/
}
{
var13 = ((long(*)(val* self))(var12->class->vft[COLOR_poset__POSetElement__depth]))(var12); /* depth on <var12:POSetElement[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var17 = var13 + 1l;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_d = var14;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var21 = -1l;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_min,var19) on <var_min:Int> */
var24 = var_min == var19;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_25 = var22;
if (var22){
var18 = var_25;
} else {
{
{ /* Inline kernel#Int#< (var_d,var_min) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var28 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var32 = var_d < var_min;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var18 = var26;
}
if (var18){
var_min = var_d;
} else {
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[nullable Object]>*/
}
var = var_min;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#init for (self: POSetElement[nullable Object]) */
void poset___poset__POSetElement___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_poset___poset__POSetElement___standard__kernel__Object__init]))(self); /* init on <self:POSetElement[nullable Object]>*/
}
RET_LABEL:;
}
