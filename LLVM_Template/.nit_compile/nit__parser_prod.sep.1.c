#include "nit__parser_prod.sep.0.h"
/* method parser_prod#AModule#init_amodule for (self: AModule, nullable AModuledecl, Collection[Object], Collection[Object], Collection[Object]) */
void nit__parser_prod___AModule___init_amodule(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_moduledecl /* var n_moduledecl: nullable AModuledecl */;
val* var_n_imports /* var n_imports: Collection[Object] */;
val* var_n_extern_code_blocks /* var n_extern_code_blocks: Collection[Object] */;
val* var_n_classdefs /* var n_classdefs: Collection[Object] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : ANodes[AImport] */;
val* var3 /* : ANodes[AExternCodeBlock] */;
val* var4 /* : ANodes[AClassdef] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AModule>*/
}
var_n_moduledecl = p0;
var_n_imports = p1;
var_n_extern_code_blocks = p2;
var_n_classdefs = p3;
self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val = var_n_moduledecl; /* _n_moduledecl on <self:AModule> */
if (var_n_moduledecl == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_moduledecl->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_moduledecl, ((val*)NULL)); /* != on <var_n_moduledecl:nullable AModuledecl>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_moduledecl->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_moduledecl, self); /* parent= on <var_n_moduledecl:nullable AModuledecl(AModuledecl)>*/
}
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_imports]))(self); /* n_imports on <self:AModule>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var2, var_n_imports); /* unsafe_add_all on <var2:ANodes[AImport]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_extern_code_blocks]))(self); /* n_extern_code_blocks on <self:AModule>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var3, var_n_extern_code_blocks); /* unsafe_add_all on <var3:ANodes[AExternCodeBlock]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(self); /* n_classdefs on <self:AModule>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var4, var_n_classdefs); /* unsafe_add_all on <var4:ANodes[AClassdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AModule#replace_child for (self: AModule, ANode, nullable ANode) */
void nit__parser_prod___AModule___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AModuledecl */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : ANodes[AImport] */;
short int var5 /* : Bool */;
val* var6 /* : ANodes[AExternCodeBlock] */;
short int var7 /* : Bool */;
val* var8 /* : ANodes[AClassdef] */;
short int var9 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable AModuledecl>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AModuledecl", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 27);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_moduledecl_61d]))(self, var_new_child); /* n_moduledecl= on <self:AModule>*/
}
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_imports]))(self); /* n_imports on <self:AModule>*/
}
{
var5 = ((short int(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var4, var_old_child, var_new_child); /* replace_child on <var4:ANodes[AImport]>*/
}
if (var5){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_extern_code_blocks]))(self); /* n_extern_code_blocks on <self:AModule>*/
}
{
var7 = ((short int(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var6, var_old_child, var_new_child); /* replace_child on <var6:ANodes[AExternCodeBlock]>*/
}
if (var7){
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(self); /* n_classdefs on <self:AModule>*/
}
{
var9 = ((short int(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var8, var_old_child, var_new_child); /* replace_child on <var8:ANodes[AClassdef]>*/
}
if (var9){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModule#n_moduledecl= for (self: AModule, nullable AModuledecl) */
void nit__parser_prod___AModule___n_moduledecl_61d(val* self, val* p0) {
val* var_node /* var node: nullable AModuledecl */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val = var_node; /* _n_moduledecl on <self:AModule> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AModuledecl>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AModuledecl(AModuledecl)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModule#visit_all for (self: AModule, Visitor) */
void nit__parser_prod___AModule___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AModuledecl */;
val* var1 /* : ANodes[AImport] */;
val* var2 /* : ANodes[AExternCodeBlock] */;
val* var3 /* : ANodes[AClassdef] */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_imports]))(self); /* n_imports on <self:AModule>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var1, var_v); /* visit_all on <var1:ANodes[AImport]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_extern_code_blocks]))(self); /* n_extern_code_blocks on <self:AModule>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var2, var_v); /* visit_all on <var2:ANodes[AExternCodeBlock]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(self); /* n_classdefs on <self:AModule>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var3, var_v); /* visit_all on <var3:ANodes[AClassdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#init_amoduledecl for (self: AModuledecl, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmodule, nullable AModuleName, nullable AAnnotations) */
void nit__parser_prod___AModuledecl___init_amoduledecl(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmodule /* var n_kwmodule: nullable TKwmodule */;
val* var_n_name /* var n_name: nullable AModuleName */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AModuledecl>*/
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmodule = p3;
var_n_name = p4;
var_n_annotations = p5;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AModuledecl> */
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
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AModuledecl> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 64);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AModuledecl> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 65);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_visibility, self); /* parent= on <var_n_visibility:nullable AVisibility>*/
}
if (unlikely(var_n_kwmodule == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 66);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val = var_n_kwmodule; /* _n_kwmodule on <self:AModuledecl> */
if (var_n_kwmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 67);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwmodule->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwmodule, self); /* parent= on <var_n_kwmodule:nullable TKwmodule>*/
}
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 68);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val = var_n_name; /* _n_name on <self:AModuledecl> */
if (var_n_name == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 69);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_name->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_name, self); /* parent= on <var_n_name:nullable AModuleName>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AModuledecl> */
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
/* method parser_prod#AModuledecl#replace_child for (self: AModuledecl, ANode, nullable ANode) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var18 /* : TKwmodule */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : AModuleName */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AAnnotations */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AModuledecl> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 77);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc_61d]))(self, var_new_child); /* n_doc= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AModuledecl> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 81);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AModuledecl> */
if (var11 == NULL) {
var12 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_old_child); /* == on <var11:nullable AVisibility>*/
var12 = var13;
}
if (var12){
/* <var_new_child:nullable ANode> isa AVisibility */
cltype15 = type_nit__AVisibility.color;
idtype16 = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 85);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 88);
fatal_exit(1);
}
{
var19 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_old_child); /* == on <var18:TKwmodule>*/
}
if (var19){
/* <var_new_child:nullable ANode> isa TKwmodule */
cltype21 = type_nit__TKwmodule.color;
idtype22 = type_nit__TKwmodule.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwmodule", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 89);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AModuledecl__n_kwmodule_61d]))(self, var_new_child); /* n_kwmodule= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 92);
fatal_exit(1);
}
{
var25 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var24, var_old_child); /* == on <var24:AModuleName>*/
}
if (var25){
/* <var_new_child:nullable ANode> isa AModuleName */
cltype27 = type_nit__AModuleName.color;
idtype28 = type_nit__AModuleName.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModuleName", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 93);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AModuledecl__n_name_61d]))(self, var_new_child); /* n_name= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var32 = ((short int(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var30, var_old_child); /* == on <var30:nullable AAnnotations>*/
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype34 = type_nullable__nit__AAnnotations.color;
idtype35 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_new_child->type->table_size) {
var33 = 0;
} else {
var33 = var_new_child->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
var_class_name36 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 97);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_doc= for (self: AModuledecl, nullable ADoc) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AModuledecl> */
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
/* method parser_prod#AModuledecl#n_kwredef= for (self: AModuledecl, nullable TKwredef) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AModuledecl> */
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
/* method parser_prod#AModuledecl#n_visibility= for (self: AModuledecl, nullable AVisibility) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AModuledecl> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 115);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AVisibility>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_kwmodule= for (self: AModuledecl, TKwmodule) */
void nit__parser_prod___AModuledecl___n_kwmodule_61d(val* self, val* p0) {
val* var_node /* var node: TKwmodule */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val = var_node; /* _n_kwmodule on <self:AModuledecl> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwmodule>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_name= for (self: AModuledecl, AModuleName) */
void nit__parser_prod___AModuledecl___n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val = var_node; /* _n_name on <self:AModuledecl> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AModuleName>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_annotations= for (self: AModuledecl, nullable AAnnotations) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AModuledecl> */
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
/* method parser_prod#AModuledecl#visit_all for (self: AModuledecl, Visitor) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwmodule */;
val* var4 /* : AModuleName */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AModuledecl> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AModuledecl> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AModuledecl> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 139);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 140);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var5); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#init_astdimport for (self: AStdImport, nullable AVisibility, nullable TKwimport, nullable AModuleName, nullable AAnnotations) */
void nit__parser_prod___AStdImport___init_astdimport(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_name /* var n_name: nullable AModuleName */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStdImport>*/
}
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_name = p2;
var_n_annotations = p3;
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 152);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdImport> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 153);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_visibility, self); /* parent= on <var_n_visibility:nullable AVisibility>*/
}
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 154);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AStdImport> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 155);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwimport->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwimport, self); /* parent= on <var_n_kwimport:nullable TKwimport>*/
}
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 156);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val = var_n_name; /* _n_name on <self:AStdImport> */
if (var_n_name == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 157);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_name->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_name, self); /* parent= on <var_n_name:nullable AModuleName>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStdImport> */
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
/* method parser_prod#AStdImport#replace_child for (self: AStdImport, ANode, nullable ANode) */
void nit__parser_prod___AStdImport___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AVisibility */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwimport */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : AModuleName */;
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
var = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 164);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AVisibility>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AVisibility */
cltype = type_nit__AVisibility.color;
idtype = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 165);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AImport__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 168);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwimport>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwimport */
cltype6 = type_nit__TKwimport.color;
idtype7 = type_nit__TKwimport.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 169);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AImport__n_kwimport_61d]))(self, var_new_child); /* n_kwimport= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 172);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:AModuleName>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa AModuleName */
cltype12 = type_nit__AModuleName.color;
idtype13 = type_nit__AModuleName.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModuleName", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 173);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AStdImport__n_name_61d]))(self, var_new_child); /* n_name= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 177);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_visibility= for (self: AStdImport, AVisibility) */
void nit__parser_prod___AStdImport___nit__parser_nodes__AImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val = var_node; /* _n_visibility on <self:AStdImport> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AVisibility>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_kwimport= for (self: AStdImport, TKwimport) */
void nit__parser_prod___AStdImport___nit__parser_nodes__AImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val = var_node; /* _n_kwimport on <self:AStdImport> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwimport>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_name= for (self: AStdImport, AModuleName) */
void nit__parser_prod___AStdImport___n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val = var_node; /* _n_name on <self:AStdImport> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AModuleName>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_annotations= for (self: AStdImport, nullable AAnnotations) */
void nit__parser_prod___AStdImport___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStdImport> */
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
/* method parser_prod#AStdImport#visit_all for (self: AStdImport, Visitor) */
void nit__parser_prod___AStdImport___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : AModuleName */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 206);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 207);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 208);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#init_anoimport for (self: ANoImport, nullable AVisibility, nullable TKwimport, nullable TKwend) */
void nit__parser_prod___ANoImport___init_anoimport(val* self, val* p0, val* p1, val* p2) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ANoImport>*/
}
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_kwend = p2;
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 219);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ANoImport> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 220);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_visibility, self); /* parent= on <var_n_visibility:nullable AVisibility>*/
}
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 221);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:ANoImport> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 222);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwimport->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwimport, self); /* parent= on <var_n_kwimport:nullable TKwimport>*/
}
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 223);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ANoImport> */
if (var_n_kwend == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 224);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwend->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwend, self); /* parent= on <var_n_kwend:nullable TKwend>*/
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#replace_child for (self: ANoImport, ANode, nullable ANode) */
void nit__parser_prod___ANoImport___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AVisibility */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwimport */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : TKwend */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 229);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:AVisibility>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa AVisibility */
cltype = type_nit__AVisibility.color;
idtype = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 230);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AImport__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 233);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwimport>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwimport */
cltype6 = type_nit__TKwimport.color;
idtype7 = type_nit__TKwimport.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 234);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AImport__n_kwimport_61d]))(self, var_new_child); /* n_kwimport= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 237);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_old_child); /* == on <var9:TKwend>*/
}
if (var10){
/* <var_new_child:nullable ANode> isa TKwend */
cltype12 = type_nit__TKwend.color;
idtype13 = type_nit__TKwend.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwend", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 238);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANoImport__n_kwend_61d]))(self, var_new_child); /* n_kwend= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_visibility= for (self: ANoImport, AVisibility) */
void nit__parser_prod___ANoImport___nit__parser_nodes__AImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val = var_node; /* _n_visibility on <self:ANoImport> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AVisibility>*/
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwimport= for (self: ANoImport, TKwimport) */
void nit__parser_prod___ANoImport___nit__parser_nodes__AImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val = var_node; /* _n_kwimport on <self:ANoImport> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwimport>*/
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwend= for (self: ANoImport, TKwend) */
void nit__parser_prod___ANoImport___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val = var_node; /* _n_kwend on <self:ANoImport> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwend>*/
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#visit_all for (self: ANoImport, Visitor) */
void nit__parser_prod___ANoImport___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : TKwend */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 262);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 263);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 264);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#init_apublicvisibility for (self: APublicVisibility, nullable TKwpublic) */
void nit__parser_prod___APublicVisibility___init_apublicvisibility(val* self, val* p0) {
val* var_n_kwpublic /* var n_kwpublic: nullable TKwpublic */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__APublicVisibility__n_kwpublic_61d]))(self, p0); /* n_kwpublic= on <self:APublicVisibility>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APublicVisibility>*/
}
var_n_kwpublic = p0;
self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val = var_n_kwpublic; /* _n_kwpublic on <self:APublicVisibility> */
if (var_n_kwpublic == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_kwpublic->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwpublic, ((val*)NULL)); /* != on <var_n_kwpublic:nullable TKwpublic>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_kwpublic->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwpublic, self); /* parent= on <var_n_kwpublic:nullable TKwpublic(TKwpublic)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#replace_child for (self: APublicVisibility, ANode, nullable ANode) */
void nit__parser_prod___APublicVisibility___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwpublic */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val; /* _n_kwpublic on <self:APublicVisibility> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TKwpublic>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TKwpublic */
cltype = type_nullable__nit__TKwpublic.color;
idtype = type_nullable__nit__TKwpublic.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwpublic", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 279);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__APublicVisibility__n_kwpublic_61d]))(self, var_new_child); /* n_kwpublic= on <self:APublicVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#n_kwpublic= for (self: APublicVisibility, nullable TKwpublic) */
void nit__parser_prod___APublicVisibility___n_kwpublic_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwpublic */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val = var_node; /* _n_kwpublic on <self:APublicVisibility> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwpublic>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwpublic(TKwpublic)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#visit_all for (self: APublicVisibility, Visitor) */
void nit__parser_prod___APublicVisibility___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwpublic */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val; /* _n_kwpublic on <self:APublicVisibility> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#init_aprivatevisibility for (self: APrivateVisibility, nullable TKwprivate) */
void nit__parser_prod___APrivateVisibility___init_aprivatevisibility(val* self, val* p0) {
val* var_n_kwprivate /* var n_kwprivate: nullable TKwprivate */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APrivateVisibility>*/
}
var_n_kwprivate = p0;
if (unlikely(var_n_kwprivate == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 301);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val = var_n_kwprivate; /* _n_kwprivate on <self:APrivateVisibility> */
if (var_n_kwprivate == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 302);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwprivate->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwprivate, self); /* parent= on <var_n_kwprivate:nullable TKwprivate>*/
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#replace_child for (self: APrivateVisibility, ANode, nullable ANode) */
void nit__parser_prod___APrivateVisibility___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwprivate */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprivate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 307);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwprivate>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwprivate */
cltype = type_nit__TKwprivate.color;
idtype = type_nit__TKwprivate.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwprivate", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 308);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__APrivateVisibility__n_kwprivate_61d]))(self, var_new_child); /* n_kwprivate= on <self:APrivateVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#n_kwprivate= for (self: APrivateVisibility, TKwprivate) */
void nit__parser_prod___APrivateVisibility___n_kwprivate_61d(val* self, val* p0) {
val* var_node /* var node: TKwprivate */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val = var_node; /* _n_kwprivate on <self:APrivateVisibility> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwprivate>*/
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#visit_all for (self: APrivateVisibility, Visitor) */
void nit__parser_prod___APrivateVisibility___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprivate */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprivate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 322);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#init_aprotectedvisibility for (self: AProtectedVisibility, nullable TKwprotected) */
void nit__parser_prod___AProtectedVisibility___init_aprotectedvisibility(val* self, val* p0) {
val* var_n_kwprotected /* var n_kwprotected: nullable TKwprotected */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AProtectedVisibility>*/
}
var_n_kwprotected = p0;
if (unlikely(var_n_kwprotected == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 330);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val = var_n_kwprotected; /* _n_kwprotected on <self:AProtectedVisibility> */
if (var_n_kwprotected == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 331);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwprotected->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwprotected, self); /* parent= on <var_n_kwprotected:nullable TKwprotected>*/
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#replace_child for (self: AProtectedVisibility, ANode, nullable ANode) */
void nit__parser_prod___AProtectedVisibility___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwprotected */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprotected");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 336);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwprotected>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwprotected */
cltype = type_nit__TKwprotected.color;
idtype = type_nit__TKwprotected.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwprotected", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 337);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AProtectedVisibility__n_kwprotected_61d]))(self, var_new_child); /* n_kwprotected= on <self:AProtectedVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#n_kwprotected= for (self: AProtectedVisibility, TKwprotected) */
void nit__parser_prod___AProtectedVisibility___n_kwprotected_61d(val* self, val* p0) {
val* var_node /* var node: TKwprotected */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val = var_node; /* _n_kwprotected on <self:AProtectedVisibility> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwprotected>*/
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#visit_all for (self: AProtectedVisibility, Visitor) */
void nit__parser_prod___AProtectedVisibility___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprotected */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprotected");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 351);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#init_aintrudevisibility for (self: AIntrudeVisibility, nullable TKwintrude) */
void nit__parser_prod___AIntrudeVisibility___init_aintrudevisibility(val* self, val* p0) {
val* var_n_kwintrude /* var n_kwintrude: nullable TKwintrude */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AIntrudeVisibility>*/
}
var_n_kwintrude = p0;
if (unlikely(var_n_kwintrude == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 359);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_n_kwintrude; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (var_n_kwintrude == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 360);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwintrude->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwintrude, self); /* parent= on <var_n_kwintrude:nullable TKwintrude>*/
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#replace_child for (self: AIntrudeVisibility, ANode, nullable ANode) */
void nit__parser_prod___AIntrudeVisibility___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwintrude */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwintrude");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 365);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwintrude>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwintrude */
cltype = type_nit__TKwintrude.color;
idtype = type_nit__TKwintrude.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwintrude", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 366);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIntrudeVisibility__n_kwintrude_61d]))(self, var_new_child); /* n_kwintrude= on <self:AIntrudeVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#n_kwintrude= for (self: AIntrudeVisibility, TKwintrude) */
void nit__parser_prod___AIntrudeVisibility___n_kwintrude_61d(val* self, val* p0) {
val* var_node /* var node: TKwintrude */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_node; /* _n_kwintrude on <self:AIntrudeVisibility> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwintrude>*/
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#visit_all for (self: AIntrudeVisibility, Visitor) */
void nit__parser_prod___AIntrudeVisibility___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwintrude */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwintrude");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 380);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#init_astdclassdef for (self: AStdClassdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AClasskind, nullable TClassid, Collection[Object], nullable AExternCodeBlock, Collection[Object], nullable TKwend) */
void nit__parser_prod___AStdClassdef___init_astdclassdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_classkind /* var n_classkind: nullable AClasskind */;
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_formaldefs /* var n_formaldefs: Collection[Object] */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : ANodes[AFormaldef] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ANodes[APropdef] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStdClassdef>*/
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_classkind = p3;
var_n_id = p4;
var_n_formaldefs = p5;
var_n_extern_code_block = p6;
var_n_propdefs = p7;
var_n_kwend = p8;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AStdClassdef> */
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
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AStdClassdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 400);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdClassdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 401);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_visibility, self); /* parent= on <var_n_visibility:nullable AVisibility>*/
}
if (unlikely(var_n_classkind == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 402);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val = var_n_classkind; /* _n_classkind on <self:AStdClassdef> */
if (var_n_classkind == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 403);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_classkind->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_classkind, self); /* parent= on <var_n_classkind:nullable AClasskind>*/
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val = var_n_id; /* _n_id on <self:AStdClassdef> */
if (var_n_id == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_id, ((val*)NULL)); /* != on <var_n_id:nullable TClassid>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TClassid(TClassid)>*/
}
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_formaldefs]))(self); /* n_formaldefs on <self:AStdClassdef>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var6, var_n_formaldefs); /* unsafe_add_all on <var6:ANodes[AFormaldef]>*/
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AStdClassdef> */
if (var_n_extern_code_block == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_n_extern_code_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_extern_code_block, ((val*)NULL)); /* != on <var_n_extern_code_block:nullable AExternCodeBlock>*/
var7 = var8;
}
if (var7){
{
((void(*)(val* self, val* p0))(var_n_extern_code_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_extern_code_block, self); /* parent= on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:AStdClassdef>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var9, var_n_propdefs); /* unsafe_add_all on <var9:ANodes[APropdef]>*/
}
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 410);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val = var_n_kwend; /* _n_kwend on <self:AStdClassdef> */
if (var_n_kwend == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 411);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwend->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwend, self); /* parent= on <var_n_kwend:nullable TKwend>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#replace_child for (self: AStdClassdef, ANode, nullable ANode) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var18 /* : AClasskind */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : nullable TClassid */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
val* var31 /* : ANodes[AFormaldef] */;
short int var32 /* : Bool */;
val* var33 /* : nullable AExternCodeBlock */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : ANodes[APropdef] */;
short int var41 /* : Bool */;
val* var42 /* : TKwend */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AStdClassdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 417);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc_61d]))(self, var_new_child); /* n_doc= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 421);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
if (var11 == NULL) {
var12 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_old_child); /* == on <var11:nullable AVisibility>*/
var12 = var13;
}
if (var12){
/* <var_new_child:nullable ANode> isa AVisibility */
cltype15 = type_nit__AVisibility.color;
idtype16 = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 425);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 428);
fatal_exit(1);
}
{
var19 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_old_child); /* == on <var18:AClasskind>*/
}
if (var19){
/* <var_new_child:nullable ANode> isa AClasskind */
cltype21 = type_nit__AClasskind.color;
idtype22 = type_nit__AClasskind.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AClasskind", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 429);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_classkind_61d]))(self, var_new_child); /* n_classkind= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
if (var24 == NULL) {
var25 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var26 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var24, var_old_child); /* == on <var24:nullable TClassid>*/
var25 = var26;
}
if (var25){
/* <var_new_child:nullable ANode> isa nullable TClassid */
cltype28 = type_nullable__nit__TClassid.color;
idtype29 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TClassid", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 433);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_id_61d]))(self, var_new_child); /* n_id= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_formaldefs]))(self); /* n_formaldefs on <self:AStdClassdef>*/
}
{
var32 = ((short int(*)(val* self, val* p0, val* p1))(var31->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var31, var_old_child, var_new_child); /* replace_child on <var31:ANodes[AFormaldef]>*/
}
if (var32){
goto RET_LABEL;
} else {
}
var33 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
if (var33 == NULL) {
var34 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var35 = ((short int(*)(val* self, val* p0))(var33->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var33, var_old_child); /* == on <var33:nullable AExternCodeBlock>*/
var34 = var35;
}
if (var34){
/* <var_new_child:nullable ANode> isa nullable AExternCodeBlock */
cltype37 = type_nullable__nit__AExternCodeBlock.color;
idtype38 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCodeBlock", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 438);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_extern_code_block_61d]))(self, var_new_child); /* n_extern_code_block= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:AStdClassdef>*/
}
{
var41 = ((short int(*)(val* self, val* p0, val* p1))(var40->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var40, var_old_child, var_new_child); /* replace_child on <var40:ANodes[APropdef]>*/
}
if (var41){
goto RET_LABEL;
} else {
}
var42 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 442);
fatal_exit(1);
}
{
var43 = ((short int(*)(val* self, val* p0))(var42->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var42, var_old_child); /* == on <var42:TKwend>*/
}
if (var43){
/* <var_new_child:nullable ANode> isa TKwend */
cltype45 = type_nit__TKwend.color;
idtype46 = type_nit__TKwend.id;
if(var_new_child == NULL) {
var44 = 0;
} else {
if(cltype45 >= var_new_child->type->table_size) {
var44 = 0;
} else {
var44 = var_new_child->type->type_table[cltype45] == idtype46;
}
}
if (unlikely(!var44)) {
var_class_name47 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwend", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 443);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_kwend_61d]))(self, var_new_child); /* n_kwend= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_doc= for (self: AStdClassdef, nullable ADoc) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AStdClassdef> */
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
/* method parser_prod#AStdClassdef#n_kwredef= for (self: AStdClassdef, nullable TKwredef) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AStdClassdef> */
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
/* method parser_prod#AStdClassdef#n_visibility= for (self: AStdClassdef, nullable AVisibility) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AStdClassdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 461);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AVisibility>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_classkind= for (self: AStdClassdef, AClasskind) */
void nit__parser_prod___AStdClassdef___n_classkind_61d(val* self, val* p0) {
val* var_node /* var node: AClasskind */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val = var_node; /* _n_classkind on <self:AStdClassdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AClasskind>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_id= for (self: AStdClassdef, nullable TClassid) */
void nit__parser_prod___AStdClassdef___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TClassid */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val = var_node; /* _n_id on <self:AStdClassdef> */
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
/* method parser_prod#AStdClassdef#n_extern_code_block= for (self: AStdClassdef, nullable AExternCodeBlock) */
void nit__parser_prod___AStdClassdef___n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AStdClassdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExternCodeBlock>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwend= for (self: AStdClassdef, TKwend) */
void nit__parser_prod___AStdClassdef___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val = var_node; /* _n_kwend on <self:AStdClassdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwend>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#visit_all for (self: AStdClassdef, Visitor) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : AClasskind */;
val* var4 /* : nullable TClassid */;
val* var5 /* : ANodes[AFormaldef] */;
val* var6 /* : nullable AExternCodeBlock */;
val* var7 /* : ANodes[APropdef] */;
val* var8 /* : TKwend */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AStdClassdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 490);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_formaldefs]))(self); /* n_formaldefs on <self:AStdClassdef>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var5, var_v); /* visit_all on <var5:ANodes[AFormaldef]>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var6); /* enter_visit on <var_v:Visitor>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:AStdClassdef>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var7, var_v); /* visit_all on <var7:ANodes[APropdef]>*/
}
var8 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 495);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var8); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#init_atopclassdef for (self: ATopClassdef, Collection[Object]) */
void nit__parser_prod___ATopClassdef___init_atopclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : ANodes[APropdef] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ATopClassdef>*/
}
var_n_propdefs = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:ATopClassdef>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_propdefs); /* unsafe_add_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#replace_child for (self: ATopClassdef, ANode, nullable ANode) */
void nit__parser_prod___ATopClassdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[APropdef] */;
short int var1 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:ATopClassdef>*/
}
{
var1 = ((short int(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var, var_old_child, var_new_child); /* replace_child on <var:ANodes[APropdef]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#visit_all for (self: ATopClassdef, Visitor) */
void nit__parser_prod___ATopClassdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:ATopClassdef>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var, var_v); /* visit_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#init_amainclassdef for (self: AMainClassdef, Collection[Object]) */
void nit__parser_prod___AMainClassdef___init_amainclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : ANodes[APropdef] */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AMainClassdef>*/
}
var_n_propdefs = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:AMainClassdef>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var, var_n_propdefs); /* unsafe_add_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#replace_child for (self: AMainClassdef, ANode, nullable ANode) */
void nit__parser_prod___AMainClassdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[APropdef] */;
short int var1 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:AMainClassdef>*/
}
{
var1 = ((short int(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var, var_old_child, var_new_child); /* replace_child on <var:ANodes[APropdef]>*/
}
if (var1){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#visit_all for (self: AMainClassdef, Visitor) */
void nit__parser_prod___AMainClassdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:AMainClassdef>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var, var_v); /* visit_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#init_aconcreteclasskind for (self: AConcreteClasskind, nullable TKwclass) */
void nit__parser_prod___AConcreteClasskind___init_aconcreteclasskind(val* self, val* p0) {
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AConcreteClasskind>*/
}
var_n_kwclass = p0;
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 543);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AConcreteClasskind> */
if (var_n_kwclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 544);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwclass->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwclass, self); /* parent= on <var_n_kwclass:nullable TKwclass>*/
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#replace_child for (self: AConcreteClasskind, ANode, nullable ANode) */
void nit__parser_prod___AConcreteClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwclass */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 549);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwclass>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwclass */
cltype = type_nit__TKwclass.color;
idtype = type_nit__TKwclass.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwclass", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 550);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AConcreteClasskind__n_kwclass_61d]))(self, var_new_child); /* n_kwclass= on <self:AConcreteClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#n_kwclass= for (self: AConcreteClasskind, TKwclass) */
void nit__parser_prod___AConcreteClasskind___n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AConcreteClasskind> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwclass>*/
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#visit_all for (self: AConcreteClasskind, Visitor) */
void nit__parser_prod___AConcreteClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 564);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#init_aabstractclasskind for (self: AAbstractClasskind, nullable TKwabstract, nullable TKwclass) */
void nit__parser_prod___AAbstractClasskind___init_aabstractclasskind(val* self, val* p0, val* p1) {
val* var_n_kwabstract /* var n_kwabstract: nullable TKwabstract */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAbstractClasskind>*/
}
var_n_kwabstract = p0;
var_n_kwclass = p1;
if (unlikely(var_n_kwabstract == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 573);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val = var_n_kwabstract; /* _n_kwabstract on <self:AAbstractClasskind> */
if (var_n_kwabstract == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 574);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwabstract->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwabstract, self); /* parent= on <var_n_kwabstract:nullable TKwabstract>*/
}
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 575);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AAbstractClasskind> */
if (var_n_kwclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 576);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwclass->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwclass, self); /* parent= on <var_n_kwclass:nullable TKwclass>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#replace_child for (self: AAbstractClasskind, ANode, nullable ANode) */
void nit__parser_prod___AAbstractClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwabstract */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TKwclass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabstract");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 581);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwabstract>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 582);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAbstractClasskind__n_kwabstract_61d]))(self, var_new_child); /* n_kwabstract= on <self:AAbstractClasskind>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 585);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TKwclass>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TKwclass */
cltype6 = type_nit__TKwclass.color;
idtype7 = type_nit__TKwclass.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwclass", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 586);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAbstractClasskind__n_kwclass_61d]))(self, var_new_child); /* n_kwclass= on <self:AAbstractClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwabstract= for (self: AAbstractClasskind, TKwabstract) */
void nit__parser_prod___AAbstractClasskind___n_kwabstract_61d(val* self, val* p0) {
val* var_node /* var node: TKwabstract */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val = var_node; /* _n_kwabstract on <self:AAbstractClasskind> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwabstract>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwclass= for (self: AAbstractClasskind, TKwclass) */
void nit__parser_prod___AAbstractClasskind___n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AAbstractClasskind> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwclass>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#visit_all for (self: AAbstractClasskind, Visitor) */
void nit__parser_prod___AAbstractClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabstract */;
val* var1 /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabstract");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 605);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 606);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#init_ainterfaceclasskind for (self: AInterfaceClasskind, nullable TKwinterface) */
void nit__parser_prod___AInterfaceClasskind___init_ainterfaceclasskind(val* self, val* p0) {
val* var_n_kwinterface /* var n_kwinterface: nullable TKwinterface */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AInterfaceClasskind>*/
}
var_n_kwinterface = p0;
if (unlikely(var_n_kwinterface == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 614);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_n_kwinterface; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (var_n_kwinterface == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 615);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwinterface->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwinterface, self); /* parent= on <var_n_kwinterface:nullable TKwinterface>*/
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#replace_child for (self: AInterfaceClasskind, ANode, nullable ANode) */
void nit__parser_prod___AInterfaceClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwinterface */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinterface");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 620);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwinterface>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwinterface */
cltype = type_nit__TKwinterface.color;
idtype = type_nit__TKwinterface.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwinterface", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 621);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AInterfaceClasskind__n_kwinterface_61d]))(self, var_new_child); /* n_kwinterface= on <self:AInterfaceClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#n_kwinterface= for (self: AInterfaceClasskind, TKwinterface) */
void nit__parser_prod___AInterfaceClasskind___n_kwinterface_61d(val* self, val* p0) {
val* var_node /* var node: TKwinterface */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_node; /* _n_kwinterface on <self:AInterfaceClasskind> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwinterface>*/
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#visit_all for (self: AInterfaceClasskind, Visitor) */
void nit__parser_prod___AInterfaceClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwinterface */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinterface");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 635);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#init_aenumclasskind for (self: AEnumClasskind, nullable TKwenum) */
void nit__parser_prod___AEnumClasskind___init_aenumclasskind(val* self, val* p0) {
val* var_n_kwenum /* var n_kwenum: nullable TKwenum */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AEnumClasskind>*/
}
var_n_kwenum = p0;
if (unlikely(var_n_kwenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 643);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val = var_n_kwenum; /* _n_kwenum on <self:AEnumClasskind> */
if (var_n_kwenum == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 644);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwenum->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwenum, self); /* parent= on <var_n_kwenum:nullable TKwenum>*/
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#replace_child for (self: AEnumClasskind, ANode, nullable ANode) */
void nit__parser_prod___AEnumClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwenum */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 649);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwenum>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwenum */
cltype = type_nit__TKwenum.color;
idtype = type_nit__TKwenum.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwenum", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 650);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AEnumClasskind__n_kwenum_61d]))(self, var_new_child); /* n_kwenum= on <self:AEnumClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#n_kwenum= for (self: AEnumClasskind, TKwenum) */
void nit__parser_prod___AEnumClasskind___n_kwenum_61d(val* self, val* p0) {
val* var_node /* var node: TKwenum */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val = var_node; /* _n_kwenum on <self:AEnumClasskind> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwenum>*/
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#visit_all for (self: AEnumClasskind, Visitor) */
void nit__parser_prod___AEnumClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwenum */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 664);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#init_aexternclasskind for (self: AExternClasskind, nullable TKwextern, nullable TKwclass) */
void nit__parser_prod___AExternClasskind___init_aexternclasskind(val* self, val* p0, val* p1) {
val* var_n_kwextern /* var n_kwextern: nullable TKwextern */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
short int var /* : Bool */;
short int var1 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AExternClasskind>*/
}
var_n_kwextern = p0;
var_n_kwclass = p1;
if (unlikely(var_n_kwextern == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 673);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val = var_n_kwextern; /* _n_kwextern on <self:AExternClasskind> */
if (var_n_kwextern == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 674);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwextern->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwextern, self); /* parent= on <var_n_kwextern:nullable TKwextern>*/
}
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AExternClasskind> */
if (var_n_kwclass == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_kwclass->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwclass, ((val*)NULL)); /* != on <var_n_kwclass:nullable TKwclass>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_kwclass->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwclass, self); /* parent= on <var_n_kwclass:nullable TKwclass(TKwclass)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#replace_child for (self: AExternClasskind, ANode, nullable ANode) */
void nit__parser_prod___AExternClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwextern */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : nullable TKwclass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwextern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 681);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TKwextern>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 682);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AExternClasskind__n_kwextern_61d]))(self, var_new_child); /* n_kwextern= on <self:AExternClasskind>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
if (var3 == NULL) {
var4 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:nullable TKwclass>*/
var4 = var5;
}
if (var4){
/* <var_new_child:nullable ANode> isa nullable TKwclass */
cltype7 = type_nullable__nit__TKwclass.color;
idtype8 = type_nullable__nit__TKwclass.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwclass", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 686);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AExternClasskind__n_kwclass_61d]))(self, var_new_child); /* n_kwclass= on <self:AExternClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwextern= for (self: AExternClasskind, TKwextern) */
void nit__parser_prod___AExternClasskind___n_kwextern_61d(val* self, val* p0) {
val* var_node /* var node: TKwextern */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val = var_node; /* _n_kwextern on <self:AExternClasskind> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwextern>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwclass= for (self: AExternClasskind, nullable TKwclass) */
void nit__parser_prod___AExternClasskind___n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwclass */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AExternClasskind> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwclass>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwclass(TKwclass)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#visit_all for (self: AExternClasskind, Visitor) */
void nit__parser_prod___AExternClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwextern */;
val* var1 /* : nullable TKwclass */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwextern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 705);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#init_aformaldef for (self: AFormaldef, nullable TClassid, nullable AType, nullable AAnnotations) */
void nit__parser_prod___AFormaldef___init_aformaldef(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AFormaldef>*/
}
var_n_id = p0;
var_n_type = p1;
var_n_annotations = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 716);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val = var_n_id; /* _n_id on <self:AFormaldef> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 717);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TClassid>*/
}
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val = var_n_type; /* _n_type on <self:AFormaldef> */
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
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFormaldef> */
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#replace_child for (self: AFormaldef, ANode, nullable ANode) */
void nit__parser_prod___AFormaldef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TClassid */;
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
val* var10 /* : nullable AAnnotations */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 726);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:TClassid>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TClassid */
cltype = type_nit__TClassid.color;
idtype = type_nit__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 727);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AFormaldef__n_id_61d]))(self, var_new_child); /* n_id= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 731);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AFormaldef__n_type_61d]))(self, var_new_child); /* n_type= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
if (var10 == NULL) {
var11 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_old_child); /* == on <var10:nullable AAnnotations>*/
var11 = var12;
}
if (var11){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype14 = type_nullable__nit__AAnnotations.color;
idtype15 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 735);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_id= for (self: AFormaldef, TClassid) */
void nit__parser_prod___AFormaldef___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val = var_node; /* _n_id on <self:AFormaldef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TClassid>*/
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_type= for (self: AFormaldef, nullable AType) */
void nit__parser_prod___AFormaldef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val = var_node; /* _n_type on <self:AFormaldef> */
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
/* method parser_prod#AFormaldef#n_annotations= for (self: AFormaldef, nullable AAnnotations) */
void nit__parser_prod___AFormaldef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFormaldef> */
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
/* method parser_prod#AFormaldef#visit_all for (self: AFormaldef, Visitor) */
void nit__parser_prod___AFormaldef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TClassid */;
val* var1 /* : nullable AType */;
val* var2 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 759);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#init_aattrpropdef for (self: AAttrPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwvar, nullable TId, nullable AType, nullable AExpr, nullable AAnnotations, nullable AExpr) */
void nit__parser_prod___AAttrPropdef___init_aattrpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwvar /* var n_kwvar: nullable TKwvar */;
val* var_n_id2 /* var n_id2: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_block /* var n_block: nullable AExpr */;
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
short int var10 /* : Bool */;
short int var11 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAttrPropdef>*/
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwvar = p3;
var_n_id2 = p4;
var_n_type = p5;
var_n_expr = p6;
var_n_annotations = p7;
var_n_block = p8;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AAttrPropdef> */
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
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAttrPropdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 781);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAttrPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 782);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_visibility, self); /* parent= on <var_n_visibility:nullable AVisibility>*/
}
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 783);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AAttrPropdef> */
if (var_n_kwvar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 784);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwvar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwvar, self); /* parent= on <var_n_kwvar:nullable TKwvar>*/
}
if (unlikely(var_n_id2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 785);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val = var_n_id2; /* _n_id2 on <self:AAttrPropdef> */
if (var_n_id2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 786);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id2->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id2, self); /* parent= on <var_n_id2:nullable TId>*/
}
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val = var_n_type; /* _n_type on <self:AAttrPropdef> */
if (var_n_type == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_type, ((val*)NULL)); /* != on <var_n_type:nullable AType>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType(AType)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrPropdef> */
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
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAttrPropdef> */
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
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val = var_n_block; /* _n_block on <self:AAttrPropdef> */
if (var_n_block == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_block, ((val*)NULL)); /* != on <var_n_block:nullable AExpr>*/
var10 = var11;
}
if (var10){
{
((void(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_block, self); /* parent= on <var_n_block:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#replace_child for (self: AAttrPropdef, ANode, nullable ANode) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var18 /* : TKwvar */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : TId */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AType */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
val* var37 /* : nullable AExpr */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
val* var44 /* : nullable AAnnotations */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
val* var51 /* : nullable AExpr */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 800);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc_61d]))(self, var_new_child); /* n_doc= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 804);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
if (var11 == NULL) {
var12 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_old_child); /* == on <var11:nullable AVisibility>*/
var12 = var13;
}
if (var12){
/* <var_new_child:nullable ANode> isa AVisibility */
cltype15 = type_nit__AVisibility.color;
idtype16 = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 808);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 811);
fatal_exit(1);
}
{
var19 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_old_child); /* == on <var18:TKwvar>*/
}
if (var19){
/* <var_new_child:nullable ANode> isa TKwvar */
cltype21 = type_nit__TKwvar.color;
idtype22 = type_nit__TKwvar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwvar", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 812);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_kwvar_61d]))(self, var_new_child); /* n_kwvar= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 815);
fatal_exit(1);
}
{
var25 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var24, var_old_child); /* == on <var24:TId>*/
}
if (var25){
/* <var_new_child:nullable ANode> isa TId */
cltype27 = type_nit__TId.color;
idtype28 = type_nit__TId.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 816);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_id2_61d]))(self, var_new_child); /* n_id2= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var32 = ((short int(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var30, var_old_child); /* == on <var30:nullable AType>*/
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype34 = type_nullable__nit__AType.color;
idtype35 = type_nullable__nit__AType.id;
if(var_new_child == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_new_child->type->table_size) {
var33 = 0;
} else {
var33 = var_new_child->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
var_class_name36 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 820);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_type_61d]))(self, var_new_child); /* n_type= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
if (var37 == NULL) {
var38 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var39 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var37, var_old_child); /* == on <var37:nullable AExpr>*/
var38 = var39;
}
if (var38){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype41 = type_nullable__nit__AExpr.color;
idtype42 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_new_child->type->table_size) {
var40 = 0;
} else {
var40 = var_new_child->type->type_table[cltype41] == idtype42;
}
}
if (unlikely(!var40)) {
var_class_name43 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 824);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_expr_61d]))(self, var_new_child); /* n_expr= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var44 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
if (var44 == NULL) {
var45 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var46 = ((short int(*)(val* self, val* p0))(var44->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var44, var_old_child); /* == on <var44:nullable AAnnotations>*/
var45 = var46;
}
if (var45){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype48 = type_nullable__nit__AAnnotations.color;
idtype49 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var47 = 1;
} else {
if(cltype48 >= var_new_child->type->table_size) {
var47 = 0;
} else {
var47 = var_new_child->type->type_table[cltype48] == idtype49;
}
}
if (unlikely(!var47)) {
var_class_name50 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 828);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var51 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
if (var51 == NULL) {
var52 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var53 = ((short int(*)(val* self, val* p0))(var51->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var51, var_old_child); /* == on <var51:nullable AExpr>*/
var52 = var53;
}
if (var52){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype55 = type_nullable__nit__AExpr.color;
idtype56 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var54 = 1;
} else {
if(cltype55 >= var_new_child->type->table_size) {
var54 = 0;
} else {
var54 = var_new_child->type->type_table[cltype55] == idtype56;
}
}
if (unlikely(!var54)) {
var_class_name57 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 832);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_block_61d]))(self, var_new_child); /* n_block= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_doc= for (self: AAttrPropdef, nullable ADoc) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_kwredef= for (self: AAttrPropdef, nullable TKwredef) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_visibility= for (self: AAttrPropdef, nullable AVisibility) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AAttrPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 850);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AVisibility>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwvar= for (self: AAttrPropdef, TKwvar) */
void nit__parser_prod___AAttrPropdef___n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: TKwvar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val = var_node; /* _n_kwvar on <self:AAttrPropdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwvar>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_id2= for (self: AAttrPropdef, TId) */
void nit__parser_prod___AAttrPropdef___n_id2_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val = var_node; /* _n_id2 on <self:AAttrPropdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_type= for (self: AAttrPropdef, nullable AType) */
void nit__parser_prod___AAttrPropdef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val = var_node; /* _n_type on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_expr= for (self: AAttrPropdef, nullable AExpr) */
void nit__parser_prod___AAttrPropdef___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val = var_node; /* _n_expr on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_annotations= for (self: AAttrPropdef, nullable AAnnotations) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_block= for (self: AAttrPropdef, nullable AExpr) */
void nit__parser_prod___AAttrPropdef___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val = var_node; /* _n_block on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#visit_all for (self: AAttrPropdef, Visitor) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwvar */;
val* var4 /* : TId */;
val* var5 /* : nullable AType */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable AAnnotations */;
val* var8 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 889);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 890);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var5); /* enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var6); /* enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var7); /* enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var8); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#init_amainmethpropdef for (self: AMainMethPropdef, nullable TKwredef, nullable AExpr) */
void nit__parser_prod___AMainMethPropdef___init_amainmethpropdef(val* self, val* p0, val* p1) {
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_block /* var n_block: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AMainMethPropdef>*/
}
var_n_kwredef = p0;
var_n_block = p1;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMainMethPropdef> */
if (var_n_kwredef == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwredef, ((val*)NULL)); /* != on <var_n_kwredef:nullable TKwredef>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwredef, self); /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMainMethPropdef> */
if (var_n_block == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_block, ((val*)NULL)); /* != on <var_n_block:nullable AExpr>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_block, self); /* parent= on <var_n_block:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#replace_child for (self: AMainMethPropdef, ANode, nullable ANode) */
void nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwredef */;
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
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TKwredef>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwredef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 912);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:AMainMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 916);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block_61d]))(self, var_new_child); /* n_block= on <self:AMainMethPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#n_kwredef= for (self: AMainMethPropdef, nullable TKwredef) */
void nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AMainMethPropdef> */
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
/* method parser_prod#AMainMethPropdef#n_block= for (self: AMainMethPropdef, nullable AExpr) */
void nit__parser_prod___AMainMethPropdef___nit__parser_nodes__AMethPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AMainMethPropdef> */
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
/* method parser_prod#AMainMethPropdef#visit_all for (self: AMainMethPropdef, Visitor) */
void nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwredef */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#init_atypepropdef for (self: ATypePropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwtype, nullable TClassid, nullable AType, nullable AAnnotations) */
void nit__parser_prod___ATypePropdef___init_atypepropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwtype /* var n_kwtype: nullable TKwtype */;
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ATypePropdef>*/
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwtype = p3;
var_n_id = p4;
var_n_type = p5;
var_n_annotations = p6;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:ATypePropdef> */
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
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:ATypePropdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 954);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ATypePropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 955);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_visibility, self); /* parent= on <var_n_visibility:nullable AVisibility>*/
}
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 956);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ATypePropdef> */
if (var_n_kwtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 957);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwtype->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwtype, self); /* parent= on <var_n_kwtype:nullable TKwtype>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 958);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val = var_n_id; /* _n_id on <self:ATypePropdef> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 959);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TClassid>*/
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 960);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val = var_n_type; /* _n_type on <self:ATypePropdef> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 961);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATypePropdef> */
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
/* method parser_prod#ATypePropdef#replace_child for (self: ATypePropdef, ANode, nullable ANode) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var18 /* : TKwtype */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : TClassid */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : AType */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
val* var36 /* : nullable AAnnotations */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ATypePropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 969);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc_61d]))(self, var_new_child); /* n_doc= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 973);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
if (var11 == NULL) {
var12 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_old_child); /* == on <var11:nullable AVisibility>*/
var12 = var13;
}
if (var12){
/* <var_new_child:nullable ANode> isa AVisibility */
cltype15 = type_nit__AVisibility.color;
idtype16 = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 977);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 980);
fatal_exit(1);
}
{
var19 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_old_child); /* == on <var18:TKwtype>*/
}
if (var19){
/* <var_new_child:nullable ANode> isa TKwtype */
cltype21 = type_nit__TKwtype.color;
idtype22 = type_nit__TKwtype.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwtype", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 981);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_kwtype_61d]))(self, var_new_child); /* n_kwtype= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 984);
fatal_exit(1);
}
{
var25 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var24, var_old_child); /* == on <var24:TClassid>*/
}
if (var25){
/* <var_new_child:nullable ANode> isa TClassid */
cltype27 = type_nit__TClassid.color;
idtype28 = type_nit__TClassid.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 985);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_id_61d]))(self, var_new_child); /* n_id= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 988);
fatal_exit(1);
}
{
var31 = ((short int(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var30, var_old_child); /* == on <var30:AType>*/
}
if (var31){
/* <var_new_child:nullable ANode> isa AType */
cltype33 = type_nit__AType.color;
idtype34 = type_nit__AType.id;
if(var_new_child == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
var_class_name35 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 989);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_type_61d]))(self, var_new_child); /* n_type= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var36 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
if (var36 == NULL) {
var37 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var38 = ((short int(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var36, var_old_child); /* == on <var36:nullable AAnnotations>*/
var37 = var38;
}
if (var37){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype40 = type_nullable__nit__AAnnotations.color;
idtype41 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_new_child->type->table_size) {
var39 = 0;
} else {
var39 = var_new_child->type->type_table[cltype40] == idtype41;
}
}
if (unlikely(!var39)) {
var_class_name42 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 993);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_doc= for (self: ATypePropdef, nullable ADoc) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:ATypePropdef> */
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
/* method parser_prod#ATypePropdef#n_kwredef= for (self: ATypePropdef, nullable TKwredef) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:ATypePropdef> */
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
/* method parser_prod#ATypePropdef#n_visibility= for (self: ATypePropdef, nullable AVisibility) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:ATypePropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1011);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AVisibility>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwtype= for (self: ATypePropdef, TKwtype) */
void nit__parser_prod___ATypePropdef___n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val = var_node; /* _n_kwtype on <self:ATypePropdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwtype>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_id= for (self: ATypePropdef, TClassid) */
void nit__parser_prod___ATypePropdef___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val = var_node; /* _n_id on <self:ATypePropdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TClassid>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_type= for (self: ATypePropdef, AType) */
void nit__parser_prod___ATypePropdef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val = var_node; /* _n_type on <self:ATypePropdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_annotations= for (self: ATypePropdef, nullable AAnnotations) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATypePropdef> */
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
/* method parser_prod#ATypePropdef#visit_all for (self: ATypePropdef, Visitor) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwtype */;
val* var4 /* : TClassid */;
val* var5 /* : AType */;
val* var6 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ATypePropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1040);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1041);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1042);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var5); /* enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var6); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#init_amethpropdef for (self: AMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable TKwinit, nullable TKwnew, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExternCalls, nullable AExternCodeBlock, nullable AExpr) */
void nit__parser_prod___AMethPropdef___init_amethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmeth /* var n_kwmeth: nullable TKwmeth */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_extern_calls /* var n_extern_calls: nullable AExternCalls */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
val* var_n_block /* var n_block: nullable AExpr */;
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
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AMethPropdef>*/
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmeth = p3;
var_n_kwinit = p4;
var_n_kwnew = p5;
var_n_methid = p6;
var_n_signature = p7;
var_n_annotations = p8;
var_n_extern_calls = p9;
var_n_extern_code_block = p10;
var_n_block = p11;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AMethPropdef> */
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
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMethPropdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1066);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AMethPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1067);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_visibility, self); /* parent= on <var_n_visibility:nullable AVisibility>*/
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AMethPropdef> */
if (var_n_kwmeth == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_n_kwmeth->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwmeth, ((val*)NULL)); /* != on <var_n_kwmeth:nullable TKwmeth>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_n_kwmeth->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwmeth, self); /* parent= on <var_n_kwmeth:nullable TKwmeth(TKwmeth)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AMethPropdef> */
if (var_n_kwinit == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwinit, ((val*)NULL)); /* != on <var_n_kwinit:nullable TKwinit>*/
var6 = var7;
}
if (var6){
{
((void(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwinit, self); /* parent= on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:AMethPropdef> */
if (var_n_kwnew == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_kwnew, ((val*)NULL)); /* != on <var_n_kwnew:nullable TKwnew>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwnew, self); /* parent= on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AMethPropdef> */
if (var_n_methid == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_n_methid->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_methid, ((val*)NULL)); /* != on <var_n_methid:nullable AMethid>*/
var10 = var11;
}
if (var10){
{
((void(*)(val* self, val* p0))(var_n_methid->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_methid, self); /* parent= on <var_n_methid:nullable AMethid(AMethid)>*/
}
} else {
}
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1076);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AMethPropdef> */
if (var_n_signature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1077);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_signature->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_signature, self); /* parent= on <var_n_signature:nullable ASignature>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AMethPropdef> */
if (var_n_annotations == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_annotations, ((val*)NULL)); /* != on <var_n_annotations:nullable AAnnotations>*/
var12 = var13;
}
if (var12){
{
((void(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_annotations, self); /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val = var_n_extern_calls; /* _n_extern_calls on <self:AMethPropdef> */
if (var_n_extern_calls == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_n_extern_calls->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_extern_calls, ((val*)NULL)); /* != on <var_n_extern_calls:nullable AExternCalls>*/
var14 = var15;
}
if (var14){
{
((void(*)(val* self, val* p0))(var_n_extern_calls->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_extern_calls, self); /* parent= on <var_n_extern_calls:nullable AExternCalls(AExternCalls)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AMethPropdef> */
if (var_n_extern_code_block == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var_n_extern_code_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_extern_code_block, ((val*)NULL)); /* != on <var_n_extern_code_block:nullable AExternCodeBlock>*/
var16 = var17;
}
if (var16){
{
((void(*)(val* self, val* p0))(var_n_extern_code_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_extern_code_block, self); /* parent= on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMethPropdef> */
if (var_n_block == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_block, ((val*)NULL)); /* != on <var_n_block:nullable AExpr>*/
var18 = var19;
}
if (var18){
{
((void(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_block, self); /* parent= on <var_n_block:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#replace_child for (self: AMethPropdef, ANode, nullable ANode) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var18 /* : nullable TKwmeth */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
val* var25 /* : nullable TKwinit */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
val* var32 /* : nullable TKwnew */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
val* var39 /* : nullable AMethid */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
val* var46 /* : nullable ASignature */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
val* var53 /* : nullable AAnnotations */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
val* var60 /* : nullable AExternCalls */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
val* var67 /* : nullable AExternCodeBlock */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
val* var74 /* : nullable AExpr */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1091);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc_61d]))(self, var_new_child); /* n_doc= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1095);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
if (var11 == NULL) {
var12 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_old_child); /* == on <var11:nullable AVisibility>*/
var12 = var13;
}
if (var12){
/* <var_new_child:nullable ANode> isa AVisibility */
cltype15 = type_nit__AVisibility.color;
idtype16 = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1099);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AMethPropdef> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var20 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_old_child); /* == on <var18:nullable TKwmeth>*/
var19 = var20;
}
if (var19){
/* <var_new_child:nullable ANode> isa nullable TKwmeth */
cltype22 = type_nullable__nit__TKwmeth.color;
idtype23 = type_nullable__nit__TKwmeth.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwmeth", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1103);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwmeth_61d]))(self, var_new_child); /* n_kwmeth= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var25 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
if (var25 == NULL) {
var26 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var27 = ((short int(*)(val* self, val* p0))(var25->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var25, var_old_child); /* == on <var25:nullable TKwinit>*/
var26 = var27;
}
if (var26){
/* <var_new_child:nullable ANode> isa nullable TKwinit */
cltype29 = type_nullable__nit__TKwinit.color;
idtype30 = type_nullable__nit__TKwinit.id;
if(var_new_child == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_new_child->type->table_size) {
var28 = 0;
} else {
var28 = var_new_child->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
var_class_name31 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwinit", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1107);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwinit_61d]))(self, var_new_child); /* n_kwinit= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var32 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
if (var32 == NULL) {
var33 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var34 = ((short int(*)(val* self, val* p0))(var32->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var32, var_old_child); /* == on <var32:nullable TKwnew>*/
var33 = var34;
}
if (var33){
/* <var_new_child:nullable ANode> isa nullable TKwnew */
cltype36 = type_nullable__nit__TKwnew.color;
idtype37 = type_nullable__nit__TKwnew.id;
if(var_new_child == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_new_child->type->table_size) {
var35 = 0;
} else {
var35 = var_new_child->type->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
var_class_name38 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwnew", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1111);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwnew_61d]))(self, var_new_child); /* n_kwnew= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var39 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
if (var39 == NULL) {
var40 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var41 = ((short int(*)(val* self, val* p0))(var39->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var39, var_old_child); /* == on <var39:nullable AMethid>*/
var40 = var41;
}
if (var40){
/* <var_new_child:nullable ANode> isa nullable AMethid */
cltype43 = type_nullable__nit__AMethid.color;
idtype44 = type_nullable__nit__AMethid.id;
if(var_new_child == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_new_child->type->table_size) {
var42 = 0;
} else {
var42 = var_new_child->type->type_table[cltype43] == idtype44;
}
}
if (unlikely(!var42)) {
var_class_name45 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AMethid", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1115);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid_61d]))(self, var_new_child); /* n_methid= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var46 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
if (var46 == NULL) {
var47 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var48 = ((short int(*)(val* self, val* p0))(var46->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var46, var_old_child); /* == on <var46:nullable ASignature>*/
var47 = var48;
}
if (var47){
/* <var_new_child:nullable ANode> isa ASignature */
cltype50 = type_nit__ASignature.color;
idtype51 = type_nit__ASignature.id;
if(var_new_child == NULL) {
var49 = 0;
} else {
if(cltype50 >= var_new_child->type->table_size) {
var49 = 0;
} else {
var49 = var_new_child->type->type_table[cltype50] == idtype51;
}
}
if (unlikely(!var49)) {
var_class_name52 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ASignature", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1119);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature_61d]))(self, var_new_child); /* n_signature= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var53 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AMethPropdef> */
if (var53 == NULL) {
var54 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var55 = ((short int(*)(val* self, val* p0))(var53->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var53, var_old_child); /* == on <var53:nullable AAnnotations>*/
var54 = var55;
}
if (var54){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype57 = type_nullable__nit__AAnnotations.color;
idtype58 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var56 = 1;
} else {
if(cltype57 >= var_new_child->type->table_size) {
var56 = 0;
} else {
var56 = var_new_child->type->type_table[cltype57] == idtype58;
}
}
if (unlikely(!var56)) {
var_class_name59 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1123);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var60 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
if (var60 == NULL) {
var61 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var62 = ((short int(*)(val* self, val* p0))(var60->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var60, var_old_child); /* == on <var60:nullable AExternCalls>*/
var61 = var62;
}
if (var61){
/* <var_new_child:nullable ANode> isa nullable AExternCalls */
cltype64 = type_nullable__nit__AExternCalls.color;
idtype65 = type_nullable__nit__AExternCalls.id;
if(var_new_child == NULL) {
var63 = 1;
} else {
if(cltype64 >= var_new_child->type->table_size) {
var63 = 0;
} else {
var63 = var_new_child->type->type_table[cltype64] == idtype65;
}
}
if (unlikely(!var63)) {
var_class_name66 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCalls", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1127);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_extern_calls_61d]))(self, var_new_child); /* n_extern_calls= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var67 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
if (var67 == NULL) {
var68 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var69 = ((short int(*)(val* self, val* p0))(var67->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var67, var_old_child); /* == on <var67:nullable AExternCodeBlock>*/
var68 = var69;
}
if (var68){
/* <var_new_child:nullable ANode> isa nullable AExternCodeBlock */
cltype71 = type_nullable__nit__AExternCodeBlock.color;
idtype72 = type_nullable__nit__AExternCodeBlock.id;
if(var_new_child == NULL) {
var70 = 1;
} else {
if(cltype71 >= var_new_child->type->table_size) {
var70 = 0;
} else {
var70 = var_new_child->type->type_table[cltype71] == idtype72;
}
}
if (unlikely(!var70)) {
var_class_name73 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCodeBlock", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1131);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_extern_code_block_61d]))(self, var_new_child); /* n_extern_code_block= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var74 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
if (var74 == NULL) {
var75 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var76 = ((short int(*)(val* self, val* p0))(var74->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var74, var_old_child); /* == on <var74:nullable AExpr>*/
var75 = var76;
}
if (var75){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype78 = type_nullable__nit__AExpr.color;
idtype79 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var77 = 1;
} else {
if(cltype78 >= var_new_child->type->table_size) {
var77 = 0;
} else {
var77 = var_new_child->type->type_table[cltype78] == idtype79;
}
}
if (unlikely(!var77)) {
var_class_name80 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1135);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block_61d]))(self, var_new_child); /* n_block= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_doc= for (self: AMethPropdef, nullable ADoc) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_kwredef= for (self: AMethPropdef, nullable TKwredef) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_visibility= for (self: AMethPropdef, nullable AVisibility) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1153);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AVisibility>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwmeth= for (self: AMethPropdef, nullable TKwmeth) */
void nit__parser_prod___AMethPropdef___n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwmeth */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwmeth>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwmeth(TKwmeth)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwinit= for (self: AMethPropdef, nullable TKwinit) */
void nit__parser_prod___AMethPropdef___n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwinit */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val = var_node; /* _n_kwinit on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwinit>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwinit(TKwinit)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwnew= for (self: AMethPropdef, nullable TKwnew) */
void nit__parser_prod___AMethPropdef___n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnew */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val = var_node; /* _n_kwnew on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable TKwnew>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable TKwnew(TKwnew)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_methid= for (self: AMethPropdef, nullable AMethid) */
void nit__parser_prod___AMethPropdef___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AMethid>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AMethid(AMethid)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_signature= for (self: AMethPropdef, nullable ASignature) */
void nit__parser_prod___AMethPropdef___n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1178);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable ASignature>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_annotations= for (self: AMethPropdef, nullable AAnnotations) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_extern_calls= for (self: AMethPropdef, nullable AExternCalls) */
void nit__parser_prod___AMethPropdef___n_extern_calls_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCalls */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val = var_node; /* _n_extern_calls on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExternCalls>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExternCalls(AExternCalls)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_extern_code_block= for (self: AMethPropdef, nullable AExternCodeBlock) */
void nit__parser_prod___AMethPropdef___n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable AExternCodeBlock>*/
var = var1;
}
if (var){
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_block= for (self: AMethPropdef, nullable AExpr) */
void nit__parser_prod___AMethPropdef___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#visit_all for (self: AMethPropdef, Visitor) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : nullable TKwmeth */;
val* var4 /* : nullable TKwinit */;
val* var5 /* : nullable TKwnew */;
val* var6 /* : nullable AMethid */;
val* var7 /* : nullable ASignature */;
val* var8 /* : nullable AAnnotations */;
val* var9 /* : nullable AExternCalls */;
val* var10 /* : nullable AExternCodeBlock */;
val* var11 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var5); /* enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var6); /* enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var7); /* enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var8); /* enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var9); /* enter_visit on <var_v:Visitor>*/
}
var10 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var10); /* enter_visit on <var_v:Visitor>*/
}
var11 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var11); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperPropdef#init_asuperpropdef for (self: ASuperPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwsuper, nullable AType, nullable AAnnotations) */
void nit__parser_prod___ASuperPropdef___init_asuperpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASuperPropdef>*/
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwsuper = p3;
var_n_type = p4;
var_n_annotations = p5;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:ASuperPropdef> */
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
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:ASuperPropdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1232);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ASuperPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1233);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_visibility, self); /* parent= on <var_n_visibility:nullable AVisibility>*/
}
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1234);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperPropdef> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1235);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_kwsuper->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_kwsuper, self); /* parent= on <var_n_kwsuper:nullable TKwsuper>*/
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1236);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val = var_n_type; /* _n_type on <self:ASuperPropdef> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1237);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperPropdef> */
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
/* method parser_prod#ASuperPropdef#replace_child for (self: ASuperPropdef, ANode, nullable ANode) */
void nit__parser_prod___ASuperPropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var18 /* : TKwsuper */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : AType */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AAnnotations */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ASuperPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1245);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc_61d]))(self, var_new_child); /* n_doc= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ASuperPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1249);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ASuperPropdef> */
if (var11 == NULL) {
var12 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_old_child); /* == on <var11:nullable AVisibility>*/
var12 = var13;
}
if (var12){
/* <var_new_child:nullable ANode> isa AVisibility */
cltype15 = type_nit__AVisibility.color;
idtype16 = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1253);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_kwsuper].val; /* _n_kwsuper on <self:ASuperPropdef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1256);
fatal_exit(1);
}
{
var19 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_old_child); /* == on <var18:TKwsuper>*/
}
if (var19){
/* <var_new_child:nullable ANode> isa TKwsuper */
cltype21 = type_nit__TKwsuper.color;
idtype22 = type_nit__TKwsuper.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwsuper", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1257);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASuperPropdef__n_kwsuper_61d]))(self, var_new_child); /* n_kwsuper= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <self:ASuperPropdef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1260);
fatal_exit(1);
}
{
var25 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var24, var_old_child); /* == on <var24:AType>*/
}
if (var25){
/* <var_new_child:nullable ANode> isa AType */
cltype27 = type_nit__AType.color;
idtype28 = type_nit__AType.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1261);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASuperPropdef__n_type_61d]))(self, var_new_child); /* n_type= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperPropdef> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var32 = ((short int(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var30, var_old_child); /* == on <var30:nullable AAnnotations>*/
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype34 = type_nullable__nit__AAnnotations.color;
idtype35 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_new_child->type->table_size) {
var33 = 0;
} else {
var33 = var_new_child->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
var_class_name36 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1265);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperPropdef#n_doc= for (self: ASuperPropdef, nullable ADoc) */
void nit__parser_prod___ASuperPropdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:ASuperPropdef> */
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
/* method parser_prod#ASuperPropdef#n_kwredef= for (self: ASuperPropdef, nullable TKwredef) */
void nit__parser_prod___ASuperPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:ASuperPropdef> */
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
/* method parser_prod#ASuperPropdef#n_visibility= for (self: ASuperPropdef, nullable AVisibility) */
void nit__parser_prod___ASuperPropdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:ASuperPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1283);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:nullable AVisibility>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperPropdef#n_kwsuper= for (self: ASuperPropdef, TKwsuper) */
void nit__parser_prod___ASuperPropdef___n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperPropdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TKwsuper>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperPropdef#n_type= for (self: ASuperPropdef, AType) */
void nit__parser_prod___ASuperPropdef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val = var_node; /* _n_type on <self:ASuperPropdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AType>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperPropdef#n_annotations= for (self: ASuperPropdef, nullable AAnnotations) */
void nit__parser_prod___ASuperPropdef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperPropdef> */
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
/* method parser_prod#ASuperPropdef#visit_all for (self: ASuperPropdef, Visitor) */
void nit__parser_prod___ASuperPropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwsuper */;
val* var4 /* : AType */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ASuperPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ASuperPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ASuperPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_kwsuper].val; /* _n_kwsuper on <self:ASuperPropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1307);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <self:ASuperPropdef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1308);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var5); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAnnotPropdef#init_aannotpropdef for (self: AAnnotPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AAtid, nullable TOpar, Collection[Object], nullable TCpar, nullable AAnnotations) */
void nit__parser_prod___AAnnotPropdef___init_aannotpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
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
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAnnotPropdef>*/
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_atid = p3;
var_n_opar = p4;
var_n_args = p5;
var_n_cpar = p6;
var_n_annotations = p7;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AAnnotPropdef> */
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
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAnnotPropdef> */
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
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAnnotPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1330);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val = var_n_atid; /* _n_atid on <self:AAnnotPropdef> */
if (var_n_atid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1331);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_atid->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_atid, self); /* parent= on <var_n_atid:nullable AAtid>*/
}
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotPropdef> */
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
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(self); /* n_args on <self:AAnnotPropdef>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var8, var_n_args); /* unsafe_add_all on <var8:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotPropdef> */
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
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAnnotPropdef> */
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
/* method parser_prod#AAnnotPropdef#replace_child for (self: AAnnotPropdef, ANode, nullable ANode) */
void nit__parser_prod___AAnnotPropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAnnotPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1344);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc_61d]))(self, var_new_child); /* n_doc= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAnnotPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1348);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAnnotPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1352);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotPropdef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1355);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1356);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_atid_61d]))(self, var_new_child); /* n_atid= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1360);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_opar_61d]))(self, var_new_child); /* n_opar= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(self); /* n_args on <self:AAnnotPropdef>*/
}
{
var32 = ((short int(*)(val* self, val* p0, val* p1))(var31->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var31, var_old_child, var_new_child); /* replace_child on <var31:ANodes[AExpr]>*/
}
if (var32){
goto RET_LABEL;
} else {
}
var33 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1365);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_cpar_61d]))(self, var_new_child); /* n_cpar= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1369);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotPropdef#n_doc= for (self: AAnnotPropdef, nullable ADoc) */
void nit__parser_prod___AAnnotPropdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AAnnotPropdef> */
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
/* method parser_prod#AAnnotPropdef#n_kwredef= for (self: AAnnotPropdef, nullable TKwredef) */
void nit__parser_prod___AAnnotPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AAnnotPropdef> */
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
/* method parser_prod#AAnnotPropdef#n_visibility= for (self: AAnnotPropdef, nullable AVisibility) */
void nit__parser_prod___AAnnotPropdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AAnnotPropdef> */
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
/* method parser_prod#AAnnotPropdef#n_atid= for (self: AAnnotPropdef, AAtid) */
void nit__parser_prod___AAnnotPropdef___nit__parser_nodes__AAnnotation__n_atid_61d(val* self, val* p0) {
val* var_node /* var node: AAtid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val = var_node; /* _n_atid on <self:AAnnotPropdef> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:AAtid>*/
}
RET_LABEL:;
}
/* method parser_prod#AAnnotPropdef#n_opar= for (self: AAnnotPropdef, nullable TOpar) */
void nit__parser_prod___AAnnotPropdef___nit__parser_nodes__AAnnotation__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val = var_node; /* _n_opar on <self:AAnnotPropdef> */
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
/* method parser_prod#AAnnotPropdef#n_cpar= for (self: AAnnotPropdef, nullable TCpar) */
void nit__parser_prod___AAnnotPropdef___nit__parser_nodes__AAnnotation__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotPropdef> */
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
/* method parser_prod#AAnnotPropdef#n_annotations= for (self: AAnnotPropdef, nullable AAnnotations) */
void nit__parser_prod___AAnnotPropdef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAnnotPropdef> */
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
/* method parser_prod#AAnnotPropdef#visit_all for (self: AAnnotPropdef, Visitor) */
void nit__parser_prod___AAnnotPropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
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
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAnnotPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAnnotPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAnnotPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotPropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1416);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var4); /* enter_visit on <var_v:Visitor>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(self); /* n_args on <self:AAnnotPropdef>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var5, var_v); /* visit_all on <var5:ANodes[AExpr]>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var6); /* enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotPropdef> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var7); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#init_aidmethid for (self: AIdMethid, nullable TId) */
void nit__parser_prod___AIdMethid___init_aidmethid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AIdMethid>*/
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1428);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val = var_n_id; /* _n_id on <self:AIdMethid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1429);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#replace_child for (self: AIdMethid, ANode, nullable ANode) */
void nit__parser_prod___AIdMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1434);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1435);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AIdMethid__n_id_61d]))(self, var_new_child); /* n_id= on <self:AIdMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#n_id= for (self: AIdMethid, TId) */
void nit__parser_prod___AIdMethid___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val = var_node; /* _n_id on <self:AIdMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#visit_all for (self: AIdMethid, Visitor) */
void nit__parser_prod___AIdMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1449);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#init_aplusmethid for (self: APlusMethid, nullable TPlus) */
void nit__parser_prod___APlusMethid___init_aplusmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPlus */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APlusMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1457);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:APlusMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1458);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPlus>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#replace_child for (self: APlusMethid, ANode, nullable ANode) */
void nit__parser_prod___APlusMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APlusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1463);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1464);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:APlusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#n_op= for (self: APlusMethid, Token) */
void nit__parser_prod___APlusMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:APlusMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#visit_all for (self: APlusMethid, Visitor) */
void nit__parser_prod___APlusMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APlusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1478);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#init_aminusmethid for (self: AMinusMethid, nullable TMinus) */
void nit__parser_prod___AMinusMethid___init_aminusmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TMinus */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AMinusMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1486);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AMinusMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1487);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TMinus>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#replace_child for (self: AMinusMethid, ANode, nullable ANode) */
void nit__parser_prod___AMinusMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1492);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1493);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:AMinusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#n_op= for (self: AMinusMethid, Token) */
void nit__parser_prod___AMinusMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AMinusMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#visit_all for (self: AMinusMethid, Visitor) */
void nit__parser_prod___AMinusMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1507);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#init_astarmethid for (self: AStarMethid, nullable TStar) */
void nit__parser_prod___AStarMethid___init_astarmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStar */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStarMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1515);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AStarMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1516);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TStar>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#replace_child for (self: AStarMethid, ANode, nullable ANode) */
void nit__parser_prod___AStarMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1521);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TStar */
cltype = type_nit__TStar.color;
idtype = type_nit__TStar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1522);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:AStarMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#n_op= for (self: AStarMethid, Token) */
void nit__parser_prod___AStarMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AStarMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#visit_all for (self: AStarMethid, Visitor) */
void nit__parser_prod___AStarMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1536);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#init_astarstarmethid for (self: AStarstarMethid, nullable TStarstar) */
void nit__parser_prod___AStarstarMethid___init_astarstarmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStarstar */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStarstarMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1544);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AStarstarMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1545);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TStarstar>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#replace_child for (self: AStarstarMethid, ANode, nullable ANode) */
void nit__parser_prod___AStarstarMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarstarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1550);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TStarstar */
cltype = type_nit__TStarstar.color;
idtype = type_nit__TStarstar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarstar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1551);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:AStarstarMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#n_op= for (self: AStarstarMethid, Token) */
void nit__parser_prod___AStarstarMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AStarstarMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#visit_all for (self: AStarstarMethid, Visitor) */
void nit__parser_prod___AStarstarMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarstarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1565);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#init_aslashmethid for (self: ASlashMethid, nullable TSlash) */
void nit__parser_prod___ASlashMethid___init_aslashmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TSlash */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASlashMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1573);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ASlashMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1574);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TSlash>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#replace_child for (self: ASlashMethid, ANode, nullable ANode) */
void nit__parser_prod___ASlashMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1579);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TSlash */
cltype = type_nit__TSlash.color;
idtype = type_nit__TSlash.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TSlash", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1580);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:ASlashMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#n_op= for (self: ASlashMethid, Token) */
void nit__parser_prod___ASlashMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ASlashMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#visit_all for (self: ASlashMethid, Visitor) */
void nit__parser_prod___ASlashMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1594);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#init_apercentmethid for (self: APercentMethid, nullable TPercent) */
void nit__parser_prod___APercentMethid___init_apercentmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPercent */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APercentMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1602);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:APercentMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1603);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPercent>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#replace_child for (self: APercentMethid, ANode, nullable ANode) */
void nit__parser_prod___APercentMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APercentMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1608);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TPercent */
cltype = type_nit__TPercent.color;
idtype = type_nit__TPercent.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPercent", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1609);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:APercentMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#n_op= for (self: APercentMethid, Token) */
void nit__parser_prod___APercentMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:APercentMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#visit_all for (self: APercentMethid, Visitor) */
void nit__parser_prod___APercentMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APercentMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1623);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#init_aeqmethid for (self: AEqMethid, nullable TEq) */
void nit__parser_prod___AEqMethid___init_aeqmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TEq */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AEqMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1631);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AEqMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1632);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TEq>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#replace_child for (self: AEqMethid, ANode, nullable ANode) */
void nit__parser_prod___AEqMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AEqMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1637);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TEq */
cltype = type_nit__TEq.color;
idtype = type_nit__TEq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TEq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1638);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:AEqMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#n_op= for (self: AEqMethid, Token) */
void nit__parser_prod___AEqMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AEqMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#visit_all for (self: AEqMethid, Visitor) */
void nit__parser_prod___AEqMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AEqMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1652);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#init_anemethid for (self: ANeMethid, nullable TNe) */
void nit__parser_prod___ANeMethid___init_anemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TNe */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ANeMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1660);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ANeMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1661);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TNe>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#replace_child for (self: ANeMethid, ANode, nullable ANode) */
void nit__parser_prod___ANeMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ANeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1666);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TNe */
cltype = type_nit__TNe.color;
idtype = type_nit__TNe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TNe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1667);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:ANeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#n_op= for (self: ANeMethid, Token) */
void nit__parser_prod___ANeMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ANeMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#visit_all for (self: ANeMethid, Visitor) */
void nit__parser_prod___ANeMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ANeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1681);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#init_alemethid for (self: ALeMethid, nullable TLe) */
void nit__parser_prod___ALeMethid___init_alemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLe */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALeMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1689);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ALeMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1690);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TLe>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#replace_child for (self: ALeMethid, ANode, nullable ANode) */
void nit__parser_prod___ALeMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1695);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TLe */
cltype = type_nit__TLe.color;
idtype = type_nit__TLe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1696);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:ALeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#n_op= for (self: ALeMethid, Token) */
void nit__parser_prod___ALeMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ALeMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#visit_all for (self: ALeMethid, Visitor) */
void nit__parser_prod___ALeMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1710);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#init_agemethid for (self: AGeMethid, nullable TGe) */
void nit__parser_prod___AGeMethid___init_agemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGe */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AGeMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1718);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AGeMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1719);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TGe>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#replace_child for (self: AGeMethid, ANode, nullable ANode) */
void nit__parser_prod___AGeMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1724);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TGe */
cltype = type_nit__TGe.color;
idtype = type_nit__TGe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1725);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:AGeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#n_op= for (self: AGeMethid, Token) */
void nit__parser_prod___AGeMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AGeMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#visit_all for (self: AGeMethid, Visitor) */
void nit__parser_prod___AGeMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1739);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#init_altmethid for (self: ALtMethid, nullable TLt) */
void nit__parser_prod___ALtMethid___init_altmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLt */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALtMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1747);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ALtMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1748);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TLt>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#replace_child for (self: ALtMethid, ANode, nullable ANode) */
void nit__parser_prod___ALtMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1753);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TLt */
cltype = type_nit__TLt.color;
idtype = type_nit__TLt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1754);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:ALtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#n_op= for (self: ALtMethid, Token) */
void nit__parser_prod___ALtMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ALtMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#visit_all for (self: ALtMethid, Visitor) */
void nit__parser_prod___ALtMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1768);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#init_agtmethid for (self: AGtMethid, nullable TGt) */
void nit__parser_prod___AGtMethid___init_agtmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGt */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AGtMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1776);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AGtMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1777);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TGt>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#replace_child for (self: AGtMethid, ANode, nullable ANode) */
void nit__parser_prod___AGtMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1782);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TGt */
cltype = type_nit__TGt.color;
idtype = type_nit__TGt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1783);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:AGtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#n_op= for (self: AGtMethid, Token) */
void nit__parser_prod___AGtMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AGtMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#visit_all for (self: AGtMethid, Visitor) */
void nit__parser_prod___AGtMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1797);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#init_allmethid for (self: ALlMethid, nullable TLl) */
void nit__parser_prod___ALlMethid___init_allmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLl */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ALlMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1805);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ALlMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1806);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TLl>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#replace_child for (self: ALlMethid, ANode, nullable ANode) */
void nit__parser_prod___ALlMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALlMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1811);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TLl */
cltype = type_nit__TLl.color;
idtype = type_nit__TLl.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLl", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1812);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:ALlMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#n_op= for (self: ALlMethid, Token) */
void nit__parser_prod___ALlMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ALlMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#visit_all for (self: ALlMethid, Visitor) */
void nit__parser_prod___ALlMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALlMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1826);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#init_aggmethid for (self: AGgMethid, nullable TGg) */
void nit__parser_prod___AGgMethid___init_aggmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGg */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AGgMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1834);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AGgMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1835);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TGg>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#replace_child for (self: AGgMethid, ANode, nullable ANode) */
void nit__parser_prod___AGgMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGgMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1840);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TGg */
cltype = type_nit__TGg.color;
idtype = type_nit__TGg.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGg", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1841);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:AGgMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#n_op= for (self: AGgMethid, Token) */
void nit__parser_prod___AGgMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AGgMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#visit_all for (self: AGgMethid, Visitor) */
void nit__parser_prod___AGgMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGgMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1855);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#init_astarshipmethid for (self: AStarshipMethid, nullable TStarship) */
void nit__parser_prod___AStarshipMethid___init_astarshipmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStarship */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AStarshipMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1863);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AStarshipMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1864);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TStarship>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#replace_child for (self: AStarshipMethid, ANode, nullable ANode) */
void nit__parser_prod___AStarshipMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1869);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TStarship */
cltype = type_nit__TStarship.color;
idtype = type_nit__TStarship.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarship", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1870);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:AStarshipMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#n_op= for (self: AStarshipMethid, Token) */
void nit__parser_prod___AStarshipMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AStarshipMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#visit_all for (self: AStarshipMethid, Visitor) */
void nit__parser_prod___AStarshipMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1884);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeMethid#init_apipemethid for (self: APipeMethid, nullable TPipe) */
void nit__parser_prod___APipeMethid___init_apipemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPipe */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:APipeMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1892);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:APipeMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1893);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TPipe>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeMethid#replace_child for (self: APipeMethid, ANode, nullable ANode) */
void nit__parser_prod___APipeMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APipeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1898);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TPipe */
cltype = type_nit__TPipe.color;
idtype = type_nit__TPipe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPipe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1899);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:APipeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APipeMethid#n_op= for (self: APipeMethid, Token) */
void nit__parser_prod___APipeMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:APipeMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeMethid#visit_all for (self: APipeMethid, Visitor) */
void nit__parser_prod___APipeMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APipeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1913);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretMethid#init_acaretmethid for (self: ACaretMethid, nullable TCaret) */
void nit__parser_prod___ACaretMethid___init_acaretmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TCaret */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ACaretMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1921);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ACaretMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1922);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TCaret>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretMethid#replace_child for (self: ACaretMethid, ANode, nullable ANode) */
void nit__parser_prod___ACaretMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ACaretMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1927);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TCaret */
cltype = type_nit__TCaret.color;
idtype = type_nit__TCaret.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCaret", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1928);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:ACaretMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACaretMethid#n_op= for (self: ACaretMethid, Token) */
void nit__parser_prod___ACaretMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ACaretMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretMethid#visit_all for (self: ACaretMethid, Visitor) */
void nit__parser_prod___ACaretMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ACaretMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1942);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpMethid#init_aampmethid for (self: AAmpMethid, nullable TAmp) */
void nit__parser_prod___AAmpMethid___init_aampmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TAmp */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAmpMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1950);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AAmpMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1951);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TAmp>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpMethid#replace_child for (self: AAmpMethid, ANode, nullable ANode) */
void nit__parser_prod___AAmpMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AAmpMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1956);
fatal_exit(1);
}
{
var1 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:Token>*/
}
if (var1){
/* <var_new_child:nullable ANode> isa TAmp */
cltype = type_nit__TAmp.color;
idtype = type_nit__TAmp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAmp", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1957);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:AAmpMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAmpMethid#n_op= for (self: AAmpMethid, Token) */
void nit__parser_prod___AAmpMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AAmpMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpMethid#visit_all for (self: AAmpMethid, Visitor) */
void nit__parser_prod___AAmpMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AAmpMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1971);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATildeMethid#init_atildemethid for (self: ATildeMethid, nullable TTilde) */
void nit__parser_prod___ATildeMethid___init_atildemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TTilde */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ATildeMethid>*/
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1979);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ATildeMethid> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1980);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_op->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_op, self); /* parent= on <var_n_op:nullable TTilde>*/
}
RET_LABEL:;
}
/* method parser_prod#ATildeMethid#replace_child for (self: ATildeMethid, ANode, nullable ANode) */
void nit__parser_prod___ATildeMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ATildeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1985);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1986);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AOperatorMethid__n_op_61d]))(self, var_new_child); /* n_op= on <self:ATildeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATildeMethid#n_op= for (self: ATildeMethid, Token) */
void nit__parser_prod___ATildeMethid___nit__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ATildeMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:Token>*/
}
RET_LABEL:;
}
/* method parser_prod#ATildeMethid#visit_all for (self: ATildeMethid, Visitor) */
void nit__parser_prod___ATildeMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ATildeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2000);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#init_abramethid for (self: ABraMethid, nullable TObra, nullable TCbra) */
void nit__parser_prod___ABraMethid___init_abramethid(val* self, val* p0, val* p1) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABraMethid>*/
}
var_n_obra = p0;
var_n_cbra = p1;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2009);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraMethid> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2010);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_obra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_obra, self); /* parent= on <var_n_obra:nullable TObra>*/
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2011);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraMethid> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2012);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_cbra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cbra, self); /* parent= on <var_n_cbra:nullable TCbra>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#replace_child for (self: ABraMethid, ANode, nullable ANode) */
void nit__parser_prod___ABraMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TCbra */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2017);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2018);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraMethid__n_obra_61d]))(self, var_new_child); /* n_obra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2021);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TCbra>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TCbra */
cltype6 = type_nit__TCbra.color;
idtype7 = type_nit__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2022);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraMethid__n_cbra_61d]))(self, var_new_child); /* n_cbra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_obra= for (self: ABraMethid, TObra) */
void nit__parser_prod___ABraMethid___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val = var_node; /* _n_obra on <self:ABraMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TObra>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_cbra= for (self: ABraMethid, TCbra) */
void nit__parser_prod___ABraMethid___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TCbra>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#visit_all for (self: ABraMethid, Visitor) */
void nit__parser_prod___ABraMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2041);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2042);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#init_aassignmethid for (self: AAssignMethid, nullable TId, nullable TAssign) */
void nit__parser_prod___AAssignMethid___init_aassignmethid(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:AAssignMethid>*/
}
var_n_id = p0;
var_n_assign = p1;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2051);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val = var_n_id; /* _n_id on <self:AAssignMethid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2052);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_id, self); /* parent= on <var_n_id:nullable TId>*/
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2053);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:AAssignMethid> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2054);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign, self); /* parent= on <var_n_assign:nullable TAssign>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#replace_child for (self: AAssignMethid, ANode, nullable ANode) */
void nit__parser_prod___AAssignMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2059);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2060);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignMethid__n_id_61d]))(self, var_new_child); /* n_id= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2063);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2064);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AAssignMethid__n_assign_61d]))(self, var_new_child); /* n_assign= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_id= for (self: AAssignMethid, TId) */
void nit__parser_prod___AAssignMethid___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val = var_node; /* _n_id on <self:AAssignMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TId>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_assign= for (self: AAssignMethid, TAssign) */
void nit__parser_prod___AAssignMethid___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val = var_node; /* _n_assign on <self:AAssignMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAssign>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#visit_all for (self: AAssignMethid, Visitor) */
void nit__parser_prod___AAssignMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2083);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2084);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#init_abraassignmethid for (self: ABraassignMethid, nullable TObra, nullable TCbra, nullable TAssign) */
void nit__parser_prod___ABraassignMethid___init_abraassignmethid(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_assign /* var n_assign: nullable TAssign */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ABraassignMethid>*/
}
var_n_obra = p0;
var_n_cbra = p1;
var_n_assign = p2;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2094);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraassignMethid> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2095);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_obra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_obra, self); /* parent= on <var_n_obra:nullable TObra>*/
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2096);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraassignMethid> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2097);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_cbra->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cbra, self); /* parent= on <var_n_cbra:nullable TCbra>*/
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2098);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:ABraassignMethid> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2099);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_assign, self); /* parent= on <var_n_assign:nullable TAssign>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#replace_child for (self: ABraassignMethid, ANode, nullable ANode) */
void nit__parser_prod___ABraassignMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : TCbra */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2104);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2105);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraassignMethid__n_obra_61d]))(self, var_new_child); /* n_obra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2108);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_old_child); /* == on <var3:TCbra>*/
}
if (var4){
/* <var_new_child:nullable ANode> isa TCbra */
cltype6 = type_nit__TCbra.color;
idtype7 = type_nit__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2109);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraassignMethid__n_cbra_61d]))(self, var_new_child); /* n_cbra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2112);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2113);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ABraassignMethid__n_assign_61d]))(self, var_new_child); /* n_assign= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_obra= for (self: ABraassignMethid, TObra) */
void nit__parser_prod___ABraassignMethid___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val = var_node; /* _n_obra on <self:ABraassignMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TObra>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_cbra= for (self: ABraassignMethid, TCbra) */
void nit__parser_prod___ABraassignMethid___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraassignMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TCbra>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_assign= for (self: ABraassignMethid, TAssign) */
void nit__parser_prod___ABraassignMethid___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val = var_node; /* _n_assign on <self:ABraassignMethid> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_node, self); /* parent= on <var_node:TAssign>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#visit_all for (self: ABraassignMethid, Visitor) */
void nit__parser_prod___ABraassignMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
val* var2 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2137);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2138);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var1); /* enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2139);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASignature#init_asignature for (self: ASignature, nullable TOpar, Collection[Object], nullable TCpar, nullable AType) */
void nit__parser_prod___ASignature___init_asignature(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_params /* var n_params: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_type /* var n_type: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : ANodes[AParam] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ASignature>*/
}
var_n_opar = p0;
var_n_params = p1;
var_n_cpar = p2;
var_n_type = p3;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val = var_n_opar; /* _n_opar on <self:ASignature> */
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
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(self); /* n_params on <self:ASignature>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__unsafe_add_all]))(var2, var_n_params); /* unsafe_add_all on <var2:ANodes[AParam]>*/
}
self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val = var_n_cpar; /* _n_cpar on <self:ASignature> */
if (var_n_cpar == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_cpar, ((val*)NULL)); /* != on <var_n_cpar:nullable TCpar>*/
var3 = var4;
}
if (var3){
{
((void(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_cpar, self); /* parent= on <var_n_cpar:nullable TCpar(TCpar)>*/
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val = var_n_type; /* _n_type on <self:ASignature> */
if (var_n_type == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_n_type, ((val*)NULL)); /* != on <var_n_type:nullable AType>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n_type, self); /* parent= on <var_n_type:nullable AType(AType)>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#replace_child for (self: ASignature, ANode, nullable ANode) */
void nit__parser_prod___ASignature___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TOpar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : ANodes[AParam] */;
short int var5 /* : Bool */;
val* var6 /* : nullable TCpar */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
val* var13 /* : nullable AType */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_old_child); /* == on <var:nullable TOpar>*/
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2162);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_opar_61d]))(self, var_new_child); /* n_opar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(self); /* n_params on <self:ASignature>*/
}
{
var5 = ((short int(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_nit__parser_nodes__ANodes__replace_child]))(var4, var_old_child, var_new_child); /* replace_child on <var4:ANodes[AParam]>*/
}
if (var5){
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var8 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var_old_child); /* == on <var6:nullable TCpar>*/
var7 = var8;
}
if (var7){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype10 = type_nullable__nit__TCpar.color;
idtype11 = type_nullable__nit__TCpar.id;
if(var_new_child == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
var_class_name12 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2167);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_cpar_61d]))(self, var_new_child); /* n_cpar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
if (var13 == NULL) {
var14 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var13, var_old_child); /* == on <var13:nullable AType>*/
var14 = var15;
}
if (var14){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype17 = type_nullable__nit__AType.color;
idtype18 = type_nullable__nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2171);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_type_61d]))(self, var_new_child); /* n_type= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#n_opar= for (self: ASignature, nullable TOpar) */
void nit__parser_prod___ASignature___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val = var_node; /* _n_opar on <self:ASignature> */
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
/* method parser_prod#ASignature#n_cpar= for (self: ASignature, nullable TCpar) */
void nit__parser_prod___ASignature___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val = var_node; /* _n_cpar on <self:ASignature> */
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
/* method parser_prod#ASignature#n_type= for (self: ASignature, nullable AType) */
void nit__parser_prod___ASignature___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val = var_node; /* _n_type on <self:ASignature> */
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
/* method parser_prod#ASignature#visit_all for (self: ASignature, Visitor) */
void nit__parser_prod___ASignature___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TOpar */;
val* var1 /* : ANodes[AParam] */;
val* var2 /* : nullable TCpar */;
val* var3 /* : nullable AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var); /* enter_visit on <var_v:Visitor>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(self); /* n_params on <self:ASignature>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__ANodes__visit_all]))(var1, var_v); /* visit_all on <var1:ANodes[AParam]>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var2); /* enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var3); /* enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
