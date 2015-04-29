#include "nituml.sep.0.h"
/* method nituml#ToolContext#umlphase for (self: ToolContext): Phase */
val* nituml___nit__ToolContext___umlphase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nituml__ToolContext___umlphase].val; /* _umlphase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _umlphase");
PRINT_ERROR(" (%s:%d)\n", FILE_nituml, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nituml#ToolContext#umlphase= for (self: ToolContext, Phase) */
void nituml___nit__ToolContext___umlphase_61d(val* self, val* p0) {
self->attrs[COLOR_nituml__ToolContext___umlphase].val = p0; /* _umlphase on <self:ToolContext> */
RET_LABEL:;
}
/* method nituml#ToolContext#opt_gen for (self: ToolContext): OptionEnum */
val* nituml___nit__ToolContext___opt_gen(val* self) {
val* var /* : OptionEnum */;
val* var1 /* : OptionEnum */;
var1 = self->attrs[COLOR_nituml__ToolContext___opt_gen].val; /* _opt_gen on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_gen");
PRINT_ERROR(" (%s:%d)\n", FILE_nituml, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nituml#ToolContext#opt_gen= for (self: ToolContext, OptionEnum) */
void nituml___nit__ToolContext___opt_gen_61d(val* self, val* p0) {
self->attrs[COLOR_nituml__ToolContext___opt_gen].val = p0; /* _opt_gen on <self:ToolContext> */
RET_LABEL:;
}
/* method nituml#ToolContext#init for (self: ToolContext) */
void nituml___nit__ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionEnum */;
val* var2 /* : Array[Option] */;
val* var3 /* : NativeArray[Option] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nituml__ToolContext__opt_gen]))(self); /* opt_gen on <self:ToolContext>*/
}
var2 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var2 = array_instance Array[Option] */
var3 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var3)->values[0] = (val*) var1;
{
((void(*)(val* self, val* p0, long p1))(var2->class->vft[COLOR_standard__array__Array__with_native]))(var2, var3, 1l); /* with_native on <var2:Array[Option]>*/
}
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var2); /* add_option on <var:OptionContext>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nituml___nit__ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method nituml#UMLPhase#process_mainmodule for (self: UMLPhase, MModule, SequenceRead[MModule]) */
void nituml___nituml__UMLPhase___nit__modelbuilder__Phase__process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_mmodules /* var mmodules: SequenceRead[MModule] */;
val* var /* : FileWriter */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var_fw /* var fw: FileWriter */;
val* var4 /* : UMLModel */;
val* var5 /* : Model */;
val* var6 /* : ToolContext */;
val* var_d /* var d: UMLModel */;
val* var7 /* : ToolContext */;
val* var8 /* : OptionEnum */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
val* var14 /* : Writable */;
val* var15 /* : String */;
val* var16 /* : Writable */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : ToolContext */;
val* var23 /* : OptionEnum */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
val* var29 /* : Writable */;
val* var30 /* : String */;
val* var31 /* : Writable */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
var_mainmodule = p0;
var_mmodules = p1;
var = NEW_standard__FileWriter(&type_standard__FileWriter);
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "result_uml.txt";
var3 = standard___standard__NativeString___to_s_with_length(var2, 14l);
var1 = var3;
varonce = var1;
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__file__FileWriter__open]))(var, var1); /* open on <var:FileWriter>*/
}
var_fw = var;
var4 = NEW_nit__UMLModel(&type_nit__UMLModel);
{
var5 = ((val*(*)(val* self))(var_mainmodule->class->vft[COLOR_nit__model_base__MEntity__model]))(var_mainmodule); /* model on <var_mainmodule:MModule>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:UMLPhase>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__uml_base__UMLModel__model_61d]))(var4, var5); /* model= on <var4:UMLModel>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__uml_base__UMLModel__mainmodule_61d]))(var4, var_mainmodule); /* mainmodule= on <var4:UMLModel>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__uml_base__UMLModel__ctx_61d]))(var4, var6); /* ctx= on <var4:UMLModel>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:UMLModel>*/
}
var_d = var4;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:UMLPhase>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nituml__ToolContext__opt_gen]))(var7); /* opt_gen on <var7:ToolContext>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_opts__Option__value]))(var8); /* value on <var8:OptionEnum>*/
}
{
{ /* Inline kernel#Int#== (var9,0l) on <var9:nullable Object(Int)> */
var13 = (long)(var9)>>2;
var12 = (var9 != NULL) && (var13 == 0l);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var14 = ((val*(*)(val* self))(var_d->class->vft[COLOR_nit__uml_class__UMLModel__generate_class_uml]))(var_d); /* generate_class_uml on <var_d:UMLModel>*/
}
{
var15 = ((val*(*)(val* self))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__stream__Writable__write_to_string]))(var14); /* write_to_string on <var14:Writable>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Object__print]))(self, var15); /* print on <self:UMLPhase>*/
}
{
var16 = ((val*(*)(val* self))(var_d->class->vft[COLOR_nit__uml_class__UMLModel__generate_class_uml]))(var_d); /* generate_class_uml on <var_d:UMLModel>*/
}
{
var17 = ((val*(*)(val* self))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_standard__stream__Writable__write_to_string]))(var16); /* write_to_string on <var16:Writable>*/
}
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var17); /* write on <var_fw:FileWriter>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "-----------";
var21 = standard___standard__NativeString___to_s_with_length(var20, 11l);
var19 = var21;
varonce18 = var19;
}
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var19); /* write on <var_fw:FileWriter>*/
}
} else {
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:UMLPhase>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nituml__ToolContext__opt_gen]))(var22); /* opt_gen on <var22:ToolContext>*/
}
{
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_opts__Option__value]))(var23); /* value on <var23:OptionEnum>*/
}
{
{ /* Inline kernel#Int#== (var24,1l) on <var24:nullable Object(Int)> */
var28 = (long)(var24)>>2;
var27 = (var24 != NULL) && (var28 == 1l);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
var29 = ((val*(*)(val* self))(var_d->class->vft[COLOR_nit__uml_module__UMLModel__generate_package_uml]))(var_d); /* generate_package_uml on <var_d:UMLModel>*/
}
{
var30 = ((val*(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_standard__stream__Writable__write_to_string]))(var29); /* write_to_string on <var29:Writable>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Object__print]))(self, var30); /* print on <self:UMLPhase>*/
}
{
var31 = ((val*(*)(val* self))(var_d->class->vft[COLOR_nit__uml_module__UMLModel__generate_package_uml]))(var_d); /* generate_package_uml on <var_d:UMLModel>*/
}
{
var32 = ((val*(*)(val* self))((((long)var31&3)?class_info[((long)var31&3)]:var31->class)->vft[COLOR_standard__stream__Writable__write_to_string]))(var31); /* write_to_string on <var31:Writable>*/
}
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var32); /* write on <var_fw:FileWriter>*/
}
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "-----------";
var36 = standard___standard__NativeString___to_s_with_length(var35, 11l);
var34 = var36;
varonce33 = var34;
}
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var34); /* write on <var_fw:FileWriter>*/
}
} else {
}
}
{
((void(*)(val* self))(var_fw->class->vft[COLOR_standard__stream__Stream__close]))(var_fw); /* close on <var_fw:FileWriter>*/
}
RET_LABEL:;
}
/* method nituml#Sys#main for (self: Sys) */
void nituml___standard__Sys___main(val* self) {
val* var /* : ToolContext */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var1 /* : Sequence[String] */;
val* var2 /* : OptionContext */;
val* var3 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
val* var4 /* : Model */;
val* var_model /* var model: Model */;
val* var5 /* : ModelBuilder */;
val* var_mbuilder /* var mbuilder: ModelBuilder */;
val* var6 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var7 /* : Bool */;
var = NEW_nit__ToolContext(&type_nit__ToolContext);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:ToolContext>*/
}
var_toolcontext = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__args]))(self); /* args on <self:Sys>*/
}
{
((void(*)(val* self, val* p0))(var_toolcontext->class->vft[COLOR_nit__toolcontext__ToolContext__process_options]))(var_toolcontext, var1); /* process_options on <var_toolcontext:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(var_toolcontext->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(var_toolcontext); /* option_context on <var_toolcontext:ToolContext>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_opts__OptionContext__rest]))(var2); /* rest on <var2:OptionContext>*/
}
var_arguments = var3;
var4 = NEW_nit__Model(&type_nit__Model);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Model>*/
}
var_model = var4;
var5 = NEW_nit__ModelBuilder(&type_nit__ModelBuilder);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model_61d]))(var5, var_model); /* model= on <var5:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext_61d]))(var5, var_toolcontext); /* toolcontext= on <var5:ModelBuilder>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:ModelBuilder>*/
}
var_mbuilder = var5;
{
var6 = ((val*(*)(val* self, val* p0))(var_mbuilder->class->vft[COLOR_nit__loader__ModelBuilder__parse_full]))(var_mbuilder, var_arguments); /* parse_full on <var_mbuilder:ModelBuilder>*/
}
var_mmodules = var6;
{
var7 = ((short int(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_mmodules); /* is_empty on <var_mmodules:Array[MModule]>*/
}
if (var7){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_mbuilder->class->vft[COLOR_nit__modelbuilder__ModelBuilder__run_phases]))(var_mbuilder); /* run_phases on <var_mbuilder:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var_toolcontext->class->vft[COLOR_nit__modelbuilder__ToolContext__run_global_phases]))(var_toolcontext, var_mmodules); /* run_global_phases on <var_toolcontext:ToolContext>*/
}
RET_LABEL:;
}
