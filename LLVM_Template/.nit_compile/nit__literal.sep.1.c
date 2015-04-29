#include "nit__literal.sep.0.h"
/* method literal#ToolContext#literal_phase for (self: ToolContext): Phase */
val* nit__literal___ToolContext___literal_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__literal__ToolContext___literal_phase].val; /* _literal_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _literal_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ToolContext#literal_phase= for (self: ToolContext, Phase) */
void nit__literal___ToolContext___literal_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__ToolContext___literal_phase].val = p0; /* _literal_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method literal#LiteralPhase#process_nmodule for (self: LiteralPhase, AModule) */
void nit__literal___nit__literal__LiteralPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
var_nmodule = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:LiteralPhase>*/
}
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__literal__AModule__do_literal]))(var_nmodule, var); /* do_literal on <var_nmodule:AModule>*/
}
RET_LABEL:;
}
/* method literal#AModule#do_literal for (self: AModule, ToolContext) */
void nit__literal___AModule___do_literal(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LiteralVisitor */;
val* var_v /* var v: LiteralVisitor */;
var_toolcontext = p0;
var = NEW_nit__literal__LiteralVisitor(&type_nit__literal__LiteralVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__literal__LiteralVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:LiteralVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:LiteralVisitor>*/
}
var_v = var;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, self); /* enter_visit on <var_v:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#toolcontext for (self: LiteralVisitor): ToolContext */
val* nit__literal___nit__literal__LiteralVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <self:LiteralVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#LiteralVisitor#toolcontext= for (self: LiteralVisitor, ToolContext) */
void nit__literal___nit__literal__LiteralVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val = p0; /* _toolcontext on <self:LiteralVisitor> */
RET_LABEL:;
}
/* method literal#LiteralVisitor#visit for (self: LiteralVisitor, ANode) */
void nit__literal___nit__literal__LiteralVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__literal__ANode__accept_literal]))(var_n, self); /* accept_literal on <var_n:ANode>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#init for (self: LiteralVisitor) */
void nit__literal___nit__literal__LiteralVisitor___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__literal___nit__literal__LiteralVisitor___standard__kernel__Object__init]))(self); /* init on <self:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method literal#ANode#accept_literal for (self: ANode, LiteralVisitor) */
void nit__literal___ANode___accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method literal#AExpr#as_string for (self: AExpr): nullable String */
val* nit__literal___AExpr___as_string(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
/* <self:AExpr> isa AStringFormExpr */
cltype = type_nit__AStringFormExpr.color;
idtype = type_nit__AStringFormExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__AStringFormExpr__value]))(self); /* value on <self:AExpr(AStringFormExpr)>*/
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 65);
fatal_exit(1);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AExpr#as_int for (self: AExpr): nullable Int */
val* nit__literal___AExpr___as_int(val* self) {
val* var /* : nullable Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable Int */;
/* <self:AExpr> isa AIntExpr */
cltype = type_nit__AIntExpr.color;
idtype = type_nit__AIntExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__AIntExpr__value]))(self); /* value on <self:AExpr(AIntExpr)>*/
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 73);
fatal_exit(1);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AExpr#as_id for (self: AExpr): nullable String */
val* nit__literal___AExpr___as_id(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : String */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
val* var7 /* : AExpr */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
short int var11 /* : Bool */;
val* var12 /* : AExprs */;
val* var13 /* : ANodes[AExpr] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : TId */;
val* var17 /* : String */;
/* <self:AExpr> isa AMethidExpr */
cltype = type_nit__AMethidExpr.color;
idtype = type_nit__AMethidExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (var1){
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_work__Prod__collect_text]))(self); /* collect_text on <self:AExpr(AMethidExpr)>*/
}
var = var2;
goto RET_LABEL;
} else {
}
/* <self:AExpr> isa ACallExpr */
cltype4 = type_nit__ACallExpr.color;
idtype5 = type_nit__ACallExpr.id;
if(cltype4 >= self->type->table_size) {
var3 = 0;
} else {
var3 = self->type->type_table[cltype4] == idtype5;
}
var6 = !var3;
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(self); /* n_expr on <self:AExpr(ACallExpr)>*/
}
/* <var7:AExpr> isa AImplicitSelfExpr */
cltype9 = type_nit__AImplicitSelfExpr.color;
idtype10 = type_nit__AImplicitSelfExpr.id;
if(cltype9 >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype9] == idtype10;
}
var11 = !var8;
if (var11){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_args]))(self); /* n_args on <self:AExpr(ACallExpr)>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var12); /* n_exprs on <var12:AExprs>*/
}
{
var14 = ((short int(*)(val* self))(var13->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var13); /* is_empty on <var13:ANodes[AExpr]>*/
}
var15 = !var14;
if (var15){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACallFormExpr__n_id]))(self); /* n_id on <self:AExpr(ACallExpr)>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__parser_nodes__Token__text]))(var16); /* text on <var16:TId>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AIntExpr#value for (self: AIntExpr): nullable Int */
val* nit__literal___AIntExpr___value(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_nit__literal__AIntExpr___value].val; /* _value on <self:AIntExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AIntExpr#value= for (self: AIntExpr, nullable Int) */
void nit__literal___AIntExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__AIntExpr___value].val = p0; /* _value on <self:AIntExpr> */
RET_LABEL:;
}
/* method literal#ADecIntExpr#accept_literal for (self: ADecIntExpr, LiteralVisitor) */
void nit__literal___ADecIntExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TNumber */;
val* var1 /* : String */;
long var2 /* : Int */;
val* var3 /* : nullable Int */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADecIntExpr__n_number]))(self); /* n_number on <self:ADecIntExpr>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__parser_nodes__Token__text]))(var); /* text on <var:TNumber>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_i]))(var1); /* to_i on <var1:String>*/
}
{
var3 = (val*)(var2<<2|1);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__literal__AIntExpr__value_61d]))(self, var3); /* value= on <self:ADecIntExpr>*/
}
RET_LABEL:;
}
/* method literal#AHexIntExpr#accept_literal for (self: AHexIntExpr, LiteralVisitor) */
void nit__literal___AHexIntExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : THexNumber */;
val* var1 /* : String */;
val* var2 /* : Text */;
long var3 /* : Int */;
val* var4 /* : nullable Int */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AHexIntExpr__n_hex_number]))(self); /* n_hex_number on <self:AHexIntExpr>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__parser_nodes__Token__text]))(var); /* text on <var:THexNumber>*/
}
{
var2 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_standard__string__Text__substring_from]))(var1, 2l); /* substring_from on <var1:String>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_standard__string__Text__to_hex]))(var2); /* to_hex on <var2:Text(String)>*/
}
{
var4 = (val*)(var3<<2|1);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__literal__AIntExpr__value_61d]))(self, var4); /* value= on <self:AHexIntExpr>*/
}
RET_LABEL:;
}
/* method literal#AFloatExpr#value for (self: AFloatExpr): nullable Float */
val* nit__literal___AFloatExpr___value(val* self) {
val* var /* : nullable Float */;
val* var1 /* : nullable Float */;
var1 = self->attrs[COLOR_nit__literal__AFloatExpr___value].val; /* _value on <self:AFloatExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AFloatExpr#value= for (self: AFloatExpr, nullable Float) */
void nit__literal___AFloatExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__AFloatExpr___value].val = p0; /* _value on <self:AFloatExpr> */
RET_LABEL:;
}
/* method literal#AFloatExpr#accept_literal for (self: AFloatExpr, LiteralVisitor) */
void nit__literal___AFloatExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TFloat */;
val* var1 /* : String */;
double var2 /* : Float */;
val* var3 /* : nullable Float */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AFloatExpr__n_float]))(self); /* n_float on <self:AFloatExpr>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__parser_nodes__Token__text]))(var); /* text on <var:TFloat>*/
}
{
var2 = ((double(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_f]))(var1); /* to_f on <var1:String>*/
}
{
var3 = BOX_standard__Float(var2); /* autobox from Float to nullable Float */
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__literal__AFloatExpr__value_61d]))(self, var3); /* value= on <self:AFloatExpr>*/
}
RET_LABEL:;
}
/* method literal#ACharExpr#value for (self: ACharExpr): nullable Char */
val* nit__literal___ACharExpr___value(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable Char */;
var1 = self->attrs[COLOR_nit__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#value= for (self: ACharExpr, nullable Char) */
void nit__literal___ACharExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__ACharExpr___value].val = p0; /* _value on <self:ACharExpr> */
RET_LABEL:;
}
/* method literal#ACharExpr#accept_literal for (self: ACharExpr, LiteralVisitor) */
void nit__literal___ACharExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TChar */;
val* var1 /* : String */;
val* var2 /* : String */;
val* var_txt /* var txt: String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var9 /* : Location */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : Message */;
val* var21 /* : SequenceRead[Char] */;
val* var22 /* : nullable Object */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ACharExpr__n_char]))(self); /* n_char on <self:ACharExpr>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__parser_nodes__Token__text]))(var); /* text on <var:TChar>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__unescape_nit]))(var1); /* unescape_nit on <var1:String>*/
}
var_txt = var2;
{
var3 = ((long(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#!= (var3,3l) on <var3:Int> */
var6 = var3 == 3l;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__literal__LiteralVisitor__toolcontext]))(var_v); /* toolcontext on <var_v:LiteralVisitor>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(self); /* hot_location on <self:ACharExpr>*/
}
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Syntax Error: invalid character literal `";
var14 = standard___standard__NativeString___to_s_with_length(var13, 41l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "`.";
var18 = standard___standard__NativeString___to_s_with_length(var17, 2l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var10)->values[1]=var_txt;
{
var19 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
var20 = ((val*(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var8, var9, var19); /* error on <var8:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
var21 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var22 = ((val*(*)(val* self, long p0))((((long)var21&3)?class_info[((long)var21&3)]:var21->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var21, 1l); /* [] on <var21:SequenceRead[Char]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__literal__ACharExpr__value_61d]))(self, var22); /* value= on <self:ACharExpr>*/
}
RET_LABEL:;
}
/* method literal#AStringFormExpr#value for (self: AStringFormExpr): nullable String */
val* nit__literal___AStringFormExpr___value(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#value= for (self: AStringFormExpr, nullable String) */
void nit__literal___AStringFormExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__AStringFormExpr___value].val = p0; /* _value on <self:AStringFormExpr> */
RET_LABEL:;
}
/* method literal#AStringFormExpr#accept_literal for (self: AStringFormExpr, LiteralVisitor) */
void nit__literal___AStringFormExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : Token */;
val* var1 /* : String */;
val* var_txt /* var txt: String */;
long var_behead /* var behead: Int */;
long var_betail /* var betail: Int */;
short int var2 /* : Bool */;
val* var3 /* : SequenceRead[Char] */;
val* var4 /* : nullable Object */;
val* var5 /* : SequenceRead[Char] */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : SequenceRead[Char] */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
char var21 /* : Char */;
short int var_22 /* var : Bool */;
val* var23 /* : SequenceRead[Char] */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
char var28 /* : Char */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
val* var44 /* : Text */;
val* var45 /* : String */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AStringFormExpr__n_string]))(self); /* n_string on <self:AStringFormExpr>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__parser_nodes__Token__text]))(var); /* text on <var:Token>*/
}
var_txt = var1;
var_behead = 1l;
var_betail = 1l;
{
var3 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var4 = ((val*(*)(val* self, long p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var3, 0l); /* [] on <var3:SequenceRead[Char]>*/
}
{
var5 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var6 = ((val*(*)(val* self, long p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var5, 1l); /* [] on <var5:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var4,var6) on <var4:nullable Object(Char)> */
var9 = var4 == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
var10 = ((long(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#>= (var10,6l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <6l:Int> isa OTHER */
/* <6l:Int> isa OTHER */
var13 = 1; /* easy <6l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var14 = var10 >= 6l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var2 = var11;
} else {
var2 = var_;
}
if (var2){
var_behead = 3l;
var_betail = 3l;
{
var16 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var17 = ((val*(*)(val* self, long p0))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var16, 0l); /* [] on <var16:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var17,'\"') on <var17:nullable Object(Char)> */
var21 = (char)((long)(var17)>>2);
var20 = (var17 != NULL) && (var21 == '\"');
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_22 = var18;
if (var18){
{
var23 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var24 = ((val*(*)(val* self, long p0))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var23, 3l); /* [] on <var23:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var24,'\n') on <var24:nullable Object(Char)> */
var28 = (char)((long)(var24)>>2);
var27 = (var24 != NULL) && (var28 == '\n');
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var15 = var25;
} else {
var15 = var_22;
}
if (var15){
var_behead = 4l;
} else {
}
} else {
}
{
var29 = ((long(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#- (var29,var_behead) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var_behead:Int> isa OTHER */
/* <var_behead:Int> isa OTHER */
var32 = 1; /* easy <var_behead:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var36 = var29 - var_behead;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var30,var_betail) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var_betail:Int> isa OTHER */
/* <var_betail:Int> isa OTHER */
var39 = 1; /* easy <var_betail:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var43 = var30 - var_betail;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
var44 = ((val*(*)(val* self, long p0, long p1))(var_txt->class->vft[COLOR_standard__string__Text__substring]))(var_txt, var_behead, var37); /* substring on <var_txt:String>*/
}
{
var45 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__string__Text__unescape_nit]))(var44); /* unescape_nit on <var44:Text(String)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__literal__AStringFormExpr__value_61d]))(self, var45); /* value= on <self:AStringFormExpr>*/
}
RET_LABEL:;
}
