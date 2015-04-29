#include "more_collections.sep.0.h"
/* method more_collections#MultiHashMap#add_one for (self: MultiHashMap[nullable Object, nullable Object], nullable Object, nullable Object) */
void more_collections___more_collections__MultiHashMap___add_one(val* self, val* p0, val* p1) {
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
val* var_k /* var k: nullable Object */;
val* var_v /* var v: nullable Object */;
val* var7 /* : nullable Object */;
val* var_x /* var x: nullable Array[nullable Object] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[nullable Object] */;
val* var_ /* var : Array[nullable Object] */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 35);
fatal_exit(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa V */
/* <p1:nullable Object> isa V */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap___35dV];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 35);
fatal_exit(1);
}
var_k = p0;
var_v = p1;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(self, var_k); /* get_or_null on <self:MultiHashMap[nullable Object, nullable Object]>*/
}
var_x = var7;
if (var_x == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_x, ((val*)NULL)); /* != on <var_x:nullable Array[nullable Object]>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_x, var_v); /* add on <var_x:nullable Array[nullable Object](Array[nullable Object])>*/
}
} else {
var10 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__more_collections__MultiHashMap___35dV]);
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_standard__array__Array__with_capacity]))(var10, 1l); /* with_capacity on <var10:Array[nullable Object]>*/
}
var_ = var10;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_v); /* push on <var_:Array[nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(self, var_k, var_); /* []= on <self:MultiHashMap[nullable Object, nullable Object]>*/
}
}
RET_LABEL:;
}
/* method more_collections#MultiHashMap#provide_default_value for (self: MultiHashMap[nullable Object, nullable Object], nullable Object): Array[nullable Object] */
val* more_collections___more_collections__MultiHashMap___standard__abstract_collection__MapRead__provide_default_value(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 47);
fatal_exit(1);
}
var_key = p0;
var2 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__more_collections__MultiHashMap___35dV]);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[nullable Object]>*/
}
var_res = var2;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(self, var_key, var_res); /* []= on <self:MultiHashMap[nullable Object, nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#level1 for (self: HashMap2[nullable Object, nullable Object, nullable Object]): HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */
val* more_collections___more_collections__HashMap2___level1(val* self) {
val* var /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var1 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 64);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#level1= for (self: HashMap2[nullable Object, nullable Object, nullable Object], HashMap[nullable Object, HashMap[nullable Object, nullable Object]]) */
void more_collections___more_collections__HashMap2___level1_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (level1) <p0:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]> isa HashMap[K1, HashMap[K2, V]] */
/* <p0:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]> isa HashMap[K1, HashMap[K2, V]] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__more_collections__HashMap2___35dK1__standard__HashMap__more_collections__HashMap2___35dK2__more_collections__HashMap2___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[K1, HashMap[K2, V]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 64);
fatal_exit(1);
}
self->attrs[COLOR_more_collections__HashMap2___level1].val = p0; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method more_collections#HashMap2#[] for (self: HashMap2[nullable Object, nullable Object, nullable Object], nullable Object, nullable Object): nullable Object */
val* more_collections___more_collections__HashMap2____91d_93d(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
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
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var8 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var9 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap[nullable Object, nullable Object] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 66);
fatal_exit(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct5 = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK2];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 66);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_more_collections__HashMap2__level1]))(self); /* level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]>*/
}
var_level1 = var8;
{
var9 = ((val*(*)(val* self, val* p0))(var_level1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var_level1, var_k1); /* get_or_null on <var_level1:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
var_level2 = var9;
if (var_level2 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_level2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_level2, ((val*)NULL)); /* == on <var_level2:nullable HashMap[nullable Object, nullable Object]>*/
var10 = var11;
}
if (var10){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self, val* p0))(var_level2->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var_level2, var_k2); /* get_or_null on <var_level2:nullable HashMap[nullable Object, nullable Object](HashMap[nullable Object, nullable Object])>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#[]= for (self: HashMap2[nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object) */
void more_collections___more_collections__HashMap2____91d_93d_61d(val* self, val* p0, val* p1, val* p2) {
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
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
short int is_nullable11;
const char* var_class_name12;
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var_v /* var v: nullable Object */;
val* var13 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var14 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap[nullable Object, nullable Object] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : HashMap[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 76);
fatal_exit(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK2];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 76);
fatal_exit(1);
}
/* Covariant cast for argument 2 (v) <p2:nullable Object> isa V */
/* <p2:nullable Object> isa V */
type_struct10 = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dV];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
is_nullable11 = type_struct10->is_nullable;
if(p2 == NULL) {
var7 = is_nullable11;
} else {
if(cltype8 >= (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name12 = p2 == NULL ? "null" : (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 76);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_v = p2;
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_more_collections__HashMap2__level1]))(self); /* level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]>*/
}
var_level1 = var13;
{
var14 = ((val*(*)(val* self, val* p0))(var_level1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var_level1, var_k1); /* get_or_null on <var_level1:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
var_level2 = var14;
if (var_level2 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_level2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_level2, ((val*)NULL)); /* == on <var_level2:nullable HashMap[nullable Object, nullable Object]>*/
var15 = var16;
}
if (var15){
var17 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__more_collections__HashMap2___35dK2__more_collections__HashMap2___35dV]);
{
((void(*)(val* self))(var17->class->vft[COLOR_standard__kernel__Object__init]))(var17); /* init on <var17:HashMap[nullable Object, nullable Object]>*/
}
var_level2 = var17;
{
((void(*)(val* self, val* p0, val* p1))(var_level1->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_level1, var_k1, var_level2); /* []= on <var_level1:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(var_level2->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_level2, var_k2, var_v); /* []= on <var_level2:nullable HashMap[nullable Object, nullable Object](HashMap[nullable Object, nullable Object])>*/
}
RET_LABEL:;
}
/* method more_collections#HashMap2#remove_at for (self: HashMap2[nullable Object, nullable Object, nullable Object], nullable Object, nullable Object) */
void more_collections___more_collections__HashMap2___remove_at(val* self, val* p0, val* p1) {
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
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var7 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var8 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap[nullable Object, nullable Object] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Collection[nullable Object] */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 88);
fatal_exit(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK2];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 88);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_more_collections__HashMap2__level1]))(self); /* level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]>*/
}
var_level1 = var7;
{
var8 = ((val*(*)(val* self, val* p0))(var_level1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var_level1, var_k1); /* get_or_null on <var_level1:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
var_level2 = var8;
if (var_level2 == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_level2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_level2, ((val*)NULL)); /* == on <var_level2:nullable HashMap[nullable Object, nullable Object]>*/
var9 = var10;
}
if (var9){
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(var_level2->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var_level2); /* keys on <var_level2:nullable HashMap[nullable Object, nullable Object](HashMap[nullable Object, nullable Object])>*/
}
{
((void(*)(val* self, val* p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var11, var_k2); /* remove on <var11:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
RET_LABEL:;
}
/* method more_collections#HashMap2#clear for (self: HashMap2[nullable Object, nullable Object, nullable Object]) */
void more_collections___more_collections__HashMap2___clear(val* self) {
val* var /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_more_collections__HashMap2__level1]))(self); /* level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__Map__clear]))(var); /* clear on <var:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
RET_LABEL:;
}
/* method more_collections#HashMap3#level1 for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]): HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */
val* more_collections___more_collections__HashMap3___level1(val* self) {
val* var /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var1 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 111);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#level1= for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object], HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]) */
void more_collections___more_collections__HashMap3___level1_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (level1) <p0:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]> isa HashMap[K1, HashMap2[K2, K3, V]] */
/* <p0:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]> isa HashMap[K1, HashMap2[K2, K3, V]] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__more_collections__HashMap3___35dK1__more_collections__HashMap2__more_collections__HashMap3___35dK2__more_collections__HashMap3___35dK3__more_collections__HashMap3___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[K1, HashMap2[K2, K3, V]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 111);
fatal_exit(1);
}
self->attrs[COLOR_more_collections__HashMap3___level1].val = p0; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method more_collections#HashMap3#[] for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object): nullable Object */
val* more_collections___more_collections__HashMap3____91d_93d(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Object */;
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
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const struct type* type_struct11;
short int is_nullable12;
const char* var_class_name13;
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var_k3 /* var k3: nullable Object */;
val* var14 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var15 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap2[nullable Object, nullable Object, nullable Object] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 113);
fatal_exit(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct5 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK2];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 113);
fatal_exit(1);
}
/* Covariant cast for argument 2 (k3) <p2:nullable Object> isa K3 */
/* <p2:nullable Object> isa K3 */
type_struct11 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK3];
cltype9 = type_struct11->color;
idtype10 = type_struct11->id;
is_nullable12 = type_struct11->is_nullable;
if(p2 == NULL) {
var8 = is_nullable12;
} else {
if(cltype9 >= (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
var_class_name13 = p2 == NULL ? "null" : (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K3", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 113);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_more_collections__HashMap3__level1]))(self); /* level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]>*/
}
var_level1 = var14;
{
var15 = ((val*(*)(val* self, val* p0))(var_level1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var_level1, var_k1); /* get_or_null on <var_level1:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
var_level2 = var15;
if (var_level2 == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var_level2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_level2, ((val*)NULL)); /* == on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object]>*/
var16 = var17;
}
if (var16){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_level2->class->vft[COLOR_more_collections__HashMap2___91d_93d]))(var_level2, var_k2, var_k3); /* [] on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object](HashMap2[nullable Object, nullable Object, nullable Object])>*/
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#[]= for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object, nullable Object) */
void more_collections___more_collections__HashMap3____91d_93d_61d(val* self, val* p0, val* p1, val* p2, val* p3) {
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
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
short int is_nullable11;
const char* var_class_name12;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const struct type* type_struct16;
short int is_nullable17;
const char* var_class_name18;
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var_k3 /* var k3: nullable Object */;
val* var_v /* var v: nullable Object */;
val* var19 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var20 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap2[nullable Object, nullable Object, nullable Object] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : HashMap2[nullable Object, nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 123);
fatal_exit(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK2];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 123);
fatal_exit(1);
}
/* Covariant cast for argument 2 (k3) <p2:nullable Object> isa K3 */
/* <p2:nullable Object> isa K3 */
type_struct10 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK3];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
is_nullable11 = type_struct10->is_nullable;
if(p2 == NULL) {
var7 = is_nullable11;
} else {
if(cltype8 >= (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name12 = p2 == NULL ? "null" : (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K3", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 123);
fatal_exit(1);
}
/* Covariant cast for argument 3 (v) <p3:nullable Object> isa V */
/* <p3:nullable Object> isa V */
type_struct16 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dV];
cltype14 = type_struct16->color;
idtype15 = type_struct16->id;
is_nullable17 = type_struct16->is_nullable;
if(p3 == NULL) {
var13 = is_nullable17;
} else {
if(cltype14 >= (((long)p3&3)?type_info[((long)p3&3)]:p3->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)p3&3)?type_info[((long)p3&3)]:p3->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name18 = p3 == NULL ? "null" : (((long)p3&3)?type_info[((long)p3&3)]:p3->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 123);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
var_v = p3;
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_more_collections__HashMap3__level1]))(self); /* level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]>*/
}
var_level1 = var19;
{
var20 = ((val*(*)(val* self, val* p0))(var_level1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var_level1, var_k1); /* get_or_null on <var_level1:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
var_level2 = var20;
if (var_level2 == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = ((short int(*)(val* self, val* p0))(var_level2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_level2, ((val*)NULL)); /* == on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object]>*/
var21 = var22;
}
if (var21){
var23 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__more_collections__HashMap3___35dK2__more_collections__HashMap3___35dK3__more_collections__HashMap3___35dV]);
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:HashMap2[nullable Object, nullable Object, nullable Object]>*/
}
var_level2 = var23;
{
((void(*)(val* self, val* p0, val* p1))(var_level1->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_level1, var_k1, var_level2); /* []= on <var_level1:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
} else {
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_level2->class->vft[COLOR_more_collections__HashMap2___91d_93d_61d]))(var_level2, var_k2, var_k3, var_v); /* []= on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object](HashMap2[nullable Object, nullable Object, nullable Object])>*/
}
RET_LABEL:;
}
/* method more_collections#HashMap3#remove_at for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object) */
void more_collections___more_collections__HashMap3___remove_at(val* self, val* p0, val* p1, val* p2) {
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
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
short int is_nullable11;
const char* var_class_name12;
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var_k3 /* var k3: nullable Object */;
val* var13 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var14 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap2[nullable Object, nullable Object, nullable Object] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 135);
fatal_exit(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK2];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 135);
fatal_exit(1);
}
/* Covariant cast for argument 2 (k3) <p2:nullable Object> isa K3 */
/* <p2:nullable Object> isa K3 */
type_struct10 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK3];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
is_nullable11 = type_struct10->is_nullable;
if(p2 == NULL) {
var7 = is_nullable11;
} else {
if(cltype8 >= (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name12 = p2 == NULL ? "null" : (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K3", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 135);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_more_collections__HashMap3__level1]))(self); /* level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]>*/
}
var_level1 = var13;
{
var14 = ((val*(*)(val* self, val* p0))(var_level1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var_level1, var_k1); /* get_or_null on <var_level1:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
var_level2 = var14;
if (var_level2 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_level2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_level2, ((val*)NULL)); /* == on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object]>*/
var15 = var16;
}
if (var15){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(var_level2->class->vft[COLOR_more_collections__HashMap2__remove_at]))(var_level2, var_k2, var_k3); /* remove_at on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object](HashMap2[nullable Object, nullable Object, nullable Object])>*/
}
RET_LABEL:;
}
/* method more_collections#HashMap3#clear for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]) */
void more_collections___more_collections__HashMap3___clear(val* self) {
val* var /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_more_collections__HashMap3__level1]))(self); /* level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__Map__clear]))(var); /* clear on <var:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
RET_LABEL:;
}
/* method more_collections#DefaultMap#default for (self: DefaultMap[nullable Object, nullable Object]): nullable Object */
val* more_collections___more_collections__DefaultMap___default(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_more_collections__DefaultMap___default].val; /* _default on <self:DefaultMap[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#DefaultMap#default= for (self: DefaultMap[nullable Object, nullable Object], nullable Object) */
void more_collections___more_collections__DefaultMap___default_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (default) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_more_collections__DefaultMap___35dV];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 191);
fatal_exit(1);
}
self->attrs[COLOR_more_collections__DefaultMap___default].val = p0; /* _default on <self:DefaultMap[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method more_collections#DefaultMap#provide_default_value for (self: DefaultMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* more_collections___more_collections__DefaultMap___standard__abstract_collection__MapRead__provide_default_value(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_more_collections__DefaultMap___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 194);
fatal_exit(1);
}
var_key = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_more_collections__DefaultMap__default]))(self); /* default on <self:DefaultMap[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#DefaultMap#init for (self: DefaultMap[nullable Object, nullable Object]) */
void more_collections___more_collections__DefaultMap___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_more_collections___more_collections__DefaultMap___standard__kernel__Object__init]))(self); /* init on <self:DefaultMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
