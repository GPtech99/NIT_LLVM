#include "nit__modelbuilder.sep.0.h"
/* method modelbuilder#ToolContext#opt_ignore_visibility for (self: ToolContext): OptionBool */
val* nit__modelbuilder___ToolContext___opt_ignore_visibility(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_ignore_visibility= for (self: ToolContext, OptionBool) */
void nit__modelbuilder___ToolContext___opt_ignore_visibility_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility].val = p0; /* _opt_ignore_visibility on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder#ToolContext#init for (self: ToolContext) */
void nit__modelbuilder___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionBool */;
val* var2 /* : Array[Option] */;
val* var3 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder__ToolContext__opt_ignore_visibility]))(self); /* opt_ignore_visibility on <self:ToolContext>*/
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
RET_LABEL:;
}
/* method modelbuilder#ToolContext#make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* nit__modelbuilder___ToolContext___make_main_module(val* self, val* p0) {
val* var /* : MModule */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_mainmodule /* var mainmodule: nullable Object */;
val* var8 /* : MModule */;
val* var9 /* : ModelBuilder */;
val* var10 /* : Model */;
val* var11 /* : nullable Object */;
val* var12 /* : String */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var17 /* : Location */;
val* var18 /* : nullable Object */;
val* var19 /* : Location */;
val* var20 /* : nullable SourceFile */;
var_mmodules = p0;
{
var1 = ((short int(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_mmodules); /* is_empty on <var_mmodules:Array[MModule]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 39);
fatal_exit(1);
}
{
var3 = ((long(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_mmodules); /* length on <var_mmodules:Array[MModule]>*/
}
{
{ /* Inline kernel#Int#== (var3,1l) on <var3:Int> */
var6 = var3 == 1l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var7 = ((val*(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_mmodules); /* first on <var_mmodules:Array[MModule]>*/
}
var_mainmodule = var7;
} else {
var8 = NEW_nit__MModule(&type_nit__MModule);
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(self); /* modelbuilder on <self:ToolContext>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(var9); /* model on <var9:ModelBuilder>*/
}
{
var11 = ((val*(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_mmodules); /* first on <var_mmodules:Array[MModule]>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model_base__MEntity__name]))(var11); /* name on <var11:nullable Object(MModule)>*/
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "-m";
var15 = standard___standard__NativeString___to_s_with_length(var14, 2l);
var13 = var15;
varonce = var13;
}
{
var16 = ((val*(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__string__String___43d]))(var12, var13); /* + on <var12:String>*/
}
var17 = NEW_nit__Location(&type_nit__Location);
{
var18 = ((val*(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_mmodules); /* first on <var_mmodules:Array[MModule]>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__mmodule__MModule__location]))(var18); /* location on <var18:nullable Object(MModule)>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__location__Location__file]))(var19); /* file on <var19:Location>*/
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_nit__location__Location__file_61d]))(var17, var20); /* file= on <var17:Location>*/
}
{
((void(*)(val* self, long p0))(var17->class->vft[COLOR_nit__location__Location__line_start_61d]))(var17, 0l); /* line_start= on <var17:Location>*/
}
{
((void(*)(val* self, long p0))(var17->class->vft[COLOR_nit__location__Location__line_end_61d]))(var17, 0l); /* line_end= on <var17:Location>*/
}
{
((void(*)(val* self, long p0))(var17->class->vft[COLOR_nit__location__Location__column_start_61d]))(var17, 0l); /* column_start= on <var17:Location>*/
}
{
((void(*)(val* self, long p0))(var17->class->vft[COLOR_nit__location__Location__column_end_61d]))(var17, 0l); /* column_end= on <var17:Location>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_standard__kernel__Object__init]))(var17); /* init on <var17:Location>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var8, var10); /* model= on <var8:MModule>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var8, ((val*)NULL)); /* mgroup= on <var8:MModule>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var8, var16); /* name= on <var8:MModule>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var8, var17); /* location= on <var8:MModule>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:MModule>*/
}
var_mainmodule = var8;
{
((void(*)(val* self, short int p0))(var_mainmodule->class->vft[COLOR_nit__mmodule__MModule__is_fictive_61d]))(var_mainmodule, 1); /* is_fictive= on <var_mainmodule:nullable Object(MModule)>*/
}
{
((void(*)(val* self, val* p0))(var_mainmodule->class->vft[COLOR_nit__mmodule__MModule__set_imported_mmodules]))(var_mainmodule, var_mmodules); /* set_imported_mmodules on <var_mainmodule:nullable Object(MModule)>*/
}
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#run_global_phases for (self: ToolContext, Array[MModule]) */
void nit__modelbuilder___ToolContext___run_global_phases(val* self, val* p0) {
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var3 /* : Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[Phase] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
var_mmodules = p0;
{
var = ((short int(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_mmodules); /* is_empty on <var_mmodules:Array[MModule]>*/
}
var1 = !var;
if (var1){
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelbuilder__ToolContext__make_main_module]))(self, var_mmodules); /* make_main_module on <self:ToolContext>*/
}
var_mainmodule = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases_list]))(self); /* phases_list on <self:ToolContext>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[Phase]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[Phase]>*/
}
var_phase = var7;
{
var8 = ((short int(*)(val* self))(var_phase->class->vft[COLOR_nit__phase__Phase__disabled]))(var_phase); /* disabled on <var_phase:Phase>*/
}
if (var8){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(var_phase->class->vft[COLOR_nit__modelbuilder__Phase__process_mainmodule]))(var_phase, var_mainmodule, var_mmodules); /* process_mainmodule on <var_phase:Phase>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label9;
}
}
BREAK_label9: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[Phase]>*/
}
} else {
}
{
var10 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__errors_info]))(self); /* errors_info on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#Phase#process_mainmodule for (self: Phase, MModule, SequenceRead[MModule]) */
void nit__modelbuilder___Phase___process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_given_mmodules /* var given_mmodules: SequenceRead[MModule] */;
var_mainmodule = p0;
var_given_mmodules = p1;
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#run_phases for (self: ModelBuilder) */
void nit__modelbuilder___ModelBuilder___run_phases(val* self) {
val* var /* : Model */;
val* var1 /* : Array[MModule] */;
val* var2 /* : Array[nullable Object] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var3 /* : Model */;
val* var4 /* : POSet[MModule] */;
val* var5 /* : Array[AModule] */;
val* var_nmodules /* var nmodules: Array[AModule] */;
val* var_ /* var : Array[MModule] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MModule] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mm /* var mm: MModule */;
short int var10 /* : Bool */;
val* var11 /* : nullable AModule */;
val* var13 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : OptionBool */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
val* var18 /* : ToolContext */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : Sys */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__mmodule__Model__mmodules]))(var); /* mmodules on <var:Model>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__array__Collection__to_a]))(var1); /* to_a on <var1:Array[MModule]>*/
}
var_mmodules = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__mmodule__Model__mmodule_importation_hierarchy]))(var3); /* mmodule_importation_hierarchy on <var3:Model>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__sorter__Comparator__sort]))(var4, var_mmodules); /* sort on <var4:POSet[MModule]>*/
}
var5 = NEW_standard__Array(&type_standard__Array__nit__AModule);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[AModule]>*/
}
var_nmodules = var5;
var_ = var_mmodules;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MModule]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MModule]>*/
}
var_mm = var9;
{
var10 = ((short int(*)(val* self))(var_mm->class->vft[COLOR_nit__mmodule__MModule__is_fictive]))(var_mm); /* is_fictive on <var_mm:MModule>*/
}
if (var10){
goto BREAK_label;
} else {
}
{
var11 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__mmodule2node]))(self, var_mm); /* mmodule2node on <self:ModelBuilder>*/
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 95);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_nmodules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_nmodules, var11); /* add on <var_nmodules:Array[AModule]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label12;
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MModule]>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__phase__ToolContext__run_phases]))(var13, var_nmodules); /* run_phases on <var13:ToolContext>*/
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__loader__ToolContext__opt_only_metamodel]))(var14); /* opt_only_metamodel on <var14:ToolContext>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_opts__Option__value]))(var15); /* value on <var15:OptionBool>*/
}
var17 = (short int)((long)(var16)>>2);
if (var17){
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "*** ONLY METAMODEL";
var21 = standard___standard__NativeString___to_s_with_length(var20, 18l);
var19 = var21;
varonce = var19;
}
{
((void(*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var18, var19, 1l); /* info on <var18:ToolContext>*/
}
var22 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var22,0l) on <var22:Sys> */
exit(0l);
RET_LABEL23:(void)0;
}
}
} else {
}
RET_LABEL:;
}
