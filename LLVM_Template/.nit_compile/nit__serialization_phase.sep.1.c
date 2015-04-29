#include "nit__serialization_phase.sep.0.h"
/* method serialization_phase#ToolContext#serialization_phase_pre_model for (self: ToolContext): Phase */
val* nit__serialization_phase___ToolContext___serialization_phase_pre_model(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__serialization_phase__ToolContext___serialization_phase_pre_model].val; /* _serialization_phase_pre_model on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _serialization_phase_pre_model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#ToolContext#serialization_phase_pre_model= for (self: ToolContext, Phase) */
void nit__serialization_phase___ToolContext___serialization_phase_pre_model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__serialization_phase__ToolContext___serialization_phase_pre_model].val = p0; /* _serialization_phase_pre_model on <self:ToolContext> */
RET_LABEL:;
}
/* method serialization_phase#ToolContext#serialization_phase_post_model for (self: ToolContext): Phase */
val* nit__serialization_phase___ToolContext___serialization_phase_post_model(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__serialization_phase__ToolContext___serialization_phase_post_model].val; /* _serialization_phase_post_model on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _serialization_phase_post_model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#ToolContext#serialization_phase_post_model= for (self: ToolContext, Phase) */
void nit__serialization_phase___ToolContext___serialization_phase_post_model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__serialization_phase__ToolContext___serialization_phase_post_model].val = p0; /* _serialization_phase_post_model on <self:ToolContext> */
RET_LABEL:;
}
/* method serialization_phase#ToolContext#place_holder_type_name for (self: ToolContext): String */
val* nit__serialization_phase___ToolContext___place_holder_type_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "PlaceHolderTypeWhichShouldNotExist";
var3 = standard___standard__NativeString___to_s_with_length(var2, 34l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#SerializationPhasePreModel#process_annotated_node for (self: SerializationPhasePreModel, ANode, AAnnotation) */
void nit__serialization_phase___nit__serialization_phase__SerializationPhasePreModel___nit__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nclassdef /* var nclassdef: ANode */;
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
val* var16 /* : ToolContext */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : APropdef */;
val* var_sc /* var sc: APropdef */;
val* var22 /* : Location */;
val* var23 /* : ANodes[APropdef] */;
var_nclassdef = p0;
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
var4 = "auto_serializable";
var5 = standard___standard__NativeString___to_s_with_length(var4, 17l);
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
/* <var_nclassdef:ANode> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var7 = 0;
} else {
var7 = var_nclassdef->type->type_table[cltype] == idtype;
}
var8 = !var7;
if (var8){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SerializationPhasePreModel>*/
}
{
var10 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nclassdef); /* location on <var_nclassdef:ANode>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Syntax Error: only a concrete class can be automatically serialized.";
var14 = standard___standard__NativeString___to_s_with_length(var13, 68l);
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
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SerializationPhasePreModel>*/
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Serializable";
var20 = standard___standard__NativeString___to_s_with_length(var19, 12l);
var18 = var20;
varonce17 = var18;
}
{
var21 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_nit__parser_util__ToolContext__parse_superclass]))(var16, var18); /* parse_superclass on <var16:ToolContext>*/
}
var_sc = var21;
{
var22 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nat); /* location on <var_nat:AAnnotation>*/
}
{
((void(*)(val* self, val* p0))(var_sc->class->vft[COLOR_nit__parser_nodes__ANode__location_61d]))(var_sc, var22); /* location= on <var_sc:APropdef>*/
}
{
var23 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:ANode(AStdClassdef)>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var23, var_sc); /* add on <var23:ANodes[APropdef]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__serialization_phase__SerializationPhasePreModel__generate_serialization_method]))(self, var_nclassdef); /* generate_serialization_method on <self:SerializationPhasePreModel>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__serialization_phase__SerializationPhasePreModel__generate_deserialization_init]))(self, var_nclassdef); /* generate_deserialization_init on <self:SerializationPhasePreModel>*/
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#process_nmodule for (self: SerializationPhasePreModel, AModule) */
void nit__serialization_phase___nit__serialization_phase__SerializationPhasePreModel___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : Array[AMethPropdef] */;
val* var1 /* : Array[AStdClassdef] */;
val* var_auto_serializable_nclassdefs /* var auto_serializable_nclassdefs: Array[AStdClassdef] */;
val* var2 /* : ANodes[AClassdef] */;
val* var_ /* var : ANodes[AClassdef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[AClassdef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
short int var_9 /* var : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : Array[AAnnotation] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_nmodule = p0;
{
var = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__serialization_phase__AModule__inits_to_retype]))(var_nmodule); /* inits_to_retype on <var_nmodule:AModule>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var); /* clear on <var:Array[AMethPropdef]>*/
}
var1 = NEW_standard__Array(&type_standard__Array__nit__AStdClassdef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[AStdClassdef]>*/
}
var_auto_serializable_nclassdefs = var1;
{
var2 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AClassdef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AClassdef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AClassdef]>*/
}
var_nclassdef = var6;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var8 = 0;
} else {
var8 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_9 = var8;
if (var8){
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "auto_serializable";
var12 = standard___standard__NativeString___to_s_with_length(var11, 17l);
var10 = var12;
varonce = var10;
}
{
var13 = ((val*(*)(val* self, val* p0))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__Prod__get_annotations]))(var_nclassdef, var10); /* get_annotations on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
{
var14 = ((short int(*)(val* self))(var13->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var13); /* is_empty on <var13:Array[AAnnotation]>*/
}
var15 = !var14;
var7 = var15;
} else {
var7 = var_9;
}
if (var7){
{
((void(*)(val* self, val* p0))(var_auto_serializable_nclassdefs->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_auto_serializable_nclassdefs, var_nclassdef); /* add on <var_auto_serializable_nclassdefs:Array[AStdClassdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AClassdef]>*/
}
{
var16 = ((short int(*)(val* self))(var_auto_serializable_nclassdefs->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_auto_serializable_nclassdefs); /* is_empty on <var_auto_serializable_nclassdefs:Array[AStdClassdef]>*/
}
var17 = !var16;
if (var17){
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__serialization_phase__SerializationPhasePreModel__generate_deserialization_method]))(self, var_nmodule, var_auto_serializable_nclassdefs); /* generate_deserialization_method on <self:SerializationPhasePreModel>*/
}
} else {
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#generate_serialization_method for (self: SerializationPhasePreModel, AClassdef) */
void nit__serialization_phase___nit__serialization_phase__SerializationPhasePreModel___generate_serialization_method(val* self, val* p0) {
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
val* var_ /* var : ANodes[APropdef] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[APropdef] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : String */;
val* var_name /* var name: String */;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : ToolContext */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
val* var44 /* : APropdef */;
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
var3 = "redef fun core_serialize_to(v)";
var4 = standard___standard__NativeString___to_s_with_length(var3, 30l);
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
var11 = "\tsuper";
var12 = standard___standard__NativeString___to_s_with_length(var11, 6l);
var10 = var12;
varonce9 = var10;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var10); /* add on <var_code:Array[String]>*/
}
var_ = var_npropdefs;
{
var13 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[APropdef]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[APropdef]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[APropdef]>*/
}
var_attribute = var16;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype = type_nit__AAttrPropdef.color;
idtype = type_nit__AAttrPropdef.id;
if(cltype >= var_attribute->type->table_size) {
var17 = 0;
} else {
var17 = var_attribute->type->type_table[cltype] == idtype;
}
if (var17){
{
var18 = ((val*(*)(val* self))(var_attribute->class->vft[COLOR_nit__serialization_phase__AAttrPropdef__name]))(var_attribute); /* name on <var_attribute:APropdef(AAttrPropdef)>*/
}
var_name = var18;
if (unlikely(varonce19==NULL)) {
var20 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "\tv.serialize_attribute(\"";
var24 = standard___standard__NativeString___to_s_with_length(var23, 24l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var20)->values[0]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "\", ";
var28 = standard___standard__NativeString___to_s_with_length(var27, 3l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var20)->values[2]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ")";
var32 = standard___standard__NativeString___to_s_with_length(var31, 1l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var20)->values[4]=var30;
} else {
var20 = varonce19;
varonce19 = NULL;
}
((struct instance_standard__NativeArray*)var20)->values[1]=var_name;
((struct instance_standard__NativeArray*)var20)->values[3]=var_name;
{
var33 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var33); /* add on <var_code:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[APropdef]>*/
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "end";
var37 = standard___standard__NativeString___to_s_with_length(var36, 3l);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var35); /* add on <var_code:Array[String]>*/
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SerializationPhasePreModel>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "\n";
var42 = standard___standard__NativeString___to_s_with_length(var41, 1l);
var40 = var42;
varonce39 = var40;
}
{
var43 = ((val*(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__string__Collection__join]))(var_code, var40); /* join on <var_code:Array[String]>*/
}
{
var44 = ((val*(*)(val* self, val* p0))(var38->class->vft[COLOR_nit__parser_util__ToolContext__parse_propdef]))(var38, var43); /* parse_propdef on <var38:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var_npropdefs->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_npropdefs, var44); /* push on <var_npropdefs:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#generate_deserialization_init for (self: SerializationPhasePreModel, AStdClassdef) */
void nit__serialization_phase___nit__serialization_phase__SerializationPhasePreModel___generate_deserialization_init(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AStdClassdef */;
val* var /* : AClasskind */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
val* var3 /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var_ /* var : ANodes[APropdef] */;
val* var15 /* : Iterator[nullable Object] */;
val* var_16 /* var : Iterator[APropdef] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : nullable AType */;
val* var_n_type /* var n_type: nullable AType */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : ToolContext */;
val* var26 /* : String */;
val* var_type_name /* var type_name: nullable Object */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var_name /* var name: String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : String */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : String */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
val* var90 /* : ToolContext */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
val* var95 /* : String */;
val* var96 /* : APropdef */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name;
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var100 /* : nullable ANode */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
val* var105 /* : Array[AMethPropdef] */;
var_nclassdef = p0;
{
var = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_classkind]))(var_nclassdef); /* n_classkind on <var_nclassdef:AStdClassdef>*/
}
/* <var:AClasskind> isa AAbstractClasskind */
cltype = type_nit__AAbstractClasskind.color;
idtype = type_nit__AAbstractClasskind.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:AStdClassdef>*/
}
var_npropdefs = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[String]>*/
}
var_code = var3;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "init from_deserializer(v: Deserializer)";
var6 = standard___standard__NativeString___to_s_with_length(var5, 39l);
var4 = var6;
varonce = var4;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var4); /* add on <var_code:Array[String]>*/
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "do";
var10 = standard___standard__NativeString___to_s_with_length(var9, 2l);
var8 = var10;
varonce7 = var8;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var8); /* add on <var_code:Array[String]>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "\tv.notify_of_creation self";
var14 = standard___standard__NativeString___to_s_with_length(var13, 26l);
var12 = var14;
varonce11 = var12;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var12); /* add on <var_code:Array[String]>*/
}
var_ = var_npropdefs;
{
var15 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[APropdef]>*/
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:Iterator[APropdef]>*/
}
if (var17){
{
var18 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:Iterator[APropdef]>*/
}
var_attribute = var18;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype20 = type_nit__AAttrPropdef.color;
idtype21 = type_nit__AAttrPropdef.id;
if(cltype20 >= var_attribute->type->table_size) {
var19 = 0;
} else {
var19 = var_attribute->type->type_table[cltype20] == idtype21;
}
if (var19){
{
var22 = ((val*(*)(val* self))(var_attribute->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_type]))(var_attribute); /* n_type on <var_attribute:APropdef(AAttrPropdef)>*/
}
var_n_type = var22;
if (var_n_type == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_type, ((val*)NULL)); /* == on <var_n_type:nullable AType>*/
var23 = var24;
}
if (var23){
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SerializationPhasePreModel>*/
}
{
var26 = ((val*(*)(val* self))(var25->class->vft[COLOR_nit__serialization_phase__ToolContext__place_holder_type_name]))(var25); /* place_holder_type_name on <var25:ToolContext>*/
}
var_type_name = var26;
} else {
{
var27 = ((val*(*)(val* self))(var_n_type->class->vft[COLOR_nit__serialization_phase__AType__type_name]))(var_n_type); /* type_name on <var_n_type:nullable AType(AType)>*/
}
var_type_name = var27;
}
{
var28 = ((val*(*)(val* self))(var_attribute->class->vft[COLOR_nit__serialization_phase__AAttrPropdef__name]))(var_attribute); /* name on <var_attribute:APropdef(AAttrPropdef)>*/
}
var_name = var28;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "";
var32 = standard___standard__NativeString___to_s_with_length(var31, 0l);
var30 = var32;
varonce29 = var30;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var30); /* add on <var_code:Array[String]>*/
}
if (unlikely(varonce33==NULL)) {
var34 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "\tvar ";
var38 = standard___standard__NativeString___to_s_with_length(var37, 5l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var34)->values[0]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " = v.deserialize_attribute(\"";
var42 = standard___standard__NativeString___to_s_with_length(var41, 28l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var34)->values[2]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "\")";
var46 = standard___standard__NativeString___to_s_with_length(var45, 2l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var34)->values[4]=var44;
} else {
var34 = varonce33;
varonce33 = NULL;
}
((struct instance_standard__NativeArray*)var34)->values[1]=var_name;
((struct instance_standard__NativeArray*)var34)->values[3]=var_name;
{
var47 = ((val*(*)(val* self))(var34->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var47); /* add on <var_code:Array[String]>*/
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_standard__NativeArray(11l, &type_standard__NativeArray__standard__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "\tassert ";
var53 = standard___standard__NativeString___to_s_with_length(var52, 8l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " isa ";
var57 = standard___standard__NativeString___to_s_with_length(var56, 5l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var49)->values[2]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = " else print \"Unsupported type for attribute \'";
var61 = standard___standard__NativeString___to_s_with_length(var60, 45l);
var59 = var61;
varonce58 = var59;
}
((struct instance_standard__NativeArray*)var49)->values[4]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "\', got \'{";
var65 = standard___standard__NativeString___to_s_with_length(var64, 9l);
var63 = var65;
varonce62 = var63;
}
((struct instance_standard__NativeArray*)var49)->values[6]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ".class_name}\' (ex ";
var69 = standard___standard__NativeString___to_s_with_length(var68, 18l);
var67 = var69;
varonce66 = var67;
}
((struct instance_standard__NativeArray*)var49)->values[8]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ")\"";
var73 = standard___standard__NativeString___to_s_with_length(var72, 2l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var49)->values[10]=var71;
} else {
var49 = varonce48;
varonce48 = NULL;
}
((struct instance_standard__NativeArray*)var49)->values[1]=var_name;
((struct instance_standard__NativeArray*)var49)->values[3]=var_type_name;
((struct instance_standard__NativeArray*)var49)->values[5]=var_name;
((struct instance_standard__NativeArray*)var49)->values[7]=var_name;
((struct instance_standard__NativeArray*)var49)->values[9]=var_type_name;
{
var74 = ((val*(*)(val* self))(var49->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var74); /* add on <var_code:Array[String]>*/
}
if (unlikely(varonce75==NULL)) {
var76 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "\tself.";
var80 = standard___standard__NativeString___to_s_with_length(var79, 6l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var76)->values[0]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " = ";
var84 = standard___standard__NativeString___to_s_with_length(var83, 3l);
var82 = var84;
varonce81 = var82;
}
((struct instance_standard__NativeArray*)var76)->values[2]=var82;
} else {
var76 = varonce75;
varonce75 = NULL;
}
((struct instance_standard__NativeArray*)var76)->values[1]=var_name;
((struct instance_standard__NativeArray*)var76)->values[3]=var_name;
{
var85 = ((val*(*)(val* self))(var76->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var85); /* add on <var_code:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:Iterator[APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:Iterator[APropdef]>*/
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "end";
var89 = standard___standard__NativeString___to_s_with_length(var88, 3l);
var87 = var89;
varonce86 = var87;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var87); /* add on <var_code:Array[String]>*/
}
{
var90 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SerializationPhasePreModel>*/
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "\n";
var94 = standard___standard__NativeString___to_s_with_length(var93, 1l);
var92 = var94;
varonce91 = var92;
}
{
var95 = ((val*(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__string__Collection__join]))(var_code, var92); /* join on <var_code:Array[String]>*/
}
{
var96 = ((val*(*)(val* self, val* p0))(var90->class->vft[COLOR_nit__parser_util__ToolContext__parse_propdef]))(var90, var95); /* parse_propdef on <var90:ToolContext>*/
}
/* <var96:APropdef> isa AMethPropdef */
cltype98 = type_nit__AMethPropdef.color;
idtype99 = type_nit__AMethPropdef.id;
if(cltype98 >= var96->type->table_size) {
var97 = 0;
} else {
var97 = var96->type->type_table[cltype98] == idtype99;
}
if (unlikely(!var97)) {
var_class_name = var96 == NULL ? "null" : var96->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 131);
fatal_exit(1);
}
var_npropdef = var96;
{
((void(*)(val* self, val* p0))(var_npropdefs->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_npropdefs, var_npropdef); /* add on <var_npropdefs:ANodes[APropdef]>*/
}
{
var100 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_nclassdef); /* parent on <var_nclassdef:AStdClassdef>*/
}
/* <var100:nullable ANode> isa AModule */
cltype102 = type_nit__AModule.color;
idtype103 = type_nit__AModule.id;
if(var100 == NULL) {
var101 = 0;
} else {
if(cltype102 >= var100->type->table_size) {
var101 = 0;
} else {
var101 = var100->type->type_table[cltype102] == idtype103;
}
}
if (unlikely(!var101)) {
var_class_name104 = var100 == NULL ? "null" : var100->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 133);
fatal_exit(1);
}
{
var105 = ((val*(*)(val* self))(var100->class->vft[COLOR_nit__serialization_phase__AModule__inits_to_retype]))(var100); /* inits_to_retype on <var100:nullable ANode(AModule)>*/
}
{
((void(*)(val* self, val* p0))(var105->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var105, var_npropdef); /* add on <var105:Array[AMethPropdef]>*/
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#generate_deserialization_method for (self: SerializationPhasePreModel, AModule, Array[AStdClassdef]) */
void nit__serialization_phase___nit__serialization_phase__SerializationPhasePreModel___generate_deserialization_method(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdefs /* var nclassdefs: Array[AStdClassdef] */;
val* var /* : Array[String] */;
val* var_code /* var code: Array[String] */;
val* var1 /* : nullable AStdClassdef */;
val* var_deserializer_nclassdef /* var deserializer_nclassdef: nullable AStdClassdef */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var_deserializer_npropdef /* var deserializer_npropdef: nullable Object */;
val* var7 /* : nullable AMethPropdef */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : ToolContext */;
val* var19 /* : Location */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : Message */;
val* var_ /* var : Array[AStdClassdef] */;
val* var25 /* : Iterator[nullable Object] */;
val* var_26 /* var : ArrayIterator[AStdClassdef] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AStdClassdef */;
val* var29 /* : nullable TClassid */;
val* var30 /* : String */;
val* var_name /* var name: String */;
short int var31 /* : Bool */;
val* var32 /* : ANodes[AFormaldef] */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
val* var35 /* : AClasskind */;
short int var36 /* : Bool */;
int cltype;
int idtype;
short int var37 /* : Bool */;
val* var39 /* : NativeArray[String] */;
static val* varonce38;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
val* var67 /* : ANodes[AClassdef] */;
val* var68 /* : ToolContext */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
val* var73 /* : String */;
val* var74 /* : AClassdef */;
val* var75 /* : ANodes[APropdef] */;
val* var76 /* : ToolContext */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : APropdef */;
var_nmodule = p0;
var_nclassdefs = p1;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[String]>*/
}
var_code = var;
{
var1 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__serialization_phase__AModule__deserializer_nclassdef]))(var_nmodule); /* deserializer_nclassdef on <var_nmodule:AModule>*/
}
var_deserializer_nclassdef = var1;
if (var_deserializer_nclassdef == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_deserializer_nclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_deserializer_nclassdef, ((val*)NULL)); /* == on <var_deserializer_nclassdef:nullable AStdClassdef>*/
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "redef class Deserializer";
var6 = standard___standard__NativeString___to_s_with_length(var5, 24l);
var4 = var6;
varonce = var4;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var4); /* add on <var_code:Array[String]>*/
}
var_deserializer_npropdef = ((val*)NULL);
} else {
{
var7 = ((val*(*)(val* self))(var_deserializer_nclassdef->class->vft[COLOR_nit__serialization_phase__AStdClassdef__deserializer_npropdef]))(var_deserializer_nclassdef); /* deserializer_npropdef on <var_deserializer_nclassdef:nullable AStdClassdef(AStdClassdef)>*/
}
var_deserializer_npropdef = var7;
}
if (var_deserializer_npropdef == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_deserializer_npropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_deserializer_npropdef, ((val*)NULL)); /* == on <var_deserializer_npropdef:nullable Object(nullable AMethPropdef)>*/
var8 = var9;
}
if (var8){
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "\tredef fun deserialize_class(name)";
var13 = standard___standard__NativeString___to_s_with_length(var12, 34l);
var11 = var13;
varonce10 = var11;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var11); /* add on <var_code:Array[String]>*/
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "\tdo";
var17 = standard___standard__NativeString___to_s_with_length(var16, 3l);
var15 = var17;
varonce14 = var15;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var15); /* add on <var_code:Array[String]>*/
}
} else {
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SerializationPhasePreModel>*/
}
{
var19 = ((val*(*)(val* self))(var_deserializer_npropdef->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_deserializer_npropdef); /* location on <var_deserializer_npropdef:nullable Object(AMethPropdef)>*/
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Error: you cannot define `Deserializer::deserialize_class` in a module where you use `auto_serializable`.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 105l);
var21 = var23;
varonce20 = var21;
}
{
var24 = ((val*(*)(val* self, val* p0, val* p1))(var18->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var18, var19, var21); /* error on <var18:ToolContext>*/
}
goto RET_LABEL;
}
var_ = var_nclassdefs;
{
var25 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[AStdClassdef]>*/
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:ArrayIterator[AStdClassdef]>*/
}
if (var27){
{
var28 = ((val*(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:ArrayIterator[AStdClassdef]>*/
}
var_nclassdef = var28;
{
var29 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_id]))(var_nclassdef); /* n_id on <var_nclassdef:AStdClassdef>*/
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 161);
fatal_exit(1);
} else {
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_nit__parser_nodes__Token__text]))(var29); /* text on <var29:nullable TClassid>*/
}
var_name = var30;
{
var32 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef); /* n_formaldefs on <var_nclassdef:AStdClassdef>*/
}
{
var33 = ((short int(*)(val* self))(var32->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var32); /* is_empty on <var32:ANodes[AFormaldef]>*/
}
var_34 = var33;
if (var33){
{
var35 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_classkind]))(var_nclassdef); /* n_classkind on <var_nclassdef:AStdClassdef>*/
}
/* <var35:AClasskind> isa AAbstractClasskind */
cltype = type_nit__AAbstractClasskind.color;
idtype = type_nit__AAbstractClasskind.id;
if(cltype >= var35->type->table_size) {
var36 = 0;
} else {
var36 = var35->type->type_table[cltype] == idtype;
}
var37 = !var36;
var31 = var37;
} else {
var31 = var_34;
}
if (var31){
if (unlikely(varonce38==NULL)) {
var39 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "\t\tif name == \"";
var43 = standard___standard__NativeString___to_s_with_length(var42, 14l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var39)->values[0]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "\" then return new ";
var47 = standard___standard__NativeString___to_s_with_length(var46, 18l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var39)->values[2]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = ".from_deserializer(self)";
var51 = standard___standard__NativeString___to_s_with_length(var50, 24l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var39)->values[4]=var49;
} else {
var39 = varonce38;
varonce38 = NULL;
}
((struct instance_standard__NativeArray*)var39)->values[1]=var_name;
((struct instance_standard__NativeArray*)var39)->values[3]=var_name;
{
var52 = ((val*(*)(val* self))(var39->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var52); /* add on <var_code:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:ArrayIterator[AStdClassdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:ArrayIterator[AStdClassdef]>*/
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "\t\treturn super";
var56 = standard___standard__NativeString___to_s_with_length(var55, 14l);
var54 = var56;
varonce53 = var54;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var54); /* add on <var_code:Array[String]>*/
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "\tend";
var60 = standard___standard__NativeString___to_s_with_length(var59, 4l);
var58 = var60;
varonce57 = var58;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var58); /* add on <var_code:Array[String]>*/
}
if (var_deserializer_nclassdef == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
var62 = ((short int(*)(val* self, val* p0))(var_deserializer_nclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_deserializer_nclassdef, ((val*)NULL)); /* == on <var_deserializer_nclassdef:nullable AStdClassdef>*/
var61 = var62;
}
if (var61){
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "end";
var66 = standard___standard__NativeString___to_s_with_length(var65, 3l);
var64 = var66;
varonce63 = var64;
}
{
((void(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_code, var64); /* add on <var_code:Array[String]>*/
}
{
var67 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
{
var68 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SerializationPhasePreModel>*/
}
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "\n";
var72 = standard___standard__NativeString___to_s_with_length(var71, 1l);
var70 = var72;
varonce69 = var70;
}
{
var73 = ((val*(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__string__Collection__join]))(var_code, var70); /* join on <var_code:Array[String]>*/
}
{
var74 = ((val*(*)(val* self, val* p0))(var68->class->vft[COLOR_nit__parser_util__ToolContext__parse_classdef]))(var68, var73); /* parse_classdef on <var68:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var67, var74); /* add on <var67:ANodes[AClassdef]>*/
}
} else {
{
var75 = ((val*(*)(val* self))(var_deserializer_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_deserializer_nclassdef); /* n_propdefs on <var_deserializer_nclassdef:nullable AStdClassdef(AStdClassdef)>*/
}
{
var76 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SerializationPhasePreModel>*/
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "\n";
var80 = standard___standard__NativeString___to_s_with_length(var79, 1l);
var78 = var80;
varonce77 = var78;
}
{
var81 = ((val*(*)(val* self, val* p0))(var_code->class->vft[COLOR_standard__string__Collection__join]))(var_code, var78); /* join on <var_code:Array[String]>*/
}
{
var82 = ((val*(*)(val* self, val* p0))(var76->class->vft[COLOR_nit__parser_util__ToolContext__parse_propdef]))(var76, var81); /* parse_propdef on <var76:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var75->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var75, var82); /* add on <var75:ANodes[APropdef]>*/
}
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePostModel#process_nmodule for (self: SerializationPhasePostModel, AModule) */
void nit__serialization_phase___nit__serialization_phase__SerializationPhasePostModel___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : Array[AMethPropdef] */;
val* var_ /* var : Array[AMethPropdef] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : ArrayIterator[AMethPropdef] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var5 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : PreciseTypeVisitor */;
val* var9 /* : MClassDef */;
val* var10 /* : ToolContext */;
val* var_v /* var v: PreciseTypeVisitor */;
var_nmodule = p0;
{
var = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__serialization_phase__AModule__inits_to_retype]))(var_nmodule); /* inits_to_retype on <var_nmodule:AModule>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[AMethPropdef]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:ArrayIterator[AMethPropdef]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:ArrayIterator[AMethPropdef]>*/
}
var_npropdef = var4;
{
var5 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(var_npropdef); /* mpropdef on <var_npropdef:AMethPropdef>*/
}
var_mpropdef = var5;
if (var_mpropdef == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MMethodDef>*/
var6 = var7;
}
if (var6){
goto BREAK_label;
} else {
}
var8 = NEW_nit__serialization_phase__PreciseTypeVisitor(&type_nit__serialization_phase__PreciseTypeVisitor);
{
var9 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:SerializationPhasePostModel>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__serialization_phase__PreciseTypeVisitor__npropdef_61d]))(var8, var_npropdef); /* npropdef= on <var8:PreciseTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__serialization_phase__PreciseTypeVisitor__mclassdef_61d]))(var8, var9); /* mclassdef= on <var8:PreciseTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__serialization_phase__PreciseTypeVisitor__toolcontext_61d]))(var8, var10); /* toolcontext= on <var8:PreciseTypeVisitor>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:PreciseTypeVisitor>*/
}
var_v = var8;
{
((void(*)(val* self, val* p0))(var_npropdef->class->vft[COLOR_nit__serialization_phase__ANode__accept_precise_type_visitor]))(var_npropdef, var_v); /* accept_precise_type_visitor on <var_npropdef:AMethPropdef>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:ArrayIterator[AMethPropdef]>*/
}
} else {
goto BREAK_label11;
}
}
BREAK_label11: (void)0;
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:ArrayIterator[AMethPropdef]>*/
}
RET_LABEL:;
}
/* method serialization_phase#PreciseTypeVisitor#npropdef for (self: PreciseTypeVisitor): AMethPropdef */
val* nit__serialization_phase___nit__serialization_phase__PreciseTypeVisitor___npropdef(val* self) {
val* var /* : AMethPropdef */;
val* var1 /* : AMethPropdef */;
var1 = self->attrs[COLOR_nit__serialization_phase__PreciseTypeVisitor___npropdef].val; /* _npropdef on <self:PreciseTypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 199);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#PreciseTypeVisitor#npropdef= for (self: PreciseTypeVisitor, AMethPropdef) */
void nit__serialization_phase___nit__serialization_phase__PreciseTypeVisitor___npropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__serialization_phase__PreciseTypeVisitor___npropdef].val = p0; /* _npropdef on <self:PreciseTypeVisitor> */
RET_LABEL:;
}
/* method serialization_phase#PreciseTypeVisitor#mclassdef for (self: PreciseTypeVisitor): MClassDef */
val* nit__serialization_phase___nit__serialization_phase__PreciseTypeVisitor___mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__serialization_phase__PreciseTypeVisitor___mclassdef].val; /* _mclassdef on <self:PreciseTypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 200);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#PreciseTypeVisitor#mclassdef= for (self: PreciseTypeVisitor, MClassDef) */
void nit__serialization_phase___nit__serialization_phase__PreciseTypeVisitor___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__serialization_phase__PreciseTypeVisitor___mclassdef].val = p0; /* _mclassdef on <self:PreciseTypeVisitor> */
RET_LABEL:;
}
/* method serialization_phase#PreciseTypeVisitor#toolcontext for (self: PreciseTypeVisitor): ToolContext */
val* nit__serialization_phase___nit__serialization_phase__PreciseTypeVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__serialization_phase__PreciseTypeVisitor___toolcontext].val; /* _toolcontext on <self:PreciseTypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 201);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#PreciseTypeVisitor#toolcontext= for (self: PreciseTypeVisitor, ToolContext) */
void nit__serialization_phase___nit__serialization_phase__PreciseTypeVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__serialization_phase__PreciseTypeVisitor___toolcontext].val = p0; /* _toolcontext on <self:PreciseTypeVisitor> */
RET_LABEL:;
}
/* method serialization_phase#PreciseTypeVisitor#visit for (self: PreciseTypeVisitor, ANode) */
void nit__serialization_phase___nit__serialization_phase__PreciseTypeVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__serialization_phase__ANode__accept_precise_type_visitor]))(var_n, self); /* accept_precise_type_visitor on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method serialization_phase#PreciseTypeVisitor#init for (self: PreciseTypeVisitor) */
void nit__serialization_phase___nit__serialization_phase__PreciseTypeVisitor___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__serialization_phase___nit__serialization_phase__PreciseTypeVisitor___standard__kernel__Object__init]))(self); /* init on <self:PreciseTypeVisitor>*/
}
RET_LABEL:;
}
/* method serialization_phase#ANode#accept_precise_type_visitor for (self: ANode, PreciseTypeVisitor) */
void nit__serialization_phase___ANode___accept_precise_type_visitor(val* self, val* p0) {
val* var_v /* var v: PreciseTypeVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
RET_LABEL:;
}
/* method serialization_phase#AIsaExpr#accept_precise_type_visitor for (self: AIsaExpr, PreciseTypeVisitor) */
void nit__serialization_phase___AIsaExpr___ANode__accept_precise_type_visitor(val* self, val* p0) {
val* var_v /* var v: PreciseTypeVisitor */;
val* var /* : AType */;
val* var1 /* : String */;
val* var2 /* : ToolContext */;
val* var3 /* : String */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : AExpr */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_attr_name /* var attr_name: String */;
val* var11 /* : MClassDef */;
val* var12 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[MPropDef] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_mattrdef /* var mattrdef: MPropDef */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
short int var_19 /* var : Bool */;
val* var20 /* : String */;
short int var21 /* : Bool */;
val* var22 /* : ToolContext */;
val* var23 /* : nullable MType */;
val* var24 /* : String */;
val* var25 /* : ANode */;
val* var_new_ntype /* var new_ntype: ANode */;
val* var26 /* : AType */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_type]))(self); /* n_type on <self:AIsaExpr>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__parser_work__Prod__collect_text]))(var); /* collect_text on <var:AType>*/
}
{
var2 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__serialization_phase__PreciseTypeVisitor__toolcontext]))(var_v); /* toolcontext on <var_v:PreciseTypeVisitor>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__serialization_phase__ToolContext__place_holder_type_name]))(var2); /* place_holder_type_name on <var2:ToolContext>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, var3); /* != on <var1:String>*/
}
if (var4){
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "_";
var7 = standard___standard__NativeString___to_s_with_length(var6, 1l);
var5 = var7;
varonce = var5;
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_expr]))(self); /* n_expr on <self:AIsaExpr>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__parser_work__Prod__collect_text]))(var8); /* collect_text on <var8:AExpr>*/
}
{
var10 = ((val*(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__string__String___43d]))(var5, var9); /* + on <var5:String>*/
}
var_attr_name = var10;
{
var11 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__serialization_phase__PreciseTypeVisitor__mclassdef]))(var_v); /* mclassdef on <var_v:PreciseTypeVisitor>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var11); /* mpropdefs on <var11:MClassDef>*/
}
var_ = var12;
{
var13 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MPropDef]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:ArrayIterator[MPropDef]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:ArrayIterator[MPropDef]>*/
}
var_mattrdef = var16;
/* <var_mattrdef:MPropDef> isa MAttributeDef */
cltype = type_nit__MAttributeDef.color;
idtype = type_nit__MAttributeDef.id;
if(cltype >= var_mattrdef->type->table_size) {
var18 = 0;
} else {
var18 = var_mattrdef->type->type_table[cltype] == idtype;
}
var_19 = var18;
if (var18){
{
var20 = ((val*(*)(val* self))(var_mattrdef->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mattrdef); /* name on <var_mattrdef:MPropDef(MAttributeDef)>*/
}
{
var21 = ((short int(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var_attr_name); /* == on <var20:String>*/
}
var17 = var21;
} else {
var17 = var_19;
}
if (var17){
{
var22 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__serialization_phase__PreciseTypeVisitor__toolcontext]))(var_v); /* toolcontext on <var_v:PreciseTypeVisitor>*/
}
{
var23 = ((val*(*)(val* self))(var_mattrdef->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var_mattrdef); /* static_mtype on <var_mattrdef:MPropDef(MAttributeDef)>*/
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 218);
fatal_exit(1);
} else {
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__Object__to_s]))(var23); /* to_s on <var23:nullable MType>*/
}
{
var25 = ((val*(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__parser_util__ToolContext__parse_something]))(var22, var24); /* parse_something on <var22:ToolContext>*/
}
var_new_ntype = var25;
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_type]))(self); /* n_type on <self:AIsaExpr>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nit__parser_nodes__ANode__replace_with]))(var26, var_new_ntype); /* replace_with on <var26:AType>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:ArrayIterator[MPropDef]>*/
}
RET_LABEL:;
}
/* method serialization_phase#AAttrPropdef#name for (self: AAttrPropdef): String */
val* nit__serialization_phase___AAttrPropdef___name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_id2]))(self); /* n_id2 on <self:AAttrPropdef>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__Token__text]))(var1); /* text on <var1:TId>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#AType#type_name for (self: AType): String */
val* nit__serialization_phase___AType___type_name(val* self) {
val* var /* : String */;
val* var1 /* : TClassid */;
val* var2 /* : String */;
val* var_name /* var name: String */;
val* var3 /* : nullable TKwnullable */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : String */;
val* var12 /* : ANodes[AType] */;
val* var_types /* var types: ANodes[AType] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[String] */;
val* var_params /* var params: Array[String] */;
val* var_ /* var : ANodes[AType] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[AType] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_t /* var t: AType */;
val* var20 /* : String */;
val* var22 /* : NativeArray[String] */;
static val* varonce21;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : String */;
val* var36 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AType__n_id]))(self); /* n_id on <self:AType>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__Token__text]))(var1); /* text on <var1:TClassid>*/
}
var_name = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AType__n_kwnullable]))(self); /* n_kwnullable on <self:AType>*/
}
if (var3 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var3, ((val*)NULL)); /* != on <var3:nullable TKwnullable>*/
var4 = var5;
}
if (var4){
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "nullable ";
var10 = standard___standard__NativeString___to_s_with_length(var9, 9l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var_name;
{
var11 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var_name = var11;
} else {
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AType__n_types]))(self); /* n_types on <self:AType>*/
}
var_types = var12;
{
var13 = ((short int(*)(val* self))(var_types->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_types); /* is_empty on <var_types:ANodes[AType]>*/
}
var14 = !var13;
if (var14){
var15 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var15->class->vft[COLOR_standard__kernel__Object__init]))(var15); /* init on <var15:Array[String]>*/
}
var_params = var15;
var_ = var_types;
{
var16 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AType]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[AType]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[AType]>*/
}
var_t = var19;
{
var20 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__serialization_phase__AType__type_name]))(var_t); /* type_name on <var_t:AType>*/
}
{
((void(*)(val* self, val* p0))(var_params->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_params, var20); /* add on <var_params:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[AType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[AType]>*/
}
if (unlikely(varonce21==NULL)) {
var22 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "[";
var26 = standard___standard__NativeString___to_s_with_length(var25, 1l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var22)->values[1]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "]";
var30 = standard___standard__NativeString___to_s_with_length(var29, 1l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var22)->values[3]=var28;
} else {
var22 = varonce21;
varonce21 = NULL;
}
((struct instance_standard__NativeArray*)var22)->values[0]=var_name;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = ", ";
var34 = standard___standard__NativeString___to_s_with_length(var33, 2l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((val*(*)(val* self, val* p0))(var_params->class->vft[COLOR_standard__string__Collection__join]))(var_params, var32); /* join on <var_params:Array[String]>*/
}
((struct instance_standard__NativeArray*)var22)->values[2]=var35;
{
var36 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
var = var36;
goto RET_LABEL;
} else {
var = var_name;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method serialization_phase#AModule#deserializer_nclassdef for (self: AModule): nullable AStdClassdef */
val* nit__serialization_phase___AModule___deserializer_nclassdef(val* self) {
val* var /* : nullable AStdClassdef */;
val* var1 /* : ANodes[AClassdef] */;
val* var_ /* var : ANodes[AClassdef] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[AClassdef] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
short int var_8 /* var : Bool */;
val* var9 /* : nullable TClassid */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
short int var14 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(self); /* n_classdefs on <self:AModule>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AClassdef]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[AClassdef]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[AClassdef]>*/
}
var_nclassdef = var5;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var7 = 0;
} else {
var7 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_8 = var7;
if (var7){
{
var9 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_id]))(var_nclassdef); /* n_id on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 253);
fatal_exit(1);
} else {
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__parser_nodes__Token__text]))(var9); /* text on <var9:nullable TClassid>*/
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Deserialization";
var13 = standard___standard__NativeString___to_s_with_length(var12, 15l);
var11 = var13;
varonce = var11;
}
{
var14 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var11); /* == on <var10:String>*/
}
var6 = var14;
} else {
var6 = var_8;
}
if (var6){
var = var_nclassdef;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[AClassdef]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#AModule#inits_to_retype for (self: AModule): Array[AMethPropdef] */
val* nit__serialization_phase___AModule___inits_to_retype(val* self) {
val* var /* : Array[AMethPropdef] */;
val* var1 /* : Array[AMethPropdef] */;
var1 = self->attrs[COLOR_nit__serialization_phase__AModule___inits_to_retype].val; /* _inits_to_retype on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _inits_to_retype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__serialization_phase, 261);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#AModule#inits_to_retype= for (self: AModule, Array[AMethPropdef]) */
void nit__serialization_phase___AModule___inits_to_retype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__serialization_phase__AModule___inits_to_retype].val = p0; /* _inits_to_retype on <self:AModule> */
RET_LABEL:;
}
/* method serialization_phase#AStdClassdef#deserializer_npropdef for (self: AStdClassdef): nullable AMethPropdef */
val* nit__serialization_phase___AStdClassdef___deserializer_npropdef(val* self) {
val* var /* : nullable AMethPropdef */;
val* var1 /* : ANodes[APropdef] */;
val* var_ /* var : ANodes[APropdef] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[APropdef] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : nullable AMethid */;
val* var_id /* var id: nullable AMethid */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var_12 /* var : Bool */;
val* var13 /* : TId */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:AStdClassdef>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[APropdef]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[APropdef]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[APropdef]>*/
}
var_npropdef = var5;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var6 = 0;
} else {
var6 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var6){
{
var7 = ((val*(*)(val* self))(var_npropdef->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(var_npropdef); /* n_methid on <var_npropdef:APropdef(AMethPropdef)>*/
}
var_id = var7;
/* <var_id:nullable AMethid> isa AIdMethid */
cltype10 = type_nit__AIdMethid.color;
idtype11 = type_nit__AIdMethid.id;
if(var_id == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_id->type->table_size) {
var9 = 0;
} else {
var9 = var_id->type->type_table[cltype10] == idtype11;
}
}
var_12 = var9;
if (var9){
{
var13 = ((val*(*)(val* self))(var_id->class->vft[COLOR_nit__parser_nodes__AIdMethid__n_id]))(var_id); /* n_id on <var_id:nullable AMethid(AIdMethid)>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__parser_nodes__Token__text]))(var13); /* text on <var13:TId>*/
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "deserialize_class";
var17 = standard___standard__NativeString___to_s_with_length(var16, 17l);
var15 = var17;
varonce = var15;
}
{
var18 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var14, var15); /* == on <var14:String>*/
}
var8 = var18;
} else {
var8 = var_12;
}
if (var8){
var = var_npropdef;
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[APropdef]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
