#include "nit__parser_prod.sep.0.h"
/* method parser_prod#AParam#init_aparam for (self: AParam, nullable TId, nullable AType, nullable TDotdotdot, nullable AAnnotations) */
void nit__parser_prod___AParam___init_aparam(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dotdotdot /* var n_dotdotdot: nullable TDotdotdot */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AParam>*/
}
var_n_id = p0;
var_n_type = p1;
var_n_dotdotdot = p2;
var_n_annotations = p3;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2209);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val = var_n_id; /* _n_id on <self:AParam> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2210);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val = var_n_type; /* _n_type on <self:AParam> */
if (var_n_type == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_type, ((val*)NULL)); /* != on <var_n_type:nullable AType>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType(AType)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AParam> */
if (var_n_dotdotdot == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_dotdotdot->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_dotdotdot, ((val*)NULL)); /* != on <var_n_dotdotdot:nullable TDotdotdot>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_dotdotdot->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_dotdotdot, self); /* parent= on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParam> */
if (var_n_annotations == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#replace_child for (self: AParam, ANode, nullable ANode) */
void nit__parser_prod___AParam___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : nullable TDotdotdot */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : nullable AAnnotations */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2221);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TId>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TId */
cltype = type_nit__TId.color;
idtype = type_nit__TId.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2222);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AParam__n_id_61d]))(self, var_new_child); /* n_id= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AType>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype7 = type_nullable__nit__AType.color;
idtype8 = type_nullable__nit__AType.id;
if(var_new_child == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
var_class_name9 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2226);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AParam__n_type_61d]))(self, var_new_child); /* n_type= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
if (var10 == NULL) {
var11 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_old_child); /* == on <var10:nullable TDotdotdot>*/
var11 = var12;
}
if (var11){
/* <var_new_child:nullable ANode> isa nullable TDotdotdot */
cltype14 = type_nullable__nit__TDotdotdot.color;
idtype15 = type_nullable__nit__TDotdotdot.id;
if(var_new_child == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TDotdotdot", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2230);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AParam__n_dotdotdot_61d]))(self, var_new_child); /* n_dotdotdot= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var19 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var17, var_old_child); /* == on <var17:nullable AAnnotations>*/
var18 = var19;
}
if (var18){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype21 = type_nullable__nit__AAnnotations.color;
idtype22 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_new_child->type->table_size) {
var20 = 0;
} else {
var20 = var_new_child->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
var_class_name23 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2234);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_id= for (self: AParam, TId) */
void nit__parser_prod___AParam___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val = var_node; /* _n_id on <self:AParam> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_type= for (self: AParam, nullable AType) */
void nit__parser_prod___AParam___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val = var_node; /* _n_type on <self:AParam> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AType>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AType(AType)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_dotdotdot= for (self: AParam, nullable TDotdotdot) */
void nit__parser_prod___AParam___n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDotdotdot */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AParam> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TDotdotdot>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TDotdotdot(TDotdotdot)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_annotations= for (self: AParam, nullable AAnnotations) */
void nit__parser_prod___AParam___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParam> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#visit_all for (self: AParam, Visitor) */
void nit__parser_prod___AParam___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : nullable AType */;
val* var2 /* : nullable TDotdotdot */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2263);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AType#init_atype for (self: AType, nullable TKwnullable, nullable TClassid, Collection[Object], nullable AAnnotations) */
void nit__parser_prod___AType___init_atype(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_types /* var n_types: Collection[Object] */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : ANodes[AType] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AType>*/
}
var_n_kwnullable = p0;
var_n_id = p1;
var_n_types = p2;
var_n_annotations = p3;
self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AType> */
if (var_n_kwnullable == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_kwnullable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwnullable, ((val*)NULL)); /* != on <var_n_kwnullable:nullable TKwnullable>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_kwnullable->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnullable, self); /* parent= on <var_n_kwnullable:nullable TKwnullable(TKwnullable)>*/
}
} else {
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2279);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AType___n_id].val = var_n_id; /* _n_id on <self:AType> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2280);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TClassid>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(self); /* n_types on <self:AType>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var2, var_n_types); /* unsafe_add_all on <var2:ANodes[AType]>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AType> */
if (var_n_annotations == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var3 = var4;
}
if (var3){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#replace_child for (self: AType, ANode, nullable ANode) */
void nit__parser_prod___AType___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwnullable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : TClassid */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : ANodes[AType] */;
short int var11 /* : Bool */;
val* var12 /* : nullable AAnnotations */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TKwnullable>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TKwnullable */
cltype = type_nullable__nit__TKwnullable.color;
idtype = type_nullable__nit__TKwnullable.id;
if(var_new_child == NULL) {
var3 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var3 = 0;
} else {
var3 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwnullable", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2289);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AType__n_kwnullable_61d]))(self, var_new_child); /* n_kwnullable= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2292);
fatal_exit(1);
}
{
var5 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_old_child); /* == on <var4:TClassid>*/
}
if (var5){
/* <var_new_child:nullable ANode> isa TClassid */
cltype7 = type_nit__TClassid.color;
idtype8 = type_nit__TClassid.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype7 >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
var_class_name9 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2293);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AType__n_id_61d]))(self, var_new_child); /* n_id= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(self); /* n_types on <self:AType>*/
}
{
var11 = ((short int(*)(val* self, val* p0, val* p1))(var10->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var10, var_old_child, var_new_child); /* replace_child on <var10:ANodes[AType]>*/
}
if (var11){
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
if (var12 == NULL) {
var13 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var14 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var_old_child); /* == on <var12:nullable AAnnotations>*/
var13 = var14;
}
if (var13){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype16 = type_nullable__nit__AAnnotations.color;
idtype17 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2298);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#n_kwnullable= for (self: AType, nullable TKwnullable) */
void nit__parser_prod___AType___n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnullable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AType> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwnullable>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwnullable(TKwnullable)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#n_id= for (self: AType, TClassid) */
void nit__parser_prod___AType___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AType___n_id].val = var_node; /* _n_id on <self:AType> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TClassid>*/
}
RET_LABEL:;
}
/* method parser_prod#AType#n_annotations= for (self: AType, nullable AAnnotations) */
void nit__parser_prod___AType___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AType> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#visit_all for (self: AType, Visitor) */
void nit__parser_prod___AType___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwnullable */;
val* var1 /* : TClassid */;
val* var2 /* : ANodes[AType] */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2323);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(self); /* n_types on <self:AType>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var2, var_v); /* visit_all on <var2:ANodes[AType]>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALabel#init_alabel for (self: ALabel, nullable TKwlabel, nullable TId) */
void nit__parser_prod___ALabel___init_alabel(val* self, val* p0, val* p1) {
val* var_n_kwlabel /* var n_kwlabel: nullable TKwlabel */;
val* var_n_id /* var n_id: nullable TId */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALabel>*/
}
var_n_kwlabel = p0;
var_n_id = p1;
if (unlikely(var_n_kwlabel == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2334);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val = var_n_kwlabel; /* _n_kwlabel on <self:ALabel> */
if (var_n_kwlabel == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2335);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwlabel->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwlabel, self); /* parent= on <var_n_kwlabel:nullable TKwlabel>*/
}
self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val = var_n_id; /* _n_id on <self:ALabel> */
if (var_n_id == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_id, ((val*)NULL)); /* != on <var_n_id:nullable TId>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId(TId)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#replace_child for (self: ALabel, ANode, nullable ANode) */
void nit__parser_prod___ALabel___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwlabel */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable TId */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2342);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwlabel>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwlabel */
cltype = type_nit__TKwlabel.color;
idtype = type_nit__TKwlabel.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwlabel", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2343);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALabel__n_kwlabel_61d]))(self, var_new_child); /* n_kwlabel= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable TId>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable TId */
cltype7 = type_nullable__nit__TId.color;
idtype8 = type_nullable__nit__TId.id;
if(var_new_child == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
var_class_name9 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TId", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2347);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALabel__n_id_61d]))(self, var_new_child); /* n_id= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#n_kwlabel= for (self: ALabel, TKwlabel) */
void nit__parser_prod___ALabel___n_kwlabel_61d(val* self, val* p0) {
val* var_node /* var node: TKwlabel */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val = var_node; /* _n_kwlabel on <self:ALabel> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwlabel>*/
}
RET_LABEL:;
}
/* method parser_prod#ALabel#n_id= for (self: ALabel, nullable TId) */
void nit__parser_prod___ALabel___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val = var_node; /* _n_id on <self:ALabel> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TId>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TId(TId)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#visit_all for (self: ALabel, Visitor) */
void nit__parser_prod___ALabel___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwlabel */;
val* var1 /* : nullable TId */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2366);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#init_ablockexpr for (self: ABlockExpr, Collection[Object], nullable TKwend) */
void nit__parser_prod___ABlockExpr___init_ablockexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: Collection[Object] */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
val* var /* : ANodes[AExpr] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABlockExpr>*/
}
var_n_expr = p0;
var_n_kwend = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_expr); /* unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ABlockExpr> */
if (var_n_kwend == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_n_kwend->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwend, ((val*)NULL)); /* != on <var_n_kwend:nullable TKwend>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_n_kwend->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwend, self); /* parent= on <var_n_kwend:nullable TKwend(TKwend)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#replace_child for (self: ABlockExpr, ANode, nullable ANode) */
void nit__parser_prod___ABlockExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
short int var1 /* : Bool */;
val* var2 /* : nullable TKwend */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
{
var1 = ((short int(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var, var_old_child, var_new_child); /* replace_child on <var:ANodes[AExpr]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
if (var2 == NULL) {
var3 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_old_child); /* == on <var2:nullable TKwend>*/
var3 = var4;
}
if (var3){
/* <var_new_child:nullable ANode> isa nullable TKwend */
cltype = type_nullable__nit__TKwend.color;
idtype = type_nullable__nit__TKwend.id;
if(var_new_child == NULL) {
var5 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwend", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2385);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_kwend_61d]))(self, var_new_child); /* n_kwend= on <self:ABlockExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#n_kwend= for (self: ABlockExpr, nullable TKwend) */
void nit__parser_prod___ABlockExpr___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwend */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val = var_node; /* _n_kwend on <self:ABlockExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwend>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwend(TKwend)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#visit_all for (self: ABlockExpr, Visitor) */
void nit__parser_prod___ABlockExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var1 /* : nullable TKwend */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var, var_v); /* visit_all on <var:ANodes[AExpr]>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#init_avardeclexpr for (self: AVardeclExpr, nullable TKwvar, nullable TId, nullable AType, nullable TAssign, nullable AExpr, nullable AAnnotations) */
void nit__parser_prod___AVardeclExpr___init_avardeclexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwvar /* var n_kwvar: nullable TKwvar */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AVardeclExpr>*/
}
var_n_kwvar = p0;
var_n_id = p1;
var_n_type = p2;
var_n_assign = p3;
var_n_expr = p4;
var_n_annotations = p5;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AVardeclExpr> */
if (var_n_kwvar == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_kwvar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwvar, ((val*)NULL)); /* != on <var_n_kwvar:nullable TKwvar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_kwvar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwvar, self); /* parent= on <var_n_kwvar:nullable TKwvar(TKwvar)>*/
}
} else {
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2415);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val = var_n_id; /* _n_id on <self:AVardeclExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2416);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val = var_n_type; /* _n_type on <self:AVardeclExpr> */
if (var_n_type == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_type, ((val*)NULL)); /* != on <var_n_type:nullable AType>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType(AType)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVardeclExpr> */
if (var_n_assign == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_assign, ((val*)NULL)); /* != on <var_n_assign:nullable TAssign>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign, self); /* parent= on <var_n_assign:nullable TAssign(TAssign)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVardeclExpr> */
if (var_n_expr == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_expr, ((val*)NULL)); /* != on <var_n_expr:nullable AExpr>*/
var6 = var7;
}
if (var6){
{
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr(AExpr)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AVardeclExpr> */
if (var_n_annotations == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#replace_child for (self: AVardeclExpr, ANode, nullable ANode) */
void nit__parser_prod___AVardeclExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwvar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : TId */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : nullable AType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : nullable TAssign */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : nullable AExpr */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
val* var31 /* : nullable AAnnotations */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TKwvar>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TKwvar */
cltype = type_nullable__nit__TKwvar.color;
idtype = type_nullable__nit__TKwvar.id;
if(var_new_child == NULL) {
var3 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var3 = 0;
} else {
var3 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwvar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2430);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_kwvar_61d]))(self, var_new_child); /* n_kwvar= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2433);
fatal_exit(1);
}
{
var5 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_old_child); /* == on <var4:TId>*/
}
if (var5){
/* <var_new_child:nullable ANode> isa TId */
cltype7 = type_nit__TId.color;
idtype8 = type_nit__TId.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype7 >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
var_class_name9 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2434);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
if (var10 == NULL) {
var11 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_old_child); /* == on <var10:nullable AType>*/
var11 = var12;
}
if (var11){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype14 = type_nullable__nit__AType.color;
idtype15 = type_nullable__nit__AType.id;
if(var_new_child == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2438);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_type_61d]))(self, var_new_child); /* n_type= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var19 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var17, var_old_child); /* == on <var17:nullable TAssign>*/
var18 = var19;
}
if (var18){
/* <var_new_child:nullable ANode> isa nullable TAssign */
cltype21 = type_nullable__nit__TAssign.color;
idtype22 = type_nullable__nit__TAssign.id;
if(var_new_child == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_new_child->type->table_size) {
var20 = 0;
} else {
var20 = var_new_child->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
var_class_name23 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TAssign", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2442);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_assign_61d]))(self, var_new_child); /* n_assign= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
if (var24 == NULL) {
var25 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var26 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var24, var_old_child); /* == on <var24:nullable AExpr>*/
var25 = var26;
}
if (var25){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype28 = type_nullable__nit__AExpr.color;
idtype29 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_new_child->type->table_size) {
var27 = 0;
} else {
var27 = var_new_child->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
var_class_name30 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2446);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var31 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
if (var31 == NULL) {
var32 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var33 = ((short int(*)(val* self, val* p0))(var31->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var31, var_old_child); /* == on <var31:nullable AAnnotations>*/
var32 = var33;
}
if (var32){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype35 = type_nullable__nit__AAnnotations.color;
idtype36 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_new_child->type->table_size) {
var34 = 0;
} else {
var34 = var_new_child->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
var_class_name37 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2450);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_kwvar= for (self: AVardeclExpr, nullable TKwvar) */
void nit__parser_prod___AVardeclExpr___n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwvar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val = var_node; /* _n_kwvar on <self:AVardeclExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwvar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwvar(TKwvar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_id= for (self: AVardeclExpr, TId) */
void nit__parser_prod___AVardeclExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val = var_node; /* _n_id on <self:AVardeclExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_type= for (self: AVardeclExpr, nullable AType) */
void nit__parser_prod___AVardeclExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val = var_node; /* _n_type on <self:AVardeclExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AType>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AType(AType)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_assign= for (self: AVardeclExpr, nullable TAssign) */
void nit__parser_prod___AVardeclExpr___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAssign */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val = var_node; /* _n_assign on <self:AVardeclExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TAssign>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TAssign(TAssign)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_expr= for (self: AVardeclExpr, nullable AExpr) */
void nit__parser_prod___AVardeclExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val = var_node; /* _n_expr on <self:AVardeclExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_annotations= for (self: AVardeclExpr, nullable AAnnotations) */
void nit__parser_prod___AVardeclExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AVardeclExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#visit_all for (self: AVardeclExpr, Visitor) */
void nit__parser_prod___AVardeclExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwvar */;
val* var1 /* : TId */;
val* var2 /* : nullable AType */;
val* var3 /* : nullable TAssign */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2490);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var5); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#init_areturnexpr for (self: AReturnExpr, nullable TKwreturn, nullable AExpr) */
void nit__parser_prod___AReturnExpr___init_areturnexpr(val* self, val* p0, val* p1) {
val* var_n_kwreturn /* var n_kwreturn: nullable TKwreturn */;
val* var_n_expr /* var n_expr: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AReturnExpr>*/
}
var_n_kwreturn = p0;
var_n_expr = p1;
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val = var_n_kwreturn; /* _n_kwreturn on <self:AReturnExpr> */
if (var_n_kwreturn == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_kwreturn->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwreturn, ((val*)NULL)); /* != on <var_n_kwreturn:nullable TKwreturn>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_kwreturn->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwreturn, self); /* parent= on <var_n_kwreturn:nullable TKwreturn(TKwreturn)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AReturnExpr> */
if (var_n_expr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_expr, ((val*)NULL)); /* != on <var_n_expr:nullable AExpr>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#replace_child for (self: AReturnExpr, ANode, nullable ANode) */
void nit__parser_prod___AReturnExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwreturn */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : nullable AExpr */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TKwreturn>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TKwreturn */
cltype = type_nullable__nit__TKwreturn.color;
idtype = type_nullable__nit__TKwreturn.id;
if(var_new_child == NULL) {
var3 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var3 = 0;
} else {
var3 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwreturn", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2512);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReturnExpr__n_kwreturn_61d]))(self, var_new_child); /* n_kwreturn= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_old_child); /* == on <var4:nullable AExpr>*/
var5 = var6;
}
if (var5){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype8 = type_nullable__nit__AExpr.color;
idtype9 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name10 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2516);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReturnExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_kwreturn= for (self: AReturnExpr, nullable TKwreturn) */
void nit__parser_prod___AReturnExpr___n_kwreturn_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwreturn */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val = var_node; /* _n_kwreturn on <self:AReturnExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwreturn>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwreturn(TKwreturn)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_expr= for (self: AReturnExpr, nullable AExpr) */
void nit__parser_prod___AReturnExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val = var_node; /* _n_expr on <self:AReturnExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#visit_all for (self: AReturnExpr, Visitor) */
void nit__parser_prod___AReturnExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwreturn */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#init_abreakexpr for (self: ABreakExpr, nullable TKwbreak, nullable ALabel) */
void nit__parser_prod___ABreakExpr___init_abreakexpr(val* self, val* p0, val* p1) {
val* var_n_kwbreak /* var n_kwbreak: nullable TKwbreak */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABreakExpr>*/
}
var_n_kwbreak = p0;
var_n_label = p1;
if (unlikely(var_n_kwbreak == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2545);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val = var_n_kwbreak; /* _n_kwbreak on <self:ABreakExpr> */
if (var_n_kwbreak == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2546);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwbreak->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwbreak, self); /* parent= on <var_n_kwbreak:nullable TKwbreak>*/
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ABreakExpr> */
if (var_n_label == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_label, ((val*)NULL)); /* != on <var_n_label:nullable ALabel>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_label, self); /* parent= on <var_n_label:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#replace_child for (self: ABreakExpr, ANode, nullable ANode) */
void nit__parser_prod___ABreakExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwbreak */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable ALabel */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2553);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwbreak>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwbreak */
cltype = type_nit__TKwbreak.color;
idtype = type_nit__TKwbreak.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwbreak", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2554);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABreakExpr__n_kwbreak_61d]))(self, var_new_child); /* n_kwbreak= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable ALabel>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype7 = type_nullable__nit__ALabel.color;
idtype8 = type_nullable__nit__ALabel.id;
if(var_new_child == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
var_class_name9 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2558);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label_61d]))(self, var_new_child); /* n_label= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_kwbreak= for (self: ABreakExpr, TKwbreak) */
void nit__parser_prod___ABreakExpr___n_kwbreak_61d(val* self, val* p0) {
val* var_node /* var node: TKwbreak */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val = var_node; /* _n_kwbreak on <self:ABreakExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwbreak>*/
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_label= for (self: ABreakExpr, nullable ALabel) */
void nit__parser_prod___ABreakExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ABreakExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ALabel>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#visit_all for (self: ABreakExpr, Visitor) */
void nit__parser_prod___ABreakExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwbreak */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2577);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#init_aabortexpr for (self: AAbortExpr, nullable TKwabort) */
void nit__parser_prod___AAbortExpr___init_aabortexpr(val* self, val* p0) {
val* var_n_kwabort /* var n_kwabort: nullable TKwabort */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAbortExpr>*/
}
var_n_kwabort = p0;
if (unlikely(var_n_kwabort == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2586);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val = var_n_kwabort; /* _n_kwabort on <self:AAbortExpr> */
if (var_n_kwabort == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2587);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwabort->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwabort, self); /* parent= on <var_n_kwabort:nullable TKwabort>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#replace_child for (self: AAbortExpr, ANode, nullable ANode) */
void nit__parser_prod___AAbortExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwabort */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2592);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwabort>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwabort */
cltype = type_nit__TKwabort.color;
idtype = type_nit__TKwabort.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwabort", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2593);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAbortExpr__n_kwabort_61d]))(self, var_new_child); /* n_kwabort= on <self:AAbortExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#n_kwabort= for (self: AAbortExpr, TKwabort) */
void nit__parser_prod___AAbortExpr___n_kwabort_61d(val* self, val* p0) {
val* var_node /* var node: TKwabort */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val = var_node; /* _n_kwabort on <self:AAbortExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwabort>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#visit_all for (self: AAbortExpr, Visitor) */
void nit__parser_prod___AAbortExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabort */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2607);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#init_acontinueexpr for (self: AContinueExpr, nullable TKwcontinue, nullable ALabel) */
void nit__parser_prod___AContinueExpr___init_acontinueexpr(val* self, val* p0, val* p1) {
val* var_n_kwcontinue /* var n_kwcontinue: nullable TKwcontinue */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AContinueExpr>*/
}
var_n_kwcontinue = p0;
var_n_label = p1;
self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val = var_n_kwcontinue; /* _n_kwcontinue on <self:AContinueExpr> */
if (var_n_kwcontinue == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_kwcontinue->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwcontinue, ((val*)NULL)); /* != on <var_n_kwcontinue:nullable TKwcontinue>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_kwcontinue->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwcontinue, self); /* parent= on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AContinueExpr> */
if (var_n_label == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_label, ((val*)NULL)); /* != on <var_n_label:nullable ALabel>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_label, self); /* parent= on <var_n_label:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#replace_child for (self: AContinueExpr, ANode, nullable ANode) */
void nit__parser_prod___AContinueExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwcontinue */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : nullable ALabel */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TKwcontinue>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TKwcontinue */
cltype = type_nullable__nit__TKwcontinue.color;
idtype = type_nullable__nit__TKwcontinue.id;
if(var_new_child == NULL) {
var3 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var3 = 0;
} else {
var3 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwcontinue", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2625);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AContinueExpr__n_kwcontinue_61d]))(self, var_new_child); /* n_kwcontinue= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_old_child); /* == on <var4:nullable ALabel>*/
var5 = var6;
}
if (var5){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype8 = type_nullable__nit__ALabel.color;
idtype9 = type_nullable__nit__ALabel.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name10 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2629);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label_61d]))(self, var_new_child); /* n_label= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_kwcontinue= for (self: AContinueExpr, nullable TKwcontinue) */
void nit__parser_prod___AContinueExpr___n_kwcontinue_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwcontinue */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val = var_node; /* _n_kwcontinue on <self:AContinueExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwcontinue>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwcontinue(TKwcontinue)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_label= for (self: AContinueExpr, nullable ALabel) */
void nit__parser_prod___AContinueExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AContinueExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ALabel>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#visit_all for (self: AContinueExpr, Visitor) */
void nit__parser_prod___AContinueExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwcontinue */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#init_adoexpr for (self: ADoExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void nit__parser_prod___ADoExpr___init_adoexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ADoExpr>*/
}
var_n_kwdo = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2659);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:ADoExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2660);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwdo->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwdo, self); /* parent= on <var_n_kwdo:nullable TKwdo>*/
}
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val = var_n_block; /* _n_block on <self:ADoExpr> */
if (var_n_block == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_block, ((val*)NULL)); /* != on <var_n_block:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_block, self); /* parent= on <var_n_block:nullable AExpr(AExpr)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ADoExpr> */
if (var_n_label == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_label, ((val*)NULL)); /* != on <var_n_label:nullable ALabel>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_label, self); /* parent= on <var_n_label:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#replace_child for (self: ADoExpr, ANode, nullable ANode) */
void nit__parser_prod___ADoExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwdo */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AExpr */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : nullable ALabel */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2669);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwdo>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwdo */
cltype = type_nit__TKwdo.color;
idtype = type_nit__TKwdo.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2670);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_kwdo_61d]))(self, var_new_child); /* n_kwdo= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AExpr>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype7 = type_nullable__nit__AExpr.color;
idtype8 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
var_class_name9 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2674);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block_61d]))(self, var_new_child); /* n_block= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
if (var10 == NULL) {
var11 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_old_child); /* == on <var10:nullable ALabel>*/
var11 = var12;
}
if (var11){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype14 = type_nullable__nit__ALabel.color;
idtype15 = type_nullable__nit__ALabel.id;
if(var_new_child == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2678);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label_61d]))(self, var_new_child); /* n_label= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_kwdo= for (self: ADoExpr, TKwdo) */
void nit__parser_prod___ADoExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:ADoExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwdo>*/
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_block= for (self: ADoExpr, nullable AExpr) */
void nit__parser_prod___ADoExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val = var_node; /* _n_block on <self:ADoExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_label= for (self: ADoExpr, nullable ALabel) */
void nit__parser_prod___ADoExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ADoExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ALabel>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#visit_all for (self: ADoExpr, Visitor) */
void nit__parser_prod___ADoExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdo */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2702);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#init_aifexpr for (self: AIfExpr, nullable TKwif, nullable AExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AIfExpr___init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_else /* var n_else: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AIfExpr>*/
}
var_n_kwif = p0;
var_n_expr = p1;
var_n_then = p2;
var_n_else = p3;
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2715);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfExpr> */
if (var_n_kwif == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2716);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwif->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwif, self); /* parent= on <var_n_kwif:nullable TKwif>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2717);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2718);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val = var_n_then; /* _n_then on <self:AIfExpr> */
if (var_n_then == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_then->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_then, ((val*)NULL)); /* != on <var_n_then:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_then->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_then, self); /* parent= on <var_n_then:nullable AExpr(AExpr)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val = var_n_else; /* _n_else on <self:AIfExpr> */
if (var_n_else == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_else->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_else, ((val*)NULL)); /* != on <var_n_else:nullable AExpr>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_else->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_else, self); /* parent= on <var_n_else:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#replace_child for (self: AIfExpr, ANode, nullable ANode) */
void nit__parser_prod___AIfExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwif */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExpr */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : nullable AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
val* var16 /* : nullable AExpr */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2727);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwif>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwif */
cltype = type_nit__TKwif.color;
idtype = type_nit__TKwif.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwif", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2728);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_kwif_61d]))(self, var_new_child); /* n_kwif= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2731);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExpr>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExpr */
cltype6 = type_nit__AExpr.color;
idtype7 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2732);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
if (var9 == NULL) {
var10 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var11 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:nullable AExpr>*/
var10 = var11;
}
if (var10){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype13 = type_nullable__nit__AExpr.color;
idtype14 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_new_child->type->table_size) {
var12 = 0;
} else {
var12 = var_new_child->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
var_class_name15 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2736);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then_61d]))(self, var_new_child); /* n_then= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
if (var16 == NULL) {
var17 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var18 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_old_child); /* == on <var16:nullable AExpr>*/
var17 = var18;
}
if (var17){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype20 = type_nullable__nit__AExpr.color;
idtype21 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_new_child->type->table_size) {
var19 = 0;
} else {
var19 = var_new_child->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
var_class_name22 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2740);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_else_61d]))(self, var_new_child); /* n_else= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_kwif= for (self: AIfExpr, TKwif) */
void nit__parser_prod___AIfExpr___n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwif>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_expr= for (self: AIfExpr, AExpr) */
void nit__parser_prod___AIfExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val = var_node; /* _n_expr on <self:AIfExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_then= for (self: AIfExpr, nullable AExpr) */
void nit__parser_prod___AIfExpr___n_then_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val = var_node; /* _n_then on <self:AIfExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_else= for (self: AIfExpr, nullable AExpr) */
void nit__parser_prod___AIfExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val = var_node; /* _n_else on <self:AIfExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#visit_all for (self: AIfExpr, Visitor) */
void nit__parser_prod___AIfExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2769);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2770);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#init_aifexprexpr for (self: AIfexprExpr, nullable TKwif, nullable AExpr, nullable TKwthen, nullable AExpr, nullable TKwelse, nullable AExpr) */
void nit__parser_prod___AIfexprExpr___init_aifexprexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwthen /* var n_kwthen: nullable TKwthen */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_else /* var n_else: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AIfexprExpr>*/
}
var_n_kwif = p0;
var_n_expr = p1;
var_n_kwthen = p2;
var_n_then = p3;
var_n_kwelse = p4;
var_n_else = p5;
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2785);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfexprExpr> */
if (var_n_kwif == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2786);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwif->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwif, self); /* parent= on <var_n_kwif:nullable TKwif>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2787);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfexprExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2788);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_kwthen == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2789);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val = var_n_kwthen; /* _n_kwthen on <self:AIfexprExpr> */
if (var_n_kwthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2790);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwthen->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwthen, self); /* parent= on <var_n_kwthen:nullable TKwthen>*/
}
if (unlikely(var_n_then == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2791);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val = var_n_then; /* _n_then on <self:AIfexprExpr> */
if (var_n_then == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2792);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_then->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_then, self); /* parent= on <var_n_then:nullable AExpr>*/
}
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2793);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AIfexprExpr> */
if (var_n_kwelse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2794);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwelse->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwelse, self); /* parent= on <var_n_kwelse:nullable TKwelse>*/
}
if (unlikely(var_n_else == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2795);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val = var_n_else; /* _n_else on <self:AIfexprExpr> */
if (var_n_else == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2796);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_else->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_else, self); /* parent= on <var_n_else:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#replace_child for (self: AIfexprExpr, ANode, nullable ANode) */
void nit__parser_prod___AIfexprExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwif */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExpr */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : TKwthen */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : AExpr */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
val* var21 /* : TKwelse */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : AExpr */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2801);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwif>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwif */
cltype = type_nit__TKwif.color;
idtype = type_nit__TKwif.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwif", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2802);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_kwif_61d]))(self, var_new_child); /* n_kwif= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2805);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExpr>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExpr */
cltype6 = type_nit__AExpr.color;
idtype7 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2806);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2809);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TKwthen>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TKwthen */
cltype12 = type_nit__TKwthen.color;
idtype13 = type_nit__TKwthen.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwthen", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2810);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_kwthen_61d]))(self, var_new_child); /* n_kwthen= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2813);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:AExpr>*/
}
if (var16){
/* <var_new_child:nullable ANode> isa AExpr */
cltype18 = type_nit__AExpr.color;
idtype19 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
var_class_name20 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2814);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_then_61d]))(self, var_new_child); /* n_then= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2817);
fatal_exit(1);
}
{
var22 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_old_child); /* == on <var21:TKwelse>*/
}
if (var22){
/* <var_new_child:nullable ANode> isa TKwelse */
cltype24 = type_nit__TKwelse.color;
idtype25 = type_nit__TKwelse.id;
if(var_new_child == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
var_class_name26 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwelse", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2818);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_kwelse_61d]))(self, var_new_child); /* n_kwelse= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2821);
fatal_exit(1);
}
{
var28 = ((short int(*)(val* self, val* p0))(var27->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var27, var_old_child); /* == on <var27:AExpr>*/
}
if (var28){
/* <var_new_child:nullable ANode> isa AExpr */
cltype30 = type_nit__AExpr.color;
idtype31 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_new_child->type->table_size) {
var29 = 0;
} else {
var29 = var_new_child->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
var_class_name32 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2822);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_else_61d]))(self, var_new_child); /* n_else= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwif= for (self: AIfexprExpr, TKwif) */
void nit__parser_prod___AIfexprExpr___n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfexprExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwif>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_expr= for (self: AIfexprExpr, AExpr) */
void nit__parser_prod___AIfexprExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val = var_node; /* _n_expr on <self:AIfexprExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwthen= for (self: AIfexprExpr, TKwthen) */
void nit__parser_prod___AIfexprExpr___n_kwthen_61d(val* self, val* p0) {
val* var_node /* var node: TKwthen */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val = var_node; /* _n_kwthen on <self:AIfexprExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwthen>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_then= for (self: AIfexprExpr, AExpr) */
void nit__parser_prod___AIfexprExpr___n_then_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val = var_node; /* _n_then on <self:AIfexprExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwelse= for (self: AIfexprExpr, TKwelse) */
void nit__parser_prod___AIfexprExpr___n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AIfexprExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwelse>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_else= for (self: AIfexprExpr, AExpr) */
void nit__parser_prod___AIfexprExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val = var_node; /* _n_else on <self:AIfexprExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#visit_all for (self: AIfexprExpr, Visitor) */
void nit__parser_prod___AIfexprExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : TKwthen */;
val* var3 /* : AExpr */;
val* var4 /* : TKwelse */;
val* var5 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2861);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2862);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2863);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2864);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2865);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2866);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var5); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#init_awhileexpr for (self: AWhileExpr, nullable TKwwhile, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void nit__parser_prod___AWhileExpr___init_awhileexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_kwwhile /* var n_kwwhile: nullable TKwwhile */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AWhileExpr>*/
}
var_n_kwwhile = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwwhile == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2878);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val = var_n_kwwhile; /* _n_kwwhile on <self:AWhileExpr> */
if (var_n_kwwhile == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2879);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwwhile->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwwhile, self); /* parent= on <var_n_kwwhile:nullable TKwwhile>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2880);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWhileExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2881);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2882);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWhileExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2883);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwdo->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwdo, self); /* parent= on <var_n_kwdo:nullable TKwdo>*/
}
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val = var_n_block; /* _n_block on <self:AWhileExpr> */
if (var_n_block == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_block, ((val*)NULL)); /* != on <var_n_block:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_block, self); /* parent= on <var_n_block:nullable AExpr(AExpr)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AWhileExpr> */
if (var_n_label == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_label, ((val*)NULL)); /* != on <var_n_label:nullable ALabel>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_label, self); /* parent= on <var_n_label:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#replace_child for (self: AWhileExpr, ANode, nullable ANode) */
void nit__parser_prod___AWhileExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwwhile */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExpr */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : TKwdo */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : nullable AExpr */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
val* var22 /* : nullable ALabel */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2892);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwwhile>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwwhile */
cltype = type_nit__TKwwhile.color;
idtype = type_nit__TKwwhile.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwwhile", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2893);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_kwwhile_61d]))(self, var_new_child); /* n_kwwhile= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2896);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExpr>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExpr */
cltype6 = type_nit__AExpr.color;
idtype7 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2897);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2900);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TKwdo>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TKwdo */
cltype12 = type_nit__TKwdo.color;
idtype13 = type_nit__TKwdo.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2901);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_kwdo_61d]))(self, var_new_child); /* n_kwdo= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
if (var15 == NULL) {
var16 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var17 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:nullable AExpr>*/
var16 = var17;
}
if (var16){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype19 = type_nullable__nit__AExpr.color;
idtype20 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name21 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2905);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_block_61d]))(self, var_new_child); /* n_block= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var22 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
if (var22 == NULL) {
var23 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var24 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var_old_child); /* == on <var22:nullable ALabel>*/
var23 = var24;
}
if (var23){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype26 = type_nullable__nit__ALabel.color;
idtype27 = type_nullable__nit__ALabel.id;
if(var_new_child == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
var_class_name28 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2909);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label_61d]))(self, var_new_child); /* n_label= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwwhile= for (self: AWhileExpr, TKwwhile) */
void nit__parser_prod___AWhileExpr___n_kwwhile_61d(val* self, val* p0) {
val* var_node /* var node: TKwwhile */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val = var_node; /* _n_kwwhile on <self:AWhileExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwwhile>*/
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_expr= for (self: AWhileExpr, AExpr) */
void nit__parser_prod___AWhileExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val = var_node; /* _n_expr on <self:AWhileExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwdo= for (self: AWhileExpr, TKwdo) */
void nit__parser_prod___AWhileExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWhileExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwdo>*/
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_block= for (self: AWhileExpr, nullable AExpr) */
void nit__parser_prod___AWhileExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val = var_node; /* _n_block on <self:AWhileExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_label= for (self: AWhileExpr, nullable ALabel) */
void nit__parser_prod___AWhileExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AWhileExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ALabel>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#visit_all for (self: AWhileExpr, Visitor) */
void nit__parser_prod___AWhileExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwwhile */;
val* var1 /* : AExpr */;
val* var2 /* : TKwdo */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2943);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2944);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2945);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#init_aloopexpr for (self: ALoopExpr, nullable TKwloop, nullable AExpr, nullable ALabel) */
void nit__parser_prod___ALoopExpr___init_aloopexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwloop /* var n_kwloop: nullable TKwloop */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALoopExpr>*/
}
var_n_kwloop = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwloop == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2957);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val = var_n_kwloop; /* _n_kwloop on <self:ALoopExpr> */
if (var_n_kwloop == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2958);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwloop->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwloop, self); /* parent= on <var_n_kwloop:nullable TKwloop>*/
}
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val = var_n_block; /* _n_block on <self:ALoopExpr> */
if (var_n_block == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_block, ((val*)NULL)); /* != on <var_n_block:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_block, self); /* parent= on <var_n_block:nullable AExpr(AExpr)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ALoopExpr> */
if (var_n_label == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_label, ((val*)NULL)); /* != on <var_n_label:nullable ALabel>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_label, self); /* parent= on <var_n_label:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#replace_child for (self: ALoopExpr, ANode, nullable ANode) */
void nit__parser_prod___ALoopExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwloop */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AExpr */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : nullable ALabel */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2967);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwloop>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwloop */
cltype = type_nit__TKwloop.color;
idtype = type_nit__TKwloop.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwloop", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2968);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_kwloop_61d]))(self, var_new_child); /* n_kwloop= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AExpr>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype7 = type_nullable__nit__AExpr.color;
idtype8 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
var_class_name9 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2972);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_block_61d]))(self, var_new_child); /* n_block= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
if (var10 == NULL) {
var11 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_old_child); /* == on <var10:nullable ALabel>*/
var11 = var12;
}
if (var11){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype14 = type_nullable__nit__ALabel.color;
idtype15 = type_nullable__nit__ALabel.id;
if(var_new_child == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2976);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label_61d]))(self, var_new_child); /* n_label= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_kwloop= for (self: ALoopExpr, TKwloop) */
void nit__parser_prod___ALoopExpr___n_kwloop_61d(val* self, val* p0) {
val* var_node /* var node: TKwloop */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val = var_node; /* _n_kwloop on <self:ALoopExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwloop>*/
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_block= for (self: ALoopExpr, nullable AExpr) */
void nit__parser_prod___ALoopExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val = var_node; /* _n_block on <self:ALoopExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_label= for (self: ALoopExpr, nullable ALabel) */
void nit__parser_prod___ALoopExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ALoopExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ALabel>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#visit_all for (self: ALoopExpr, Visitor) */
void nit__parser_prod___ALoopExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwloop */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3000);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#init_aforexpr for (self: AForExpr, nullable TKwfor, Collection[Object], nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void nit__parser_prod___AForExpr___init_aforexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwfor /* var n_kwfor: nullable TKwfor */;
val* var_n_ids /* var n_ids: Collection[Object] */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : ANodes[TId] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AForExpr>*/
}
var_n_kwfor = p0;
var_n_ids = p1;
var_n_expr = p2;
var_n_kwdo = p3;
var_n_block = p4;
var_n_label = p5;
if (unlikely(var_n_kwfor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3015);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val = var_n_kwfor; /* _n_kwfor on <self:AForExpr> */
if (var_n_kwfor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3016);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwfor->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwfor, self); /* parent= on <var_n_kwfor:nullable TKwfor>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_ids]))(self); /* n_ids on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_ids); /* unsafe_add_all on <var:ANodes[TId]>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3018);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AForExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3019);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3020);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AForExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3021);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwdo->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwdo, self); /* parent= on <var_n_kwdo:nullable TKwdo>*/
}
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val = var_n_block; /* _n_block on <self:AForExpr> */
if (var_n_block == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_block, ((val*)NULL)); /* != on <var_n_block:nullable AExpr>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_block, self); /* parent= on <var_n_block:nullable AExpr(AExpr)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AForExpr> */
if (var_n_label == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_label, ((val*)NULL)); /* != on <var_n_label:nullable ALabel>*/
var3 = var4;
}
if (var3){
{
((void(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_label, self); /* parent= on <var_n_label:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#replace_child for (self: AForExpr, ANode, nullable ANode) */
void nit__parser_prod___AForExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwfor */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : ANodes[TId] */;
short int var4 /* : Bool */;
val* var5 /* : AExpr */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
val* var11 /* : TKwdo */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : nullable AExpr */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : nullable ALabel */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3030);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwfor>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwfor */
cltype = type_nit__TKwfor.color;
idtype = type_nit__TKwfor.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwfor", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3031);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_kwfor_61d]))(self, var_new_child); /* n_kwfor= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_ids]))(self); /* n_ids on <self:AForExpr>*/
}
{
var4 = ((short int(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var3, var_old_child, var_new_child); /* replace_child on <var3:ANodes[TId]>*/
}
if (var4){
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3035);
fatal_exit(1);
}
{
var6 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_old_child); /* == on <var5:AExpr>*/
}
if (var6){
/* <var_new_child:nullable ANode> isa AExpr */
cltype8 = type_nit__AExpr.color;
idtype9 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name10 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3036);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3039);
fatal_exit(1);
}
{
var12 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_old_child); /* == on <var11:TKwdo>*/
}
if (var12){
/* <var_new_child:nullable ANode> isa TKwdo */
cltype14 = type_nit__TKwdo.color;
idtype15 = type_nit__TKwdo.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3040);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_kwdo_61d]))(self, var_new_child); /* n_kwdo= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var19 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var17, var_old_child); /* == on <var17:nullable AExpr>*/
var18 = var19;
}
if (var18){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype21 = type_nullable__nit__AExpr.color;
idtype22 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_new_child->type->table_size) {
var20 = 0;
} else {
var20 = var_new_child->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
var_class_name23 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3044);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_block_61d]))(self, var_new_child); /* n_block= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
if (var24 == NULL) {
var25 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var26 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var24, var_old_child); /* == on <var24:nullable ALabel>*/
var25 = var26;
}
if (var25){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype28 = type_nullable__nit__ALabel.color;
idtype29 = type_nullable__nit__ALabel.id;
if(var_new_child == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_new_child->type->table_size) {
var27 = 0;
} else {
var27 = var_new_child->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
var_class_name30 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3048);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label_61d]))(self, var_new_child); /* n_label= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwfor= for (self: AForExpr, TKwfor) */
void nit__parser_prod___AForExpr___n_kwfor_61d(val* self, val* p0) {
val* var_node /* var node: TKwfor */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val = var_node; /* _n_kwfor on <self:AForExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwfor>*/
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_expr= for (self: AForExpr, AExpr) */
void nit__parser_prod___AForExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val = var_node; /* _n_expr on <self:AForExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwdo= for (self: AForExpr, TKwdo) */
void nit__parser_prod___AForExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AForExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwdo>*/
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_block= for (self: AForExpr, nullable AExpr) */
void nit__parser_prod___AForExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val = var_node; /* _n_block on <self:AForExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_label= for (self: AForExpr, nullable ALabel) */
void nit__parser_prod___AForExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AForExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ALabel>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#visit_all for (self: AForExpr, Visitor) */
void nit__parser_prod___AForExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfor */;
val* var1 /* : ANodes[TId] */;
val* var2 /* : AExpr */;
val* var3 /* : TKwdo */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3082);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_ids]))(self); /* n_ids on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var1, var_v); /* visit_all on <var1:ANodes[TId]>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3084);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3085);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var5); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#init_awithexpr for (self: AWithExpr, nullable TKwwith, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void nit__parser_prod___AWithExpr___init_awithexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_kwwith /* var n_kwwith: nullable TKwwith */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AWithExpr>*/
}
var_n_kwwith = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwwith == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3099);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwwith].val = var_n_kwwith; /* _n_kwwith on <self:AWithExpr> */
if (var_n_kwwith == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3100);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwwith->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwwith, self); /* parent= on <var_n_kwwith:nullable TKwwith>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3101);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWithExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3102);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3103);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWithExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3104);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwdo->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwdo, self); /* parent= on <var_n_kwdo:nullable TKwdo>*/
}
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_block].val = var_n_block; /* _n_block on <self:AWithExpr> */
if (var_n_block == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_block, ((val*)NULL)); /* != on <var_n_block:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_block, self); /* parent= on <var_n_block:nullable AExpr(AExpr)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AWithExpr> */
if (var_n_label == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_label, ((val*)NULL)); /* != on <var_n_label:nullable ALabel>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_label, self); /* parent= on <var_n_label:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#replace_child for (self: AWithExpr, ANode, nullable ANode) */
void nit__parser_prod___AWithExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwwith */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExpr */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : TKwdo */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : nullable AExpr */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
val* var22 /* : nullable ALabel */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwwith].val; /* _n_kwwith on <self:AWithExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwith");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3113);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwwith>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwwith */
cltype = type_nit__TKwwith.color;
idtype = type_nit__TKwwith.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwwith", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3114);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_kwwith_61d]))(self, var_new_child); /* n_kwwith= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3117);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExpr>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExpr */
cltype6 = type_nit__AExpr.color;
idtype7 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3118);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwdo].val; /* _n_kwdo on <self:AWithExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3121);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TKwdo>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TKwdo */
cltype12 = type_nit__TKwdo.color;
idtype13 = type_nit__TKwdo.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3122);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_kwdo_61d]))(self, var_new_child); /* n_kwdo= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
if (var15 == NULL) {
var16 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var17 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:nullable AExpr>*/
var16 = var17;
}
if (var16){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype19 = type_nullable__nit__AExpr.color;
idtype20 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name21 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3126);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_block_61d]))(self, var_new_child); /* n_block= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var22 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWithExpr> */
if (var22 == NULL) {
var23 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var24 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var_old_child); /* == on <var22:nullable ALabel>*/
var23 = var24;
}
if (var23){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype26 = type_nullable__nit__ALabel.color;
idtype27 = type_nullable__nit__ALabel.id;
if(var_new_child == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
var_class_name28 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3130);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALabelable__n_label_61d]))(self, var_new_child); /* n_label= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_kwwith= for (self: AWithExpr, TKwwith) */
void nit__parser_prod___AWithExpr___n_kwwith_61d(val* self, val* p0) {
val* var_node /* var node: TKwwith */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwwith].val = var_node; /* _n_kwwith on <self:AWithExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwwith>*/
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_expr= for (self: AWithExpr, AExpr) */
void nit__parser_prod___AWithExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_expr].val = var_node; /* _n_expr on <self:AWithExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_kwdo= for (self: AWithExpr, TKwdo) */
void nit__parser_prod___AWithExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWithExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwdo>*/
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_block= for (self: AWithExpr, nullable AExpr) */
void nit__parser_prod___AWithExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_block].val = var_node; /* _n_block on <self:AWithExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_label= for (self: AWithExpr, nullable ALabel) */
void nit__parser_prod___AWithExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AWithExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ALabel>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable ALabel(ALabel)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#visit_all for (self: AWithExpr, Visitor) */
void nit__parser_prod___AWithExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwwith */;
val* var1 /* : AExpr */;
val* var2 /* : TKwdo */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwwith].val; /* _n_kwwith on <self:AWithExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwith");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3164);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3165);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwdo].val; /* _n_kwdo on <self:AWithExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3166);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWithExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#init_aassertexpr for (self: AAssertExpr, nullable TKwassert, nullable TId, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AAssertExpr___init_aassertexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwassert /* var n_kwassert: nullable TKwassert */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_else /* var n_else: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAssertExpr>*/
}
var_n_kwassert = p0;
var_n_id = p1;
var_n_expr = p2;
var_n_else = p3;
if (unlikely(var_n_kwassert == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3179);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val = var_n_kwassert; /* _n_kwassert on <self:AAssertExpr> */
if (var_n_kwassert == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3180);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwassert->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwassert, self); /* parent= on <var_n_kwassert:nullable TKwassert>*/
}
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val = var_n_id; /* _n_id on <self:AAssertExpr> */
if (var_n_id == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_id, ((val*)NULL)); /* != on <var_n_id:nullable TId>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId(TId)>*/
}
} else {
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3183);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAssertExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3184);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val = var_n_else; /* _n_else on <self:AAssertExpr> */
if (var_n_else == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_else->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_else, ((val*)NULL)); /* != on <var_n_else:nullable AExpr>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_else->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_else, self); /* parent= on <var_n_else:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#replace_child for (self: AAssertExpr, ANode, nullable ANode) */
void nit__parser_prod___AAssertExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwassert */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable TId */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : AExpr */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
val* var16 /* : nullable AExpr */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3191);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwassert>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwassert */
cltype = type_nit__TKwassert.color;
idtype = type_nit__TKwassert.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwassert", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3192);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_kwassert_61d]))(self, var_new_child); /* n_kwassert= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable TId>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable TId */
cltype7 = type_nullable__nit__TId.color;
idtype8 = type_nullable__nit__TId.id;
if(var_new_child == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
var_class_name9 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TId", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3196);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3199);
fatal_exit(1);
}
{
var11 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_old_child); /* == on <var10:AExpr>*/
}
if (var11){
/* <var_new_child:nullable ANode> isa AExpr */
cltype13 = type_nit__AExpr.color;
idtype14 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var12 = 0;
} else {
if(cltype13 >= var_new_child->type->table_size) {
var12 = 0;
} else {
var12 = var_new_child->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
var_class_name15 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3200);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
if (var16 == NULL) {
var17 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var18 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_old_child); /* == on <var16:nullable AExpr>*/
var17 = var18;
}
if (var17){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype20 = type_nullable__nit__AExpr.color;
idtype21 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_new_child->type->table_size) {
var19 = 0;
} else {
var19 = var_new_child->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
var_class_name22 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3204);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_else_61d]))(self, var_new_child); /* n_else= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_kwassert= for (self: AAssertExpr, TKwassert) */
void nit__parser_prod___AAssertExpr___n_kwassert_61d(val* self, val* p0) {
val* var_node /* var node: TKwassert */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val = var_node; /* _n_kwassert on <self:AAssertExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwassert>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_id= for (self: AAssertExpr, nullable TId) */
void nit__parser_prod___AAssertExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val = var_node; /* _n_id on <self:AAssertExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TId>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TId(TId)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_expr= for (self: AAssertExpr, AExpr) */
void nit__parser_prod___AAssertExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val = var_node; /* _n_expr on <self:AAssertExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_else= for (self: AAssertExpr, nullable AExpr) */
void nit__parser_prod___AAssertExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val = var_node; /* _n_else on <self:AAssertExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExpr>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#visit_all for (self: AAssertExpr, Visitor) */
void nit__parser_prod___AAssertExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwassert */;
val* var1 /* : nullable TId */;
val* var2 /* : AExpr */;
val* var3 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3233);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3235);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#init_aonceexpr for (self: AOnceExpr, nullable TKwonce, nullable AExpr) */
void nit__parser_prod___AOnceExpr___init_aonceexpr(val* self, val* p0, val* p1) {
val* var_n_kwonce /* var n_kwonce: nullable TKwonce */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AOnceExpr>*/
}
var_n_kwonce = p0;
var_n_expr = p1;
if (unlikely(var_n_kwonce == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3245);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val = var_n_kwonce; /* _n_kwonce on <self:AOnceExpr> */
if (var_n_kwonce == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3246);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwonce->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwonce, self); /* parent= on <var_n_kwonce:nullable TKwonce>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3247);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOnceExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3248);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#replace_child for (self: AOnceExpr, ANode, nullable ANode) */
void nit__parser_prod___AOnceExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwonce */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExpr */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3253);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwonce>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwonce */
cltype = type_nit__TKwonce.color;
idtype = type_nit__TKwonce.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwonce", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3254);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOnceExpr__n_kwonce_61d]))(self, var_new_child); /* n_kwonce= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3257);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExpr>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExpr */
cltype6 = type_nit__AExpr.color;
idtype7 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3258);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOnceExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_kwonce= for (self: AOnceExpr, TKwonce) */
void nit__parser_prod___AOnceExpr___n_kwonce_61d(val* self, val* p0) {
val* var_node /* var node: TKwonce */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val = var_node; /* _n_kwonce on <self:AOnceExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwonce>*/
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_expr= for (self: AOnceExpr, AExpr) */
void nit__parser_prod___AOnceExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val = var_node; /* _n_expr on <self:AOnceExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#visit_all for (self: AOnceExpr, Visitor) */
void nit__parser_prod___AOnceExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwonce */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3277);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3278);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASendExpr#init_asendexpr for (self: ASendExpr, nullable AExpr) */
void nit__parser_prod___ASendExpr___init_asendexpr(val* self, val* p0) {
val* var_n_expr /* var n_expr: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASendExpr>*/
}
var_n_expr = p0;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3286);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ASendExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3287);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ASendExpr#replace_child for (self: ASendExpr, ANode, nullable ANode) */
void nit__parser_prod___ASendExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3292);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3293);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ASendExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASendExpr#n_expr= for (self: ASendExpr, AExpr) */
void nit__parser_prod___ASendExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ASendExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ASendExpr#visit_all for (self: ASendExpr, Visitor) */
void nit__parser_prod___ASendExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3307);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#init_abinopexpr for (self: ABinopExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___ABinopExpr___init_abinopexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABinopExpr>*/
}
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3316);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABinopExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3317);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3318);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ABinopExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3319);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#replace_child for (self: ABinopExpr, ANode, nullable ANode) */
void nit__parser_prod___ABinopExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExpr */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABinopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3324);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3325);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ABinopExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3328);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExpr>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExpr */
cltype6 = type_nit__AExpr.color;
idtype7 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3329);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:ABinopExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#n_expr= for (self: ABinopExpr, AExpr) */
void nit__parser_prod___ABinopExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABinopExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#n_expr2= for (self: ABinopExpr, AExpr) */
void nit__parser_prod___ABinopExpr___n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ABinopExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#visit_all for (self: ABinopExpr, Visitor) */
void nit__parser_prod___ABinopExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABinopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3348);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3349);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#init_aorexpr for (self: AOrExpr, nullable AExpr, nullable TKwor, nullable AExpr) */
void nit__parser_prod___AOrExpr___init_aorexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwor */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AOrExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3359);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3360);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3361);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AOrExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3362);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TKwor>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3363);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3364);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#replace_child for (self: AOrExpr, ANode, nullable ANode) */
void nit__parser_prod___AOrExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3369);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3370);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3373);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwor */
cltype6 = type_nit__TKwor.color;
idtype7 = type_nit__TKwor.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwor", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3374);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3377);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3378);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr= for (self: AOrExpr, AExpr) */
void nit__parser_prod___AOrExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AOrExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_op= for (self: AOrExpr, Token) */
void nit__parser_prod___AOrExpr___nit__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AOrExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr2= for (self: AOrExpr, AExpr) */
void nit__parser_prod___AOrExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#visit_all for (self: AOrExpr, Visitor) */
void nit__parser_prod___AOrExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3402);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3403);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3404);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#init_aandexpr for (self: AAndExpr, nullable AExpr, nullable TKwand, nullable AExpr) */
void nit__parser_prod___AAndExpr___init_aandexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwand */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAndExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3414);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAndExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3415);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3416);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AAndExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3417);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TKwand>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3418);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AAndExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3419);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#replace_child for (self: AAndExpr, ANode, nullable ANode) */
void nit__parser_prod___AAndExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3424);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3425);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AAndExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3428);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwand */
cltype6 = type_nit__TKwand.color;
idtype7 = type_nit__TKwand.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwand", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3429);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3432);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3433);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr= for (self: AAndExpr, AExpr) */
void nit__parser_prod___AAndExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AAndExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_op= for (self: AAndExpr, Token) */
void nit__parser_prod___AAndExpr___nit__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AAndExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr2= for (self: AAndExpr, AExpr) */
void nit__parser_prod___AAndExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AAndExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#visit_all for (self: AAndExpr, Visitor) */
void nit__parser_prod___AAndExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3457);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AAndExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3458);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3459);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#init_aorelseexpr for (self: AOrElseExpr, nullable AExpr, nullable TKwor, nullable TKwelse, nullable AExpr) */
void nit__parser_prod___AOrElseExpr___init_aorelseexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwor */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AOrElseExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_kwelse = p2;
var_n_expr2 = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3470);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrElseExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3471);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3472);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AOrElseExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3473);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TKwor>*/
}
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3474);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOrElseExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AOrElseExpr> */
if (var_n_kwelse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3475);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwelse->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwelse, self); /* parent= on <var_n_kwelse:nullable TKwelse>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3476);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrElseExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3477);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#replace_child for (self: AOrElseExpr, ANode, nullable ANode) */
void nit__parser_prod___AOrElseExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : TKwelse */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : AExpr */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3482);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3483);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrElseExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3486);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwor */
cltype6 = type_nit__TKwor.color;
idtype7 = type_nit__TKwor.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwor", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3487);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AOrElseExpr___n_kwelse].val; /* _n_kwelse on <self:AOrElseExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3490);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TKwelse>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TKwelse */
cltype12 = type_nit__TKwelse.color;
idtype13 = type_nit__TKwelse.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwelse", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3491);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOrElseExpr__n_kwelse_61d]))(self, var_new_child); /* n_kwelse= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3494);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:AExpr>*/
}
if (var16){
/* <var_new_child:nullable ANode> isa AExpr */
cltype18 = type_nit__AExpr.color;
idtype19 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
var_class_name20 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3495);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr= for (self: AOrElseExpr, AExpr) */
void nit__parser_prod___AOrElseExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AOrElseExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_op= for (self: AOrElseExpr, Token) */
void nit__parser_prod___AOrElseExpr___nit__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AOrElseExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_kwelse= for (self: AOrElseExpr, TKwelse) */
void nit__parser_prod___AOrElseExpr___n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOrElseExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AOrElseExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwelse>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr2= for (self: AOrElseExpr, AExpr) */
void nit__parser_prod___AOrElseExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrElseExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#visit_all for (self: AOrElseExpr, Visitor) */
void nit__parser_prod___AOrElseExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : TKwelse */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3524);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrElseExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3525);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AOrElseExpr___n_kwelse].val; /* _n_kwelse on <self:AOrElseExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3526);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3527);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#init_aimpliesexpr for (self: AImpliesExpr, nullable AExpr, nullable TKwimplies, nullable AExpr) */
void nit__parser_prod___AImpliesExpr___init_aimpliesexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwimplies */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AImpliesExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3537);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AImpliesExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3538);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3539);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AImpliesExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3540);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TKwimplies>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3541);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AImpliesExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3542);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#replace_child for (self: AImpliesExpr, ANode, nullable ANode) */
void nit__parser_prod___AImpliesExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3547);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3548);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AImpliesExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3551);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwimplies */
cltype6 = type_nit__TKwimplies.color;
idtype7 = type_nit__TKwimplies.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimplies", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3552);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3555);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3556);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr= for (self: AImpliesExpr, AExpr) */
void nit__parser_prod___AImpliesExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AImpliesExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_op= for (self: AImpliesExpr, Token) */
void nit__parser_prod___AImpliesExpr___nit__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AImpliesExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr2= for (self: AImpliesExpr, AExpr) */
void nit__parser_prod___AImpliesExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AImpliesExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#visit_all for (self: AImpliesExpr, Visitor) */
void nit__parser_prod___AImpliesExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3580);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AImpliesExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3581);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3582);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#init_anotexpr for (self: ANotExpr, nullable TKwnot, nullable AExpr) */
void nit__parser_prod___ANotExpr___init_anotexpr(val* self, val* p0, val* p1) {
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ANotExpr>*/
}
var_n_kwnot = p0;
var_n_expr = p1;
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3591);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:ANotExpr> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3592);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwnot->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnot, self); /* parent= on <var_n_kwnot:nullable TKwnot>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3593);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANotExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3594);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#replace_child for (self: ANotExpr, ANode, nullable ANode) */
void nit__parser_prod___ANotExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnot */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExpr */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3599);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwnot>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwnot */
cltype = type_nit__TKwnot.color;
idtype = type_nit__TKwnot.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnot", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3600);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANotExpr__n_kwnot_61d]))(self, var_new_child); /* n_kwnot= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3603);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExpr>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExpr */
cltype6 = type_nit__AExpr.color;
idtype7 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3604);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANotExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_kwnot= for (self: ANotExpr, TKwnot) */
void nit__parser_prod___ANotExpr___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:ANotExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwnot>*/
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_expr= for (self: ANotExpr, AExpr) */
void nit__parser_prod___ANotExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val = var_node; /* _n_expr on <self:ANotExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#visit_all for (self: ANotExpr, Visitor) */
void nit__parser_prod___ANotExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnot */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3623);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3624);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#init_aeqexpr for (self: AEqExpr, nullable AExpr, nullable TEq, nullable AExpr) */
void nit__parser_prod___AEqExpr___init_aeqexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TEq */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AEqExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3634);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AEqExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3635);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3636);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AEqExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3637);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TEq>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3638);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AEqExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3639);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#replace_child for (self: AEqExpr, ANode, nullable ANode) */
void nit__parser_prod___AEqExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3644);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3645);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AEqExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3648);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TEq */
cltype6 = type_nit__TEq.color;
idtype7 = type_nit__TEq.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TEq", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3649);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3652);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3653);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr= for (self: AEqExpr, AExpr) */
void nit__parser_prod___AEqExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AEqExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_op= for (self: AEqExpr, Token) */
void nit__parser_prod___AEqExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AEqExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr2= for (self: AEqExpr, AExpr) */
void nit__parser_prod___AEqExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AEqExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#visit_all for (self: AEqExpr, Visitor) */
void nit__parser_prod___AEqExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3677);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AEqExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3678);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3679);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#init_aneexpr for (self: ANeExpr, nullable AExpr, nullable TNe, nullable AExpr) */
void nit__parser_prod___ANeExpr___init_aneexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TNe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ANeExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3689);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3690);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3691);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ANeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3692);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TNe>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3693);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ANeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3694);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#replace_child for (self: ANeExpr, ANode, nullable ANode) */
void nit__parser_prod___ANeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3699);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3700);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ANeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3703);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TNe */
cltype6 = type_nit__TNe.color;
idtype7 = type_nit__TNe.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TNe", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3704);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3707);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3708);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr= for (self: ANeExpr, AExpr) */
void nit__parser_prod___ANeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ANeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_op= for (self: ANeExpr, Token) */
void nit__parser_prod___ANeExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ANeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr2= for (self: ANeExpr, AExpr) */
void nit__parser_prod___ANeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ANeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#visit_all for (self: ANeExpr, Visitor) */
void nit__parser_prod___ANeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3732);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ANeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3733);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3734);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#init_altexpr for (self: ALtExpr, nullable AExpr, nullable TLt, nullable AExpr) */
void nit__parser_prod___ALtExpr___init_altexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TLt */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALtExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3744);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALtExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3745);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3746);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ALtExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3747);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TLt>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3748);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALtExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3749);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#replace_child for (self: ALtExpr, ANode, nullable ANode) */
void nit__parser_prod___ALtExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3754);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3755);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALtExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3758);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TLt */
cltype6 = type_nit__TLt.color;
idtype7 = type_nit__TLt.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLt", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3759);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3762);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3763);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr= for (self: ALtExpr, AExpr) */
void nit__parser_prod___ALtExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALtExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_op= for (self: ALtExpr, Token) */
void nit__parser_prod___ALtExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ALtExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr2= for (self: ALtExpr, AExpr) */
void nit__parser_prod___ALtExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALtExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#visit_all for (self: ALtExpr, Visitor) */
void nit__parser_prod___ALtExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3787);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALtExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3788);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3789);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#init_aleexpr for (self: ALeExpr, nullable AExpr, nullable TLe, nullable AExpr) */
void nit__parser_prod___ALeExpr___init_aleexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TLe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALeExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3799);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3800);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3801);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ALeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3802);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TLe>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3803);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3804);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#replace_child for (self: ALeExpr, ANode, nullable ANode) */
void nit__parser_prod___ALeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3809);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3810);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3813);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TLe */
cltype6 = type_nit__TLe.color;
idtype7 = type_nit__TLe.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLe", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3814);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3817);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3818);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr= for (self: ALeExpr, AExpr) */
void nit__parser_prod___ALeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_op= for (self: ALeExpr, Token) */
void nit__parser_prod___ALeExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ALeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr2= for (self: ALeExpr, AExpr) */
void nit__parser_prod___ALeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#visit_all for (self: ALeExpr, Visitor) */
void nit__parser_prod___ALeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3842);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3843);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3844);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#init_allexpr for (self: ALlExpr, nullable AExpr, nullable TLl, nullable AExpr) */
void nit__parser_prod___ALlExpr___init_allexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TLl */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALlExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3854);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALlExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3855);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3856);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ALlExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3857);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TLl>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3858);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALlExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3859);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#replace_child for (self: ALlExpr, ANode, nullable ANode) */
void nit__parser_prod___ALlExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3864);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3865);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALlExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3868);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TLl */
cltype6 = type_nit__TLl.color;
idtype7 = type_nit__TLl.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLl", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3869);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3872);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3873);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr= for (self: ALlExpr, AExpr) */
void nit__parser_prod___ALlExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALlExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_op= for (self: ALlExpr, Token) */
void nit__parser_prod___ALlExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ALlExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr2= for (self: ALlExpr, AExpr) */
void nit__parser_prod___ALlExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALlExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#visit_all for (self: ALlExpr, Visitor) */
void nit__parser_prod___ALlExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3897);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALlExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3898);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3899);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#init_agtexpr for (self: AGtExpr, nullable AExpr, nullable TGt, nullable AExpr) */
void nit__parser_prod___AGtExpr___init_agtexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TGt */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AGtExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3909);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGtExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3910);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3911);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AGtExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3912);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TGt>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3913);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGtExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3914);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#replace_child for (self: AGtExpr, ANode, nullable ANode) */
void nit__parser_prod___AGtExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3919);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3920);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGtExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3923);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TGt */
cltype6 = type_nit__TGt.color;
idtype7 = type_nit__TGt.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGt", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3924);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3927);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3928);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr= for (self: AGtExpr, AExpr) */
void nit__parser_prod___AGtExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGtExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_op= for (self: AGtExpr, Token) */
void nit__parser_prod___AGtExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AGtExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr2= for (self: AGtExpr, AExpr) */
void nit__parser_prod___AGtExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGtExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#visit_all for (self: AGtExpr, Visitor) */
void nit__parser_prod___AGtExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3952);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGtExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3953);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3954);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#init_ageexpr for (self: AGeExpr, nullable AExpr, nullable TGe, nullable AExpr) */
void nit__parser_prod___AGeExpr___init_ageexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TGe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AGeExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3964);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3965);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3966);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AGeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3967);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TGe>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3968);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3969);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#replace_child for (self: AGeExpr, ANode, nullable ANode) */
void nit__parser_prod___AGeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3974);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3975);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3978);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TGe */
cltype6 = type_nit__TGe.color;
idtype7 = type_nit__TGe.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGe", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3979);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3982);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3983);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr= for (self: AGeExpr, AExpr) */
void nit__parser_prod___AGeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_op= for (self: AGeExpr, Token) */
void nit__parser_prod___AGeExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AGeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr2= for (self: AGeExpr, AExpr) */
void nit__parser_prod___AGeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#visit_all for (self: AGeExpr, Visitor) */
void nit__parser_prod___AGeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4007);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4008);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4009);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#init_aggexpr for (self: AGgExpr, nullable AExpr, nullable TGg, nullable AExpr) */
void nit__parser_prod___AGgExpr___init_aggexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TGg */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AGgExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4019);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGgExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4020);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4021);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AGgExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4022);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TGg>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4023);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGgExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4024);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#replace_child for (self: AGgExpr, ANode, nullable ANode) */
void nit__parser_prod___AGgExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4029);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4030);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGgExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4033);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TGg */
cltype6 = type_nit__TGg.color;
idtype7 = type_nit__TGg.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGg", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4034);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4037);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4038);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr= for (self: AGgExpr, AExpr) */
void nit__parser_prod___AGgExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGgExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_op= for (self: AGgExpr, Token) */
void nit__parser_prod___AGgExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AGgExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr2= for (self: AGgExpr, AExpr) */
void nit__parser_prod___AGgExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGgExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#visit_all for (self: AGgExpr, Visitor) */
void nit__parser_prod___AGgExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4062);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGgExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4063);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4064);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#init_aisaexpr for (self: AIsaExpr, nullable AExpr, nullable TKwisa, nullable AType) */
void nit__parser_prod___AIsaExpr___init_aisaexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwisa /* var n_kwisa: nullable TKwisa */;
val* var_n_type /* var n_type: nullable AType */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AIsaExpr>*/
}
var_n_expr = p0;
var_n_kwisa = p1;
var_n_type = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4074);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIsaExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4075);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_kwisa == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4076);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_kwisa].val = var_n_kwisa; /* _n_kwisa on <self:AIsaExpr> */
if (var_n_kwisa == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4077);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwisa->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwisa, self); /* parent= on <var_n_kwisa:nullable TKwisa>*/
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4078);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val = var_n_type; /* _n_type on <self:AIsaExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4079);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#replace_child for (self: AIsaExpr, ANode, nullable ANode) */
void nit__parser_prod___AIsaExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwisa */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4084);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4085);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_kwisa].val; /* _n_kwisa on <self:AIsaExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisa");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4088);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwisa>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwisa */
cltype6 = type_nit__TKwisa.color;
idtype7 = type_nit__TKwisa.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwisa", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4089);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_kwisa_61d]))(self, var_new_child); /* n_kwisa= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4092);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AType>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AType */
cltype12 = type_nit__AType.color;
idtype13 = type_nit__AType.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4093);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_type_61d]))(self, var_new_child); /* n_type= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_expr= for (self: AIsaExpr, AExpr) */
void nit__parser_prod___AIsaExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val = var_node; /* _n_expr on <self:AIsaExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_kwisa= for (self: AIsaExpr, TKwisa) */
void nit__parser_prod___AIsaExpr___n_kwisa_61d(val* self, val* p0) {
val* var_node /* var node: TKwisa */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_kwisa].val = var_node; /* _n_kwisa on <self:AIsaExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwisa>*/
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_type= for (self: AIsaExpr, AType) */
void nit__parser_prod___AIsaExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val = var_node; /* _n_type on <self:AIsaExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#visit_all for (self: AIsaExpr, Visitor) */
void nit__parser_prod___AIsaExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwisa */;
val* var2 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4117);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_kwisa].val; /* _n_kwisa on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisa");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4118);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4119);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#init_aplusexpr for (self: APlusExpr, nullable AExpr, nullable TPlus, nullable AExpr) */
void nit__parser_prod___APlusExpr___init_aplusexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TPlus */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APlusExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4129);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APlusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4130);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4131);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:APlusExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4132);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPlus>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4133);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APlusExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4134);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#replace_child for (self: APlusExpr, ANode, nullable ANode) */
void nit__parser_prod___APlusExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4139);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4140);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APlusExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4143);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TPlus */
cltype6 = type_nit__TPlus.color;
idtype7 = type_nit__TPlus.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPlus", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4144);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4147);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4148);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr= for (self: APlusExpr, AExpr) */
void nit__parser_prod___APlusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APlusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_op= for (self: APlusExpr, Token) */
void nit__parser_prod___APlusExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:APlusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr2= for (self: APlusExpr, AExpr) */
void nit__parser_prod___APlusExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APlusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#visit_all for (self: APlusExpr, Visitor) */
void nit__parser_prod___APlusExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4172);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APlusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4173);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4174);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#init_aminusexpr for (self: AMinusExpr, nullable AExpr, nullable TMinus, nullable AExpr) */
void nit__parser_prod___AMinusExpr___init_aminusexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TMinus */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AMinusExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4184);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMinusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4185);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4186);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AMinusExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4187);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TMinus>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4188);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AMinusExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4189);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#replace_child for (self: AMinusExpr, ANode, nullable ANode) */
void nit__parser_prod___AMinusExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4194);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4195);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AMinusExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4198);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TMinus */
cltype6 = type_nit__TMinus.color;
idtype7 = type_nit__TMinus.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMinus", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4199);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4202);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4203);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr= for (self: AMinusExpr, AExpr) */
void nit__parser_prod___AMinusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AMinusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_op= for (self: AMinusExpr, Token) */
void nit__parser_prod___AMinusExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AMinusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr2= for (self: AMinusExpr, AExpr) */
void nit__parser_prod___AMinusExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AMinusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#visit_all for (self: AMinusExpr, Visitor) */
void nit__parser_prod___AMinusExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4227);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AMinusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4228);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4229);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#init_astarshipexpr for (self: AStarshipExpr, nullable AExpr, nullable TStarship, nullable AExpr) */
void nit__parser_prod___AStarshipExpr___init_astarshipexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TStarship */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStarshipExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4239);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarshipExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4240);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4241);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AStarshipExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4242);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TStarship>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4243);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarshipExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4244);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#replace_child for (self: AStarshipExpr, ANode, nullable ANode) */
void nit__parser_prod___AStarshipExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4249);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4250);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarshipExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4253);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TStarship */
cltype6 = type_nit__TStarship.color;
idtype7 = type_nit__TStarship.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarship", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4254);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4257);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4258);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr= for (self: AStarshipExpr, AExpr) */
void nit__parser_prod___AStarshipExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarshipExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_op= for (self: AStarshipExpr, Token) */
void nit__parser_prod___AStarshipExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AStarshipExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr2= for (self: AStarshipExpr, AExpr) */
void nit__parser_prod___AStarshipExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarshipExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#visit_all for (self: AStarshipExpr, Visitor) */
void nit__parser_prod___AStarshipExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4282);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarshipExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4283);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4284);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#init_astarexpr for (self: AStarExpr, nullable AExpr, nullable TStar, nullable AExpr) */
void nit__parser_prod___AStarExpr___init_astarexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TStar */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStarExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4294);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4295);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4296);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AStarExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4297);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TStar>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4298);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4299);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#replace_child for (self: AStarExpr, ANode, nullable ANode) */
void nit__parser_prod___AStarExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Token */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4304);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AExpr>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var2 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var2 = 0;
} else {
var2 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4305);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4308);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TStar */
cltype6 = type_nit__TStar.color;
idtype7 = type_nit__TStar.id;
if(var_new_child == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
var_class_name8 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStar", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4309);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4312);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExpr>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExpr */
cltype12 = type_nit__AExpr.color;
idtype13 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name14 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4313);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
