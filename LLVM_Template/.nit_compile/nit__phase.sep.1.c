#include "nit__phase.sep.0.h"
/* method phase#ToolContext#phases for (self: ToolContext): POSet[Phase] */
val* nit__phase___ToolContext___phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#phases= for (self: ToolContext, POSet[Phase]) */
void nit__phase___ToolContext___phases_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__ToolContext___phases].val = p0; /* _phases on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#opt_disable_phase for (self: ToolContext): OptionArray */
val* nit__phase___ToolContext___opt_disable_phase(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_disable_phase= for (self: ToolContext, OptionArray) */
void nit__phase___ToolContext___opt_disable_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__ToolContext___opt_disable_phase].val = p0; /* _opt_disable_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#opt_sloppy for (self: ToolContext): OptionBool */
val* nit__phase___ToolContext___opt_sloppy(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 33);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_sloppy= for (self: ToolContext, OptionBool) */
void nit__phase___ToolContext___opt_sloppy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__ToolContext___opt_sloppy].val = p0; /* _opt_sloppy on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#init for (self: ToolContext) */
void nit__phase___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionArray */;
val* var2 /* : OptionBool */;
val* var3 /* : Array[Option] */;
val* var4 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__phase___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__opt_disable_phase]))(self); /* opt_disable_phase on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__opt_sloppy]))(self); /* opt_sloppy on <self:ToolContext>*/
}
var3 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var3 = array_instance Array[Option] */
var4 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var4)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var4)->values[1] = (val*) var2;
{
((void(*)(val* self, val* p0, long p1))(var3->class->vft[COLOR_standard__array__Array__with_native]))(var3, var4, 2l); /* with_native on <var3:Array[Option]>*/
}
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var3); /* add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nit__phase___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionArray */;
val* var1 /* : nullable Object */;
val* var_ /* var : Array[String] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ArrayIterator[String] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_v /* var v: String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
val* var10 /* : Sequence[Phase] */;
val* var_11 /* var : Sequence[Phase] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[Phase] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_p /* var p: Phase */;
val* var16 /* : POSetElement[Phase] */;
val* var17 /* : Collection[nullable Object] */;
val* var_deps /* var deps: Collection[Phase] */;
short int var18 /* : Bool */;
val* var19 /* : Sys */;
val* var20 /* : Sys */;
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
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : Sys */;
short int var_found /* var found: Bool */;
val* var40 /* : POSet[Phase] */;
val* var_41 /* var : POSet[Phase] */;
val* var42 /* : Iterator[nullable Object] */;
val* var_43 /* var : Iterator[Phase] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_p46 /* var p: Phase */;
val* var47 /* : String */;
short int var48 /* : Bool */;
short int var51 /* : Bool */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
val* var64 /* : OptionBool */;
val* var65 /* : nullable Object */;
short int var66 /* : Bool */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__phase___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__opt_disable_phase]))(self); /* opt_disable_phase on <self:ToolContext>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_opts__Option__value]))(var); /* value on <var:OptionArray>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ArrayIterator[String]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ArrayIterator[String]>*/
}
var_v = var5;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "list";
var8 = standard___standard__NativeString___to_s_with_length(var7, 4l);
var6 = var8;
varonce = var6;
}
{
var9 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var6); /* == on <var_v:String>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases_list]))(self); /* phases_list on <self:ToolContext>*/
}
var_11 = var10;
{
var12 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_11); /* iterator on <var_11:Sequence[Phase]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[Phase]>*/
}
if (var14){
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[Phase]>*/
}
var_p = var15;
{
var16 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__phase__Phase__in_hierarchy]))(var_p); /* in_hierarchy on <var_p:Phase>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var16); /* direct_greaters on <var16:POSetElement[Phase]>*/
}
var_deps = var17;
{
var18 = ((short int(*)(val* self))((((long)var_deps&3)?class_info[((long)var_deps&3)]:var_deps->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_deps); /* is_empty on <var_deps:Collection[Phase]>*/
}
if (var18){
var19 = glob_sys;
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_standard__file__Sys__print]))(var19, var_p); /* print on <var19:Sys>*/
}
} else {
var20 = glob_sys;
if (unlikely(varonce21==NULL)) {
var22 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " (dep: ";
var26 = standard___standard__NativeString___to_s_with_length(var25, 7l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var22)->values[1]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = ")";
var30 = standard___standard__NativeString___to_s_with_length(var29, 1l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var22)->values[3]=var28;
} else {
var22 = varonce21;
varonce21 = NULL;
}
{
var31 = ((val*(*)(val* self))(var_p->class->vft[COLOR_standard__string__Object__to_s]))(var_p); /* to_s on <var_p:Phase>*/
}
((struct instance_standard__NativeArray*)var22)->values[0]=var31;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ", ";
var35 = standard___standard__NativeString___to_s_with_length(var34, 2l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((val*(*)(val* self, val* p0))((((long)var_deps&3)?class_info[((long)var_deps&3)]:var_deps->class)->vft[COLOR_standard__string__Collection__join]))(var_deps, var33); /* join on <var_deps:Collection[Phase]>*/
}
((struct instance_standard__NativeArray*)var22)->values[2]=var36;
{
var37 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__file__Sys__print]))(var20, var37); /* print on <var20:Sys>*/
}
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[Phase]>*/
}
var38 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var38,0l) on <var38:Sys> */
exit(0l);
RET_LABEL39:(void)0;
}
}
} else {
}
var_found = 0;
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases]))(self); /* phases on <self:ToolContext>*/
}
var_41 = var40;
{
var42 = ((val*(*)(val* self))(var_41->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_41); /* iterator on <var_41:POSet[Phase]>*/
}
var_43 = var42;
for(;;) {
{
var44 = ((short int(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_43); /* is_ok on <var_43:Iterator[Phase]>*/
}
if (var44){
{
var45 = ((val*(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_43); /* item on <var_43:Iterator[Phase]>*/
}
var_p46 = var45;
{
var47 = ((val*(*)(val* self))(var_p46->class->vft[COLOR_standard__string__Object__to_s]))(var_p46); /* to_s on <var_p46:Phase>*/
}
{
var48 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_v, var47); /* != on <var_v:String>*/
}
if (var48){
goto BREAK_label49;
} else {
}
var_found = 1;
{
((void(*)(val* self, short int p0))(var_p46->class->vft[COLOR_nit__phase__Phase__disabled_61d]))(var_p46, 1); /* disabled= on <var_p46:Phase>*/
}
BREAK_label49: (void)0;
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_43); /* next on <var_43:Iterator[Phase]>*/
}
} else {
goto BREAK_label50;
}
}
BREAK_label50: (void)0;
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_43); /* finish on <var_43:Iterator[Phase]>*/
}
var51 = !var_found;
if (var51){
if (unlikely(varonce52==NULL)) {
var53 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "Error: no phase named `";
var57 = standard___standard__NativeString___to_s_with_length(var56, 23l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var53)->values[0]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "`. Use `list` to list all phases.";
var61 = standard___standard__NativeString___to_s_with_length(var60, 33l);
var59 = var61;
varonce58 = var59;
}
((struct instance_standard__NativeArray*)var53)->values[2]=var59;
} else {
var53 = varonce52;
varonce52 = NULL;
}
((struct instance_standard__NativeArray*)var53)->values[1]=var_v;
{
var62 = ((val*(*)(val* self))(var53->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__fatal_error]))(self, ((val*)NULL), var62); /* fatal_error on <self:ToolContext>*/
}
} else {
}
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ArrayIterator[String]>*/
}
} else {
goto BREAK_label63;
}
}
BREAK_label63: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ArrayIterator[String]>*/
}
{
var64 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__opt_sloppy]))(self); /* opt_sloppy on <self:ToolContext>*/
}
{
var65 = ((val*(*)(val* self))(var64->class->vft[COLOR_opts__Option__value]))(var64); /* value on <var64:OptionBool>*/
}
var66 = (short int)((long)(var65)>>2);
if (var66){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__phase__ToolContext__semantize_is_lazy_61d]))(self, 1); /* semantize_is_lazy= on <self:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#ToolContext#phases_list for (self: ToolContext): Sequence[Phase] */
val* nit__phase___ToolContext___phases_list(val* self) {
val* var /* : Sequence[Phase] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Phase] */;
val* var3 /* : Sequence[Phase] */;
val* var5 /* : POSet[Phase] */;
val* var6 /* : Array[nullable Object] */;
val* var_phases /* var phases: Array[Phase] */;
val* var7 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___phases_list].val != NULL; /* _phases_list on <self:ToolContext> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__phase__ToolContext___phases_list].val; /* _phases_list on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases_list");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 72);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases]))(self); /* phases on <self:ToolContext>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__array__Collection__to_a]))(var5); /* to_a on <var5:POSet[Phase]>*/
}
var_phases = var6;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases]))(self); /* phases on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__sorter__Comparator__sort]))(var7, var_phases); /* sort on <var7:POSet[Phase]>*/
}
var3 = var_phases;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__phase__ToolContext___phases_list].val = var3; /* _phases_list on <self:ToolContext> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#phases_list= for (self: ToolContext, Sequence[Phase]) */
void nit__phase___ToolContext___phases_list_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__ToolContext___phases_list].val = p0; /* _phases_list on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#semantize_is_lazy for (self: ToolContext): Bool */
short int nit__phase___ToolContext___semantize_is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#semantize_is_lazy= for (self: ToolContext, Bool) */
void nit__phase___ToolContext___semantize_is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s = p0; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#phased_modules for (self: ToolContext): HashSet[AModule] */
val* nit__phase___ToolContext___phased_modules(val* self) {
val* var /* : HashSet[AModule] */;
val* var1 /* : HashSet[AModule] */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#phased_modules= for (self: ToolContext, HashSet[AModule]) */
void nit__phase___ToolContext___phased_modules_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__ToolContext___phased_modules].val = p0; /* _phased_modules on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#run_phases for (self: ToolContext, Collection[AModule]) */
void nit__phase___ToolContext___run_phases(val* self, val* p0) {
val* var_nmodules /* var nmodules: Collection[AModule] */;
long var /* : Int */;
long var_time0 /* var time0: Int */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[Phase] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var_17 /* var : Collection[AModule] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[AModule] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_nmodule /* var nmodule: AModule */;
val* var22 /* : HashSet[AModule] */;
short int var23 /* : Bool */;
val* var25 /* : HashSet[AModule] */;
val* var27 /* : NativeArray[String] */;
static val* varonce26;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : Location */;
val* var33 /* : nullable SourceFile */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : AnnotationPhaseVisitor */;
val* var_vannot /* var vannot: AnnotationPhaseVisitor */;
val* var_37 /* var : Sequence[Phase] */;
val* var38 /* : Iterator[nullable Object] */;
val* var_39 /* var : IndexedIterator[Phase] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_phase42 /* var phase: Phase */;
short int var43 /* : Bool */;
val* var45 /* : ToolContext */;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var_errcount /* var errcount: Int */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
long var55 /* : Int */;
val* var56 /* : ANodes[AClassdef] */;
val* var_57 /* var : ANodes[AClassdef] */;
val* var58 /* : Iterator[nullable Object] */;
val* var_59 /* var : Iterator[AClassdef] */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var62 /* : ToolContext */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : ANodes[APropdef] */;
val* var_67 /* var : ANodes[APropdef] */;
val* var68 /* : Iterator[nullable Object] */;
val* var_69 /* var : Iterator[APropdef] */;
short int var70 /* : Bool */;
val* var71 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var72 /* : ToolContext */;
short int var73 /* : Bool */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : Array[AAnnotation] */;
val* var_83 /* var : Array[AAnnotation] */;
val* var84 /* : Iterator[nullable Object] */;
val* var_85 /* var : ArrayIterator[AAnnotation] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var88 /* : nullable ANode */;
val* var_p /* var p: nullable ANode */;
short int var89 /* : Bool */;
int cltype;
int idtype;
val* var90 /* : nullable ANode */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
long var94 /* : Int */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
long var102 /* : Int */;
long var_time1 /* var time1: Int */;
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
long var113 /* : Int */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
const char* var_class_name;
long var118 /* : Int */;
val* var119 /* : String */;
val* var120 /* : String */;
short int var121 /* : Bool */;
var_nmodules = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__time__Object__get_time]))(self); /* get_time on <self:ToolContext>*/
}
var_time0 = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "*** SEMANTIC ANALYSIS ***";
var3 = standard___standard__NativeString___to_s_with_length(var2, 25l);
var1 = var3;
varonce = var1;
}
{
((void(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(self, var1, 1l); /* info on <self:ToolContext>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases_list]))(self); /* phases_list on <self:ToolContext>*/
}
var_phases = var4;
var_ = var_phases;
{
var5 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[Phase]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[Phase]>*/
}
var_phase = var8;
if (unlikely(varonce9==NULL)) {
var10 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = " registered phases: ";
var14 = standard___standard__NativeString___to_s_with_length(var13, 20l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
} else {
var10 = varonce9;
varonce9 = NULL;
}
{
var15 = ((val*(*)(val* self))(var_phase->class->vft[COLOR_standard__string__Object__to_s]))(var_phase); /* to_s on <var_phase:Phase>*/
}
((struct instance_standard__NativeArray*)var10)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
((void(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(self, var16, 2l); /* info on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[Phase]>*/
}
var_17 = var_nmodules;
{
var18 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_17); /* iterator on <var_17:Collection[AModule]>*/
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:Iterator[AModule]>*/
}
if (var20){
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:Iterator[AModule]>*/
}
var_nmodule = var21;
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phased_modules]))(self); /* phased_modules on <self:ToolContext>*/
}
{
var23 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var22, var_nmodule); /* has on <var22:HashSet[AModule]>*/
}
if (var23){
goto BREAK_label24;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phased_modules]))(self); /* phased_modules on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var25, var_nmodule); /* add on <var25:HashSet[AModule]>*/
}
if (unlikely(varonce26==NULL)) {
var27 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Semantic analysis module ";
var31 = standard___standard__NativeString___to_s_with_length(var30, 25l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var27)->values[0]=var29;
} else {
var27 = varonce26;
varonce26 = NULL;
}
{
var32 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nmodule); /* location on <var_nmodule:AModule>*/
}
{
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_nit__location__Location__file]))(var32); /* file on <var32:Location>*/
}
if (var33 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 106);
fatal_exit(1);
} else {
var34 = ((val*(*)(val* self))(var33->class->vft[COLOR_nit__location__SourceFile__filename]))(var33); /* filename on <var33:nullable SourceFile>*/
}
((struct instance_standard__NativeArray*)var27)->values[1]=var34;
{
var35 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
{
((void(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(self, var35, 2l); /* info on <self:ToolContext>*/
}
var36 = NEW_nit__phase__AnnotationPhaseVisitor(&type_nit__phase__AnnotationPhaseVisitor);
{
((void(*)(val* self))(var36->class->vft[COLOR_standard__kernel__Object__init]))(var36); /* init on <var36:AnnotationPhaseVisitor>*/
}
var_vannot = var36;
{
((void(*)(val* self, val* p0))(var_vannot->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_vannot, var_nmodule); /* enter_visit on <var_vannot:AnnotationPhaseVisitor>*/
}
var_37 = var_phases;
{
var38 = ((val*(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_37); /* iterator on <var_37:Sequence[Phase]>*/
}
var_39 = var38;
for(;;) {
{
var40 = ((short int(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_39); /* is_ok on <var_39:IndexedIterator[Phase]>*/
}
if (var40){
{
var41 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_39); /* item on <var_39:IndexedIterator[Phase]>*/
}
var_phase42 = var41;
{
var43 = ((short int(*)(val* self))(var_phase42->class->vft[COLOR_nit__phase__Phase__disabled]))(var_phase42); /* disabled on <var_phase42:Phase>*/
}
if (var43){
goto BREAK_label44;
} else {
}
{
var45 = ((val*(*)(val* self))(var_phase42->class->vft[COLOR_nit__phase__Phase__toolcontext]))(var_phase42); /* toolcontext on <var_phase42:Phase>*/
}
{
var46 = ((short int(*)(val* self, val* p0))(var45->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var45, self); /* == on <var45:ToolContext>*/
}
if (unlikely(!var46)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 113);
fatal_exit(1);
}
{
var47 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(self); /* error_count on <self:ToolContext>*/
}
var_errcount = var47;
{
((void(*)(val* self, val* p0))(var_phase42->class->vft[COLOR_nit__phase__Phase__process_nmodule]))(var_phase42, var_nmodule); /* process_nmodule on <var_phase42:Phase>*/
}
{
var48 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(self); /* error_count on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var48) on <var_errcount:Int> */
var51 = var_errcount == var48;
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
var53 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
goto BREAK_label54;
} else {
}
{
var55 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(self); /* error_count on <self:ToolContext>*/
}
var_errcount = var55;
{
var56 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_57 = var56;
{
var58 = ((val*(*)(val* self))(var_57->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_57); /* iterator on <var_57:ANodes[AClassdef]>*/
}
var_59 = var58;
for(;;) {
{
var60 = ((short int(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_59); /* is_ok on <var_59:Iterator[AClassdef]>*/
}
if (var60){
{
var61 = ((val*(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_59); /* item on <var_59:Iterator[AClassdef]>*/
}
var_nclassdef = var61;
{
var62 = ((val*(*)(val* self))(var_phase42->class->vft[COLOR_nit__phase__Phase__toolcontext]))(var_phase42); /* toolcontext on <var_phase42:Phase>*/
}
{
var63 = ((short int(*)(val* self, val* p0))(var62->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var62, self); /* == on <var62:ToolContext>*/
}
if (unlikely(!var63)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 122);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_phase42->class->vft[COLOR_nit__phase__Phase__process_nclassdef]))(var_phase42, var_nclassdef); /* process_nclassdef on <var_phase42:Phase>*/
}
{
var64 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__semantize_is_lazy]))(self); /* semantize_is_lazy on <self:ToolContext>*/
}
var65 = !var64;
if (var65){
{
var66 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:AClassdef>*/
}
var_67 = var66;
{
var68 = ((val*(*)(val* self))(var_67->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_67); /* iterator on <var_67:ANodes[APropdef]>*/
}
var_69 = var68;
for(;;) {
{
var70 = ((short int(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_69); /* is_ok on <var_69:Iterator[APropdef]>*/
}
if (var70){
{
var71 = ((val*(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_69); /* item on <var_69:Iterator[APropdef]>*/
}
var_npropdef = var71;
{
var72 = ((val*(*)(val* self))(var_phase42->class->vft[COLOR_nit__phase__Phase__toolcontext]))(var_phase42); /* toolcontext on <var_phase42:Phase>*/
}
{
var73 = ((short int(*)(val* self, val* p0))(var72->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var72, self); /* == on <var72:ToolContext>*/
}
if (unlikely(!var73)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 125);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__phase__ToolContext__phase_process_npropdef]))(self, var_phase42, var_npropdef); /* phase_process_npropdef on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_69); /* next on <var_69:Iterator[APropdef]>*/
}
} else {
goto BREAK_label74;
}
}
BREAK_label74: (void)0;
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_69); /* finish on <var_69:Iterator[APropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_59); /* next on <var_59:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label75;
}
}
BREAK_label75: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_59); /* finish on <var_59:Iterator[AClassdef]>*/
}
{
var76 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(self); /* error_count on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var76) on <var_errcount:Int> */
var79 = var_errcount == var76;
var80 = !var79;
var77 = var80;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
{
var81 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
goto BREAK_label54;
} else {
}
{
var82 = ((val*(*)(val* self))(var_vannot->class->vft[COLOR_nit__phase__AnnotationPhaseVisitor__annotations]))(var_vannot); /* annotations on <var_vannot:AnnotationPhaseVisitor>*/
}
var_83 = var82;
{
var84 = ((val*(*)(val* self))(var_83->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_83); /* iterator on <var_83:Array[AAnnotation]>*/
}
var_85 = var84;
for(;;) {
{
var86 = ((short int(*)(val* self))(var_85->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_85); /* is_ok on <var_85:ArrayIterator[AAnnotation]>*/
}
if (var86){
{
var87 = ((val*(*)(val* self))(var_85->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_85); /* item on <var_85:ArrayIterator[AAnnotation]>*/
}
var_na = var87;
{
var88 = ((val*(*)(val* self))(var_na->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_na); /* parent on <var_na:AAnnotation>*/
}
var_p = var88;
/* <var_p:nullable ANode> isa AAnnotations */
cltype = type_nit__AAnnotations.color;
idtype = type_nit__AAnnotations.id;
if(var_p == NULL) {
var89 = 0;
} else {
if(cltype >= var_p->type->table_size) {
var89 = 0;
} else {
var89 = var_p->type->type_table[cltype] == idtype;
}
}
if (var89){
{
var90 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_p); /* parent on <var_p:nullable ANode(AAnnotations)>*/
}
var_p = var90;
} else {
}
if (var_p == NULL) {
var91 = 0; /* is null */
} else {
var91 = 1; /* arg is null and recv is not */
}
if (0) {
var92 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_p, ((val*)NULL)); /* != on <var_p:nullable ANode>*/
var91 = var92;
}
if (unlikely(!var91)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 136);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_phase42->class->vft[COLOR_nit__phase__Phase__process_annotated_node]))(var_phase42, var_p, var_na); /* process_annotated_node on <var_phase42:Phase>*/
}
{
((void(*)(val* self))(var_85->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_85); /* next on <var_85:ArrayIterator[AAnnotation]>*/
}
} else {
goto BREAK_label93;
}
}
BREAK_label93: (void)0;
{
((void(*)(val* self))(var_85->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_85); /* finish on <var_85:ArrayIterator[AAnnotation]>*/
}
{
var94 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(self); /* error_count on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var94) on <var_errcount:Int> */
var97 = var_errcount == var94;
var98 = !var97;
var95 = var98;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
if (var95){
{
var99 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
goto BREAK_label54;
} else {
}
BREAK_label44: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_39); /* next on <var_39:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label54;
}
}
BREAK_label54: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_39); /* finish on <var_39:IndexedIterator[Phase]>*/
}
{
var100 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
BREAK_label24: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:Iterator[AModule]>*/
}
} else {
goto BREAK_label101;
}
}
BREAK_label101: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:Iterator[AModule]>*/
}
{
var102 = ((long(*)(val* self))(self->class->vft[COLOR_standard__time__Object__get_time]))(self); /* get_time on <self:ToolContext>*/
}
var_time1 = var102;
if (unlikely(varonce103==NULL)) {
var104 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "*** END SEMANTIC ANALYSIS: ";
var108 = standard___standard__NativeString___to_s_with_length(var107, 27l);
var106 = var108;
varonce105 = var106;
}
((struct instance_standard__NativeArray*)var104)->values[0]=var106;
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = " ***";
var112 = standard___standard__NativeString___to_s_with_length(var111, 4l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var104)->values[2]=var110;
} else {
var104 = varonce103;
varonce103 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var115 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var115)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var118 = var_time1 - var_time0;
var113 = var118;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
var119 = standard__string___Int___Object__to_s(var113);
((struct instance_standard__NativeArray*)var104)->values[1]=var119;
{
var120 = ((val*(*)(val* self))(var104->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
{
((void(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(self, var120, 2l); /* info on <self:ToolContext>*/
}
{
var121 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#phase_process_npropdef for (self: ToolContext, Phase, APropdef) */
void nit__phase___ToolContext___phase_process_npropdef(val* self, val* p0, val* p1) {
val* var_phase /* var phase: Phase */;
val* var_npropdef /* var npropdef: APropdef */;
var_phase = p0;
var_npropdef = p1;
{
((void(*)(val* self, val* p0))(var_phase->class->vft[COLOR_nit__phase__Phase__process_npropdef]))(var_phase, var_npropdef); /* process_npropdef on <var_phase:Phase>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#run_phases_on_npropdef for (self: ToolContext, APropdef) */
void nit__phase___ToolContext___run_phases_on_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[Phase] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
short int var8 /* : Bool */;
val* var9 /* : ToolContext */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
var_npropdef = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__semantize_is_lazy]))(self); /* semantize_is_lazy on <self:ToolContext>*/
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
{
var2 = ((short int(*)(val* self))(var_npropdef->class->vft[COLOR_nit__phase__APropdef__is_phased]))(var_npropdef); /* is_phased on <var_npropdef:APropdef>*/
}
if (var2){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(var_npropdef->class->vft[COLOR_nit__phase__APropdef__is_phased_61d]))(var_npropdef, 1); /* is_phased= on <var_npropdef:APropdef>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases_list]))(self); /* phases_list on <self:ToolContext>*/
}
var_phases = var3;
var_ = var_phases;
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
var9 = ((val*(*)(val* self))(var_phase->class->vft[COLOR_nit__phase__Phase__toolcontext]))(var_phase); /* toolcontext on <var_phase:Phase>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, self); /* == on <var9:ToolContext>*/
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 173);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__phase__ToolContext__phase_process_npropdef]))(self, var_phase, var_npropdef); /* phase_process_npropdef on <self:ToolContext>*/
}
{
var11 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label12;
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[Phase]>*/
}
RET_LABEL:;
}
/* method phase#APropdef#is_phased for (self: APropdef): Bool */
short int nit__phase___APropdef___is_phased(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__phase__APropdef___is_phased].s; /* _is_phased on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#APropdef#is_phased= for (self: APropdef, Bool) */
void nit__phase___APropdef___is_phased_61d(val* self, short int p0) {
self->attrs[COLOR_nit__phase__APropdef___is_phased].s = p0; /* _is_phased on <self:APropdef> */
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#annotations for (self: AnnotationPhaseVisitor): Array[AAnnotation] */
val* nit__phase___nit__phase__AnnotationPhaseVisitor___annotations(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = self->attrs[COLOR_nit__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 190);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#AnnotationPhaseVisitor#annotations= for (self: AnnotationPhaseVisitor, Array[AAnnotation]) */
void nit__phase___nit__phase__AnnotationPhaseVisitor___annotations_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__AnnotationPhaseVisitor___annotations].val = p0; /* _annotations on <self:AnnotationPhaseVisitor> */
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#visit for (self: AnnotationPhaseVisitor, ANode) */
void nit__phase___nit__phase__AnnotationPhaseVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Array[AAnnotation] */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
/* <var_n:ANode> isa AAnnotation */
cltype = type_nit__AAnnotation.color;
idtype = type_nit__AAnnotation.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__AnnotationPhaseVisitor__annotations]))(self); /* annotations on <self:AnnotationPhaseVisitor>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var1, var_n); /* add on <var1:Array[AAnnotation]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#Phase#toolcontext for (self: Phase): ToolContext */
val* nit___nit__Phase___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 203);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#toolcontext= for (self: Phase, ToolContext) */
void nit___nit__Phase___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__Phase___toolcontext].val = p0; /* _toolcontext on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#in_hierarchy for (self: Phase): POSetElement[Phase] */
val* nit___nit__Phase___in_hierarchy(val* self) {
val* var /* : POSetElement[Phase] */;
val* var1 /* : POSetElement[Phase] */;
var1 = self->attrs[COLOR_nit__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 206);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#in_hierarchy= for (self: Phase, POSetElement[Phase]) */
void nit___nit__Phase___in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__Phase___in_hierarchy].val = p0; /* _in_hierarchy on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#depends for (self: Phase): nullable Collection[Phase] */
val* nit___nit__Phase___depends(val* self) {
val* var /* : nullable Collection[Phase] */;
val* var1 /* : nullable Collection[Phase] */;
var1 = self->attrs[COLOR_nit__phase__Phase___depends].val; /* _depends on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#depends= for (self: Phase, nullable Collection[Phase]) */
void nit___nit__Phase___depends_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__Phase___depends].val = p0; /* _depends on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#init for (self: Phase) */
void nit___nit__Phase___standard__kernel__Object__init(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSet[Phase] */;
val* var2 /* : POSetElement[nullable Object] */;
val* var3 /* : nullable Collection[Phase] */;
val* var_depends /* var depends: nullable Collection[Phase] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_ /* var : Collection[Phase] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[Phase] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_d /* var d: Phase */;
val* var10 /* : ToolContext */;
val* var11 /* : POSet[Phase] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:Phase>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__phase__ToolContext__phases]))(var); /* phases on <var:ToolContext>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_poset__POSet__add_node]))(var1, self); /* add_node on <var1:POSet[Phase]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__phase__Phase__in_hierarchy_61d]))(self, var2); /* in_hierarchy= on <self:Phase>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__depends]))(self); /* depends on <self:Phase>*/
}
var_depends = var3;
if (var_depends == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_depends&3)?class_info[((long)var_depends&3)]:var_depends->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_depends, ((val*)NULL)); /* != on <var_depends:nullable Collection[Phase]>*/
var4 = var5;
}
if (var4){
var_ = var_depends;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Phase]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[Phase]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[Phase]>*/
}
var_d = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:Phase>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__phase__ToolContext__phases]))(var10); /* phases on <var10:ToolContext>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var11->class->vft[COLOR_poset__POSet__add_edge]))(var11, self, var_d); /* add_edge on <var11:POSet[Phase]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[Phase]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[Phase]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#Phase#to_s for (self: Phase): String */
val* nit___nit__Phase___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__class_name]))(self); /* class_name on <self:Phase>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Phase";
var4 = standard___standard__NativeString___to_s_with_length(var3, 5l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__file__String__strip_extension]))(var1, var2); /* strip_extension on <var1:String>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__String__to_snake_case]))(var5); /* to_snake_case on <var5:String>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled for (self: Phase): Bool */
short int nit___nit__Phase___disabled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__phase__Phase___disabled].s; /* _disabled on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled= for (self: Phase, Bool) */
void nit___nit__Phase___disabled_61d(val* self, short int p0) {
self->attrs[COLOR_nit__phase__Phase___disabled].s = p0; /* _disabled on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#process_nmodule for (self: Phase, AModule) */
void nit___nit__Phase___process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
var_nmodule = p0;
RET_LABEL:;
}
/* method phase#Phase#process_nclassdef for (self: Phase, AClassdef) */
void nit___nit__Phase___process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
var_nclassdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_npropdef for (self: Phase, APropdef) */
void nit___nit__Phase___process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
var_npropdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_annotated_node for (self: Phase, ANode, AAnnotation) */
void nit___nit__Phase___process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
var_node = p0;
var_nat = p1;
RET_LABEL:;
}
