#include "nit__parallelization_phase.sep.0.h"
/* method parallelization_phase#ToolContext#parallelization_phase for (self: ToolContext): Phase */
val* nit__parallelization_phase___ToolContext___parallelization_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__parallelization_phase__ToolContext___parallelization_phase].val; /* _parallelization_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parallelization_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parallelization_phase#ToolContext#parallelization_phase= for (self: ToolContext, Phase) */
void nit__parallelization_phase___ToolContext___parallelization_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parallelization_phase__ToolContext___parallelization_phase].val = p0; /* _parallelization_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method parallelization_phase#ParallelizationPhase#process_annotated_node for (self: ParallelizationPhase, ANode, AAnnotation) */
void nit__parallelization_phase___nit__parallelization_phase__ParallelizationPhase___nit__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmethdef /* var nmethdef: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var1 /* : Token */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
short int var8 /* : Bool */;
val* var9 /* : ToolContext */;
val* var10 /* : Location */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : Message */;
val* var16 /* : nullable ANode */;
val* var17 /* : nullable ANode */;
val* var_amod /* var amod: nullable ANode */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : nullable AModuledecl */;
val* var22 /* : AModuleName */;
val* var23 /* : TId */;
val* var24 /* : String */;
val* var_modulename /* var modulename: String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var_classname /* var classname: String */;
val* var30 /* : nullable ANode */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : nullable ANode */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name;
val* var38 /* : nullable TClassid */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : nullable AMethid */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : nullable AMethid */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
val* var50 /* : TId */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : nullable ASignature */;
val* var54 /* : nullable AType */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var_has_rvalue /* var has_rvalue: Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var_vtype /* var vtype: String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
val* var65 /* : nullable ASignature */;
val* var66 /* : nullable AType */;
val* var67 /* : TClassid */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : TClassid */;
val* var_n_id /* var n_id: TClassid */;
val* var71 /* : AType */;
val* var_n_type /* var n_type: AType */;
val* var72 /* : nullable ASignature */;
val* var73 /* : Array[String] */;
val* var_params /* var params: Array[String] */;
val* var74 /* : nullable ASignature */;
val* var75 /* : ANodes[AParam] */;
short int var76 /* : Bool */;
val* var77 /* : nullable ASignature */;
val* var78 /* : ANodes[AParam] */;
val* var_ /* var : ANodes[AParam] */;
val* var79 /* : Iterator[nullable Object] */;
val* var_80 /* var : Iterator[AParam] */;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
val* var_param /* var param: AParam */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : TId */;
val* var98 /* : String */;
val* var99 /* : nullable AType */;
val* var100 /* : TClassid */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var104 /* : NativeArray[String] */;
static val* varonce103;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
val* var116 /* : FlatString */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var_s /* var s: String */;
val* var127 /* : ToolContext */;
val* var128 /* : AClassdef */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
val* var_classdef /* var classdef: AStdClassdef */;
val* var_mainfun /* var mainfun: nullable AMethPropdef */;
val* var133 /* : ANodes[APropdef] */;
val* var_134 /* var : ANodes[APropdef] */;
val* var135 /* : Iterator[nullable Object] */;
val* var_136 /* var : Iterator[APropdef] */;
short int var137 /* : Bool */;
val* var138 /* : nullable Object */;
val* var_prop /* var prop: APropdef */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
val* var145 /* : nullable AExpr */;
short int var146 /* : Bool */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
val* var_s_nullreturn /* var s_nullreturn: String */;
val* var151 /* : ToolContext */;
val* var152 /* : ANode */;
val* var_nullreturn /* var nullreturn: ANode */;
short int var153 /* : Bool */;
int cltype154;
int idtype155;
val* var156 /* : nullable AExpr */;
short int var157 /* : Bool */;
int cltype158;
int idtype159;
const char* var_class_name160;
val* var161 /* : ANodes[AExpr] */;
val* var162 /* : nullable ASignature */;
val* var163 /* : ANodes[AParam] */;
short int var164 /* : Bool */;
val* var165 /* : Array[String] */;
val* var_init_params /* var init_params: Array[String] */;
val* var166 /* : nullable ASignature */;
val* var167 /* : ANodes[AParam] */;
val* var_168 /* var : ANodes[AParam] */;
val* var169 /* : Iterator[nullable Object] */;
val* var_170 /* var : Iterator[AParam] */;
short int var171 /* : Bool */;
val* var172 /* : nullable Object */;
val* var_param173 /* var param: AParam */;
val* var174 /* : TId */;
val* var175 /* : String */;
val* var178 /* : NativeArray[String] */;
static val* varonce177;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : FlatString */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : FlatString */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : FlatString */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
val* var195 /* : String */;
val* var196 /* : String */;
val* var_s_newbody /* var s_newbody: String */;
val* var198 /* : NativeArray[String] */;
static val* varonce197;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : FlatString */;
val* var207 /* : String */;
val* var208 /* : ToolContext */;
val* var209 /* : ANode */;
val* var_newbody /* var newbody: ANode */;
short int var210 /* : Bool */;
int cltype211;
int idtype212;
const char* var_class_name213;
val* var214 /* : ANodes[AClassdef] */;
var_nmethdef = p0;
var_nat = p1;
{
var = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_atid]))(var_nat); /* n_atid on <var_nat:AAnnotation>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__parser_nodes__AAtid__n_id]))(var); /* n_id on <var:AAtid>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__Token__text]))(var1); /* text on <var1:Token>*/
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "threaded";
var5 = standard___standard__NativeString___to_s_with_length(var4, 8l);
var3 = var5;
varonce = var3;
}
{
var6 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var2, var3); /* != on <var2:String>*/
}
if (var6){
goto RET_LABEL;
} else {
}
/* <var_nmethdef:ANode> isa AMethPropdef */
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
if(cltype >= var_nmethdef->type->table_size) {
var7 = 0;
} else {
var7 = var_nmethdef->type->type_table[cltype] == idtype;
}
var8 = !var7;
if (var8){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:ParallelizationPhase>*/
}
{
var10 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nat); /* location on <var_nat:AAnnotation>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Syntax Error: only a method can be threaded.";
var14 = standard___standard__NativeString___to_s_with_length(var13, 44l);
var12 = var14;
varonce11 = var12;
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var9->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var9, var10, var12); /* error on <var9:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_nmethdef); /* parent on <var_nmethdef:ANode(AMethPropdef)>*/
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 46);
fatal_exit(1);
} else {
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var16); /* parent on <var16:nullable ANode>*/
}
var_amod = var17;
/* <var_amod:nullable ANode> isa AModule */
cltype19 = type_nit__AModule.color;
idtype20 = type_nit__AModule.id;
if(var_amod == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_amod->type->table_size) {
var18 = 0;
} else {
var18 = var_amod->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 47);
fatal_exit(1);
}
{
var21 = ((val*(*)(val* self))(var_amod->class->vft[COLOR_nit__parser_nodes__AModule__n_moduledecl]))(var_amod); /* n_moduledecl on <var_amod:nullable ANode(AModule)>*/
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 50);
fatal_exit(1);
} else {
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__parser_nodes__AModuledecl__n_name]))(var21); /* n_name on <var21:nullable AModuledecl>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__parser_nodes__AModuleName__n_id]))(var22); /* n_id on <var22:AModuleName>*/
}
{
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_nit__parser_nodes__Token__text]))(var23); /* text on <var23:TId>*/
}
var_modulename = var24;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Threaded";
var28 = standard___standard__NativeString___to_s_with_length(var27, 8l);
var26 = var28;
varonce25 = var26;
}
{
var29 = ((val*(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__string__String___43d]))(var26, var_modulename); /* + on <var26:String>*/
}
var_classname = var29;
{
var30 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_nmethdef); /* parent on <var_nmethdef:ANode(AMethPropdef)>*/
}
/* <var30:nullable ANode> isa AStdClassdef */
cltype32 = type_nit__AStdClassdef.color;
idtype33 = type_nit__AStdClassdef.id;
if(var30 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var30->type->table_size) {
var31 = 0;
} else {
var31 = var30->type->type_table[cltype32] == idtype33;
}
}
if (var31){
{
var34 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_nmethdef); /* parent on <var_nmethdef:ANode(AMethPropdef)>*/
}
/* <var34:nullable ANode> isa AStdClassdef */
cltype36 = type_nit__AStdClassdef.color;
idtype37 = type_nit__AStdClassdef.id;
if(var34 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var34->type->table_size) {
var35 = 0;
} else {
var35 = var34->type->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
var_class_name = var34 == NULL ? "null" : var34->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AStdClassdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 55);
fatal_exit(1);
}
{
var38 = ((val*(*)(val* self))(var34->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_id]))(var34); /* n_id on <var34:nullable ANode(AStdClassdef)>*/
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 55);
fatal_exit(1);
} else {
var39 = ((val*(*)(val* self))(var38->class->vft[COLOR_nit__parser_nodes__Token__text]))(var38); /* text on <var38:nullable TClassid>*/
}
{
var40 = ((val*(*)(val* self, val* p0))(var_classname->class->vft[COLOR_standard__string__String___43d]))(var_classname, var39); /* + on <var_classname:String>*/
}
var_classname = var40;
} else {
}
{
var41 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(var_nmethdef); /* n_methid on <var_nmethdef:ANode(AMethPropdef)>*/
}
/* <var41:nullable AMethid> isa AIdMethid */
cltype43 = type_nit__AIdMethid.color;
idtype44 = type_nit__AIdMethid.id;
if(var41 == NULL) {
var42 = 0;
} else {
if(cltype43 >= var41->type->table_size) {
var42 = 0;
} else {
var42 = var41->type->type_table[cltype43] == idtype44;
}
}
if (var42){
{
var45 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(var_nmethdef); /* n_methid on <var_nmethdef:ANode(AMethPropdef)>*/
}
/* <var45:nullable AMethid> isa AIdMethid */
cltype47 = type_nit__AIdMethid.color;
idtype48 = type_nit__AIdMethid.id;
if(var45 == NULL) {
var46 = 0;
} else {
if(cltype47 >= var45->type->table_size) {
var46 = 0;
} else {
var46 = var45->type->type_table[cltype47] == idtype48;
}
}
if (unlikely(!var46)) {
var_class_name49 = var45 == NULL ? "null" : var45->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AIdMethid", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 60);
fatal_exit(1);
}
{
var50 = ((val*(*)(val* self))(var45->class->vft[COLOR_nit__parser_nodes__AIdMethid__n_id]))(var45); /* n_id on <var45:nullable AMethid(AIdMethid)>*/
}
{
var51 = ((val*(*)(val* self))(var50->class->vft[COLOR_nit__parser_nodes__Token__text]))(var50); /* text on <var50:TId>*/
}
{
var52 = ((val*(*)(val* self, val* p0))(var_classname->class->vft[COLOR_standard__string__String___43d]))(var_classname, var51); /* + on <var_classname:String>*/
}
var_classname = var52;
} else {
}
{
var53 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(var_nmethdef); /* n_signature on <var_nmethdef:ANode(AMethPropdef)>*/
}
if (var53 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 64);
fatal_exit(1);
} else {
var54 = ((val*(*)(val* self))(var53->class->vft[COLOR_nit__parser_nodes__ASignature__n_type]))(var53); /* n_type on <var53:nullable ASignature>*/
}
if (var54 == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (0) {
var56 = ((short int(*)(val* self, val* p0))(var54->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var54, ((val*)NULL)); /* != on <var54:nullable AType>*/
var55 = var56;
}
var_has_rvalue = var55;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "";
var60 = standard___standard__NativeString___to_s_with_length(var59, 0l);
var58 = var60;
varonce57 = var58;
}
var_vtype = var58;
if (var_has_rvalue){
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "redef type E: ";
var64 = standard___standard__NativeString___to_s_with_length(var63, 14l);
var62 = var64;
varonce61 = var62;
}
{
var65 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(var_nmethdef); /* n_signature on <var_nmethdef:ANode(AMethPropdef)>*/
}
if (var65 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 67);
fatal_exit(1);
} else {
var66 = ((val*(*)(val* self))(var65->class->vft[COLOR_nit__parser_nodes__ASignature__n_type]))(var65); /* n_type on <var65:nullable ASignature>*/
}
if (var66 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 67);
fatal_exit(1);
} else {
var67 = ((val*(*)(val* self))(var66->class->vft[COLOR_nit__parser_nodes__AType__n_id]))(var66); /* n_id on <var66:nullable AType>*/
}
{
var68 = ((val*(*)(val* self))(var67->class->vft[COLOR_nit__parser_nodes__Token__text]))(var67); /* text on <var67:TClassid>*/
}
{
var69 = ((val*(*)(val* self, val* p0))(var62->class->vft[COLOR_standard__string__String___43d]))(var62, var68); /* + on <var62:String>*/
}
var_vtype = var69;
} else {
}
var70 = NEW_nit__TClassid(&type_nit__TClassid);
{
((void(*)(val* self))(var70->class->vft[COLOR_standard__kernel__Object__init]))(var70); /* init on <var70:TClassid>*/
}
var_n_id = var70;
{
((void(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_nit__parser_nodes__Token__text_61d]))(var_n_id, var_classname); /* text= on <var_n_id:TClassid>*/
}
var71 = NEW_nit__AType(&type_nit__AType);
{
((void(*)(val* self))(var71->class->vft[COLOR_standard__kernel__Object__init]))(var71); /* init on <var71:AType>*/
}
var_n_type = var71;
{
((void(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_nit__parser_nodes__AType__n_id_61d]))(var_n_type, var_n_id); /* n_id= on <var_n_type:AType>*/
}
{
var72 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(var_nmethdef); /* n_signature on <var_nmethdef:ANode(AMethPropdef)>*/
}
if (var72 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 74);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var72->class->vft[COLOR_nit__parser_nodes__ASignature__n_type_61d]))(var72, var_n_type); /* n_type= on <var72:nullable ASignature>*/
}
var73 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var73->class->vft[COLOR_standard__kernel__Object__init]))(var73); /* init on <var73:Array[String]>*/
}
var_params = var73;
{
var74 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(var_nmethdef); /* n_signature on <var_nmethdef:ANode(AMethPropdef)>*/
}
if (var74 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 78);
fatal_exit(1);
} else {
var75 = ((val*(*)(val* self))(var74->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var74); /* n_params on <var74:nullable ASignature>*/
}
{
var76 = ((short int(*)(val* self))(var75->class->vft[COLOR_standard__abstract_collection__Collection__not_empty]))(var75); /* not_empty on <var75:ANodes[AParam]>*/
}
if (var76){
{
var77 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(var_nmethdef); /* n_signature on <var_nmethdef:ANode(AMethPropdef)>*/
}
if (var77 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 79);
fatal_exit(1);
} else {
var78 = ((val*(*)(val* self))(var77->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var77); /* n_params on <var77:nullable ASignature>*/
}
var_ = var78;
{
var79 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AParam]>*/
}
var_80 = var79;
for(;;) {
{
var81 = ((short int(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_80); /* is_ok on <var_80:Iterator[AParam]>*/
}
if (var81){
{
var82 = ((val*(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_80); /* item on <var_80:Iterator[AParam]>*/
}
var_param = var82;
if (unlikely(varonce83==NULL)) {
var84 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "var ";
var88 = standard___standard__NativeString___to_s_with_length(var87, 4l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var84)->values[0]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = " : ";
var92 = standard___standard__NativeString___to_s_with_length(var91, 3l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var84)->values[2]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "\n\n";
var96 = standard___standard__NativeString___to_s_with_length(var95, 2l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var84)->values[4]=var94;
} else {
var84 = varonce83;
varonce83 = NULL;
}
{
var97 = ((val*(*)(val* self))(var_param->class->vft[COLOR_nit__parser_nodes__AParam__n_id]))(var_param); /* n_id on <var_param:AParam>*/
}
{
var98 = ((val*(*)(val* self))(var97->class->vft[COLOR_nit__parser_nodes__Token__text]))(var97); /* text on <var97:TId>*/
}
((struct instance_standard__NativeArray*)var84)->values[1]=var98;
{
var99 = ((val*(*)(val* self))(var_param->class->vft[COLOR_nit__parser_nodes__AParam__n_type]))(var_param); /* n_type on <var_param:AParam>*/
}
if (var99 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 81);
fatal_exit(1);
} else {
var100 = ((val*(*)(val* self))(var99->class->vft[COLOR_nit__parser_nodes__AType__n_id]))(var99); /* n_id on <var99:nullable AType>*/
}
{
var101 = ((val*(*)(val* self))(var100->class->vft[COLOR_nit__parser_nodes__Token__text]))(var100); /* text on <var100:TClassid>*/
}
((struct instance_standard__NativeArray*)var84)->values[3]=var101;
{
var102 = ((val*(*)(val* self))(var84->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
{
((void(*)(val* self, val* p0))(var_params->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_params, var102); /* add on <var_params:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_80); /* next on <var_80:Iterator[AParam]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_80); /* finish on <var_80:Iterator[AParam]>*/
}
} else {
}
if (unlikely(varonce103==NULL)) {
var104 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "class ";
var108 = standard___standard__NativeString___to_s_with_length(var107, 6l);
var106 = var108;
varonce105 = var106;
}
((struct instance_standard__NativeArray*)var104)->values[0]=var106;
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "\n\tsuper Thread\n\n\t";
var112 = standard___standard__NativeString___to_s_with_length(var111, 17l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var104)->values[2]=var110;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "\n\n\t";
var116 = standard___standard__NativeString___to_s_with_length(var115, 3l);
var114 = var116;
varonce113 = var114;
}
((struct instance_standard__NativeArray*)var104)->values[4]=var114;
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "\n\tredef fun main do\n\tend\nend\n";
var120 = standard___standard__NativeString___to_s_with_length(var119, 29l);
var118 = var120;
varonce117 = var118;
}
((struct instance_standard__NativeArray*)var104)->values[6]=var118;
} else {
var104 = varonce103;
varonce103 = NULL;
}
((struct instance_standard__NativeArray*)var104)->values[1]=var_classname;
((struct instance_standard__NativeArray*)var104)->values[3]=var_vtype;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "\n";
var124 = standard___standard__NativeString___to_s_with_length(var123, 1l);
var122 = var124;
varonce121 = var122;
}
{
var125 = ((val*(*)(val* self, val* p0))(var_params->class->vft[COLOR_standard__string__Collection__join]))(var_params, var122); /* join on <var_params:Array[String]>*/
}
((struct instance_standard__NativeArray*)var104)->values[5]=var125;
{
var126 = ((val*(*)(val* self))(var104->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
var_s = var126;
{
var127 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:ParallelizationPhase>*/
}
{
var128 = ((val*(*)(val* self, val* p0))(var127->class->vft[COLOR_nit__parser_util__ToolContext__parse_classdef]))(var127, var_s); /* parse_classdef on <var127:ToolContext>*/
}
/* <var128:AClassdef> isa AStdClassdef */
cltype130 = type_nit__AStdClassdef.color;
idtype131 = type_nit__AStdClassdef.id;
if(cltype130 >= var128->type->table_size) {
var129 = 0;
} else {
var129 = var128->type->type_table[cltype130] == idtype131;
}
if (unlikely(!var129)) {
var_class_name132 = var128 == NULL ? "null" : var128->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AStdClassdef", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 101);
fatal_exit(1);
}
var_classdef = var128;
var_mainfun = ((val*)NULL);
{
var133 = ((val*(*)(val* self))(var_classdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_classdef); /* n_propdefs on <var_classdef:AStdClassdef>*/
}
var_134 = var133;
{
var135 = ((val*(*)(val* self))(var_134->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_134); /* iterator on <var_134:ANodes[APropdef]>*/
}
var_136 = var135;
for(;;) {
{
var137 = ((short int(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_136); /* is_ok on <var_136:Iterator[APropdef]>*/
}
if (var137){
{
var138 = ((val*(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_136); /* item on <var_136:Iterator[APropdef]>*/
}
var_prop = var138;
/* <var_prop:APropdef> isa AMethPropdef */
cltype140 = type_nit__AMethPropdef.color;
idtype141 = type_nit__AMethPropdef.id;
if(cltype140 >= var_prop->type->table_size) {
var139 = 0;
} else {
var139 = var_prop->type->type_table[cltype140] == idtype141;
}
if (var139){
var_mainfun = var_prop;
} else {
}
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_136); /* next on <var_136:Iterator[APropdef]>*/
}
} else {
goto BREAK_label142;
}
}
BREAK_label142: (void)0;
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_136); /* finish on <var_136:Iterator[APropdef]>*/
}
if (var_mainfun == NULL) {
var143 = 0; /* is null */
} else {
var143 = 1; /* arg is null and recv is not */
}
if (0) {
var144 = ((short int(*)(val* self, val* p0))(var_mainfun->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mainfun, ((val*)NULL)); /* != on <var_mainfun:nullable AMethPropdef>*/
var143 = var144;
}
if (unlikely(!var143)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 108);
fatal_exit(1);
}
{
var145 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(var_nmethdef); /* n_block on <var_nmethdef:ANode(AMethPropdef)>*/
}
{
((void(*)(val* self, val* p0))(var_mainfun->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block_61d]))(var_mainfun, var145); /* n_block= on <var_mainfun:nullable AMethPropdef(AMethPropdef)>*/
}
var146 = !var_has_rvalue;
if (var146){
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "return null";
var150 = standard___standard__NativeString___to_s_with_length(var149, 11l);
var148 = var150;
varonce147 = var148;
}
var_s_nullreturn = var148;
{
var151 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:ParallelizationPhase>*/
}
{
var152 = ((val*(*)(val* self, val* p0))(var151->class->vft[COLOR_nit__parser_util__ToolContext__parse_something]))(var151, var_s_nullreturn); /* parse_something on <var151:ToolContext>*/
}
var_nullreturn = var152;
/* <var_nullreturn:ANode> isa AExpr */
cltype154 = type_nit__AExpr.color;
idtype155 = type_nit__AExpr.id;
if(cltype154 >= var_nullreturn->type->table_size) {
var153 = 0;
} else {
var153 = var_nullreturn->type->type_table[cltype154] == idtype155;
}
if (unlikely(!var153)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 117);
fatal_exit(1);
}
{
var156 = ((val*(*)(val* self))(var_mainfun->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(var_mainfun); /* n_block on <var_mainfun:nullable AMethPropdef(AMethPropdef)>*/
}
/* <var156:nullable AExpr> isa ABlockExpr */
cltype158 = type_nit__ABlockExpr.color;
idtype159 = type_nit__ABlockExpr.id;
if(var156 == NULL) {
var157 = 0;
} else {
if(cltype158 >= var156->type->table_size) {
var157 = 0;
} else {
var157 = var156->type->type_table[cltype158] == idtype159;
}
}
if (unlikely(!var157)) {
var_class_name160 = var156 == NULL ? "null" : var156->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name160);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 118);
fatal_exit(1);
}
{
var161 = ((val*(*)(val* self))(var156->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(var156); /* n_expr on <var156:nullable AExpr(ABlockExpr)>*/
}
{
((void(*)(val* self, val* p0))(var161->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var161, var_nullreturn); /* add on <var161:ANodes[AExpr]>*/
}
} else {
}
{
var162 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(var_nmethdef); /* n_signature on <var_nmethdef:ANode(AMethPropdef)>*/
}
if (var162 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 123);
fatal_exit(1);
} else {
var163 = ((val*(*)(val* self))(var162->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var162); /* n_params on <var162:nullable ASignature>*/
}
{
var164 = ((short int(*)(val* self))(var163->class->vft[COLOR_standard__abstract_collection__Collection__not_empty]))(var163); /* not_empty on <var163:ANodes[AParam]>*/
}
if (var164){
var165 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var165->class->vft[COLOR_standard__kernel__Object__init]))(var165); /* init on <var165:Array[String]>*/
}
var_init_params = var165;
{
var166 = ((val*(*)(val* self))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(var_nmethdef); /* n_signature on <var_nmethdef:ANode(AMethPropdef)>*/
}
if (var166 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 125);
fatal_exit(1);
} else {
var167 = ((val*(*)(val* self))(var166->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var166); /* n_params on <var166:nullable ASignature>*/
}
var_168 = var167;
{
var169 = ((val*(*)(val* self))(var_168->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_168); /* iterator on <var_168:ANodes[AParam]>*/
}
var_170 = var169;
for(;;) {
{
var171 = ((short int(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_170); /* is_ok on <var_170:Iterator[AParam]>*/
}
if (var171){
{
var172 = ((val*(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_170); /* item on <var_170:Iterator[AParam]>*/
}
var_param173 = var172;
{
var174 = ((val*(*)(val* self))(var_param173->class->vft[COLOR_nit__parser_nodes__AParam__n_id]))(var_param173); /* n_id on <var_param173:AParam>*/
}
{
var175 = ((val*(*)(val* self))(var174->class->vft[COLOR_nit__parser_nodes__Token__text]))(var174); /* text on <var174:TId>*/
}
{
((void(*)(val* self, val* p0))(var_init_params->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_init_params, var175); /* add on <var_init_params:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_170); /* next on <var_170:Iterator[AParam]>*/
}
} else {
goto BREAK_label176;
}
}
BREAK_label176: (void)0;
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_170); /* finish on <var_170:Iterator[AParam]>*/
}
if (unlikely(varonce177==NULL)) {
var178 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "var thread = new ";
var182 = standard___standard__NativeString___to_s_with_length(var181, 17l);
var180 = var182;
varonce179 = var180;
}
((struct instance_standard__NativeArray*)var178)->values[0]=var180;
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "(";
var186 = standard___standard__NativeString___to_s_with_length(var185, 1l);
var184 = var186;
varonce183 = var184;
}
((struct instance_standard__NativeArray*)var178)->values[2]=var184;
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = ")\nthread.start\nreturn thread\n";
var190 = standard___standard__NativeString___to_s_with_length(var189, 29l);
var188 = var190;
varonce187 = var188;
}
((struct instance_standard__NativeArray*)var178)->values[4]=var188;
} else {
var178 = varonce177;
varonce177 = NULL;
}
((struct instance_standard__NativeArray*)var178)->values[1]=var_classname;
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = ",";
var194 = standard___standard__NativeString___to_s_with_length(var193, 1l);
var192 = var194;
varonce191 = var192;
}
{
var195 = ((val*(*)(val* self, val* p0))(var_init_params->class->vft[COLOR_standard__string__Collection__join]))(var_init_params, var192); /* join on <var_init_params:Array[String]>*/
}
((struct instance_standard__NativeArray*)var178)->values[3]=var195;
{
var196 = ((val*(*)(val* self))(var178->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var178); /* native_to_s on <var178:NativeArray[String]>*/
}
varonce177 = var178;
var_s_newbody = var196;
} else {
if (unlikely(varonce197==NULL)) {
var198 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "var thread = new ";
var202 = standard___standard__NativeString___to_s_with_length(var201, 17l);
var200 = var202;
varonce199 = var200;
}
((struct instance_standard__NativeArray*)var198)->values[0]=var200;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "\nthread.start\nreturn thread\n";
var206 = standard___standard__NativeString___to_s_with_length(var205, 28l);
var204 = var206;
varonce203 = var204;
}
((struct instance_standard__NativeArray*)var198)->values[2]=var204;
} else {
var198 = varonce197;
varonce197 = NULL;
}
((struct instance_standard__NativeArray*)var198)->values[1]=var_classname;
{
var207 = ((val*(*)(val* self))(var198->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var198); /* native_to_s on <var198:NativeArray[String]>*/
}
varonce197 = var198;
var_s_newbody = var207;
}
{
var208 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:ParallelizationPhase>*/
}
{
var209 = ((val*(*)(val* self, val* p0))(var208->class->vft[COLOR_nit__parser_util__ToolContext__parse_something]))(var208, var_s_newbody); /* parse_something on <var208:ToolContext>*/
}
var_newbody = var209;
/* <var_newbody:ANode> isa ABlockExpr */
cltype211 = type_nit__ABlockExpr.color;
idtype212 = type_nit__ABlockExpr.id;
if(cltype211 >= var_newbody->type->table_size) {
var210 = 0;
} else {
var210 = var_newbody->type->type_table[cltype211] == idtype212;
}
if (unlikely(!var210)) {
var_class_name213 = var_newbody == NULL ? "null" : var_newbody->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name213);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parallelization_phase, 142);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_nmethdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block_61d]))(var_nmethdef, var_newbody); /* n_block= on <var_nmethdef:ANode(AMethPropdef)>*/
}
{
var214 = ((val*(*)(val* self))(var_amod->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_amod); /* n_classdefs on <var_amod:nullable ANode(AModule)>*/
}
{
((void(*)(val* self, val* p0))(var214->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var214, var_classdef); /* add on <var214:ANodes[AClassdef]>*/
}
RET_LABEL:;
}
