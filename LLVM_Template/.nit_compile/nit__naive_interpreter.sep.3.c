#include "nit__naive_interpreter.sep.0.h"
/* method naive_interpreter#AAsCastExpr#expr for (self: AAsCastExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AAsCastExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var6 /* : MType */;
val* var_amtype /* var amtype: MType */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
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
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var24 /* : MType */;
val* var25 /* : String */;
val* var26 /* : String */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_expr]))(self); /* n_expr on <self:AAsCastExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var2;
if (var_i == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:AAsCastExpr>*/
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1704);
fatal_exit(1);
}
var_mtype = var5;
{
var6 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__unanchor_type]))(var_v, var_mtype); /* unanchor_type on <var_v:NaiveInterpreter>*/
}
var_amtype = var6;
{
var7 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_i); /* mtype on <var_i:nullable Instance(Instance)>*/
}
{
var8 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_subtype]))(var_v, var7, var_amtype); /* is_subtype on <var_v:NaiveInterpreter>*/
}
var9 = !var8;
if (var9){
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Cast failed. Expected `";
var14 = standard___standard__NativeString___to_s_with_length(var13, 23l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "`, got `";
var18 = standard___standard__NativeString___to_s_with_length(var17, 8l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "`";
var22 = standard___standard__NativeString___to_s_with_length(var21, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var10)->values[4]=var20;
} else {
var10 = varonce;
varonce = NULL;
}
{
var23 = ((val*(*)(val* self))(var_amtype->class->vft[COLOR_standard__string__Object__to_s]))(var_amtype); /* to_s on <var_amtype:MType>*/
}
((struct instance_standard__NativeArray*)var10)->values[1]=var23;
{
var24 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_i); /* mtype on <var_i:nullable Instance(Instance)>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24); /* to_s on <var24:MType>*/
}
((struct instance_standard__NativeArray*)var10)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var26); /* fatal on <self:AAsCastExpr>*/
}
} else {
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AAsNotnullExpr#expr for (self: AAsNotnullExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AAsNotnullExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAsCastForm__n_expr]))(self); /* n_expr on <self:AAsNotnullExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var2;
if (var_i == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_i); /* mtype on <var_i:nullable Instance(Instance)>*/
}
/* <var5:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var5->type->table_size) {
var6 = 0;
} else {
var6 = var5->type->type_table[cltype] == idtype;
}
if (var6){
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "Cast failed";
var9 = standard___standard__NativeString___to_s_with_length(var8, 11l);
var7 = var9;
varonce = var7;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var7); /* fatal on <self:AAsNotnullExpr>*/
}
} else {
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AParExpr#expr for (self: AParExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AParExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AParExpr__n_expr]))(self); /* n_expr on <self:AParExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AOnceExpr#expr for (self: AOnceExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AOnceExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : Map[ANode, Instance] */;
short int var2 /* : Bool */;
val* var3 /* : Map[ANode, Instance] */;
val* var4 /* : nullable Object */;
val* var5 /* : AExpr */;
val* var6 /* : nullable Instance */;
val* var_res /* var res: nullable Instance */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Map[ANode, Instance] */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__onces]))(var_v); /* onces on <var_v:NaiveInterpreter>*/
}
{
var2 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, self); /* has_key on <var1:Map[ANode, Instance]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__onces]))(var_v); /* onces on <var_v:NaiveInterpreter>*/
}
{
var4 = ((val*(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var3, self); /* [] on <var3:Map[ANode, Instance]>*/
}
var = var4;
goto RET_LABEL;
} else {
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AOnceExpr__n_expr]))(self); /* n_expr on <self:AOnceExpr>*/
}
{
var6 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var5); /* expr on <var_v:NaiveInterpreter>*/
}
var_res = var6;
if (var_res == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable Instance>*/
var7 = var8;
}
if (var7){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__onces]))(var_v); /* onces on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var9, self, var_res); /* []= on <var9:Map[ANode, Instance]>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method naive_interpreter#ASendExpr#expr for (self: ASendExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ASendExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable CallSite */;
val* var6 /* : MMethodDef */;
val* var7 /* : nullable CallSite */;
val* var8 /* : nullable SignatureMap */;
val* var9 /* : Array[AExpr] */;
val* var10 /* : nullable Array[Instance] */;
val* var_args /* var args: nullable Array[Instance] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable CallSite */;
val* var14 /* : nullable Instance */;
val* var_res /* var res: nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(self); /* n_expr on <self:ASendExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_recv = var2;
if (var_recv == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite]))(self); /* callsite on <self:ASendExpr>*/
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1751);
fatal_exit(1);
} else {
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__typing__CallSite__mpropdef]))(var5); /* mpropdef on <var5:nullable CallSite>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite]))(self); /* callsite on <self:ASendExpr>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1751);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__typing__CallSite__signaturemap]))(var7); /* signaturemap on <var7:nullable CallSite>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__raw_arguments]))(self); /* raw_arguments on <self:ASendExpr>*/
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__varargize]))(var_v, var6, var8, var_recv, var9); /* varargize on <var_v:NaiveInterpreter>*/
}
var_args = var10;
if (var_args == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_args, ((val*)NULL)); /* == on <var_args:nullable Array[Instance]>*/
var11 = var12;
}
if (var11){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite]))(self); /* callsite on <self:ASendExpr>*/
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var13, var_args); /* callsite on <var_v:NaiveInterpreter>*/
}
var_res = var14;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ASendReassignFormExpr#stmt for (self: ASendReassignFormExpr, NaiveInterpreter) */
void nit__naive_interpreter___ASendReassignFormExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : AExpr */;
val* var1 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable CallSite */;
val* var5 /* : MMethodDef */;
val* var6 /* : nullable CallSite */;
val* var7 /* : nullable SignatureMap */;
val* var8 /* : Array[AExpr] */;
val* var9 /* : nullable Array[Instance] */;
val* var_args /* var args: nullable Array[Instance] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AExpr */;
val* var13 /* : nullable Instance */;
val* var_value /* var value: nullable Instance */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable CallSite */;
val* var17 /* : nullable Instance */;
val* var_read /* var read: nullable Instance */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable CallSite */;
val* var21 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
val* var22 /* : nullable Instance */;
val* var_write /* var write: nullable Instance */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable CallSite */;
val* var26 /* : nullable Instance */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASendExpr__n_expr]))(self); /* n_expr on <self:ASendReassignFormExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var); /* expr on <var_v:NaiveInterpreter>*/
}
var_recv = var1;
if (var_recv == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite]))(self); /* callsite on <self:ASendReassignFormExpr>*/
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1764);
fatal_exit(1);
} else {
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__typing__CallSite__mpropdef]))(var4); /* mpropdef on <var4:nullable CallSite>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite]))(self); /* callsite on <self:ASendReassignFormExpr>*/
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1764);
fatal_exit(1);
} else {
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__typing__CallSite__signaturemap]))(var6); /* signaturemap on <var6:nullable CallSite>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__raw_arguments]))(self); /* raw_arguments on <self:ASendReassignFormExpr>*/
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__varargize]))(var_v, var5, var7, var_recv, var8); /* varargize on <var_v:NaiveInterpreter>*/
}
var_args = var9;
if (var_args == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_args, ((val*)NULL)); /* == on <var_args:nullable Array[Instance]>*/
var10 = var11;
}
if (var10){
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value]))(self); /* n_value on <self:ASendReassignFormExpr>*/
}
{
var13 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var12); /* expr on <var_v:NaiveInterpreter>*/
}
var_value = var13;
if (var_value == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_value->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_value, ((val*)NULL)); /* == on <var_value:nullable Instance>*/
var14 = var15;
}
if (var14){
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite]))(self); /* callsite on <self:ASendReassignFormExpr>*/
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var16, var_args); /* callsite on <var_v:NaiveInterpreter>*/
}
var_read = var17;
if (var_read == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var_read->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_read, ((val*)NULL)); /* != on <var_read:nullable Instance>*/
var18 = var19;
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1770);
fatal_exit(1);
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AReassignFormExpr__reassign_callsite]))(self); /* reassign_callsite on <self:ASendReassignFormExpr>*/
}
var21 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var21->class->vft[COLOR_standard__array__Array__with_capacity]))(var21, 2l); /* with_capacity on <var21:Array[Instance]>*/
}
var_ = var21;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_read); /* push on <var_:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_value); /* push on <var_:Array[Instance]>*/
}
{
var22 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var20, var_); /* callsite on <var_v:NaiveInterpreter>*/
}
var_write = var22;
if (var_write == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_write->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_write, ((val*)NULL)); /* != on <var_write:nullable Instance>*/
var23 = var24;
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1773);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_args, var_write); /* add on <var_args:nullable Array[Instance](Array[Instance])>*/
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendReassignFormExpr__write_callsite]))(self); /* write_callsite on <self:ASendReassignFormExpr>*/
}
{
var26 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var25, var_args); /* callsite on <var_v:NaiveInterpreter>*/
}
RET_LABEL:;
}
/* method naive_interpreter#ASuperExpr#expr for (self: ASuperExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ASuperExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : Frame */;
val* var2 /* : Array[Instance] */;
val* var3 /* : nullable Object */;
val* var_recv /* var recv: Instance */;
val* var4 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : AExprs */;
val* var8 /* : ANodes[AExpr] */;
short int var9 /* : Bool */;
val* var10 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
val* var_args /* var args: nullable Object */;
long var_i /* var i: Int */;
val* var11 /* : MSignature */;
long var12 /* : Int */;
long var_13 /* var : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
val* var18 /* : Frame */;
val* var19 /* : Array[Instance] */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
val* var29 /* : MMethodDef */;
val* var30 /* : nullable SignatureMap */;
val* var31 /* : AExprs */;
val* var32 /* : ANodes[AExpr] */;
val* var33 /* : nullable Array[Instance] */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : nullable Instance */;
val* var_res /* var res: nullable Instance */;
val* var37 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
val* var38 /* : MModule */;
val* var39 /* : MType */;
val* var40 /* : MPropDef */;
val* var41 /* : AExprs */;
val* var42 /* : ANodes[AExpr] */;
short int var43 /* : Bool */;
val* var44 /* : Frame */;
val* var45 /* : Array[Instance] */;
val* var_args46 /* var args: nullable Object */;
val* var47 /* : nullable SignatureMap */;
val* var48 /* : AExprs */;
val* var49 /* : ANodes[AExpr] */;
val* var50 /* : nullable Array[Instance] */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable Instance */;
val* var_res54 /* var res: nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(var_v); /* frame on <var_v:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__naive_interpreter__Frame__arguments]))(var1); /* arguments on <var1:Frame>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var2); /* first on <var2:Array[Instance]>*/
}
var_recv = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASuperExpr__callsite]))(self); /* callsite on <self:ASuperExpr>*/
}
var_callsite = var4;
if (var_callsite == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_callsite, ((val*)NULL)); /* != on <var_callsite:nullable CallSite>*/
var5 = var6;
}
if (var5){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperExpr__n_args]))(self); /* n_args on <self:ASuperExpr>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var7); /* n_exprs on <var7:AExprs>*/
}
{
var9 = ((short int(*)(val* self))(var8->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var8); /* is_empty on <var8:ANodes[AExpr]>*/
}
if (var9){
var10 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_standard__array__Array__with_capacity]))(var10, 1l); /* with_capacity on <var10:Array[Instance]>*/
}
var_ = var10;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_recv); /* push on <var_:Array[Instance]>*/
}
var_args = var_;
var_i = 0l;
{
var11 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_callsite); /* msignature on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var12 = ((long(*)(val* self))(var11->class->vft[COLOR_nit__model__MSignature__arity]))(var11); /* arity on <var11:MSignature>*/
}
var_13 = var12;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_13) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_13:Int> isa OTHER */
/* <var_13:Int> isa OTHER */
var16 = 1; /* easy <var_13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var17 = var_i < var_13;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
var18 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(var_v); /* frame on <var_v:NaiveInterpreter>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__naive_interpreter__Frame__arguments]))(var18); /* arguments on <var18:Frame>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var26 = var_i + 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var27 = ((val*(*)(val* self, long p0))(var19->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var19, var20); /* [] on <var19:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_args, var27); /* add on <var_args:nullable Object(Array[Instance])>*/
}
var28 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var28;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
{
var29 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mpropdef]))(var_callsite); /* mpropdef on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var30 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__signaturemap]))(var_callsite); /* signaturemap on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperExpr__n_args]))(self); /* n_args on <self:ASuperExpr>*/
}
{
var32 = ((val*(*)(val* self))(var31->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var31); /* n_exprs on <var31:AExprs>*/
}
{
var33 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__varargize]))(var_v, var29, var30, var_recv, var32); /* varargize on <var_v:NaiveInterpreter>*/
}
var_args = var33;
if (var_args == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
var35 = ((short int(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_args, ((val*)NULL)); /* == on <var_args:nullable Object(nullable Array[Instance])>*/
var34 = var35;
}
if (var34){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
}
{
var36 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var_callsite, var_args); /* callsite on <var_v:NaiveInterpreter>*/
}
var_res = var36;
var = var_res;
goto RET_LABEL;
} else {
}
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASuperExpr__mpropdef]))(self); /* mpropdef on <self:ASuperExpr>*/
}
var_mpropdef = var37;
{
var38 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(var_v); /* mainmodule on <var_v:NaiveInterpreter>*/
}
{
var39 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
if (var_mpropdef == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1807);
fatal_exit(1);
} else {
var40 = ((val*(*)(val* self, val* p0, val* p1))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__lookup_next_definition]))(var_mpropdef, var38, var39); /* lookup_next_definition on <var_mpropdef:nullable MMethodDef>*/
}
var_mpropdef = var40;
{
var41 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperExpr__n_args]))(self); /* n_args on <self:ASuperExpr>*/
}
{
var42 = ((val*(*)(val* self))(var41->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var41); /* n_exprs on <var41:AExprs>*/
}
{
var43 = ((short int(*)(val* self))(var42->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var42); /* is_empty on <var42:ANodes[AExpr]>*/
}
if (var43){
{
var44 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(var_v); /* frame on <var_v:NaiveInterpreter>*/
}
{
var45 = ((val*(*)(val* self))(var44->class->vft[COLOR_nit__naive_interpreter__Frame__arguments]))(var44); /* arguments on <var44:Frame>*/
}
var_args46 = var45;
} else {
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASuperExpr__signaturemap]))(self); /* signaturemap on <self:ASuperExpr>*/
}
{
var48 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperExpr__n_args]))(self); /* n_args on <self:ASuperExpr>*/
}
{
var49 = ((val*(*)(val* self))(var48->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var48); /* n_exprs on <var48:AExprs>*/
}
{
var50 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__varargize]))(var_v, var_mpropdef, var47, var_recv, var49); /* varargize on <var_v:NaiveInterpreter>*/
}
var_args46 = var50;
if (var_args46 == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (0) {
var52 = ((short int(*)(val* self, val* p0))(var_args46->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_args46, ((val*)NULL)); /* == on <var_args46:nullable Object(nullable Array[Instance])>*/
var51 = var52;
}
if (var51){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
}
{
var53 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__call]))(var_v, var_mpropdef, var_args46); /* call on <var_v:NaiveInterpreter>*/
}
var_res54 = var53;
var = var_res54;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ANewExpr#expr for (self: ANewExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ANewExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : nullable MClassType */;
val* var2 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var3 /* : MutableInstance */;
val* var_recv /* var recv: Instance */;
val* var4 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MMethodDef */;
val* var8 /* : nullable SignatureMap */;
val* var9 /* : AExprs */;
val* var10 /* : ANodes[AExpr] */;
val* var11 /* : nullable Array[Instance] */;
val* var_args /* var args: nullable Array[Instance] */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Instance */;
val* var_res2 /* var res2: nullable Instance */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ANewExpr__recvtype]))(self); /* recvtype on <self:ANewExpr>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1825);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__unanchor_type]))(var_v, var1); /* unanchor_type on <var_v:NaiveInterpreter>*/
}
var_mtype = var2;
var3 = NEW_nit__MutableInstance(&type_nit__MutableInstance);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var3, var_mtype); /* mtype= on <var3:MutableInstance>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:MutableInstance>*/
}
var_recv = var3;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance]))(var_v, var_recv); /* init_instance on <var_v:NaiveInterpreter>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ANewExpr__callsite]))(self); /* callsite on <self:ANewExpr>*/
}
var_callsite = var4;
if (var_callsite == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, ((val*)NULL)); /* == on <var_callsite:nullable CallSite>*/
var5 = var6;
}
if (var5){
var = var_recv;
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mpropdef]))(var_callsite); /* mpropdef on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var8 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__signaturemap]))(var_callsite); /* signaturemap on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_args]))(self); /* n_args on <self:ANewExpr>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__parser_nodes__AExprs__n_exprs]))(var9); /* n_exprs on <var9:AExprs>*/
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__varargize]))(var_v, var7, var8, var_recv, var10); /* varargize on <var_v:NaiveInterpreter>*/
}
var_args = var11;
if (var_args == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_args, ((val*)NULL)); /* == on <var_args:nullable Array[Instance]>*/
var12 = var13;
}
if (var12){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var_callsite, var_args); /* callsite on <var_v:NaiveInterpreter>*/
}
var_res2 = var14;
if (var_res2 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_res2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res2, ((val*)NULL)); /* != on <var_res2:nullable Instance>*/
var15 = var16;
}
if (var15){
var = var_res2;
goto RET_LABEL;
} else {
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AAttrExpr#expr for (self: AAttrExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AAttrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var11 /* : Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr]))(self); /* n_expr on <self:AAttrExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_recv = var2;
if (var_recv == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var5:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var5->type->table_size) {
var6 = 0;
} else {
var6 = var5->type->type_table[cltype] == idtype;
}
if (var6){
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "Receiver is null";
var9 = standard___standard__NativeString___to_s_with_length(var8, 16l);
var7 = var9;
varonce = var7;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var7); /* fatal on <self:AAttrExpr>*/
}
} else {
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__mproperty]))(self); /* mproperty on <self:AAttrExpr>*/
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1848);
fatal_exit(1);
}
var_mproperty = var10;
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__read_attribute]))(var_v, var_mproperty, var_recv); /* read_attribute on <var_v:NaiveInterpreter>*/
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AAttrAssignExpr#stmt for (self: AAttrAssignExpr, NaiveInterpreter) */
void nit__naive_interpreter___AAttrAssignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : AExpr */;
val* var1 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : AExpr */;
val* var10 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr]))(self); /* n_expr on <self:AAttrAssignExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var); /* expr on <var_v:NaiveInterpreter>*/
}
var_recv = var1;
if (var_recv == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var4:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype] == idtype;
}
if (var5){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Receiver is null";
var8 = standard___standard__NativeString___to_s_with_length(var7, 16l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var6); /* fatal on <self:AAttrAssignExpr>*/
}
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value]))(self); /* n_value on <self:AAttrAssignExpr>*/
}
{
var10 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var9); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var10;
if (var_i == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var11 = var12;
}
if (var11){
goto RET_LABEL;
} else {
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__mproperty]))(self); /* mproperty on <self:AAttrAssignExpr>*/
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1861);
fatal_exit(1);
}
var_mproperty = var13;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_attribute]))(var_v, var_mproperty, var_recv, var_i); /* write_attribute on <var_v:NaiveInterpreter>*/
}
RET_LABEL:;
}
/* method naive_interpreter#AAttrReassignExpr#stmt for (self: AAttrReassignExpr, NaiveInterpreter) */
void nit__naive_interpreter___AAttrReassignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : AExpr */;
val* var1 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : AExpr */;
val* var10 /* : nullable Instance */;
val* var_value /* var value: nullable Instance */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var14 /* : Instance */;
val* var_attr /* var attr: Instance */;
val* var15 /* : nullable CallSite */;
val* var16 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
val* var17 /* : nullable Instance */;
val* var_res /* var res: nullable Instance */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr]))(self); /* n_expr on <self:AAttrReassignExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var); /* expr on <var_v:NaiveInterpreter>*/
}
var_recv = var1;
if (var_recv == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var4:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype] == idtype;
}
if (var5){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Receiver is null";
var8 = standard___standard__NativeString___to_s_with_length(var7, 16l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var6); /* fatal on <self:AAttrReassignExpr>*/
}
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value]))(self); /* n_value on <self:AAttrReassignExpr>*/
}
{
var10 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var9); /* expr on <var_v:NaiveInterpreter>*/
}
var_value = var10;
if (var_value == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_value->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_value, ((val*)NULL)); /* == on <var_value:nullable Instance>*/
var11 = var12;
}
if (var11){
goto RET_LABEL;
} else {
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__mproperty]))(self); /* mproperty on <self:AAttrReassignExpr>*/
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1874);
fatal_exit(1);
}
var_mproperty = var13;
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__read_attribute]))(var_v, var_mproperty, var_recv); /* read_attribute on <var_v:NaiveInterpreter>*/
}
var_attr = var14;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AReassignFormExpr__reassign_callsite]))(self); /* reassign_callsite on <self:AAttrReassignExpr>*/
}
var16 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_standard__array__Array__with_capacity]))(var16, 2l); /* with_capacity on <var16:Array[Instance]>*/
}
var_ = var16;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_attr); /* push on <var_:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_value); /* push on <var_:Array[Instance]>*/
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var15, var_); /* callsite on <var_v:NaiveInterpreter>*/
}
var_res = var17;
if (var_res == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable Instance>*/
var18 = var19;
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1877);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_attribute]))(var_v, var_mproperty, var_recv, var_res); /* write_attribute on <var_v:NaiveInterpreter>*/
}
RET_LABEL:;
}
/* method naive_interpreter#AIssetAttrExpr#expr for (self: AIssetAttrExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AIssetAttrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_recv /* var recv: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
short int var11 /* : Bool */;
val* var12 /* : Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrFormExpr__n_expr]))(self); /* n_expr on <self:AIssetAttrExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_recv = var2;
if (var_recv == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, ((val*)NULL)); /* == on <var_recv:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:nullable Instance(Instance)>*/
}
/* <var5:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var5->type->table_size) {
var6 = 0;
} else {
var6 = var5->type->type_table[cltype] == idtype;
}
if (var6){
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "Receiver is null";
var9 = standard___standard__NativeString___to_s_with_length(var8, 16l);
var7 = var9;
varonce = var7;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var7); /* fatal on <self:AIssetAttrExpr>*/
}
} else {
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AAttrFormExpr__mproperty]))(self); /* mproperty on <self:AIssetAttrExpr>*/
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1888);
fatal_exit(1);
}
var_mproperty = var10;
{
var11 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__isset_attribute]))(var_v, var_mproperty, var_recv); /* isset_attribute on <var_v:NaiveInterpreter>*/
}
{
var12 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var11); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AVarargExpr#expr for (self: AVarargExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AVarargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AVarargExpr__n_expr]))(self); /* n_expr on <self:AVarargExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ANamedargExpr#expr for (self: ANamedargExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ANamedargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANamedargExpr__n_expr]))(self); /* n_expr on <self:ANamedargExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ADebugTypeExpr#stmt for (self: ADebugTypeExpr, NaiveInterpreter) */
void nit__naive_interpreter___ADebugTypeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
var_v = p0;
RET_LABEL:;
}
