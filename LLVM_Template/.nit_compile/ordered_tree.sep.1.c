#include "ordered_tree.sep.0.h"
/* method ordered_tree#OrderedTree#roots for (self: OrderedTree[Object]): Array[Object] */
val* ordered_tree___ordered_tree__OrderedTree___roots(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#roots= for (self: OrderedTree[Object], Array[Object]) */
void ordered_tree___ordered_tree__OrderedTree___roots_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (roots) <p0:Array[Object]> isa Array[E] */
/* <p0:Array[Object]> isa Array[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Array__ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
fatal_exit(1);
}
self->attrs[COLOR_ordered_tree__OrderedTree___roots].val = p0; /* _roots on <self:OrderedTree[Object]> */
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sub for (self: OrderedTree[Object]): HashMap[Object, Array[Object]] */
val* ordered_tree___ordered_tree__OrderedTree___sub(val* self) {
val* var /* : HashMap[Object, Array[Object]] */;
val* var1 /* : HashMap[Object, Array[Object]] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#sub= for (self: OrderedTree[Object], HashMap[Object, Array[Object]]) */
void ordered_tree___ordered_tree__OrderedTree___sub_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (sub) <p0:HashMap[Object, Array[Object]]> isa HashMap[E, Array[E]] */
/* <p0:HashMap[Object, Array[Object]]> isa HashMap[E, Array[E]] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__ordered_tree__OrderedTree___35dE__standard__Array__ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[E, Array[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
self->attrs[COLOR_ordered_tree__OrderedTree___sub].val = p0; /* _sub on <self:OrderedTree[Object]> */
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#add for (self: OrderedTree[Object], nullable Object, Object) */
void ordered_tree___ordered_tree__OrderedTree___add(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_p /* var p: nullable Object */;
val* var_e /* var e: Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
val* var9 /* : HashMap[Object, Array[Object]] */;
short int var10 /* : Bool */;
val* var11 /* : HashMap[Object, Array[Object]] */;
val* var12 /* : nullable Object */;
val* var13 /* : HashMap[Object, Array[Object]] */;
val* var14 /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
/* Covariant cast for argument 0 (p) <p0:nullable Object> isa nullable E */
/* <p0:nullable Object> isa nullable E */
type_struct = self->type->resolution_table->types[COLOR_nullable__ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 72);
fatal_exit(1);
}
/* Covariant cast for argument 1 (e) <p1:Object> isa E */
/* <p1:Object> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 72);
fatal_exit(1);
}
var_p = p0;
var_e = p1;
if (var_p == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))((((long)var_p&3)?class_info[((long)var_p&3)]:var_p->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable Object>*/
var6 = var7;
}
if (var6){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self); /* roots on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var8, var_e); /* add on <var8:Array[Object]>*/
}
} else {
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self); /* sub on <self:OrderedTree[Object]>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var9, var_p); /* has_key on <var9:HashMap[Object, Array[Object]]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self); /* sub on <self:OrderedTree[Object]>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var11, var_p); /* [] on <var11:HashMap[Object, Array[Object]]>*/
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var12, var_e); /* add on <var12:nullable Object(Array[Object])>*/
}
} else {
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self); /* sub on <self:OrderedTree[Object]>*/
}
var14 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__ordered_tree__OrderedTree___35dE]);
{
((void(*)(val* self, long p0))(var14->class->vft[COLOR_standard__array__Array__with_capacity]))(var14, 1l); /* with_capacity on <var14:Array[Object]>*/
}
var_ = var14;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_e); /* push on <var_:Array[Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var13->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var13, var_p, var_); /* []= on <var13:HashMap[Object, Array[Object]]>*/
}
}
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#write_to for (self: OrderedTree[Object], Writer) */
void ordered_tree___ordered_tree__OrderedTree___standard__stream__Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
val* var /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : ArrayIterator[Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_r /* var r: Object */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
var_stream = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self); /* roots on <self:OrderedTree[Object]>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Object]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:ArrayIterator[Object]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:ArrayIterator[Object]>*/
}
var_r = var4;
{
var5 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_ordered_tree__OrderedTree__display]))(self, var_r); /* display on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_stream->class->vft[COLOR_standard__stream__Writer__write]))(var_stream, var5); /* write on <var_stream:Writer>*/
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "\n";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var_stream->class->vft[COLOR_standard__stream__Writer__write]))(var_stream, var6); /* write on <var_stream:Writer>*/
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "";
var12 = standard___standard__NativeString___to_s_with_length(var11, 0l);
var10 = var12;
varonce9 = var10;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub_write_to]))(self, var_stream, var_r, var10); /* sub_write_to on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sub_write_to for (self: OrderedTree[Object], Writer, Object, String) */
void ordered_tree___ordered_tree__OrderedTree___sub_write_to(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_o /* var o: Writer */;
val* var_e /* var e: Object */;
val* var_prefix /* var prefix: String */;
val* var1 /* : HashMap[Object, Array[Object]] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[Object, Array[Object]] */;
val* var5 /* : nullable Object */;
val* var_subs /* var subs: Array[Object] */;
val* var6 /* : nullable Object */;
val* var_last /* var last: Object */;
val* var_ /* var : Array[Object] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_e2 /* var e2: Object */;
short int var11 /* : Bool */;
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
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
/* Covariant cast for argument 1 (e) <p1:Object> isa E */
/* <p1:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 97);
fatal_exit(1);
}
var_o = p0;
var_e = p1;
var_prefix = p2;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self); /* sub on <self:OrderedTree[Object]>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_e); /* has_key on <var1:HashMap[Object, Array[Object]]>*/
}
var3 = !var2;
if (var3){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self); /* sub on <self:OrderedTree[Object]>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var4, var_e); /* [] on <var4:HashMap[Object, Array[Object]]>*/
}
var_subs = var5;
{
var6 = ((val*(*)(val* self))(var_subs->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var_subs); /* last on <var_subs:Array[Object]>*/
}
var_last = var6;
var_ = var_subs;
{
var7 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Object]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:ArrayIterator[Object]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:ArrayIterator[Object]>*/
}
var_e2 = var10;
{
var11 = ((short int(*)(val* self, val* p0))((((long)var_e2&3)?class_info[((long)var_e2&3)]:var_e2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e2, var_last); /* != on <var_e2:Object>*/
}
if (var11){
if (unlikely(varonce==NULL)) {
var12 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "|--";
var16 = standard___standard__NativeString___to_s_with_length(var15, 3l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[1]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\n";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var12)->values[3]=var18;
} else {
var12 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var12)->values[0]=var_prefix;
{
var21 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_ordered_tree__OrderedTree__display]))(self, var_e2); /* display on <self:OrderedTree[Object]>*/
}
((struct instance_standard__NativeArray*)var12)->values[2]=var21;
{
var22 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
((void(*)(val* self, val* p0))(var_o->class->vft[COLOR_standard__stream__Writer__write]))(var_o, var22); /* write on <var_o:Writer>*/
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "|  ";
var26 = standard___standard__NativeString___to_s_with_length(var25, 3l);
var24 = var26;
varonce23 = var24;
}
{
var27 = ((val*(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_standard__string__String___43d]))(var_prefix, var24); /* + on <var_prefix:String>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub_write_to]))(self, var_o, var_e2, var27); /* sub_write_to on <self:OrderedTree[Object]>*/
}
} else {
if (unlikely(varonce28==NULL)) {
var29 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "`--";
var33 = standard___standard__NativeString___to_s_with_length(var32, 3l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[1]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "\n";
var37 = standard___standard__NativeString___to_s_with_length(var36, 1l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[3]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var_prefix;
{
var38 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_ordered_tree__OrderedTree__display]))(self, var_e2); /* display on <self:OrderedTree[Object]>*/
}
((struct instance_standard__NativeArray*)var29)->values[2]=var38;
{
var39 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
((void(*)(val* self, val* p0))(var_o->class->vft[COLOR_standard__stream__Writer__write]))(var_o, var39); /* write on <var_o:Writer>*/
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "   ";
var43 = standard___standard__NativeString___to_s_with_length(var42, 3l);
var41 = var43;
varonce40 = var41;
}
{
var44 = ((val*(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_standard__string__String___43d]))(var_prefix, var41); /* + on <var_prefix:String>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub_write_to]))(self, var_o, var_e2, var44); /* sub_write_to on <self:OrderedTree[Object]>*/
}
}
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sort_with for (self: OrderedTree[Object], Comparator) */
void ordered_tree___ordered_tree__OrderedTree___sort_with(val* self, val* p0) {
val* var_comparator /* var comparator: Comparator */;
val* var /* : Array[Object] */;
val* var1 /* : HashMap[Object, Array[Object]] */;
val* var2 /* : Collection[nullable Object] */;
val* var_ /* var : RemovableCollection[Array[Object]] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[Array[Object]] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_a /* var a: Array[Object] */;
var_comparator = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self); /* roots on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self, val* p0))((((long)var_comparator&3)?class_info[((long)var_comparator&3)]:var_comparator->class)->vft[COLOR_standard__sorter__Comparator__sort]))(var_comparator, var); /* sort on <var_comparator:Comparator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self); /* sub on <self:OrderedTree[Object]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__values]))(var1); /* values on <var1:HashMap[Object, Array[Object]]>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[Array[Object]]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[Array[Object]]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[Array[Object]]>*/
}
var_a = var6;
{
((void(*)(val* self, val* p0))((((long)var_comparator&3)?class_info[((long)var_comparator&3)]:var_comparator->class)->vft[COLOR_standard__sorter__Comparator__sort]))(var_comparator, var_a); /* sort on <var_comparator:Comparator>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[Array[Object]]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[Array[Object]]>*/
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#display for (self: OrderedTree[Object], Object): String */
val* ordered_tree___ordered_tree__OrderedTree___display(val* self, val* p0) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var2 /* : String */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 123);
fatal_exit(1);
}
var_e = p0;
{
var2 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__string__Object__to_s]))(var_e); /* to_s on <var_e:Object>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#to_a for (self: OrderedTree[Object]): Array[Object] */
val* ordered_tree___ordered_tree__OrderedTree___standard__array__Collection__to_a(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
val* var_res /* var res: Array[Object] */;
val* var2 /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_r /* var r: Object */;
var1 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__ordered_tree__OrderedTree___35dE]);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Object]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self); /* roots on <self:OrderedTree[Object]>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Object]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[Object]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[Object]>*/
}
var_r = var6;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub_to_a]))(self, var_r, var_res); /* sub_to_a on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#sub_to_a for (self: OrderedTree[Object], Object, Array[Object]) */
void ordered_tree___ordered_tree__OrderedTree___sub_to_a(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_e /* var e: Object */;
val* var_res /* var res: Array[Object] */;
val* var6 /* : HashMap[Object, Array[Object]] */;
short int var7 /* : Bool */;
val* var8 /* : HashMap[Object, Array[Object]] */;
val* var9 /* : nullable Object */;
val* var_ /* var : Array[Object] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_e2 /* var e2: Object */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 150);
fatal_exit(1);
}
/* Covariant cast for argument 1 (res) <p1:Array[Object]> isa Array[E] */
/* <p1:Array[Object]> isa Array[E] */
type_struct4 = self->type->resolution_table->types[COLOR_standard__Array__ordered_tree__OrderedTree___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[E]", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 150);
fatal_exit(1);
}
var_e = p0;
var_res = p1;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_e); /* add on <var_res:Array[Object]>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self); /* sub on <self:OrderedTree[Object]>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var6, var_e); /* has_key on <var6:HashMap[Object, Array[Object]]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self); /* sub on <self:OrderedTree[Object]>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var8, var_e); /* [] on <var8:HashMap[Object, Array[Object]]>*/
}
var_ = var9;
{
var10 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Object]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:ArrayIterator[Object]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:ArrayIterator[Object]>*/
}
var_e2 = var13;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub_to_a]))(self, var_e2, var_res); /* sub_to_a on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:ArrayIterator[Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#is_empty for (self: OrderedTree[Object]): Bool */
short int ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Object] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self); /* roots on <self:OrderedTree[Object]>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:Array[Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#first for (self: OrderedTree[Object]): Object */
val* ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__first(val* self) {
val* var /* : Object */;
val* var1 /* : Array[Object] */;
val* var2 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self); /* roots on <self:OrderedTree[Object]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var1); /* first on <var1:Array[Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#iterator for (self: OrderedTree[Object]): Iterator[Object] */
val* ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : OrderedTreeIterator[Object] */;
var1 = NEW_ordered_tree__OrderedTreeIterator(self->type->resolution_table->types[COLOR_ordered_tree__OrderedTreeIterator__ordered_tree__OrderedTree___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree_61d]))(var1, self); /* tree= on <var1:OrderedTreeIterator[Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:OrderedTreeIterator[Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#tree for (self: OrderedTreeIterator[Object]): OrderedTree[Object] */
val* ordered_tree___ordered_tree__OrderedTreeIterator___tree(val* self) {
val* var /* : OrderedTree[Object] */;
val* var1 /* : OrderedTree[Object] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 189);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#tree= for (self: OrderedTreeIterator[Object], OrderedTree[Object]) */
void ordered_tree___ordered_tree__OrderedTreeIterator___tree_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (tree) <p0:OrderedTree[Object]> isa OrderedTree[E] */
/* <p0:OrderedTree[Object]> isa OrderedTree[E] */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree__ordered_tree__OrderedTreeIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OrderedTree[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 189);
fatal_exit(1);
}
self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val = p0; /* _tree on <self:OrderedTreeIterator[Object]> */
RET_LABEL:;
}
/* method ordered_tree#OrderedTreeIterator#iterators for (self: OrderedTreeIterator[Object]): Array[Iterator[Object]] */
val* ordered_tree___ordered_tree__OrderedTreeIterator___iterators(val* self) {
val* var /* : Array[Iterator[Object]] */;
val* var1 /* : Array[Iterator[Object]] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#iterators= for (self: OrderedTreeIterator[Object], Array[Iterator[Object]]) */
void ordered_tree___ordered_tree__OrderedTreeIterator___iterators_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (iterators) <p0:Array[Iterator[Object]]> isa Array[Iterator[E]] */
/* <p0:Array[Iterator[Object]]> isa Array[Iterator[E]] */
type_struct = self->type->resolution_table->types[COLOR_standard__Array__standard__Iterator__ordered_tree__OrderedTreeIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[Iterator[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val = p0; /* _iterators on <self:OrderedTreeIterator[Object]> */
RET_LABEL:;
}
/* method ordered_tree#OrderedTreeIterator#init for (self: OrderedTreeIterator[Object]) */
void ordered_tree___ordered_tree__OrderedTreeIterator___standard__kernel__Object__init(val* self) {
val* var /* : OrderedTree[Object] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[Iterator[Object]] */;
val* var4 /* : OrderedTree[Object] */;
val* var5 /* : Array[Object] */;
val* var6 /* : Iterator[nullable Object] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree]))(self); /* tree on <self:OrderedTreeIterator[Object]>*/
}
{
var1 = ((short int(*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var); /* is_empty on <var:OrderedTree[Object]>*/
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__iterators]))(self); /* iterators on <self:OrderedTreeIterator[Object]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree]))(self); /* tree on <self:OrderedTreeIterator[Object]>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(var4); /* roots on <var4:OrderedTree[Object]>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var5); /* iterator on <var5:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var3, var6); /* add on <var3:Array[Iterator[Object]]>*/
}
} else {
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTreeIterator#is_ok for (self: OrderedTreeIterator[Object]): Bool */
short int ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Iterator[Object]] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__iterators]))(self); /* iterators on <self:OrderedTreeIterator[Object]>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:Array[Iterator[Object]]>*/
}
var3 = !var2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#item for (self: OrderedTreeIterator[Object]): Object */
val* ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : Object */;
short int var1 /* : Bool */;
val* var2 /* : Array[Iterator[Object]] */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:OrderedTreeIterator[Object]>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 202);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__iterators]))(self); /* iterators on <self:OrderedTreeIterator[Object]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var2); /* last on <var2:Array[Iterator[Object]]>*/
}
{
var4 = ((val*(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var3); /* item on <var3:nullable Object(Iterator[Object])>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#next for (self: OrderedTreeIterator[Object]) */
void ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : OrderedTree[Object] */;
val* var2 /* : HashMap[Object, Array[Object]] */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
val* var5 /* : Array[Iterator[Object]] */;
val* var6 /* : OrderedTree[Object] */;
val* var7 /* : HashMap[Object, Array[Object]] */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable Object */;
val* var10 /* : Iterator[nullable Object] */;
val* var11 /* : Array[Iterator[Object]] */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : Array[Iterator[Object]] */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[Iterator[Object]] */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
val* var24 /* : Array[Iterator[Object]] */;
val* var25 /* : nullable Object */;
short int var26 /* : Bool */;
val* var27 /* : Array[Iterator[Object]] */;
val* var28 /* : nullable Object */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:OrderedTreeIterator[Object]>*/
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 207);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree]))(self); /* tree on <self:OrderedTreeIterator[Object]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(var1); /* sub on <var1:OrderedTree[Object]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(self); /* item on <self:OrderedTreeIterator[Object]>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var2, var3); /* has_key on <var2:HashMap[Object, Array[Object]]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__iterators]))(self); /* iterators on <self:OrderedTreeIterator[Object]>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree]))(self); /* tree on <self:OrderedTreeIterator[Object]>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(var6); /* sub on <var6:OrderedTree[Object]>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(self); /* item on <self:OrderedTreeIterator[Object]>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var7, var8); /* [] on <var7:HashMap[Object, Array[Object]]>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var9); /* iterator on <var9:nullable Object(Array[Object])>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var5, var10); /* add on <var5:Array[Iterator[Object]]>*/
}
} else {
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__iterators]))(self); /* iterators on <self:OrderedTreeIterator[Object]>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var11); /* last on <var11:Array[Iterator[Object]]>*/
}
{
((void(*)(val* self))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var12); /* next on <var12:nullable Object(Iterator[Object])>*/
}
for(;;) {
{
var14 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:OrderedTreeIterator[Object]>*/
}
var_ = var14;
if (var14){
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__iterators]))(self); /* iterators on <self:OrderedTreeIterator[Object]>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var15); /* last on <var15:Array[Iterator[Object]]>*/
}
{
var17 = ((short int(*)(val* self))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var16); /* is_ok on <var16:nullable Object(Iterator[Object])>*/
}
var18 = !var17;
var13 = var18;
} else {
var13 = var_;
}
if (var13){
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__iterators]))(self); /* iterators on <self:OrderedTreeIterator[Object]>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var19); /* pop on <var19:Array[Iterator[Object]]>*/
}
{
var22 = ((short int(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:OrderedTreeIterator[Object]>*/
}
var_23 = var22;
if (var22){
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__iterators]))(self); /* iterators on <self:OrderedTreeIterator[Object]>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var24); /* last on <var24:Array[Iterator[Object]]>*/
}
{
var26 = ((short int(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var25); /* is_ok on <var25:nullable Object(Iterator[Object])>*/
}
var21 = var26;
} else {
var21 = var_23;
}
if (var21){
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__iterators]))(self); /* iterators on <self:OrderedTreeIterator[Object]>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var27); /* last on <var27:Array[Iterator[Object]]>*/
}
{
((void(*)(val* self))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var28); /* next on <var28:nullable Object(Iterator[Object])>*/
}
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTreeIterator#iterator for (self: OrderedTreeIterator[Object]): Iterator[Object] */
val* ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : OrderedTreeIterator[Object] */;
val* var2 /* : OrderedTree[Object] */;
var1 = NEW_ordered_tree__OrderedTreeIterator(self->type->resolution_table->types[COLOR_ordered_tree__OrderedTreeIterator__ordered_tree__OrderedTreeIterator___35dE]);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree]))(self); /* tree on <self:OrderedTreeIterator[Object]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree_61d]))(var1, var2); /* tree= on <var1:OrderedTreeIterator[Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:OrderedTreeIterator[Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
