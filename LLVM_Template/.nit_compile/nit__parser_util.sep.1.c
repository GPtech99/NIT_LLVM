#include "nit__parser_util.sep.0.h"
/* method parser_util#ToolContext#parse_module for (self: ToolContext, String): AModule */
val* nit__parser_util___ToolContext___parse_module(val* self, val* p0) {
val* var /* : AModule */;
val* var_string /* var string: String */;
val* var1 /* : SourceFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var_source /* var source: SourceFile */;
val* var5 /* : Lexer */;
val* var_lexer /* var lexer: Lexer */;
val* var6 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var7 /* : Start */;
val* var_tree /* var tree: Start */;
val* var8 /* : EOF */;
val* var_eof /* var eof: EOF */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : NativeArray[String] */;
static val* varonce10;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : nullable AModule */;
var_string = p0;
var1 = NEW_nit__SourceFile(&type_nit__SourceFile);
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = standard___standard__NativeString___to_s_with_length(var3, 0l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nit__location__SourceFile__from_string]))(var1, var2, var_string); /* from_string on <var1:SourceFile>*/
}
var_source = var1;
var5 = NEW_nit__Lexer(&type_nit__Lexer);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__lexer_work__Lexer__file_61d]))(var5, var_source); /* file= on <var5:Lexer>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Lexer>*/
}
var_lexer = var5;
var6 = NEW_nit__Parser(&type_nit__Parser);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__parser_work__Parser__lexer_61d]))(var6, var_lexer); /* lexer= on <var6:Parser>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Parser>*/
}
var_parser = var6;
{
var7 = ((val*(*)(val* self))(var_parser->class->vft[COLOR_nit__parser_work__Parser__parse]))(var_parser); /* parse on <var_parser:Parser>*/
}
var_tree = var7;
{
var8 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_eof]))(var_tree); /* n_eof on <var_tree:Start>*/
}
var_eof = var8;
/* <var_eof:EOF> isa AError */
cltype = type_nit__AError.color;
idtype = type_nit__AError.id;
if(cltype >= var_eof->type->table_size) {
var9 = 0;
} else {
var9 = var_eof->type->type_table[cltype] == idtype;
}
if (var9){
if (unlikely(varonce10==NULL)) {
var11 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Fatal Error: ";
var15 = standard___standard__NativeString___to_s_with_length(var14, 13l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = ".";
var19 = standard___standard__NativeString___to_s_with_length(var18, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var11)->values[2]=var17;
} else {
var11 = varonce10;
varonce10 = NULL;
}
{
var20 = ((val*(*)(val* self))(var_eof->class->vft[COLOR_nit__lexer_work__AError__message]))(var_eof); /* message on <var_eof:EOF(AError)>*/
}
((struct instance_standard__NativeArray*)var11)->values[1]=var20;
{
var21 = ((val*(*)(val* self))(var11->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce10 = var11;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__fatal_error]))(self, ((val*)NULL), var21); /* fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 34);
fatal_exit(1);
} else {
}
{
var22 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_base]))(var_tree); /* n_base on <var_tree:Start>*/
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 36);
fatal_exit(1);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_classdef for (self: ToolContext, String): AClassdef */
val* nit__parser_util___ToolContext___parse_classdef(val* self, val* p0) {
val* var /* : AClassdef */;
val* var_string /* var string: String */;
val* var1 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var2 /* : ANodes[AClassdef] */;
val* var_nclassdefs /* var nclassdefs: ANodes[AClassdef] */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : nullable Object */;
var_string = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_util__ToolContext__parse_module]))(self, var_string); /* parse_module on <self:ToolContext>*/
}
var_nmodule = var1;
{
var2 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_nclassdefs = var2;
{
var3 = ((long(*)(val* self))(var_nclassdefs->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_nclassdefs); /* length on <var_nclassdefs:ANodes[AClassdef]>*/
}
{
{ /* Inline kernel#Int#!= (var3,1l) on <var3:Int> */
var6 = var3 == 1l;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "Fatal Error: not a classdef.";
var10 = standard___standard__NativeString___to_s_with_length(var9, 28l);
var8 = var10;
varonce = var8;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__fatal_error]))(self, ((val*)NULL), var8); /* fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 47);
fatal_exit(1);
} else {
}
{
var11 = ((val*(*)(val* self))(var_nclassdefs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_nclassdefs); /* first on <var_nclassdefs:ANodes[AClassdef]>*/
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_propdef for (self: ToolContext, String): APropdef */
val* nit__parser_util___ToolContext___parse_propdef(val* self, val* p0) {
val* var /* : APropdef */;
val* var_string /* var string: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var11 /* : AClassdef */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var12 /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : nullable Object */;
var_string = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "class Dummy\n";
var5 = standard___standard__NativeString___to_s_with_length(var4, 12l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\nend";
var9 = standard___standard__NativeString___to_s_with_length(var8, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var1)->values[1]=var_string;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_mod_string = var10;
{
var11 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_util__ToolContext__parse_classdef]))(self, var_mod_string); /* parse_classdef on <self:ToolContext>*/
}
var_nclassdef = var11;
{
var12 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:AClassdef>*/
}
var_npropdefs = var12;
{
var13 = ((long(*)(val* self))(var_npropdefs->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_npropdefs); /* length on <var_npropdefs:ANodes[APropdef]>*/
}
{
{ /* Inline kernel#Int#!= (var13,1l) on <var13:Int> */
var16 = var13 == 1l;
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "Fatal Error: not a propdef.";
var21 = standard___standard__NativeString___to_s_with_length(var20, 27l);
var19 = var21;
varonce18 = var19;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__fatal_error]))(self, ((val*)NULL), var19); /* fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 61);
fatal_exit(1);
} else {
}
{
var22 = ((val*(*)(val* self))(var_npropdefs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_npropdefs); /* first on <var_npropdefs:ANodes[APropdef]>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_stmts for (self: ToolContext, String): AExpr */
val* nit__parser_util___ToolContext___parse_stmts(val* self, val* p0) {
val* var /* : AExpr */;
val* var_string /* var string: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var11 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var12 /* : ANodes[AClassdef] */;
val* var13 /* : nullable Object */;
val* var14 /* : ANodes[APropdef] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var17 /* : nullable AExpr */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
val* var22 /* : ANodes[AExpr] */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
val* var28 /* : nullable AExpr */;
val* var_nblock /* var nblock: AExpr */;
var_string = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "do\n";
var5 = standard___standard__NativeString___to_s_with_length(var4, 3l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\nend";
var9 = standard___standard__NativeString___to_s_with_length(var8, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var1)->values[1]=var_string;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_mod_string = var10;
{
var11 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_util__ToolContext__parse_module]))(self, var_mod_string); /* parse_module on <self:ToolContext>*/
}
var_nmodule = var11;
{
var12 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var12); /* first on <var12:ANodes[AClassdef]>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var13); /* n_propdefs on <var13:nullable Object(AClassdef)>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var14); /* first on <var14:ANodes[APropdef]>*/
}
/* <var15:nullable Object(APropdef)> isa AMethPropdef */
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
if(cltype >= var15->type->table_size) {
var16 = 0;
} else {
var16 = var15->type->type_table[cltype] == idtype;
}
if (unlikely(!var16)) {
var_class_name = var15 == NULL ? "null" : var15->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 72);
fatal_exit(1);
}
{
var17 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(var15); /* n_block on <var15:APropdef(AMethPropdef)>*/
}
/* <var17:nullable AExpr> isa ABlockExpr */
cltype19 = type_nit__ABlockExpr.color;
idtype20 = type_nit__ABlockExpr.id;
if(var17 == NULL) {
var18 = 0;
} else {
if(cltype19 >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name21 = var17 == NULL ? "null" : var17->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 72);
fatal_exit(1);
}
{
var22 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(var17); /* n_expr on <var17:nullable AExpr(ABlockExpr)>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var22); /* first on <var22:ANodes[AExpr]>*/
}
/* <var23:nullable Object(AExpr)> isa ADoExpr */
cltype25 = type_nit__ADoExpr.color;
idtype26 = type_nit__ADoExpr.id;
if(cltype25 >= var23->type->table_size) {
var24 = 0;
} else {
var24 = var23->type->type_table[cltype25] == idtype26;
}
if (unlikely(!var24)) {
var_class_name27 = var23 == NULL ? "null" : var23->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ADoExpr", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 72);
fatal_exit(1);
}
{
var28 = ((val*(*)(val* self))(var23->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block]))(var23); /* n_block on <var23:AExpr(ADoExpr)>*/
}
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 72);
fatal_exit(1);
}
var_nblock = var28;
var = var_nblock;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_expr for (self: ToolContext, String): AExpr */
val* nit__parser_util___ToolContext___parse_expr(val* self, val* p0) {
val* var /* : AExpr */;
val* var_string /* var string: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var7 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var8 /* : ANodes[AClassdef] */;
val* var9 /* : nullable Object */;
val* var10 /* : ANodes[APropdef] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var13 /* : nullable AExpr */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : ANodes[AExpr] */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
var_string = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "var dummy = \n";
var5 = standard___standard__NativeString___to_s_with_length(var4, 13l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var1)->values[1]=var_string;
{
var6 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_mod_string = var6;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_util__ToolContext__parse_module]))(self, var_mod_string); /* parse_module on <self:ToolContext>*/
}
var_nmodule = var7;
{
var8 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var8); /* first on <var8:ANodes[AClassdef]>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var9); /* n_propdefs on <var9:nullable Object(AClassdef)>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var10); /* first on <var10:ANodes[APropdef]>*/
}
/* <var11:nullable Object(APropdef)> isa AMethPropdef */
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
if(cltype >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 82);
fatal_exit(1);
}
{
var13 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(var11); /* n_block on <var11:APropdef(AMethPropdef)>*/
}
/* <var13:nullable AExpr> isa ABlockExpr */
cltype15 = type_nit__ABlockExpr.color;
idtype16 = type_nit__ABlockExpr.id;
if(var13 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var13->type->table_size) {
var14 = 0;
} else {
var14 = var13->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var13 == NULL ? "null" : var13->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 82);
fatal_exit(1);
}
{
var18 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(var13); /* n_expr on <var13:nullable AExpr(ABlockExpr)>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var18); /* first on <var18:ANodes[AExpr]>*/
}
/* <var19:nullable Object(AExpr)> isa AVardeclExpr */
cltype21 = type_nit__AVardeclExpr.color;
idtype22 = type_nit__AVardeclExpr.id;
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
if (unlikely(!var20)) {
var_class_name23 = var19 == NULL ? "null" : var19->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVardeclExpr", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 82);
fatal_exit(1);
}
{
var24 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_expr]))(var19); /* n_expr on <var19:AExpr(AVardeclExpr)>*/
}
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 82);
fatal_exit(1);
}
var_nexpr = var24;
var = var_nexpr;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_superclass for (self: ToolContext, String): APropdef */
val* nit__parser_util___ToolContext___parse_superclass(val* self, val* p0) {
val* var /* : APropdef */;
val* var_string /* var string: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var11 /* : AClassdef */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_nclassdef /* var nclassdef: AStdClassdef */;
val* var13 /* : ANodes[APropdef] */;
val* var_nsuperclasses /* var nsuperclasses: ANodes[APropdef] */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : nullable Object */;
var_string = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "class Dummy\nsuper ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 18l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\nend";
var9 = standard___standard__NativeString___to_s_with_length(var8, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var1)->values[1]=var_string;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_mod_string = var10;
{
var11 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_util__ToolContext__parse_classdef]))(self, var_mod_string); /* parse_classdef on <self:ToolContext>*/
}
/* <var11:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AStdClassdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 91);
fatal_exit(1);
}
var_nclassdef = var11;
{
var13 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:AStdClassdef>*/
}
var_nsuperclasses = var13;
{
var14 = ((long(*)(val* self))(var_nsuperclasses->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_nsuperclasses); /* length on <var_nsuperclasses:ANodes[APropdef]>*/
}
{
{ /* Inline kernel#Int#!= (var14,1l) on <var14:Int> */
var17 = var14 == 1l;
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "Fatal Error: not a super class declaration.";
var22 = standard___standard__NativeString___to_s_with_length(var21, 43l);
var20 = var22;
varonce19 = var20;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__fatal_error]))(self, ((val*)NULL), var20); /* fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 95);
fatal_exit(1);
} else {
}
{
var23 = ((val*(*)(val* self))(var_nsuperclasses->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_nsuperclasses); /* first on <var_nsuperclasses:ANodes[APropdef]>*/
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_something for (self: ToolContext, String): ANode */
val* nit__parser_util___ToolContext___parse_something(val* self, val* p0) {
val* var /* : ANode */;
val* var_string /* var string: String */;
val* var1 /* : SourceFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var_source /* var source: SourceFile */;
val* var5 /* : InjectedLexer */;
val* var_lexer /* var lexer: nullable Object */;
val* var6 /* : List[Token] */;
val* var7 /* : TKwvar */;
val* var8 /* : List[Token] */;
val* var9 /* : TId */;
val* var10 /* : List[Token] */;
val* var11 /* : TColumn */;
val* var12 /* : List[Token] */;
val* var13 /* : TClassid */;
val* var14 /* : List[Token] */;
val* var15 /* : TObra */;
val* var16 /* : List[Token] */;
val* var17 /* : TCbra */;
val* var18 /* : Parser */;
val* var19 /* : Start */;
val* var_tree /* var tree: nullable Object */;
val* var20 /* : EOF */;
val* var_eof /* var eof: nullable Object */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var22 /* : Bool */;
val* var23 /* : nullable AModule */;
val* var24 /* : ANodes[AClassdef] */;
val* var25 /* : nullable Object */;
val* var26 /* : ANodes[APropdef] */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name;
val* var31 /* : nullable AExpr */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
val* var36 /* : ANodes[AExpr] */;
val* var37 /* : nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
val* var42 /* : nullable AType */;
val* var43 /* : ANodes[AType] */;
val* var44 /* : nullable Object */;
val* var_ntype /* var ntype: AType */;
val* var_error /* var error: nullable Object */;
val* var45 /* : Lexer */;
val* var46 /* : Token */;
val* var_first /* var first: Token */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : Token */;
val* var_second /* var second: Token */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
short int var_ /* var : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
short int var58 /* : Bool */;
val* var59 /* : InjectedLexer */;
val* var60 /* : List[Token] */;
val* var61 /* : TKwvar */;
val* var62 /* : List[Token] */;
val* var63 /* : TId */;
val* var64 /* : List[Token] */;
val* var65 /* : TAssign */;
val* var66 /* : List[Token] */;
val* var67 /* : TOpar */;
val* var68 /* : List[Token] */;
val* var69 /* : TCpar */;
val* var70 /* : Parser */;
val* var71 /* : Start */;
val* var72 /* : EOF */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
short int var76 /* : Bool */;
val* var77 /* : nullable AModule */;
val* var78 /* : ANodes[AClassdef] */;
val* var79 /* : nullable Object */;
val* var80 /* : ANodes[APropdef] */;
val* var81 /* : nullable Object */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
val* var86 /* : nullable AExpr */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
val* var91 /* : ANodes[AExpr] */;
val* var92 /* : nullable Object */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
val* var97 /* : nullable AExpr */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
val* var102 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
val* var103 /* : Location */;
val* var104 /* : Location */;
short int var105 /* : Bool */;
val* var106 /* : InjectedLexer */;
val* var107 /* : List[Token] */;
val* var108 /* : TKwdo */;
val* var109 /* : List[Token] */;
val* var110 /* : TEol */;
val* var111 /* : List[Token] */;
val* var112 /* : TEol */;
val* var113 /* : List[Token] */;
val* var114 /* : TKwend */;
val* var115 /* : Parser */;
val* var116 /* : Start */;
val* var117 /* : EOF */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
short int var121 /* : Bool */;
val* var122 /* : nullable AModule */;
val* var123 /* : ANodes[AClassdef] */;
val* var124 /* : nullable Object */;
val* var125 /* : ANodes[APropdef] */;
val* var126 /* : nullable Object */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name130;
val* var131 /* : nullable AExpr */;
short int var132 /* : Bool */;
int cltype133;
int idtype134;
const char* var_class_name135;
val* var136 /* : ANodes[AExpr] */;
val* var137 /* : nullable Object */;
short int var138 /* : Bool */;
int cltype139;
int idtype140;
const char* var_class_name141;
val* var142 /* : nullable AExpr */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
const char* var_class_name146;
val* var_nblock /* var nblock: ABlockExpr */;
val* var147 /* : Location */;
val* var148 /* : Location */;
short int var149 /* : Bool */;
val* var150 /* : Lexer */;
val* var151 /* : Parser */;
val* var152 /* : Start */;
val* var153 /* : EOF */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
short int var157 /* : Bool */;
val* var158 /* : nullable AModule */;
val* var159 /* : Location */;
val* var160 /* : Location */;
short int var161 /* : Bool */;
var_string = p0;
var1 = NEW_nit__SourceFile(&type_nit__SourceFile);
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = standard___standard__NativeString___to_s_with_length(var3, 0l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nit__location__SourceFile__from_string]))(var1, var2, var_string); /* from_string on <var1:SourceFile>*/
}
var_source = var1;
var5 = NEW_nit__InjectedLexer(&type_nit__InjectedLexer);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__lexer_work__Lexer__file_61d]))(var5, var_source); /* file= on <var5:InjectedLexer>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:InjectedLexer>*/
}
var_lexer = var5;
{
var6 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var7 = NEW_nit__TKwvar(&type_nit__TKwvar);
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:TKwvar>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var6, var7); /* add on <var6:List[Token]>*/
}
{
var8 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var9 = NEW_nit__TId(&type_nit__TId);
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:TId>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var8, var9); /* add on <var8:List[Token]>*/
}
{
var10 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var11 = NEW_nit__TColumn(&type_nit__TColumn);
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:TColumn>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var10, var11); /* add on <var10:List[Token]>*/
}
{
var12 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var13 = NEW_nit__TClassid(&type_nit__TClassid);
{
((void(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13); /* init on <var13:TClassid>*/
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var12, var13); /* add on <var12:List[Token]>*/
}
{
var14 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var15 = NEW_nit__TObra(&type_nit__TObra);
{
((void(*)(val* self))(var15->class->vft[COLOR_standard__kernel__Object__init]))(var15); /* init on <var15:TObra>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var14, var15); /* add on <var14:List[Token]>*/
}
{
var16 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_after]))(var_lexer); /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/
}
var17 = NEW_nit__TCbra(&type_nit__TCbra);
{
((void(*)(val* self))(var17->class->vft[COLOR_standard__kernel__Object__init]))(var17); /* init on <var17:TCbra>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var16, var17); /* add on <var16:List[Token]>*/
}
var18 = NEW_nit__Parser(&type_nit__Parser);
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__parser_work__Parser__lexer_61d]))(var18, var_lexer); /* lexer= on <var18:Parser>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:Parser>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__parser_work__Parser__parse]))(var18); /* parse on <var18:Parser>*/
}
var_tree = var19;
{
var20 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_eof]))(var_tree); /* n_eof on <var_tree:nullable Object(Start)>*/
}
var_eof = var20;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype = type_nit__AError.color;
idtype = type_nit__AError.id;
if(cltype >= var_eof->type->table_size) {
var21 = 0;
} else {
var21 = var_eof->type->type_table[cltype] == idtype;
}
var22 = !var21;
if (var22){
{
var23 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_base]))(var_tree); /* n_base on <var_tree:nullable Object(Start)>*/
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 137);
fatal_exit(1);
} else {
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var23); /* n_classdefs on <var23:nullable AModule>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var24); /* first on <var24:ANodes[AClassdef]>*/
}
{
var26 = ((val*(*)(val* self))(var25->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var25); /* n_propdefs on <var25:nullable Object(AClassdef)>*/
}
{
var27 = ((val*(*)(val* self))(var26->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var26); /* first on <var26:ANodes[APropdef]>*/
}
/* <var27:nullable Object(APropdef)> isa AMethPropdef */
cltype29 = type_nit__AMethPropdef.color;
idtype30 = type_nit__AMethPropdef.id;
if(cltype29 >= var27->type->table_size) {
var28 = 0;
} else {
var28 = var27->type->type_table[cltype29] == idtype30;
}
if (unlikely(!var28)) {
var_class_name = var27 == NULL ? "null" : var27->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 137);
fatal_exit(1);
}
{
var31 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(var27); /* n_block on <var27:APropdef(AMethPropdef)>*/
}
/* <var31:nullable AExpr> isa ABlockExpr */
cltype33 = type_nit__ABlockExpr.color;
idtype34 = type_nit__ABlockExpr.id;
if(var31 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var31->type->table_size) {
var32 = 0;
} else {
var32 = var31->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
var_class_name35 = var31 == NULL ? "null" : var31->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 137);
fatal_exit(1);
}
{
var36 = ((val*(*)(val* self))(var31->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(var31); /* n_expr on <var31:nullable AExpr(ABlockExpr)>*/
}
{
var37 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var36); /* first on <var36:ANodes[AExpr]>*/
}
/* <var37:nullable Object(AExpr)> isa AVardeclExpr */
cltype39 = type_nit__AVardeclExpr.color;
idtype40 = type_nit__AVardeclExpr.id;
if(cltype39 >= var37->type->table_size) {
var38 = 0;
} else {
var38 = var37->type->type_table[cltype39] == idtype40;
}
if (unlikely(!var38)) {
var_class_name41 = var37 == NULL ? "null" : var37->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVardeclExpr", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 137);
fatal_exit(1);
}
{
var42 = ((val*(*)(val* self))(var37->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_type]))(var37); /* n_type on <var37:AExpr(AVardeclExpr)>*/
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 137);
fatal_exit(1);
} else {
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(var42); /* n_types on <var42:nullable AType>*/
}
{
var44 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var43); /* first on <var43:ANodes[AType]>*/
}
var_ntype = var44;
{
((void(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_ntype, ((val*)NULL)); /* parent= on <var_ntype:AType>*/
}
var = var_ntype;
goto RET_LABEL;
} else {
}
var_error = var_eof;
var45 = NEW_nit__Lexer(&type_nit__Lexer);
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_nit__lexer_work__Lexer__file_61d]))(var45, var_source); /* file= on <var45:Lexer>*/
}
{
((void(*)(val* self))(var45->class->vft[COLOR_standard__kernel__Object__init]))(var45); /* init on <var45:Lexer>*/
}
var_lexer = var45;
{
var46 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__lexer_work__Lexer__next]))(var_lexer); /* next on <var_lexer:nullable Object(Lexer)>*/
}
var_first = var46;
/* <var_first:Token> isa EOF */
cltype48 = type_nit__EOF.color;
idtype49 = type_nit__EOF.id;
if(cltype48 >= var_first->type->table_size) {
var47 = 0;
} else {
var47 = var_first->type->type_table[cltype48] == idtype49;
}
if (var47){
var = var_first;
goto RET_LABEL;
} else {
}
{
var50 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__lexer_work__Lexer__next]))(var_lexer); /* next on <var_lexer:nullable Object(Lexer)>*/
}
var_second = var50;
/* <var_second:Token> isa EOF */
cltype53 = type_nit__EOF.color;
idtype54 = type_nit__EOF.id;
if(cltype53 >= var_second->type->table_size) {
var52 = 0;
} else {
var52 = var_second->type->type_table[cltype53] == idtype54;
}
var_ = var52;
if (var52){
/* <var_second:Token(EOF)> isa AError */
cltype56 = type_nit__AError.color;
idtype57 = type_nit__AError.id;
if(cltype56 >= var_second->type->table_size) {
var55 = 0;
} else {
var55 = var_second->type->type_table[cltype56] == idtype57;
}
var58 = !var55;
var51 = var58;
} else {
var51 = var_;
}
if (var51){
{
((void(*)(val* self, val* p0))(var_first->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_first, ((val*)NULL)); /* parent= on <var_first:Token>*/
}
var = var_first;
goto RET_LABEL;
} else {
}
var59 = NEW_nit__InjectedLexer(&type_nit__InjectedLexer);
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_nit__lexer_work__Lexer__file_61d]))(var59, var_source); /* file= on <var59:InjectedLexer>*/
}
{
((void(*)(val* self))(var59->class->vft[COLOR_standard__kernel__Object__init]))(var59); /* init on <var59:InjectedLexer>*/
}
var_lexer = var59;
{
var60 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var61 = NEW_nit__TKwvar(&type_nit__TKwvar);
{
((void(*)(val* self))(var61->class->vft[COLOR_standard__kernel__Object__init]))(var61); /* init on <var61:TKwvar>*/
}
{
((void(*)(val* self, val* p0))(var60->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var60, var61); /* add on <var60:List[Token]>*/
}
{
var62 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var63 = NEW_nit__TId(&type_nit__TId);
{
((void(*)(val* self))(var63->class->vft[COLOR_standard__kernel__Object__init]))(var63); /* init on <var63:TId>*/
}
{
((void(*)(val* self, val* p0))(var62->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var62, var63); /* add on <var62:List[Token]>*/
}
{
var64 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var65 = NEW_nit__TAssign(&type_nit__TAssign);
{
((void(*)(val* self))(var65->class->vft[COLOR_standard__kernel__Object__init]))(var65); /* init on <var65:TAssign>*/
}
{
((void(*)(val* self, val* p0))(var64->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var64, var65); /* add on <var64:List[Token]>*/
}
{
var66 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var67 = NEW_nit__TOpar(&type_nit__TOpar);
{
((void(*)(val* self))(var67->class->vft[COLOR_standard__kernel__Object__init]))(var67); /* init on <var67:TOpar>*/
}
{
((void(*)(val* self, val* p0))(var66->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var66, var67); /* add on <var66:List[Token]>*/
}
{
var68 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_after]))(var_lexer); /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/
}
var69 = NEW_nit__TCpar(&type_nit__TCpar);
{
((void(*)(val* self))(var69->class->vft[COLOR_standard__kernel__Object__init]))(var69); /* init on <var69:TCpar>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var68, var69); /* add on <var68:List[Token]>*/
}
var70 = NEW_nit__Parser(&type_nit__Parser);
{
((void(*)(val* self, val* p0))(var70->class->vft[COLOR_nit__parser_work__Parser__lexer_61d]))(var70, var_lexer); /* lexer= on <var70:Parser>*/
}
{
((void(*)(val* self))(var70->class->vft[COLOR_standard__kernel__Object__init]))(var70); /* init on <var70:Parser>*/
}
{
var71 = ((val*(*)(val* self))(var70->class->vft[COLOR_nit__parser_work__Parser__parse]))(var70); /* parse on <var70:Parser>*/
}
var_tree = var71;
{
var72 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_eof]))(var_tree); /* n_eof on <var_tree:nullable Object(Start)>*/
}
var_eof = var72;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype74 = type_nit__AError.color;
idtype75 = type_nit__AError.id;
if(cltype74 >= var_eof->type->table_size) {
var73 = 0;
} else {
var73 = var_eof->type->type_table[cltype74] == idtype75;
}
var76 = !var73;
if (var76){
{
var77 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_base]))(var_tree); /* n_base on <var_tree:nullable Object(Start)>*/
}
if (var77 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 161);
fatal_exit(1);
} else {
var78 = ((val*(*)(val* self))(var77->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var77); /* n_classdefs on <var77:nullable AModule>*/
}
{
var79 = ((val*(*)(val* self))(var78->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var78); /* first on <var78:ANodes[AClassdef]>*/
}
{
var80 = ((val*(*)(val* self))(var79->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var79); /* n_propdefs on <var79:nullable Object(AClassdef)>*/
}
{
var81 = ((val*(*)(val* self))(var80->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var80); /* first on <var80:ANodes[APropdef]>*/
}
/* <var81:nullable Object(APropdef)> isa AMethPropdef */
cltype83 = type_nit__AMethPropdef.color;
idtype84 = type_nit__AMethPropdef.id;
if(cltype83 >= var81->type->table_size) {
var82 = 0;
} else {
var82 = var81->type->type_table[cltype83] == idtype84;
}
if (unlikely(!var82)) {
var_class_name85 = var81 == NULL ? "null" : var81->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 161);
fatal_exit(1);
}
{
var86 = ((val*(*)(val* self))(var81->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(var81); /* n_block on <var81:APropdef(AMethPropdef)>*/
}
/* <var86:nullable AExpr> isa ABlockExpr */
cltype88 = type_nit__ABlockExpr.color;
idtype89 = type_nit__ABlockExpr.id;
if(var86 == NULL) {
var87 = 0;
} else {
if(cltype88 >= var86->type->table_size) {
var87 = 0;
} else {
var87 = var86->type->type_table[cltype88] == idtype89;
}
}
if (unlikely(!var87)) {
var_class_name90 = var86 == NULL ? "null" : var86->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 161);
fatal_exit(1);
}
{
var91 = ((val*(*)(val* self))(var86->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(var86); /* n_expr on <var86:nullable AExpr(ABlockExpr)>*/
}
{
var92 = ((val*(*)(val* self))(var91->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var91); /* first on <var91:ANodes[AExpr]>*/
}
/* <var92:nullable Object(AExpr)> isa AVardeclExpr */
cltype94 = type_nit__AVardeclExpr.color;
idtype95 = type_nit__AVardeclExpr.id;
if(cltype94 >= var92->type->table_size) {
var93 = 0;
} else {
var93 = var92->type->type_table[cltype94] == idtype95;
}
if (unlikely(!var93)) {
var_class_name96 = var92 == NULL ? "null" : var92->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVardeclExpr", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 161);
fatal_exit(1);
}
{
var97 = ((val*(*)(val* self))(var92->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_expr]))(var92); /* n_expr on <var92:AExpr(AVardeclExpr)>*/
}
/* <var97:nullable AExpr> isa AParExpr */
cltype99 = type_nit__AParExpr.color;
idtype100 = type_nit__AParExpr.id;
if(var97 == NULL) {
var98 = 0;
} else {
if(cltype99 >= var97->type->table_size) {
var98 = 0;
} else {
var98 = var97->type->type_table[cltype99] == idtype100;
}
}
if (unlikely(!var98)) {
var_class_name101 = var97 == NULL ? "null" : var97->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AParExpr", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 161);
fatal_exit(1);
}
{
var102 = ((val*(*)(val* self))(var97->class->vft[COLOR_nit__parser_nodes__AParExpr__n_expr]))(var97); /* n_expr on <var97:nullable AExpr(AParExpr)>*/
}
var_nexpr = var102;
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_nexpr, ((val*)NULL)); /* parent= on <var_nexpr:AExpr>*/
}
var = var_nexpr;
goto RET_LABEL;
} else {
}
{
var103 = ((val*(*)(val* self))(var_eof->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_eof); /* location on <var_eof:nullable Object(AError)>*/
}
{
var104 = ((val*(*)(val* self))(var_error->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_error); /* location on <var_error:nullable Object(AError)>*/
}
{
var105 = ((short int(*)(val* self, val* p0))(var103->class->vft[COLOR_standard__kernel__Comparable___62d]))(var103, var104); /* > on <var103:Location>*/
}
if (var105){
var_error = var_eof;
} else {
}
var106 = NEW_nit__InjectedLexer(&type_nit__InjectedLexer);
{
((void(*)(val* self, val* p0))(var106->class->vft[COLOR_nit__lexer_work__Lexer__file_61d]))(var106, var_source); /* file= on <var106:InjectedLexer>*/
}
{
((void(*)(val* self))(var106->class->vft[COLOR_standard__kernel__Object__init]))(var106); /* init on <var106:InjectedLexer>*/
}
var_lexer = var106;
{
var107 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var108 = NEW_nit__TKwdo(&type_nit__TKwdo);
{
((void(*)(val* self))(var108->class->vft[COLOR_standard__kernel__Object__init]))(var108); /* init on <var108:TKwdo>*/
}
{
((void(*)(val* self, val* p0))(var107->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var107, var108); /* add on <var107:List[Token]>*/
}
{
var109 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(var_lexer); /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/
}
var110 = NEW_nit__TEol(&type_nit__TEol);
{
((void(*)(val* self))(var110->class->vft[COLOR_standard__kernel__Object__init]))(var110); /* init on <var110:TEol>*/
}
{
((void(*)(val* self, val* p0))(var109->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var109, var110); /* add on <var109:List[Token]>*/
}
{
var111 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_after]))(var_lexer); /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/
}
var112 = NEW_nit__TEol(&type_nit__TEol);
{
((void(*)(val* self))(var112->class->vft[COLOR_standard__kernel__Object__init]))(var112); /* init on <var112:TEol>*/
}
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var111, var112); /* add on <var111:List[Token]>*/
}
{
var113 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_after]))(var_lexer); /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/
}
var114 = NEW_nit__TKwend(&type_nit__TKwend);
{
((void(*)(val* self))(var114->class->vft[COLOR_standard__kernel__Object__init]))(var114); /* init on <var114:TKwend>*/
}
{
((void(*)(val* self, val* p0))(var113->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var113, var114); /* add on <var113:List[Token]>*/
}
var115 = NEW_nit__Parser(&type_nit__Parser);
{
((void(*)(val* self, val* p0))(var115->class->vft[COLOR_nit__parser_work__Parser__lexer_61d]))(var115, var_lexer); /* lexer= on <var115:Parser>*/
}
{
((void(*)(val* self))(var115->class->vft[COLOR_standard__kernel__Object__init]))(var115); /* init on <var115:Parser>*/
}
{
var116 = ((val*(*)(val* self))(var115->class->vft[COLOR_nit__parser_work__Parser__parse]))(var115); /* parse on <var115:Parser>*/
}
var_tree = var116;
{
var117 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_eof]))(var_tree); /* n_eof on <var_tree:nullable Object(Start)>*/
}
var_eof = var117;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype119 = type_nit__AError.color;
idtype120 = type_nit__AError.id;
if(cltype119 >= var_eof->type->table_size) {
var118 = 0;
} else {
var118 = var_eof->type->type_table[cltype119] == idtype120;
}
var121 = !var118;
if (var121){
{
var122 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_base]))(var_tree); /* n_base on <var_tree:nullable Object(Start)>*/
}
if (var122 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 175);
fatal_exit(1);
} else {
var123 = ((val*(*)(val* self))(var122->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var122); /* n_classdefs on <var122:nullable AModule>*/
}
{
var124 = ((val*(*)(val* self))(var123->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var123); /* first on <var123:ANodes[AClassdef]>*/
}
{
var125 = ((val*(*)(val* self))(var124->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var124); /* n_propdefs on <var124:nullable Object(AClassdef)>*/
}
{
var126 = ((val*(*)(val* self))(var125->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var125); /* first on <var125:ANodes[APropdef]>*/
}
/* <var126:nullable Object(APropdef)> isa AMethPropdef */
cltype128 = type_nit__AMethPropdef.color;
idtype129 = type_nit__AMethPropdef.id;
if(cltype128 >= var126->type->table_size) {
var127 = 0;
} else {
var127 = var126->type->type_table[cltype128] == idtype129;
}
if (unlikely(!var127)) {
var_class_name130 = var126 == NULL ? "null" : var126->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name130);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 175);
fatal_exit(1);
}
{
var131 = ((val*(*)(val* self))(var126->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(var126); /* n_block on <var126:APropdef(AMethPropdef)>*/
}
/* <var131:nullable AExpr> isa ABlockExpr */
cltype133 = type_nit__ABlockExpr.color;
idtype134 = type_nit__ABlockExpr.id;
if(var131 == NULL) {
var132 = 0;
} else {
if(cltype133 >= var131->type->table_size) {
var132 = 0;
} else {
var132 = var131->type->type_table[cltype133] == idtype134;
}
}
if (unlikely(!var132)) {
var_class_name135 = var131 == NULL ? "null" : var131->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name135);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 175);
fatal_exit(1);
}
{
var136 = ((val*(*)(val* self))(var131->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(var131); /* n_expr on <var131:nullable AExpr(ABlockExpr)>*/
}
{
var137 = ((val*(*)(val* self))(var136->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var136); /* first on <var136:ANodes[AExpr]>*/
}
/* <var137:nullable Object(AExpr)> isa ADoExpr */
cltype139 = type_nit__ADoExpr.color;
idtype140 = type_nit__ADoExpr.id;
if(cltype139 >= var137->type->table_size) {
var138 = 0;
} else {
var138 = var137->type->type_table[cltype139] == idtype140;
}
if (unlikely(!var138)) {
var_class_name141 = var137 == NULL ? "null" : var137->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ADoExpr", var_class_name141);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 175);
fatal_exit(1);
}
{
var142 = ((val*(*)(val* self))(var137->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block]))(var137); /* n_block on <var137:AExpr(ADoExpr)>*/
}
/* <var142:nullable AExpr> isa ABlockExpr */
cltype144 = type_nit__ABlockExpr.color;
idtype145 = type_nit__ABlockExpr.id;
if(var142 == NULL) {
var143 = 0;
} else {
if(cltype144 >= var142->type->table_size) {
var143 = 0;
} else {
var143 = var142->type->type_table[cltype144] == idtype145;
}
}
if (unlikely(!var143)) {
var_class_name146 = var142 == NULL ? "null" : var142->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name146);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 175);
fatal_exit(1);
}
var_nblock = var142;
{
((void(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_kwend_61d]))(var_nblock, ((val*)NULL)); /* n_kwend= on <var_nblock:ABlockExpr>*/
}
{
((void(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_nblock, ((val*)NULL)); /* parent= on <var_nblock:ABlockExpr>*/
}
var = var_nblock;
goto RET_LABEL;
} else {
}
{
var147 = ((val*(*)(val* self))(var_eof->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_eof); /* location on <var_eof:nullable Object(AError)>*/
}
{
var148 = ((val*(*)(val* self))(var_error->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_error); /* location on <var_error:nullable Object(AError)>*/
}
{
var149 = ((short int(*)(val* self, val* p0))(var147->class->vft[COLOR_standard__kernel__Comparable___62d]))(var147, var148); /* > on <var147:Location>*/
}
if (var149){
var_error = var_eof;
} else {
}
var150 = NEW_nit__Lexer(&type_nit__Lexer);
{
((void(*)(val* self, val* p0))(var150->class->vft[COLOR_nit__lexer_work__Lexer__file_61d]))(var150, var_source); /* file= on <var150:Lexer>*/
}
{
((void(*)(val* self))(var150->class->vft[COLOR_standard__kernel__Object__init]))(var150); /* init on <var150:Lexer>*/
}
var_lexer = var150;
var151 = NEW_nit__Parser(&type_nit__Parser);
{
((void(*)(val* self, val* p0))(var151->class->vft[COLOR_nit__parser_work__Parser__lexer_61d]))(var151, var_lexer); /* lexer= on <var151:Parser>*/
}
{
((void(*)(val* self))(var151->class->vft[COLOR_standard__kernel__Object__init]))(var151); /* init on <var151:Parser>*/
}
{
var152 = ((val*(*)(val* self))(var151->class->vft[COLOR_nit__parser_work__Parser__parse]))(var151); /* parse on <var151:Parser>*/
}
var_tree = var152;
{
var153 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_eof]))(var_tree); /* n_eof on <var_tree:nullable Object(Start)>*/
}
var_eof = var153;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype155 = type_nit__AError.color;
idtype156 = type_nit__AError.id;
if(cltype155 >= var_eof->type->table_size) {
var154 = 0;
} else {
var154 = var_eof->type->type_table[cltype155] == idtype156;
}
var157 = !var154;
if (var157){
{
var158 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_base]))(var_tree); /* n_base on <var_tree:nullable Object(Start)>*/
}
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 186);
fatal_exit(1);
}
var = var158;
goto RET_LABEL;
} else {
}
{
var159 = ((val*(*)(val* self))(var_eof->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_eof); /* location on <var_eof:nullable Object(AError)>*/
}
{
var160 = ((val*(*)(val* self))(var_error->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_error); /* location on <var_error:nullable Object(AError)>*/
}
{
var161 = ((short int(*)(val* self, val* p0))(var159->class->vft[COLOR_standard__kernel__Comparable___62d]))(var159, var160); /* > on <var159:Location>*/
}
if (var161){
var_error = var_eof;
} else {
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#interactive_parse for (self: ToolContext, String): ANode */
val* nit__parser_util___ToolContext___interactive_parse(val* self, val* p0) {
val* var /* : ANode */;
val* var_prompt /* var prompt: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var_oldtext /* var oldtext: String */;
val* var4 /* : Sys */;
val* var5 /* : Array[Object] */;
val* var6 /* : NativeArray[Object] */;
val* var7 /* : Sys */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : Array[Object] */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : Sys */;
val* var16 /* : Sys */;
val* var17 /* : PollableReader */;
val* var18 /* : String */;
val* var_s /* var s: String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
short int var23 /* : Bool */;
val* var24 /* : SequenceRead[Char] */;
val* var25 /* : nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
char var29 /* : Char */;
val* var30 /* : TString */;
val* var_res /* var res: TString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var_text /* var text: String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
val* var41 /* : ANode */;
val* var_n /* var n: ANode */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var44 /* : Token */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
long var57 /* : Int */;
val* var58 /* : String */;
var_prompt = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = standard___standard__NativeString___to_s_with_length(var2, 0l);
var1 = var3;
varonce = var1;
}
var_oldtext = var1;
for(;;) {
var4 = glob_sys;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var5 = array_instance Array[Object] */
var6 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var6)->values[0] = (val*) var_prompt;
{
((void(*)(val* self, val* p0, long p1))(var5->class->vft[COLOR_standard__array__Array__with_native]))(var5, var6, 1l); /* with_native on <var5:Array[Object]>*/
}
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__file__Sys__printn]))(var4, var5); /* printn on <var4:Sys>*/
}
var7 = glob_sys;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = " ";
var11 = standard___standard__NativeString___to_s_with_length(var10, 1l);
var9 = var11;
varonce8 = var9;
}
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var12 = array_instance Array[Object] */
var13 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var9;
{
((void(*)(val* self, val* p0, long p1))(var12->class->vft[COLOR_standard__array__Array__with_native]))(var12, var13, 1l); /* with_native on <var12:Array[Object]>*/
}
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__file__Sys__printn]))(var7, var12); /* printn on <var7:Sys>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var16 = glob_sys;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
var17 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__file__Sys__stdin]))(var14); /* stdin on <var14:Sys>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__stream__Reader__read_line]))(var17); /* read_line on <var17:PollableReader>*/
}
var_s = var18;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "";
var22 = standard___standard__NativeString___to_s_with_length(var21, 0l);
var20 = var22;
varonce19 = var20;
}
{
var23 = ((short int(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_s, var20); /* == on <var_s:String>*/
}
if (var23){
goto BREAK_label;
} else {
}
{
var24 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:String>*/
}
{
var25 = ((val*(*)(val* self))((((long)var24&3)?class_info[((long)var24&3)]:var24->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var24); /* first on <var24:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var25,':') on <var25:nullable Object(Char)> */
var29 = (char)((long)(var25)>>2);
var28 = (var25 != NULL) && (var29 == ':');
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var30 = NEW_nit__TString(&type_nit__TString);
{
((void(*)(val* self))(var30->class->vft[COLOR_standard__kernel__Object__init]))(var30); /* init on <var30:TString>*/
}
var_res = var30;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_nit__parser_nodes__Token__text_61d]))(var_res, var_s); /* text= on <var_res:TString>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var31 = ((val*(*)(val* self, val* p0))(var_oldtext->class->vft[COLOR_standard__string__String___43d]))(var_oldtext, var_s); /* + on <var_oldtext:String>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "\n";
var35 = standard___standard__NativeString___to_s_with_length(var34, 1l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((val*(*)(val* self, val* p0))(var31->class->vft[COLOR_standard__string__String___43d]))(var31, var33); /* + on <var31:String>*/
}
var_text = var36;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "";
var40 = standard___standard__NativeString___to_s_with_length(var39, 0l);
var38 = var40;
varonce37 = var38;
}
var_oldtext = var38;
{
var41 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_util__ToolContext__parse_something]))(self, var_text); /* parse_something on <self:ToolContext>*/
}
var_n = var41;
/* <var_n:ANode> isa AParserError */
cltype = type_nit__AParserError.color;
idtype = type_nit__AParserError.id;
if(cltype >= var_n->type->table_size) {
var43 = 0;
} else {
var43 = var_n->type->type_table[cltype] == idtype;
}
var_ = var43;
if (var43){
{
var44 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__lexer_work__AParserError__token]))(var_n); /* token on <var_n:ANode(AParserError)>*/
}
/* <var44:Token> isa EOF */
cltype46 = type_nit__EOF.color;
idtype47 = type_nit__EOF.id;
if(cltype46 >= var44->type->table_size) {
var45 = 0;
} else {
var45 = var44->type->type_table[cltype46] == idtype47;
}
var42 = var45;
} else {
var42 = var_;
}
if (var42){
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "";
var51 = standard___standard__NativeString___to_s_with_length(var50, 0l);
var49 = var51;
varonce48 = var49;
}
{
var52 = ((short int(*)(val* self, val* p0))(var_oldtext->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_oldtext, var49); /* == on <var_oldtext:String>*/
}
if (var52){
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = ".";
var56 = standard___standard__NativeString___to_s_with_length(var55, 1l);
var54 = var56;
varonce53 = var54;
}
{
var57 = ((long(*)(val* self))(var_prompt->class->vft[COLOR_standard__string__Text__length]))(var_prompt); /* length on <var_prompt:String>*/
}
{
var58 = ((val*(*)(val* self, long p0))(var54->class->vft[COLOR_standard__string__String___42d]))(var54, var57); /* * on <var54:String>*/
}
var_prompt = var58;
} else {
}
var_oldtext = var_text;
goto BREAK_label;
} else {
}
var = var_n;
goto RET_LABEL;
BREAK_label: (void)0;
}
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_before for (self: InjectedLexer): List[Token] */
val* nit___nit__InjectedLexer___injected_before(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = self->attrs[COLOR_nit__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <self:InjectedLexer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 229);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_before= for (self: InjectedLexer, List[Token]) */
void nit___nit__InjectedLexer___injected_before_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_util__InjectedLexer___injected_before].val = p0; /* _injected_before on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#injected_after for (self: InjectedLexer): List[Token] */
val* nit___nit__InjectedLexer___injected_after(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = self->attrs[COLOR_nit__parser_util__InjectedLexer___injected_after].val; /* _injected_after on <self:InjectedLexer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_after");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_util, 232);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_after= for (self: InjectedLexer, List[Token]) */
void nit___nit__InjectedLexer___injected_after_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_util__InjectedLexer___injected_after].val = p0; /* _injected_after on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#is_finished for (self: InjectedLexer): Bool */
short int nit___nit__InjectedLexer___is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__parser_util__InjectedLexer___is_finished].s; /* _is_finished on <self:InjectedLexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#is_finished= for (self: InjectedLexer, Bool) */
void nit___nit__InjectedLexer___is_finished_61d(val* self, short int p0) {
self->attrs[COLOR_nit__parser_util__InjectedLexer___is_finished].s = p0; /* _is_finished on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#get_token for (self: InjectedLexer): nullable Token */
val* nit___nit__InjectedLexer___nit__lexer_work__Lexer__get_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : List[Token] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : List[Token] */;
val* var5 /* : nullable Object */;
val* var_tok /* var tok: Token */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Token */;
val* var_next /* var next: nullable Token */;
short int var9 /* : Bool */;
int cltype;
int idtype;
short int var10 /* : Bool */;
val* var11 /* : List[Token] */;
val* var12 /* : List[Token] */;
val* var13 /* : nullable Object */;
val* var_tok14 /* var tok: Token */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(self); /* injected_before on <self:InjectedLexer>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:List[Token]>*/
}
var3 = !var2;
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_before]))(self); /* injected_before on <self:InjectedLexer>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__abstract_collection__Sequence__shift]))(var4); /* shift on <var4:List[Token]>*/
}
var_tok = var5;
var = var_tok;
goto RET_LABEL;
} else {
}
{
var6 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__parser_util__InjectedLexer__is_finished]))(self); /* is_finished on <self:InjectedLexer>*/
}
var7 = !var6;
if (var7){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit___nit__InjectedLexer___nit__lexer_work__Lexer__get_token]))(self); /* get_token on <self:InjectedLexer>*/
}
var_next = var8;
/* <var_next:nullable Token> isa EOF */
cltype = type_nit__EOF.color;
idtype = type_nit__EOF.id;
if(var_next == NULL) {
var9 = 0;
} else {
if(cltype >= var_next->type->table_size) {
var9 = 0;
} else {
var9 = var_next->type->type_table[cltype] == idtype;
}
}
var10 = !var9;
if (var10){
var = var_next;
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_after]))(self); /* injected_after on <self:InjectedLexer>*/
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var11, var_next); /* push on <var11:List[Token]>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__parser_util__InjectedLexer__is_finished_61d]))(self, 1); /* is_finished= on <self:InjectedLexer>*/
}
} else {
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_util__InjectedLexer__injected_after]))(self); /* injected_after on <self:InjectedLexer>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__abstract_collection__Sequence__shift]))(var12); /* shift on <var12:List[Token]>*/
}
var_tok14 = var13;
var = var_tok14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
