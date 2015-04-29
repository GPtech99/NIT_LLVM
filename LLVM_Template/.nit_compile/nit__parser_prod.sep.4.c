#include "nit__parser_prod.sep.0.h"
/* method parser_prod#AParExpr#visit_all for (self: AParExpr, Visitor) */
void nit__parser_prod___AParExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : AExpr */;
val* var2 /* : TCpar */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6552);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6553);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6554);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#init_aascastexpr for (self: AAsCastExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable AType, nullable TCpar) */
void nit__parser_prod___AAsCastExpr___init_aascastexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAsCastExpr>*/
}
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_type = p3;
var_n_cpar = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6567);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsCastExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6568);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6569);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsCastExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6570);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwas->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwas, self); /* parent= on <var_n_kwas:nullable TKwas>*/
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_n_opar; /* _n_opar on <self:AAsCastExpr> */
if (var_n_opar == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_opar, ((val*)NULL)); /* != on <var_n_opar:nullable TOpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_opar, self); /* parent= on <var_n_opar:nullable TOpar(TOpar)>*/
}
} else {
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6573);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val = var_n_type; /* _n_type on <self:AAsCastExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6574);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsCastExpr> */
if (var_n_cpar == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_cpar, ((val*)NULL)); /* != on <var_n_cpar:nullable TCpar>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cpar, self); /* parent= on <var_n_cpar:nullable TCpar(TCpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#replace_child for (self: AAsCastExpr, ANode, nullable ANode) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwas */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : nullable TOpar */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
val* var16 /* : AType */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
val* var22 /* : nullable TCpar */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6581);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6582);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6585);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwas>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwas */
cltype6 = type_nit__TKwas.color;
idtype7 = type_nit__TKwas.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6586);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_kwas_61d]))(self, var_new_child); /* n_kwas= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var9 == NULL) {
var10 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var11 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:nullable TOpar>*/
var10 = var11;
}
if (var10){
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype13 = type_nullable__nit__TOpar.color;
idtype14 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6590);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_opar_61d]))(self, var_new_child); /* n_opar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6593);
fatal_exit(1);
}
{
var17 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_old_child); /* == on <var16:AType>*/
}
if (var17){
/* <var_new_child:nullable ANode> isa AType */
cltype19 = type_nit__AType.color;
idtype20 = type_nit__AType.id;
if(var_new_child == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name21 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6594);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsCastExpr__n_type_61d]))(self, var_new_child); /* n_type= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var22 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var22 == NULL) {
var23 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var24 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var_old_child); /* == on <var22:nullable TCpar>*/
var23 = var24;
}
if (var23){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype26 = type_nullable__nit__TCpar.color;
idtype27 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6598);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_cpar_61d]))(self, var_new_child); /* n_cpar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_expr= for (self: AAsCastExpr, AExpr) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_node; /* _n_expr on <self:AAsCastExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_kwas= for (self: AAsCastExpr, TKwas) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_node; /* _n_kwas on <self:AAsCastExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwas>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_opar= for (self: AAsCastExpr, nullable TOpar) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_node; /* _n_opar on <self:AAsCastExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TOpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TOpar(TOpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_type= for (self: AAsCastExpr, AType) */
void nit__parser_prod___AAsCastExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val = var_node; /* _n_type on <self:AAsCastExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_cpar= for (self: AAsCastExpr, nullable TCpar) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_node; /* _n_cpar on <self:AAsCastExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TCpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TCpar(TCpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#visit_all for (self: AAsCastExpr, Visitor) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : nullable TOpar */;
val* var3 /* : AType */;
val* var4 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6632);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6633);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6635);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#init_aasnotnullexpr for (self: AAsNotnullExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable TKwnot, nullable TKwnull, nullable TCpar) */
void nit__parser_prod___AAsNotnullExpr___init_aasnotnullexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_kwnull /* var n_kwnull: nullable TKwnull */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAsNotnullExpr>*/
}
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_kwnot = p3;
var_n_kwnull = p4;
var_n_cpar = p5;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6649);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsNotnullExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6650);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6651);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotnullExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6652);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwas->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwas, self); /* parent= on <var_n_kwas:nullable TKwas>*/
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_n_opar; /* _n_opar on <self:AAsNotnullExpr> */
if (var_n_opar == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_opar, ((val*)NULL)); /* != on <var_n_opar:nullable TOpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_opar, self); /* parent= on <var_n_opar:nullable TOpar(TOpar)>*/
}
} else {
}
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6655);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6656);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwnot->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnot, self); /* parent= on <var_n_kwnot:nullable TKwnot>*/
}
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6657);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6658);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwnull->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnull, self); /* parent= on <var_n_kwnull:nullable TKwnull>*/
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsNotnullExpr> */
if (var_n_cpar == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_cpar, ((val*)NULL)); /* != on <var_n_cpar:nullable TCpar>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cpar, self); /* parent= on <var_n_cpar:nullable TCpar(TCpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#replace_child for (self: AAsNotnullExpr, ANode, nullable ANode) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwas */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : nullable TOpar */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
val* var16 /* : TKwnot */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
val* var22 /* : TKwnull */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
val* var28 /* : nullable TCpar */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6665);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6666);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6669);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwas>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwas */
cltype6 = type_nit__TKwas.color;
idtype7 = type_nit__TKwas.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6670);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_kwas_61d]))(self, var_new_child); /* n_kwas= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var9 == NULL) {
var10 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var11 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:nullable TOpar>*/
var10 = var11;
}
if (var10){
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype13 = type_nullable__nit__TOpar.color;
idtype14 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6674);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_opar_61d]))(self, var_new_child); /* n_opar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6677);
fatal_exit(1);
}
{
var17 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_old_child); /* == on <var16:TKwnot>*/
}
if (var17){
/* <var_new_child:nullable ANode> isa TKwnot */
cltype19 = type_nit__TKwnot.color;
idtype20 = type_nit__TKwnot.id;
if(var_new_child == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name21 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnot", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6678);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsNotnullExpr__n_kwnot_61d]))(self, var_new_child); /* n_kwnot= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var22 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6681);
fatal_exit(1);
}
{
var23 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var_old_child); /* == on <var22:TKwnull>*/
}
if (var23){
/* <var_new_child:nullable ANode> isa TKwnull */
cltype25 = type_nit__TKwnull.color;
idtype26 = type_nit__TKwnull.id;
if(var_new_child == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
var_class_name27 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnull", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6682);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsNotnullExpr__n_kwnull_61d]))(self, var_new_child); /* n_kwnull= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var30 = ((short int(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var28, var_old_child); /* == on <var28:nullable TCpar>*/
var29 = var30;
}
if (var29){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype32 = type_nullable__nit__TCpar.color;
idtype33 = type_nullable__nit__TCpar.id;
if(var_new_child == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_new_child->type->table_size) {
var31 = 0;
} else {
var31 = var_new_child->type->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
var_class_name34 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6686);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_cpar_61d]))(self, var_new_child); /* n_cpar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_expr= for (self: AAsNotnullExpr, AExpr) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_node; /* _n_expr on <self:AAsNotnullExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwas= for (self: AAsNotnullExpr, TKwas) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotnullExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwas>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_opar= for (self: AAsNotnullExpr, nullable TOpar) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_node; /* _n_opar on <self:AAsNotnullExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TOpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TOpar(TOpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnot= for (self: AAsNotnullExpr, TKwnot) */
void nit__parser_prod___AAsNotnullExpr___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotnullExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwnot>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnull= for (self: AAsNotnullExpr, TKwnull) */
void nit__parser_prod___AAsNotnullExpr___n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:AAsNotnullExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwnull>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_cpar= for (self: AAsNotnullExpr, nullable TCpar) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_node; /* _n_cpar on <self:AAsNotnullExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TCpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TCpar(TCpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#visit_all for (self: AAsNotnullExpr, Visitor) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : nullable TOpar */;
val* var3 /* : TKwnot */;
val* var4 /* : TKwnull */;
val* var5 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6725);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6726);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6728);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6729);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var5); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#init_aissetattrexpr for (self: AIssetAttrExpr, nullable TKwisset, nullable AExpr, nullable TAttrid) */
void nit__parser_prod___AIssetAttrExpr___init_aissetattrexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwisset /* var n_kwisset: nullable TKwisset */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AIssetAttrExpr>*/
}
var_n_kwisset = p0;
var_n_expr = p1;
var_n_id = p2;
if (unlikely(var_n_kwisset == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6740);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val = var_n_kwisset; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var_n_kwisset == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6741);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwisset->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwisset, self); /* parent= on <var_n_kwisset:nullable TKwisset>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6742);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIssetAttrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6743);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6744);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AIssetAttrExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6745);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TAttrid>*/
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#replace_child for (self: AIssetAttrExpr, ANode, nullable ANode) */
void nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwisset */;
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
val* var9 /* : TAttrid */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6750);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwisset>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwisset */
cltype = type_nit__TKwisset.color;
idtype = type_nit__TKwisset.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwisset", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6751);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIssetAttrExpr__n_kwisset_61d]))(self, var_new_child); /* n_kwisset= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6754);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6755);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6758);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TAttrid>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TAttrid */
cltype12 = type_nit__TAttrid.color;
idtype13 = type_nit__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6759);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_kwisset= for (self: AIssetAttrExpr, TKwisset) */
void nit__parser_prod___AIssetAttrExpr___n_kwisset_61d(val* self, val* p0) {
val* var_node /* var node: TKwisset */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val = var_node; /* _n_kwisset on <self:AIssetAttrExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwisset>*/
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_expr= for (self: AIssetAttrExpr, AExpr) */
void nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AIssetAttrExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_id= for (self: AIssetAttrExpr, TAttrid) */
void nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AIssetAttrExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAttrid>*/
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#visit_all for (self: AIssetAttrExpr, Visitor) */
void nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwisset */;
val* var1 /* : AExpr */;
val* var2 /* : TAttrid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6783);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6784);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6785);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#init_adebugtypeexpr for (self: ADebugTypeExpr, nullable TKwdebug, nullable TKwtype, nullable AExpr, nullable AType) */
void nit__parser_prod___ADebugTypeExpr___init_adebugtypeexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwdebug /* var n_kwdebug: nullable TKwdebug */;
val* var_n_kwtype /* var n_kwtype: nullable TKwtype */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_type /* var n_type: nullable AType */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ADebugTypeExpr>*/
}
var_n_kwdebug = p0;
var_n_kwtype = p1;
var_n_expr = p2;
var_n_type = p3;
if (unlikely(var_n_kwdebug == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6796);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_n_kwdebug; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var_n_kwdebug == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6797);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwdebug->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwdebug, self); /* parent= on <var_n_kwdebug:nullable TKwdebug>*/
}
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6798);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var_n_kwtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6799);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwtype->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwtype, self); /* parent= on <var_n_kwtype:nullable TKwtype>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6800);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ADebugTypeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6801);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6802);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val = var_n_type; /* _n_type on <self:ADebugTypeExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6803);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#replace_child for (self: ADebugTypeExpr, ANode, nullable ANode) */
void nit__parser_prod___ADebugTypeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwdebug */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwtype */;
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
val* var15 /* : AType */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6808);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwdebug>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwdebug */
cltype = type_nit__TKwdebug.color;
idtype = type_nit__TKwdebug.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdebug", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6809);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADebugTypeExpr__n_kwdebug_61d]))(self, var_new_child); /* n_kwdebug= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6812);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwtype>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwtype */
cltype6 = type_nit__TKwtype.color;
idtype7 = type_nit__TKwtype.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwtype", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6813);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADebugTypeExpr__n_kwtype_61d]))(self, var_new_child); /* n_kwtype= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6816);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6817);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADebugTypeExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6820);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:AType>*/
}
if (var16){
/* <var_new_child:nullable ANode> isa AType */
cltype18 = type_nit__AType.color;
idtype19 = type_nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6821);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADebugTypeExpr__n_type_61d]))(self, var_new_child); /* n_type= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwdebug= for (self: ADebugTypeExpr, TKwdebug) */
void nit__parser_prod___ADebugTypeExpr___n_kwdebug_61d(val* self, val* p0) {
val* var_node /* var node: TKwdebug */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_node; /* _n_kwdebug on <self:ADebugTypeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwdebug>*/
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwtype= for (self: ADebugTypeExpr, TKwtype) */
void nit__parser_prod___ADebugTypeExpr___n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val = var_node; /* _n_kwtype on <self:ADebugTypeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwtype>*/
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_expr= for (self: ADebugTypeExpr, AExpr) */
void nit__parser_prod___ADebugTypeExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val = var_node; /* _n_expr on <self:ADebugTypeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_type= for (self: ADebugTypeExpr, AType) */
void nit__parser_prod___ADebugTypeExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val = var_node; /* _n_type on <self:ADebugTypeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#visit_all for (self: ADebugTypeExpr, Visitor) */
void nit__parser_prod___ADebugTypeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdebug */;
val* var1 /* : TKwtype */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6850);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6851);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6852);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6853);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#init_avarargexpr for (self: AVarargExpr, nullable AExpr, nullable TDotdotdot) */
void nit__parser_prod___AVarargExpr___init_avarargexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_dotdotdot /* var n_dotdotdot: nullable TDotdotdot */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AVarargExpr>*/
}
var_n_expr = p0;
var_n_dotdotdot = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6862);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVarargExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6863);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_dotdotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6864);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AVarargExpr> */
if (var_n_dotdotdot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6865);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_dotdotdot->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_dotdotdot, self); /* parent= on <var_n_dotdotdot:nullable TDotdotdot>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#replace_child for (self: AVarargExpr, ANode, nullable ANode) */
void nit__parser_prod___AVarargExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TDotdotdot */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6870);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6871);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVarargExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6874);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TDotdotdot>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TDotdotdot */
cltype6 = type_nit__TDotdotdot.color;
idtype7 = type_nit__TDotdotdot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TDotdotdot", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6875);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVarargExpr__n_dotdotdot_61d]))(self, var_new_child); /* n_dotdotdot= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_expr= for (self: AVarargExpr, AExpr) */
void nit__parser_prod___AVarargExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val = var_node; /* _n_expr on <self:AVarargExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_dotdotdot= for (self: AVarargExpr, TDotdotdot) */
void nit__parser_prod___AVarargExpr___n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: TDotdotdot */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AVarargExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TDotdotdot>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#visit_all for (self: AVarargExpr, Visitor) */
void nit__parser_prod___AVarargExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TDotdotdot */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6894);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6895);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#init_anamedargexpr for (self: ANamedargExpr, nullable TId, nullable TAssign, nullable AExpr) */
void nit__parser_prod___ANamedargExpr___init_anamedargexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ANamedargExpr>*/
}
var_n_id = p0;
var_n_assign = p1;
var_n_expr = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6905);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val = var_n_id; /* _n_id on <self:ANamedargExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6906);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6907);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ANamedargExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6908);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign, self); /* parent= on <var_n_assign:nullable TAssign>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6909);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANamedargExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6910);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#replace_child for (self: ANamedargExpr, ANode, nullable ANode) */
void nit__parser_prod___ANamedargExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TAssign */;
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
var = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <self:ANamedargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6915);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6916);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANamedargExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val; /* _n_assign on <self:ANamedargExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6919);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TAssign>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TAssign */
cltype6 = type_nit__TAssign.color;
idtype7 = type_nit__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6920);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANamedargExpr__n_assign_61d]))(self, var_new_child); /* n_assign= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6923);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6924);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANamedargExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#n_id= for (self: ANamedargExpr, TId) */
void nit__parser_prod___ANamedargExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val = var_node; /* _n_id on <self:ANamedargExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#n_assign= for (self: ANamedargExpr, TAssign) */
void nit__parser_prod___ANamedargExpr___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val = var_node; /* _n_assign on <self:ANamedargExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAssign>*/
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#n_expr= for (self: ANamedargExpr, AExpr) */
void nit__parser_prod___ANamedargExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val = var_node; /* _n_expr on <self:ANamedargExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#visit_all for (self: ANamedargExpr, Visitor) */
void nit__parser_prod___ANamedargExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <self:ANamedargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6948);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val; /* _n_assign on <self:ANamedargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6949);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6950);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#init_atypeexpr for (self: ATypeExpr, nullable AType) */
void nit__parser_prod___ATypeExpr___init_atypeexpr(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ATypeExpr>*/
}
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6958);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val = var_n_type; /* _n_type on <self:ATypeExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6959);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#replace_child for (self: ATypeExpr, ANode, nullable ANode) */
void nit__parser_prod___ATypeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val; /* _n_type on <self:ATypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6964);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AType>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AType */
cltype = type_nit__AType.color;
idtype = type_nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6965);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ATypeExpr__n_type_61d]))(self, var_new_child); /* n_type= on <self:ATypeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#n_type= for (self: ATypeExpr, AType) */
void nit__parser_prod___ATypeExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val = var_node; /* _n_type on <self:ATypeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#visit_all for (self: ATypeExpr, Visitor) */
void nit__parser_prod___ATypeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val; /* _n_type on <self:ATypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6979);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#init_amethidexpr for (self: AMethidExpr, nullable AExpr, nullable AMethid) */
void nit__parser_prod___AMethidExpr___init_amethidexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable AMethid */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AMethidExpr>*/
}
var_n_expr = p0;
var_n_id = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6988);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMethidExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6989);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6990);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val = var_n_id; /* _n_id on <self:AMethidExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6991);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable AMethid>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#replace_child for (self: AMethidExpr, ANode, nullable ANode) */
void nit__parser_prod___AMethidExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AMethid */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val; /* _n_expr on <self:AMethidExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6996);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6997);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethidExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AMethidExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7000);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AMethid>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AMethid */
cltype6 = type_nit__AMethid.color;
idtype7 = type_nit__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7001);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethidExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AMethidExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#n_expr= for (self: AMethidExpr, AExpr) */
void nit__parser_prod___AMethidExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val = var_node; /* _n_expr on <self:AMethidExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#n_id= for (self: AMethidExpr, AMethid) */
void nit__parser_prod___AMethidExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val = var_node; /* _n_id on <self:AMethidExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AMethid>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#visit_all for (self: AMethidExpr, Visitor) */
void nit__parser_prod___AMethidExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val; /* _n_expr on <self:AMethidExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7020);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7021);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#init_aatexpr for (self: AAtExpr, nullable AAnnotations) */
void nit__parser_prod___AAtExpr___init_aatexpr(val* self, val* p0) {
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAtExpr>*/
}
var_n_annotations = p0;
if (unlikely(var_n_annotations == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7029);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAtExpr> */
if (var_n_annotations == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7030);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations>*/
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#replace_child for (self: AAtExpr, ANode, nullable ANode) */
void nit__parser_prod___AAtExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AAnnotations */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable AAnnotations>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa AAnnotations */
cltype = type_nit__AAnnotations.color;
idtype = type_nit__AAnnotations.id;
if(var_new_child == NULL) {
var3 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var3 = 0;
} else {
var3 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAnnotations", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7036);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AAtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#n_annotations= for (self: AAtExpr, nullable AAnnotations) */
void nit__parser_prod___AAtExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAtExpr> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7044);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AAnnotations>*/
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#visit_all for (self: AAtExpr, Visitor) */
void nit__parser_prod___AAtExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AManyExpr#init_amanyexpr for (self: AManyExpr, Collection[Object]) */
void nit__parser_prod___AManyExpr___init_amanyexpr(val* self, val* p0) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var /* : ANodes[AExpr] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AManyExpr>*/
}
var_n_exprs = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AManyExpr__n_exprs]))(self); /* n_exprs on <self:AManyExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_exprs); /* unsafe_add_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AManyExpr#replace_child for (self: AManyExpr, ANode, nullable ANode) */
void nit__parser_prod___AManyExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
short int var1 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AManyExpr__n_exprs]))(self); /* n_exprs on <self:AManyExpr>*/
}
{
var1 = ((short int(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var, var_old_child, var_new_child); /* replace_child on <var:ANodes[AExpr]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AManyExpr#visit_all for (self: AManyExpr, Visitor) */
void nit__parser_prod___AManyExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AManyExpr__n_exprs]))(self); /* n_exprs on <self:AManyExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var, var_v); /* visit_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#init_alistexprs for (self: AListExprs, Collection[Object]) */
void nit__parser_prod___AListExprs___init_alistexprs(val* self, val* p0) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var /* : ANodes[AExpr] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AListExprs>*/
}
var_n_exprs = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:AListExprs>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_exprs); /* unsafe_add_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#replace_child for (self: AListExprs, ANode, nullable ANode) */
void nit__parser_prod___AListExprs___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
short int var1 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:AListExprs>*/
}
{
var1 = ((short int(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var, var_old_child, var_new_child); /* replace_child on <var:ANodes[AExpr]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#visit_all for (self: AListExprs, Visitor) */
void nit__parser_prod___AListExprs___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:AListExprs>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var, var_v); /* visit_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#init_aparexprs for (self: AParExprs, nullable TOpar, Collection[Object], nullable TCpar) */
void nit__parser_prod___AParExprs___init_aparexprs(val* self, val* p0, val* p1, val* p2) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var /* : ANodes[AExpr] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AParExprs>*/
}
var_n_opar = p0;
var_n_exprs = p1;
var_n_cpar = p2;
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7100);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val = var_n_opar; /* _n_opar on <self:AParExprs> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7101);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_opar, self); /* parent= on <var_n_opar:nullable TOpar>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:AParExprs>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_exprs); /* unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7103);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExprs> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7104);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cpar, self); /* parent= on <var_n_cpar:nullable TCpar>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#replace_child for (self: AParExprs, ANode, nullable ANode) */
void nit__parser_prod___AParExprs___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOpar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : ANodes[AExpr] */;
short int var4 /* : Bool */;
val* var5 /* : TCpar */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7109);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TOpar>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TOpar */
cltype = type_nit__TOpar.color;
idtype = type_nit__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TOpar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7110);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AParExprs__n_opar_61d]))(self, var_new_child); /* n_opar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:AParExprs>*/
}
{
var4 = ((short int(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var3, var_old_child, var_new_child); /* replace_child on <var3:ANodes[AExpr]>*/
}
if (var4){
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7114);
fatal_exit(1);
}
{
var6 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_old_child); /* == on <var5:TCpar>*/
}
if (var6){
/* <var_new_child:nullable ANode> isa TCpar */
cltype8 = type_nit__TCpar.color;
idtype9 = type_nit__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCpar", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7115);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AParExprs__n_cpar_61d]))(self, var_new_child); /* n_cpar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_opar= for (self: AParExprs, TOpar) */
void nit__parser_prod___AParExprs___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val = var_node; /* _n_opar on <self:AParExprs> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TOpar>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_cpar= for (self: AParExprs, TCpar) */
void nit__parser_prod___AParExprs___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val = var_node; /* _n_cpar on <self:AParExprs> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TCpar>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#visit_all for (self: AParExprs, Visitor) */
void nit__parser_prod___AParExprs___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : TCpar */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7134);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:AParExprs>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var1, var_v); /* visit_all on <var1:ANodes[AExpr]>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7136);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#init_abraexprs for (self: ABraExprs, nullable TObra, Collection[Object], nullable TCbra) */
void nit__parser_prod___ABraExprs___init_abraexprs(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var /* : ANodes[AExpr] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABraExprs>*/
}
var_n_obra = p0;
var_n_exprs = p1;
var_n_cbra = p2;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7146);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val = var_n_obra; /* _n_obra on <self:ABraExprs> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7147);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_obra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_obra, self); /* parent= on <var_n_obra:nullable TObra>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:ABraExprs>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_exprs); /* unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7149);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraExprs> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7150);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_cbra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cbra, self); /* parent= on <var_n_cbra:nullable TCbra>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#replace_child for (self: ABraExprs, ANode, nullable ANode) */
void nit__parser_prod___ABraExprs___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : ANodes[AExpr] */;
short int var4 /* : Bool */;
val* var5 /* : TCbra */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7155);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TObra>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TObra */
cltype = type_nit__TObra.color;
idtype = type_nit__TObra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7156);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraExprs__n_obra_61d]))(self, var_new_child); /* n_obra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:ABraExprs>*/
}
{
var4 = ((short int(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var3, var_old_child, var_new_child); /* replace_child on <var3:ANodes[AExpr]>*/
}
if (var4){
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7160);
fatal_exit(1);
}
{
var6 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_old_child); /* == on <var5:TCbra>*/
}
if (var6){
/* <var_new_child:nullable ANode> isa TCbra */
cltype8 = type_nit__TCbra.color;
idtype9 = type_nit__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7161);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraExprs__n_cbra_61d]))(self, var_new_child); /* n_cbra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_obra= for (self: ABraExprs, TObra) */
void nit__parser_prod___ABraExprs___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val = var_node; /* _n_obra on <self:ABraExprs> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TObra>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_cbra= for (self: ABraExprs, TCbra) */
void nit__parser_prod___ABraExprs___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val = var_node; /* _n_cbra on <self:ABraExprs> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TCbra>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#visit_all for (self: ABraExprs, Visitor) */
void nit__parser_prod___ABraExprs___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7180);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(self); /* n_exprs on <self:ABraExprs>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var1, var_v); /* visit_all on <var1:ANodes[AExpr]>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7182);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#init_aplusassignop for (self: APlusAssignOp, nullable TPluseq) */
void nit__parser_prod___APlusAssignOp___init_aplusassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPluseq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APlusAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7190);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APlusAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7191);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPluseq>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#replace_child for (self: APlusAssignOp, ANode, nullable ANode) */
void nit__parser_prod___APlusAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7196);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TPluseq */
cltype = type_nit__TPluseq.color;
idtype = type_nit__TPluseq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPluseq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7197);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:APlusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#n_op= for (self: APlusAssignOp, Token) */
void nit__parser_prod___APlusAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APlusAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#visit_all for (self: APlusAssignOp, Visitor) */
void nit__parser_prod___APlusAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7211);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#init_aminusassignop for (self: AMinusAssignOp, nullable TMinuseq) */
void nit__parser_prod___AMinusAssignOp___init_aminusassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TMinuseq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AMinusAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7219);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AMinusAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7220);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TMinuseq>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#replace_child for (self: AMinusAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AMinusAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7225);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TMinuseq */
cltype = type_nit__TMinuseq.color;
idtype = type_nit__TMinuseq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMinuseq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7226);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:AMinusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#n_op= for (self: AMinusAssignOp, Token) */
void nit__parser_prod___AMinusAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AMinusAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#visit_all for (self: AMinusAssignOp, Visitor) */
void nit__parser_prod___AMinusAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7240);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#init_astarassignop for (self: AStarAssignOp, nullable TStareq) */
void nit__parser_prod___AStarAssignOp___init_astarassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStareq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStarAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7248);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AStarAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7249);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TStareq>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#replace_child for (self: AStarAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AStarAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7254);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TStareq */
cltype = type_nit__TStareq.color;
idtype = type_nit__TStareq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStareq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7255);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:AStarAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#n_op= for (self: AStarAssignOp, Token) */
void nit__parser_prod___AStarAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AStarAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#visit_all for (self: AStarAssignOp, Visitor) */
void nit__parser_prod___AStarAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7269);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#init_aslashassignop for (self: ASlashAssignOp, nullable TSlasheq) */
void nit__parser_prod___ASlashAssignOp___init_aslashassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TSlasheq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASlashAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7277);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ASlashAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7278);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TSlasheq>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#replace_child for (self: ASlashAssignOp, ANode, nullable ANode) */
void nit__parser_prod___ASlashAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ASlashAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7283);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TSlasheq */
cltype = type_nit__TSlasheq.color;
idtype = type_nit__TSlasheq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TSlasheq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7284);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:ASlashAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#n_op= for (self: ASlashAssignOp, Token) */
void nit__parser_prod___ASlashAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ASlashAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#visit_all for (self: ASlashAssignOp, Visitor) */
void nit__parser_prod___ASlashAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ASlashAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7298);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#init_apercentassignop for (self: APercentAssignOp, nullable TPercenteq) */
void nit__parser_prod___APercentAssignOp___init_apercentassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPercenteq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APercentAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7306);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APercentAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7307);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPercenteq>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#replace_child for (self: APercentAssignOp, ANode, nullable ANode) */
void nit__parser_prod___APercentAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APercentAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7312);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TPercenteq */
cltype = type_nit__TPercenteq.color;
idtype = type_nit__TPercenteq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPercenteq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7313);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:APercentAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#n_op= for (self: APercentAssignOp, Token) */
void nit__parser_prod___APercentAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APercentAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#visit_all for (self: APercentAssignOp, Visitor) */
void nit__parser_prod___APercentAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APercentAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7327);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#init_astarstarassignop for (self: AStarstarAssignOp, nullable TStarstareq) */
void nit__parser_prod___AStarstarAssignOp___init_astarstarassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStarstareq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStarstarAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7335);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AStarstarAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7336);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TStarstareq>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#replace_child for (self: AStarstarAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AStarstarAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarstarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7341);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TStarstareq */
cltype = type_nit__TStarstareq.color;
idtype = type_nit__TStarstareq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarstareq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7342);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:AStarstarAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#n_op= for (self: AStarstarAssignOp, Token) */
void nit__parser_prod___AStarstarAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AStarstarAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#visit_all for (self: AStarstarAssignOp, Visitor) */
void nit__parser_prod___AStarstarAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarstarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7356);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#init_apipeassignop for (self: APipeAssignOp, nullable TPipeeq) */
void nit__parser_prod___APipeAssignOp___init_apipeassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPipeeq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APipeAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7364);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APipeAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7365);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPipeeq>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#replace_child for (self: APipeAssignOp, ANode, nullable ANode) */
void nit__parser_prod___APipeAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APipeAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7370);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TPipeeq */
cltype = type_nit__TPipeeq.color;
idtype = type_nit__TPipeeq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPipeeq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7371);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:APipeAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#n_op= for (self: APipeAssignOp, Token) */
void nit__parser_prod___APipeAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APipeAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#visit_all for (self: APipeAssignOp, Visitor) */
void nit__parser_prod___APipeAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APipeAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7385);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#init_acaretassignop for (self: ACaretAssignOp, nullable TCareteq) */
void nit__parser_prod___ACaretAssignOp___init_acaretassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TCareteq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACaretAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7393);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ACaretAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7394);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TCareteq>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#replace_child for (self: ACaretAssignOp, ANode, nullable ANode) */
void nit__parser_prod___ACaretAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ACaretAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7399);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TCareteq */
cltype = type_nit__TCareteq.color;
idtype = type_nit__TCareteq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCareteq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7400);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:ACaretAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#n_op= for (self: ACaretAssignOp, Token) */
void nit__parser_prod___ACaretAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ACaretAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#visit_all for (self: ACaretAssignOp, Visitor) */
void nit__parser_prod___ACaretAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ACaretAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7414);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#init_aampassignop for (self: AAmpAssignOp, nullable TAmpeq) */
void nit__parser_prod___AAmpAssignOp___init_aampassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TAmpeq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAmpAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7422);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AAmpAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7423);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TAmpeq>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#replace_child for (self: AAmpAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AAmpAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AAmpAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7428);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TAmpeq */
cltype = type_nit__TAmpeq.color;
idtype = type_nit__TAmpeq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAmpeq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7429);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:AAmpAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#n_op= for (self: AAmpAssignOp, Token) */
void nit__parser_prod___AAmpAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AAmpAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#visit_all for (self: AAmpAssignOp, Visitor) */
void nit__parser_prod___AAmpAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AAmpAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7443);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#init_allassignop for (self: ALlAssignOp, nullable TLleq) */
void nit__parser_prod___ALlAssignOp___init_allassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLleq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALlAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7451);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ALlAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7452);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TLleq>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#replace_child for (self: ALlAssignOp, ANode, nullable ANode) */
void nit__parser_prod___ALlAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ALlAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7457);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TLleq */
cltype = type_nit__TLleq.color;
idtype = type_nit__TLleq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLleq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7458);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:ALlAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#n_op= for (self: ALlAssignOp, Token) */
void nit__parser_prod___ALlAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ALlAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#visit_all for (self: ALlAssignOp, Visitor) */
void nit__parser_prod___ALlAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ALlAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7472);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#init_aggassignop for (self: AGgAssignOp, nullable TGgeq) */
void nit__parser_prod___AGgAssignOp___init_aggassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGgeq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AGgAssignOp>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7480);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AGgAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7481);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TGgeq>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#replace_child for (self: AGgAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AGgAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AGgAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7486);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TGgeq */
cltype = type_nit__TGgeq.color;
idtype = type_nit__TGgeq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGgeq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7487);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignOp__n_op_61d]))(self, var_new_child); /* n_op= on <self:AGgAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#n_op= for (self: AGgAssignOp, Token) */
void nit__parser_prod___AGgAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AGgAssignOp> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#visit_all for (self: AGgAssignOp, Visitor) */
void nit__parser_prod___AGgAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AGgAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7501);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#init_amodulename for (self: AModuleName, nullable TQuad, Collection[Object], nullable TId) */
void nit__parser_prod___AModuleName___init_amodulename(val* self, val* p0, val* p1, val* p2) {
val* var_n_quad /* var n_quad: nullable TQuad */;
val* var_n_path /* var n_path: Collection[Object] */;
val* var_n_id /* var n_id: nullable TId */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : ANodes[TId] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AModuleName>*/
}
var_n_quad = p0;
var_n_path = p1;
var_n_id = p2;
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val = var_n_quad; /* _n_quad on <self:AModuleName> */
if (var_n_quad == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_quad->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_quad, ((val*)NULL)); /* != on <var_n_quad:nullable TQuad>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_quad->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_quad, self); /* parent= on <var_n_quad:nullable TQuad(TQuad)>*/
}
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModuleName__n_path]))(self); /* n_path on <self:AModuleName>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var2, var_n_path); /* unsafe_add_all on <var2:ANodes[TId]>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7514);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val = var_n_id; /* _n_id on <self:AModuleName> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7515);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#replace_child for (self: AModuleName, ANode, nullable ANode) */
void nit__parser_prod___AModuleName___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TQuad */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : ANodes[TId] */;
short int var5 /* : Bool */;
val* var6 /* : TId */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TQuad>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TQuad */
cltype = type_nullable__nit__TQuad.color;
idtype = type_nullable__nit__TQuad.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TQuad", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7521);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AModuleName__n_quad_61d]))(self, var_new_child); /* n_quad= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModuleName__n_path]))(self); /* n_path on <self:AModuleName>*/
}
{
var5 = ((short int(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var4, var_old_child, var_new_child); /* replace_child on <var4:ANodes[TId]>*/
}
if (var5){
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7525);
fatal_exit(1);
}
{
var7 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var_old_child); /* == on <var6:TId>*/
}
if (var7){
/* <var_new_child:nullable ANode> isa TId */
cltype9 = type_nit__TId.color;
idtype10 = type_nit__TId.id;
if(var_new_child == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_new_child->type->table_size) {
var8 = 0;
} else {
var8 = var_new_child->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
var_class_name11 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7526);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AModuleName__n_id_61d]))(self, var_new_child); /* n_id= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_quad= for (self: AModuleName, nullable TQuad) */
void nit__parser_prod___AModuleName___n_quad_61d(val* self, val* p0) {
val* var_node /* var node: nullable TQuad */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val = var_node; /* _n_quad on <self:AModuleName> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TQuad>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TQuad(TQuad)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_id= for (self: AModuleName, TId) */
void nit__parser_prod___AModuleName___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val = var_node; /* _n_id on <self:AModuleName> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#visit_all for (self: AModuleName, Visitor) */
void nit__parser_prod___AModuleName___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TQuad */;
val* var1 /* : ANodes[TId] */;
val* var2 /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModuleName__n_path]))(self); /* n_path on <self:AModuleName>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var1, var_v); /* visit_all on <var1:ANodes[TId]>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7547);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#init_aexterncalls for (self: AExternCalls, nullable TKwimport, Collection[Object]) */
void nit__parser_prod___AExternCalls___init_aexterncalls(val* self, val* p0, val* p1) {
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_extern_calls /* var n_extern_calls: Collection[Object] */;
val* var /* : ANodes[AExternCall] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AExternCalls>*/
}
var_n_kwimport = p0;
var_n_extern_calls = p1;
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7556);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AExternCalls> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7557);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwimport->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwimport, self); /* parent= on <var_n_kwimport:nullable TKwimport>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExternCalls__n_extern_calls]))(self); /* n_extern_calls on <self:AExternCalls>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_extern_calls); /* unsafe_add_all on <var:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#replace_child for (self: AExternCalls, ANode, nullable ANode) */
void nit__parser_prod___AExternCalls___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwimport */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : ANodes[AExternCall] */;
short int var4 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7563);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwimport>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwimport */
cltype = type_nit__TKwimport.color;
idtype = type_nit__TKwimport.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7564);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AExternCalls__n_kwimport_61d]))(self, var_new_child); /* n_kwimport= on <self:AExternCalls>*/
}
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExternCalls__n_extern_calls]))(self); /* n_extern_calls on <self:AExternCalls>*/
}
{
var4 = ((short int(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var3, var_old_child, var_new_child); /* replace_child on <var3:ANodes[AExternCall]>*/
}
if (var4){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#n_kwimport= for (self: AExternCalls, TKwimport) */
void nit__parser_prod___AExternCalls___n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val = var_node; /* _n_kwimport on <self:AExternCalls> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwimport>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#visit_all for (self: AExternCalls, Visitor) */
void nit__parser_prod___AExternCalls___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwimport */;
val* var1 /* : ANodes[AExternCall] */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7579);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AExternCalls__n_extern_calls]))(self); /* n_extern_calls on <self:AExternCalls>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var1, var_v); /* visit_all on <var1:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCall#init_aexterncall for (self: AExternCall) */
void nit__parser_prod___AExternCall___init_aexterncall(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AExternCall>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCall#replace_child for (self: AExternCall, ANode, nullable ANode) */
void nit__parser_prod___AExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_prod#AExternCall#visit_all for (self: AExternCall, Visitor) */
void nit__parser_prod___AExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#init_asuperexterncall for (self: ASuperExternCall, nullable TKwsuper) */
void nit__parser_prod___ASuperExternCall___init_asuperexterncall(val* self, val* p0) {
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASuperExternCall>*/
}
var_n_kwsuper = p0;
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7603);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExternCall> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7604);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwsuper->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwsuper, self); /* parent= on <var_n_kwsuper:nullable TKwsuper>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#replace_child for (self: ASuperExternCall, ANode, nullable ANode) */
void nit__parser_prod___ASuperExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwsuper */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7609);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwsuper>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwsuper */
cltype = type_nit__TKwsuper.color;
idtype = type_nit__TKwsuper.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwsuper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7610);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASuperExternCall__n_kwsuper_61d]))(self, var_new_child); /* n_kwsuper= on <self:ASuperExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#n_kwsuper= for (self: ASuperExternCall, TKwsuper) */
void nit__parser_prod___ASuperExternCall___n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwsuper>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#visit_all for (self: ASuperExternCall, Visitor) */
void nit__parser_prod___ASuperExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwsuper */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7624);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#init_alocalpropexterncall for (self: ALocalPropExternCall, nullable AMethid) */
void nit__parser_prod___ALocalPropExternCall___init_alocalpropexterncall(val* self, val* p0) {
val* var_n_methid /* var n_methid: nullable AMethid */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALocalPropExternCall>*/
}
var_n_methid = p0;
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7632);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:ALocalPropExternCall> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7633);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_methid->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_methid, self); /* parent= on <var_n_methid:nullable AMethid>*/
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#replace_child for (self: ALocalPropExternCall, ANode, nullable ANode) */
void nit__parser_prod___ALocalPropExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AMethid */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7638);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AMethid>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AMethid */
cltype = type_nit__AMethid.color;
idtype = type_nit__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7639);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ALocalPropExternCall__n_methid_61d]))(self, var_new_child); /* n_methid= on <self:ALocalPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#n_methid= for (self: ALocalPropExternCall, AMethid) */
void nit__parser_prod___ALocalPropExternCall___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val = var_node; /* _n_methid on <self:ALocalPropExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AMethid>*/
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#visit_all for (self: ALocalPropExternCall, Visitor) */
void nit__parser_prod___ALocalPropExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7653);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#init_afullpropexterncall for (self: AFullPropExternCall, nullable AType, nullable TDot, nullable AMethid) */
void nit__parser_prod___AFullPropExternCall___init_afullpropexterncall(val* self, val* p0, val* p1, val* p2) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dot /* var n_dot: nullable TDot */;
val* var_n_methid /* var n_methid: nullable AMethid */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AFullPropExternCall>*/
}
var_n_type = p0;
var_n_dot = p1;
var_n_methid = p2;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7663);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AFullPropExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7664);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:AFullPropExternCall> */
if (var_n_dot == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_dot->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_dot, ((val*)NULL)); /* != on <var_n_dot:nullable TDot>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_dot->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_dot, self); /* parent= on <var_n_dot:nullable TDot(TDot)>*/
}
} else {
}
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7667);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:AFullPropExternCall> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7668);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_methid->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_methid, self); /* parent= on <var_n_methid:nullable AMethid>*/
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#replace_child for (self: AFullPropExternCall, ANode, nullable ANode) */
void nit__parser_prod___AFullPropExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable TDot */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : AMethid */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7673);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AType>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AType */
cltype = type_nit__AType.color;
idtype = type_nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7674);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AFullPropExternCall__n_type_61d]))(self, var_new_child); /* n_type= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable TDot>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable TDot */
cltype7 = type_nullable__nit__TDot.color;
idtype8 = type_nullable__nit__TDot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TDot", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7678);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AFullPropExternCall__n_dot_61d]))(self, var_new_child); /* n_dot= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7681);
fatal_exit(1);
}
{
var11 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_old_child); /* == on <var10:AMethid>*/
}
if (var11){
/* <var_new_child:nullable ANode> isa AMethid */
cltype13 = type_nit__AMethid.color;
idtype14 = type_nit__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7682);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AFullPropExternCall__n_methid_61d]))(self, var_new_child); /* n_methid= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_type= for (self: AFullPropExternCall, AType) */
void nit__parser_prod___AFullPropExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val = var_node; /* _n_type on <self:AFullPropExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_dot= for (self: AFullPropExternCall, nullable TDot) */
void nit__parser_prod___AFullPropExternCall___n_dot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDot */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val = var_node; /* _n_dot on <self:AFullPropExternCall> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TDot>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TDot(TDot)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_methid= for (self: AFullPropExternCall, AMethid) */
void nit__parser_prod___AFullPropExternCall___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val = var_node; /* _n_methid on <self:AFullPropExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AMethid>*/
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#visit_all for (self: AFullPropExternCall, Visitor) */
void nit__parser_prod___AFullPropExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7706);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7708);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#init_ainitpropexterncall for (self: AInitPropExternCall, nullable AType) */
void nit__parser_prod___AInitPropExternCall___init_ainitpropexterncall(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AInitPropExternCall>*/
}
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7716);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AInitPropExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7717);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#replace_child for (self: AInitPropExternCall, ANode, nullable ANode) */
void nit__parser_prod___AInitPropExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7722);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AType>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AType */
cltype = type_nit__AType.color;
idtype = type_nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7723);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AInitPropExternCall__n_type_61d]))(self, var_new_child); /* n_type= on <self:AInitPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#n_type= for (self: AInitPropExternCall, AType) */
void nit__parser_prod___AInitPropExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val = var_node; /* _n_type on <self:AInitPropExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#visit_all for (self: AInitPropExternCall, Visitor) */
void nit__parser_prod___AInitPropExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7737);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#init_acastasexterncall for (self: ACastAsExternCall, nullable AType, nullable TDot, nullable TKwas, nullable AType) */
void nit__parser_prod___ACastAsExternCall___init_acastasexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_from_type /* var n_from_type: nullable AType */;
val* var_n_dot /* var n_dot: nullable TDot */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_to_type /* var n_to_type: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACastAsExternCall>*/
}
var_n_from_type = p0;
var_n_dot = p1;
var_n_kwas = p2;
var_n_to_type = p3;
if (unlikely(var_n_from_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7748);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_from_type].val = var_n_from_type; /* _n_from_type on <self:ACastAsExternCall> */
if (var_n_from_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7749);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_from_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_from_type, self); /* parent= on <var_n_from_type:nullable AType>*/
}
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:ACastAsExternCall> */
if (var_n_dot == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_dot->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_dot, ((val*)NULL)); /* != on <var_n_dot:nullable TDot>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_dot->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_dot, self); /* parent= on <var_n_dot:nullable TDot(TDot)>*/
}
} else {
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7752);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:ACastAsExternCall> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7753);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwas->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwas, self); /* parent= on <var_n_kwas:nullable TKwas>*/
}
if (unlikely(var_n_to_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7754);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_to_type].val = var_n_to_type; /* _n_to_type on <self:ACastAsExternCall> */
if (var_n_to_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7755);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_to_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_to_type, self); /* parent= on <var_n_to_type:nullable AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#replace_child for (self: ACastAsExternCall, ANode, nullable ANode) */
void nit__parser_prod___ACastAsExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable TDot */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : TKwas */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
val* var16 /* : AType */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7760);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AType>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AType */
cltype = type_nit__AType.color;
idtype = type_nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7761);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACastAsExternCall__n_from_type_61d]))(self, var_new_child); /* n_from_type= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable TDot>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable TDot */
cltype7 = type_nullable__nit__TDot.color;
idtype8 = type_nullable__nit__TDot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TDot", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7765);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACastAsExternCall__n_dot_61d]))(self, var_new_child); /* n_dot= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7768);
fatal_exit(1);
}
{
var11 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_old_child); /* == on <var10:TKwas>*/
}
if (var11){
/* <var_new_child:nullable ANode> isa TKwas */
cltype13 = type_nit__TKwas.color;
idtype14 = type_nit__TKwas.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7769);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACastAsExternCall__n_kwas_61d]))(self, var_new_child); /* n_kwas= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7772);
fatal_exit(1);
}
{
var17 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_old_child); /* == on <var16:AType>*/
}
if (var17){
/* <var_new_child:nullable ANode> isa AType */
cltype19 = type_nit__AType.color;
idtype20 = type_nit__AType.id;
if(var_new_child == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name21 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7773);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACastAsExternCall__n_to_type_61d]))(self, var_new_child); /* n_to_type= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_from_type= for (self: ACastAsExternCall, AType) */
void nit__parser_prod___ACastAsExternCall___n_from_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_from_type].val = var_node; /* _n_from_type on <self:ACastAsExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_dot= for (self: ACastAsExternCall, nullable TDot) */
void nit__parser_prod___ACastAsExternCall___n_dot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDot */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_dot].val = var_node; /* _n_dot on <self:ACastAsExternCall> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TDot>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TDot(TDot)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_kwas= for (self: ACastAsExternCall, TKwas) */
void nit__parser_prod___ACastAsExternCall___n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_kwas].val = var_node; /* _n_kwas on <self:ACastAsExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwas>*/
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_to_type= for (self: ACastAsExternCall, AType) */
void nit__parser_prod___ACastAsExternCall___n_to_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_to_type].val = var_node; /* _n_to_type on <self:ACastAsExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#visit_all for (self: ACastAsExternCall, Visitor) */
void nit__parser_prod___ACastAsExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : TKwas */;
val* var3 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7802);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7804);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7805);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#init_aasnullableexterncall for (self: AAsNullableExternCall, nullable AType, nullable TKwas, nullable TKwnullable) */
void nit__parser_prod___AAsNullableExternCall___init_aasnullableexterncall(val* self, val* p0, val* p1, val* p2) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAsNullableExternCall>*/
}
var_n_type = p0;
var_n_kwas = p1;
var_n_kwnullable = p2;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7815);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_type].val = var_n_type; /* _n_type on <self:AAsNullableExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7816);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7817);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNullableExternCall> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7818);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwas->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwas, self); /* parent= on <var_n_kwas:nullable TKwas>*/
}
if (unlikely(var_n_kwnullable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7819);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (var_n_kwnullable == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7820);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwnullable->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnullable, self); /* parent= on <var_n_kwnullable:nullable TKwnullable>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#replace_child for (self: AAsNullableExternCall, ANode, nullable ANode) */
void nit__parser_prod___AAsNullableExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwas */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : TKwnullable */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7825);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AType>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AType */
cltype = type_nit__AType.color;
idtype = type_nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7826);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsNullableExternCall__n_type_61d]))(self, var_new_child); /* n_type= on <self:AAsNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7829);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwas>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwas */
cltype6 = type_nit__TKwas.color;
idtype7 = type_nit__TKwas.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7830);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsNullableExternCall__n_kwas_61d]))(self, var_new_child); /* n_kwas= on <self:AAsNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7833);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TKwnullable>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TKwnullable */
cltype12 = type_nit__TKwnullable.color;
idtype13 = type_nit__TKwnullable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnullable", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7834);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsNullableExternCall__n_kwnullable_61d]))(self, var_new_child); /* n_kwnullable= on <self:AAsNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_type= for (self: AAsNullableExternCall, AType) */
void nit__parser_prod___AAsNullableExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_type].val = var_node; /* _n_type on <self:AAsNullableExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwas= for (self: AAsNullableExternCall, TKwas) */
void nit__parser_prod___AAsNullableExternCall___n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwas].val = var_node; /* _n_kwas on <self:AAsNullableExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwas>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwnullable= for (self: AAsNullableExternCall, TKwnullable) */
void nit__parser_prod___AAsNullableExternCall___n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: TKwnullable */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AAsNullableExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwnullable>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#visit_all for (self: AAsNullableExternCall, Visitor) */
void nit__parser_prod___AAsNullableExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : TKwas */;
val* var2 /* : TKwnullable */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7858);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7859);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7860);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall for (self: AAsNotNullableExternCall, nullable AType, nullable TKwas, nullable TKwnot, nullable TKwnullable) */
void nit__parser_prod___AAsNotNullableExternCall___init_aasnotnullableexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAsNotNullableExternCall>*/
}
var_n_type = p0;
var_n_kwas = p1;
var_n_kwnot = p2;
var_n_kwnullable = p3;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7871);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_type].val = var_n_type; /* _n_type on <self:AAsNotNullableExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7872);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7873);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7874);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwas->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwas, self); /* parent= on <var_n_kwas:nullable TKwas>*/
}
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7875);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7876);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwnot->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnot, self); /* parent= on <var_n_kwnot:nullable TKwnot>*/
}
if (unlikely(var_n_kwnullable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7877);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (var_n_kwnullable == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7878);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwnullable->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnullable, self); /* parent= on <var_n_kwnullable:nullable TKwnullable>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#replace_child for (self: AAsNotNullableExternCall, ANode, nullable ANode) */
void nit__parser_prod___AAsNotNullableExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwas */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : TKwnot */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : TKwnullable */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7883);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AType>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AType */
cltype = type_nit__AType.color;
idtype = type_nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7884);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsNotNullableExternCall__n_type_61d]))(self, var_new_child); /* n_type= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7887);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwas>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwas */
cltype6 = type_nit__TKwas.color;
idtype7 = type_nit__TKwas.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7888);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsNotNullableExternCall__n_kwas_61d]))(self, var_new_child); /* n_kwas= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7891);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TKwnot>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TKwnot */
cltype12 = type_nit__TKwnot.color;
idtype13 = type_nit__TKwnot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnot", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7892);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsNotNullableExternCall__n_kwnot_61d]))(self, var_new_child); /* n_kwnot= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7895);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:TKwnullable>*/
}
if (var16){
/* <var_new_child:nullable ANode> isa TKwnullable */
cltype18 = type_nit__TKwnullable.color;
idtype19 = type_nit__TKwnullable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnullable", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7896);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAsNotNullableExternCall__n_kwnullable_61d]))(self, var_new_child); /* n_kwnullable= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_type= for (self: AAsNotNullableExternCall, AType) */
void nit__parser_prod___AAsNotNullableExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_type].val = var_node; /* _n_type on <self:AAsNotNullableExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwas= for (self: AAsNotNullableExternCall, TKwas) */
void nit__parser_prod___AAsNotNullableExternCall___n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotNullableExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwas>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnot= for (self: AAsNotNullableExternCall, TKwnot) */
void nit__parser_prod___AAsNotNullableExternCall___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotNullableExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwnot>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnullable= for (self: AAsNotNullableExternCall, TKwnullable) */
void nit__parser_prod___AAsNotNullableExternCall___n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: TKwnullable */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwnullable>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#visit_all for (self: AAsNotNullableExternCall, Visitor) */
void nit__parser_prod___AAsNotNullableExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : TKwas */;
val* var2 /* : TKwnot */;
val* var3 /* : TKwnullable */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7925);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7926);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7927);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7928);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#init_ainlanguage for (self: AInLanguage, nullable TKwin, nullable TString) */
void nit__parser_prod___AInLanguage___init_ainlanguage(val* self, val* p0, val* p1) {
val* var_n_kwin /* var n_kwin: nullable TKwin */;
val* var_n_string /* var n_string: nullable TString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AInLanguage>*/
}
var_n_kwin = p0;
var_n_string = p1;
if (unlikely(var_n_kwin == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7937);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_kwin].val = var_n_kwin; /* _n_kwin on <self:AInLanguage> */
if (var_n_kwin == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7938);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwin->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwin, self); /* parent= on <var_n_kwin:nullable TKwin>*/
}
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7939);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_string].val = var_n_string; /* _n_string on <self:AInLanguage> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7940);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_string->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_string, self); /* parent= on <var_n_string:nullable TString>*/
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#replace_child for (self: AInLanguage, ANode, nullable ANode) */
void nit__parser_prod___AInLanguage___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwin */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TString */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7945);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwin>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwin */
cltype = type_nit__TKwin.color;
idtype = type_nit__TKwin.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwin", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7946);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AInLanguage__n_kwin_61d]))(self, var_new_child); /* n_kwin= on <self:AInLanguage>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7949);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TString>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TString */
cltype6 = type_nit__TString.color;
idtype7 = type_nit__TString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TString", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7950);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AInLanguage__n_string_61d]))(self, var_new_child); /* n_string= on <self:AInLanguage>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_kwin= for (self: AInLanguage, TKwin) */
void nit__parser_prod___AInLanguage___n_kwin_61d(val* self, val* p0) {
val* var_node /* var node: TKwin */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_kwin].val = var_node; /* _n_kwin on <self:AInLanguage> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwin>*/
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_string= for (self: AInLanguage, TString) */
void nit__parser_prod___AInLanguage___n_string_61d(val* self, val* p0) {
val* var_node /* var node: TString */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_string].val = var_node; /* _n_string on <self:AInLanguage> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TString>*/
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#visit_all for (self: AInLanguage, Visitor) */
void nit__parser_prod___AInLanguage___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwin */;
val* var1 /* : TString */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7969);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7970);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#init_aexterncodeblock for (self: AExternCodeBlock, nullable AInLanguage, nullable TExternCodeSegment) */
void nit__parser_prod___AExternCodeBlock___init_aexterncodeblock(val* self, val* p0, val* p1) {
val* var_n_in_language /* var n_in_language: nullable AInLanguage */;
val* var_n_extern_code_segment /* var n_extern_code_segment: nullable TExternCodeSegment */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AExternCodeBlock>*/
}
var_n_in_language = p0;
var_n_extern_code_segment = p1;
self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val = var_n_in_language; /* _n_in_language on <self:AExternCodeBlock> */
if (var_n_in_language == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_in_language->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_in_language, ((val*)NULL)); /* != on <var_n_in_language:nullable AInLanguage>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_in_language->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_in_language, self); /* parent= on <var_n_in_language:nullable AInLanguage(AInLanguage)>*/
}
} else {
}
if (unlikely(var_n_extern_code_segment == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7981);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_extern_code_segment].val = var_n_extern_code_segment; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (var_n_extern_code_segment == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7982);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_extern_code_segment->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_extern_code_segment, self); /* parent= on <var_n_extern_code_segment:nullable TExternCodeSegment>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#replace_child for (self: AExternCodeBlock, ANode, nullable ANode) */
void nit__parser_prod___AExternCodeBlock___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AInLanguage */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : TExternCodeSegment */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable AInLanguage>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable AInLanguage */
cltype = type_nullable__nit__AInLanguage.color;
idtype = type_nullable__nit__AInLanguage.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AInLanguage", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7988);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AExternCodeBlock__n_in_language_61d]))(self, var_new_child); /* n_in_language= on <self:AExternCodeBlock>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7991);
fatal_exit(1);
}
{
var5 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_old_child); /* == on <var4:TExternCodeSegment>*/
}
if (var5){
/* <var_new_child:nullable ANode> isa TExternCodeSegment */
cltype7 = type_nit__TExternCodeSegment.color;
idtype8 = type_nit__TExternCodeSegment.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TExternCodeSegment", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7992);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AExternCodeBlock__n_extern_code_segment_61d]))(self, var_new_child); /* n_extern_code_segment= on <self:AExternCodeBlock>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_in_language= for (self: AExternCodeBlock, nullable AInLanguage) */
void nit__parser_prod___AExternCodeBlock___n_in_language_61d(val* self, val* p0) {
val* var_node /* var node: nullable AInLanguage */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val = var_node; /* _n_in_language on <self:AExternCodeBlock> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AInLanguage>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AInLanguage(AInLanguage)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_extern_code_segment= for (self: AExternCodeBlock, TExternCodeSegment) */
void nit__parser_prod___AExternCodeBlock___n_extern_code_segment_61d(val* self, val* p0) {
val* var_node /* var node: TExternCodeSegment */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_extern_code_segment].val = var_node; /* _n_extern_code_segment on <self:AExternCodeBlock> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TExternCodeSegment>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#visit_all for (self: AExternCodeBlock, Visitor) */
void nit__parser_prod___AExternCodeBlock___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AInLanguage */;
val* var1 /* : TExternCodeSegment */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8012);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AQualified#init_aqualified for (self: AQualified, Collection[Object], nullable TClassid) */
void nit__parser_prod___AQualified___init_aqualified(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: Collection[Object] */;
val* var_n_classid /* var n_classid: nullable TClassid */;
val* var /* : ANodes[TId] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AQualified>*/
}
var_n_id = p0;
var_n_classid = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AQualified__n_id]))(self); /* n_id on <self:AQualified>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_id); /* unsafe_add_all on <var:ANodes[TId]>*/
}
self->attrs[COLOR_nit__parser_nodes__AQualified___n_classid].val = var_n_classid; /* _n_classid on <self:AQualified> */
if (var_n_classid == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_n_classid->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_classid, ((val*)NULL)); /* != on <var_n_classid:nullable TClassid>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_n_classid->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_classid, self); /* parent= on <var_n_classid:nullable TClassid(TClassid)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#replace_child for (self: AQualified, ANode, nullable ANode) */
void nit__parser_prod___AQualified___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[TId] */;
short int var1 /* : Bool */;
val* var2 /* : nullable TClassid */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AQualified__n_id]))(self); /* n_id on <self:AQualified>*/
}
{
var1 = ((short int(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var, var_old_child, var_new_child); /* replace_child on <var:ANodes[TId]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_nit__parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
if (var2 == NULL) {
var3 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_old_child); /* == on <var2:nullable TClassid>*/
var3 = var4;
}
if (var3){
/* <var_new_child:nullable ANode> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TClassid", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8030);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AQualified__n_classid_61d]))(self, var_new_child); /* n_classid= on <self:AQualified>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#n_classid= for (self: AQualified, nullable TClassid) */
void nit__parser_prod___AQualified___n_classid_61d(val* self, val* p0) {
val* var_node /* var node: nullable TClassid */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AQualified___n_classid].val = var_node; /* _n_classid on <self:AQualified> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TClassid>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TClassid(TClassid)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#visit_all for (self: AQualified, Visitor) */
void nit__parser_prod___AQualified___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TId] */;
val* var1 /* : nullable TClassid */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AQualified__n_id]))(self); /* n_id on <self:AQualified>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var, var_v); /* visit_all on <var:ANodes[TId]>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADoc#init_adoc for (self: ADoc, Collection[Object]) */
void nit__parser_prod___ADoc___init_adoc(val* self, val* p0) {
val* var_n_comment /* var n_comment: Collection[Object] */;
val* var /* : ANodes[TComment] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ADoc>*/
}
var_n_comment = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoc__n_comment]))(self); /* n_comment on <self:ADoc>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_comment); /* unsafe_add_all on <var:ANodes[TComment]>*/
}
RET_LABEL:;
}
/* method parser_prod#ADoc#replace_child for (self: ADoc, ANode, nullable ANode) */
void nit__parser_prod___ADoc___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[TComment] */;
short int var1 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoc__n_comment]))(self); /* n_comment on <self:ADoc>*/
}
{
var1 = ((short int(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var, var_old_child, var_new_child); /* replace_child on <var:ANodes[TComment]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoc#visit_all for (self: ADoc, Visitor) */
void nit__parser_prod___ADoc___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TComment] */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoc__n_comment]))(self); /* n_comment on <self:ADoc>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var, var_v); /* visit_all on <var:ANodes[TComment]>*/
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#init_aannotations for (self: AAnnotations, nullable TAt, nullable TOpar, Collection[Object], nullable TCpar) */
void nit__parser_prod___AAnnotations___init_aannotations(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_at /* var n_at: nullable TAt */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_items /* var n_items: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : ANodes[AAnnotation] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAnnotations>*/
}
var_n_at = p0;
var_n_opar = p1;
var_n_items = p2;
var_n_cpar = p3;
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_at].val = var_n_at; /* _n_at on <self:AAnnotations> */
if (var_n_at == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_at->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_at, ((val*)NULL)); /* != on <var_n_at:nullable TAt>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_at->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_at, self); /* parent= on <var_n_at:nullable TAt(TAt)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotations> */
if (var_n_opar == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_opar, ((val*)NULL)); /* != on <var_n_opar:nullable TOpar>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_opar, self); /* parent= on <var_n_opar:nullable TOpar(TOpar)>*/
}
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotations__n_items]))(self); /* n_items on <self:AAnnotations>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var4, var_n_items); /* unsafe_add_all on <var4:ANodes[AAnnotation]>*/
}
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotations> */
if (var_n_cpar == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_cpar, ((val*)NULL)); /* != on <var_n_cpar:nullable TCpar>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cpar, self); /* parent= on <var_n_cpar:nullable TCpar(TCpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#replace_child for (self: AAnnotations, ANode, nullable ANode) */
void nit__parser_prod___AAnnotations___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TAt */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : nullable TOpar */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
val* var11 /* : ANodes[AAnnotation] */;
short int var12 /* : Bool */;
val* var13 /* : nullable TCpar */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TAt>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TAt */
cltype = type_nullable__nit__TAt.color;
idtype = type_nullable__nit__TAt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TAt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8088);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAnnotations__n_at_61d]))(self, var_new_child); /* n_at= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_old_child); /* == on <var4:nullable TOpar>*/
var5 = var6;
}
if (var5){
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype8 = type_nullable__nit__TOpar.color;
idtype9 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8092);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAnnotations__n_opar_61d]))(self, var_new_child); /* n_opar= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotations__n_items]))(self); /* n_items on <self:AAnnotations>*/
}
{
var12 = ((short int(*)(val* self, val* p0, val* p1))(var11->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var11, var_old_child, var_new_child); /* replace_child on <var11:ANodes[AAnnotation]>*/
}
if (var12){
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
if (var13 == NULL) {
var14 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var13, var_old_child); /* == on <var13:nullable TCpar>*/
var14 = var15;
}
if (var14){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype17 = type_nullable__nit__TCpar.color;
idtype18 = type_nullable__nit__TCpar.id;
if(var_new_child == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
var_class_name19 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8097);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAnnotations__n_cpar_61d]))(self, var_new_child); /* n_cpar= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_at= for (self: AAnnotations, nullable TAt) */
void nit__parser_prod___AAnnotations___n_at_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAt */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_at].val = var_node; /* _n_at on <self:AAnnotations> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TAt>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TAt(TAt)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_opar= for (self: AAnnotations, nullable TOpar) */
void nit__parser_prod___AAnnotations___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_opar].val = var_node; /* _n_opar on <self:AAnnotations> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TOpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TOpar(TOpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_cpar= for (self: AAnnotations, nullable TCpar) */
void nit__parser_prod___AAnnotations___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotations> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TCpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TCpar(TCpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#visit_all for (self: AAnnotations, Visitor) */
void nit__parser_prod___AAnnotations___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TAt */;
val* var1 /* : nullable TOpar */;
val* var2 /* : ANodes[AAnnotation] */;
val* var3 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotations__n_items]))(self); /* n_items on <self:AAnnotations>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var2, var_v); /* visit_all on <var2:ANodes[AAnnotation]>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#init_aannotation for (self: AAnnotation, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AAtid, nullable TOpar, Collection[Object], nullable TCpar, nullable AAnnotations) */
void nit__parser_prod___AAnnotation___init_aannotation(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_atid /* var n_atid: nullable AAtid */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_args /* var n_args: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ANodes[AExpr] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAnnotation>*/
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_atid = p3;
var_n_opar = p4;
var_n_args = p5;
var_n_cpar = p6;
var_n_annotations = p7;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AAnnotation> */
if (var_n_doc == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_doc, ((val*)NULL)); /* != on <var_n_doc:nullable ADoc>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_doc, self); /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAnnotation> */
if (var_n_kwredef == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwredef, ((val*)NULL)); /* != on <var_n_kwredef:nullable TKwredef>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwredef, self); /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAnnotation> */
if (var_n_visibility == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_visibility, ((val*)NULL)); /* != on <var_n_visibility:nullable AVisibility>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_visibility, self); /* parent= on <var_n_visibility:nullable AVisibility(AVisibility)>*/
}
} else {
}
if (unlikely(var_n_atid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8145);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val = var_n_atid; /* _n_atid on <self:AAnnotation> */
if (var_n_atid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8146);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_atid->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_atid, self); /* parent= on <var_n_atid:nullable AAtid>*/
}
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotation> */
if (var_n_opar == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_opar, ((val*)NULL)); /* != on <var_n_opar:nullable TOpar>*/
var6 = var7;
}
if (var6){
{
((void(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_opar, self); /* parent= on <var_n_opar:nullable TOpar(TOpar)>*/
}
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(self); /* n_args on <self:AAnnotation>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var8, var_n_args); /* unsafe_add_all on <var8:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotation> */
if (var_n_cpar == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_cpar, ((val*)NULL)); /* != on <var_n_cpar:nullable TCpar>*/
var9 = var10;
}
if (var9){
{
((void(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cpar, self); /* parent= on <var_n_cpar:nullable TCpar(TCpar)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAnnotation> */
if (var_n_annotations == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var11 = var12;
}
if (var11){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#replace_child for (self: AAnnotation, ANode, nullable ANode) */
void nit__parser_prod___AAnnotation___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : nullable TKwredef */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
val* var11 /* : nullable AVisibility */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : AAtid */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : nullable TOpar */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
val* var31 /* : ANodes[AExpr] */;
short int var32 /* : Bool */;
val* var33 /* : nullable TCpar */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : nullable AAnnotations */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAnnotation> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable ADoc>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ADoc", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8159);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc_61d]))(self, var_new_child); /* n_doc= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAnnotation> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_old_child); /* == on <var4:nullable TKwredef>*/
var5 = var6;
}
if (var5){
/* <var_new_child:nullable ANode> isa nullable TKwredef */
cltype8 = type_nullable__nit__TKwredef.color;
idtype9 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwredef", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8163);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAnnotation> */
if (var11 == NULL) {
var12 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_old_child); /* == on <var11:nullable AVisibility>*/
var12 = var13;
}
if (var12){
/* <var_new_child:nullable ANode> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AVisibility", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8167);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8170);
fatal_exit(1);
}
{
var19 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_old_child); /* == on <var18:AAtid>*/
}
if (var19){
/* <var_new_child:nullable ANode> isa AAtid */
cltype21 = type_nit__AAtid.color;
idtype22 = type_nit__AAtid.id;
if(var_new_child == NULL) {
var20 = 0;
} else {
if(cltype21 >= var_new_child->type->table_size) {
var20 = 0;
} else {
var20 = var_new_child->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
var_class_name23 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAtid", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8171);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_atid_61d]))(self, var_new_child); /* n_atid= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
if (var24 == NULL) {
var25 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var26 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var24, var_old_child); /* == on <var24:nullable TOpar>*/
var25 = var26;
}
if (var25){
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype28 = type_nullable__nit__TOpar.color;
idtype29 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8175);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_opar_61d]))(self, var_new_child); /* n_opar= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(self); /* n_args on <self:AAnnotation>*/
}
{
var32 = ((short int(*)(val* self, val* p0, val* p1))(var31->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var31, var_old_child, var_new_child); /* replace_child on <var31:ANodes[AExpr]>*/
}
if (var32){
goto RET_LABEL;
} else {
}
var33 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
if (var33 == NULL) {
var34 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var35 = ((short int(*)(val* self, val* p0))(var33->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var33, var_old_child); /* == on <var33:nullable TCpar>*/
var34 = var35;
}
if (var34){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype37 = type_nullable__nit__TCpar.color;
idtype38 = type_nullable__nit__TCpar.id;
if(var_new_child == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_new_child->type->table_size) {
var36 = 0;
} else {
var36 = var_new_child->type->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
var_class_name39 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8180);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_cpar_61d]))(self, var_new_child); /* n_cpar= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotation> */
if (var40 == NULL) {
var41 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var42 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var40, var_old_child); /* == on <var40:nullable AAnnotations>*/
var41 = var42;
}
if (var41){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype44 = type_nullable__nit__AAnnotations.color;
idtype45 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var43 = 1;
} else {
if(cltype44 >= var_new_child->type->table_size) {
var43 = 0;
} else {
var43 = var_new_child->type->type_table[cltype44] == idtype45;
}
}
if (unlikely(!var43)) {
var_class_name46 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8184);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_doc= for (self: AAnnotation, nullable ADoc) */
void nit__parser_prod___AAnnotation___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ADoc>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable ADoc(ADoc)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_kwredef= for (self: AAnnotation, nullable TKwredef) */
void nit__parser_prod___AAnnotation___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwredef>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwredef(TKwredef)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_visibility= for (self: AAnnotation, nullable AVisibility) */
void nit__parser_prod___AAnnotation___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AVisibility>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AVisibility(AVisibility)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_atid= for (self: AAnnotation, AAtid) */
void nit__parser_prod___AAnnotation___n_atid_61d(val* self, val* p0) {
val* var_node /* var node: AAtid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val = var_node; /* _n_atid on <self:AAnnotation> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AAtid>*/
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_opar= for (self: AAnnotation, nullable TOpar) */
void nit__parser_prod___AAnnotation___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val = var_node; /* _n_opar on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TOpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TOpar(TOpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_cpar= for (self: AAnnotation, nullable TCpar) */
void nit__parser_prod___AAnnotation___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TCpar>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TCpar(TCpar)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_annotations= for (self: AAnnotation, nullable AAnnotations) */
void nit__parser_prod___AAnnotation___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAnnotation> */
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
/* method parser_prod#AAnnotation#visit_all for (self: AAnnotation, Visitor) */
void nit__parser_prod___AAnnotation___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : AAtid */;
val* var4 /* : nullable TOpar */;
val* var5 /* : ANodes[AExpr] */;
val* var6 /* : nullable TCpar */;
val* var7 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAnnotation> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAnnotation> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAnnotation> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8231);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(self); /* n_args on <self:AAnnotation>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var5, var_v); /* visit_all on <var5:ANodes[AExpr]>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var6); /* enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotation> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var7); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdAtid#init_aidatid for (self: AIdAtid, nullable TId) */
void nit__parser_prod___AIdAtid___init_aidatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AIdAtid>*/
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8243);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AIdAtid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8244);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdAtid#replace_child for (self: AIdAtid, ANode, nullable ANode) */
void nit__parser_prod___AIdAtid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AIdAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8249);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8250);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAtid__n_id_61d]))(self, var_new_child); /* n_id= on <self:AIdAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIdAtid#n_id= for (self: AIdAtid, Token) */
void nit__parser_prod___AIdAtid___nit__parser_nodes__AAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AIdAtid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdAtid#visit_all for (self: AIdAtid, Visitor) */
void nit__parser_prod___AIdAtid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AIdAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8264);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#init_akwexternatid for (self: AKwexternAtid, nullable TKwextern) */
void nit__parser_prod___AKwexternAtid___init_akwexternatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwextern */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AKwexternAtid>*/
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8272);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwexternAtid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8273);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TKwextern>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#replace_child for (self: AKwexternAtid, ANode, nullable ANode) */
void nit__parser_prod___AKwexternAtid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwexternAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8278);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwextern */
cltype = type_nit__TKwextern.color;
idtype = type_nit__TKwextern.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwextern", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8279);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAtid__n_id_61d]))(self, var_new_child); /* n_id= on <self:AKwexternAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#n_id= for (self: AKwexternAtid, Token) */
void nit__parser_prod___AKwexternAtid___nit__parser_nodes__AAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwexternAtid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#visit_all for (self: AKwexternAtid, Visitor) */
void nit__parser_prod___AKwexternAtid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwexternAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8293);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwabstractAtid#init_akwabstractatid for (self: AKwabstractAtid, nullable TKwabstract) */
void nit__parser_prod___AKwabstractAtid___init_akwabstractatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwabstract */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AKwabstractAtid>*/
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8301);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwabstractAtid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8302);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TKwabstract>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwabstractAtid#replace_child for (self: AKwabstractAtid, ANode, nullable ANode) */
void nit__parser_prod___AKwabstractAtid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwabstractAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8307);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwabstract */
cltype = type_nit__TKwabstract.color;
idtype = type_nit__TKwabstract.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwabstract", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8308);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAtid__n_id_61d]))(self, var_new_child); /* n_id= on <self:AKwabstractAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwabstractAtid#n_id= for (self: AKwabstractAtid, Token) */
void nit__parser_prod___AKwabstractAtid___nit__parser_nodes__AAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwabstractAtid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwabstractAtid#visit_all for (self: AKwabstractAtid, Visitor) */
void nit__parser_prod___AKwabstractAtid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwabstractAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8322);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#init_akwimportatid for (self: AKwimportAtid, nullable TKwimport) */
void nit__parser_prod___AKwimportAtid___init_akwimportatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwimport */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AKwimportAtid>*/
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8330);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwimportAtid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8331);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TKwimport>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#replace_child for (self: AKwimportAtid, ANode, nullable ANode) */
void nit__parser_prod___AKwimportAtid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwimportAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8336);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwimport */
cltype = type_nit__TKwimport.color;
idtype = type_nit__TKwimport.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8337);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAtid__n_id_61d]))(self, var_new_child); /* n_id= on <self:AKwimportAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#n_id= for (self: AKwimportAtid, Token) */
void nit__parser_prod___AKwimportAtid___nit__parser_nodes__AAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwimportAtid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#visit_all for (self: AKwimportAtid, Visitor) */
void nit__parser_prod___AKwimportAtid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwimportAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8351);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#Start#replace_child for (self: Start, ANode, nullable ANode) */
void nit__parser_prod___Start___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable AModule>*/
var1 = var2;
}
if (var1){
if (var_new_child == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_new_child->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_new_child, ((val*)NULL)); /* == on <var_new_child:nullable ANode>*/
var3 = var4;
}
if (var3){
} else {
{
((void(*)(val* self, val* p0))(var_new_child->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_new_child, self); /* parent= on <var_new_child:nullable ANode(ANode)>*/
}
/* <var_new_child:nullable ANode(ANode)> isa AModule */
cltype = type_nit__AModule.color;
idtype = type_nit__AModule.id;
if(cltype >= var_new_child->type->table_size) {
var5 = 0;
} else {
var5 = var_new_child->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8362);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__Start___n_base].val = var_new_child; /* _n_base on <self:Start> */
}
{
((void(*)(val* self, val* p0))(var_old_child->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_old_child, ((val*)NULL)); /* parent= on <var_old_child:ANode>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#Start#visit_all for (self: Start, Visitor) */
void nit__parser_prod___Start___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable AModule */;
val* var4 /* : EOF */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable AModule>*/
var1 = var2;
}
if (var1){
var3 = self->attrs[COLOR_nit__parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8373);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__Start___n_eof].val; /* _n_eof on <self:Start> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8375);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
