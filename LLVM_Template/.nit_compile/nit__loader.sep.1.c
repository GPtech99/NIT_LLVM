#include "nit__loader.sep.0.h"
/* method loader#ToolContext#opt_path for (self: ToolContext): OptionArray */
val* nit__loader___ToolContext___opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#opt_path= for (self: ToolContext, OptionArray) */
void nit__loader___ToolContext___opt_path_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ToolContext___opt_path].val = p0; /* _opt_path on <self:ToolContext> */
RET_LABEL:;
}
/* method loader#ToolContext#opt_only_metamodel for (self: ToolContext): OptionBool */
val* nit__loader___ToolContext___opt_only_metamodel(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#opt_only_metamodel= for (self: ToolContext, OptionBool) */
void nit__loader___ToolContext___opt_only_metamodel_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ToolContext___opt_only_metamodel].val = p0; /* _opt_only_metamodel on <self:ToolContext> */
RET_LABEL:;
}
/* method loader#ToolContext#opt_only_parse for (self: ToolContext): OptionBool */
val* nit__loader___ToolContext___opt_only_parse(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 29);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#opt_only_parse= for (self: ToolContext, OptionBool) */
void nit__loader___ToolContext___opt_only_parse_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ToolContext___opt_only_parse].val = p0; /* _opt_only_parse on <self:ToolContext> */
RET_LABEL:;
}
/* method loader#ToolContext#init for (self: ToolContext) */
void nit__loader___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionArray */;
val* var2 /* : OptionBool */;
val* var3 /* : OptionBool */;
val* var4 /* : Array[Option] */;
val* var5 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__loader___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ToolContext__opt_path]))(self); /* opt_path on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ToolContext__opt_only_parse]))(self); /* opt_only_parse on <self:ToolContext>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ToolContext__opt_only_metamodel]))(self); /* opt_only_metamodel on <self:ToolContext>*/
}
var4 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var4 = array_instance Array[Option] */
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var5)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var5)->values[1] = (val*) var2;
((struct instance_standard__NativeArray*)var5)->values[2] = (val*) var3;
{
((void(*)(val* self, val* p0, long p1))(var4->class->vft[COLOR_standard__array__Array__with_native]))(var4, var5, 3l); /* with_native on <var4:Array[Option]>*/
}
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var4); /* add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#init for (self: ModelBuilder) */
void nit__loader___ModelBuilder___standard__kernel__Object__init(val* self) {
val* var /* : Array[String] */;
val* var1 /* : ToolContext */;
val* var2 /* : OptionArray */;
val* var3 /* : nullable Object */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : String */;
val* var_path_env /* var path_env: String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[String] */;
val* var11 /* : Array[String] */;
val* var12 /* : Pattern */;
val* var13 /* : ToolContext */;
val* var14 /* : String */;
val* var_nit_dir /* var nit_dir: String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var_libname /* var libname: String */;
short int var22 /* : Bool */;
val* var23 /* : Array[String] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__loader___ModelBuilder___standard__kernel__Object__init]))(self); /* init on <self:ModelBuilder>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__paths]))(self); /* paths on <self:ModelBuilder>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__loader__ToolContext__opt_path]))(var1); /* opt_path on <var1:ToolContext>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_opts__Option__value]))(var2); /* value on <var2:OptionArray>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__abstract_collection__Sequence__append]))(var, var3); /* append on <var:Array[String]>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "NIT_PATH";
var6 = standard___standard__NativeString___to_s_with_length(var5, 8l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__environ__String__environ]))(var4); /* environ on <var4:String>*/
}
var_path_env = var7;
{
var8 = ((short int(*)(val* self))(var_path_env->class->vft[COLOR_standard__string__Text__is_empty]))(var_path_env); /* is_empty on <var_path_env:String>*/
}
var9 = !var8;
if (var9){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__paths]))(self); /* paths on <self:ModelBuilder>*/
}
{
var12 = (val*)((long)(':')<<2|2);
var11 = ((val*(*)(val* self, val* p0))(var_path_env->class->vft[COLOR_standard__string_search__Text__split_with]))(var_path_env, var12); /* split_with on <var_path_env:String>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__Sequence__append]))(var10, var11); /* append on <var10:Array[String]>*/
}
} else {
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__toolcontext__ToolContext__nit_dir]))(var13); /* nit_dir on <var13:ToolContext>*/
}
var_nit_dir = var14;
if (unlikely(varonce15==NULL)) {
var16 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "/lib";
var20 = standard___standard__NativeString___to_s_with_length(var19, 4l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[1]=var18;
} else {
var16 = varonce15;
varonce15 = NULL;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var_nit_dir;
{
var21 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var_libname = var21;
{
var22 = ((short int(*)(val* self))(var_libname->class->vft[COLOR_standard__file__String__file_exists]))(var_libname); /* file_exists on <var_libname:String>*/
}
if (var22){
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__paths]))(self); /* paths on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var23, var_libname); /* add on <var23:Array[String]>*/
}
} else {
}
RET_LABEL:;
}
/* method loader#ModelBuilder#parse for (self: ModelBuilder, Sequence[String]): Array[MModule] */
val* nit__loader___ModelBuilder___parse(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_modules /* var modules: Sequence[String] */;
long var1 /* : Int */;
long var_time0 /* var time0: Int */;
val* var2 /* : ToolContext */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : ArraySet[MModule] */;
val* var_mmodules /* var mmodules: ArraySet[MModule] */;
val* var_ /* var : Sequence[String] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : IndexedIterator[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_a /* var a: String */;
val* var11 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var18 /* : Int */;
long var_time1 /* var time1: Int */;
val* var19 /* : ToolContext */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : ToolContext */;
short int var37 /* : Bool */;
val* var38 /* : ToolContext */;
val* var39 /* : OptionBool */;
val* var40 /* : nullable Object */;
short int var41 /* : Bool */;
val* var42 /* : ToolContext */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : Sys */;
val* var49 /* : Array[nullable Object] */;
var_modules = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__time__Object__get_time]))(self); /* get_time on <self:ModelBuilder>*/
}
var_time0 = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "*** PARSE ***";
var5 = standard___standard__NativeString___to_s_with_length(var4, 13l);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0, long p1))(var2->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var2, var3, 1l); /* info on <var2:ToolContext>*/
}
var6 = NEW_standard__ArraySet(&type_standard__ArraySet__nit__MModule);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:ArraySet[MModule]>*/
}
var_mmodules = var6;
var_ = var_modules;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[String]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:IndexedIterator[String]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:IndexedIterator[String]>*/
}
var_a = var10;
{
var11 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__load_module]))(self, var_a); /* load_module on <self:ModelBuilder>*/
}
var_nmodule = var11;
if (var_nmodule == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nmodule, ((val*)NULL)); /* == on <var_nmodule:nullable AModule>*/
var12 = var13;
}
if (var12){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__build_module_importation]))(self, var_nmodule); /* build_module_importation on <self:ModelBuilder>*/
}
{
var14 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:nullable AModule(AModule)>*/
}
var_mmodule = var14;
if (var_mmodule == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var15 = var16;
}
if (var15){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_mmodules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mmodules, var_mmodule); /* add on <var_mmodules:ArraySet[MModule]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:IndexedIterator[String]>*/
}
} else {
goto BREAK_label17;
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:IndexedIterator[String]>*/
}
{
var18 = ((long(*)(val* self))(self->class->vft[COLOR_standard__time__Object__get_time]))(self); /* get_time on <self:ModelBuilder>*/
}
var_time1 = var18;
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "*** END PARSE: ";
var25 = standard___standard__NativeString___to_s_with_length(var24, 15l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var21)->values[0]=var23;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = " ***";
var29 = standard___standard__NativeString___to_s_with_length(var28, 4l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var21)->values[2]=var27;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var32 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var33 = var_time1 - var_time0;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var34 = standard__string___Int___Object__to_s(var30);
((struct instance_standard__NativeArray*)var21)->values[1]=var34;
{
var35 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
((void(*)(val* self, val* p0, long p1))(var19->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var19, var35, 2l); /* info on <var19:ToolContext>*/
}
{
var36 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var37 = ((short int(*)(val* self))(var36->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(var36); /* check_errors on <var36:ToolContext>*/
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var39 = ((val*(*)(val* self))(var38->class->vft[COLOR_nit__loader__ToolContext__opt_only_parse]))(var38); /* opt_only_parse on <var38:ToolContext>*/
}
{
var40 = ((val*(*)(val* self))(var39->class->vft[COLOR_opts__Option__value]))(var39); /* value on <var39:OptionBool>*/
}
var41 = (short int)((long)(var40)>>2);
if (var41){
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "*** ONLY PARSE...";
var46 = standard___standard__NativeString___to_s_with_length(var45, 17l);
var44 = var46;
varonce43 = var44;
}
{
((void(*)(val* self, val* p0, long p1))(var42->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var42, var44, 1l); /* info on <var42:ToolContext>*/
}
var47 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var47,0l) on <var47:Sys> */
exit(0l);
RET_LABEL48:(void)0;
}
}
} else {
}
{
var49 = ((val*(*)(val* self))(var_mmodules->class->vft[COLOR_standard__array__Collection__to_a]))(var_mmodules); /* to_a on <var_mmodules:ArraySet[MModule]>*/
}
var = var49;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#parse_group for (self: ModelBuilder, MGroup): Array[MModule] */
val* nit__loader___ModelBuilder___parse_group(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_mgroup /* var mgroup: MGroup */;
val* var1 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var2 /* : POSetElement[MGroup] */;
val* var3 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MGroup] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[MGroup] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_mg /* var mg: MGroup */;
val* var8 /* : Array[ModulePath] */;
val* var_9 /* var : Array[ModulePath] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[ModulePath] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mp /* var mp: ModulePath */;
val* var14 /* : String */;
val* var15 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
var_mgroup = p0;
var1 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[MModule]>*/
}
var_res = var1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__visit_group]))(self, var_mgroup); /* visit_group on <self:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__in_nesting]))(var_mgroup); /* in_nesting on <var_mgroup:MGroup>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__smallers]))(var2); /* smallers on <var2:POSetElement[MGroup]>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MGroup]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[MGroup]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[MGroup]>*/
}
var_mg = var7;
{
var8 = ((val*(*)(val* self))(var_mg->class->vft[COLOR_nit__loader__MGroup__module_paths]))(var_mg); /* module_paths on <var_mg:MGroup>*/
}
var_9 = var8;
{
var10 = ((val*(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_9); /* iterator on <var_9:Array[ModulePath]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:ArrayIterator[ModulePath]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:ArrayIterator[ModulePath]>*/
}
var_mp = var13;
{
var14 = ((val*(*)(val* self))(var_mp->class->vft[COLOR_nit__loader__ModulePath__filepath]))(var_mp); /* filepath on <var_mp:ModulePath>*/
}
{
var15 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__load_module]))(self, var14); /* load_module on <self:ModelBuilder>*/
}
var_nmodule = var15;
if (var_nmodule == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nmodule, ((val*)NULL)); /* == on <var_nmodule:nullable AModule>*/
var16 = var17;
}
if (var16){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__build_module_importation]))(self, var_nmodule); /* build_module_importation on <self:ModelBuilder>*/
}
{
var18 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:nullable AModule(AModule)>*/
}
var_mmodule = var18;
if (var_mmodule == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var19 = var20;
}
if (var19){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_mmodule); /* add on <var_res:Array[MModule]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:ArrayIterator[ModulePath]>*/
}
} else {
goto BREAK_label21;
}
}
BREAK_label21: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:ArrayIterator[ModulePath]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[MGroup]>*/
}
} else {
goto BREAK_label22;
}
}
BREAK_label22: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#parse_full for (self: ModelBuilder, Sequence[String]): Array[MModule] */
val* nit__loader___ModelBuilder___parse_full(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_names /* var names: Sequence[String] */;
long var1 /* : Int */;
long var_time0 /* var time0: Int */;
val* var2 /* : ToolContext */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : ArraySet[MModule] */;
val* var_mmodules /* var mmodules: ArraySet[MModule] */;
val* var_ /* var : Sequence[String] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : IndexedIterator[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_a /* var a: String */;
val* var11 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Array[MModule] */;
val* var15 /* : Path */;
val* var16 /* : nullable FileStat */;
val* var_stat /* var stat: nullable FileStat */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
short int var21 /* : Bool */;
val* var22 /* : ToolContext */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var30 /* : Array[String] */;
val* var_fs /* var fs: Array[String] */;
val* var_31 /* var : Array[String] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : ArrayIterator[String] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_f /* var f: String */;
val* var36 /* : String */;
val* var_af /* var af: String */;
val* var37 /* : nullable MGroup */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Array[MModule] */;
val* var42 /* : nullable ModulePath */;
val* var_mp /* var mp: nullable ModulePath */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : ToolContext */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
val* var58 /* : String */;
val* var60 /* : nullable AModule */;
val* var_nmodule61 /* var nmodule: nullable AModule */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : nullable MModule */;
val* var_mmodule65 /* var mmodule: nullable MModule */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
long var69 /* : Int */;
long var_time1 /* var time1: Int */;
val* var70 /* : ToolContext */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : String */;
val* var87 /* : ToolContext */;
short int var88 /* : Bool */;
val* var89 /* : ToolContext */;
val* var90 /* : OptionBool */;
val* var91 /* : nullable Object */;
short int var92 /* : Bool */;
val* var93 /* : ToolContext */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : FlatString */;
val* var98 /* : Sys */;
val* var100 /* : Array[nullable Object] */;
var_names = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__time__Object__get_time]))(self); /* get_time on <self:ModelBuilder>*/
}
var_time0 = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "*** PARSE ***";
var5 = standard___standard__NativeString___to_s_with_length(var4, 13l);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0, long p1))(var2->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var2, var3, 1l); /* info on <var2:ToolContext>*/
}
var6 = NEW_standard__ArraySet(&type_standard__ArraySet__nit__MModule);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:ArraySet[MModule]>*/
}
var_mmodules = var6;
var_ = var_names;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[String]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:IndexedIterator[String]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:IndexedIterator[String]>*/
}
var_a = var10;
{
var11 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__get_mgroup]))(self, var_a); /* get_mgroup on <self:ModelBuilder>*/
}
var_mgroup = var11;
if (var_mgroup == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mgroup, ((val*)NULL)); /* != on <var_mgroup:nullable MGroup>*/
var12 = var13;
}
if (var12){
{
var14 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__parse_group]))(self, var_mgroup); /* parse_group on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var_mmodules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_mmodules, var14); /* add_all on <var_mmodules:ArraySet[MModule]>*/
}
goto BREAK_label;
} else {
}
{
var15 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__file__Text__to_path]))(var_a); /* to_path on <var_a:String>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__file__Path__stat]))(var15); /* stat on <var15:Path>*/
}
var_stat = var16;
if (var_stat == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var_stat->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_stat, ((val*)NULL)); /* != on <var_stat:nullable FileStat>*/
var18 = var19;
}
var_20 = var18;
if (var18){
{
var21 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_standard__file__FileStat__is_dir]))(var_stat); /* is_dir on <var_stat:nullable FileStat(FileStat)>*/
}
var17 = var21;
} else {
var17 = var_20;
}
if (var17){
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce23==NULL)) {
var24 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "look in directory ";
var28 = standard___standard__NativeString___to_s_with_length(var27, 18l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var26;
} else {
var24 = varonce23;
varonce23 = NULL;
}
((struct instance_standard__NativeArray*)var24)->values[1]=var_a;
{
var29 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
((void(*)(val* self, val* p0, long p1))(var22->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var22, var29, 2l); /* info on <var22:ToolContext>*/
}
{
var30 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__file__String__files]))(var_a); /* files on <var_a:String>*/
}
var_fs = var30;
var_31 = var_fs;
{
var32 = ((val*(*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:Array[String]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))(var_33->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:ArrayIterator[String]>*/
}
if (var34){
{
var35 = ((val*(*)(val* self))(var_33->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:ArrayIterator[String]>*/
}
var_f = var35;
{
var36 = ((val*(*)(val* self, val* p0))(var_a->class->vft[COLOR_standard__file__String___47d]))(var_a, var_f); /* / on <var_a:String>*/
}
var_af = var36;
{
var37 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__get_mgroup]))(self, var_af); /* get_mgroup on <self:ModelBuilder>*/
}
var_mgroup = var37;
if (var_mgroup == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
var39 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mgroup, ((val*)NULL)); /* != on <var_mgroup:nullable MGroup>*/
var38 = var39;
}
if (var38){
{
var40 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__parse_group]))(self, var_mgroup); /* parse_group on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var_mmodules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_mmodules, var40); /* add_all on <var_mmodules:ArraySet[MModule]>*/
}
goto BREAK_label41;
} else {
}
{
var42 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__identify_file]))(self, var_af); /* identify_file on <self:ModelBuilder>*/
}
var_mp = var42;
if (var_mp == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (0) {
var44 = ((short int(*)(val* self, val* p0))(var_mp->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mp, ((val*)NULL)); /* != on <var_mp:nullable ModulePath>*/
var43 = var44;
}
if (var43){
{
var45 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__load_module]))(self, var_af); /* load_module on <self:ModelBuilder>*/
}
var_nmodule = var45;
if (var_nmodule == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (0) {
var47 = ((short int(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nmodule, ((val*)NULL)); /* == on <var_nmodule:nullable AModule>*/
var46 = var47;
}
if (var46){
goto BREAK_label41;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__build_module_importation]))(self, var_nmodule); /* build_module_importation on <self:ModelBuilder>*/
}
{
var48 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:nullable AModule(AModule)>*/
}
var_mmodule = var48;
if (var_mmodule == NULL) {
var49 = 1; /* is null */
} else {
var49 = 0; /* arg is null but recv is not */
}
if (0) {
var50 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var49 = var50;
}
if (var49){
goto BREAK_label41;
} else {
}
{
((void(*)(val* self, val* p0))(var_mmodules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mmodules, var_mmodule); /* add on <var_mmodules:ArraySet[MModule]>*/
}
} else {
{
var51 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce52==NULL)) {
var53 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "ignore file ";
var57 = standard___standard__NativeString___to_s_with_length(var56, 12l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var53)->values[0]=var55;
} else {
var53 = varonce52;
varonce52 = NULL;
}
((struct instance_standard__NativeArray*)var53)->values[1]=var_af;
{
var58 = ((val*(*)(val* self))(var53->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
((void(*)(val* self, val* p0, long p1))(var51->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var51, var58, 2l); /* info on <var51:ToolContext>*/
}
}
BREAK_label41: (void)0;
{
((void(*)(val* self))(var_33->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:ArrayIterator[String]>*/
}
} else {
goto BREAK_label59;
}
}
BREAK_label59: (void)0;
{
((void(*)(val* self))(var_33->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:ArrayIterator[String]>*/
}
goto BREAK_label;
} else {
}
{
var60 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__load_module]))(self, var_a); /* load_module on <self:ModelBuilder>*/
}
var_nmodule61 = var60;
if (var_nmodule61 == NULL) {
var62 = 1; /* is null */
} else {
var62 = 0; /* arg is null but recv is not */
}
if (0) {
var63 = ((short int(*)(val* self, val* p0))(var_nmodule61->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nmodule61, ((val*)NULL)); /* == on <var_nmodule61:nullable AModule>*/
var62 = var63;
}
if (var62){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__build_module_importation]))(self, var_nmodule61); /* build_module_importation on <self:ModelBuilder>*/
}
{
var64 = ((val*(*)(val* self))(var_nmodule61->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule61); /* mmodule on <var_nmodule61:nullable AModule(AModule)>*/
}
var_mmodule65 = var64;
if (var_mmodule65 == NULL) {
var66 = 1; /* is null */
} else {
var66 = 0; /* arg is null but recv is not */
}
if (0) {
var67 = ((short int(*)(val* self, val* p0))(var_mmodule65->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule65, ((val*)NULL)); /* == on <var_mmodule65:nullable MModule>*/
var66 = var67;
}
if (var66){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_mmodules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mmodules, var_mmodule65); /* add on <var_mmodules:ArraySet[MModule]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:IndexedIterator[String]>*/
}
} else {
goto BREAK_label68;
}
}
BREAK_label68: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:IndexedIterator[String]>*/
}
{
var69 = ((long(*)(val* self))(self->class->vft[COLOR_standard__time__Object__get_time]))(self); /* get_time on <self:ModelBuilder>*/
}
var_time1 = var69;
{
var70 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce71==NULL)) {
var72 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "*** END PARSE: ";
var76 = standard___standard__NativeString___to_s_with_length(var75, 15l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var72)->values[0]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = " ***";
var80 = standard___standard__NativeString___to_s_with_length(var79, 4l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var72)->values[2]=var78;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var83 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var84 = var_time1 - var_time0;
var81 = var84;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var85 = standard__string___Int___Object__to_s(var81);
((struct instance_standard__NativeArray*)var72)->values[1]=var85;
{
var86 = ((val*(*)(val* self))(var72->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
((void(*)(val* self, val* p0, long p1))(var70->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var70, var86, 2l); /* info on <var70:ToolContext>*/
}
{
var87 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var88 = ((short int(*)(val* self))(var87->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(var87); /* check_errors on <var87:ToolContext>*/
}
{
var89 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var90 = ((val*(*)(val* self))(var89->class->vft[COLOR_nit__loader__ToolContext__opt_only_parse]))(var89); /* opt_only_parse on <var89:ToolContext>*/
}
{
var91 = ((val*(*)(val* self))(var90->class->vft[COLOR_opts__Option__value]))(var90); /* value on <var90:OptionBool>*/
}
var92 = (short int)((long)(var91)>>2);
if (var92){
{
var93 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "*** ONLY PARSE...";
var97 = standard___standard__NativeString___to_s_with_length(var96, 17l);
var95 = var97;
varonce94 = var95;
}
{
((void(*)(val* self, val* p0, long p1))(var93->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var93, var95, 1l); /* info on <var93:ToolContext>*/
}
var98 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var98,0l) on <var98:Sys> */
exit(0l);
RET_LABEL99:(void)0;
}
}
} else {
}
{
var100 = ((val*(*)(val* self))(var_mmodules->class->vft[COLOR_standard__array__Collection__to_a]))(var_mmodules); /* to_a on <var_mmodules:ArraySet[MModule]>*/
}
var = var100;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#paths for (self: ModelBuilder): Array[String] */
val* nit__loader___ModelBuilder___paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 190);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#paths= for (self: ModelBuilder, Array[String]) */
void nit__loader___ModelBuilder___paths_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModelBuilder___paths].val = p0; /* _paths on <self:ModelBuilder> */
RET_LABEL:;
}
/* method loader#ModelBuilder#search_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable ModulePath */
val* nit__loader___ModelBuilder___search_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable ModulePath */;
val* var_anode /* var anode: nullable ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var_c /* var c: nullable MGroup */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
val* var_dirname /* var dirname: nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
val* var_try_file /* var try_file: String */;
short int var21 /* : Bool */;
val* var22 /* : String */;
val* var23 /* : nullable ModulePath */;
val* var_res /* var res: nullable ModulePath */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var30 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
short int var43 /* : Bool */;
val* var44 /* : String */;
val* var45 /* : nullable ModulePath */;
val* var_res46 /* var res: nullable ModulePath */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : nullable MGroup */;
val* var50 /* : Array[String] */;
val* var_lookpaths /* var lookpaths: Array[String] */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : MProject */;
val* var54 /* : nullable MGroup */;
val* var55 /* : nullable String */;
val* var_dirname56 /* var dirname: nullable String */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
val* var63 /* : String */;
val* var64 /* : String */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var_ /* var : Bool */;
short int var68 /* : Bool */;
val* var69 /* : Array[nullable Object] */;
val* var70 /* : Location */;
val* var71 /* : nullable ModulePath */;
val* var_candidate /* var candidate: nullable ModulePath */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
val* var99 /* : String */;
val* var100 /* : String */;
val* var102 /* : NativeArray[String] */;
static val* varonce101;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
val* var119 /* : String */;
val* var120 /* : String */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
var_c = var_mgroup;
for(;;) {
if (var_c == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_c, ((val*)NULL)); /* != on <var_c:nullable MGroup>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__mproject__MGroup__filepath]))(var_c); /* filepath on <var_c:nullable MGroup(MGroup)>*/
}
var_dirname = var3;
if (var_dirname == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_dirname, ((val*)NULL)); /* == on <var_dirname:nullable String>*/
var4 = var5;
}
if (var4){
goto BREAK_label;
} else {
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = ".nit";
var8 = standard___standard__NativeString___to_s_with_length(var7, 4l);
var6 = var8;
varonce = var6;
}
{
var9 = ((short int(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__Text__has_suffix]))(var_dirname, var6); /* has_suffix on <var_dirname:nullable String(String)>*/
}
if (var9){
goto BREAK_label;
} else {
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "/";
var13 = standard___standard__NativeString___to_s_with_length(var12, 1l);
var11 = var13;
varonce10 = var11;
}
{
var14 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var11); /* + on <var_dirname:nullable String(String)>*/
}
{
var15 = ((val*(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__string__String___43d]))(var14, var_name); /* + on <var14:String>*/
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = ".nit";
var19 = standard___standard__NativeString___to_s_with_length(var18, 4l);
var17 = var19;
varonce16 = var17;
}
{
var20 = ((val*(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__string__String___43d]))(var15, var17); /* + on <var15:String>*/
}
var_try_file = var20;
{
var21 = ((short int(*)(val* self))(var_try_file->class->vft[COLOR_standard__file__String__file_exists]))(var_try_file); /* file_exists on <var_try_file:String>*/
}
if (var21){
{
var22 = ((val*(*)(val* self))(var_try_file->class->vft[COLOR_standard__file__String__simplify_path]))(var_try_file); /* simplify_path on <var_try_file:String>*/
}
{
var23 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__identify_file]))(self, var22); /* identify_file on <self:ModelBuilder>*/
}
var_res = var23;
if (var_res == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable ModulePath>*/
var24 = var25;
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 213);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
} else {
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "/";
var29 = standard___standard__NativeString___to_s_with_length(var28, 1l);
var27 = var29;
varonce26 = var27;
}
{
var30 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var27); /* + on <var_dirname:nullable String(String)>*/
}
{
var31 = ((val*(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__string__String___43d]))(var30, var_name); /* + on <var30:String>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "/";
var35 = standard___standard__NativeString___to_s_with_length(var34, 1l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((val*(*)(val* self, val* p0))(var31->class->vft[COLOR_standard__string__String___43d]))(var31, var33); /* + on <var31:String>*/
}
{
var37 = ((val*(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__string__String___43d]))(var36, var_name); /* + on <var36:String>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = ".nit";
var41 = standard___standard__NativeString___to_s_with_length(var40, 4l);
var39 = var41;
varonce38 = var39;
}
{
var42 = ((val*(*)(val* self, val* p0))(var37->class->vft[COLOR_standard__string__String___43d]))(var37, var39); /* + on <var37:String>*/
}
var_try_file = var42;
{
var43 = ((short int(*)(val* self))(var_try_file->class->vft[COLOR_standard__file__String__file_exists]))(var_try_file); /* file_exists on <var_try_file:String>*/
}
if (var43){
{
var44 = ((val*(*)(val* self))(var_try_file->class->vft[COLOR_standard__file__String__simplify_path]))(var_try_file); /* simplify_path on <var_try_file:String>*/
}
{
var45 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__identify_file]))(self, var44); /* identify_file on <self:ModelBuilder>*/
}
var_res46 = var45;
if (var_res46 == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
var48 = ((short int(*)(val* self, val* p0))(var_res46->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res46, ((val*)NULL)); /* != on <var_res46:nullable ModulePath>*/
var47 = var48;
}
if (unlikely(!var47)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 221);
fatal_exit(1);
}
var = var_res46;
goto RET_LABEL;
} else {
}
{
var49 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__mproject__MGroup__parent]))(var_c); /* parent on <var_c:nullable MGroup(MGroup)>*/
}
var_c = var49;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var50 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__paths]))(self); /* paths on <self:ModelBuilder>*/
}
var_lookpaths = var50;
if (var_mgroup == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
var52 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mgroup, ((val*)NULL)); /* != on <var_mgroup:nullable MGroup>*/
var51 = var52;
}
if (var51){
{
var53 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_mgroup); /* mproject on <var_mgroup:nullable MGroup(MGroup)>*/
}
{
var54 = ((val*(*)(val* self))(var53->class->vft[COLOR_nit__mproject__MProject__root]))(var53); /* root on <var53:MProject>*/
}
if (var54 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 234);
fatal_exit(1);
} else {
var55 = ((val*(*)(val* self))(var54->class->vft[COLOR_nit__mproject__MGroup__filepath]))(var54); /* filepath on <var54:nullable MGroup>*/
}
var_dirname56 = var55;
if (var_dirname56 == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
var58 = ((short int(*)(val* self, val* p0))(var_dirname56->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_dirname56, ((val*)NULL)); /* != on <var_dirname56:nullable String>*/
var57 = var58;
}
if (var57){
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "..";
var62 = standard___standard__NativeString___to_s_with_length(var61, 2l);
var60 = var62;
varonce59 = var60;
}
{
var63 = ((val*(*)(val* self, val* p0))(var_dirname56->class->vft[COLOR_standard__file__String__join_path]))(var_dirname56, var60); /* join_path on <var_dirname56:nullable String(String)>*/
}
{
var64 = ((val*(*)(val* self))(var63->class->vft[COLOR_standard__file__String__simplify_path]))(var63); /* simplify_path on <var63:String>*/
}
var_dirname56 = var64;
{
var66 = ((short int(*)(val* self, val* p0))(var_lookpaths->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_lookpaths, var_dirname56); /* has on <var_lookpaths:Array[String]>*/
}
var67 = !var66;
var_ = var67;
if (var67){
{
var68 = ((short int(*)(val* self))(var_dirname56->class->vft[COLOR_standard__file__String__file_exists]))(var_dirname56); /* file_exists on <var_dirname56:nullable String(String)>*/
}
var65 = var68;
} else {
var65 = var_;
}
if (var65){
{
var69 = ((val*(*)(val* self))(var_lookpaths->class->vft[COLOR_standard__array__Collection__to_a]))(var_lookpaths); /* to_a on <var_lookpaths:Array[String]>*/
}
var_lookpaths = var69;
{
((void(*)(val* self, val* p0))(var_lookpaths->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_lookpaths, var_dirname56); /* add on <var_lookpaths:Array[String]>*/
}
} else {
}
} else {
}
} else {
}
if (var_anode == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 244);
fatal_exit(1);
} else {
var70 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_anode); /* hot_location on <var_anode:nullable ANode>*/
}
{
var71 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__loader__ModelBuilder__search_module_in_paths]))(self, var70, var_name, var_lookpaths); /* search_module_in_paths on <self:ModelBuilder>*/
}
var_candidate = var71;
if (var_candidate == NULL) {
var72 = 1; /* is null */
} else {
var72 = 0; /* arg is null but recv is not */
}
if (0) {
var73 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable ModulePath>*/
var72 = var73;
}
if (var72){
if (var_mgroup == NULL) {
var74 = 0; /* is null */
} else {
var74 = 1; /* arg is null and recv is not */
}
if (0) {
var75 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mgroup, ((val*)NULL)); /* != on <var_mgroup:nullable MGroup>*/
var74 = var75;
}
if (var74){
if (unlikely(varonce76==NULL)) {
var77 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "Error: cannot find module `";
var81 = standard___standard__NativeString___to_s_with_length(var80, 27l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var77)->values[0]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "` from `";
var85 = standard___standard__NativeString___to_s_with_length(var84, 8l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var77)->values[2]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "`. Tried: ";
var89 = standard___standard__NativeString___to_s_with_length(var88, 10l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var77)->values[4]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = ".";
var93 = standard___standard__NativeString___to_s_with_length(var92, 1l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var77)->values[6]=var91;
} else {
var77 = varonce76;
varonce76 = NULL;
}
((struct instance_standard__NativeArray*)var77)->values[1]=var_name;
{
var94 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mgroup); /* name on <var_mgroup:nullable MGroup(MGroup)>*/
}
((struct instance_standard__NativeArray*)var77)->values[3]=var94;
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = ", ";
var98 = standard___standard__NativeString___to_s_with_length(var97, 2l);
var96 = var98;
varonce95 = var96;
}
{
var99 = ((val*(*)(val* self, val* p0))(var_lookpaths->class->vft[COLOR_standard__string__Collection__join]))(var_lookpaths, var96); /* join on <var_lookpaths:Array[String]>*/
}
((struct instance_standard__NativeArray*)var77)->values[5]=var99;
{
var100 = ((val*(*)(val* self))(var77->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_anode, var100); /* error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce101==NULL)) {
var102 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "Error: cannot find module `";
var106 = standard___standard__NativeString___to_s_with_length(var105, 27l);
var104 = var106;
varonce103 = var104;
}
((struct instance_standard__NativeArray*)var102)->values[0]=var104;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "`. Tried: ";
var110 = standard___standard__NativeString___to_s_with_length(var109, 10l);
var108 = var110;
varonce107 = var108;
}
((struct instance_standard__NativeArray*)var102)->values[2]=var108;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = ".";
var114 = standard___standard__NativeString___to_s_with_length(var113, 1l);
var112 = var114;
varonce111 = var112;
}
((struct instance_standard__NativeArray*)var102)->values[4]=var112;
} else {
var102 = varonce101;
varonce101 = NULL;
}
((struct instance_standard__NativeArray*)var102)->values[1]=var_name;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = ", ";
var118 = standard___standard__NativeString___to_s_with_length(var117, 2l);
var116 = var118;
varonce115 = var116;
}
{
var119 = ((val*(*)(val* self, val* p0))(var_lookpaths->class->vft[COLOR_standard__string__Collection__join]))(var_lookpaths, var116); /* join on <var_lookpaths:Array[String]>*/
}
((struct instance_standard__NativeArray*)var102)->values[3]=var119;
{
var120 = ((val*(*)(val* self))(var102->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var102); /* native_to_s on <var102:NativeArray[String]>*/
}
varonce101 = var102;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_anode, var120); /* error on <self:ModelBuilder>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_candidate;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#get_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable MModule */
val* nit__loader___ModelBuilder___get_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_anode /* var anode: nullable ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var1 /* : nullable ModulePath */;
val* var_path /* var path: nullable ModulePath */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : nullable AModule */;
val* var_res /* var res: nullable AModule */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MModule */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
{
var1 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__loader__ModelBuilder__search_mmodule_by_name]))(self, var_anode, var_mgroup, var_name); /* search_mmodule_by_name on <self:ModelBuilder>*/
}
var_path = var1;
if (var_path == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_path->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_path, ((val*)NULL)); /* == on <var_path:nullable ModulePath>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_path->class->vft[COLOR_nit__loader__ModulePath__filepath]))(var_path); /* filepath on <var_path:nullable ModulePath(ModulePath)>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__load_module]))(self, var4); /* load_module on <self:ModelBuilder>*/
}
var_res = var5;
if (var_res == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable AModule>*/
var6 = var7;
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__build_module_importation]))(self, var_res); /* build_module_importation on <self:ModelBuilder>*/
}
{
var8 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_res); /* mmodule on <var_res:nullable AModule(AModule)>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#search_module_in_paths for (self: ModelBuilder, nullable Location, String, Collection[String]): nullable ModulePath */
val* nit__loader___ModelBuilder___search_module_in_paths(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable ModulePath */;
val* var_location /* var location: nullable Location */;
val* var_name /* var name: String */;
val* var_lookpaths /* var lookpaths: Collection[String] */;
val* var_candidate /* var candidate: nullable String */;
val* var_ /* var : Collection[String] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[String] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_dirname /* var dirname: String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var_try_file /* var try_file: String */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : String */;
val* var_abs_candidate /* var abs_candidate: String */;
val* var21 /* : String */;
val* var_abs_try_file /* var abs_try_file: String */;
short int var22 /* : Bool */;
val* var23 /* : ToolContext */;
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
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : Message */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
val* var48 /* : String */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
val* var54 /* : String */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
val* var60 /* : String */;
val* var61 /* : String */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : String */;
val* var_abs_candidate67 /* var abs_candidate: String */;
val* var68 /* : String */;
val* var_abs_try_file69 /* var abs_try_file: String */;
short int var70 /* : Bool */;
val* var71 /* : ToolContext */;
val* var73 /* : NativeArray[String] */;
static val* varonce72;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
val* var90 /* : String */;
val* var91 /* : Message */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : nullable ModulePath */;
var_location = p0;
var_name = p1;
var_lookpaths = p2;
var_candidate = ((val*)NULL);
var_ = var_lookpaths;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[String]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[String]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[String]>*/
}
var_dirname = var4;
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "/";
var7 = standard___standard__NativeString___to_s_with_length(var6, 1l);
var5 = var7;
varonce = var5;
}
{
var8 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var5); /* + on <var_dirname:String>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__string__String___43d]))(var8, var_name); /* + on <var8:String>*/
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ".nit";
var13 = standard___standard__NativeString___to_s_with_length(var12, 4l);
var11 = var13;
varonce10 = var11;
}
{
var14 = ((val*(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__string__String___43d]))(var9, var11); /* + on <var9:String>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__file__String__simplify_path]))(var14); /* simplify_path on <var14:String>*/
}
var_try_file = var15;
{
var16 = ((short int(*)(val* self))(var_try_file->class->vft[COLOR_standard__file__String__file_exists]))(var_try_file); /* file_exists on <var_try_file:String>*/
}
if (var16){
if (var_candidate == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable String>*/
var17 = var18;
}
if (var17){
var_candidate = var_try_file;
} else {
{
var19 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_candidate, var_try_file); /* != on <var_candidate:nullable String(String)>*/
}
if (var19){
{
var20 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__module_absolute_path]))(self, var_candidate); /* module_absolute_path on <self:ModelBuilder>*/
}
var_abs_candidate = var20;
{
var21 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__module_absolute_path]))(self, var_try_file); /* module_absolute_path on <self:ModelBuilder>*/
}
var_abs_try_file = var21;
{
var22 = ((short int(*)(val* self, val* p0))(var_abs_candidate->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_abs_candidate, var_abs_try_file); /* != on <var_abs_candidate:String>*/
}
if (var22){
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Error: conflicting module file for `";
var29 = standard___standard__NativeString___to_s_with_length(var28, 36l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "`: `";
var33 = standard___standard__NativeString___to_s_with_length(var32, 4l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[2]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "` `";
var37 = standard___standard__NativeString___to_s_with_length(var36, 3l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var25)->values[4]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`";
var41 = standard___standard__NativeString___to_s_with_length(var40, 1l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var25)->values[6]=var39;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var_name;
((struct instance_standard__NativeArray*)var25)->values[3]=var_candidate;
((struct instance_standard__NativeArray*)var25)->values[5]=var_try_file;
{
var42 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
var43 = ((val*(*)(val* self, val* p0, val* p1))(var23->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var23, var_location, var42); /* error on <var23:ToolContext>*/
}
} else {
}
} else {
}
}
} else {
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "/";
var47 = standard___standard__NativeString___to_s_with_length(var46, 1l);
var45 = var47;
varonce44 = var45;
}
{
var48 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var45); /* + on <var_dirname:String>*/
}
{
var49 = ((val*(*)(val* self, val* p0))(var48->class->vft[COLOR_standard__string__String___43d]))(var48, var_name); /* + on <var48:String>*/
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "/";
var53 = standard___standard__NativeString___to_s_with_length(var52, 1l);
var51 = var53;
varonce50 = var51;
}
{
var54 = ((val*(*)(val* self, val* p0))(var49->class->vft[COLOR_standard__string__String___43d]))(var49, var51); /* + on <var49:String>*/
}
{
var55 = ((val*(*)(val* self, val* p0))(var54->class->vft[COLOR_standard__string__String___43d]))(var54, var_name); /* + on <var54:String>*/
}
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = ".nit";
var59 = standard___standard__NativeString___to_s_with_length(var58, 4l);
var57 = var59;
varonce56 = var57;
}
{
var60 = ((val*(*)(val* self, val* p0))(var55->class->vft[COLOR_standard__string__String___43d]))(var55, var57); /* + on <var55:String>*/
}
{
var61 = ((val*(*)(val* self))(var60->class->vft[COLOR_standard__file__String__simplify_path]))(var60); /* simplify_path on <var60:String>*/
}
var_try_file = var61;
{
var62 = ((short int(*)(val* self))(var_try_file->class->vft[COLOR_standard__file__String__file_exists]))(var_try_file); /* file_exists on <var_try_file:String>*/
}
if (var62){
if (var_candidate == NULL) {
var63 = 1; /* is null */
} else {
var63 = 0; /* arg is null but recv is not */
}
if (0) {
var64 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable String>*/
var63 = var64;
}
if (var63){
var_candidate = var_try_file;
} else {
{
var65 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_candidate, var_try_file); /* != on <var_candidate:nullable String(String)>*/
}
if (var65){
{
var66 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__module_absolute_path]))(self, var_candidate); /* module_absolute_path on <self:ModelBuilder>*/
}
var_abs_candidate67 = var66;
{
var68 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__module_absolute_path]))(self, var_try_file); /* module_absolute_path on <self:ModelBuilder>*/
}
var_abs_try_file69 = var68;
{
var70 = ((short int(*)(val* self, val* p0))(var_abs_candidate67->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_abs_candidate67, var_abs_try_file69); /* != on <var_abs_candidate67:String>*/
}
if (var70){
{
var71 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce72==NULL)) {
var73 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "Error: conflicting module file for `";
var77 = standard___standard__NativeString___to_s_with_length(var76, 36l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var73)->values[0]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "`: `";
var81 = standard___standard__NativeString___to_s_with_length(var80, 4l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var73)->values[2]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "` `";
var85 = standard___standard__NativeString___to_s_with_length(var84, 3l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var73)->values[4]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "`";
var89 = standard___standard__NativeString___to_s_with_length(var88, 1l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var73)->values[6]=var87;
} else {
var73 = varonce72;
varonce72 = NULL;
}
((struct instance_standard__NativeArray*)var73)->values[1]=var_name;
((struct instance_standard__NativeArray*)var73)->values[3]=var_candidate;
((struct instance_standard__NativeArray*)var73)->values[5]=var_try_file;
{
var90 = ((val*(*)(val* self))(var73->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce72 = var73;
{
var91 = ((val*(*)(val* self, val* p0, val* p1))(var71->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var71, var_location, var90); /* error on <var71:ToolContext>*/
}
} else {
}
} else {
}
}
} else {
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[String]>*/
}
if (var_candidate == NULL) {
var92 = 1; /* is null */
} else {
var92 = 0; /* arg is null but recv is not */
}
if (0) {
var93 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable String>*/
var92 = var93;
}
if (var92){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var94 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__identify_file]))(self, var_candidate); /* identify_file on <self:ModelBuilder>*/
}
var = var94;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identified_files_by_path for (self: ModelBuilder): HashMap[String, nullable ModulePath] */
val* nit__loader___ModelBuilder___identified_files_by_path(val* self) {
val* var /* : HashMap[String, nullable ModulePath] */;
val* var1 /* : HashMap[String, nullable ModulePath] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val; /* _identified_files_by_path on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 309);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identified_files_by_path= for (self: ModelBuilder, HashMap[String, nullable ModulePath]) */
void nit__loader___ModelBuilder___identified_files_by_path_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val = p0; /* _identified_files_by_path on <self:ModelBuilder> */
RET_LABEL:;
}
/* method loader#ModelBuilder#identified_files for (self: ModelBuilder): Array[ModulePath] */
val* nit__loader___ModelBuilder___identified_files(val* self) {
val* var /* : Array[ModulePath] */;
val* var1 /* : Array[ModulePath] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files].val; /* _identified_files on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 312);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identified_files= for (self: ModelBuilder, Array[ModulePath]) */
void nit__loader___ModelBuilder___identified_files_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModelBuilder___identified_files].val = p0; /* _identified_files on <self:ModelBuilder> */
RET_LABEL:;
}
/* method loader#ModelBuilder#identify_file for (self: ModelBuilder, String): nullable ModulePath */
val* nit__loader___ModelBuilder___identify_file(val* self, val* p0) {
val* var /* : nullable ModulePath */;
val* var_path /* var path: String */;
val* var1 /* : nullable String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
short int var12 /* : Bool */;
val* var13 /* : Array[String] */;
val* var14 /* : nullable ModulePath */;
val* var_res /* var res: nullable ModulePath */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_candidate /* var candidate: nullable Object */;
short int var17 /* : Bool */;
val* var18 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var_owner_path /* var owner_path: String */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var_pn /* var pn: String */;
val* var37 /* : String */;
val* var_rp /* var rp: String */;
val* var38 /* : HashMap[String, nullable ModulePath] */;
short int var39 /* : Bool */;
val* var40 /* : HashMap[String, nullable ModulePath] */;
val* var41 /* : nullable Object */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var_mgrouppath /* var mgrouppath: String */;
val* var48 /* : nullable MGroup */;
val* var_mgroup49 /* var mgroup: nullable MGroup */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : MProject */;
val* var53 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var54 /* : MGroup */;
val* var55 /* : ToolContext */;
val* var57 /* : NativeArray[String] */;
static val* varonce56;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
val* var66 /* : String */;
val* var67 /* : ModulePath */;
val* var_res68 /* var res: ModulePath */;
val* var69 /* : Array[ModulePath] */;
val* var70 /* : HashMap[String, nullable ModulePath] */;
val* var71 /* : Array[ModulePath] */;
var_path = p0;
{
var1 = ((val*(*)(val* self))(var_path->class->vft[COLOR_standard__file__String__file_extension]))(var_path); /* file_extension on <var_path:String>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "nit";
var4 = standard___standard__NativeString___to_s_with_length(var3, 3l);
var2 = var4;
varonce = var2;
}
if (var1 == NULL) {
var5 = 1; /* <var2:String> cannot be null */
} else {
var6 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, var2); /* != on <var1:nullable String>*/
var5 = var6;
}
if (var5){
{
var7 = ((val*(*)(val* self))(var_path->class->vft[COLOR_standard__file__String__dirname]))(var_path); /* dirname on <var_path:String>*/
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "";
var11 = standard___standard__NativeString___to_s_with_length(var10, 0l);
var9 = var11;
varonce8 = var9;
}
{
var12 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var7, var9); /* == on <var7:String>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__paths]))(self); /* paths on <self:ModelBuilder>*/
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__loader__ModelBuilder__search_module_in_paths]))(self, ((val*)NULL), var_path, var13); /* search_module_in_paths on <self:ModelBuilder>*/
}
var_res = var14;
if (var_res == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable ModulePath>*/
var15 = var16;
}
if (var15){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var_candidate = ((val*)NULL);
{
var17 = ((short int(*)(val* self))(var_path->class->vft[COLOR_standard__file__String__file_exists]))(var_path); /* file_exists on <var_path:String>*/
}
if (var17){
{
var18 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__get_mgroup]))(self, var_path); /* get_mgroup on <self:ModelBuilder>*/
}
var_mgroup = var18;
if (var_mgroup == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mgroup, ((val*)NULL)); /* != on <var_mgroup:nullable MGroup>*/
var19 = var20;
}
if (var19){
{
var21 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__filepath]))(var_mgroup); /* filepath on <var_mgroup:nullable MGroup(MGroup)>*/
}
{
var22 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mgroup); /* name on <var_mgroup:nullable MGroup(MGroup)>*/
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ".nit";
var26 = standard___standard__NativeString___to_s_with_length(var25, 4l);
var24 = var26;
varonce23 = var24;
}
{
var27 = ((val*(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__string__String___43d]))(var22, var24); /* + on <var22:String>*/
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 335);
fatal_exit(1);
} else {
var28 = ((val*(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__file__String__join_path]))(var21, var27); /* join_path on <var21:nullable String>*/
}
var_owner_path = var28;
{
var29 = ((short int(*)(val* self))(var_owner_path->class->vft[COLOR_standard__file__String__file_exists]))(var_owner_path); /* file_exists on <var_owner_path:String>*/
}
if (var29){
var_candidate = var_owner_path;
} else {
}
} else {
}
} else {
}
if (var_candidate == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
var31 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable Object(nullable String)>*/
var30 = var31;
}
if (var30){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_path = var_candidate;
} else {
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ".nit";
var35 = standard___standard__NativeString___to_s_with_length(var34, 4l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_standard__file__String__basename]))(var_path, var33); /* basename on <var_path:String>*/
}
var_pn = var36;
{
var37 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__module_absolute_path]))(self, var_path); /* module_absolute_path on <self:ModelBuilder>*/
}
var_rp = var37;
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__identified_files_by_path]))(self); /* identified_files_by_path on <self:ModelBuilder>*/
}
{
var39 = ((short int(*)(val* self, val* p0))(var38->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var38, var_rp); /* has_key on <var38:HashMap[String, nullable ModulePath]>*/
}
if (var39){
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__identified_files_by_path]))(self); /* identified_files_by_path on <self:ModelBuilder>*/
}
{
var41 = ((val*(*)(val* self, val* p0))(var40->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var40, var_rp); /* [] on <var40:HashMap[String, nullable ModulePath]>*/
}
var = var41;
goto RET_LABEL;
} else {
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "..";
var45 = standard___standard__NativeString___to_s_with_length(var44, 2l);
var43 = var45;
varonce42 = var43;
}
{
var46 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_standard__file__String__join_path]))(var_path, var43); /* join_path on <var_path:String>*/
}
{
var47 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__file__String__simplify_path]))(var46); /* simplify_path on <var46:String>*/
}
var_mgrouppath = var47;
{
var48 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__get_mgroup]))(self, var_mgrouppath); /* get_mgroup on <self:ModelBuilder>*/
}
var_mgroup49 = var48;
if (var_mgroup49 == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
var51 = ((short int(*)(val* self, val* p0))(var_mgroup49->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup49, ((val*)NULL)); /* == on <var_mgroup49:nullable MGroup>*/
var50 = var51;
}
if (var50){
var52 = NEW_nit__MProject(&type_nit__MProject);
{
var53 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var52->class->vft[COLOR_nit__mproject__MProject__name_61d]))(var52, var_pn); /* name= on <var52:MProject>*/
}
{
((void(*)(val* self, val* p0))(var52->class->vft[COLOR_nit__mproject__MProject__model_61d]))(var52, var53); /* model= on <var52:MProject>*/
}
{
((void(*)(val* self))(var52->class->vft[COLOR_standard__kernel__Object__init]))(var52); /* init on <var52:MProject>*/
}
var_mproject = var52;
var54 = NEW_nit__MGroup(&type_nit__MGroup);
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nit__mproject__MGroup__name_61d]))(var54, var_pn); /* name= on <var54:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nit__mproject__MGroup__mproject_61d]))(var54, var_mproject); /* mproject= on <var54:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nit__mproject__MGroup__parent_61d]))(var54, ((val*)NULL)); /* parent= on <var54:MGroup>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_standard__kernel__Object__init]))(var54); /* init on <var54:MGroup>*/
}
var_mgroup49 = var54;
{
((void(*)(val* self, val* p0))(var_mgroup49->class->vft[COLOR_nit__mproject__MGroup__filepath_61d]))(var_mgroup49, var_path); /* filepath= on <var_mgroup49:nullable MGroup(MGroup)>*/
}
{
((void(*)(val* self, val* p0))(var_mproject->class->vft[COLOR_nit__mproject__MProject__root_61d]))(var_mproject, var_mgroup49); /* root= on <var_mproject:MProject>*/
}
{
var55 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce56==NULL)) {
var57 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "found project `";
var61 = standard___standard__NativeString___to_s_with_length(var60, 15l);
var59 = var61;
varonce58 = var59;
}
((struct instance_standard__NativeArray*)var57)->values[0]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "` at ";
var65 = standard___standard__NativeString___to_s_with_length(var64, 5l);
var63 = var65;
varonce62 = var63;
}
((struct instance_standard__NativeArray*)var57)->values[2]=var63;
} else {
var57 = varonce56;
varonce56 = NULL;
}
((struct instance_standard__NativeArray*)var57)->values[1]=var_pn;
((struct instance_standard__NativeArray*)var57)->values[3]=var_path;
{
var66 = ((val*(*)(val* self))(var57->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
{
((void(*)(val* self, val* p0, long p1))(var55->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var55, var66, 2l); /* info on <var55:ToolContext>*/
}
} else {
}
var67 = NEW_nit__ModulePath(&type_nit__ModulePath);
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_nit__loader__ModulePath__name_61d]))(var67, var_pn); /* name= on <var67:ModulePath>*/
}
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_nit__loader__ModulePath__filepath_61d]))(var67, var_path); /* filepath= on <var67:ModulePath>*/
}
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_nit__loader__ModulePath__mgroup_61d]))(var67, var_mgroup49); /* mgroup= on <var67:ModulePath>*/
}
{
((void(*)(val* self))(var67->class->vft[COLOR_standard__kernel__Object__init]))(var67); /* init on <var67:ModulePath>*/
}
var_res68 = var67;
{
var69 = ((val*(*)(val* self))(var_mgroup49->class->vft[COLOR_nit__loader__MGroup__module_paths]))(var_mgroup49); /* module_paths on <var_mgroup49:nullable MGroup(MGroup)>*/
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var69, var_res68); /* add on <var69:Array[ModulePath]>*/
}
{
var70 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__identified_files_by_path]))(self); /* identified_files_by_path on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var70->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var70, var_rp, var_res68); /* []= on <var70:HashMap[String, nullable ModulePath]>*/
}
{
var71 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__identified_files]))(self); /* identified_files on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var71->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var71, var_res68); /* add on <var71:Array[ModulePath]>*/
}
var = var_res68;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mgroups for (self: ModelBuilder): HashMap[String, nullable MGroup] */
val* nit__loader___ModelBuilder___mgroups(val* self) {
val* var /* : HashMap[String, nullable MGroup] */;
val* var1 /* : HashMap[String, nullable MGroup] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 372);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mgroups= for (self: ModelBuilder, HashMap[String, nullable MGroup]) */
void nit__loader___ModelBuilder___mgroups_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val = p0; /* _mgroups on <self:ModelBuilder> */
RET_LABEL:;
}
/* method loader#ModelBuilder#get_mgroup for (self: ModelBuilder, String): nullable MGroup */
val* nit__loader___ModelBuilder___get_mgroup(val* self, val* p0) {
val* var /* : nullable MGroup */;
val* var_dirpath /* var dirpath: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : ArrayIterator[String] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_p /* var p: String */;
val* var8 /* : String */;
val* var_try /* var try: String */;
short int var9 /* : Bool */;
val* var10 /* : String */;
val* var_rdp /* var rdp: String */;
val* var11 /* : HashMap[String, nullable MGroup] */;
short int var12 /* : Bool */;
val* var13 /* : HashMap[String, nullable MGroup] */;
val* var14 /* : nullable Object */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var_pn /* var pn: String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var_mp /* var mp: String */;
val* var_dirpath2 /* var dirpath2: String */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
short int var32 /* : Bool */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var_parentpath /* var parentpath: String */;
val* var52 /* : nullable MGroup */;
val* var_parent /* var parent: nullable MGroup */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : MProject */;
val* var56 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var57 /* : MGroup */;
val* var_mgroup /* var mgroup: nullable Object */;
val* var58 /* : ToolContext */;
val* var60 /* : NativeArray[String] */;
static val* varonce59;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : MGroup */;
val* var72 /* : MProject */;
val* var73 /* : ToolContext */;
val* var75 /* : NativeArray[String] */;
static val* varonce74;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var84 /* : String */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
val* var90 /* : String */;
val* var_readme /* var readme: String */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
val* var104 /* : String */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
val* var111 /* : String */;
short int var112 /* : Bool */;
val* var113 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
val* var114 /* : HashMap[String, nullable MGroup] */;
val* var115 /* : String */;
val* var116 /* : HashMap[String, nullable MGroup] */;
val* var117 /* : String */;
var_dirpath = p0;
{
var1 = ((short int(*)(val* self))(var_dirpath->class->vft[COLOR_standard__file__String__file_exists]))(var_dirpath); /* file_exists on <var_dirpath:String>*/
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__paths]))(self); /* paths on <self:ModelBuilder>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:ArrayIterator[String]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:ArrayIterator[String]>*/
}
var_p = var7;
{
var8 = ((val*(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__file__String___47d]))(var_p, var_dirpath); /* / on <var_p:String>*/
}
var_try = var8;
{
var9 = ((short int(*)(val* self))(var_try->class->vft[COLOR_standard__file__String__file_exists]))(var_try); /* file_exists on <var_try:String>*/
}
if (var9){
var_dirpath = var_try;
goto BREAK_;
} else {
}
{
((void(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_5->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:ArrayIterator[String]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
BREAK_: (void)0;
} else {
}
{
var10 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__module_absolute_path]))(self, var_dirpath); /* module_absolute_path on <self:ModelBuilder>*/
}
var_rdp = var10;
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__mgroups]))(self); /* mgroups on <self:ModelBuilder>*/
}
{
var12 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var11, var_rdp); /* has_key on <var11:HashMap[String, nullable MGroup]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__mgroups]))(self); /* mgroups on <self:ModelBuilder>*/
}
{
var14 = ((val*(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var13, var_rdp); /* [] on <var13:HashMap[String, nullable MGroup]>*/
}
var = var14;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = ".nit";
var17 = standard___standard__NativeString___to_s_with_length(var16, 4l);
var15 = var17;
varonce = var15;
}
{
var18 = ((val*(*)(val* self, val* p0))(var_rdp->class->vft[COLOR_standard__file__String__basename]))(var_rdp, var15); /* basename on <var_rdp:String>*/
}
var_pn = var18;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ".nit";
var22 = standard___standard__NativeString___to_s_with_length(var21, 4l);
var20 = var22;
varonce19 = var20;
}
{
var23 = ((val*(*)(val* self, val* p0))(var_pn->class->vft[COLOR_standard__string__String___43d]))(var_pn, var20); /* + on <var_pn:String>*/
}
{
var24 = ((val*(*)(val* self, val* p0))(var_dirpath->class->vft[COLOR_standard__file__String__join_path]))(var_dirpath, var23); /* join_path on <var_dirpath:String>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__file__String__simplify_path]))(var24); /* simplify_path on <var24:String>*/
}
var_mp = var25;
var_dirpath2 = var_dirpath;
{
var26 = ((short int(*)(val* self))(var_mp->class->vft[COLOR_standard__file__String__file_exists]))(var_mp); /* file_exists on <var_mp:String>*/
}
var27 = !var26;
if (var27){
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "src";
var31 = standard___standard__NativeString___to_s_with_length(var30, 3l);
var29 = var31;
varonce28 = var29;
}
{
var32 = ((short int(*)(val* self, val* p0))(var_pn->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pn, var29); /* == on <var_pn:String>*/
}
if (var32){
{
var33 = ((val*(*)(val* self))(var_rdp->class->vft[COLOR_standard__file__String__dirname]))(var_rdp); /* dirname on <var_rdp:String>*/
}
var_dirpath2 = var33;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "";
var37 = standard___standard__NativeString___to_s_with_length(var36, 0l);
var35 = var37;
varonce34 = var35;
}
{
var38 = ((val*(*)(val* self, val* p0))(var_dirpath2->class->vft[COLOR_standard__file__String__basename]))(var_dirpath2, var35); /* basename on <var_dirpath2:String>*/
}
var_pn = var38;
} else {
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "src";
var42 = standard___standard__NativeString___to_s_with_length(var41, 3l);
var40 = var42;
varonce39 = var40;
}
{
var43 = ((val*(*)(val* self, val* p0))(var_dirpath2->class->vft[COLOR_standard__file__String___47d]))(var_dirpath2, var40); /* / on <var_dirpath2:String>*/
}
var_dirpath = var43;
{
var44 = ((short int(*)(val* self))(var_dirpath->class->vft[COLOR_standard__file__String__file_exists]))(var_dirpath); /* file_exists on <var_dirpath:String>*/
}
var45 = !var44;
if (var45){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
}
} else {
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "..";
var49 = standard___standard__NativeString___to_s_with_length(var48, 2l);
var47 = var49;
varonce46 = var47;
}
{
var50 = ((val*(*)(val* self, val* p0))(var_dirpath2->class->vft[COLOR_standard__file__String__join_path]))(var_dirpath2, var47); /* join_path on <var_dirpath2:String>*/
}
{
var51 = ((val*(*)(val* self))(var50->class->vft[COLOR_standard__file__String__simplify_path]))(var50); /* simplify_path on <var50:String>*/
}
var_parentpath = var51;
{
var52 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__get_mgroup]))(self, var_parentpath); /* get_mgroup on <self:ModelBuilder>*/
}
var_parent = var52;
if (var_parent == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
var54 = ((short int(*)(val* self, val* p0))(var_parent->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_parent, ((val*)NULL)); /* == on <var_parent:nullable MGroup>*/
var53 = var54;
}
if (var53){
var55 = NEW_nit__MProject(&type_nit__MProject);
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nit__mproject__MProject__name_61d]))(var55, var_pn); /* name= on <var55:MProject>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nit__mproject__MProject__model_61d]))(var55, var56); /* model= on <var55:MProject>*/
}
{
((void(*)(val* self))(var55->class->vft[COLOR_standard__kernel__Object__init]))(var55); /* init on <var55:MProject>*/
}
var_mproject = var55;
var57 = NEW_nit__MGroup(&type_nit__MGroup);
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nit__mproject__MGroup__name_61d]))(var57, var_pn); /* name= on <var57:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nit__mproject__MGroup__mproject_61d]))(var57, var_mproject); /* mproject= on <var57:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nit__mproject__MGroup__parent_61d]))(var57, ((val*)NULL)); /* parent= on <var57:MGroup>*/
}
{
((void(*)(val* self))(var57->class->vft[COLOR_standard__kernel__Object__init]))(var57); /* init on <var57:MGroup>*/
}
var_mgroup = var57;
{
((void(*)(val* self, val* p0))(var_mproject->class->vft[COLOR_nit__mproject__MProject__root_61d]))(var_mproject, var_mgroup); /* root= on <var_mproject:MProject>*/
}
{
var58 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce59==NULL)) {
var60 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "found project `";
var64 = standard___standard__NativeString___to_s_with_length(var63, 15l);
var62 = var64;
varonce61 = var62;
}
((struct instance_standard__NativeArray*)var60)->values[0]=var62;
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "` at ";
var68 = standard___standard__NativeString___to_s_with_length(var67, 5l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var60)->values[2]=var66;
} else {
var60 = varonce59;
varonce59 = NULL;
}
{
var69 = ((val*(*)(val* self))(var_mproject->class->vft[COLOR_standard__string__Object__to_s]))(var_mproject); /* to_s on <var_mproject:MProject>*/
}
((struct instance_standard__NativeArray*)var60)->values[1]=var69;
((struct instance_standard__NativeArray*)var60)->values[3]=var_dirpath;
{
var70 = ((val*(*)(val* self))(var60->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var60); /* native_to_s on <var60:NativeArray[String]>*/
}
varonce59 = var60;
{
((void(*)(val* self, val* p0, long p1))(var58->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var58, var70, 2l); /* info on <var58:ToolContext>*/
}
} else {
var71 = NEW_nit__MGroup(&type_nit__MGroup);
{
var72 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_parent); /* mproject on <var_parent:nullable MGroup(MGroup)>*/
}
{
((void(*)(val* self, val* p0))(var71->class->vft[COLOR_nit__mproject__MGroup__name_61d]))(var71, var_pn); /* name= on <var71:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var71->class->vft[COLOR_nit__mproject__MGroup__mproject_61d]))(var71, var72); /* mproject= on <var71:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var71->class->vft[COLOR_nit__mproject__MGroup__parent_61d]))(var71, var_parent); /* parent= on <var71:MGroup>*/
}
{
((void(*)(val* self))(var71->class->vft[COLOR_standard__kernel__Object__init]))(var71); /* init on <var71:MGroup>*/
}
var_mgroup = var71;
{
var73 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce74==NULL)) {
var75 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "found sub group `";
var79 = standard___standard__NativeString___to_s_with_length(var78, 17l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "` at ";
var83 = standard___standard__NativeString___to_s_with_length(var82, 5l);
var81 = var83;
varonce80 = var81;
}
((struct instance_standard__NativeArray*)var75)->values[2]=var81;
} else {
var75 = varonce74;
varonce74 = NULL;
}
{
var84 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mgroup); /* full_name on <var_mgroup:nullable Object(MGroup)>*/
}
((struct instance_standard__NativeArray*)var75)->values[1]=var84;
((struct instance_standard__NativeArray*)var75)->values[3]=var_dirpath;
{
var85 = ((val*(*)(val* self))(var75->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
{
((void(*)(val* self, val* p0, long p1))(var73->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var73, var85, 2l); /* info on <var73:ToolContext>*/
}
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "README.md";
var89 = standard___standard__NativeString___to_s_with_length(var88, 9l);
var87 = var89;
varonce86 = var87;
}
{
var90 = ((val*(*)(val* self, val* p0))(var_dirpath->class->vft[COLOR_standard__file__String__join_path]))(var_dirpath, var87); /* join_path on <var_dirpath:String>*/
}
var_readme = var90;
{
var91 = ((short int(*)(val* self))(var_readme->class->vft[COLOR_standard__file__String__file_exists]))(var_readme); /* file_exists on <var_readme:String>*/
}
var92 = !var91;
if (var92){
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "README";
var96 = standard___standard__NativeString___to_s_with_length(var95, 6l);
var94 = var96;
varonce93 = var94;
}
{
var97 = ((val*(*)(val* self, val* p0))(var_dirpath->class->vft[COLOR_standard__file__String__join_path]))(var_dirpath, var94); /* join_path on <var_dirpath:String>*/
}
var_readme = var97;
} else {
}
{
var98 = ((short int(*)(val* self))(var_readme->class->vft[COLOR_standard__file__String__file_exists]))(var_readme); /* file_exists on <var_readme:String>*/
}
var99 = !var98;
if (var99){
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "README.md";
var103 = standard___standard__NativeString___to_s_with_length(var102, 9l);
var101 = var103;
varonce100 = var101;
}
{
var104 = ((val*(*)(val* self, val* p0))(var_dirpath2->class->vft[COLOR_standard__file__String__join_path]))(var_dirpath2, var101); /* join_path on <var_dirpath2:String>*/
}
var_readme = var104;
} else {
}
{
var105 = ((short int(*)(val* self))(var_readme->class->vft[COLOR_standard__file__String__file_exists]))(var_readme); /* file_exists on <var_readme:String>*/
}
var106 = !var105;
if (var106){
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "README";
var110 = standard___standard__NativeString___to_s_with_length(var109, 6l);
var108 = var110;
varonce107 = var108;
}
{
var111 = ((val*(*)(val* self, val* p0))(var_dirpath2->class->vft[COLOR_standard__file__String__join_path]))(var_dirpath2, var108); /* join_path on <var_dirpath2:String>*/
}
var_readme = var111;
} else {
}
{
var112 = ((short int(*)(val* self))(var_readme->class->vft[COLOR_standard__file__String__file_exists]))(var_readme); /* file_exists on <var_readme:String>*/
}
if (var112){
{
var113 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__load_markdown]))(self, var_readme); /* load_markdown on <self:ModelBuilder>*/
}
var_mdoc = var113;
{
((void(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_nit__mdoc__MEntity__mdoc_61d]))(var_mgroup, var_mdoc); /* mdoc= on <var_mgroup:nullable Object(MGroup)>*/
}
{
((void(*)(val* self, val* p0))(var_mdoc->class->vft[COLOR_nit__mdoc__MDoc__original_mentity_61d]))(var_mdoc, var_mgroup); /* original_mentity= on <var_mdoc:MDoc>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__filepath_61d]))(var_mgroup, var_dirpath); /* filepath= on <var_mgroup:nullable Object(MGroup)>*/
}
{
var114 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__mgroups]))(self); /* mgroups on <self:ModelBuilder>*/
}
{
var115 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__module_absolute_path]))(self, var_dirpath); /* module_absolute_path on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var114->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var114, var115, var_mgroup); /* []= on <var114:HashMap[String, nullable MGroup]>*/
}
{
var116 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__mgroups]))(self); /* mgroups on <self:ModelBuilder>*/
}
{
var117 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__module_absolute_path]))(self, var_dirpath2); /* module_absolute_path on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var116->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var116, var117, var_mgroup); /* []= on <var116:HashMap[String, nullable MGroup]>*/
}
var = var_mgroup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_markdown for (self: ModelBuilder, String): MDoc */
val* nit__loader___ModelBuilder___load_markdown(val* self, val* p0) {
val* var /* : MDoc */;
val* var_filepath /* var filepath: String */;
val* var1 /* : MDoc */;
val* var2 /* : Location */;
val* var3 /* : SourceFile */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var_mdoc /* var mdoc: MDoc */;
val* var7 /* : FileReader */;
val* var_s /* var s: FileReader */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[String] */;
val* var11 /* : String */;
var_filepath = p0;
var1 = NEW_nit__MDoc(&type_nit__MDoc);
var2 = NEW_nit__Location(&type_nit__Location);
var3 = NEW_nit__SourceFile(&type_nit__SourceFile);
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
{
((void(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__location__SourceFile__from_string]))(var3, var_filepath, var4); /* from_string on <var3:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__location__Location__file_61d]))(var2, var3); /* file= on <var2:Location>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__location__Location__line_start_61d]))(var2, 0l); /* line_start= on <var2:Location>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__location__Location__line_end_61d]))(var2, 0l); /* line_end= on <var2:Location>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__location__Location__column_start_61d]))(var2, 0l); /* column_start= on <var2:Location>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__location__Location__column_end_61d]))(var2, 0l); /* column_end= on <var2:Location>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Location>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__mdoc__MDoc__location_61d]))(var1, var2); /* location= on <var1:MDoc>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:MDoc>*/
}
var_mdoc = var1;
var7 = NEW_standard__FileReader(&type_standard__FileReader);
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__file__FileReader__open]))(var7, var_filepath); /* open on <var7:FileReader>*/
}
var_s = var7;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_s->class->vft[COLOR_standard__stream__Reader__eof]))(var_s); /* eof on <var_s:FileReader>*/
}
var9 = !var8;
if (var9){
{
var10 = ((val*(*)(val* self))(var_mdoc->class->vft[COLOR_nit__mdoc__MDoc__content]))(var_mdoc); /* content on <var_mdoc:MDoc>*/
}
{
var11 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__stream__Reader__read_line]))(var_s); /* read_line on <var_s:FileReader>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var10, var11); /* add on <var10:Array[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_mdoc;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#visit_group for (self: ModelBuilder, MGroup) */
void nit__loader___ModelBuilder___visit_group(val* self, val* p0) {
val* var_mgroup /* var mgroup: MGroup */;
val* var /* : nullable String */;
val* var_p /* var p: nullable String */;
val* var1 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ArrayIterator[String] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_f /* var f: String */;
val* var6 /* : String */;
val* var_fp /* var fp: String */;
val* var7 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable ModulePath */;
var_mgroup = p0;
{
var = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__filepath]))(var_mgroup); /* filepath on <var_mgroup:MGroup>*/
}
var_p = var;
if (var_p == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 470);
fatal_exit(1);
} else {
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_standard__file__String__files]))(var_p); /* files on <var_p:nullable String>*/
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
var_f = var5;
if (var_p == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 471);
fatal_exit(1);
} else {
var6 = ((val*(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__file__String___47d]))(var_p, var_f); /* / on <var_p:nullable String>*/
}
var_fp = var6;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__get_mgroup]))(self, var_fp); /* get_mgroup on <self:ModelBuilder>*/
}
var_g = var7;
if (var_g == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_g, ((val*)NULL)); /* != on <var_g:nullable MGroup>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__visit_group]))(self, var_g); /* visit_group on <self:ModelBuilder>*/
}
} else {
}
{
var10 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__identify_file]))(self, var_fp); /* identify_file on <self:ModelBuilder>*/
}
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ArrayIterator[String]>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#module_absolute_path for (self: ModelBuilder, String): String */
val* nit__loader___ModelBuilder___module_absolute_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : Sys */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
var_path = p0;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__file__Sys__getcwd]))(var1); /* getcwd on <var1:Sys>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__file__String__join_path]))(var2, var_path); /* join_path on <var2:String>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__file__String__simplify_path]))(var3); /* simplify_path on <var3:String>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_module_ast for (self: ModelBuilder, String): nullable AModule */
val* nit__loader___ModelBuilder___load_module_ast(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
val* var1 /* : nullable String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : ToolContext */;
val* var9 /* : NativeArray[String] */;
static val* varonce8;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var19 /* : Message */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : ToolContext */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
val* var34 /* : Message */;
val* var35 /* : ToolContext */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : FileReader */;
val* var_file /* var file: FileReader */;
val* var44 /* : Lexer */;
val* var45 /* : SourceFile */;
val* var_lexer /* var lexer: Lexer */;
val* var46 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var47 /* : Start */;
val* var_tree /* var tree: Start */;
val* var48 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var52 /* : Bool */;
int cltype;
int idtype;
val* var53 /* : String */;
var_filename = p0;
{
var1 = ((val*(*)(val* self))(var_filename->class->vft[COLOR_standard__file__String__file_extension]))(var_filename); /* file_extension on <var_filename:String>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "nit";
var4 = standard___standard__NativeString___to_s_with_length(var3, 3l);
var2 = var4;
varonce = var2;
}
if (var1 == NULL) {
var5 = 1; /* <var2:String> cannot be null */
} else {
var6 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, var2); /* != on <var1:nullable String>*/
var5 = var6;
}
if (var5){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce8==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Error: file `";
var13 = standard___standard__NativeString___to_s_with_length(var12, 13l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "` is not a valid nit module.";
var17 = standard___standard__NativeString___to_s_with_length(var16, 28l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce8;
varonce8 = NULL;
}
((struct instance_standard__NativeArray*)var9)->values[1]=var_filename;
{
var18 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce8 = var9;
{
var19 = ((val*(*)(val* self, val* p0, val* p1))(var7->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var7, ((val*)NULL), var18); /* error on <var7:ToolContext>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var20 = ((short int(*)(val* self))(var_filename->class->vft[COLOR_standard__file__String__file_exists]))(var_filename); /* file_exists on <var_filename:String>*/
}
var21 = !var20;
if (var21){
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce23==NULL)) {
var24 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Error: file `";
var28 = standard___standard__NativeString___to_s_with_length(var27, 13l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "` not found.";
var32 = standard___standard__NativeString___to_s_with_length(var31, 12l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var24)->values[2]=var30;
} else {
var24 = varonce23;
varonce23 = NULL;
}
((struct instance_standard__NativeArray*)var24)->values[1]=var_filename;
{
var33 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
var34 = ((val*(*)(val* self, val* p0, val* p1))(var22->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var22, ((val*)NULL), var33); /* error on <var22:ToolContext>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var35 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "load module ";
var41 = standard___standard__NativeString___to_s_with_length(var40, 12l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var37)->values[0]=var39;
} else {
var37 = varonce36;
varonce36 = NULL;
}
((struct instance_standard__NativeArray*)var37)->values[1]=var_filename;
{
var42 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
((void(*)(val* self, val* p0, long p1))(var35->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var35, var42, 2l); /* info on <var35:ToolContext>*/
}
var43 = NEW_standard__FileReader(&type_standard__FileReader);
{
((void(*)(val* self, val* p0))(var43->class->vft[COLOR_standard__file__FileReader__open]))(var43, var_filename); /* open on <var43:FileReader>*/
}
var_file = var43;
var44 = NEW_nit__Lexer(&type_nit__Lexer);
var45 = NEW_nit__SourceFile(&type_nit__SourceFile);
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_nit__location__SourceFile__filename_61d]))(var45, var_filename); /* filename= on <var45:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_nit__location__SourceFile__stream_61d]))(var45, var_file); /* stream= on <var45:SourceFile>*/
}
{
((void(*)(val* self))(var45->class->vft[COLOR_standard__kernel__Object__init]))(var45); /* init on <var45:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var44->class->vft[COLOR_nit__lexer_work__Lexer__file_61d]))(var44, var45); /* file= on <var44:Lexer>*/
}
{
((void(*)(val* self))(var44->class->vft[COLOR_standard__kernel__Object__init]))(var44); /* init on <var44:Lexer>*/
}
var_lexer = var44;
var46 = NEW_nit__Parser(&type_nit__Parser);
{
((void(*)(val* self, val* p0))(var46->class->vft[COLOR_nit__parser_work__Parser__lexer_61d]))(var46, var_lexer); /* lexer= on <var46:Parser>*/
}
{
((void(*)(val* self))(var46->class->vft[COLOR_standard__kernel__Object__init]))(var46); /* init on <var46:Parser>*/
}
var_parser = var46;
{
var47 = ((val*(*)(val* self))(var_parser->class->vft[COLOR_nit__parser_work__Parser__parse]))(var_parser); /* parse on <var_parser:Parser>*/
}
var_tree = var47;
{
((void(*)(val* self))(var_file->class->vft[COLOR_standard__stream__Stream__close]))(var_file); /* close on <var_file:FileReader>*/
}
{
var48 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_base]))(var_tree); /* n_base on <var_tree:Start>*/
}
var_nmodule = var48;
if (var_nmodule == NULL) {
var49 = 1; /* is null */
} else {
var49 = 0; /* arg is null but recv is not */
}
if (0) {
var50 = ((short int(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nmodule, ((val*)NULL)); /* == on <var_nmodule:nullable AModule>*/
var49 = var50;
}
if (var49){
{
var51 = ((val*(*)(val* self))(var_tree->class->vft[COLOR_nit__parser_nodes__Start__n_eof]))(var_tree); /* n_eof on <var_tree:Start>*/
}
var_neof = var51;
/* <var_neof:EOF> isa AError */
cltype = type_nit__AError.color;
idtype = type_nit__AError.id;
if(cltype >= var_neof->type->table_size) {
var52 = 0;
} else {
var52 = var_neof->type->type_table[cltype] == idtype;
}
if (unlikely(!var52)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 509);
fatal_exit(1);
}
{
var53 = ((val*(*)(val* self))(var_neof->class->vft[COLOR_nit__lexer_work__AError__message]))(var_neof); /* message on <var_neof:EOF(AError)>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_neof, var53); /* error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#filter_nit_source for (self: ModelBuilder, Array[String]): Array[String] */
val* nit__loader___ModelBuilder___filter_nit_source(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_args /* var args: Array[String] */;
val* var1 /* : Array[String] */;
val* var_keep /* var keep: Array[String] */;
val* var2 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
val* var_ /* var : Array[String] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[String] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_a /* var a: String */;
val* var7 /* : nullable ModulePath */;
val* var_l /* var l: nullable ModulePath */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_args = p0;
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_keep = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[String]>*/
}
var_res = var2;
var_ = var_args;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[String]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[String]>*/
}
var_a = var6;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__identify_file]))(self, var_a); /* identify_file on <self:ModelBuilder>*/
}
var_l = var7;
if (var_l == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_l, ((val*)NULL)); /* == on <var_l:nullable ModulePath>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_keep->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_keep, var_a); /* add on <var_keep:Array[String]>*/
}
} else {
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_a); /* add on <var_res:Array[String]>*/
}
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[String]>*/
}
{
((void(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var_args); /* clear on <var_args:Array[String]>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_args, var_keep); /* add_all on <var_args:Array[String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_module for (self: ModelBuilder, String): nullable AModule */
val* nit__loader___ModelBuilder___load_module(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
val* var1 /* : nullable ModulePath */;
val* var_file /* var file: nullable ModulePath */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : ToolContext */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : Message */;
val* var17 /* : ToolContext */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : String */;
val* var29 /* : Message */;
val* var30 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : HashMap[MModule, AModule] */;
val* var34 /* : nullable Object */;
val* var35 /* : String */;
val* var36 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MGroup */;
val* var40 /* : String */;
val* var41 /* : nullable MModule */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
var_filename = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__identify_file]))(self, var_filename); /* identify_file on <self:ModelBuilder>*/
}
var_file = var1;
if (var_file == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_file, ((val*)NULL)); /* == on <var_file:nullable ModulePath>*/
var2 = var3;
}
if (var2){
{
var4 = ((short int(*)(val* self))(var_filename->class->vft[COLOR_standard__file__String__file_exists]))(var_filename); /* file_exists on <var_filename:String>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Error: `";
var10 = standard___standard__NativeString___to_s_with_length(var9, 8l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "` is not a Nit source file.";
var14 = standard___standard__NativeString___to_s_with_length(var13, 27l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var_filename;
{
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(var5->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var5, ((val*)NULL), var15); /* error on <var5:ToolContext>*/
}
} else {
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce18==NULL)) {
var19 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Error: cannot find module `";
var23 = standard___standard__NativeString___to_s_with_length(var22, 27l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "`.";
var27 = standard___standard__NativeString___to_s_with_length(var26, 2l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var19)->values[2]=var25;
} else {
var19 = varonce18;
varonce18 = NULL;
}
((struct instance_standard__NativeArray*)var19)->values[1]=var_filename;
{
var28 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
var29 = ((val*(*)(val* self, val* p0, val* p1))(var17->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(var17, ((val*)NULL), var28); /* error on <var17:ToolContext>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var30 = ((val*(*)(val* self))(var_file->class->vft[COLOR_nit__loader__ModulePath__mmodule]))(var_file); /* mmodule on <var_file:nullable ModulePath(ModulePath)>*/
}
var_mmodule = var30;
if (var_mmodule == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mmodule, ((val*)NULL)); /* != on <var_mmodule:nullable MModule>*/
var31 = var32;
}
if (var31){
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__mmodule2nmodule]))(self); /* mmodule2nmodule on <self:ModelBuilder>*/
}
{
var34 = ((val*(*)(val* self, val* p0))(var33->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var33, var_mmodule); /* [] on <var33:HashMap[MModule, AModule]>*/
}
var = var34;
goto RET_LABEL;
} else {
}
{
var35 = ((val*(*)(val* self))(var_file->class->vft[COLOR_nit__loader__ModulePath__filepath]))(var_file); /* filepath on <var_file:nullable ModulePath(ModulePath)>*/
}
{
var36 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__load_module_ast]))(self, var35); /* load_module_ast on <self:ModelBuilder>*/
}
var_nmodule = var36;
if (var_nmodule == NULL) {
var37 = 1; /* is null */
} else {
var37 = 0; /* arg is null but recv is not */
}
if (0) {
var38 = ((short int(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nmodule, ((val*)NULL)); /* == on <var_nmodule:nullable AModule>*/
var37 = var38;
}
if (var37){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var39 = ((val*(*)(val* self))(var_file->class->vft[COLOR_nit__loader__ModulePath__mgroup]))(var_file); /* mgroup on <var_file:nullable ModulePath(ModulePath)>*/
}
{
var40 = ((val*(*)(val* self))(var_file->class->vft[COLOR_nit__loader__ModulePath__name]))(var_file); /* name on <var_file:nullable ModulePath(ModulePath)>*/
}
{
var41 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__loader__ModelBuilder__build_a_mmodule]))(self, var39, var40, var_nmodule); /* build_a_mmodule on <self:ModelBuilder>*/
}
var_mmodule = var41;
if (var_mmodule == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
var43 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var42 = var43;
}
if (var42){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_file->class->vft[COLOR_nit__loader__ModulePath__mmodule_61d]))(var_file, var_mmodule); /* mmodule= on <var_file:nullable ModulePath(ModulePath)>*/
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_rt_module for (self: ModelBuilder, nullable MModule, AModule, String): nullable AModule */
val* nit__loader___ModelBuilder___load_rt_module(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable AModule */;
val* var_parent /* var parent: nullable MModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var_mod_name /* var mod_name: String */;
val* var_mgroup /* var mgroup: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MGroup */;
val* var4 /* : MModule */;
val* var5 /* : Model */;
val* var6 /* : Location */;
val* var_mmodule /* var mmodule: MModule */;
val* var7 /* : Array[AModule] */;
val* var8 /* : HashMap[MModule, AModule] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[MModule] */;
val* var_imported_modules /* var imported_modules: Array[MModule] */;
val* var12 /* : Sys */;
val* var13 /* : MVisibility */;
var_parent = p0;
var_nmodule = p1;
var_mod_name = p2;
var_mgroup = ((val*)NULL);
if (var_parent == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_parent->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_parent, ((val*)NULL)); /* != on <var_parent:nullable MModule>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var_parent); /* mgroup on <var_parent:nullable MModule(MModule)>*/
}
var_mgroup = var3;
} else {
}
var4 = NEW_nit__MModule(&type_nit__MModule);
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
var6 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nmodule); /* location on <var_nmodule:AModule>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var4, var5); /* model= on <var4:MModule>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var4, var_mgroup); /* mgroup= on <var4:MModule>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var4, var_mod_name); /* name= on <var4:MModule>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var4, var6); /* location= on <var4:MModule>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:MModule>*/
}
var_mmodule = var4;
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule_61d]))(var_nmodule, var_mmodule); /* mmodule= on <var_nmodule:AModule>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__nmodules]))(self); /* nmodules on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var7, var_nmodule); /* add on <var7:Array[AModule]>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__mmodule2nmodule]))(self); /* mmodule2nmodule on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var8, var_mmodule, var_nmodule); /* []= on <var8:HashMap[MModule, AModule]>*/
}
if (var_parent == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_parent->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_parent, ((val*)NULL)); /* != on <var_parent:nullable MModule>*/
var9 = var10;
}
if (var9){
var11 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:Array[MModule]>*/
}
var_imported_modules = var11;
{
((void(*)(val* self, val* p0))(var_imported_modules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_imported_modules, var_parent); /* add on <var_imported_modules:Array[MModule]>*/
}
var12 = glob_sys;
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model_base__Sys__intrude_visibility]))(var12); /* intrude_visibility on <var12:Sys>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__set_visibility_for]))(var_mmodule, var_parent, var13); /* set_visibility_for on <var_mmodule:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__set_imported_mmodules]))(var_mmodule, var_imported_modules); /* set_imported_mmodules on <var_mmodule:MModule>*/
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__build_module_importation]))(self, var_nmodule); /* build_module_importation on <self:ModelBuilder>*/
}
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#build_a_mmodule for (self: ModelBuilder, nullable MGroup, String, AModule): nullable MModule */
val* nit__loader___ModelBuilder___build_a_mmodule(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_mod_name /* var mod_name: String */;
val* var_nmodule /* var nmodule: AModule */;
val* var1 /* : nullable AModuledecl */;
val* var_decl /* var decl: nullable AModuledecl */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : AModuleName */;
val* var5 /* : TId */;
val* var6 /* : String */;
val* var_decl_name /* var decl_name: String */;
short int var7 /* : Bool */;
val* var8 /* : AModuleName */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : String */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : Model */;
val* var26 /* : nullable Array[MModule] */;
val* var_others /* var others: nullable Array[MModule] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_ /* var : Array[MModule] */;
val* var29 /* : Iterator[nullable Object] */;
val* var_30 /* var : ArrayIterator[MModule] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_other /* var other: MModule */;
short int var33 /* : Bool */;
val* var34 /* : nullable MGroup */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
val* var38 /* : nullable MGroup */;
val* var39 /* : MProject */;
val* var40 /* : MProject */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var_node /* var node: ANode */;
val* var44 /* : AModuleName */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
val* var59 /* : String */;
val* var60 /* : Location */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : MModule */;
val* var64 /* : Model */;
val* var65 /* : Location */;
val* var_mmodule /* var mmodule: MModule */;
val* var66 /* : Array[AModule] */;
val* var67 /* : HashMap[MModule, AModule] */;
val* var68 /* : Location */;
val* var69 /* : nullable SourceFile */;
val* var_source /* var source: nullable SourceFile */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : nullable MModule */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
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
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
val* var101 /* : Array[AAnnotation] */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
var_mgroup = p0;
var_mod_name = p1;
var_nmodule = p2;
{
var1 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_moduledecl]))(var_nmodule); /* n_moduledecl on <var_nmodule:AModule>*/
}
var_decl = var1;
if (var_decl == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_decl, ((val*)NULL)); /* != on <var_decl:nullable AModuledecl>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(var_decl->class->vft[COLOR_nit__parser_nodes__AModuledecl__n_name]))(var_decl); /* n_name on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__parser_nodes__AModuleName__n_id]))(var4); /* n_id on <var4:AModuleName>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__parser_nodes__Token__text]))(var5); /* text on <var5:TId>*/
}
var_decl_name = var6;
{
var7 = ((short int(*)(val* self, val* p0))(var_decl_name->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_decl_name, var_mod_name); /* != on <var_decl_name:String>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_decl->class->vft[COLOR_nit__parser_nodes__AModuledecl__n_name]))(var_decl); /* n_name on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Error: module name mismatch; declared ";
var13 = standard___standard__NativeString___to_s_with_length(var12, 38l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = " file named ";
var17 = standard___standard__NativeString___to_s_with_length(var16, 12l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ".";
var21 = standard___standard__NativeString___to_s_with_length(var20, 1l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var9)->values[4]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var9)->values[1]=var_decl_name;
((struct instance_standard__NativeArray*)var9)->values[3]=var_mod_name;
{
var22 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var8, var22); /* error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
if (var_mgroup == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mgroup, ((val*)NULL)); /* != on <var_mgroup:nullable MGroup>*/
var23 = var24;
}
if (var23){
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
var26 = ((val*(*)(val* self, val* p0))(var25->class->vft[COLOR_nit__mmodule__Model__get_mmodules_by_name]))(var25, var_mod_name); /* get_mmodules_by_name on <var25:Model>*/
}
var_others = var26;
if (var_others == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
var28 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_others, ((val*)NULL)); /* != on <var_others:nullable Array[MModule]>*/
var27 = var28;
}
if (var27){
var_ = var_others;
{
var29 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_30 = var29;
for(;;) {
{
var31 = ((short int(*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_30); /* is_ok on <var_30:ArrayIterator[MModule]>*/
}
if (var31){
{
var32 = ((val*(*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_30); /* item on <var_30:ArrayIterator[MModule]>*/
}
var_other = var32;
{
var34 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var_other); /* mgroup on <var_other:MModule>*/
}
if (var34 == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
var36 = ((short int(*)(val* self, val* p0))(var34->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var34, ((val*)NULL)); /* != on <var34:nullable MGroup>*/
var35 = var36;
}
var_37 = var35;
if (var35){
{
var38 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var_other); /* mgroup on <var_other:MModule>*/
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 618);
fatal_exit(1);
} else {
var39 = ((val*(*)(val* self))(var38->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var38); /* mproject on <var38:nullable MGroup>*/
}
{
var40 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var_mgroup); /* mproject on <var_mgroup:nullable MGroup(MGroup)>*/
}
{
var41 = ((short int(*)(val* self, val* p0))(var39->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var39, var40); /* == on <var39:MProject>*/
}
var33 = var41;
} else {
var33 = var_37;
}
if (var33){
if (var_decl == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
var43 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_decl, ((val*)NULL)); /* == on <var_decl:nullable AModuledecl>*/
var42 = var43;
}
if (var42){
var_node = var_nmodule;
} else {
{
var44 = ((val*(*)(val* self))(var_decl->class->vft[COLOR_nit__parser_nodes__AModuledecl__n_name]))(var_decl); /* n_name on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
var_node = var44;
}
if (unlikely(varonce45==NULL)) {
var46 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "Error: a module named `";
var50 = standard___standard__NativeString___to_s_with_length(var49, 23l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "` already exists at ";
var54 = standard___standard__NativeString___to_s_with_length(var53, 20l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var46)->values[2]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = ".";
var58 = standard___standard__NativeString___to_s_with_length(var57, 1l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var46)->values[4]=var56;
} else {
var46 = varonce45;
varonce45 = NULL;
}
{
var59 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_other); /* full_name on <var_other:MModule>*/
}
((struct instance_standard__NativeArray*)var46)->values[1]=var59;
{
var60 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__mmodule__MModule__location]))(var_other); /* location on <var_other:MModule>*/
}
{
var61 = ((val*(*)(val* self))(var60->class->vft[COLOR_standard__string__Object__to_s]))(var60); /* to_s on <var60:Location>*/
}
((struct instance_standard__NativeArray*)var46)->values[3]=var61;
{
var62 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_node, var62); /* error on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_30); /* next on <var_30:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_30); /* finish on <var_30:ArrayIterator[MModule]>*/
}
} else {
}
} else {
}
var63 = NEW_nit__MModule(&type_nit__MModule);
{
var64 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
var65 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nmodule); /* location on <var_nmodule:AModule>*/
}
{
((void(*)(val* self, val* p0))(var63->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var63, var64); /* model= on <var63:MModule>*/
}
{
((void(*)(val* self, val* p0))(var63->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var63, var_mgroup); /* mgroup= on <var63:MModule>*/
}
{
((void(*)(val* self, val* p0))(var63->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var63, var_mod_name); /* name= on <var63:MModule>*/
}
{
((void(*)(val* self, val* p0))(var63->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var63, var65); /* location= on <var63:MModule>*/
}
{
((void(*)(val* self))(var63->class->vft[COLOR_standard__kernel__Object__init]))(var63); /* init on <var63:MModule>*/
}
var_mmodule = var63;
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule_61d]))(var_nmodule, var_mmodule); /* mmodule= on <var_nmodule:AModule>*/
}
{
var66 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__nmodules]))(self); /* nmodules on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var66->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var66, var_nmodule); /* add on <var66:Array[AModule]>*/
}
{
var67 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__mmodule2nmodule]))(self); /* mmodule2nmodule on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var67->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var67, var_mmodule, var_nmodule); /* []= on <var67:HashMap[MModule, AModule]>*/
}
{
var68 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nmodule); /* location on <var_nmodule:AModule>*/
}
{
var69 = ((val*(*)(val* self))(var68->class->vft[COLOR_nit__location__Location__file]))(var68); /* file on <var68:Location>*/
}
var_source = var69;
if (var_source == NULL) {
var70 = 0; /* is null */
} else {
var70 = 1; /* arg is null and recv is not */
}
if (0) {
var71 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_source, ((val*)NULL)); /* != on <var_source:nullable SourceFile>*/
var70 = var71;
}
if (var70){
{
var72 = ((val*(*)(val* self))(var_source->class->vft[COLOR_nit__loader__SourceFile__mmodule]))(var_source); /* mmodule on <var_source:nullable SourceFile(SourceFile)>*/
}
if (var72 == NULL) {
var73 = 1; /* is null */
} else {
var73 = 0; /* arg is null but recv is not */
}
if (0) {
var74 = ((short int(*)(val* self, val* p0))(var72->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var72, ((val*)NULL)); /* == on <var72:nullable MModule>*/
var73 = var74;
}
if (unlikely(!var73)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 635);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_source->class->vft[COLOR_nit__loader__SourceFile__mmodule_61d]))(var_source, var_mmodule); /* mmodule= on <var_source:nullable SourceFile(SourceFile)>*/
}
} else {
}
if (var_decl == NULL) {
var75 = 0; /* is null */
} else {
var75 = 1; /* arg is null and recv is not */
}
if (0) {
var76 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_decl, ((val*)NULL)); /* != on <var_decl:nullable AModuledecl>*/
var75 = var76;
}
if (var75){
{
var77 = ((val*(*)(val* self))(var_decl->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc]))(var_decl); /* n_doc on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
var_ndoc = var77;
if (var_ndoc == NULL) {
var78 = 0; /* is null */
} else {
var78 = 1; /* arg is null and recv is not */
}
if (0) {
var79 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ndoc, ((val*)NULL)); /* != on <var_ndoc:nullable ADoc>*/
var78 = var79;
}
if (var78){
{
var80 = ((val*(*)(val* self))(var_ndoc->class->vft[COLOR_nit__modelbuilder_base__ADoc__to_mdoc]))(var_ndoc); /* to_mdoc on <var_ndoc:nullable ADoc(ADoc)>*/
}
var_mdoc = var80;
{
((void(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__mdoc__MEntity__mdoc_61d]))(var_mmodule, var_mdoc); /* mdoc= on <var_mmodule:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_mdoc->class->vft[COLOR_nit__mdoc__MDoc__original_mentity_61d]))(var_mdoc, var_mmodule); /* original_mentity= on <var_mdoc:MDoc>*/
}
} else {
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "missing-doc";
var84 = standard___standard__NativeString___to_s_with_length(var83, 11l);
var82 = var84;
varonce81 = var82;
}
if (unlikely(varonce85==NULL)) {
var86 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Documentation warning: Undocumented module `";
var90 = standard___standard__NativeString___to_s_with_length(var89, 44l);
var88 = var90;
varonce87 = var88;
}
((struct instance_standard__NativeArray*)var86)->values[0]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "`";
var94 = standard___standard__NativeString___to_s_with_length(var93, 1l);
var92 = var94;
varonce91 = var92;
}
((struct instance_standard__NativeArray*)var86)->values[2]=var92;
} else {
var86 = varonce85;
varonce85 = NULL;
}
{
var95 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var86)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var86->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(self, var_decl, var82, var96); /* advice on <self:ModelBuilder>*/
}
}
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "test_suite";
var100 = standard___standard__NativeString___to_s_with_length(var99, 10l);
var98 = var100;
varonce97 = var98;
}
{
var101 = ((val*(*)(val* self, val* p0))(var_decl->class->vft[COLOR_nit__parser_nodes__Prod__get_annotations]))(var_decl, var98); /* get_annotations on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
{
var102 = ((short int(*)(val* self))(var101->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var101); /* is_empty on <var101:Array[AAnnotation]>*/
}
var103 = !var102;
{
((void(*)(val* self, short int p0))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__is_test_suite_61d]))(var_mmodule, var103); /* is_test_suite= on <var_mmodule:MModule>*/
}
} else {
}
var = var_mmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#build_module_importation for (self: ModelBuilder, AModule) */
void nit__loader___ModelBuilder___build_module_importation(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
short int var /* : Bool */;
val* var1 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var_stdimport /* var stdimport: Bool */;
val* var2 /* : Array[MModule] */;
val* var_imported_modules /* var imported_modules: Array[MModule] */;
val* var3 /* : ANodes[AImport] */;
val* var_ /* var : ANodes[AImport] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[AImport] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_aimport /* var aimport: AImport */;
short int var8 /* : Bool */;
int cltype;
int idtype;
short int var9 /* : Bool */;
val* var10 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var11 /* : AModuleName */;
val* var12 /* : nullable TQuad */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : AModuleName */;
val* var16 /* : ANodes[TId] */;
val* var_17 /* var : ANodes[TId] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[TId] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_grp /* var grp: TId */;
val* var22 /* : String */;
val* var23 /* : nullable ModulePath */;
val* var_path /* var path: nullable ModulePath */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : MGroup */;
val* var28 /* : AModuleName */;
val* var29 /* : TId */;
val* var30 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var31 /* : AModuleName */;
val* var32 /* : nullable MModule */;
val* var_sup /* var sup: nullable MModule */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : AVisibility */;
val* var36 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var37 /* : Sys */;
val* var38 /* : MVisibility */;
short int var39 /* : Bool */;
val* var40 /* : AVisibility */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
short int var44 /* : Bool */;
val* var45 /* : AModuleName */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : POSetElement[MModule] */;
short int var59 /* : Bool */;
val* var60 /* : AModuleName */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var77 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
val* var_mod_name83 /* var mod_name: String */;
val* var84 /* : nullable MModule */;
val* var_sup85 /* var sup: nullable MModule */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var88 /* : Sys */;
val* var89 /* : MVisibility */;
val* var90 /* : ToolContext */;
val* var92 /* : NativeArray[String] */;
static val* varonce91;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : FlatString */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : POSetElement[MModule] */;
val* var105 /* : Collection[nullable Object] */;
val* var_106 /* var : Collection[MModule] */;
val* var107 /* : Iterator[nullable Object] */;
val* var_108 /* var : Iterator[MModule] */;
short int var109 /* : Bool */;
val* var110 /* : nullable Object */;
val* var_sup111 /* var sup: MModule */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
val* var116 /* : FlatString */;
short int var117 /* : Bool */;
val* var118 /* : Sys */;
val* var119 /* : MVisibility */;
val* var121 /* : POSetElement[MModule] */;
val* var122 /* : Collection[nullable Object] */;
val* var_directs /* var directs: Collection[MModule] */;
val* var123 /* : ANodes[AImport] */;
val* var_124 /* var : ANodes[AImport] */;
val* var125 /* : Iterator[nullable Object] */;
val* var_126 /* var : Iterator[AImport] */;
short int var127 /* : Bool */;
val* var128 /* : nullable Object */;
val* var_nim /* var nim: AImport */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
short int var132 /* : Bool */;
val* var134 /* : nullable MModule */;
val* var_im /* var im: nullable MModule */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
var_nmodule = p0;
{
var = ((short int(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__is_importation_done]))(var_nmodule); /* is_importation_done on <var_nmodule:AModule>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(var_nmodule->class->vft[COLOR_nit__loader__AModule__is_importation_done_61d]))(var_nmodule, 1); /* is_importation_done= on <var_nmodule:AModule>*/
}
{
var1 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:AModule>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 663);
fatal_exit(1);
}
var_mmodule = var1;
var_stdimport = 1;
var2 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[MModule]>*/
}
var_imported_modules = var2;
{
var3 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_imports]))(var_nmodule); /* n_imports on <var_nmodule:AModule>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AImport]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[AImport]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[AImport]>*/
}
var_aimport = var7;
var_stdimport = 0;
/* <var_aimport:AImport> isa AStdImport */
cltype = type_nit__AStdImport.color;
idtype = type_nit__AStdImport.id;
if(cltype >= var_aimport->type->table_size) {
var8 = 0;
} else {
var8 = var_aimport->type->type_table[cltype] == idtype;
}
var9 = !var8;
if (var9){
goto BREAK_label;
} else {
}
{
var10 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var_mmodule); /* mgroup on <var_mmodule:MModule>*/
}
var_mgroup = var10;
{
var11 = ((val*(*)(val* self))(var_aimport->class->vft[COLOR_nit__parser_nodes__AStdImport__n_name]))(var_aimport); /* n_name on <var_aimport:AImport(AStdImport)>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__parser_nodes__AModuleName__n_quad]))(var11); /* n_quad on <var11:AModuleName>*/
}
if (var12 == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var12, ((val*)NULL)); /* != on <var12:nullable TQuad>*/
var13 = var14;
}
if (var13){
var_mgroup = ((val*)NULL);
} else {
}
{
var15 = ((val*(*)(val* self))(var_aimport->class->vft[COLOR_nit__parser_nodes__AStdImport__n_name]))(var_aimport); /* n_name on <var_aimport:AImport(AStdImport)>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__parser_nodes__AModuleName__n_path]))(var15); /* n_path on <var15:AModuleName>*/
}
var_17 = var16;
{
var18 = ((val*(*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_17); /* iterator on <var_17:ANodes[TId]>*/
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:Iterator[TId]>*/
}
if (var20){
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:Iterator[TId]>*/
}
var_grp = var21;
{
var22 = ((val*(*)(val* self))(var_grp->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_grp); /* text on <var_grp:TId>*/
}
{
var23 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__loader__ModelBuilder__search_mmodule_by_name]))(self, var_grp, var_mgroup, var22); /* search_mmodule_by_name on <self:ModelBuilder>*/
}
var_path = var23;
if (var_path == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))(var_path->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_path, ((val*)NULL)); /* == on <var_path:nullable ModulePath>*/
var24 = var25;
}
if (var24){
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule_61d]))(var_nmodule, ((val*)NULL)); /* mmodule= on <var_nmodule:AModule>*/
}
goto RET_LABEL;
} else {
}
{
var26 = ((val*(*)(val* self))(var_path->class->vft[COLOR_nit__loader__ModulePath__mgroup]))(var_path); /* mgroup on <var_path:nullable ModulePath(ModulePath)>*/
}
var_mgroup = var26;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:Iterator[TId]>*/
}
} else {
goto BREAK_label27;
}
}
BREAK_label27: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:Iterator[TId]>*/
}
{
var28 = ((val*(*)(val* self))(var_aimport->class->vft[COLOR_nit__parser_nodes__AStdImport__n_name]))(var_aimport); /* n_name on <var_aimport:AImport(AStdImport)>*/
}
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_nit__parser_nodes__AModuleName__n_id]))(var28); /* n_id on <var28:AModuleName>*/
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_nit__parser_nodes__Token__text]))(var29); /* text on <var29:TId>*/
}
var_mod_name = var30;
{
var31 = ((val*(*)(val* self))(var_aimport->class->vft[COLOR_nit__parser_nodes__AStdImport__n_name]))(var_aimport); /* n_name on <var_aimport:AImport(AStdImport)>*/
}
{
var32 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__loader__ModelBuilder__get_mmodule_by_name]))(self, var31, var_mgroup, var_mod_name); /* get_mmodule_by_name on <self:ModelBuilder>*/
}
var_sup = var32;
if (var_sup == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
var34 = ((short int(*)(val* self, val* p0))(var_sup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sup, ((val*)NULL)); /* == on <var_sup:nullable MModule>*/
var33 = var34;
}
if (var33){
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule_61d]))(var_nmodule, ((val*)NULL)); /* mmodule= on <var_nmodule:AModule>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_aimport->class->vft[COLOR_nit__loader__AStdImport__mmodule_61d]))(var_aimport, var_sup); /* mmodule= on <var_aimport:AImport(AStdImport)>*/
}
{
((void(*)(val* self, val* p0))(var_imported_modules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_imported_modules, var_sup); /* add on <var_imported_modules:Array[MModule]>*/
}
{
var35 = ((val*(*)(val* self))(var_aimport->class->vft[COLOR_nit__parser_nodes__AImport__n_visibility]))(var_aimport); /* n_visibility on <var_aimport:AImport(AStdImport)>*/
}
{
var36 = ((val*(*)(val* self))(var35->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var35); /* mvisibility on <var35:AVisibility>*/
}
var_mvisibility = var36;
var37 = glob_sys;
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_nit__model_base__Sys__protected_visibility]))(var37); /* protected_visibility on <var37:Sys>*/
}
{
var39 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var38); /* == on <var_mvisibility:MVisibility>*/
}
if (var39){
{
var40 = ((val*(*)(val* self))(var_aimport->class->vft[COLOR_nit__parser_nodes__AImport__n_visibility]))(var_aimport); /* n_visibility on <var_aimport:AImport(AStdImport)>*/
}
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "Error: only properties can be protected.";
var43 = standard___standard__NativeString___to_s_with_length(var42, 40l);
var41 = var43;
varonce = var41;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var40, var41); /* error on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule_61d]))(var_nmodule, ((val*)NULL)); /* mmodule= on <var_nmodule:AModule>*/
}
goto RET_LABEL;
} else {
}
{
var44 = ((short int(*)(val* self, val* p0))(var_sup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sup, var_mmodule); /* == on <var_sup:nullable MModule(MModule)>*/
}
if (var44){
{
var45 = ((val*(*)(val* self))(var_aimport->class->vft[COLOR_nit__parser_nodes__AStdImport__n_name]))(var_aimport); /* n_name on <var_aimport:AImport(AStdImport)>*/
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Error: dependency loop in module ";
var51 = standard___standard__NativeString___to_s_with_length(var50, 33l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = ".";
var55 = standard___standard__NativeString___to_s_with_length(var54, 1l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var56 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var47)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var47->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var45, var57); /* error on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule_61d]))(var_nmodule, ((val*)NULL)); /* mmodule= on <var_nmodule:AModule>*/
}
} else {
}
{
var58 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_sup); /* in_importation on <var_sup:nullable MModule(MModule)>*/
}
{
var59 = ((short int(*)(val* self, val* p0))(var58->class->vft[COLOR_poset__POSetElement___60d]))(var58, var_mmodule); /* < on <var58:POSetElement[MModule]>*/
}
if (var59){
{
var60 = ((val*(*)(val* self))(var_aimport->class->vft[COLOR_nit__parser_nodes__AStdImport__n_name]))(var_aimport); /* n_name on <var_aimport:AImport(AStdImport)>*/
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "Error: dependency loop between modules ";
var66 = standard___standard__NativeString___to_s_with_length(var65, 39l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var62)->values[0]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = " and ";
var70 = standard___standard__NativeString___to_s_with_length(var69, 5l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var62)->values[2]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = ".";
var74 = standard___standard__NativeString___to_s_with_length(var73, 1l);
var72 = var74;
varonce71 = var72;
}
((struct instance_standard__NativeArray*)var62)->values[4]=var72;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var75 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var62)->values[1]=var75;
{
var76 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MModule(MModule)>*/
}
((struct instance_standard__NativeArray*)var62)->values[3]=var76;
{
var77 = ((val*(*)(val* self))(var62->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var60, var77); /* error on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule_61d]))(var_nmodule, ((val*)NULL)); /* mmodule= on <var_nmodule:AModule>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__set_visibility_for]))(var_mmodule, var_sup, var_mvisibility); /* set_visibility_for on <var_mmodule:MModule>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[AImport]>*/
}
} else {
goto BREAK_label78;
}
}
BREAK_label78: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[AImport]>*/
}
if (var_stdimport){
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "standard";
var82 = standard___standard__NativeString___to_s_with_length(var81, 8l);
var80 = var82;
varonce79 = var80;
}
var_mod_name83 = var80;
{
var84 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__loader__ModelBuilder__get_mmodule_by_name]))(self, var_nmodule, ((val*)NULL), var_mod_name83); /* get_mmodule_by_name on <self:ModelBuilder>*/
}
var_sup85 = var84;
if (var_sup85 == NULL) {
var86 = 1; /* is null */
} else {
var86 = 0; /* arg is null but recv is not */
}
if (0) {
var87 = ((short int(*)(val* self, val* p0))(var_sup85->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sup85, ((val*)NULL)); /* == on <var_sup85:nullable MModule>*/
var86 = var87;
}
if (var86){
{
((void(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule_61d]))(var_nmodule, ((val*)NULL)); /* mmodule= on <var_nmodule:AModule>*/
}
} else {
{
((void(*)(val* self, val* p0))(var_imported_modules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_imported_modules, var_sup85); /* add on <var_imported_modules:Array[MModule]>*/
}
var88 = glob_sys;
{
var89 = ((val*(*)(val* self))(var88->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var88); /* public_visibility on <var88:Sys>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__set_visibility_for]))(var_mmodule, var_sup85, var89); /* set_visibility_for on <var_mmodule:MModule>*/
}
}
} else {
}
{
var90 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce91==NULL)) {
var92 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = " imports ";
var96 = standard___standard__NativeString___to_s_with_length(var95, 9l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var92)->values[1]=var94;
} else {
var92 = varonce91;
varonce91 = NULL;
}
{
var97 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var92)->values[0]=var97;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ", ";
var101 = standard___standard__NativeString___to_s_with_length(var100, 2l);
var99 = var101;
varonce98 = var99;
}
{
var102 = ((val*(*)(val* self, val* p0))(var_imported_modules->class->vft[COLOR_standard__string__Collection__join]))(var_imported_modules, var99); /* join on <var_imported_modules:Array[MModule]>*/
}
((struct instance_standard__NativeArray*)var92)->values[2]=var102;
{
var103 = ((val*(*)(val* self))(var92->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
{
((void(*)(val* self, val* p0, long p1))(var90->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var90, var103, 3l); /* info on <var90:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__set_imported_mmodules]))(var_mmodule, var_imported_modules); /* set_imported_mmodules on <var_mmodule:MModule>*/
}
{
var104 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var105 = ((val*(*)(val* self))(var104->class->vft[COLOR_poset__POSetElement__greaters]))(var104); /* greaters on <var104:POSetElement[MModule]>*/
}
var_106 = var105;
{
var107 = ((val*(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_106); /* iterator on <var_106:Collection[MModule]>*/
}
var_108 = var107;
for(;;) {
{
var109 = ((short int(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_108); /* is_ok on <var_108:Iterator[MModule]>*/
}
if (var109){
{
var110 = ((val*(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_108); /* item on <var_108:Iterator[MModule]>*/
}
var_sup111 = var110;
{
var112 = ((val*(*)(val* self))(var_sup111->class->vft[COLOR_nit__model_base__MEntity__name]))(var_sup111); /* name on <var_sup111:MModule>*/
}
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "standard";
var116 = standard___standard__NativeString___to_s_with_length(var115, 8l);
var114 = var116;
varonce113 = var114;
}
{
var117 = ((short int(*)(val* self, val* p0))(var112->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var112, var114); /* == on <var112:String>*/
}
if (var117){
var118 = glob_sys;
{
var119 = ((val*(*)(val* self))(var118->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var118); /* public_visibility on <var118:Sys>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__set_visibility_for]))(var_mmodule, var_sup111, var119); /* set_visibility_for on <var_mmodule:MModule>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_108); /* next on <var_108:Iterator[MModule]>*/
}
} else {
goto BREAK_label120;
}
}
BREAK_label120: (void)0;
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_108); /* finish on <var_108:Iterator[MModule]>*/
}
{
var121 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var122 = ((val*(*)(val* self))(var121->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var121); /* direct_greaters on <var121:POSetElement[MModule]>*/
}
var_directs = var122;
{
var123 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_imports]))(var_nmodule); /* n_imports on <var_nmodule:AModule>*/
}
var_124 = var123;
{
var125 = ((val*(*)(val* self))(var_124->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_124); /* iterator on <var_124:ANodes[AImport]>*/
}
var_126 = var125;
for(;;) {
{
var127 = ((short int(*)(val* self))((((long)var_126&3)?class_info[((long)var_126&3)]:var_126->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_126); /* is_ok on <var_126:Iterator[AImport]>*/
}
if (var127){
{
var128 = ((val*(*)(val* self))((((long)var_126&3)?class_info[((long)var_126&3)]:var_126->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_126); /* item on <var_126:Iterator[AImport]>*/
}
var_nim = var128;
/* <var_nim:AImport> isa AStdImport */
cltype130 = type_nit__AStdImport.color;
idtype131 = type_nit__AStdImport.id;
if(cltype130 >= var_nim->type->table_size) {
var129 = 0;
} else {
var129 = var_nim->type->type_table[cltype130] == idtype131;
}
var132 = !var129;
if (var132){
goto BREAK_label133;
} else {
}
{
var134 = ((val*(*)(val* self))(var_nim->class->vft[COLOR_nit__loader__AStdImport__mmodule]))(var_nim); /* mmodule on <var_nim:AImport(AStdImport)>*/
}
var_im = var134;
if (var_im == NULL) {
var135 = 1; /* is null */
} else {
var135 = 0; /* arg is null but recv is not */
}
if (0) {
var136 = ((short int(*)(val* self, val* p0))(var_im->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_im, ((val*)NULL)); /* == on <var_im:nullable MModule>*/
var135 = var136;
}
if (var135){
goto BREAK_label133;
} else {
}
{
var137 = ((short int(*)(val* self, val* p0))((((long)var_directs&3)?class_info[((long)var_directs&3)]:var_directs->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var_directs, var_im); /* has on <var_directs:Collection[MModule]>*/
}
if (var137){
goto BREAK_label133;
} else {
}
BREAK_label133: (void)0;
{
((void(*)(val* self))((((long)var_126&3)?class_info[((long)var_126&3)]:var_126->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_126); /* next on <var_126:Iterator[AImport]>*/
}
} else {
goto BREAK_label138;
}
}
BREAK_label138: (void)0;
{
((void(*)(val* self))((((long)var_126&3)?class_info[((long)var_126&3)]:var_126->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_126); /* finish on <var_126:Iterator[AImport]>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#nmodules for (self: ModelBuilder): Array[AModule] */
val* nit__loader___ModelBuilder___nmodules(val* self) {
val* var /* : Array[AModule] */;
val* var1 /* : Array[AModule] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 739);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#nmodules= for (self: ModelBuilder, Array[AModule]) */
void nit__loader___ModelBuilder___nmodules_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModelBuilder___nmodules].val = p0; /* _nmodules on <self:ModelBuilder> */
RET_LABEL:;
}
/* method loader#ModelBuilder#mmodule2nmodule for (self: ModelBuilder): HashMap[MModule, AModule] */
val* nit__loader___ModelBuilder___mmodule2nmodule(val* self) {
val* var /* : HashMap[MModule, AModule] */;
val* var1 /* : HashMap[MModule, AModule] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 742);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mmodule2nmodule= for (self: ModelBuilder, HashMap[MModule, AModule]) */
void nit__loader___ModelBuilder___mmodule2nmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModelBuilder___mmodule2nmodule].val = p0; /* _mmodule2nmodule on <self:ModelBuilder> */
RET_LABEL:;
}
/* method loader#ModelBuilder#mmodule2node for (self: ModelBuilder, MModule): nullable AModule */
val* nit__loader___ModelBuilder___mmodule2node(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[MModule, AModule] */;
val* var2 /* : nullable Object */;
var_mmodule = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModelBuilder__mmodule2nmodule]))(self); /* mmodule2nmodule on <self:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var1, var_mmodule); /* get_or_null on <var1:HashMap[MModule, AModule]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#name for (self: ModulePath): String */
val* nit___nit__ModulePath___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__loader__ModulePath___name].val; /* _name on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 759);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#name= for (self: ModulePath, String) */
void nit___nit__ModulePath___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModulePath___name].val = p0; /* _name on <self:ModulePath> */
RET_LABEL:;
}
/* method loader#ModulePath#filepath for (self: ModulePath): String */
val* nit___nit__ModulePath___filepath(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__loader__ModulePath___filepath].val; /* _filepath on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 763);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#filepath= for (self: ModulePath, String) */
void nit___nit__ModulePath___filepath_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModulePath___filepath].val = p0; /* _filepath on <self:ModulePath> */
RET_LABEL:;
}
/* method loader#ModulePath#mgroup for (self: ModulePath): MGroup */
val* nit___nit__ModulePath___mgroup(val* self) {
val* var /* : MGroup */;
val* var1 /* : MGroup */;
var1 = self->attrs[COLOR_nit__loader__ModulePath___mgroup].val; /* _mgroup on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 766);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#mgroup= for (self: ModulePath, MGroup) */
void nit___nit__ModulePath___mgroup_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModulePath___mgroup].val = p0; /* _mgroup on <self:ModulePath> */
RET_LABEL:;
}
/* method loader#ModulePath#mmodule for (self: ModulePath): nullable MModule */
val* nit___nit__ModulePath___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__loader__ModulePath___mmodule].val; /* _mmodule on <self:ModulePath> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#mmodule= for (self: ModulePath, nullable MModule) */
void nit___nit__ModulePath___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModulePath___mmodule].val = p0; /* _mmodule on <self:ModulePath> */
RET_LABEL:;
}
/* method loader#ModulePath#to_s for (self: ModulePath): String */
val* nit___nit__ModulePath___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__ModulePath__filepath]))(self); /* filepath on <self:ModulePath>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#init for (self: ModulePath) */
void nit___nit__ModulePath___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__ModulePath___standard__kernel__Object__init]))(self); /* init on <self:ModulePath>*/
}
RET_LABEL:;
}
/* method loader#MGroup#module_paths for (self: MGroup): Array[ModulePath] */
val* nit__loader___MGroup___module_paths(val* self) {
val* var /* : Array[ModulePath] */;
val* var1 /* : Array[ModulePath] */;
var1 = self->attrs[COLOR_nit__loader__MGroup___module_paths].val; /* _module_paths on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _module_paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 776);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#MGroup#module_paths= for (self: MGroup, Array[ModulePath]) */
void nit__loader___MGroup___module_paths_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__MGroup___module_paths].val = p0; /* _module_paths on <self:MGroup> */
RET_LABEL:;
}
/* method loader#MGroup#is_interesting for (self: MGroup): Bool */
short int nit__loader___MGroup___is_interesting(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[ModulePath] */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : Array[MModule] */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : POSetElement[MGroup] */;
val* var21 /* : Collection[nullable Object] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
val* var25 /* : nullable MDoc */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__loader__MGroup__module_paths]))(self); /* module_paths on <self:MGroup>*/
}
{
var5 = ((long(*)(val* self))(var4->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var4); /* length on <var4:Array[ModulePath]>*/
}
{
{ /* Inline kernel#Int#> (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var9 = var5 > 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_ = var6;
if (var6){
var3 = var_;
} else {
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MGroup__mmodules]))(self); /* mmodules on <self:MGroup>*/
}
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var10); /* length on <var10:Array[MModule]>*/
}
{
{ /* Inline kernel#Int#> (var11,1l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var18 = var11 > 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var3 = var12;
}
var_19 = var3;
if (var3){
var2 = var_19;
} else {
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__in_nesting]))(self); /* in_nesting on <self:MGroup>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_poset__POSetElement__direct_smallers]))(var20); /* direct_smallers on <var20:POSetElement[MGroup]>*/
}
{
var22 = ((short int(*)(val* self))((((long)var21&3)?class_info[((long)var21&3)]:var21->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var21); /* is_empty on <var21:Collection[nullable Object](Collection[MGroup])>*/
}
var23 = !var22;
var2 = var23;
}
var_24 = var2;
if (var2){
var1 = var_24;
} else {
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mdoc__MEntity__mdoc]))(self); /* mdoc on <self:MGroup>*/
}
if (var25 == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))(var25->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var25, ((val*)NULL)); /* != on <var25:nullable MDoc>*/
var26 = var27;
}
var1 = var26;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#SourceFile#mmodule for (self: SourceFile): nullable MModule */
val* nit__loader___SourceFile___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__loader__SourceFile___mmodule].val; /* _mmodule on <self:SourceFile> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#SourceFile#mmodule= for (self: SourceFile, nullable MModule) */
void nit__loader___SourceFile___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__SourceFile___mmodule].val = p0; /* _mmodule on <self:SourceFile> */
RET_LABEL:;
}
/* method loader#AStdImport#mmodule for (self: AStdImport): nullable MModule */
val* nit__loader___AStdImport___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__loader__AStdImport___mmodule].val; /* _mmodule on <self:AStdImport> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AStdImport#mmodule= for (self: AStdImport, nullable MModule) */
void nit__loader___AStdImport___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__AStdImport___mmodule].val = p0; /* _mmodule on <self:AStdImport> */
RET_LABEL:;
}
/* method loader#AModule#mmodule for (self: AModule): nullable MModule */
val* nit__loader___AModule___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AModule#mmodule= for (self: AModule, nullable MModule) */
void nit__loader___AModule___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__AModule___mmodule].val = p0; /* _mmodule on <self:AModule> */
RET_LABEL:;
}
/* method loader#AModule#is_importation_done for (self: AModule): Bool */
short int nit__loader___AModule___is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__loader__AModule___is_importation_done].s; /* _is_importation_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AModule#is_importation_done= for (self: AModule, Bool) */
void nit__loader___AModule___is_importation_done_61d(val* self, short int p0) {
self->attrs[COLOR_nit__loader__AModule___is_importation_done].s = p0; /* _is_importation_done on <self:AModule> */
RET_LABEL:;
}
