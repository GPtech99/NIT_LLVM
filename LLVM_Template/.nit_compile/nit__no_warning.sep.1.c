#include "nit__no_warning.sep.0.h"
/* method no_warning#ToolContext#no_warning_phase for (self: ToolContext): Phase */
val* nit__no_warning___ToolContext___no_warning_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__no_warning__ToolContext___no_warning_phase].val; /* _no_warning_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _no_warning_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__no_warning, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method no_warning#ToolContext#no_warning_phase= for (self: ToolContext, Phase) */
void nit__no_warning___ToolContext___no_warning_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__no_warning__ToolContext___no_warning_phase].val = p0; /* _no_warning_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method no_warning#NoWarningPhase#process_nmodule for (self: NoWarningPhase, AModule) */
void nit__no_warning___nit__no_warning__NoWarningPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Location */;
val* var4 /* : nullable SourceFile */;
val* var_source /* var source: nullable SourceFile */;
val* var5 /* : nullable AModuledecl */;
val* var_nmoduledecl /* var nmoduledecl: nullable AModuledecl */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ToolContext */;
val* var11 /* : MultiHashMap[SourceFile, String] */;
val* var12 /* : nullable Object */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : ToolContext */;
val* var17 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : Array[AAnnotation] */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : ToolContext */;
val* var29 /* : MultiHashMap[SourceFile, String] */;
val* var30 /* : nullable Object */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var_name /* var name: String */;
val* var39 /* : Array[AAnnotation] */;
val* var_annots /* var annots: Array[AAnnotation] */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
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
val* var58 /* : String */;
val* var_59 /* var : Array[AAnnotation] */;
val* var60 /* : Iterator[nullable Object] */;
val* var_61 /* var : ArrayIterator[AAnnotation] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_annot /* var annot: AAnnotation */;
val* var64 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
short int var65 /* : Bool */;
val* var67 /* : NativeArray[String] */;
static val* varonce66;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
val* var76 /* : String */;
val* var_77 /* var : ANodes[AExpr] */;
val* var78 /* : Iterator[nullable Object] */;
val* var_79 /* var : Iterator[AExpr] */;
short int var80 /* : Bool */;
val* var81 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var82 /* : nullable String */;
val* var_tag /* var tag: nullable String */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
val* var86 /* : NativeArray[String] */;
static val* varonce85;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
val* var95 /* : String */;
val* var97 /* : ToolContext */;
val* var98 /* : MultiHashMap[SourceFile, String] */;
val* var99 /* : nullable Object */;
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
var3 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nmodule); /* location on <var_nmodule:AModule>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__location__Location__file]))(var3); /* file on <var3:Location>*/
}
var_source = var4;
{
var5 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_moduledecl]))(var_nmodule); /* n_moduledecl on <var_nmodule:AModule>*/
}
var_nmoduledecl = var5;
if (var_nmoduledecl == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_nmoduledecl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nmoduledecl, ((val*)NULL)); /* == on <var_nmoduledecl:nullable AModuledecl>*/
var6 = var7;
}
if (var6){
if (var_source == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_source, ((val*)NULL)); /* != on <var_source:nullable SourceFile>*/
var8 = var9;
}
if (var8){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:NoWarningPhase>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__toolcontext__ToolContext__warning_blacklist]))(var10); /* warning_blacklist on <var10:ToolContext>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var11, var_source); /* [] on <var11:MultiHashMap[SourceFile, String]>*/
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "missing-doc";
var15 = standard___standard__NativeString___to_s_with_length(var14, 11l);
var13 = var15;
varonce = var13;
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var12, var13); /* add on <var12:nullable Object(Array[String])>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:NoWarningPhase>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(var16); /* modelbuilder on <var16:ToolContext>*/
}
var_modelbuilder = var17;
if (var_source == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_source, ((val*)NULL)); /* != on <var_source:nullable SourceFile>*/
var19 = var20;
}
var_ = var19;
if (var19){
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "test_suite";
var24 = standard___standard__NativeString___to_s_with_length(var23, 10l);
var22 = var24;
varonce21 = var22;
}
{
var25 = ((val*(*)(val* self, val* p0))(var_nmoduledecl->class->vft[COLOR_nit__parser_nodes__Prod__get_annotations]))(var_nmoduledecl, var22); /* get_annotations on <var_nmoduledecl:nullable AModuledecl(AModuledecl)>*/
}
{
var26 = ((short int(*)(val* self))(var25->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var25); /* is_empty on <var25:Array[AAnnotation]>*/
}
var27 = !var26;
var18 = var27;
} else {
var18 = var_;
}
if (var18){
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:NoWarningPhase>*/
}
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_nit__toolcontext__ToolContext__warning_blacklist]))(var28); /* warning_blacklist on <var28:ToolContext>*/
}
{
var30 = ((val*(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var29, var_source); /* [] on <var29:MultiHashMap[SourceFile, String]>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "missing-doc";
var34 = standard___standard__NativeString___to_s_with_length(var33, 11l);
var32 = var34;
varonce31 = var32;
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var30, var32); /* add on <var30:nullable Object(Array[String])>*/
}
} else {
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "no_warning";
var38 = standard___standard__NativeString___to_s_with_length(var37, 10l);
var36 = var38;
varonce35 = var36;
}
var_name = var36;
{
var39 = ((val*(*)(val* self, val* p0))(var_nmoduledecl->class->vft[COLOR_nit__parser_nodes__Prod__get_annotations]))(var_nmoduledecl, var_name); /* get_annotations on <var_nmoduledecl:nullable AModuledecl(AModuledecl)>*/
}
var_annots = var39;
{
var40 = ((short int(*)(val* self))(var_annots->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_annots); /* is_empty on <var_annots:Array[AAnnotation]>*/
}
if (var40){
goto RET_LABEL;
} else {
}
if (var_source == NULL) {
var41 = 1; /* is null */
} else {
var41 = 0; /* arg is null but recv is not */
}
if (0) {
var42 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_source, ((val*)NULL)); /* == on <var_source:nullable SourceFile>*/
var41 = var42;
}
if (var41){
{
var43 = ((val*(*)(val* self))(var_annots->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_annots); /* first on <var_annots:Array[AAnnotation]>*/
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "file-less-module";
var47 = standard___standard__NativeString___to_s_with_length(var46, 16l);
var45 = var47;
varonce44 = var45;
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "Warning: `";
var53 = standard___standard__NativeString___to_s_with_length(var52, 10l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "` does not currently work on file-less modules.";
var57 = standard___standard__NativeString___to_s_with_length(var56, 47l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var49)->values[2]=var55;
} else {
var49 = varonce48;
varonce48 = NULL;
}
((struct instance_standard__NativeArray*)var49)->values[1]=var_name;
{
var58 = ((val*(*)(val* self))(var49->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var_modelbuilder, var43, var45, var58); /* warning on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var_59 = var_annots;
{
var60 = ((val*(*)(val* self))(var_59->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_59); /* iterator on <var_59:Array[AAnnotation]>*/
}
var_61 = var60;
for(;;) {
{
var62 = ((short int(*)(val* self))(var_61->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_61); /* is_ok on <var_61:ArrayIterator[AAnnotation]>*/
}
if (var62){
{
var63 = ((val*(*)(val* self))(var_61->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_61); /* item on <var_61:ArrayIterator[AAnnotation]>*/
}
var_annot = var63;
{
var64 = ((val*(*)(val* self))(var_annot->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(var_annot); /* n_args on <var_annot:AAnnotation>*/
}
var_args = var64;
{
var65 = ((short int(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_args); /* is_empty on <var_args:ANodes[AExpr]>*/
}
if (var65){
if (unlikely(varonce66==NULL)) {
var67 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "Syntax Error: `";
var71 = standard___standard__NativeString___to_s_with_length(var70, 15l);
var69 = var71;
varonce68 = var69;
}
((struct instance_standard__NativeArray*)var67)->values[0]=var69;
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "` expects a list of warnings. Use `\"all\"` to disable all warnings.";
var75 = standard___standard__NativeString___to_s_with_length(var74, 66l);
var73 = var75;
varonce72 = var73;
}
((struct instance_standard__NativeArray*)var67)->values[2]=var73;
} else {
var67 = varonce66;
varonce66 = NULL;
}
((struct instance_standard__NativeArray*)var67)->values[1]=var_name;
{
var76 = ((val*(*)(val* self))(var67->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var67); /* native_to_s on <var67:NativeArray[String]>*/
}
varonce66 = var67;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_annot, var76); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
var_77 = var_args;
{
var78 = ((val*(*)(val* self))(var_77->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_77); /* iterator on <var_77:ANodes[AExpr]>*/
}
var_79 = var78;
for(;;) {
{
var80 = ((short int(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_79); /* is_ok on <var_79:Iterator[AExpr]>*/
}
if (var80){
{
var81 = ((val*(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_79); /* item on <var_79:Iterator[AExpr]>*/
}
var_arg = var81;
{
var82 = ((val*(*)(val* self))(var_arg->class->vft[COLOR_nit__literal__AExpr__as_string]))(var_arg); /* as_string on <var_arg:AExpr>*/
}
var_tag = var82;
if (var_tag == NULL) {
var83 = 1; /* is null */
} else {
var83 = 0; /* arg is null but recv is not */
}
if (0) {
var84 = ((short int(*)(val* self, val* p0))(var_tag->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_tag, ((val*)NULL)); /* == on <var_tag:nullable String>*/
var83 = var84;
}
if (var83){
if (unlikely(varonce85==NULL)) {
var86 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Syntax Error: `";
var90 = standard___standard__NativeString___to_s_with_length(var89, 15l);
var88 = var90;
varonce87 = var88;
}
((struct instance_standard__NativeArray*)var86)->values[0]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "` expects String as arguments.";
var94 = standard___standard__NativeString___to_s_with_length(var93, 30l);
var92 = var94;
varonce91 = var92;
}
((struct instance_standard__NativeArray*)var86)->values[2]=var92;
} else {
var86 = varonce85;
varonce85 = NULL;
}
((struct instance_standard__NativeArray*)var86)->values[1]=var_name;
{
var95 = ((val*(*)(val* self))(var86->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_arg, var95); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label96;
} else {
}
{
var97 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:NoWarningPhase>*/
}
{
var98 = ((val*(*)(val* self))(var97->class->vft[COLOR_nit__toolcontext__ToolContext__warning_blacklist]))(var97); /* warning_blacklist on <var97:ToolContext>*/
}
{
var99 = ((val*(*)(val* self, val* p0))(var98->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var98, var_source); /* [] on <var98:MultiHashMap[SourceFile, String]>*/
}
{
((void(*)(val* self, val* p0))(var99->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var99, var_tag); /* add on <var99:nullable Object(Array[String])>*/
}
BREAK_label96: (void)0;
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_79); /* next on <var_79:Iterator[AExpr]>*/
}
} else {
goto BREAK_label100;
}
}
BREAK_label100: (void)0;
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_79); /* finish on <var_79:Iterator[AExpr]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_61->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_61); /* next on <var_61:ArrayIterator[AAnnotation]>*/
}
} else {
goto BREAK_label101;
}
}
BREAK_label101: (void)0;
{
((void(*)(val* self))(var_61->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_61); /* finish on <var_61:ArrayIterator[AAnnotation]>*/
}
RET_LABEL:;
}
