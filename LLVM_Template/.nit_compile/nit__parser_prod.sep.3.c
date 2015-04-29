#include "nit__parser_prod.sep.0.h"
/* method parser_prod#AStarExpr#n_expr= for (self: AStarExpr, AExpr) */
void nit__parser_prod___AStarExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_op= for (self: AStarExpr, Token) */
void nit__parser_prod___AStarExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AStarExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr2= for (self: AStarExpr, AExpr) */
void nit__parser_prod___AStarExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#visit_all for (self: AStarExpr, Visitor) */
void nit__parser_prod___AStarExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4337);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4338);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4339);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#init_astarstarexpr for (self: AStarstarExpr, nullable AExpr, nullable TStarstar, nullable AExpr) */
void nit__parser_prod___AStarstarExpr___init_astarstarexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TStarstar */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStarstarExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4349);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarstarExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4350);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4351);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AStarstarExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4352);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TStarstar>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4353);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarstarExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4354);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#replace_child for (self: AStarstarExpr, ANode, nullable ANode) */
void nit__parser_prod___AStarstarExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarstarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4359);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4360);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AStarstarExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarstarExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4363);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TStarstar */
cltype6 = type_nit__TStarstar.color;
idtype7 = type_nit__TStarstar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarstar", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4364);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AStarstarExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarstarExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4367);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4368);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AStarstarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#n_expr= for (self: AStarstarExpr, AExpr) */
void nit__parser_prod___AStarstarExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarstarExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#n_op= for (self: AStarstarExpr, Token) */
void nit__parser_prod___AStarstarExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AStarstarExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#n_expr2= for (self: AStarstarExpr, AExpr) */
void nit__parser_prod___AStarstarExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarstarExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#visit_all for (self: AStarstarExpr, Visitor) */
void nit__parser_prod___AStarstarExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarstarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4392);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarstarExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4393);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarstarExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4394);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#init_aslashexpr for (self: ASlashExpr, nullable AExpr, nullable TSlash, nullable AExpr) */
void nit__parser_prod___ASlashExpr___init_aslashexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TSlash */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASlashExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4404);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ASlashExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4405);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4406);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ASlashExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4407);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TSlash>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4408);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ASlashExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4409);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#replace_child for (self: ASlashExpr, ANode, nullable ANode) */
void nit__parser_prod___ASlashExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4414);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4415);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ASlashExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ASlashExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4418);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TSlash */
cltype6 = type_nit__TSlash.color;
idtype7 = type_nit__TSlash.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TSlash", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4419);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:ASlashExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4422);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4423);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:ASlashExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr= for (self: ASlashExpr, AExpr) */
void nit__parser_prod___ASlashExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ASlashExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_op= for (self: ASlashExpr, Token) */
void nit__parser_prod___ASlashExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ASlashExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr2= for (self: ASlashExpr, AExpr) */
void nit__parser_prod___ASlashExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ASlashExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#visit_all for (self: ASlashExpr, Visitor) */
void nit__parser_prod___ASlashExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4447);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ASlashExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4448);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4449);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#init_apercentexpr for (self: APercentExpr, nullable AExpr, nullable TPercent, nullable AExpr) */
void nit__parser_prod___APercentExpr___init_apercentexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TPercent */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APercentExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4459);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APercentExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4460);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4461);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:APercentExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4462);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPercent>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4463);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APercentExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4464);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#replace_child for (self: APercentExpr, ANode, nullable ANode) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4469);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4470);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:APercentExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APercentExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4473);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TPercent */
cltype6 = type_nit__TPercent.color;
idtype7 = type_nit__TPercent.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPercent", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4474);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:APercentExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4477);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4478);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:APercentExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr= for (self: APercentExpr, AExpr) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APercentExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_op= for (self: APercentExpr, Token) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:APercentExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr2= for (self: APercentExpr, AExpr) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APercentExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#visit_all for (self: APercentExpr, Visitor) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4502);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APercentExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4503);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4504);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#init_apipeexpr for (self: APipeExpr, nullable AExpr, nullable TPipe, nullable AExpr) */
void nit__parser_prod___APipeExpr___init_apipeexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TPipe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APipeExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4514);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APipeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4515);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4516);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:APipeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4517);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPipe>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4518);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APipeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4519);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#replace_child for (self: APipeExpr, ANode, nullable ANode) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APipeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4524);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4525);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:APipeExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APipeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4528);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TPipe */
cltype6 = type_nit__TPipe.color;
idtype7 = type_nit__TPipe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPipe", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4529);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:APipeExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APipeExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4532);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4533);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:APipeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#n_expr= for (self: APipeExpr, AExpr) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APipeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#n_op= for (self: APipeExpr, Token) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:APipeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#n_expr2= for (self: APipeExpr, AExpr) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APipeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#visit_all for (self: APipeExpr, Visitor) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APipeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4557);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APipeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4558);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APipeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4559);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#init_acaretexpr for (self: ACaretExpr, nullable AExpr, nullable TCaret, nullable AExpr) */
void nit__parser_prod___ACaretExpr___init_acaretexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TCaret */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACaretExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4569);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACaretExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4570);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4571);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ACaretExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4572);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TCaret>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4573);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ACaretExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4574);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#replace_child for (self: ACaretExpr, ANode, nullable ANode) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACaretExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4579);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4580);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ACaretExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ACaretExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4583);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TCaret */
cltype6 = type_nit__TCaret.color;
idtype7 = type_nit__TCaret.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCaret", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4584);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:ACaretExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ACaretExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4587);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4588);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:ACaretExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#n_expr= for (self: ACaretExpr, AExpr) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACaretExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#n_op= for (self: ACaretExpr, Token) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ACaretExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#n_expr2= for (self: ACaretExpr, AExpr) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ACaretExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#visit_all for (self: ACaretExpr, Visitor) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACaretExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4612);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ACaretExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4613);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ACaretExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4614);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#init_aampexpr for (self: AAmpExpr, nullable AExpr, nullable TAmp, nullable AExpr) */
void nit__parser_prod___AAmpExpr___init_aampexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TAmp */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAmpExpr>*/
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4624);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAmpExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4625);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4626);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AAmpExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4627);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TAmp>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4628);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AAmpExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4629);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#replace_child for (self: AAmpExpr, ANode, nullable ANode) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AAmpExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4634);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4635);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AAmpExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AAmpExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4638);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:Token>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TAmp */
cltype6 = type_nit__TAmp.color;
idtype7 = type_nit__TAmp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAmp", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4639);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AAmpExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AAmpExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4642);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4643);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABinopExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AAmpExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#n_expr= for (self: AAmpExpr, AExpr) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AAmpExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#n_op= for (self: AAmpExpr, Token) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AAmpExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#n_expr2= for (self: AAmpExpr, AExpr) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AAmpExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#visit_all for (self: AAmpExpr, Visitor) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AAmpExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4667);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AAmpExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4668);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AAmpExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4669);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#init_auminusexpr for (self: AUminusExpr, nullable TMinus, nullable AExpr) */
void nit__parser_prod___AUminusExpr___init_auminusexpr(val* self, val* p0, val* p1) {
val* var_n_op /* var n_op: nullable TMinus */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AUminusExpr>*/
}
var_n_op = p0;
var_n_expr = p1;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4678);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_n_op; /* _n_op on <self:AUminusExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4679);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TMinus>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4680);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AUminusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4681);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#replace_child for (self: AUminusExpr, ANode, nullable ANode) */
void nit__parser_prod___AUminusExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
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
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUminusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4686);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TMinus */
cltype = type_nit__TMinus.color;
idtype = type_nit__TMinus.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMinus", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4687);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AUnaryopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AUminusExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4690);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4691);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AUminusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_op= for (self: AUminusExpr, Token) */
void nit__parser_prod___AUminusExpr___nit__parser_nodes__AUnaryopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_node; /* _n_op on <self:AUminusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_expr= for (self: AUminusExpr, AExpr) */
void nit__parser_prod___AUminusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AUminusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#visit_all for (self: AUminusExpr, Visitor) */
void nit__parser_prod___AUminusExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUminusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4710);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4711);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#init_auplusexpr for (self: AUplusExpr, nullable TPlus, nullable AExpr) */
void nit__parser_prod___AUplusExpr___init_auplusexpr(val* self, val* p0, val* p1) {
val* var_n_op /* var n_op: nullable TPlus */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AUplusExpr>*/
}
var_n_op = p0;
var_n_expr = p1;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4720);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_n_op; /* _n_op on <self:AUplusExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4721);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPlus>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4722);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AUplusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4723);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#replace_child for (self: AUplusExpr, ANode, nullable ANode) */
void nit__parser_prod___AUplusExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
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
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUplusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4728);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TPlus */
cltype = type_nit__TPlus.color;
idtype = type_nit__TPlus.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPlus", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4729);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AUnaryopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AUplusExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUplusExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4732);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4733);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AUplusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#n_op= for (self: AUplusExpr, Token) */
void nit__parser_prod___AUplusExpr___nit__parser_nodes__AUnaryopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_node; /* _n_op on <self:AUplusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#n_expr= for (self: AUplusExpr, AExpr) */
void nit__parser_prod___AUplusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AUplusExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#visit_all for (self: AUplusExpr, Visitor) */
void nit__parser_prod___AUplusExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUplusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4752);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUplusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4753);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#init_autildeexpr for (self: AUtildeExpr, nullable TTilde, nullable AExpr) */
void nit__parser_prod___AUtildeExpr___init_autildeexpr(val* self, val* p0, val* p1) {
val* var_n_op /* var n_op: nullable TTilde */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AUtildeExpr>*/
}
var_n_op = p0;
var_n_expr = p1;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4762);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_n_op; /* _n_op on <self:AUtildeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4763);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TTilde>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4764);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AUtildeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4765);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#replace_child for (self: AUtildeExpr, ANode, nullable ANode) */
void nit__parser_prod___AUtildeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
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
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUtildeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4770);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TTilde */
cltype = type_nit__TTilde.color;
idtype = type_nit__TTilde.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TTilde", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4771);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AUnaryopExpr__n_op_61d]))(self, var_new_child); /* n_op= on <self:AUtildeExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUtildeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4774);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4775);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AUtildeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#n_op= for (self: AUtildeExpr, Token) */
void nit__parser_prod___AUtildeExpr___nit__parser_nodes__AUnaryopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_node; /* _n_op on <self:AUtildeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#n_expr= for (self: AUtildeExpr, AExpr) */
void nit__parser_prod___AUtildeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AUtildeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#visit_all for (self: AUtildeExpr, Visitor) */
void nit__parser_prod___AUtildeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUtildeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4794);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUtildeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4795);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#init_anewexpr for (self: ANewExpr, nullable TKwnew, nullable AType, nullable TId, nullable AExprs) */
void nit__parser_prod___ANewExpr___init_anewexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ANewExpr>*/
}
var_n_kwnew = p0;
var_n_type = p1;
var_n_id = p2;
var_n_args = p3;
if (unlikely(var_n_kwnew == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4806);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:ANewExpr> */
if (var_n_kwnew == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4807);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnew, self); /* parent= on <var_n_kwnew:nullable TKwnew>*/
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4808);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val = var_n_type; /* _n_type on <self:ANewExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4809);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val = var_n_id; /* _n_id on <self:ANewExpr> */
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4812);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val = var_n_args; /* _n_args on <self:ANewExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4813);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_args->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_args, self); /* parent= on <var_n_args:nullable AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#replace_child for (self: ANewExpr, ANode, nullable ANode) */
void nit__parser_prod___ANewExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnew */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : nullable TId */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
val* var16 /* : AExprs */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4818);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwnew>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwnew */
cltype = type_nit__TKwnew.color;
idtype = type_nit__TKwnew.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnew", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4819);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_kwnew_61d]))(self, var_new_child); /* n_kwnew= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4822);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AType>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AType */
cltype6 = type_nit__AType.color;
idtype7 = type_nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4823);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_type_61d]))(self, var_new_child); /* n_type= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
if (var9 == NULL) {
var10 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var11 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:nullable TId>*/
var10 = var11;
}
if (var10){
/* <var_new_child:nullable ANode> isa nullable TId */
cltype13 = type_nullable__nit__TId.color;
idtype14 = type_nullable__nit__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TId", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4827);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4830);
fatal_exit(1);
}
{
var17 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_old_child); /* == on <var16:AExprs>*/
}
if (var17){
/* <var_new_child:nullable ANode> isa AExprs */
cltype19 = type_nit__AExprs.color;
idtype20 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4831);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_args_61d]))(self, var_new_child); /* n_args= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_kwnew= for (self: ANewExpr, TKwnew) */
void nit__parser_prod___ANewExpr___n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: TKwnew */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val = var_node; /* _n_kwnew on <self:ANewExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwnew>*/
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_type= for (self: ANewExpr, AType) */
void nit__parser_prod___ANewExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val = var_node; /* _n_type on <self:ANewExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_id= for (self: ANewExpr, nullable TId) */
void nit__parser_prod___ANewExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val = var_node; /* _n_id on <self:ANewExpr> */
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
/* method parser_prod#ANewExpr#n_args= for (self: ANewExpr, AExprs) */
void nit__parser_prod___ANewExpr___n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val = var_node; /* _n_args on <self:ANewExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#visit_all for (self: ANewExpr, Visitor) */
void nit__parser_prod___ANewExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnew */;
val* var1 /* : AType */;
val* var2 /* : nullable TId */;
val* var3 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4860);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4861);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4863);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#init_aattrexpr for (self: AAttrExpr, nullable AExpr, nullable TAttrid) */
void nit__parser_prod___AAttrExpr___init_aattrexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAttrExpr>*/
}
var_n_expr = p0;
var_n_id = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4872);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4873);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4874);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4875);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TAttrid>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#replace_child for (self: AAttrExpr, ANode, nullable ANode) */
void nit__parser_prod___AAttrExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TAttrid */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4880);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4881);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4884);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TAttrid>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TAttrid */
cltype6 = type_nit__TAttrid.color;
idtype7 = type_nit__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4885);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AAttrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_expr= for (self: AAttrExpr, AExpr) */
void nit__parser_prod___AAttrExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_id= for (self: AAttrExpr, TAttrid) */
void nit__parser_prod___AAttrExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAttrid>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#visit_all for (self: AAttrExpr, Visitor) */
void nit__parser_prod___AAttrExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4904);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4905);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#init_aattrassignexpr for (self: AAttrAssignExpr, nullable AExpr, nullable TAttrid, nullable TAssign, nullable AExpr) */
void nit__parser_prod___AAttrAssignExpr___init_aattrassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAttrAssignExpr>*/
}
var_n_expr = p0;
var_n_id = p1;
var_n_assign = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4916);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4917);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4918);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4919);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TAttrid>*/
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4920);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AAttrAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4921);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign, self); /* parent= on <var_n_assign:nullable TAssign>*/
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4922);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4923);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_value, self); /* parent= on <var_n_value:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#replace_child for (self: AAttrAssignExpr, ANode, nullable ANode) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TAttrid */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : TAssign */;
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
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4928);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4929);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4932);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TAttrid>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TAttrid */
cltype6 = type_nit__TAttrid.color;
idtype7 = type_nit__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4933);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4936);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TAssign>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TAssign */
cltype12 = type_nit__TAssign.color;
idtype13 = type_nit__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4937);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_assign_61d]))(self, var_new_child); /* n_assign= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4940);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4941);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value_61d]))(self, var_new_child); /* n_value= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_expr= for (self: AAttrAssignExpr, AExpr) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_id= for (self: AAttrAssignExpr, TAttrid) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAttrid>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_assign= for (self: AAttrAssignExpr, TAssign) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:AAttrAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAssign>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_value= for (self: AAttrAssignExpr, AExpr) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:AAttrAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#visit_all for (self: AAttrAssignExpr, Visitor) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
val* var2 /* : TAssign */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4970);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4971);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4972);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4973);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#init_aattrreassignexpr for (self: AAttrReassignExpr, nullable AExpr, nullable TAttrid, nullable AAssignOp, nullable AExpr) */
void nit__parser_prod___AAttrReassignExpr___init_aattrreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAttrReassignExpr>*/
}
var_n_expr = p0;
var_n_id = p1;
var_n_assign_op = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4984);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4985);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4986);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4987);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TAttrid>*/
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4988);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AAttrReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4989);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign_op, self); /* parent= on <var_n_assign_op:nullable AAssignOp>*/
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4990);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4991);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_value, self); /* parent= on <var_n_value:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#replace_child for (self: AAttrReassignExpr, ANode, nullable ANode) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TAttrid */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AAssignOp */;
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
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4996);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4997);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5000);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TAttrid>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TAttrid */
cltype6 = type_nit__TAttrid.color;
idtype7 = type_nit__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5001);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5004);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AAssignOp>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype12 = type_nit__AAssignOp.color;
idtype13 = type_nit__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5005);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_assign_op_61d]))(self, var_new_child); /* n_assign_op= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5008);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5009);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value_61d]))(self, var_new_child); /* n_value= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_expr= for (self: AAttrReassignExpr, AExpr) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_id= for (self: AAttrReassignExpr, TAttrid) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAttrid>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_assign_op= for (self: AAttrReassignExpr, AAssignOp) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:AAttrReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AAssignOp>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_value= for (self: AAttrReassignExpr, AExpr) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:AAttrReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#visit_all for (self: AAttrReassignExpr, Visitor) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
val* var2 /* : AAssignOp */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5038);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5039);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5040);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5041);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#init_acallexpr for (self: ACallExpr, nullable AExpr, nullable TId, nullable AExprs) */
void nit__parser_prod___ACallExpr___init_acallexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACallExpr>*/
}
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5051);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5052);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5053);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5054);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5055);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5056);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_args->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_args, self); /* parent= on <var_n_args:nullable AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#replace_child for (self: ACallExpr, ANode, nullable ANode) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TId */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExprs */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5061);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5062);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ACallExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5065);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TId>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TId */
cltype6 = type_nit__TId.color;
idtype7 = type_nit__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5066);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:ACallExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5069);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExprs>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExprs */
cltype12 = type_nit__AExprs.color;
idtype13 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5070);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args_61d]))(self, var_new_child); /* n_args= on <self:ACallExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_expr= for (self: ACallExpr, AExpr) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_id= for (self: ACallExpr, TId) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ACallFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_args= for (self: ACallExpr, AExprs) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ACallFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#visit_all for (self: ACallExpr, Visitor) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5094);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5095);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5096);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#init_acallassignexpr for (self: ACallAssignExpr, nullable AExpr, nullable TId, nullable AExprs, nullable TAssign, nullable AExpr) */
void nit__parser_prod___ACallAssignExpr___init_acallassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACallAssignExpr>*/
}
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
var_n_assign = p3;
var_n_value = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5108);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5109);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5110);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5111);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5112);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallAssignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5113);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_args->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_args, self); /* parent= on <var_n_args:nullable AExprs>*/
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5114);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ACallAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5115);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign, self); /* parent= on <var_n_assign:nullable TAssign>*/
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5116);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5117);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_value, self); /* parent= on <var_n_value:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#replace_child for (self: ACallAssignExpr, ANode, nullable ANode) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TId */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExprs */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : TAssign */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
val* var21 /* : AExpr */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5122);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5123);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5126);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TId>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TId */
cltype6 = type_nit__TId.color;
idtype7 = type_nit__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5127);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5130);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExprs>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExprs */
cltype12 = type_nit__AExprs.color;
idtype13 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5131);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args_61d]))(self, var_new_child); /* n_args= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5134);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:TAssign>*/
}
if (var16){
/* <var_new_child:nullable ANode> isa TAssign */
cltype18 = type_nit__TAssign.color;
idtype19 = type_nit__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5135);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_assign_61d]))(self, var_new_child); /* n_assign= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5138);
fatal_exit(1);
}
{
var22 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_old_child); /* == on <var21:AExpr>*/
}
if (var22){
/* <var_new_child:nullable ANode> isa AExpr */
cltype24 = type_nit__AExpr.color;
idtype25 = type_nit__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5139);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value_61d]))(self, var_new_child); /* n_value= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_expr= for (self: ACallAssignExpr, AExpr) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_id= for (self: ACallAssignExpr, TId) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ACallFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_args= for (self: ACallAssignExpr, AExprs) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ACallFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_assign= for (self: ACallAssignExpr, TAssign) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:ACallAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAssign>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_value= for (self: ACallAssignExpr, AExpr) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:ACallAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#visit_all for (self: ACallAssignExpr, Visitor) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
val* var3 /* : TAssign */;
val* var4 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5173);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5174);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5175);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5176);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5177);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#init_acallreassignexpr for (self: ACallReassignExpr, nullable AExpr, nullable TId, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACallReassignExpr>*/
}
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
var_n_assign_op = p3;
var_n_value = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5189);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5190);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5191);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5192);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5193);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallReassignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5194);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_args->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_args, self); /* parent= on <var_n_args:nullable AExprs>*/
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5195);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ACallReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5196);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign_op, self); /* parent= on <var_n_assign_op:nullable AAssignOp>*/
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5197);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5198);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_value, self); /* parent= on <var_n_value:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#replace_child for (self: ACallReassignExpr, ANode, nullable ANode) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TId */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExprs */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : AAssignOp */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
val* var21 /* : AExpr */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5203);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5204);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5207);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TId>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TId */
cltype6 = type_nit__TId.color;
idtype7 = type_nit__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5208);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5211);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExprs>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExprs */
cltype12 = type_nit__AExprs.color;
idtype13 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5212);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args_61d]))(self, var_new_child); /* n_args= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5215);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:AAssignOp>*/
}
if (var16){
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype18 = type_nit__AAssignOp.color;
idtype19 = type_nit__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5216);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_assign_op_61d]))(self, var_new_child); /* n_assign_op= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5219);
fatal_exit(1);
}
{
var22 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_old_child); /* == on <var21:AExpr>*/
}
if (var22){
/* <var_new_child:nullable ANode> isa AExpr */
cltype24 = type_nit__AExpr.color;
idtype25 = type_nit__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5220);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value_61d]))(self, var_new_child); /* n_value= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_expr= for (self: ACallReassignExpr, AExpr) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_id= for (self: ACallReassignExpr, TId) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ACallFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_args= for (self: ACallReassignExpr, AExprs) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ACallFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_assign_op= for (self: ACallReassignExpr, AAssignOp) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:ACallReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AAssignOp>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_value= for (self: ACallReassignExpr, AExpr) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:ACallReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#visit_all for (self: ACallReassignExpr, Visitor) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
val* var3 /* : AAssignOp */;
val* var4 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5254);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5255);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5256);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5257);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5258);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#init_asuperexpr for (self: ASuperExpr, nullable AQualified, nullable TKwsuper, nullable AExprs) */
void nit__parser_prod___ASuperExpr___init_asuperexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_qualified /* var n_qualified: nullable AQualified */;
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
val* var_n_args /* var n_args: nullable AExprs */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASuperExpr>*/
}
var_n_qualified = p0;
var_n_kwsuper = p1;
var_n_args = p2;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val = var_n_qualified; /* _n_qualified on <self:ASuperExpr> */
if (var_n_qualified == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_qualified->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_qualified, ((val*)NULL)); /* != on <var_n_qualified:nullable AQualified>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_qualified->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_qualified, self); /* parent= on <var_n_qualified:nullable AQualified(AQualified)>*/
}
} else {
}
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5270);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExpr> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5271);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwsuper->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwsuper, self); /* parent= on <var_n_kwsuper:nullable TKwsuper>*/
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5272);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val = var_n_args; /* _n_args on <self:ASuperExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5273);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_args->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_args, self); /* parent= on <var_n_args:nullable AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#replace_child for (self: ASuperExpr, ANode, nullable ANode) */
void nit__parser_prod___ASuperExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AQualified */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : TKwsuper */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : AExprs */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable AQualified>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable AQualified */
cltype = type_nullable__nit__AQualified.color;
idtype = type_nullable__nit__AQualified.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AQualified", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5279);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASuperExpr__n_qualified_61d]))(self, var_new_child); /* n_qualified= on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5282);
fatal_exit(1);
}
{
var5 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_old_child); /* == on <var4:TKwsuper>*/
}
if (var5){
/* <var_new_child:nullable ANode> isa TKwsuper */
cltype7 = type_nit__TKwsuper.color;
idtype8 = type_nit__TKwsuper.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwsuper", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5283);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASuperExpr__n_kwsuper_61d]))(self, var_new_child); /* n_kwsuper= on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5286);
fatal_exit(1);
}
{
var11 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_old_child); /* == on <var10:AExprs>*/
}
if (var11){
/* <var_new_child:nullable ANode> isa AExprs */
cltype13 = type_nit__AExprs.color;
idtype14 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5287);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASuperExpr__n_args_61d]))(self, var_new_child); /* n_args= on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_qualified= for (self: ASuperExpr, nullable AQualified) */
void nit__parser_prod___ASuperExpr___n_qualified_61d(val* self, val* p0) {
val* var_node /* var node: nullable AQualified */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val = var_node; /* _n_qualified on <self:ASuperExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AQualified>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AQualified(AQualified)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_kwsuper= for (self: ASuperExpr, TKwsuper) */
void nit__parser_prod___ASuperExpr___n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwsuper>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_args= for (self: ASuperExpr, AExprs) */
void nit__parser_prod___ASuperExpr___n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val = var_node; /* _n_args on <self:ASuperExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#visit_all for (self: ASuperExpr, Visitor) */
void nit__parser_prod___ASuperExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AQualified */;
val* var1 /* : TKwsuper */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5312);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5313);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#init_ainitexpr for (self: AInitExpr, nullable AExpr, nullable TKwinit, nullable AExprs) */
void nit__parser_prod___AInitExpr___init_ainitexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var_n_args /* var n_args: nullable AExprs */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AInitExpr>*/
}
var_n_expr = p0;
var_n_kwinit = p1;
var_n_args = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5323);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AInitExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5324);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_kwinit == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5325);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AInitExpr> */
if (var_n_kwinit == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5326);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwinit, self); /* parent= on <var_n_kwinit:nullable TKwinit>*/
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5327);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val = var_n_args; /* _n_args on <self:AInitExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5328);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_args->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_args, self); /* parent= on <var_n_args:nullable AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#replace_child for (self: AInitExpr, ANode, nullable ANode) */
void nit__parser_prod___AInitExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwinit */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AExprs */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5333);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5334);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AInitExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5337);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwinit>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwinit */
cltype6 = type_nit__TKwinit.color;
idtype7 = type_nit__TKwinit.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwinit", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5338);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AInitExpr__n_kwinit_61d]))(self, var_new_child); /* n_kwinit= on <self:AInitExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5341);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AExprs>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AExprs */
cltype12 = type_nit__AExprs.color;
idtype13 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5342);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AInitExpr__n_args_61d]))(self, var_new_child); /* n_args= on <self:AInitExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_expr= for (self: AInitExpr, AExpr) */
void nit__parser_prod___AInitExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AInitExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_kwinit= for (self: AInitExpr, TKwinit) */
void nit__parser_prod___AInitExpr___n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: TKwinit */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val = var_node; /* _n_kwinit on <self:AInitExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwinit>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_args= for (self: AInitExpr, AExprs) */
void nit__parser_prod___AInitExpr___n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val = var_node; /* _n_args on <self:AInitExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#visit_all for (self: AInitExpr, Visitor) */
void nit__parser_prod___AInitExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwinit */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5366);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5367);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5368);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#init_abraexpr for (self: ABraExpr, nullable AExpr, nullable AExprs) */
void nit__parser_prod___ABraExpr___init_abraexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABraExpr>*/
}
var_n_expr = p0;
var_n_args = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5377);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5378);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5379);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5380);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_args->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_args, self); /* parent= on <var_n_args:nullable AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#replace_child for (self: ABraExpr, ANode, nullable ANode) */
void nit__parser_prod___ABraExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExprs */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5385);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5386);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ABraExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5389);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExprs>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExprs */
cltype6 = type_nit__AExprs.color;
idtype7 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5390);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraFormExpr__n_args_61d]))(self, var_new_child); /* n_args= on <self:ABraExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_expr= for (self: ABraExpr, AExpr) */
void nit__parser_prod___ABraExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_args= for (self: ABraExpr, AExprs) */
void nit__parser_prod___ABraExpr___nit__parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#visit_all for (self: ABraExpr, Visitor) */
void nit__parser_prod___ABraExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5409);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5410);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#init_abraassignexpr for (self: ABraAssignExpr, nullable AExpr, nullable AExprs, nullable TAssign, nullable AExpr) */
void nit__parser_prod___ABraAssignExpr___init_abraassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABraAssignExpr>*/
}
var_n_expr = p0;
var_n_args = p1;
var_n_assign = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5421);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5422);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5423);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraAssignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5424);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_args->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_args, self); /* parent= on <var_n_args:nullable AExprs>*/
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5425);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ABraAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5426);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign, self); /* parent= on <var_n_assign:nullable TAssign>*/
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5427);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5428);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_value, self); /* parent= on <var_n_value:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#replace_child for (self: ABraAssignExpr, ANode, nullable ANode) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExprs */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : TAssign */;
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5433);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5434);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5437);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExprs>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExprs */
cltype6 = type_nit__AExprs.color;
idtype7 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5438);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraFormExpr__n_args_61d]))(self, var_new_child); /* n_args= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5441);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TAssign>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TAssign */
cltype12 = type_nit__TAssign.color;
idtype13 = type_nit__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5442);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_assign_61d]))(self, var_new_child); /* n_assign= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5445);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5446);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value_61d]))(self, var_new_child); /* n_value= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_expr= for (self: ABraAssignExpr, AExpr) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_args= for (self: ABraAssignExpr, AExprs) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_assign= for (self: ABraAssignExpr, TAssign) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:ABraAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAssign>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_value= for (self: ABraAssignExpr, AExpr) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#visit_all for (self: ABraAssignExpr, Visitor) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : TAssign */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5475);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5476);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5477);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5478);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#init_abrareassignexpr for (self: ABraReassignExpr, nullable AExpr, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void nit__parser_prod___ABraReassignExpr___init_abrareassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABraReassignExpr>*/
}
var_n_expr = p0;
var_n_args = p1;
var_n_assign_op = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5489);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5490);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5491);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraReassignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5492);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_args->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_args, self); /* parent= on <var_n_args:nullable AExprs>*/
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5493);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ABraReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5494);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign_op, self); /* parent= on <var_n_assign_op:nullable AAssignOp>*/
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5495);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5496);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_value, self); /* parent= on <var_n_value:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#replace_child for (self: ABraReassignExpr, ANode, nullable ANode) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AExprs */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AAssignOp */;
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5501);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5502);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5505);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AExprs>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AExprs */
cltype6 = type_nit__AExprs.color;
idtype7 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5506);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraFormExpr__n_args_61d]))(self, var_new_child); /* n_args= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5509);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AAssignOp>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype12 = type_nit__AAssignOp.color;
idtype13 = type_nit__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5510);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_assign_op_61d]))(self, var_new_child); /* n_assign_op= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5513);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5514);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value_61d]))(self, var_new_child); /* n_value= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_expr= for (self: ABraReassignExpr, AExpr) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_args= for (self: ABraReassignExpr, AExprs) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExprs>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_assign_op= for (self: ABraReassignExpr, AAssignOp) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:ABraReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AAssignOp>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_value= for (self: ABraReassignExpr, AExpr) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#visit_all for (self: ABraReassignExpr, Visitor) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : AAssignOp */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5543);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5544);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5545);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5546);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#init_avarexpr for (self: AVarExpr, nullable TId) */
void nit__parser_prod___AVarExpr___init_avarexpr(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AVarExpr>*/
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5554);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5555);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#replace_child for (self: AVarExpr, ANode, nullable ANode) */
void nit__parser_prod___AVarExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5560);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5561);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVarFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AVarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#n_id= for (self: AVarExpr, TId) */
void nit__parser_prod___AVarExpr___nit__parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#visit_all for (self: AVarExpr, Visitor) */
void nit__parser_prod___AVarExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5575);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#init_avarassignexpr for (self: AVarAssignExpr, nullable TId, nullable TAssign, nullable AExpr) */
void nit__parser_prod___AVarAssignExpr___init_avarassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AVarAssignExpr>*/
}
var_n_id = p0;
var_n_assign = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5585);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5586);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5587);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVarAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5588);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign, self); /* parent= on <var_n_assign:nullable TAssign>*/
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5589);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5590);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_value, self); /* parent= on <var_n_value:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#replace_child for (self: AVarAssignExpr, ANode, nullable ANode) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5595);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5596);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVarFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5599);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5600);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_assign_61d]))(self, var_new_child); /* n_assign= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5603);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5604);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value_61d]))(self, var_new_child); /* n_value= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_id= for (self: AVarAssignExpr, TId) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_assign= for (self: AVarAssignExpr, TAssign) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:AVarAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAssign>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_value= for (self: AVarAssignExpr, AExpr) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarAssignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#visit_all for (self: AVarAssignExpr, Visitor) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5628);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5629);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5630);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#init_avarreassignexpr for (self: AVarReassignExpr, nullable TId, nullable AAssignOp, nullable AExpr) */
void nit__parser_prod___AVarReassignExpr___init_avarreassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AVarReassignExpr>*/
}
var_n_id = p0;
var_n_assign_op = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5640);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5641);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5642);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AVarReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5643);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign_op, self); /* parent= on <var_n_assign_op:nullable AAssignOp>*/
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5644);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5645);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_value->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_value, self); /* parent= on <var_n_value:nullable AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#replace_child for (self: AVarReassignExpr, ANode, nullable ANode) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AAssignOp */;
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
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5650);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5651);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AVarFormExpr__n_id_61d]))(self, var_new_child); /* n_id= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5654);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:AAssignOp>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype6 = type_nit__AAssignOp.color;
idtype7 = type_nit__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5655);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_assign_op_61d]))(self, var_new_child); /* n_assign_op= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5658);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5659);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value_61d]))(self, var_new_child); /* n_value= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_id= for (self: AVarReassignExpr, TId) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_assign_op= for (self: AVarReassignExpr, AAssignOp) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:AVarReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AAssignOp>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_value= for (self: AVarReassignExpr, AExpr) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarReassignExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#visit_all for (self: AVarReassignExpr, Visitor) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : AAssignOp */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5683);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5684);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5685);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#init_arangeexpr for (self: ARangeExpr, nullable AExpr, nullable AExpr, nullable AAnnotations) */
void nit__parser_prod___ARangeExpr___init_arangeexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ARangeExpr>*/
}
var_n_expr = p0;
var_n_expr2 = p1;
var_n_annotations = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5695);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ARangeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5696);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5697);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ARangeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5698);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ARangeExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#replace_child for (self: ARangeExpr, ANode, nullable ANode) */
void nit__parser_prod___ARangeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var9 /* : nullable AAnnotations */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5705);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5706);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ARangeExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5709);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5710);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:ARangeExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ARangeExpr> */
if (var9 == NULL) {
var10 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var11 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:nullable AAnnotations>*/
var10 = var11;
}
if (var10){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype13 = type_nullable__nit__AAnnotations.color;
idtype14 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5714);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ARangeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#n_expr= for (self: ARangeExpr, AExpr) */
void nit__parser_prod___ARangeExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:ARangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#n_expr2= for (self: ARangeExpr, AExpr) */
void nit__parser_prod___ARangeExpr___n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ARangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#n_annotations= for (self: ARangeExpr, nullable AAnnotations) */
void nit__parser_prod___ARangeExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ARangeExpr> */
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
/* method parser_prod#ARangeExpr#visit_all for (self: ARangeExpr, Visitor) */
void nit__parser_prod___ARangeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var2 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5738);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5739);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ARangeExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#init_acrangeexpr for (self: ACrangeExpr, nullable TObra, nullable AExpr, nullable AExpr, nullable TCbra, nullable AAnnotations) */
void nit__parser_prod___ACrangeExpr___init_acrangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACrangeExpr>*/
}
var_n_obra = p0;
var_n_expr = p1;
var_n_expr2 = p2;
var_n_cbra = p3;
var_n_annotations = p4;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5752);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:ACrangeExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5753);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_obra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_obra, self); /* parent= on <var_n_obra:nullable TObra>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5754);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACrangeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5755);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5756);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ACrangeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5757);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5758);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ACrangeExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5759);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_cbra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cbra, self); /* parent= on <var_n_cbra:nullable TCbra>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACrangeExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#replace_child for (self: ACrangeExpr, ANode, nullable ANode) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
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
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : TCbra */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
val* var21 /* : nullable AAnnotations */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5766);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5767);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACrangeExpr__n_obra_61d]))(self, var_new_child); /* n_obra= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5770);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5771);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5774);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5775);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5778);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:TCbra>*/
}
if (var16){
/* <var_new_child:nullable ANode> isa TCbra */
cltype18 = type_nit__TCbra.color;
idtype19 = type_nit__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5779);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACrangeExpr__n_cbra_61d]))(self, var_new_child); /* n_cbra= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
if (var21 == NULL) {
var22 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var23 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_old_child); /* == on <var21:nullable AAnnotations>*/
var22 = var23;
}
if (var22){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype25 = type_nullable__nit__AAnnotations.color;
idtype26 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
var_class_name27 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5783);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_obra= for (self: ACrangeExpr, TObra) */
void nit__parser_prod___ACrangeExpr___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val = var_node; /* _n_obra on <self:ACrangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TObra>*/
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr= for (self: ACrangeExpr, AExpr) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:ACrangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr2= for (self: ACrangeExpr, AExpr) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ACrangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_cbra= for (self: ACrangeExpr, TCbra) */
void nit__parser_prod___ACrangeExpr___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:ACrangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TCbra>*/
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_annotations= for (self: ACrangeExpr, nullable AAnnotations) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACrangeExpr> */
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
/* method parser_prod#ACrangeExpr#visit_all for (self: ACrangeExpr, Visitor) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : TCbra */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5817);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5818);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5819);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5820);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#init_aorangeexpr for (self: AOrangeExpr, nullable TObra, nullable AExpr, nullable AExpr, nullable TObra, nullable AAnnotations) */
void nit__parser_prod___AOrangeExpr___init_aorangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_cbra /* var n_cbra: nullable TObra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AOrangeExpr>*/
}
var_n_obra = p0;
var_n_expr = p1;
var_n_expr2 = p2;
var_n_cbra = p3;
var_n_annotations = p4;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5833);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AOrangeExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5834);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_obra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_obra, self); /* parent= on <var_n_obra:nullable TObra>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5835);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrangeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5836);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5837);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrangeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5838);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr2, self); /* parent= on <var_n_expr2:nullable AExpr>*/
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5839);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AOrangeExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5840);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_cbra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cbra, self); /* parent= on <var_n_cbra:nullable TObra>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AOrangeExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#replace_child for (self: AOrangeExpr, ANode, nullable ANode) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
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
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : TObra */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
val* var21 /* : nullable AAnnotations */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5847);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5848);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOrangeExpr__n_obra_61d]))(self, var_new_child); /* n_obra= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5851);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5852);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5855);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5856);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr2_61d]))(self, var_new_child); /* n_expr2= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5859);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:TObra>*/
}
if (var16){
/* <var_new_child:nullable ANode> isa TObra */
cltype18 = type_nit__TObra.color;
idtype19 = type_nit__TObra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5860);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOrangeExpr__n_cbra_61d]))(self, var_new_child); /* n_cbra= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
if (var21 == NULL) {
var22 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var23 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_old_child); /* == on <var21:nullable AAnnotations>*/
var22 = var23;
}
if (var22){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype25 = type_nullable__nit__AAnnotations.color;
idtype26 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
var_class_name27 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5864);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_obra= for (self: AOrangeExpr, TObra) */
void nit__parser_prod___AOrangeExpr___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val = var_node; /* _n_obra on <self:AOrangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TObra>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr= for (self: AOrangeExpr, AExpr) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:AOrangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr2= for (self: AOrangeExpr, AExpr) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_cbra= for (self: AOrangeExpr, TObra) */
void nit__parser_prod___AOrangeExpr___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:AOrangeExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TObra>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_annotations= for (self: AOrangeExpr, nullable AAnnotations) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AOrangeExpr> */
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
/* method parser_prod#AOrangeExpr#visit_all for (self: AOrangeExpr, Visitor) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : TObra */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5898);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5899);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5900);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5901);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#init_aarrayexpr for (self: AArrayExpr, nullable TObra, Collection[Object], nullable AType, nullable TCbra, nullable AAnnotations) */
void nit__parser_prod___AArrayExpr___init_aarrayexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : ANodes[AExpr] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AArrayExpr>*/
}
var_n_obra = p0;
var_n_exprs = p1;
var_n_type = p2;
var_n_cbra = p3;
var_n_annotations = p4;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5914);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AArrayExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5915);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_obra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_obra, self); /* parent= on <var_n_obra:nullable TObra>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_exprs]))(self); /* n_exprs on <self:AArrayExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_exprs); /* unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val = var_n_type; /* _n_type on <self:AArrayExpr> */
if (var_n_type == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_type, ((val*)NULL)); /* != on <var_n_type:nullable AType>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType(AType)>*/
}
} else {
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5919);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AArrayExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5920);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_cbra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cbra, self); /* parent= on <var_n_cbra:nullable TCbra>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AArrayExpr> */
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
/* method parser_prod#AArrayExpr#replace_child for (self: AArrayExpr, ANode, nullable ANode) */
void nit__parser_prod___AArrayExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var5 /* : nullable AType */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
val* var12 /* : TCbra */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : nullable AAnnotations */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val; /* _n_obra on <self:AArrayExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5927);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5928);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_obra_61d]))(self, var_new_child); /* n_obra= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_exprs]))(self); /* n_exprs on <self:AArrayExpr>*/
}
{
var4 = ((short int(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var3, var_old_child, var_new_child); /* replace_child on <var3:ANodes[AExpr]>*/
}
if (var4){
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_old_child); /* == on <var5:nullable AType>*/
var6 = var7;
}
if (var6){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype9 = type_nullable__nit__AType.color;
idtype10 = type_nullable__nit__AType.id;
if(var_new_child == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_new_child->type->table_size) {
var8 = 0;
} else {
var8 = var_new_child->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
var_class_name11 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5933);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_type_61d]))(self, var_new_child); /* n_type= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val; /* _n_cbra on <self:AArrayExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5936);
fatal_exit(1);
}
{
var13 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var_old_child); /* == on <var12:TCbra>*/
}
if (var13){
/* <var_new_child:nullable ANode> isa TCbra */
cltype15 = type_nit__TCbra.color;
idtype16 = type_nit__TCbra.id;
if(var_new_child == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5937);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_cbra_61d]))(self, var_new_child); /* n_cbra= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var20 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_old_child); /* == on <var18:nullable AAnnotations>*/
var19 = var20;
}
if (var19){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype22 = type_nullable__nit__AAnnotations.color;
idtype23 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_new_child->type->table_size) {
var21 = 0;
} else {
var21 = var_new_child->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
var_class_name24 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5941);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_obra= for (self: AArrayExpr, TObra) */
void nit__parser_prod___AArrayExpr___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val = var_node; /* _n_obra on <self:AArrayExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TObra>*/
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_type= for (self: AArrayExpr, nullable AType) */
void nit__parser_prod___AArrayExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val = var_node; /* _n_type on <self:AArrayExpr> */
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
/* method parser_prod#AArrayExpr#n_cbra= for (self: AArrayExpr, TCbra) */
void nit__parser_prod___AArrayExpr___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val = var_node; /* _n_cbra on <self:AArrayExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TCbra>*/
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_annotations= for (self: AArrayExpr, nullable AAnnotations) */
void nit__parser_prod___AArrayExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AArrayExpr> */
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
/* method parser_prod#AArrayExpr#visit_all for (self: AArrayExpr, Visitor) */
void nit__parser_prod___AArrayExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : nullable AType */;
val* var3 /* : TCbra */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val; /* _n_obra on <self:AArrayExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5970);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_exprs]))(self); /* n_exprs on <self:AArrayExpr>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var1, var_v); /* visit_all on <var1:ANodes[AExpr]>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val; /* _n_cbra on <self:AArrayExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5973);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#init_aselfexpr for (self: ASelfExpr, nullable TKwself, nullable AAnnotations) */
void nit__parser_prod___ASelfExpr___init_aselfexpr(val* self, val* p0, val* p1) {
val* var_n_kwself /* var n_kwself: nullable TKwself */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASelfExpr>*/
}
var_n_kwself = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwself == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5983);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val = var_n_kwself; /* _n_kwself on <self:ASelfExpr> */
if (var_n_kwself == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5984);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwself->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwself, self); /* parent= on <var_n_kwself:nullable TKwself>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASelfExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#replace_child for (self: ASelfExpr, ANode, nullable ANode) */
void nit__parser_prod___ASelfExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwself */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : nullable AAnnotations */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TKwself>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwself */
cltype = type_nit__TKwself.color;
idtype = type_nit__TKwself.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwself", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5992);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASelfExpr__n_kwself_61d]))(self, var_new_child); /* n_kwself= on <self:ASelfExpr>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_old_child); /* == on <var4:nullable AAnnotations>*/
var5 = var6;
}
if (var5){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype8 = type_nullable__nit__AAnnotations.color;
idtype9 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5996);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ASelfExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_kwself= for (self: ASelfExpr, nullable TKwself) */
void nit__parser_prod___ASelfExpr___n_kwself_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwself */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val = var_node; /* _n_kwself on <self:ASelfExpr> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6004);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwself>*/
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_annotations= for (self: ASelfExpr, nullable AAnnotations) */
void nit__parser_prod___ASelfExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASelfExpr> */
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
/* method parser_prod#ASelfExpr#visit_all for (self: ASelfExpr, Visitor) */
void nit__parser_prod___ASelfExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwself */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr for (self: AImplicitSelfExpr) */
void nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AImplicitSelfExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#replace_child for (self: AImplicitSelfExpr, ANode, nullable ANode) */
void nit__parser_prod___AImplicitSelfExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#visit_all for (self: AImplicitSelfExpr, Visitor) */
void nit__parser_prod___AImplicitSelfExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#init_atrueexpr for (self: ATrueExpr, nullable TKwtrue, nullable AAnnotations) */
void nit__parser_prod___ATrueExpr___init_atrueexpr(val* self, val* p0, val* p1) {
val* var_n_kwtrue /* var n_kwtrue: nullable TKwtrue */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ATrueExpr>*/
}
var_n_kwtrue = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwtrue == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6040);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val = var_n_kwtrue; /* _n_kwtrue on <self:ATrueExpr> */
if (var_n_kwtrue == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6041);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwtrue->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwtrue, self); /* parent= on <var_n_kwtrue:nullable TKwtrue>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATrueExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#replace_child for (self: ATrueExpr, ANode, nullable ANode) */
void nit__parser_prod___ATrueExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwtrue */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AAnnotations */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6048);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwtrue>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwtrue */
cltype = type_nit__TKwtrue.color;
idtype = type_nit__TKwtrue.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwtrue", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6049);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ATrueExpr__n_kwtrue_61d]))(self, var_new_child); /* n_kwtrue= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AAnnotations>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype7 = type_nullable__nit__AAnnotations.color;
idtype8 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6053);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_kwtrue= for (self: ATrueExpr, TKwtrue) */
void nit__parser_prod___ATrueExpr___n_kwtrue_61d(val* self, val* p0) {
val* var_node /* var node: TKwtrue */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val = var_node; /* _n_kwtrue on <self:ATrueExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwtrue>*/
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_annotations= for (self: ATrueExpr, nullable AAnnotations) */
void nit__parser_prod___ATrueExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATrueExpr> */
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
/* method parser_prod#ATrueExpr#visit_all for (self: ATrueExpr, Visitor) */
void nit__parser_prod___ATrueExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwtrue */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6072);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#init_afalseexpr for (self: AFalseExpr, nullable TKwfalse, nullable AAnnotations) */
void nit__parser_prod___AFalseExpr___init_afalseexpr(val* self, val* p0, val* p1) {
val* var_n_kwfalse /* var n_kwfalse: nullable TKwfalse */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AFalseExpr>*/
}
var_n_kwfalse = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwfalse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6082);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val = var_n_kwfalse; /* _n_kwfalse on <self:AFalseExpr> */
if (var_n_kwfalse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6083);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwfalse->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwfalse, self); /* parent= on <var_n_kwfalse:nullable TKwfalse>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFalseExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#replace_child for (self: AFalseExpr, ANode, nullable ANode) */
void nit__parser_prod___AFalseExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwfalse */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AAnnotations */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6090);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwfalse>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwfalse */
cltype = type_nit__TKwfalse.color;
idtype = type_nit__TKwfalse.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwfalse", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6091);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AFalseExpr__n_kwfalse_61d]))(self, var_new_child); /* n_kwfalse= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AAnnotations>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype7 = type_nullable__nit__AAnnotations.color;
idtype8 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6095);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_kwfalse= for (self: AFalseExpr, TKwfalse) */
void nit__parser_prod___AFalseExpr___n_kwfalse_61d(val* self, val* p0) {
val* var_node /* var node: TKwfalse */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val = var_node; /* _n_kwfalse on <self:AFalseExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwfalse>*/
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_annotations= for (self: AFalseExpr, nullable AAnnotations) */
void nit__parser_prod___AFalseExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFalseExpr> */
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
/* method parser_prod#AFalseExpr#visit_all for (self: AFalseExpr, Visitor) */
void nit__parser_prod___AFalseExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfalse */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6114);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#init_anullexpr for (self: ANullExpr, nullable TKwnull, nullable AAnnotations) */
void nit__parser_prod___ANullExpr___init_anullexpr(val* self, val* p0, val* p1) {
val* var_n_kwnull /* var n_kwnull: nullable TKwnull */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ANullExpr>*/
}
var_n_kwnull = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6124);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:ANullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6125);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwnull->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnull, self); /* parent= on <var_n_kwnull:nullable TKwnull>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ANullExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#replace_child for (self: ANullExpr, ANode, nullable ANode) */
void nit__parser_prod___ANullExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnull */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AAnnotations */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6132);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwnull>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwnull */
cltype = type_nit__TKwnull.color;
idtype = type_nit__TKwnull.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnull", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6133);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANullExpr__n_kwnull_61d]))(self, var_new_child); /* n_kwnull= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AAnnotations>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype7 = type_nullable__nit__AAnnotations.color;
idtype8 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6137);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_kwnull= for (self: ANullExpr, TKwnull) */
void nit__parser_prod___ANullExpr___n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:ANullExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwnull>*/
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_annotations= for (self: ANullExpr, nullable AAnnotations) */
void nit__parser_prod___ANullExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ANullExpr> */
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
/* method parser_prod#ANullExpr#visit_all for (self: ANullExpr, Visitor) */
void nit__parser_prod___ANullExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnull */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6156);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#init_adecintexpr for (self: ADecIntExpr, nullable TNumber, nullable AAnnotations) */
void nit__parser_prod___ADecIntExpr___init_adecintexpr(val* self, val* p0, val* p1) {
val* var_n_number /* var n_number: nullable TNumber */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ADecIntExpr>*/
}
var_n_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6166);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val = var_n_number; /* _n_number on <self:ADecIntExpr> */
if (var_n_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6167);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_number->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_number, self); /* parent= on <var_n_number:nullable TNumber>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ADecIntExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#replace_child for (self: ADecIntExpr, ANode, nullable ANode) */
void nit__parser_prod___ADecIntExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TNumber */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AAnnotations */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6174);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TNumber>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TNumber */
cltype = type_nit__TNumber.color;
idtype = type_nit__TNumber.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TNumber", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6175);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADecIntExpr__n_number_61d]))(self, var_new_child); /* n_number= on <self:ADecIntExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADecIntExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AAnnotations>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype7 = type_nullable__nit__AAnnotations.color;
idtype8 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6179);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ADecIntExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#n_number= for (self: ADecIntExpr, TNumber) */
void nit__parser_prod___ADecIntExpr___n_number_61d(val* self, val* p0) {
val* var_node /* var node: TNumber */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val = var_node; /* _n_number on <self:ADecIntExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TNumber>*/
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#n_annotations= for (self: ADecIntExpr, nullable AAnnotations) */
void nit__parser_prod___ADecIntExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ADecIntExpr> */
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
/* method parser_prod#ADecIntExpr#visit_all for (self: ADecIntExpr, Visitor) */
void nit__parser_prod___ADecIntExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6198);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADecIntExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#init_ahexintexpr for (self: AHexIntExpr, nullable THexNumber, nullable AAnnotations) */
void nit__parser_prod___AHexIntExpr___init_ahexintexpr(val* self, val* p0, val* p1) {
val* var_n_hex_number /* var n_hex_number: nullable THexNumber */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AHexIntExpr>*/
}
var_n_hex_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_hex_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6208);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val = var_n_hex_number; /* _n_hex_number on <self:AHexIntExpr> */
if (var_n_hex_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6209);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_hex_number->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_hex_number, self); /* parent= on <var_n_hex_number:nullable THexNumber>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AHexIntExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#replace_child for (self: AHexIntExpr, ANode, nullable ANode) */
void nit__parser_prod___AHexIntExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : THexNumber */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AAnnotations */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6216);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:THexNumber>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa THexNumber */
cltype = type_nit__THexNumber.color;
idtype = type_nit__THexNumber.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "THexNumber", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6217);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AHexIntExpr__n_hex_number_61d]))(self, var_new_child); /* n_hex_number= on <self:AHexIntExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AHexIntExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AAnnotations>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype7 = type_nullable__nit__AAnnotations.color;
idtype8 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6221);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AHexIntExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#n_hex_number= for (self: AHexIntExpr, THexNumber) */
void nit__parser_prod___AHexIntExpr___n_hex_number_61d(val* self, val* p0) {
val* var_node /* var node: THexNumber */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val = var_node; /* _n_hex_number on <self:AHexIntExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:THexNumber>*/
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#n_annotations= for (self: AHexIntExpr, nullable AAnnotations) */
void nit__parser_prod___AHexIntExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AHexIntExpr> */
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
/* method parser_prod#AHexIntExpr#visit_all for (self: AHexIntExpr, Visitor) */
void nit__parser_prod___AHexIntExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : THexNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6240);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AHexIntExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#init_afloatexpr for (self: AFloatExpr, nullable TFloat, nullable AAnnotations) */
void nit__parser_prod___AFloatExpr___init_afloatexpr(val* self, val* p0, val* p1) {
val* var_n_float /* var n_float: nullable TFloat */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AFloatExpr>*/
}
var_n_float = p0;
var_n_annotations = p1;
if (unlikely(var_n_float == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6250);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val = var_n_float; /* _n_float on <self:AFloatExpr> */
if (var_n_float == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6251);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_float->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_float, self); /* parent= on <var_n_float:nullable TFloat>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFloatExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#replace_child for (self: AFloatExpr, ANode, nullable ANode) */
void nit__parser_prod___AFloatExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TFloat */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AAnnotations */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6258);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TFloat>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TFloat */
cltype = type_nit__TFloat.color;
idtype = type_nit__TFloat.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TFloat", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6259);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AFloatExpr__n_float_61d]))(self, var_new_child); /* n_float= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AAnnotations>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype7 = type_nullable__nit__AAnnotations.color;
idtype8 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6263);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_float= for (self: AFloatExpr, TFloat) */
void nit__parser_prod___AFloatExpr___n_float_61d(val* self, val* p0) {
val* var_node /* var node: TFloat */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val = var_node; /* _n_float on <self:AFloatExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TFloat>*/
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_annotations= for (self: AFloatExpr, nullable AAnnotations) */
void nit__parser_prod___AFloatExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFloatExpr> */
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
/* method parser_prod#AFloatExpr#visit_all for (self: AFloatExpr, Visitor) */
void nit__parser_prod___AFloatExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TFloat */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6282);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#init_acharexpr for (self: ACharExpr, nullable TChar, nullable AAnnotations) */
void nit__parser_prod___ACharExpr___init_acharexpr(val* self, val* p0, val* p1) {
val* var_n_char /* var n_char: nullable TChar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACharExpr>*/
}
var_n_char = p0;
var_n_annotations = p1;
if (unlikely(var_n_char == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6292);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val = var_n_char; /* _n_char on <self:ACharExpr> */
if (var_n_char == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6293);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_char->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_char, self); /* parent= on <var_n_char:nullable TChar>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACharExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#replace_child for (self: ACharExpr, ANode, nullable ANode) */
void nit__parser_prod___ACharExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TChar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AAnnotations */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6300);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TChar>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TChar */
cltype = type_nit__TChar.color;
idtype = type_nit__TChar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TChar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6301);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ACharExpr__n_char_61d]))(self, var_new_child); /* n_char= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AAnnotations>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype7 = type_nullable__nit__AAnnotations.color;
idtype8 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6305);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_char= for (self: ACharExpr, TChar) */
void nit__parser_prod___ACharExpr___n_char_61d(val* self, val* p0) {
val* var_node /* var node: TChar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val = var_node; /* _n_char on <self:ACharExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TChar>*/
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_annotations= for (self: ACharExpr, nullable AAnnotations) */
void nit__parser_prod___ACharExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACharExpr> */
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
/* method parser_prod#ACharExpr#visit_all for (self: ACharExpr, Visitor) */
void nit__parser_prod___ACharExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TChar */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6324);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#init_astringexpr for (self: AStringExpr, nullable TString, nullable AAnnotations) */
void nit__parser_prod___AStringExpr___init_astringexpr(val* self, val* p0, val* p1) {
val* var_n_string /* var n_string: nullable TString */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStringExpr>*/
}
var_n_string = p0;
var_n_annotations = p1;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6334);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6335);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_string->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_string, self); /* parent= on <var_n_string:nullable TString>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStringExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#replace_child for (self: AStringExpr, ANode, nullable ANode) */
void nit__parser_prod___AStringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable AAnnotations */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6342);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TString */
cltype = type_nit__TString.color;
idtype = type_nit__TString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6343);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AStringFormExpr__n_string_61d]))(self, var_new_child); /* n_string= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable AAnnotations>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype7 = type_nullable__nit__AAnnotations.color;
idtype8 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6347);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_string= for (self: AStringExpr, Token) */
void nit__parser_prod___AStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStringExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_annotations= for (self: AStringExpr, nullable AAnnotations) */
void nit__parser_prod___AStringExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStringExpr> */
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
/* method parser_prod#AStringExpr#visit_all for (self: AStringExpr, Visitor) */
void nit__parser_prod___AStringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6366);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#init_astartstringexpr for (self: AStartStringExpr, nullable TStartString) */
void nit__parser_prod___AStartStringExpr___init_astartstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TStartString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStartStringExpr>*/
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6375);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStartStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6376);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_string->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_string, self); /* parent= on <var_n_string:nullable TStartString>*/
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#replace_child for (self: AStartStringExpr, ANode, nullable ANode) */
void nit__parser_prod___AStartStringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6381);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TStartString */
cltype = type_nit__TStartString.color;
idtype = type_nit__TStartString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStartString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6382);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AStringFormExpr__n_string_61d]))(self, var_new_child); /* n_string= on <self:AStartStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#n_string= for (self: AStartStringExpr, Token) */
void nit__parser_prod___AStartStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStartStringExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#visit_all for (self: AStartStringExpr, Visitor) */
void nit__parser_prod___AStartStringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6396);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#init_amidstringexpr for (self: AMidStringExpr, nullable TMidString) */
void nit__parser_prod___AMidStringExpr___init_amidstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TMidString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AMidStringExpr>*/
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6404);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AMidStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6405);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_string->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_string, self); /* parent= on <var_n_string:nullable TMidString>*/
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#replace_child for (self: AMidStringExpr, ANode, nullable ANode) */
void nit__parser_prod___AMidStringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6410);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TMidString */
cltype = type_nit__TMidString.color;
idtype = type_nit__TMidString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMidString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6411);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AStringFormExpr__n_string_61d]))(self, var_new_child); /* n_string= on <self:AMidStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#n_string= for (self: AMidStringExpr, Token) */
void nit__parser_prod___AMidStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AMidStringExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#visit_all for (self: AMidStringExpr, Visitor) */
void nit__parser_prod___AMidStringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6425);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#init_aendstringexpr for (self: AEndStringExpr, nullable TEndString) */
void nit__parser_prod___AEndStringExpr___init_aendstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TEndString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AEndStringExpr>*/
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6433);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AEndStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6434);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_string->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_string, self); /* parent= on <var_n_string:nullable TEndString>*/
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#replace_child for (self: AEndStringExpr, ANode, nullable ANode) */
void nit__parser_prod___AEndStringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6439);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TEndString */
cltype = type_nit__TEndString.color;
idtype = type_nit__TEndString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TEndString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6440);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AStringFormExpr__n_string_61d]))(self, var_new_child); /* n_string= on <self:AEndStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#n_string= for (self: AEndStringExpr, Token) */
void nit__parser_prod___AEndStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AEndStringExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#visit_all for (self: AEndStringExpr, Visitor) */
void nit__parser_prod___AEndStringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6454);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#init_asuperstringexpr for (self: ASuperstringExpr, Collection[Object], nullable AAnnotations) */
void nit__parser_prod___ASuperstringExpr___init_asuperstringexpr(val* self, val* p0, val* p1) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : ANodes[AExpr] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASuperstringExpr>*/
}
var_n_exprs = p0;
var_n_annotations = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperstringExpr__n_exprs]))(self); /* n_exprs on <self:ASuperstringExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_exprs); /* unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperstringExpr> */
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#replace_child for (self: ASuperstringExpr, ANode, nullable ANode) */
void nit__parser_prod___ASuperstringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
short int var1 /* : Bool */;
val* var2 /* : nullable AAnnotations */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperstringExpr__n_exprs]))(self); /* n_exprs on <self:ASuperstringExpr>*/
}
{
var1 = ((short int(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var, var_old_child, var_new_child); /* replace_child on <var:ANodes[AExpr]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
if (var2 == NULL) {
var3 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_old_child); /* == on <var2:nullable AAnnotations>*/
var3 = var4;
}
if (var3){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype = type_nullable__nit__AAnnotations.color;
idtype = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6472);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ASuperstringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#n_annotations= for (self: ASuperstringExpr, nullable AAnnotations) */
void nit__parser_prod___ASuperstringExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperstringExpr> */
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
/* method parser_prod#ASuperstringExpr#visit_all for (self: ASuperstringExpr, Visitor) */
void nit__parser_prod___ASuperstringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperstringExpr__n_exprs]))(self); /* n_exprs on <self:ASuperstringExpr>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var, var_v); /* visit_all on <var:ANodes[AExpr]>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#init_aparexpr for (self: AParExpr, nullable TOpar, nullable AExpr, nullable TCpar, nullable AAnnotations) */
void nit__parser_prod___AParExpr___init_aparexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AParExpr>*/
}
var_n_opar = p0;
var_n_expr = p1;
var_n_cpar = p2;
var_n_annotations = p3;
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6498);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AParExpr> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6499);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_opar, self); /* parent= on <var_n_opar:nullable TOpar>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6500);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AParExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6501);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_expr, self); /* parent= on <var_n_expr:nullable AExpr>*/
}
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6502);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExpr> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6503);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cpar, self); /* parent= on <var_n_cpar:nullable TCpar>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#replace_child for (self: AParExpr, ANode, nullable ANode) */
void nit__parser_prod___AParExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOpar */;
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
val* var9 /* : TCpar */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var15 /* : nullable AAnnotations */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6510);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6511);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AParExpr__n_opar_61d]))(self, var_new_child); /* n_opar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6514);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6515);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AParExpr__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6518);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TCpar>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TCpar */
cltype12 = type_nit__TCpar.color;
idtype13 = type_nit__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCpar", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6519);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AParExpr__n_cpar_61d]))(self, var_new_child); /* n_cpar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
if (var15 == NULL) {
var16 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var17 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_old_child); /* == on <var15:nullable AAnnotations>*/
var16 = var17;
}
if (var16){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype19 = type_nullable__nit__AAnnotations.color;
idtype20 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6523);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_opar= for (self: AParExpr, TOpar) */
void nit__parser_prod___AParExpr___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val = var_node; /* _n_opar on <self:AParExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TOpar>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_expr= for (self: AParExpr, AExpr) */
void nit__parser_prod___AParExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val = var_node; /* _n_expr on <self:AParExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AExpr>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_cpar= for (self: AParExpr, TCpar) */
void nit__parser_prod___AParExpr___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val = var_node; /* _n_cpar on <self:AParExpr> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TCpar>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_annotations= for (self: AParExpr, nullable AAnnotations) */
void nit__parser_prod___AParExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParExpr> */
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
