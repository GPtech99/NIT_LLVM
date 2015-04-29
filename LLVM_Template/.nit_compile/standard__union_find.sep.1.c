#include "standard__union_find.sep.0.h"
/* method union_find#DisjointSet#nodes for (self: DisjointSet[nullable Object]): HashMap[nullable Object, DisjointSetNode] */
val* standard___standard__DisjointSet___nodes(val* self) {
val* var /* : HashMap[nullable Object, DisjointSetNode] */;
val* var1 /* : HashMap[nullable Object, DisjointSetNode] */;
var1 = self->attrs[COLOR_standard__union_find__DisjointSet___nodes].val; /* _nodes on <self:DisjointSet[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nodes");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 38);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#nodes= for (self: DisjointSet[nullable Object], HashMap[nullable Object, DisjointSetNode]) */
void standard___standard__DisjointSet___nodes_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (nodes) <p0:HashMap[nullable Object, DisjointSetNode]> isa HashMap[E, DisjointSetNode] */
/* <p0:HashMap[nullable Object, DisjointSetNode]> isa HashMap[E, DisjointSetNode] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__standard__DisjointSet___35dE__standard__union_find__DisjointSetNode];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[E, DisjointSetNode]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 38);
fatal_exit(1);
}
self->attrs[COLOR_standard__union_find__DisjointSet___nodes].val = p0; /* _nodes on <self:DisjointSet[nullable Object]> */
RET_LABEL:;
}
/* method union_find#DisjointSet#from for (self: DisjointSet[nullable Object], DisjointSet[nullable Object]) */
void standard___standard__DisjointSet___from(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: DisjointSet[nullable Object] */;
val* var1 /* : HashMap[DisjointSetNode, DisjointSetNode] */;
val* var_map /* var map: HashMap[DisjointSetNode, DisjointSetNode] */;
val* var2 /* : HashMap[nullable Object, DisjointSetNode] */;
val* var_ /* var : HashMap[nullable Object, DisjointSetNode] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
val* var_4 /* var : HashMapIterator[nullable Object, DisjointSetNode] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var7 /* : nullable Object */;
val* var_v /* var v: DisjointSetNode */;
val* var8 /* : DisjointSetNode */;
val* var_n2 /* var n2: DisjointSetNode */;
val* var9 /* : HashMap[nullable Object, DisjointSetNode] */;
val* var10 /* : DisjointSetNode */;
val* var_p /* var p: DisjointSetNode */;
val* var11 /* : nullable Object */;
val* var_p2 /* var p2: nullable DisjointSetNode */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : DisjointSetNode */;
val* var_15 /* var : DisjointSet[nullable Object] */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
/* Covariant cast for argument 0 (other) <p0:DisjointSet[nullable Object]> isa DisjointSet[E] */
/* <p0:DisjointSet[nullable Object]> isa DisjointSet[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__DisjointSet__standard__DisjointSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "DisjointSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 41);
fatal_exit(1);
}
var_other = p0;
var1 = NEW_standard__HashMap(&type_standard__HashMap__standard__union_find__DisjointSetNode__standard__union_find__DisjointSetNode);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashMap[DisjointSetNode, DisjointSetNode]>*/
}
var_map = var1;
{
var2 = ((val*(*)(val* self))(var_other->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(var_other); /* nodes on <var_other:DisjointSet[nullable Object]>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:HashMap[nullable Object, DisjointSetNode]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_4); /* is_ok on <var_4:HashMapIterator[nullable Object, DisjointSetNode]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_4); /* key on <var_4:HashMapIterator[nullable Object, DisjointSetNode]>*/
}
var_e = var6;
{
var7 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_4); /* item on <var_4:HashMapIterator[nullable Object, DisjointSetNode]>*/
}
var_v = var7;
var8 = NEW_standard__union_find__DisjointSetNode(&type_standard__union_find__DisjointSetNode);
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:DisjointSetNode>*/
}
var_n2 = var8;
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var9->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var9, var_e, var_n2); /* []= on <var9:HashMap[nullable Object, DisjointSetNode]>*/
}
{
var10 = ((val*(*)(val* self, val* p0))(var_other->class->vft[COLOR_standard__union_find__DisjointSet__find]))(var_other, var_e); /* find on <var_other:DisjointSet[nullable Object]>*/
}
var_p = var10;
{
var11 = ((val*(*)(val* self, val* p0))(var_map->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var_map, var_p); /* get_or_null on <var_map:HashMap[DisjointSetNode, DisjointSetNode]>*/
}
var_p2 = var11;
if (var_p2 == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_p2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p2, ((val*)NULL)); /* == on <var_p2:nullable DisjointSetNode>*/
var12 = var13;
}
if (var12){
{
var14 = ((val*(*)(val* self))(var_n2->class->vft[COLOR_standard__union_find__DisjointSetNode__parent]))(var_n2); /* parent on <var_n2:DisjointSetNode>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_map->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_map, var_p, var14); /* []= on <var_map:HashMap[DisjointSetNode, DisjointSetNode]>*/
}
var_15 = self;
{
var16 = ((long(*)(val* self))(var_15->class->vft[COLOR_standard__union_find__DisjointSet__number_of_subsets]))(var_15); /* number_of_subsets on <var_15:DisjointSet[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var23 = var16 + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_15->class->vft[COLOR_standard__union_find__DisjointSet__number_of_subsets_61d]))(var_15, var17); /* number_of_subsets= on <var_15:DisjointSet[nullable Object]>*/
}
} else {
{
((void(*)(val* self, val* p0))(var_n2->class->vft[COLOR_standard__union_find__DisjointSetNode__parent_61d]))(var_n2, var_p2); /* parent= on <var_n2:DisjointSetNode>*/
}
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_4); /* next on <var_4:HashMapIterator[nullable Object, DisjointSetNode]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__MapIterator__finish]))(var_4); /* finish on <var_4:HashMapIterator[nullable Object, DisjointSetNode]>*/
}
RET_LABEL:;
}
/* method union_find#DisjointSet#clone for (self: DisjointSet[nullable Object]): DisjointSet[nullable Object] */
val* standard___standard__DisjointSet___standard__kernel__Cloneable__clone(val* self) {
val* var /* : DisjointSet[nullable Object] */;
val* var1 /* : DisjointSet[nullable Object] */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_standard__DisjointSet(self->type->resolution_table->types[COLOR_standard__DisjointSet__standard__DisjointSet___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__union_find__DisjointSet__from]))(var1, self); /* from on <var1:DisjointSet[nullable Object]>*/
}
/* <var1:DisjointSet[nullable Object]> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_standard__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 74);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#number_of_subsets for (self: DisjointSet[nullable Object]): Int */
long standard___standard__DisjointSet___number_of_subsets(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__union_find__DisjointSet___number_of_subsets].l; /* _number_of_subsets on <self:DisjointSet[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#number_of_subsets= for (self: DisjointSet[nullable Object], Int) */
void standard___standard__DisjointSet___number_of_subsets_61d(val* self, long p0) {
self->attrs[COLOR_standard__union_find__DisjointSet___number_of_subsets].l = p0; /* _number_of_subsets on <self:DisjointSet[nullable Object]> */
RET_LABEL:;
}
/* method union_find#DisjointSet#find for (self: DisjointSet[nullable Object], nullable Object): DisjointSetNode */
val* standard___standard__DisjointSet___find(val* self, val* p0) {
val* var /* : DisjointSetNode */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : HashMap[nullable Object, DisjointSetNode] */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[nullable Object, DisjointSetNode] */;
val* var5 /* : nullable Object */;
val* var_ne /* var ne: DisjointSetNode */;
val* var6 /* : DisjointSetNode */;
short int var7 /* : Bool */;
val* var8 /* : DisjointSetNode */;
val* var_res /* var res: DisjointSetNode */;
val* var9 /* : HashMap[nullable Object, DisjointSetNode] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__DisjointSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 87);
fatal_exit(1);
}
var_e = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var2, var_e); /* has_key on <var2:HashMap[nullable Object, DisjointSetNode]>*/
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 91);
fatal_exit(1);
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var4, var_e); /* [] on <var4:HashMap[nullable Object, DisjointSetNode]>*/
}
var_ne = var5;
{
var6 = ((val*(*)(val* self))(var_ne->class->vft[COLOR_standard__union_find__DisjointSetNode__parent]))(var_ne); /* parent on <var_ne:DisjointSetNode>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var_ne); /* == on <var6:DisjointSetNode>*/
}
if (var7){
var = var_ne;
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__nfind]))(self, var_ne); /* nfind on <self:DisjointSet[nullable Object]>*/
}
var_res = var8;
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var9->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var9, var_e, var_res); /* []= on <var9:HashMap[nullable Object, DisjointSetNode]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#nfind for (self: DisjointSet[nullable Object], DisjointSetNode): DisjointSetNode */
val* standard___standard__DisjointSet___nfind(val* self, val* p0) {
val* var /* : DisjointSetNode */;
val* var_ne /* var ne: DisjointSetNode */;
val* var1 /* : DisjointSetNode */;
val* var_nf /* var nf: DisjointSetNode */;
short int var2 /* : Bool */;
val* var3 /* : DisjointSetNode */;
val* var_ng /* var ng: DisjointSetNode */;
var_ne = p0;
{
var1 = ((val*(*)(val* self))(var_ne->class->vft[COLOR_standard__union_find__DisjointSetNode__parent]))(var_ne); /* parent on <var_ne:DisjointSetNode>*/
}
var_nf = var1;
{
var2 = ((short int(*)(val* self, val* p0))(var_nf->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nf, var_ne); /* == on <var_nf:DisjointSetNode>*/
}
if (var2){
var = var_ne;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__nfind]))(self, var_nf); /* nfind on <self:DisjointSet[nullable Object]>*/
}
var_ng = var3;
{
((void(*)(val* self, val* p0))(var_ne->class->vft[COLOR_standard__union_find__DisjointSetNode__parent_61d]))(var_ne, var_ng); /* parent= on <var_ne:DisjointSetNode>*/
}
var = var_ng;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#has for (self: DisjointSet[nullable Object], nullable Object): Bool */
short int standard___standard__DisjointSet___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : HashMap[nullable Object, DisjointSetNode] */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__DisjointSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 111);
fatal_exit(1);
}
var_e = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var2, var_e); /* has_key on <var2:HashMap[nullable Object, DisjointSetNode]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#iterator for (self: DisjointSet[nullable Object]): Iterator[nullable Object] */
val* standard___standard__DisjointSet___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : HashMap[nullable Object, DisjointSetNode] */;
val* var2 /* : Collection[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var1); /* keys on <var1:HashMap[nullable Object, DisjointSetNode]>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var2); /* iterator on <var2:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#add for (self: DisjointSet[nullable Object], nullable Object) */
void standard___standard__DisjointSet___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : HashMap[nullable Object, DisjointSetNode] */;
short int var2 /* : Bool */;
val* var3 /* : DisjointSetNode */;
val* var_ne /* var ne: DisjointSetNode */;
val* var4 /* : HashMap[nullable Object, DisjointSetNode] */;
val* var_ /* var : DisjointSet[nullable Object] */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__DisjointSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 125);
fatal_exit(1);
}
var_e = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_e); /* has_key on <var1:HashMap[nullable Object, DisjointSetNode]>*/
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = NEW_standard__union_find__DisjointSetNode(&type_standard__union_find__DisjointSetNode);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:DisjointSetNode>*/
}
var_ne = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var4, var_e, var_ne); /* []= on <var4:HashMap[nullable Object, DisjointSetNode]>*/
}
var_ = self;
{
var5 = ((long(*)(val* self))(var_->class->vft[COLOR_standard__union_find__DisjointSet__number_of_subsets]))(var_); /* number_of_subsets on <var_:DisjointSet[nullable Object]>*/
}
{
{ /* Inline kernel#Int#+ (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var12 = var5 + 1l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__union_find__DisjointSet__number_of_subsets_61d]))(var_, var6); /* number_of_subsets= on <var_:DisjointSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method union_find#DisjointSet#in_same_subset for (self: DisjointSet[nullable Object], nullable Object, nullable Object): Bool */
short int standard___standard__DisjointSet___in_same_subset(val* self, val* p0, val* p1) {
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
val* var_e /* var e: nullable Object */;
val* var_f /* var f: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : DisjointSetNode */;
val* var12 /* : DisjointSetNode */;
short int var13 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__DisjointSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 137);
fatal_exit(1);
}
/* Covariant cast for argument 1 (f) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct5 = self->type->resolution_table->types[COLOR_standard__DisjointSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 137);
fatal_exit(1);
}
var_e = p0;
var_f = p1;
if (var_e == NULL) {
var9 = (var_f == NULL);
} else {
var10 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e, var_f); /* == on <var_e:nullable Object>*/
var9 = var10;
}
var_ = var9;
if (var9){
var8 = var_;
} else {
{
var11 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__find]))(self, var_e); /* find on <self:DisjointSet[nullable Object]>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__find]))(self, var_f); /* find on <self:DisjointSet[nullable Object]>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var12); /* == on <var11:DisjointSetNode>*/
}
var8 = var13;
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#all_in_same_subset for (self: DisjointSet[nullable Object], Collection[nullable Object]): Bool */
short int standard___standard__DisjointSet___all_in_same_subset(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_es /* var es: Collection[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : DisjointSetNode */;
val* var_nf /* var nf: DisjointSetNode */;
val* var_ /* var : Collection[nullable Object] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var9 /* : DisjointSetNode */;
val* var_ne /* var ne: DisjointSetNode */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (es) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__DisjointSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 143);
fatal_exit(1);
}
var_es = p0;
{
var2 = ((short int(*)(val* self))((((long)var_es&3)?class_info[((long)var_es&3)]:var_es->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_es); /* is_empty on <var_es:Collection[nullable Object]>*/
}
if (var2){
var = 1;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))((((long)var_es&3)?class_info[((long)var_es&3)]:var_es->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var_es); /* first on <var_es:Collection[nullable Object]>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__find]))(self, var3); /* find on <self:DisjointSet[nullable Object]>*/
}
var_nf = var4;
var_ = var_es;
{
var5 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[nullable Object]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[nullable Object]>*/
}
var_e = var8;
{
var9 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__find]))(self, var_e); /* find on <self:DisjointSet[nullable Object]>*/
}
var_ne = var9;
{
var10 = ((short int(*)(val* self, val* p0))(var_ne->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ne, var_nf); /* != on <var_ne:DisjointSetNode>*/
}
if (var10){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#to_partitions for (self: DisjointSet[nullable Object]): Collection[Set[nullable Object]] */
val* standard___standard__DisjointSet___to_partitions(val* self) {
val* var /* : Collection[Set[nullable Object]] */;
val* var1 /* : Collection[Set[nullable Object]] */;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__to_subpartition]))(self, self); /* to_subpartition on <self:DisjointSet[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#to_subpartition for (self: DisjointSet[nullable Object], Collection[nullable Object]): Collection[Set[nullable Object]] */
val* standard___standard__DisjointSet___to_subpartition(val* self, val* p0) {
val* var /* : Collection[Set[nullable Object]] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_es /* var es: Collection[nullable Object] */;
val* var2 /* : HashMap[DisjointSetNode, Set[nullable Object]] */;
val* var_map /* var map: HashMap[DisjointSetNode, Set[nullable Object]] */;
val* var_ /* var : Collection[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var7 /* : DisjointSetNode */;
val* var_ne /* var ne: DisjointSetNode */;
val* var8 /* : nullable Object */;
val* var_set /* var set: nullable Set[nullable Object] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : HashSet[nullable Object] */;
val* var12 /* : Collection[nullable Object] */;
/* Covariant cast for argument 0 (es) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__DisjointSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 175);
fatal_exit(1);
}
var_es = p0;
var2 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__standard__union_find__DisjointSetNode__standard__Set__standard__DisjointSet___35dE]);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:HashMap[DisjointSetNode, Set[nullable Object]]>*/
}
var_map = var2;
var_ = var_es;
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
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__find]))(self, var_e); /* find on <self:DisjointSet[nullable Object]>*/
}
var_ne = var7;
{
var8 = ((val*(*)(val* self, val* p0))(var_map->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var_map, var_ne); /* get_or_null on <var_map:HashMap[DisjointSetNode, Set[nullable Object]]>*/
}
var_set = var8;
if (var_set == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))((((long)var_set&3)?class_info[((long)var_set&3)]:var_set->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_set, ((val*)NULL)); /* == on <var_set:nullable Set[nullable Object]>*/
var9 = var10;
}
if (var9){
var11 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__standard__DisjointSet___35dE]);
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:HashSet[nullable Object]>*/
}
var_set = var11;
{
((void(*)(val* self, val* p0, val* p1))(var_map->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_map, var_ne, var_set); /* []= on <var_map:HashMap[DisjointSetNode, Set[nullable Object]]>*/
}
} else {
}
{
((void(*)(val* self, val* p0))((((long)var_set&3)?class_info[((long)var_set&3)]:var_set->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_set, var_e); /* add on <var_set:nullable Set[nullable Object](Set[nullable Object])>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[nullable Object]>*/
}
{
var12 = ((val*(*)(val* self))(var_map->class->vft[COLOR_standard__abstract_collection__MapRead__values]))(var_map); /* values on <var_map:HashMap[DisjointSetNode, Set[nullable Object]]>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSet#union for (self: DisjointSet[nullable Object], nullable Object, nullable Object) */
void standard___standard__DisjointSet___union(val* self, val* p0, val* p1) {
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
val* var_e /* var e: nullable Object */;
val* var_f /* var f: nullable Object */;
val* var7 /* : DisjointSetNode */;
val* var_ne /* var ne: DisjointSetNode */;
val* var8 /* : DisjointSetNode */;
val* var_nf /* var nf: DisjointSetNode */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var_er /* var er: Int */;
long var11 /* : Int */;
long var_fr /* var fr: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : HashMap[nullable Object, DisjointSetNode] */;
val* var20 /* : HashMap[nullable Object, DisjointSetNode] */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
val* var_ /* var : DisjointSet[nullable Object] */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__DisjointSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 199);
fatal_exit(1);
}
/* Covariant cast for argument 1 (f) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_standard__DisjointSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 199);
fatal_exit(1);
}
var_e = p0;
var_f = p1;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__find]))(self, var_e); /* find on <self:DisjointSet[nullable Object]>*/
}
var_ne = var7;
{
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__union_find__DisjointSet__find]))(self, var_f); /* find on <self:DisjointSet[nullable Object]>*/
}
var_nf = var8;
{
var9 = ((short int(*)(val* self, val* p0))(var_ne->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ne, var_nf); /* == on <var_ne:DisjointSetNode>*/
}
if (var9){
goto RET_LABEL;
} else {
}
{
var10 = ((long(*)(val* self))(var_ne->class->vft[COLOR_standard__union_find__DisjointSetNode__rank]))(var_ne); /* rank on <var_ne:DisjointSetNode>*/
}
var_er = var10;
{
var11 = ((long(*)(val* self))(var_nf->class->vft[COLOR_standard__union_find__DisjointSetNode__rank]))(var_nf); /* rank on <var_nf:DisjointSetNode>*/
}
var_fr = var11;
{
{ /* Inline kernel#Int#< (var_er,var_fr) on <var_er:Int> */
/* Covariant cast for argument 0 (i) <var_fr:Int> isa OTHER */
/* <var_fr:Int> isa OTHER */
var14 = 1; /* easy <var_fr:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var18 = var_er < var_fr;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
((void(*)(val* self, val* p0))(var_ne->class->vft[COLOR_standard__union_find__DisjointSetNode__parent_61d]))(var_ne, var_nf); /* parent= on <var_ne:DisjointSetNode>*/
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var19->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var19, var_e, var_nf); /* []= on <var19:HashMap[nullable Object, DisjointSetNode]>*/
}
} else {
{
((void(*)(val* self, val* p0))(var_nf->class->vft[COLOR_standard__union_find__DisjointSetNode__parent_61d]))(var_nf, var_ne); /* parent= on <var_nf:DisjointSetNode>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__union_find__DisjointSet__nodes]))(self); /* nodes on <self:DisjointSet[nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var20->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var20, var_f, var_ne); /* []= on <var20:HashMap[nullable Object, DisjointSetNode]>*/
}
{
{ /* Inline kernel#Int#== (var_er,var_fr) on <var_er:Int> */
var23 = var_er == var_fr;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline kernel#Int#+ (var_er,1l) on <var_er:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var30 = var_er + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_ne->class->vft[COLOR_standard__union_find__DisjointSetNode__rank_61d]))(var_ne, var24); /* rank= on <var_ne:DisjointSetNode>*/
}
} else {
}
}
var_ = self;
{
var31 = ((long(*)(val* self))(var_->class->vft[COLOR_standard__union_find__DisjointSet__number_of_subsets]))(var_); /* number_of_subsets on <var_:DisjointSet[nullable Object]>*/
}
{
{ /* Inline kernel#Int#- (var31,1l) on <var31:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var38 = var31 - 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_standard__union_find__DisjointSet__number_of_subsets_61d]))(var_, var32); /* number_of_subsets= on <var_:DisjointSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method union_find#DisjointSet#union_all for (self: DisjointSet[nullable Object], Collection[nullable Object]) */
void standard___standard__DisjointSet___union_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_es /* var es: Collection[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_f /* var f: nullable Object */;
val* var_ /* var : Collection[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
/* Covariant cast for argument 0 (es) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__DisjointSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 225);
fatal_exit(1);
}
var_es = p0;
{
var1 = ((short int(*)(val* self))((((long)var_es&3)?class_info[((long)var_es&3)]:var_es->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_es); /* is_empty on <var_es:Collection[nullable Object]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))((((long)var_es&3)?class_info[((long)var_es&3)]:var_es->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var_es); /* first on <var_es:Collection[nullable Object]>*/
}
var_f = var2;
var_ = var_es;
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
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_standard__union_find__DisjointSet__union]))(self, var_e, var_f); /* union on <self:DisjointSet[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method union_find#DisjointSetNode#parent for (self: DisjointSetNode): DisjointSetNode */
val* standard__union_find___standard__union_find__DisjointSetNode___parent(val* self) {
val* var /* : DisjointSetNode */;
val* var1 /* : DisjointSetNode */;
var1 = self->attrs[COLOR_standard__union_find__DisjointSetNode___parent].val; /* _parent on <self:DisjointSetNode> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__union_find, 237);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSetNode#parent= for (self: DisjointSetNode, DisjointSetNode) */
void standard__union_find___standard__union_find__DisjointSetNode___parent_61d(val* self, val* p0) {
self->attrs[COLOR_standard__union_find__DisjointSetNode___parent].val = p0; /* _parent on <self:DisjointSetNode> */
RET_LABEL:;
}
/* method union_find#DisjointSetNode#rank for (self: DisjointSetNode): Int */
long standard__union_find___standard__union_find__DisjointSetNode___rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__union_find__DisjointSetNode___rank].l; /* _rank on <self:DisjointSetNode> */
var = var1;
RET_LABEL:;
return var;
}
/* method union_find#DisjointSetNode#rank= for (self: DisjointSetNode, Int) */
void standard__union_find___standard__union_find__DisjointSetNode___rank_61d(val* self, long p0) {
self->attrs[COLOR_standard__union_find__DisjointSetNode___rank].l = p0; /* _rank on <self:DisjointSetNode> */
RET_LABEL:;
}
