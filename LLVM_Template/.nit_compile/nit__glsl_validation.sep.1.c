#include "nit__glsl_validation.sep.0.h"
/* method glsl_validation#ToolContext#glsl_validation_phase for (self: ToolContext): Phase */
val* nit__glsl_validation___ToolContext___glsl_validation_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__glsl_validation__ToolContext___glsl_validation_phase].val; /* _glsl_validation_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _glsl_validation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__glsl_validation, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method glsl_validation#ToolContext#glsl_validation_phase= for (self: ToolContext, Phase) */
void nit__glsl_validation___ToolContext___glsl_validation_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__glsl_validation__ToolContext___glsl_validation_phase].val = p0; /* _glsl_validation_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method glsl_validation#GLSLValidationPhase#annot_name_vertex for (self: GLSLValidationPhase): String */
val* nit__glsl_validation___nit__glsl_validation__GLSLValidationPhase___annot_name_vertex(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "glsl_vertex_shader";
var3 = standard___standard__NativeString___to_s_with_length(var2, 18l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glsl_validation#GLSLValidationPhase#annot_name_fragment for (self: GLSLValidationPhase): String */
val* nit__glsl_validation___nit__glsl_validation__GLSLValidationPhase___annot_name_fragment(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "glsl_fragment_shader";
var3 = standard___standard__NativeString___to_s_with_length(var2, 20l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glsl_validation#GLSLValidationPhase#tool_is_in_path for (self: GLSLValidationPhase): nullable Bool */
val* nit__glsl_validation___nit__glsl_validation__GLSLValidationPhase___tool_is_in_path(val* self) {
val* var /* : nullable Bool */;
val* var1 /* : nullable Bool */;
var1 = self->attrs[COLOR_nit__glsl_validation__GLSLValidationPhase___tool_is_in_path].val; /* _tool_is_in_path on <self:GLSLValidationPhase> */
var = var1;
RET_LABEL:;
return var;
}
/* method glsl_validation#GLSLValidationPhase#tool_is_in_path= for (self: GLSLValidationPhase, nullable Bool) */
void nit__glsl_validation___nit__glsl_validation__GLSLValidationPhase___tool_is_in_path_61d(val* self, val* p0) {
self->attrs[COLOR_nit__glsl_validation__GLSLValidationPhase___tool_is_in_path].val = p0; /* _tool_is_in_path on <self:GLSLValidationPhase> */
RET_LABEL:;
}
/* method glsl_validation#GLSLValidationPhase#process_annotated_node for (self: GLSLValidationPhase, ANode, AAnnotation) */
void nit__glsl_validation___nit__glsl_validation__GLSLValidationPhase___nit__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nstring /* var nstring: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var1 /* : Token */;
val* var2 /* : String */;
val* var_annot_name /* var annot_name: String */;
val* var3 /* : String */;
short int var4 /* : Bool */;
short int var_is_vertex /* var is_vertex: Bool */;
val* var5 /* : String */;
short int var6 /* : Bool */;
short int var_is_fragment /* var is_fragment: Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var13 /* : Location */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var24 /* : Message */;
val* var25 /* : nullable Bool */;
val* var_in_path /* var in_path: nullable Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : ProcessReader */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : Array[String] */;
val* var43 /* : NativeArray[String] */;
val* var_proc_which /* var proc_which: ProcessReader */;
long var44 /* : Int */;
long var_status /* var status: Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : ToolContext */;
val* var52 /* : Location */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : nullable Message */;
val* var62 /* : nullable String */;
val* var_shader /* var shader: nullable String */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var_tmp /* var tmp: String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
val* var_ext /* var ext: nullable Object */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var_path /* var path: String */;
val* var83 /* : ProcessReader */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
val* var87 /* : FlatString */;
val* var88 /* : Array[String] */;
val* var89 /* : NativeArray[String] */;
val* var_proc_validator /* var proc_validator: ProcessReader */;
val* var90 /* : String */;
val* var91 /* : Array[String] */;
val* var92 /* : Pattern */;
val* var_lines /* var lines: Array[String] */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : Regex */;
val* var_regex /* var regex: Regex */;
val* var_98 /* var : Array[String] */;
val* var99 /* : Iterator[nullable Object] */;
val* var_100 /* var : ArrayIterator[String] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
val* var_line /* var line: String */;
val* var103 /* : nullable Match */;
val* var_match /* var match: nullable Match */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
val* var106 /* : Array[Match] */;
val* var107 /* : nullable Object */;
val* var108 /* : String */;
long var109 /* : Int */;
long var_shader_line_no /* var shader_line_no: Int */;
val* var110 /* : Array[Match] */;
val* var111 /* : nullable Object */;
val* var112 /* : String */;
val* var_msg /* var msg: String */;
val* var113 /* : Location */;
long var114 /* : Int */;
long var115 /* : Int */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name;
long var120 /* : Int */;
long var_line_start /* var line_start: Int */;
long var_char_start /* var char_start: Int */;
long var_char_end /* var char_end: Int */;
val* var121 /* : Location */;
val* var122 /* : Location */;
val* var123 /* : nullable SourceFile */;
val* var_loc /* var loc: Location */;
val* var124 /* : ToolContext */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
val* var135 /* : String */;
val* var136 /* : nullable Message */;
var_nstring = p0;
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
var_annot_name = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__glsl_validation__GLSLValidationPhase__annot_name_vertex]))(self); /* annot_name_vertex on <self:GLSLValidationPhase>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var_annot_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_annot_name, var3); /* == on <var_annot_name:String>*/
}
var_is_vertex = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__glsl_validation__GLSLValidationPhase__annot_name_fragment]))(self); /* annot_name_fragment on <self:GLSLValidationPhase>*/
}
{
var6 = ((short int(*)(val* self, val* p0))(var_annot_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_annot_name, var5); /* == on <var_annot_name:String>*/
}
var_is_fragment = var6;
var8 = !var_is_vertex;
var_ = var8;
if (var8){
var9 = !var_is_fragment;
var7 = var9;
} else {
var7 = var_;
}
if (var7){
goto RET_LABEL;
} else {
}
/* <var_nstring:ANode> isa AStringFormExpr */
cltype = type_nit__AStringFormExpr.color;
idtype = type_nit__AStringFormExpr.id;
if(cltype >= var_nstring->type->table_size) {
var10 = 0;
} else {
var10 = var_nstring->type->type_table[cltype] == idtype;
}
var11 = !var10;
if (var11){
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:GLSLValidationPhase>*/
}
{
var13 = ((val*(*)(val* self))(var_nstring->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nstring); /* location on <var_nstring:ANode>*/
}
if (unlikely(varonce==NULL)) {
var14 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Syntax Error: only a string literal can be annotated as `";
var18 = standard___standard__NativeString___to_s_with_length(var17, 57l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "`.";
var22 = standard___standard__NativeString___to_s_with_length(var21, 2l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var14)->values[1]=var_annot_name;
{
var23 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
var24 = ((val*(*)(val* self, val* p0, val* p1))(var12->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var12, var13, var23); /* error on <var12:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__glsl_validation__GLSLValidationPhase__tool_is_in_path]))(self); /* tool_is_in_path on <self:GLSLValidationPhase>*/
}
var_in_path = var25;
if (var_in_path == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Bool#!= (var_in_path,((val*)NULL)) on <var_in_path:nullable Bool> */
var29 = 0; /* incompatible types Bool vs. null; cannot be NULL */
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
var31 = (short int)((long)(var_in_path)>>2);
var32 = !var31;
if (var32){
goto RET_LABEL;
} else {
}
} else {
var33 = NEW_standard__ProcessReader(&type_standard__ProcessReader);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "which";
var37 = standard___standard__NativeString___to_s_with_length(var36, 5l);
var35 = var37;
varonce34 = var35;
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "glslangValidator";
var41 = standard___standard__NativeString___to_s_with_length(var40, 16l);
var39 = var41;
varonce38 = var39;
}
var42 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var42 = array_instance Array[String] */
var43 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var43)->values[0] = (val*) var39;
{
((void(*)(val* self, val* p0, long p1))(var42->class->vft[COLOR_standard__array__Array__with_native]))(var42, var43, 1l); /* with_native on <var42:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var33->class->vft[COLOR_standard__exec__Process__init]))(var33, var35, var42); /* init on <var33:ProcessReader>*/
}
var_proc_which = var33;
{
((void(*)(val* self))(var_proc_which->class->vft[COLOR_standard__exec__Process__wait]))(var_proc_which); /* wait on <var_proc_which:ProcessReader>*/
}
{
((void(*)(val* self))(var_proc_which->class->vft[COLOR_standard__stream__Stream__close]))(var_proc_which); /* close on <var_proc_which:ProcessReader>*/
}
{
var44 = ((long(*)(val* self))(var_proc_which->class->vft[COLOR_standard__exec__Process__status]))(var_proc_which); /* status on <var_proc_which:ProcessReader>*/
}
var_status = var44;
{
{ /* Inline kernel#Int#== (var_status,0l) on <var_status:Int> */
var47 = var_status == 0l;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var48 = (val*)((long)(var45)<<2|3);
var_in_path = var48;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__glsl_validation__GLSLValidationPhase__tool_is_in_path_61d]))(self, var_in_path); /* tool_is_in_path= on <self:GLSLValidationPhase>*/
}
var49 = (short int)((long)(var_in_path)>>2);
var50 = !var49;
if (var50){
{
var51 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:GLSLValidationPhase>*/
}
{
var52 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nat); /* location on <var_nat:AAnnotation>*/
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "glslvalidator";
var56 = standard___standard__NativeString___to_s_with_length(var55, 13l);
var54 = var56;
varonce53 = var54;
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "Warning: program `glslangValidator` not in PATH, cannot validate this shader.";
var60 = standard___standard__NativeString___to_s_with_length(var59, 77l);
var58 = var60;
varonce57 = var58;
}
{
var61 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var51->class->vft[COLOR_nit__toolcontext__ToolContext__warning]))(var51, var52, var54, var58); /* warning on <var51:ToolContext>*/
}
goto RET_LABEL;
} else {
}
}
{
var62 = ((val*(*)(val* self))(var_nstring->class->vft[COLOR_nit__literal__AStringFormExpr__value]))(var_nstring); /* value on <var_nstring:ANode(AStringFormExpr)>*/
}
var_shader = var62;
if (var_shader == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
var64 = ((short int(*)(val* self, val* p0))(var_shader->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_shader, ((val*)NULL)); /* != on <var_shader:nullable String>*/
var63 = var64;
}
if (unlikely(!var63)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__glsl_validation, 80);
fatal_exit(1);
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "/tmp/";
var68 = standard___standard__NativeString___to_s_with_length(var67, 5l);
var66 = var68;
varonce65 = var66;
}
var_tmp = var66;
if (var_is_vertex){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "vert";
var72 = standard___standard__NativeString___to_s_with_length(var71, 4l);
var70 = var72;
varonce69 = var70;
}
var_ext = var70;
} else {
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "frag";
var76 = standard___standard__NativeString___to_s_with_length(var75, 4l);
var74 = var76;
varonce73 = var74;
}
var_ext = var74;
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "nit_shader.";
var80 = standard___standard__NativeString___to_s_with_length(var79, 11l);
var78 = var80;
varonce77 = var78;
}
{
var81 = ((val*(*)(val* self, val* p0))(var_tmp->class->vft[COLOR_standard__file__String___47d]))(var_tmp, var78); /* / on <var_tmp:String>*/
}
{
var82 = ((val*(*)(val* self, val* p0))(var81->class->vft[COLOR_standard__string__String___43d]))(var81, var_ext); /* + on <var81:String>*/
}
var_path = var82;
{
((void(*)(val* self, val* p0))(var_shader->class->vft[COLOR_standard__file__Writable__write_to_file]))(var_shader, var_path); /* write_to_file on <var_shader:nullable String(String)>*/
}
var83 = NEW_standard__ProcessReader(&type_standard__ProcessReader);
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "glslangValidator";
var87 = standard___standard__NativeString___to_s_with_length(var86, 16l);
var85 = var87;
varonce84 = var85;
}
var88 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var88 = array_instance Array[String] */
var89 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var89)->values[0] = (val*) var_path;
{
((void(*)(val* self, val* p0, long p1))(var88->class->vft[COLOR_standard__array__Array__with_native]))(var88, var89, 1l); /* with_native on <var88:Array[String]>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(var83->class->vft[COLOR_standard__exec__Process__init]))(var83, var85, var88); /* init on <var83:ProcessReader>*/
}
var_proc_validator = var83;
{
((void(*)(val* self))(var_proc_validator->class->vft[COLOR_standard__exec__Process__wait]))(var_proc_validator); /* wait on <var_proc_validator:ProcessReader>*/
}
{
var90 = ((val*(*)(val* self))(var_proc_validator->class->vft[COLOR_standard__stream__Reader__read_all]))(var_proc_validator); /* read_all on <var_proc_validator:ProcessReader>*/
}
{
var92 = (val*)((long)('\n')<<2|2);
var91 = ((val*(*)(val* self, val* p0))(var90->class->vft[COLOR_standard__string_search__Text__split]))(var90, var92); /* split on <var90:String>*/
}
var_lines = var91;
{
((void(*)(val* self))(var_proc_validator->class->vft[COLOR_standard__stream__Stream__close]))(var_proc_validator); /* close on <var_proc_validator:ProcessReader>*/
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "[A-Z]+: ([0-9]+):([0-9]+): (.*)";
var96 = standard___standard__NativeString___to_s_with_length(var95, 31l);
var94 = var96;
varonce93 = var94;
}
{
var97 = ((val*(*)(val* self))(var94->class->vft[COLOR_standard__re__Text__to_re]))(var94); /* to_re on <var94:String>*/
}
var_regex = var97;
var_98 = var_lines;
{
var99 = ((val*(*)(val* self))(var_98->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_98); /* iterator on <var_98:Array[String]>*/
}
var_100 = var99;
for(;;) {
{
var101 = ((short int(*)(val* self))(var_100->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_100); /* is_ok on <var_100:ArrayIterator[String]>*/
}
if (var101){
{
var102 = ((val*(*)(val* self))(var_100->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_100); /* item on <var_100:ArrayIterator[String]>*/
}
var_line = var102;
{
var103 = ((val*(*)(val* self, val* p0))(var_line->class->vft[COLOR_standard__string_search__Text__search]))(var_line, var_regex); /* search on <var_line:String>*/
}
var_match = var103;
if (var_match == NULL) {
var104 = 0; /* is null */
} else {
var104 = 1; /* arg is null and recv is not */
}
if (0) {
var105 = ((short int(*)(val* self, val* p0))(var_match->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_match, ((val*)NULL)); /* != on <var_match:nullable Match>*/
var104 = var105;
}
if (var104){
{
var106 = ((val*(*)(val* self))(var_match->class->vft[COLOR_standard__re__Match__subs]))(var_match); /* subs on <var_match:nullable Match(Match)>*/
}
{
var107 = ((val*(*)(val* self, long p0))(var106->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var106, 1l); /* [] on <var106:Array[Match]>*/
}
{
var108 = ((val*(*)(val* self))(var107->class->vft[COLOR_standard__string__Object__to_s]))(var107); /* to_s on <var107:nullable Object(Match)>*/
}
{
var109 = ((long(*)(val* self))(var108->class->vft[COLOR_standard__string__Text__to_i]))(var108); /* to_i on <var108:String>*/
}
var_shader_line_no = var109;
{
var110 = ((val*(*)(val* self))(var_match->class->vft[COLOR_standard__re__Match__subs]))(var_match); /* subs on <var_match:nullable Match(Match)>*/
}
{
var111 = ((val*(*)(val* self, long p0))(var110->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var110, 2l); /* [] on <var110:Array[Match]>*/
}
{
var112 = ((val*(*)(val* self))(var111->class->vft[COLOR_standard__string__Object__to_s]))(var111); /* to_s on <var111:nullable Object(Match)>*/
}
var_msg = var112;
{
var113 = ((val*(*)(val* self))(var_nstring->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nstring); /* location on <var_nstring:ANode(AStringFormExpr)>*/
}
{
var114 = ((long(*)(val* self))(var113->class->vft[COLOR_nit__location__Location__line_start]))(var113); /* line_start on <var113:Location>*/
}
{
{ /* Inline kernel#Int#+ (var114,var_shader_line_no) on <var114:Int> */
/* Covariant cast for argument 0 (i) <var_shader_line_no:Int> isa OTHER */
/* <var_shader_line_no:Int> isa OTHER */
var117 = 1; /* easy <var_shader_line_no:Int> isa OTHER*/
if (unlikely(!var117)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var120 = var114 + var_shader_line_no;
var115 = var120;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
var_line_start = var115;
var_char_start = 0l;
var_char_end = 0l;
var121 = NEW_nit__Location(&type_nit__Location);
{
var122 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nat); /* location on <var_nat:AAnnotation>*/
}
{
var123 = ((val*(*)(val* self))(var122->class->vft[COLOR_nit__location__Location__file]))(var122); /* file on <var122:Location>*/
}
{
((void(*)(val* self, val* p0))(var121->class->vft[COLOR_nit__location__Location__file_61d]))(var121, var123); /* file= on <var121:Location>*/
}
{
((void(*)(val* self, long p0))(var121->class->vft[COLOR_nit__location__Location__line_start_61d]))(var121, var_line_start); /* line_start= on <var121:Location>*/
}
{
((void(*)(val* self, long p0))(var121->class->vft[COLOR_nit__location__Location__line_end_61d]))(var121, var_line_start); /* line_end= on <var121:Location>*/
}
{
((void(*)(val* self, long p0))(var121->class->vft[COLOR_nit__location__Location__column_start_61d]))(var121, var_char_start); /* column_start= on <var121:Location>*/
}
{
((void(*)(val* self, long p0))(var121->class->vft[COLOR_nit__location__Location__column_end_61d]))(var121, var_char_end); /* column_end= on <var121:Location>*/
}
{
((void(*)(val* self))(var121->class->vft[COLOR_standard__kernel__Object__init]))(var121); /* init on <var121:Location>*/
}
var_loc = var121;
{
var124 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:GLSLValidationPhase>*/
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "glslvalidator";
var128 = standard___standard__NativeString___to_s_with_length(var127, 13l);
var126 = var128;
varonce125 = var126;
}
if (unlikely(varonce129==NULL)) {
var130 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "Shader error on ";
var134 = standard___standard__NativeString___to_s_with_length(var133, 16l);
var132 = var134;
varonce131 = var132;
}
((struct instance_standard__NativeArray*)var130)->values[0]=var132;
} else {
var130 = varonce129;
varonce129 = NULL;
}
((struct instance_standard__NativeArray*)var130)->values[1]=var_msg;
{
var135 = ((val*(*)(val* self))(var130->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
{
var136 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var124->class->vft[COLOR_nit__toolcontext__ToolContext__warning]))(var124, var_loc, var126, var135); /* warning on <var124:ToolContext>*/
}
} else {
}
{
((void(*)(val* self))(var_100->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_100); /* next on <var_100:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_100->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_100); /* finish on <var_100:ArrayIterator[String]>*/
}
RET_LABEL:;
}
