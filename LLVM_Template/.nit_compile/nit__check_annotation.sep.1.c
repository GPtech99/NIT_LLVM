#include "nit__check_annotation.sep.0.h"
/* method check_annotation#ToolContext#check_annotation_phase for (self: ToolContext): Phase */
val* nit__check_annotation___ToolContext___check_annotation_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__check_annotation__ToolContext___check_annotation_phase].val; /* _check_annotation_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _check_annotation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__check_annotation, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method check_annotation#ToolContext#check_annotation_phase= for (self: ToolContext, Phase) */
void nit__check_annotation___ToolContext___check_annotation_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__check_annotation__ToolContext___check_annotation_phase].val = p0; /* _check_annotation_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method check_annotation#CheckAnnotationPhase#declared_annotations for (self: CheckAnnotationPhase): MModuleMultiData[String] */
val* nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___declared_annotations(val* self) {
val* var /* : MModuleMultiData[String] */;
short int var1 /* : Bool */;
val* var2 /* : MModuleMultiData[String] */;
val* var3 /* : MModuleMultiData[String] */;
val* var4 /* : ToolContext */;
val* var5 /* : ModelBuilder */;
val* var6 /* : Model */;
var1 = self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___declared_annotations].val != NULL; /* _declared_annotations on <self:CheckAnnotationPhase> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___declared_annotations].val; /* _declared_annotations on <self:CheckAnnotationPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _declared_annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__check_annotation, 32);
fatal_exit(1);
}
} else {
var3 = NEW_nit__MModuleMultiData(&type_nit__MModuleMultiData__standard__String);
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:CheckAnnotationPhase>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(var4); /* modelbuilder on <var4:ToolContext>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(var5); /* model on <var5:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__mmodule_data__MModuleData__model_61d]))(var3, var6); /* model= on <var3:MModuleMultiData[String]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:MModuleMultiData[String]>*/
}
self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___declared_annotations].val = var3; /* _declared_annotations on <self:CheckAnnotationPhase> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#declared_annotations= for (self: CheckAnnotationPhase, MModuleMultiData[String]) */
void nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___declared_annotations_61d(val* self, val* p0) {
self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___declared_annotations].val = p0; /* _declared_annotations on <self:CheckAnnotationPhase> */
RET_LABEL:;
}
/* method check_annotation#CheckAnnotationPhase#mmodule for (self: CheckAnnotationPhase): nullable MModule */
val* nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___mmodule].val; /* _mmodule on <self:CheckAnnotationPhase> */
var = var1;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#mmodule= for (self: CheckAnnotationPhase, nullable MModule) */
void nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___mmodule].val = p0; /* _mmodule on <self:CheckAnnotationPhase> */
RET_LABEL:;
}
/* method check_annotation#CheckAnnotationPhase#process_nmodule for (self: CheckAnnotationPhase, AModule) */
void nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable AModuledecl */;
val* var_nmoduledecl /* var nmoduledecl: nullable AModuledecl */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : ToolContext */;
val* var7 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : Array[AAnnotation] */;
val* var_annots /* var annots: Array[AAnnotation] */;
val* var12 /* : MModuleMultiData[String] */;
val* var13 /* : Sys */;
val* var14 /* : MVisibility */;
val* var15 /* : Sequence[MModule] */;
val* var_super_mmodules /* var super_mmodules: Sequence[MModule] */;
val* var_ /* var : Array[AAnnotation] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : ArrayIterator[AAnnotation] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_annot /* var annot: AAnnotation */;
val* var20 /* : nullable String */;
val* var_name /* var name: nullable String */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_23 /* var : Sequence[MModule] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : IndexedIterator[MModule] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var28 /* : MModuleMultiData[String] */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var52 /* : MModuleMultiData[String] */;
val* var53 /* : nullable Object */;
var_nmodule = p0;
{
var = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:AModule>*/
}
var_mmodule = var;
if (var_mmodule == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__check_annotation__CheckAnnotationPhase__mmodule_61d]))(self, var_mmodule); /* mmodule= on <self:CheckAnnotationPhase>*/
}
{
var3 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_moduledecl]))(var_nmodule); /* n_moduledecl on <var_nmodule:AModule>*/
}
var_nmoduledecl = var3;
if (var_nmoduledecl == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_nmoduledecl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nmoduledecl, ((val*)NULL)); /* == on <var_nmoduledecl:nullable AModuledecl>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:CheckAnnotationPhase>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(var6); /* modelbuilder on <var6:ToolContext>*/
}
var_modelbuilder = var7;
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "new_annotation";
var10 = standard___standard__NativeString___to_s_with_length(var9, 14l);
var8 = var10;
varonce = var8;
}
{
var11 = ((val*(*)(val* self, val* p0))(var_nmoduledecl->class->vft[COLOR_nit__parser_nodes__Prod__get_annotations]))(var_nmoduledecl, var8); /* get_annotations on <var_nmoduledecl:nullable AModuledecl(AModuledecl)>*/
}
var_annots = var11;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__check_annotation__CheckAnnotationPhase__declared_annotations]))(self); /* declared_annotations on <self:CheckAnnotationPhase>*/
}
var13 = glob_sys;
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var13); /* private_visibility on <var13:Sys>*/
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var12->class->vft[COLOR_nit__mmodule_data__MModuleData__lookup_all_modules]))(var12, var_mmodule, var14); /* lookup_all_modules on <var12:MModuleMultiData[String]>*/
}
var_super_mmodules = var15;
var_ = var_annots;
{
var16 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[AAnnotation]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:ArrayIterator[AAnnotation]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:ArrayIterator[AAnnotation]>*/
}
var_annot = var19;
{
var20 = ((val*(*)(val* self, val* p0))(var_annot->class->vft[COLOR_nit__annotation__AAnnotation__arg_as_id]))(var_annot, var_modelbuilder); /* arg_as_id on <var_annot:AAnnotation>*/
}
var_name = var20;
if (var_name == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, ((val*)NULL)); /* == on <var_name:nullable String>*/
var21 = var22;
}
if (var21){
goto BREAK_;
} else {
}
var_23 = var_super_mmodules;
{
var24 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_23); /* iterator on <var_23:Sequence[MModule]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:IndexedIterator[MModule]>*/
}
if (var26){
{
var27 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:IndexedIterator[MModule]>*/
}
var_m = var27;
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__check_annotation__CheckAnnotationPhase__declared_annotations]))(self); /* declared_annotations on <self:CheckAnnotationPhase>*/
}
{
var29 = ((val*(*)(val* self, val* p0))(var28->class->vft[COLOR_nit__mmodule_data__MModuleData___91d_93d]))(var28, var_m); /* [] on <var28:MModuleMultiData[String]>*/
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__check_annotation, 63);
fatal_exit(1);
} else {
var30 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var29, var_name); /* has on <var29:nullable Object(nullable Array[String])>*/
}
if (var30){
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "multiple-annotation-declarations";
var34 = standard___standard__NativeString___to_s_with_length(var33, 32l);
var32 = var34;
varonce31 = var32;
}
if (unlikely(varonce35==NULL)) {
var36 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "Warning: an annotation `";
var40 = standard___standard__NativeString___to_s_with_length(var39, 24l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "` is already declared in module `";
var44 = standard___standard__NativeString___to_s_with_length(var43, 33l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var36)->values[2]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "`.";
var48 = standard___standard__NativeString___to_s_with_length(var47, 2l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var36)->values[4]=var46;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_standard__NativeArray*)var36)->values[1]=var_name;
{
var49 = ((val*(*)(val* self))(var_m->class->vft[COLOR_standard__string__Object__to_s]))(var_m); /* to_s on <var_m:MModule>*/
}
((struct instance_standard__NativeArray*)var36)->values[3]=var49;
{
var50 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var_modelbuilder, var_annot, var32, var50); /* warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_51;
} else {
}
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:IndexedIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:IndexedIterator[MModule]>*/
}
{
var52 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__check_annotation__CheckAnnotationPhase__declared_annotations]))(self); /* declared_annotations on <self:CheckAnnotationPhase>*/
}
{
var53 = ((val*(*)(val* self, val* p0))(var52->class->vft[COLOR_nit__mmodule_data__MModuleData___91d_93d]))(var52, var_mmodule); /* [] on <var52:MModuleMultiData[String]>*/
}
if (var53 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__check_annotation, 69);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var53->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var53, var_name); /* add on <var53:nullable Object(nullable Array[String])>*/
}
BREAK_: (void)0;
{
((void(*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:ArrayIterator[AAnnotation]>*/
}
} else {
goto BREAK_51;
}
}
BREAK_51: (void)0;
{
((void(*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:ArrayIterator[AAnnotation]>*/
}
RET_LABEL:;
}
/* method check_annotation#CheckAnnotationPhase#primtives_annotations_list for (self: CheckAnnotationPhase): String */
val* nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___primtives_annotations_list(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___primtives_annotations_list].val; /* _primtives_annotations_list on <self:CheckAnnotationPhase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _primtives_annotations_list");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__check_annotation, 74);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#primtives_annotations_list= for (self: CheckAnnotationPhase, String) */
void nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___primtives_annotations_list_61d(val* self, val* p0) {
self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___primtives_annotations_list].val = p0; /* _primtives_annotations_list on <self:CheckAnnotationPhase> */
RET_LABEL:;
}
/* method check_annotation#CheckAnnotationPhase#primtives_annotations for (self: CheckAnnotationPhase): HashSet[String] */
val* nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___primtives_annotations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___primtives_annotations].val; /* _primtives_annotations on <self:CheckAnnotationPhase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _primtives_annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__check_annotation, 103);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#primtives_annotations= for (self: CheckAnnotationPhase, HashSet[String]) */
void nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___primtives_annotations_61d(val* self, val* p0) {
self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___primtives_annotations].val = p0; /* _primtives_annotations on <self:CheckAnnotationPhase> */
RET_LABEL:;
}
/* method check_annotation#CheckAnnotationPhase#user_annotations for (self: CheckAnnotationPhase): HashMap[MModule, HashSet[String]] */
val* nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___user_annotations(val* self) {
val* var /* : HashMap[MModule, HashSet[String]] */;
val* var1 /* : HashMap[MModule, HashSet[String]] */;
var1 = self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___user_annotations].val; /* _user_annotations on <self:CheckAnnotationPhase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _user_annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__check_annotation, 106);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#user_annotations= for (self: CheckAnnotationPhase, HashMap[MModule, HashSet[String]]) */
void nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___user_annotations_61d(val* self, val* p0) {
self->attrs[COLOR_nit__check_annotation__CheckAnnotationPhase___user_annotations].val = p0; /* _user_annotations on <self:CheckAnnotationPhase> */
RET_LABEL:;
}
/* method check_annotation#CheckAnnotationPhase#process_annotated_node for (self: CheckAnnotationPhase, ANode, AAnnotation) */
void nit__check_annotation___nit__check_annotation__CheckAnnotationPhase___nit__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : String */;
val* var_name /* var name: String */;
val* var1 /* : HashSet[String] */;
short int var2 /* : Bool */;
val* var3 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[MModule, HashSet[String]] */;
val* var7 /* : nullable Object */;
val* var_annots /* var annots: nullable HashSet[String] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : HashSet[String] */;
val* var11 /* : MModuleMultiData[String] */;
val* var12 /* : Sys */;
val* var13 /* : MVisibility */;
val* var14 /* : Sequence[nullable Object] */;
val* var15 /* : HashMap[MModule, HashSet[String]] */;
short int var16 /* : Bool */;
val* var17 /* : ToolContext */;
val* var18 /* : ModelBuilder */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
var_node = p0;
var_nat = p1;
{
var = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(var_nat); /* name on <var_nat:AAnnotation>*/
}
var_name = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__check_annotation__CheckAnnotationPhase__primtives_annotations]))(self); /* primtives_annotations on <self:CheckAnnotationPhase>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var1, var_name); /* has on <var1:HashSet[String]>*/
}
if (var2){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__check_annotation__CheckAnnotationPhase__mmodule]))(self); /* mmodule on <self:CheckAnnotationPhase>*/
}
var_mmodule = var3;
if (var_mmodule == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__check_annotation__CheckAnnotationPhase__user_annotations]))(self); /* user_annotations on <self:CheckAnnotationPhase>*/
}
{
var7 = ((val*(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var6, var_mmodule); /* get_or_null on <var6:HashMap[MModule, HashSet[String]]>*/
}
var_annots = var7;
if (var_annots == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_annots->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_annots, ((val*)NULL)); /* == on <var_annots:nullable HashSet[String]>*/
var8 = var9;
}
if (var8){
var10 = NEW_standard__HashSet(&type_standard__HashSet__standard__String);
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:HashSet[String]>*/
}
var_annots = var10;
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__check_annotation__CheckAnnotationPhase__declared_annotations]))(self); /* declared_annotations on <self:CheckAnnotationPhase>*/
}
var12 = glob_sys;
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var12); /* private_visibility on <var12:Sys>*/
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(var11->class->vft[COLOR_nit__mmodule_data__MModuleMultiData__lookup_joined_values]))(var11, var_mmodule, var13); /* lookup_joined_values on <var11:MModuleMultiData[String]>*/
}
{
((void(*)(val* self, val* p0))(var_annots->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_annots, var14); /* add_all on <var_annots:nullable HashSet[String](HashSet[String])>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__check_annotation__CheckAnnotationPhase__user_annotations]))(self); /* user_annotations on <self:CheckAnnotationPhase>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var15->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var15, var_mmodule, var_annots); /* []= on <var15:HashMap[MModule, HashSet[String]]>*/
}
} else {
}
{
var16 = ((short int(*)(val* self, val* p0))(var_annots->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_annots, var_name); /* has on <var_annots:nullable HashSet[String](HashSet[String])>*/
}
if (var16){
goto RET_LABEL;
} else {
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:CheckAnnotationPhase>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(var17); /* modelbuilder on <var17:ToolContext>*/
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "unknown-annotation";
var21 = standard___standard__NativeString___to_s_with_length(var20, 18l);
var19 = var21;
varonce = var19;
}
if (unlikely(varonce22==NULL)) {
var23 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Warning: unknown annotation `";
var27 = standard___standard__NativeString___to_s_with_length(var26, 29l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "`.";
var31 = standard___standard__NativeString___to_s_with_length(var30, 2l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce22;
varonce22 = NULL;
}
((struct instance_standard__NativeArray*)var23)->values[1]=var_name;
{
var32 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var18->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var18, var_nat, var19, var32); /* warning on <var18:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var_annots->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_annots, var_name); /* add on <var_annots:nullable HashSet[String](HashSet[String])>*/
}
RET_LABEL:;
}
