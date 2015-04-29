#include "nit__deriving.sep.0.h"
/* method deriving#ToolContext#deriving_phase for (self: ToolContext): Phase */
val* nit__deriving___ToolContext___deriving_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__deriving__ToolContext___deriving_phase].val; /* _deriving_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _deriving_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__deriving, 29);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method deriving#ToolContext#deriving_phase= for (self: ToolContext, Phase) */
void nit__deriving___ToolContext___deriving_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__deriving__ToolContext___deriving_phase].val = p0; /* _deriving_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method deriving#DerivingPhase#process_annotated_node for (self: DerivingPhase, ANode, AAnnotation) */
void nit__deriving___nit__deriving__DerivingPhase___nit__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nclassdef /* var nclassdef: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
val* var7 /* : ToolContext */;
val* var8 /* : Location */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : Message */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
short int var31 /* : Bool */;
val* var32 /* : ToolContext */;
val* var33 /* : Location */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Message */;
var_nclassdef = p0;
var_nat = p1;
{
var = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(var_nat); /* name on <var_nat:AAnnotation>*/
}
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "auto_inspect";
var3 = standard___standard__NativeString___to_s_with_length(var2, 12l);
var1 = var3;
varonce = var1;
}
{
var4 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var1); /* == on <var:String>*/
}
if (var4){
/* <var_nclassdef:ANode> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var5 = 0;
} else {
var5 = var_nclassdef->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:DerivingPhase>*/
}
{
var8 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nclassdef); /* location on <var_nclassdef:ANode>*/
}
if (unlikely(varonce9==NULL)) {
var10 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Syntax Error: only a concrete class can be `";
var14 = standard___standard__NativeString___to_s_with_length(var13, 44l);
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
var10 = varonce9;
varonce9 = NULL;
}
{
var19 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(var_nat); /* name on <var_nat:AAnnotation>*/
}
((struct instance_standard__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
var21 = ((val*(*)(val* self, val* p0, val* p1))(var7->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var7, var8, var20); /* error on <var7:ToolContext>*/
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__deriving__DerivingPhase__generate_inspect_method]))(self, var_nclassdef); /* generate_inspect_method on <self:DerivingPhase>*/
}
}
} else {
}
{
var22 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(var_nat); /* name on <var_nat:AAnnotation>*/
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "auto_derive";
var26 = standard___standard__NativeString___to_s_with_length(var25, 11l);
var24 = var26;
varonce23 = var24;
}
{
var27 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var24); /* == on <var22:String>*/
}
if (var27){
/* <var_nclassdef:ANode> isa AStdClassdef */
cltype29 = type_nit__AStdClassdef.color;
idtype30 = type_nit__AStdClassdef.id;
if(cltype29 >= var_nclassdef->type->table_size) {
var28 = 0;
} else {
var28 = var_nclassdef->type->type_table[cltype29] == idtype30;
}
var31 = !var28;
if (var31){
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:DerivingPhase>*/
}
{
var33 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nclassdef); /* location on <var_nclassdef:ANode>*/
}
if (unlikely(varonce34==NULL)) {
var35 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Syntax Error: only a concrete class can be `";
var39 = standard___standard__NativeString___to_s_with_length(var38, 44l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var35)->values[0]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "`.";
var43 = standard___standard__NativeString___to_s_with_length(var42, 2l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var35)->values[2]=var41;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
var44 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(var_nat); /* name on <var_nat:AAnnotation>*/
}
((struct instance_standard__NativeArray*)var35)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var35->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
var46 = ((val*(*)(val* self, val* p0, val* p1))(var32->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var32, var33, var45); /* error on <var32:ToolContext>*/
}
} else {
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__deriving__DerivingPhase__generate_derive_to_map_method]))(self, var_nclassdef, var_nat); /* generate_derive_to_map_method on <self:DerivingPhase>*/
}
}
} else {
}
RET_LABEL:;
}
/* method deriving#DerivingPhase#generate_inspect_method for (self: DerivingPhase, AClassdef) */
void nit__deriving___nit__deriving__DerivingPhase___generate_inspect_method(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
val* var1 /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var_ /* var : ANodes[APropdef] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[APropdef] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var21 /* : Bool */;
int cltype;
int idtype;
val* var22 /* : TId */;
val* var23 /* : String */;
val* var_name /* var name: String */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : ToolContext */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : APropdef */;
var_nclassdef = p0;
{
var = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:AClassdef>*/
}
var_npropdefs = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_code = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "redef fun inspect";
var4 = standard___standard__NativeString___to_s_with_length(var3, 17l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var2); /* add on <var_code:Array[String]>*/
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "do";
var8 = standard___standard__NativeString___to_s_with_length(var7, 2l);
var6 = var8;
varonce5 = var6;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var6); /* add on <var_code:Array[String]>*/
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "\tvar res = super";
var12 = standard___standard__NativeString___to_s_with_length(var11, 16l);
var10 = var12;
varonce9 = var10;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var10); /* add on <var_code:Array[String]>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\tres = res.substring(0,res.length-1)";
var16 = standard___standard__NativeString___to_s_with_length(var15, 36l);
var14 = var16;
varonce13 = var14;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var14); /* add on <var_code:Array[String]>*/
}
var_ = var_npropdefs;
{
var17 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[APropdef]>*/
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:Iterator[APropdef]>*/
}
if (var19){
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:Iterator[APropdef]>*/
}
var_attribute = var20;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype = type_nit__AAttrPropdef.color;
idtype = type_nit__AAttrPropdef.id;
if(cltype >= var_attribute->type->table_size) {
var21 = 0;
} else {
var21 = var_attribute->type->type_table[cltype] == idtype;
}
if (var21){
{
var22 = ((val*(*)(val* self))(var_attribute->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_id2]))(var_attribute); /* n_id2 on <var_attribute:APropdef(AAttrPropdef)>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__parser_nodes__Token__text]))(var22); /* text on <var22:TId>*/
}
var_name = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "\tres += \" ";
var29 = standard___standard__NativeString___to_s_with_length(var28, 10l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = ": {self.";
var33 = standard___standard__NativeString___to_s_with_length(var32, 8l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[2]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ".inspect}\"";
var37 = standard___standard__NativeString___to_s_with_length(var36, 10l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var25)->values[4]=var35;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var_name;
((struct instance_standard__NativeArray*)var25)->values[3]=var_name;
{
var38 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var38); /* add on <var_code:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:Iterator[APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:Iterator[APropdef]>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "\tres += \">\"";
var42 = standard___standard__NativeString___to_s_with_length(var41, 11l);
var40 = var42;
varonce39 = var40;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var40); /* add on <var_code:Array[String]>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "\treturn res";
var46 = standard___standard__NativeString___to_s_with_length(var45, 11l);
var44 = var46;
varonce43 = var44;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var44); /* add on <var_code:Array[String]>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "end";
var50 = standard___standard__NativeString___to_s_with_length(var49, 3l);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var48); /* add on <var_code:Array[String]>*/
}
{
var51 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:DerivingPhase>*/
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "\n";
var55 = standard___standard__NativeString___to_s_with_length(var54, 1l);
var53 = var55;
varonce52 = var53;
}
{
var56 = ((val*(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__string__Collection__join]))(var_code, var53); /* join on <var_code:Array[String]>*/
}
{
var57 = ((val*(*)(val* self, val* p0))(var51->class->vft[COLOR_nit__parser_util__ToolContext__parse_propdef]))(var51, var56); /* parse_propdef on <var51:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var_npropdefs->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_npropdefs, var57); /* push on <var_npropdefs:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method deriving#DerivingPhase#generate_derive_to_map_method for (self: DerivingPhase, AClassdef, AAnnotation) */
void nit__deriving___nit__deriving__DerivingPhase___generate_derive_to_map_method(val* self, val* p0, val* p1) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
val* var1 /* : ToolContext */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : APropdef */;
val* var_sc /* var sc: APropdef */;
val* var6 /* : Location */;
val* var7 /* : ANodes[APropdef] */;
val* var8 /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var_ /* var : ANodes[APropdef] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : Iterator[APropdef] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var25 /* : Bool */;
int cltype;
int idtype;
val* var26 /* : TId */;
val* var27 /* : String */;
val* var_name /* var name: String */;
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
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : ToolContext */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
val* var53 /* : APropdef */;
var_nclassdef = p0;
var_nat = p1;
{
var = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:AClassdef>*/
}
var_npropdefs = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:DerivingPhase>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Derivable";
var4 = standard___standard__NativeString___to_s_with_length(var3, 9l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_util__ToolContext__parse_superclass]))(var1, var2); /* parse_superclass on <var1:ToolContext>*/
}
var_sc = var5;
{
var6 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nat); /* location on <var_nat:AAnnotation>*/
}
{
((void(*)(val* self, val* p0))(var_sc->class->vft[COLOR_nit__parser_nodes__ANode__location_61d]))(var_sc, var6); /* location= on <var_sc:APropdef>*/
}
{
var7 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:AClassdef>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var7, var_sc); /* add on <var7:ANodes[APropdef]>*/
}
var8 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:Array[String]>*/
}
var_code = var8;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "redef fun derive_to_map";
var12 = standard___standard__NativeString___to_s_with_length(var11, 23l);
var10 = var12;
varonce9 = var10;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var10); /* add on <var_code:Array[String]>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "do";
var16 = standard___standard__NativeString___to_s_with_length(var15, 2l);
var14 = var16;
varonce13 = var14;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var14); /* add on <var_code:Array[String]>*/
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\tvar res = super";
var20 = standard___standard__NativeString___to_s_with_length(var19, 16l);
var18 = var20;
varonce17 = var18;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var18); /* add on <var_code:Array[String]>*/
}
var_ = var_npropdefs;
{
var21 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[APropdef]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:Iterator[APropdef]>*/
}
if (var23){
{
var24 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:Iterator[APropdef]>*/
}
var_attribute = var24;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype = type_nit__AAttrPropdef.color;
idtype = type_nit__AAttrPropdef.id;
if(cltype >= var_attribute->type->table_size) {
var25 = 0;
} else {
var25 = var_attribute->type->type_table[cltype] == idtype;
}
if (var25){
{
var26 = ((val*(*)(val* self))(var_attribute->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_id2]))(var_attribute); /* n_id2 on <var_attribute:APropdef(AAttrPropdef)>*/
}
{
var27 = ((val*(*)(val* self))(var26->class->vft[COLOR_nit__parser_nodes__Token__text]))(var26); /* text on <var26:TId>*/
}
var_name = var27;
if (unlikely(varonce28==NULL)) {
var29 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "\tres[\"";
var33 = standard___standard__NativeString___to_s_with_length(var32, 6l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "\"] = self.";
var37 = standard___standard__NativeString___to_s_with_length(var36, 10l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[2]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_standard__NativeArray*)var29)->values[1]=var_name;
((struct instance_standard__NativeArray*)var29)->values[3]=var_name;
{
var38 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var38); /* add on <var_code:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:Iterator[APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:Iterator[APropdef]>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "\treturn res";
var42 = standard___standard__NativeString___to_s_with_length(var41, 11l);
var40 = var42;
varonce39 = var40;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var40); /* add on <var_code:Array[String]>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "end";
var46 = standard___standard__NativeString___to_s_with_length(var45, 3l);
var44 = var46;
varonce43 = var44;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var44); /* add on <var_code:Array[String]>*/
}
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:DerivingPhase>*/
}
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "\n";
var51 = standard___standard__NativeString___to_s_with_length(var50, 1l);
var49 = var51;
varonce48 = var49;
}
{
var52 = ((val*(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__string__Collection__join]))(var_code, var49); /* join on <var_code:Array[String]>*/
}
{
var53 = ((val*(*)(val* self, val* p0))(var47->class->vft[COLOR_nit__parser_util__ToolContext__parse_propdef]))(var47, var52); /* parse_propdef on <var47:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var_npropdefs->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_npropdefs, var53); /* push on <var_npropdefs:ANodes[APropdef]>*/
}
RET_LABEL:;
}
