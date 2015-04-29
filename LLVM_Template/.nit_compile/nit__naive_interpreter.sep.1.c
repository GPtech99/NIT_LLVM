#include "nit__naive_interpreter.sep.0.h"
/* method naive_interpreter#ToolContext#opt_discover_call_trace for (self: ToolContext): OptionBool */
val* nit__naive_interpreter___ToolContext___opt_discover_call_trace(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__naive_interpreter__ToolContext___opt_discover_call_trace].val; /* _opt_discover_call_trace on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_discover_call_trace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ToolContext#opt_discover_call_trace= for (self: ToolContext, OptionBool) */
void nit__naive_interpreter___ToolContext___opt_discover_call_trace_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__ToolContext___opt_discover_call_trace].val = p0; /* _opt_discover_call_trace on <self:ToolContext> */
RET_LABEL:;
}
/* method naive_interpreter#ToolContext#init for (self: ToolContext) */
void nit__naive_interpreter___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionBool */;
val* var2 /* : Array[Option] */;
val* var3 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__ToolContext__opt_discover_call_trace]))(self); /* opt_discover_call_trace on <self:ToolContext>*/
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
/* method naive_interpreter#ModelBuilder#run_naive_interpreter for (self: ModelBuilder, MModule, Array[String]) */
void nit__naive_interpreter___ModelBuilder___run_naive_interpreter(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
long var_time0 /* var time0: Int */;
val* var1 /* : ToolContext */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : NaiveInterpreter */;
val* var_interpreter /* var interpreter: NaiveInterpreter */;
long var6 /* : Int */;
long var_time1 /* var time1: Int */;
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
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
var_mainmodule = p0;
var_arguments = p1;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_standard__time__Object__get_time]))(self); /* get_time on <self:ModelBuilder>*/
}
var_time0 = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "*** START INTERPRETING ***";
var4 = standard___standard__NativeString___to_s_with_length(var3, 26l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var1, var2, 1l); /* info on <var1:ToolContext>*/
}
var5 = NEW_nit__NaiveInterpreter(&type_nit__NaiveInterpreter);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__modelbuilder_61d]))(var5, self); /* modelbuilder= on <var5:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule_61d]))(var5, var_mainmodule); /* mainmodule= on <var5:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__arguments_61d]))(var5, var_arguments); /* arguments= on <var5:NaiveInterpreter>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:NaiveInterpreter>*/
}
var_interpreter = var5;
{
((void(*)(val* self, val* p0))(var_interpreter->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__start]))(var_interpreter, var_mainmodule); /* start on <var_interpreter:NaiveInterpreter>*/
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__time__Object__get_time]))(self); /* get_time on <self:ModelBuilder>*/
}
var_time1 = var6;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce8==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "*** END INTERPRETING: ";
var13 = standard___standard__NativeString___to_s_with_length(var12, 22l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = " ***";
var17 = standard___standard__NativeString___to_s_with_length(var16, 4l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce8;
varonce8 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var20 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var21 = var_time1 - var_time0;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var22 = standard__string___Int___Object__to_s(var18);
((struct instance_standard__NativeArray*)var9)->values[1]=var22;
{
var23 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce8 = var9;
{
((void(*)(val* self, val* p0, long p1))(var7->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var7, var23, 2l); /* info on <var7:ToolContext>*/
}
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#modelbuilder for (self: NaiveInterpreter): ModelBuilder */
val* nit___nit__NaiveInterpreter___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___modelbuilder].val; /* _modelbuilder on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 59);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#modelbuilder= for (self: NaiveInterpreter, ModelBuilder) */
void nit___nit__NaiveInterpreter___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___modelbuilder].val = p0; /* _modelbuilder on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#mainmodule for (self: NaiveInterpreter): MModule */
val* nit___nit__NaiveInterpreter___mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___mainmodule].val; /* _mainmodule on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 62);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#mainmodule= for (self: NaiveInterpreter, MModule) */
void nit___nit__NaiveInterpreter___mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___mainmodule].val = p0; /* _mainmodule on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#arguments for (self: NaiveInterpreter): Array[String] */
val* nit___nit__NaiveInterpreter___arguments(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___arguments].val; /* _arguments on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 65);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#arguments= for (self: NaiveInterpreter, Array[String]) */
void nit___nit__NaiveInterpreter___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___arguments].val = p0; /* _arguments on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#mainobj for (self: NaiveInterpreter): nullable Instance */
val* nit___nit__NaiveInterpreter___mainobj(val* self) {
val* var /* : nullable Instance */;
val* var1 /* : nullable Instance */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___mainobj].val; /* _mainobj on <self:NaiveInterpreter> */
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#mainobj= for (self: NaiveInterpreter, nullable Instance) */
void nit___nit__NaiveInterpreter___mainobj_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___mainobj].val = p0; /* _mainobj on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#init for (self: NaiveInterpreter) */
void nit___nit__NaiveInterpreter___standard__kernel__Object__init(val* self) {
val* var /* : MModule */;
val* var1 /* : Model */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : nullable Array[MClass] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : PrimitiveInstance[Bool] */;
val* var9 /* : MModule */;
val* var10 /* : MClassType */;
val* var11 /* : nullable Object */;
val* var12 /* : Instance */;
val* var13 /* : PrimitiveInstance[Bool] */;
val* var14 /* : MModule */;
val* var15 /* : MClassType */;
val* var16 /* : nullable Object */;
val* var17 /* : Instance */;
val* var18 /* : PrimitiveInstance[nullable Object] */;
val* var19 /* : MModule */;
val* var20 /* : Model */;
val* var21 /* : MNullType */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model_base__MEntity__model]))(var); /* model on <var:MModule>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Bool";
var4 = standard___standard__NativeString___to_s_with_length(var3, 4l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__model__Model__get_mclasses_by_name]))(var1, var2); /* get_mclasses_by_name on <var1:Model>*/
}
if (var5 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var5, ((val*)NULL)); /* != on <var5:nullable Array[MClass]>*/
var6 = var7;
}
if (var6){
var8 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__standard__Bool);
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__model__MModule__bool_type]))(var9); /* bool_type on <var9:MModule>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var8, var10); /* mtype= on <var8:PrimitiveInstance[Bool]>*/
}
{
var11 = (val*)((long)(1)<<2|3);
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var8, var11); /* val= on <var8:PrimitiveInstance[Bool]>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:PrimitiveInstance[Bool]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__true_instance_61d]))(self, var8); /* true_instance= on <self:NaiveInterpreter>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__true_instance]))(self); /* true_instance on <self:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(self, var12); /* init_instance_primitive on <self:NaiveInterpreter>*/
}
var13 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__standard__Bool);
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MModule__bool_type]))(var14); /* bool_type on <var14:MModule>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var13, var15); /* mtype= on <var13:PrimitiveInstance[Bool]>*/
}
{
var16 = (val*)((long)(0)<<2|3);
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var13, var16); /* val= on <var13:PrimitiveInstance[Bool]>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13); /* init on <var13:PrimitiveInstance[Bool]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__false_instance_61d]))(self, var13); /* false_instance= on <self:NaiveInterpreter>*/
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__false_instance]))(self); /* false_instance on <self:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(self, var17); /* init_instance_primitive on <self:NaiveInterpreter>*/
}
} else {
}
var18 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__nullable__standard__Object);
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__model_base__MEntity__model]))(var19); /* model on <var19:MModule>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__Model__null_type]))(var20); /* null_type on <var20:Model>*/
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var18, var21); /* mtype= on <var18:PrimitiveInstance[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var18, ((val*)NULL)); /* val= on <var18:PrimitiveInstance[nullable Object]>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:PrimitiveInstance[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__null_instance_61d]))(self, var18); /* null_instance= on <self:NaiveInterpreter>*/
}
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#start for (self: NaiveInterpreter, MModule) */
void nit___nit__NaiveInterpreter___start(val* self, val* p0) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_interpreter /* var interpreter: NaiveInterpreter */;
val* var /* : nullable MClassType */;
val* var_sys_type /* var sys_type: nullable MClassType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MutableInstance */;
val* var_mainobj /* var mainobj: MutableInstance */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : MClass */;
val* var8 /* : nullable MMethod */;
val* var_initprop /* var initprop: nullable MMethod */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[MutableInstance] */;
val* var_ /* var : Array[MutableInstance] */;
val* var12 /* : nullable Instance */;
val* var13 /* : nullable MMethod */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var19 /* : nullable MMethod */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : MClass */;
val* var25 /* : nullable MMethod */;
val* var_mainprop /* var mainprop: nullable MMethod */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : Array[MutableInstance] */;
val* var_29 /* var : Array[MutableInstance] */;
val* var30 /* : nullable Instance */;
var_mainmodule = p0;
var_interpreter = self;
{
var = ((val*(*)(val* self))(var_mainmodule->class->vft[COLOR_nit__model__MModule__sys_type]))(var_mainmodule); /* sys_type on <var_mainmodule:MModule>*/
}
var_sys_type = var;
if (var_sys_type == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_sys_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sys_type, ((val*)NULL)); /* == on <var_sys_type:nullable MClassType>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = NEW_nit__MutableInstance(&type_nit__MutableInstance);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var3, var_sys_type); /* mtype= on <var3:MutableInstance>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:MutableInstance>*/
}
var_mainobj = var3;
{
((void(*)(val* self, val* p0))(var_interpreter->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainobj_61d]))(var_interpreter, var_mainobj); /* mainobj= on <var_interpreter:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var_interpreter->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance]))(var_interpreter, var_mainobj); /* init_instance on <var_interpreter:NaiveInterpreter>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "init";
var6 = standard___standard__NativeString___to_s_with_length(var5, 4l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self))(var_sys_type->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sys_type); /* mclass on <var_sys_type:nullable MClassType(MClassType)>*/
}
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(var_mainmodule->class->vft[COLOR_nit__model__MModule__try_get_primitive_method]))(var_mainmodule, var4, var7); /* try_get_primitive_method on <var_mainmodule:MModule>*/
}
var_initprop = var8;
if (var_initprop == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_initprop->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_initprop, ((val*)NULL)); /* != on <var_initprop:nullable MMethod>*/
var9 = var10;
}
if (var9){
var11 = NEW_standard__Array(&type_standard__Array__nit__MutableInstance);
{
((void(*)(val* self, long p0))(var11->class->vft[COLOR_standard__array__Array__with_capacity]))(var11, 1l); /* with_capacity on <var11:Array[MutableInstance]>*/
}
var_ = var11;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_mainobj); /* push on <var_:Array[MutableInstance]>*/
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(var_interpreter->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(var_interpreter, var_initprop, var_); /* send on <var_interpreter:NaiveInterpreter>*/
}
} else {
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "run";
var17 = standard___standard__NativeString___to_s_with_length(var16, 3l);
var15 = var17;
varonce14 = var15;
}
{
var18 = ((val*(*)(val* self))(var_sys_type->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sys_type); /* mclass on <var_sys_type:nullable MClassType(MClassType)>*/
}
{
var19 = ((val*(*)(val* self, val* p0, val* p1))(var_mainmodule->class->vft[COLOR_nit__model__MModule__try_get_primitive_method]))(var_mainmodule, var15, var18); /* try_get_primitive_method on <var_mainmodule:MModule>*/
}
if (var19!=NULL) {
var13 = var19;
} else {
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "main";
var23 = standard___standard__NativeString___to_s_with_length(var22, 4l);
var21 = var23;
varonce20 = var21;
}
{
var24 = ((val*(*)(val* self))(var_sys_type->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sys_type); /* mclass on <var_sys_type:nullable MClassType(MClassType)>*/
}
{
var25 = ((val*(*)(val* self, val* p0, val* p1))(var_mainmodule->class->vft[COLOR_nit__model__MModule__try_get_primitive_method]))(var_mainmodule, var21, var24); /* try_get_primitive_method on <var_mainmodule:MModule>*/
}
var13 = var25;
}
var_mainprop = var13;
if (var_mainprop == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))(var_mainprop->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mainprop, ((val*)NULL)); /* != on <var_mainprop:nullable MMethod>*/
var26 = var27;
}
if (var26){
var28 = NEW_standard__Array(&type_standard__Array__nit__MutableInstance);
{
((void(*)(val* self, long p0))(var28->class->vft[COLOR_standard__array__Array__with_capacity]))(var28, 1l); /* with_capacity on <var28:Array[MutableInstance]>*/
}
var_29 = var28;
{
((void(*)(val* self, val* p0))(var_29->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_29, var_mainobj); /* push on <var_29:Array[MutableInstance]>*/
}
{
var30 = ((val*(*)(val* self, val* p0, val* p1))(var_interpreter->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(var_interpreter, var_mainprop, var_29); /* send on <var_interpreter:NaiveInterpreter>*/
}
} else {
}
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#is_subtype for (self: NaiveInterpreter, MType, MType): Bool */
short int nit___nit__NaiveInterpreter___is_subtype(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
short int var3 /* : Bool */;
var_sub = p0;
var_sup = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__current_receiver_class]))(self); /* current_receiver_class on <self:NaiveInterpreter>*/
}
{
var3 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__is_subtype]))(var_sub, var1, var2, var_sup); /* is_subtype on <var_sub:MType>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#force_get_primitive_method for (self: NaiveInterpreter, String, MType): MMethod */
val* nit___nit__NaiveInterpreter___force_get_primitive_method(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ModelBuilder */;
val* var3 /* : nullable ANode */;
val* var4 /* : MClass */;
val* var5 /* : MModule */;
val* var6 /* : MMethod */;
var_name = p0;
var_recv = p1;
/* <var_recv:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 112);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__modelbuilder]))(self); /* modelbuilder on <self:NaiveInterpreter>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__current_node]))(self); /* current_node on <self:NaiveInterpreter>*/
}
{
var4 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__model__MClassType__mclass]))(var_recv); /* mclass on <var_recv:MType(MClassType)>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var2->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__force_get_primitive_method]))(var2, var3, var_name, var4, var5); /* force_get_primitive_method on <var2:ModelBuilder>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#returnmark for (self: NaiveInterpreter): nullable Frame */
val* nit___nit__NaiveInterpreter___returnmark(val* self) {
val* var /* : nullable Frame */;
val* var1 /* : nullable Frame */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___returnmark].val; /* _returnmark on <self:NaiveInterpreter> */
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#returnmark= for (self: NaiveInterpreter, nullable Frame) */
void nit___nit__NaiveInterpreter___returnmark_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (returnmark) <p0:nullable Frame> isa nullable FRAME */
/* <p0:nullable Frame> isa nullable FRAME */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__naive_interpreter__NaiveInterpreter__FRAME];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable FRAME", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 116);
fatal_exit(1);
}
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___returnmark].val = p0; /* _returnmark on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#escapemark for (self: NaiveInterpreter): nullable EscapeMark */
val* nit___nit__NaiveInterpreter___escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___escapemark].val; /* _escapemark on <self:NaiveInterpreter> */
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#escapemark= for (self: NaiveInterpreter, nullable EscapeMark) */
void nit___nit__NaiveInterpreter___escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___escapemark].val = p0; /* _escapemark on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#is_escaping for (self: NaiveInterpreter): Bool */
short int nit___nit__NaiveInterpreter___is_escaping(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable Frame */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : nullable EscapeMark */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__returnmark]))(self); /* returnmark on <self:NaiveInterpreter>*/
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var2, ((val*)NULL)); /* != on <var2:nullable Frame>*/
var3 = var4;
}
var_ = var3;
if (var3){
var1 = var_;
} else {
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapemark]))(self); /* escapemark on <self:NaiveInterpreter>*/
}
if (var5 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var5, ((val*)NULL)); /* != on <var5:nullable EscapeMark>*/
var6 = var7;
}
var1 = var6;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#escapevalue for (self: NaiveInterpreter): nullable Instance */
val* nit___nit__NaiveInterpreter___escapevalue(val* self) {
val* var /* : nullable Instance */;
val* var1 /* : nullable Instance */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___escapevalue].val; /* _escapevalue on <self:NaiveInterpreter> */
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#escapevalue= for (self: NaiveInterpreter, nullable Instance) */
void nit___nit__NaiveInterpreter___escapevalue_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___escapevalue].val = p0; /* _escapevalue on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#is_escape for (self: NaiveInterpreter, nullable EscapeMark): Bool */
short int nit___nit__NaiveInterpreter___is_escape(val* self, val* p0) {
short int var /* : Bool */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : nullable EscapeMark */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_escapemark = p0;
if (var_escapemark == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_escapemark, ((val*)NULL)); /* != on <var_escapemark:nullable EscapeMark>*/
var2 = var3;
}
var_ = var2;
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapemark]))(self); /* escapemark on <self:NaiveInterpreter>*/
}
if (var4 == NULL) {
var5 = 0; /* <var_escapemark:nullable EscapeMark(EscapeMark)> cannot be null */
} else {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_escapemark); /* == on <var4:nullable EscapeMark>*/
var5 = var6;
}
var1 = var5;
} else {
var1 = var_;
}
if (var1){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapemark_61d]))(self, ((val*)NULL)); /* escapemark= on <self:NaiveInterpreter>*/
}
var = 1;
goto RET_LABEL;
} else {
var = 0;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#expr for (self: NaiveInterpreter, AExpr): nullable Instance */
val* nit___nit__NaiveInterpreter___expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_n /* var n: AExpr */;
val* var1 /* : Frame */;
val* var_frame /* var frame: Frame */;
val* var2 /* : ANode */;
val* var_old /* var old: ANode */;
val* var3 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var16 /* : MType */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
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
val* var34 /* : MType */;
val* var35 /* : String */;
val* var36 /* : String */;
var_n = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(self); /* frame on <self:NaiveInterpreter>*/
}
var_frame = var1;
{
var2 = ((val*(*)(val* self))(var_frame->class->vft[COLOR_nit__naive_interpreter__Frame__current_node]))(var_frame); /* current_node on <var_frame:Frame>*/
}
var_old = var2;
{
((void(*)(val* self, val* p0))(var_frame->class->vft[COLOR_nit__naive_interpreter__Frame__current_node_61d]))(var_frame, var_n); /* current_node= on <var_frame:Frame>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__naive_interpreter__AExpr__expr]))(var_n, self); /* expr on <var_n:AExpr>*/
}
var_i = var3;
if (var_i == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var5 = var6;
}
var_ = var5;
if (var5){
{
var7 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escaping]))(self); /* is_escaping on <self:NaiveInterpreter>*/
}
var8 = !var7;
var4 = var8;
} else {
var4 = var_;
}
if (var4){
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "inconsitance: no value and not escaping.";
var11 = standard___standard__NativeString___to_s_with_length(var10, 40l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(var_n, var9); /* debug on <var_n:AExpr>*/
}
} else {
}
{
var12 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__typing__AExpr__implicit_cast_to]))(var_n); /* implicit_cast_to on <var_n:AExpr>*/
}
var_implicit_cast_to = var12;
if (var_implicit_cast_to == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_implicit_cast_to->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_implicit_cast_to, ((val*)NULL)); /* != on <var_implicit_cast_to:nullable MType>*/
var13 = var14;
}
if (var13){
{
var15 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__unanchor_type]))(self, var_implicit_cast_to); /* unanchor_type on <self:NaiveInterpreter>*/
}
var_mtype = var15;
if (var_i == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 162);
fatal_exit(1);
} else {
var16 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_i); /* mtype on <var_i:nullable Instance>*/
}
{
var17 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_subtype]))(self, var16, var_mtype); /* is_subtype on <self:NaiveInterpreter>*/
}
var18 = !var17;
if (var18){
if (unlikely(varonce19==NULL)) {
var20 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Cast failed. Expected `";
var24 = standard___standard__NativeString___to_s_with_length(var23, 23l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var20)->values[0]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "`, got `";
var28 = standard___standard__NativeString___to_s_with_length(var27, 8l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var20)->values[2]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "`";
var32 = standard___standard__NativeString___to_s_with_length(var31, 1l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var20)->values[4]=var30;
} else {
var20 = varonce19;
varonce19 = NULL;
}
{
var33 = ((val*(*)(val* self))(var_implicit_cast_to->class->vft[COLOR_standard__string__Object__to_s]))(var_implicit_cast_to); /* to_s on <var_implicit_cast_to:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var20)->values[1]=var33;
if (var_i == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 162);
fatal_exit(1);
} else {
var34 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_i); /* mtype on <var_i:nullable Instance>*/
}
{
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_standard__string__Object__to_s]))(var34); /* to_s on <var34:MType>*/
}
((struct instance_standard__NativeArray*)var20)->values[3]=var35;
{
var36 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
{
((void(*)(val* self, val* p0, val* p1))(var_n->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(var_n, self, var36); /* fatal on <var_n:AExpr>*/
}
} else {
}
} else {
}
{
((void(*)(val* self, val* p0))(var_frame->class->vft[COLOR_nit__naive_interpreter__Frame__current_node_61d]))(var_frame, var_old); /* current_node= on <var_frame:Frame>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#stmt for (self: NaiveInterpreter, nullable AExpr) */
void nit___nit__NaiveInterpreter___stmt(val* self, val* p0) {
val* var_n /* var n: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable AArrayExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Frame */;
val* var6 /* : nullable Array[Instance] */;
val* var_comprehension /* var comprehension: Array[Instance] */;
val* var7 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Frame */;
val* var_frame /* var frame: Frame */;
val* var11 /* : ANode */;
val* var_old /* var old: ANode */;
var_n = p0;
if (var_n == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, ((val*)NULL)); /* == on <var_n:nullable AExpr>*/
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__typing__AExpr__comprehension]))(var_n); /* comprehension on <var_n:nullable AExpr(AExpr)>*/
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var2, ((val*)NULL)); /* != on <var2:nullable AArrayExpr>*/
var3 = var4;
}
if (var3){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(self); /* frame on <self:NaiveInterpreter>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__naive_interpreter__Frame__comprehension]))(var5); /* comprehension on <var5:Frame>*/
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 179);
fatal_exit(1);
}
var_comprehension = var6;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(self, var_n); /* expr on <self:NaiveInterpreter>*/
}
var_i = var7;
if (var_i == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_i, ((val*)NULL)); /* != on <var_i:nullable Instance>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_comprehension->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_comprehension, var_i); /* add on <var_comprehension:Array[Instance]>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(self); /* frame on <self:NaiveInterpreter>*/
}
var_frame = var10;
{
var11 = ((val*(*)(val* self))(var_frame->class->vft[COLOR_nit__naive_interpreter__Frame__current_node]))(var_frame); /* current_node on <var_frame:Frame>*/
}
var_old = var11;
{
((void(*)(val* self, val* p0))(var_frame->class->vft[COLOR_nit__naive_interpreter__Frame__current_node_61d]))(var_frame, var_n); /* current_node= on <var_frame:Frame>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__naive_interpreter__AExpr__stmt]))(var_n, self); /* stmt on <var_n:nullable AExpr(AExpr)>*/
}
{
((void(*)(val* self, val* p0))(var_frame->class->vft[COLOR_nit__naive_interpreter__Frame__current_node_61d]))(var_frame, var_old); /* current_node= on <var_frame:Frame>*/
}
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#onces for (self: NaiveInterpreter): Map[ANode, Instance] */
val* nit___nit__NaiveInterpreter___onces(val* self) {
val* var /* : Map[ANode, Instance] */;
val* var1 /* : Map[ANode, Instance] */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___onces].val; /* _onces on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _onces");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 192);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#onces= for (self: NaiveInterpreter, Map[ANode, Instance]) */
void nit___nit__NaiveInterpreter___onces_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___onces].val = p0; /* _onces on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#bool_instance for (self: NaiveInterpreter, Bool): Instance */
val* nit___nit__NaiveInterpreter___bool_instance(val* self, short int p0) {
val* var /* : Instance */;
short int var_val /* var val: Bool */;
val* var1 /* : Instance */;
val* var2 /* : Instance */;
var_val = p0;
if (var_val){
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__true_instance]))(self); /* true_instance on <self:NaiveInterpreter>*/
}
var = var1;
goto RET_LABEL;
} else {
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__false_instance]))(self); /* false_instance on <self:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#int_instance for (self: NaiveInterpreter, Int): Instance */
val* nit___nit__NaiveInterpreter___int_instance(val* self, long p0) {
val* var /* : Instance */;
long var_val /* var val: Int */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : PrimitiveInstance[Int] */;
val* var4 /* : nullable Object */;
val* var_instance /* var instance: PrimitiveInstance[Int] */;
var_val = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MModule__int_type]))(var1); /* int_type on <var1:MModule>*/
}
var_t = var2;
var3 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__standard__Int);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var3, var_t); /* mtype= on <var3:PrimitiveInstance[Int]>*/
}
{
var4 = (val*)(var_val<<2|1);
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var3, var4); /* val= on <var3:PrimitiveInstance[Int]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:PrimitiveInstance[Int]>*/
}
var_instance = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(self, var_instance); /* init_instance_primitive on <self:NaiveInterpreter>*/
}
var = var_instance;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#char_instance for (self: NaiveInterpreter, Char): Instance */
val* nit___nit__NaiveInterpreter___char_instance(val* self, char p0) {
val* var /* : Instance */;
char var_val /* var val: Char */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : PrimitiveInstance[Char] */;
val* var4 /* : nullable Object */;
val* var_instance /* var instance: PrimitiveInstance[Char] */;
var_val = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MModule__char_type]))(var1); /* char_type on <var1:MModule>*/
}
var_t = var2;
var3 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__standard__Char);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var3, var_t); /* mtype= on <var3:PrimitiveInstance[Char]>*/
}
{
var4 = (val*)((long)(var_val)<<2|2);
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var3, var4); /* val= on <var3:PrimitiveInstance[Char]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:PrimitiveInstance[Char]>*/
}
var_instance = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(self, var_instance); /* init_instance_primitive on <self:NaiveInterpreter>*/
}
var = var_instance;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#float_instance for (self: NaiveInterpreter, Float): Instance */
val* nit___nit__NaiveInterpreter___float_instance(val* self, double p0) {
val* var /* : Instance */;
double var_val /* var val: Float */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : PrimitiveInstance[Float] */;
val* var4 /* : nullable Object */;
val* var_instance /* var instance: PrimitiveInstance[Float] */;
var_val = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MModule__float_type]))(var1); /* float_type on <var1:MModule>*/
}
var_t = var2;
var3 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__standard__Float);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var3, var_t); /* mtype= on <var3:PrimitiveInstance[Float]>*/
}
{
var4 = BOX_standard__Float(var_val); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var3, var4); /* val= on <var3:PrimitiveInstance[Float]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:PrimitiveInstance[Float]>*/
}
var_instance = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(self, var_instance); /* init_instance_primitive on <self:NaiveInterpreter>*/
}
var = var_instance;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#true_instance for (self: NaiveInterpreter): Instance */
val* nit___nit__NaiveInterpreter___true_instance(val* self) {
val* var /* : Instance */;
val* var1 /* : Instance */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___true_instance].val; /* _true_instance on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _true_instance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 228);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#true_instance= for (self: NaiveInterpreter, Instance) */
void nit___nit__NaiveInterpreter___true_instance_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___true_instance].val = p0; /* _true_instance on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#false_instance for (self: NaiveInterpreter): Instance */
val* nit___nit__NaiveInterpreter___false_instance(val* self) {
val* var /* : Instance */;
val* var1 /* : Instance */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___false_instance].val; /* _false_instance on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _false_instance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 231);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#false_instance= for (self: NaiveInterpreter, Instance) */
void nit___nit__NaiveInterpreter___false_instance_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___false_instance].val = p0; /* _false_instance on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#null_instance for (self: NaiveInterpreter): Instance */
val* nit___nit__NaiveInterpreter___null_instance(val* self) {
val* var /* : Instance */;
val* var1 /* : Instance */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___null_instance].val; /* _null_instance on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_instance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 234);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#null_instance= for (self: NaiveInterpreter, Instance) */
void nit___nit__NaiveInterpreter___null_instance_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___null_instance].val = p0; /* _null_instance on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#array_instance for (self: NaiveInterpreter, Array[Instance], MType): Instance */
val* nit___nit__NaiveInterpreter___array_instance(val* self, val* p0, val* p1) {
val* var /* : Instance */;
val* var_values /* var values: Array[Instance] */;
val* var_elttype /* var elttype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : PrimitiveInstance[Array[Instance]] */;
val* var4 /* : MModule */;
val* var5 /* : MClassType */;
val* var_nat /* var nat: PrimitiveInstance[Array[Instance]] */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var8 /* : MutableInstance */;
val* var_res /* var res: MutableInstance */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : MMethod */;
val* var13 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
long var14 /* : Int */;
val* var15 /* : Instance */;
val* var16 /* : nullable Instance */;
var_values = p0;
var_elttype = p1;
{
var1 = ((short int(*)(val* self))(var_elttype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_elttype); /* need_anchor on <var_elttype:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 241);
fatal_exit(1);
}
var3 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__standard__Array__nit__Instance);
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__model__MModule__native_array_type]))(var4, var_elttype); /* native_array_type on <var4:MModule>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var3, var5); /* mtype= on <var3:PrimitiveInstance[Array[Instance]]>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var3, var_values); /* val= on <var3:PrimitiveInstance[Array[Instance]]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:PrimitiveInstance[Array[Instance]]>*/
}
var_nat = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(self, var_nat); /* init_instance_primitive on <self:NaiveInterpreter>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var7 = ((val*(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__model__MModule__array_type]))(var6, var_elttype); /* array_type on <var6:MModule>*/
}
var_mtype = var7;
var8 = NEW_nit__MutableInstance(&type_nit__MutableInstance);
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var8, var_mtype); /* mtype= on <var8:MutableInstance>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:MutableInstance>*/
}
var_res = var8;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance]))(self, var_res); /* init_instance on <self:NaiveInterpreter>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "with_native";
var11 = standard___standard__NativeString___to_s_with_length(var10, 11l);
var9 = var11;
varonce = var9;
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__force_get_primitive_method]))(self, var9, var_mtype); /* force_get_primitive_method on <self:NaiveInterpreter>*/
}
var13 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var13->class->vft[COLOR_standard__array__Array__with_capacity]))(var13, 3l); /* with_capacity on <var13:Array[Instance]>*/
}
var_ = var13;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_res); /* push on <var_:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_nat); /* push on <var_:Array[Instance]>*/
}
{
var14 = ((long(*)(val* self))(var_values->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_values); /* length on <var_values:Array[Instance]>*/
}
{
var15 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(self, var14); /* int_instance on <self:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var15); /* push on <var_:Array[Instance]>*/
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(self, var12, var_); /* send on <self:NaiveInterpreter>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#value_instance for (self: NaiveInterpreter, Object): Instance */
val* nit___nit__NaiveInterpreter___value_instance(val* self, val* p0) {
val* var /* : Instance */;
val* var_object /* var object: Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : Instance */;
long var3 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : Instance */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Instance */;
var_object = p0;
/* <var_object:Object> isa Int */
cltype = type_standard__Int.color;
idtype = type_standard__Int.id;
if(cltype >= (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->type_table[cltype] == idtype;
}
if (var1){
{
var3 = (long)(var_object)>>2;
var2 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(self, var3); /* int_instance on <self:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
} else {
/* <var_object:Object> isa Bool */
cltype5 = type_standard__Bool.color;
idtype6 = type_standard__Bool.id;
if(cltype5 >= (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->type_table[cltype5] == idtype6;
}
if (var4){
{
var8 = (short int)((long)(var_object)>>2);
var7 = ((val*(*)(val* self, short int p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(self, var8); /* bool_instance on <self:NaiveInterpreter>*/
}
var = var7;
goto RET_LABEL;
} else {
/* <var_object:Object> isa String */
cltype10 = type_standard__String.color;
idtype11 = type_standard__String.id;
if(cltype10 >= (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->type_table[cltype10] == idtype11;
}
if (var9){
{
var12 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__string_instance]))(self, var_object); /* string_instance on <self:NaiveInterpreter>*/
}
var = var12;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 262);
fatal_exit(1);
}
}
}
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#native_string_instance for (self: NaiveInterpreter, String): Instance */
val* nit___nit__NaiveInterpreter___native_string_instance(val* self, val* p0) {
val* var /* : Instance */;
val* var_txt /* var txt: String */;
val* var1 /* : FlatBuffer */;
val* var_val /* var val: FlatBuffer */;
val* var2 /* : MModule */;
val* var3 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var4 /* : PrimitiveInstance[Buffer] */;
val* var_instance /* var instance: PrimitiveInstance[Buffer] */;
var_txt = p0;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__FlatBuffer__from]))(var1, var_txt); /* from on <var1:FlatBuffer>*/
}
var_val = var1;
{
((void(*)(val* self, char p0))(var_val->class->vft[COLOR_standard__string__Buffer__add]))(var_val, '\000'); /* add on <var_val:FlatBuffer>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MModule__native_string_type]))(var2); /* native_string_type on <var2:MModule>*/
}
var_t = var3;
var4 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__standard__Buffer);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var4, var_t); /* mtype= on <var4:PrimitiveInstance[Buffer]>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var4, var_val); /* val= on <var4:PrimitiveInstance[Buffer]>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:PrimitiveInstance[Buffer]>*/
}
var_instance = var4;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(self, var_instance); /* init_instance_primitive on <self:NaiveInterpreter>*/
}
var = var_instance;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#string_instance for (self: NaiveInterpreter, String): Instance */
val* nit___nit__NaiveInterpreter___string_instance(val* self, val* p0) {
val* var /* : Instance */;
val* var_txt /* var txt: String */;
val* var1 /* : Instance */;
val* var_nat /* var nat: Instance */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : MType */;
val* var6 /* : MMethod */;
val* var7 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
long var8 /* : Int */;
val* var9 /* : Instance */;
val* var10 /* : nullable Instance */;
val* var_res /* var res: nullable Instance */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
var_txt = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(self, var_txt); /* native_string_instance on <self:NaiveInterpreter>*/
}
var_nat = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "to_s_with_length";
var4 = standard___standard__NativeString___to_s_with_length(var3, 16l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_nat); /* mtype on <var_nat:Instance>*/
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__force_get_primitive_method]))(self, var2, var5); /* force_get_primitive_method on <self:NaiveInterpreter>*/
}
var7 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var7->class->vft[COLOR_standard__array__Array__with_capacity]))(var7, 2l); /* with_capacity on <var7:Array[Instance]>*/
}
var_ = var7;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_nat); /* push on <var_:Array[Instance]>*/
}
{
var8 = ((long(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
var9 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(self, var8); /* int_instance on <self:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var9); /* push on <var_:Array[Instance]>*/
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(self, var6, var_); /* send on <self:NaiveInterpreter>*/
}
var_res = var10;
if (var_res == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable Instance>*/
var11 = var12;
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 282);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#frame for (self: NaiveInterpreter): Frame */
val* nit___nit__NaiveInterpreter___frame(val* self) {
val* var /* : Frame */;
val* var1 /* : List[Frame] */;
val* var2 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(self); /* frames on <self:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var1); /* first on <var1:List[Frame]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#frames for (self: NaiveInterpreter): List[Frame] */
val* nit___nit__NaiveInterpreter___frames(val* self) {
val* var /* : List[Frame] */;
val* var1 /* : List[Frame] */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___frames].val; /* _frames on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _frames");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 292);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#frames= for (self: NaiveInterpreter, List[Frame]) */
void nit___nit__NaiveInterpreter___frames_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (frames) <p0:List[Frame]> isa List[FRAME] */
/* <p0:List[Frame]> isa List[FRAME] */
type_struct = self->type->resolution_table->types[COLOR_standard__List__nit__naive_interpreter__NaiveInterpreter__FRAME];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "List[FRAME]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 292);
fatal_exit(1);
}
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___frames].val = p0; /* _frames on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#stack_trace for (self: NaiveInterpreter): String */
val* nit___nit__NaiveInterpreter___stack_trace(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : List[Frame] */;
val* var_ /* var : List[Frame] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ListIterator[Frame] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_f /* var f: Frame */;
val* var11 /* : NativeArray[String] */;
static val* varonce10;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : MPropDef */;
val* var25 /* : String */;
val* var26 /* : ANode */;
val* var27 /* : Location */;
val* var28 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_b = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = ",---- Stack trace -- - -  -\n";
var4 = standard___standard__NativeString___to_s_with_length(var3, 28l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var2); /* append on <var_b:FlatBuffer>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(self); /* frames on <self:NaiveInterpreter>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:List[Frame]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ListIterator[Frame]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ListIterator[Frame]>*/
}
var_f = var9;
if (unlikely(varonce10==NULL)) {
var11 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "| ";
var15 = standard___standard__NativeString___to_s_with_length(var14, 2l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = " (";
var19 = standard___standard__NativeString___to_s_with_length(var18, 2l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var11)->values[2]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ")\n";
var23 = standard___standard__NativeString___to_s_with_length(var22, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var11)->values[4]=var21;
} else {
var11 = varonce10;
varonce10 = NULL;
}
{
var24 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__naive_interpreter__Frame__mpropdef]))(var_f); /* mpropdef on <var_f:Frame>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24); /* to_s on <var24:MPropDef>*/
}
((struct instance_standard__NativeArray*)var11)->values[1]=var25;
{
var26 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__naive_interpreter__Frame__current_node]))(var_f); /* current_node on <var_f:Frame>*/
}
{
var27 = ((val*(*)(val* self))(var26->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var26); /* location on <var26:ANode>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27); /* to_s on <var27:Location>*/
}
((struct instance_standard__NativeArray*)var11)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var11->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce10 = var11;
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var29); /* append on <var_b:FlatBuffer>*/
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ListIterator[Frame]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ListIterator[Frame]>*/
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "`------------------- - -  -";
var33 = standard___standard__NativeString___to_s_with_length(var32, 27l);
var31 = var33;
varonce30 = var31;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var31); /* append on <var_b:FlatBuffer>*/
}
{
var34 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
var = var34;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#current_node for (self: NaiveInterpreter): nullable ANode */
val* nit___nit__NaiveInterpreter___current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : List[Frame] */;
short int var2 /* : Bool */;
val* var3 /* : List[Frame] */;
val* var4 /* : nullable Object */;
val* var5 /* : ANode */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(self); /* frames on <self:NaiveInterpreter>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:List[Frame]>*/
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(self); /* frames on <self:NaiveInterpreter>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var3); /* first on <var3:List[Frame]>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__naive_interpreter__Frame__current_node]))(var4); /* current_node on <var4:nullable Object(Frame)>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#current_receiver_class for (self: NaiveInterpreter): MClassType */
val* nit___nit__NaiveInterpreter___current_receiver_class(val* self) {
val* var /* : MClassType */;
val* var1 /* : List[Frame] */;
val* var2 /* : nullable Object */;
val* var3 /* : Array[Instance] */;
val* var4 /* : nullable Object */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(self); /* frames on <self:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var1); /* first on <var1:List[Frame]>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__naive_interpreter__Frame__arguments]))(var2); /* arguments on <var2:nullable Object(Frame)>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var3); /* first on <var3:Array[Instance]>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var4); /* mtype on <var4:nullable Object(Instance)>*/
}
/* <var5:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var5->type->table_size) {
var6 = 0;
} else {
var6 = var5->type->type_table[cltype] == idtype;
}
if (unlikely(!var6)) {
var_class_name = var5 == NULL ? "null" : var5->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 317);
fatal_exit(1);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#new_frame for (self: NaiveInterpreter, ANode, MPropDef, Array[Instance]): Frame */
val* nit___nit__NaiveInterpreter___new_frame(val* self, val* p0, val* p1, val* p2) {
val* var /* : Frame */;
val* var_node /* var node: ANode */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_args /* var args: Array[Instance] */;
val* var1 /* : InterpreterFrame */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_node = p0;
var_mpropdef = p1;
var_args = p2;
var1 = NEW_nit__InterpreterFrame(&type_nit__InterpreterFrame);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__naive_interpreter__Frame__current_node_61d]))(var1, var_node); /* current_node= on <var1:InterpreterFrame>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__naive_interpreter__Frame__mpropdef_61d]))(var1, var_mpropdef); /* mpropdef= on <var1:InterpreterFrame>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__naive_interpreter__Frame__arguments_61d]))(var1, var_args); /* arguments= on <var1:InterpreterFrame>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:InterpreterFrame>*/
}
/* <var1:InterpreterFrame> isa FRAME */
type_struct = self->type->resolution_table->types[COLOR_nit__naive_interpreter__NaiveInterpreter__FRAME];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FRAME", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 326);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#fatal for (self: NaiveInterpreter, String) */
void nit___nit__NaiveInterpreter___fatal(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Sys */;
val* var4 /* : Sys */;
var_message = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__current_node]))(self); /* current_node on <self:NaiveInterpreter>*/
}
var_node = var;
if (var_node == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, ((val*)NULL)); /* == on <var_node:nullable ANode>*/
var1 = var2;
}
if (var1){
var3 = glob_sys;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__file__Sys__print]))(var3, var_message); /* print on <var3:Sys>*/
}
} else {
{
((void(*)(val* self, val* p0, val* p1))(var_node->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(var_node, self, var_message); /* fatal on <var_node:nullable ANode(ANode)>*/
}
}
var4 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var4,1l) on <var4:Sys> */
exit(1l);
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#debug for (self: NaiveInterpreter, String) */
void nit___nit__NaiveInterpreter___debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Sys */;
var_message = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__current_node]))(self); /* current_node on <self:NaiveInterpreter>*/
}
var_node = var;
if (var_node == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, ((val*)NULL)); /* == on <var_node:nullable ANode>*/
var1 = var2;
}
if (var1){
var3 = glob_sys;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__file__Sys__print]))(var3, var_message); /* print on <var3:Sys>*/
}
} else {
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(var_node, var_message); /* debug on <var_node:nullable ANode(ANode)>*/
}
}
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#read_variable for (self: NaiveInterpreter, Variable): Instance */
val* nit___nit__NaiveInterpreter___read_variable(val* self, val* p0) {
val* var /* : Instance */;
val* var_v /* var v: Variable */;
val* var1 /* : List[Frame] */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_f /* var f: InterpreterFrame */;
val* var4 /* : Map[Variable, Instance] */;
val* var5 /* : nullable Object */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(self); /* frames on <self:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var1); /* first on <var1:List[Frame]>*/
}
/* <var2:nullable Object(Frame)> isa InterpreterFrame */
cltype = type_nit__InterpreterFrame.color;
idtype = type_nit__InterpreterFrame.id;
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "InterpreterFrame", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 355);
fatal_exit(1);
}
var_f = var2;
{
var4 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__naive_interpreter__InterpreterFrame__map]))(var_f); /* map on <var_f:InterpreterFrame>*/
}
{
var5 = ((val*(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var4, var_v); /* [] on <var4:Map[Variable, Instance]>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#write_variable for (self: NaiveInterpreter, Variable, Instance) */
void nit___nit__NaiveInterpreter___write_variable(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_value /* var value: Instance */;
val* var /* : List[Frame] */;
val* var1 /* : nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_f /* var f: InterpreterFrame */;
val* var3 /* : Map[Variable, Instance] */;
var_v = p0;
var_value = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(self); /* frames on <self:NaiveInterpreter>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var); /* first on <var:List[Frame]>*/
}
/* <var1:nullable Object(Frame)> isa InterpreterFrame */
cltype = type_nit__InterpreterFrame.color;
idtype = type_nit__InterpreterFrame.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "InterpreterFrame", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 362);
fatal_exit(1);
}
var_f = var1;
{
var3 = ((val*(*)(val* self))(var_f->class->vft[COLOR_nit__naive_interpreter__InterpreterFrame__map]))(var_f); /* map on <var_f:InterpreterFrame>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var3, var_v, var_value); /* []= on <var3:Map[Variable, Instance]>*/
}
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#discover_call_trace for (self: NaiveInterpreter): Set[MMethodDef] */
val* nit___nit__NaiveInterpreter___discover_call_trace(val* self) {
val* var /* : Set[MMethodDef] */;
val* var1 /* : Set[MMethodDef] */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___discover_call_trace].val; /* _discover_call_trace on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _discover_call_trace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 366);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#discover_call_trace= for (self: NaiveInterpreter, Set[MMethodDef]) */
void nit___nit__NaiveInterpreter___discover_call_trace_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___discover_call_trace].val = p0; /* _discover_call_trace on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#varargize for (self: NaiveInterpreter, MMethodDef, nullable SignatureMap, Instance, SequenceRead[AExpr]): nullable Array[Instance] */
val* nit___nit__NaiveInterpreter___varargize(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : nullable Array[Instance] */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_map /* var map: nullable SignatureMap */;
val* var_recv /* var recv: Instance */;
val* var_args /* var args: SequenceRead[AExpr] */;
val* var1 /* : MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var4 /* : Array[Instance] */;
val* var_res /* var res: Array[Instance] */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : NativeArray[String] */;
static val* varonce;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
long var25 /* : Int */;
val* var26 /* : String */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var_ /* var : SequenceRead[AExpr] */;
val* var30 /* : Iterator[nullable Object] */;
val* var_31 /* var : IndexedIterator[AExpr] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
val* var34 /* : nullable Instance */;
val* var_e /* var e: nullable Instance */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : Array[Instance] */;
long var38 /* : Int */;
val* var_exprs /* var exprs: Array[Instance] */;
val* var_39 /* var : SequenceRead[AExpr] */;
val* var40 /* : Iterator[nullable Object] */;
val* var_41 /* var : IndexedIterator[AExpr] */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_ne44 /* var ne: AExpr */;
val* var45 /* : nullable Instance */;
val* var_e46 /* var e: nullable Instance */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
long var_i /* var i: Int */;
long var50 /* : Int */;
long var_51 /* var : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var55 /* : Bool */;
val* var56 /* : Array[MParameter] */;
val* var57 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var58 /* : ArrayMap[Int, Int] */;
val* var59 /* : nullable Object */;
val* var60 /* : nullable Object */;
val* var_j /* var j: nullable Int */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : Instance */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var_69 /* var : Bool */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
short int var77 /* : Bool */;
long var78 /* : Int */;
val* var79 /* : Array[nullable Object] */;
long var80 /* : Int */;
val* var_vararg /* var vararg: Array[Instance] */;
val* var81 /* : MType */;
val* var82 /* : MModule */;
val* var83 /* : MType */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
val* var88 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var89 /* : Instance */;
val* var_arg /* var arg: Instance */;
val* var90 /* : nullable Object */;
long var91 /* : Int */;
long var92 /* : Int */;
var_mpropdef = p0;
var_map = p1;
var_recv = p2;
var_args = p3;
{
var2 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__new_msignature]))(var_mpropdef); /* new_msignature on <var_mpropdef:MMethodDef>*/
}
if (var2!=NULL) {
var1 = var2;
} else {
{
var3 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:MMethodDef>*/
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 375);
fatal_exit(1);
}
var1 = var3;
}
var_msignature = var1;
var4 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Instance]>*/
}
var_res = var4;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_recv); /* add on <var_res:Array[Instance]>*/
}
{
var5 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#== (var5,0l) on <var5:Int> */
var8 = var5 == 0l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = var_res;
goto RET_LABEL;
} else {
}
if (var_map == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_map->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_map, ((val*)NULL)); /* == on <var_map:nullable SignatureMap>*/
var9 = var10;
}
if (var9){
{
var11 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
var12 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
{
{ /* Inline kernel#Int#== (var11,var12) on <var11:Int> */
var15 = var11 == var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (unlikely(!var13)) {
if (unlikely(varonce==NULL)) {
var16 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Expected ";
var20 = standard___standard__NativeString___to_s_with_length(var19, 9l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = " args, got ";
var24 = standard___standard__NativeString___to_s_with_length(var23, 11l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var16)->values[2]=var22;
} else {
var16 = varonce;
varonce = NULL;
}
{
var25 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
var26 = standard__string___Int___Object__to_s(var25);
((struct instance_standard__NativeArray*)var16)->values[1]=var26;
{
var27 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
var28 = standard__string___Int___Object__to_s(var27);
((struct instance_standard__NativeArray*)var16)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce = var16;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__debug]))(self, var29); /* debug on <self:NaiveInterpreter>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 382);
fatal_exit(1);
}
var_ = var_args;
{
var30 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[AExpr]>*/
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:IndexedIterator[AExpr]>*/
}
if (var32){
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:IndexedIterator[AExpr]>*/
}
var_ne = var33;
{
var34 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(self, var_ne); /* expr on <self:NaiveInterpreter>*/
}
var_e = var34;
if (var_e == NULL) {
var35 = 1; /* is null */
} else {
var35 = 0; /* arg is null but recv is not */
}
if (0) {
var36 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e, ((val*)NULL)); /* == on <var_e:nullable Instance>*/
var35 = var36;
}
if (var35){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_e); /* add on <var_res:Array[Instance]>*/
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:IndexedIterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:IndexedIterator[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
var37 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
var38 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
((void(*)(val* self, long p0))(var37->class->vft[COLOR_standard__array__Array__with_capacity]))(var37, var38); /* with_capacity on <var37:Array[Instance]>*/
}
var_exprs = var37;
var_39 = var_args;
{
var40 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_39); /* iterator on <var_39:SequenceRead[AExpr]>*/
}
var_41 = var40;
for(;;) {
{
var42 = ((short int(*)(val* self))((((long)var_41&3)?class_info[((long)var_41&3)]:var_41->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_41); /* is_ok on <var_41:IndexedIterator[AExpr]>*/
}
if (var42){
{
var43 = ((val*(*)(val* self))((((long)var_41&3)?class_info[((long)var_41&3)]:var_41->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_41); /* item on <var_41:IndexedIterator[AExpr]>*/
}
var_ne44 = var43;
{
var45 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(self, var_ne44); /* expr on <self:NaiveInterpreter>*/
}
var_e46 = var45;
if (var_e46 == NULL) {
var47 = 1; /* is null */
} else {
var47 = 0; /* arg is null but recv is not */
}
if (0) {
var48 = ((short int(*)(val* self, val* p0))(var_e46->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e46, ((val*)NULL)); /* == on <var_e46:nullable Instance>*/
var47 = var48;
}
if (var47){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_exprs->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_exprs, var_e46); /* add on <var_exprs:Array[Instance]>*/
}
{
((void(*)(val* self))((((long)var_41&3)?class_info[((long)var_41&3)]:var_41->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_41); /* next on <var_41:IndexedIterator[AExpr]>*/
}
} else {
goto BREAK_label49;
}
}
BREAK_label49: (void)0;
{
((void(*)(val* self))((((long)var_41&3)?class_info[((long)var_41&3)]:var_41->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_41); /* finish on <var_41:IndexedIterator[AExpr]>*/
}
var_i = 0l;
{
var50 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:MSignature>*/
}
var_51 = var50;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_51) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_51:Int> isa OTHER */
/* <var_51:Int> isa OTHER */
var54 = 1; /* easy <var_51:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var55 = var_i < var_51;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
{
var56 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:MSignature>*/
}
{
var57 = ((val*(*)(val* self, long p0))(var56->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var56, var_i); /* [] on <var56:Array[MParameter]>*/
}
var_param = var57;
{
var58 = ((val*(*)(val* self))(var_map->class->vft[COLOR_nit__typing__SignatureMap__map]))(var_map); /* map on <var_map:nullable SignatureMap(SignatureMap)>*/
}
{
var60 = (val*)(var_i<<2|1);
var59 = ((val*(*)(val* self, val* p0))(var58->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var58, var60); /* get_or_null on <var58:ArrayMap[Int, Int]>*/
}
var_j = var59;
if (var_j == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_j,((val*)NULL)) on <var_j:nullable Int> */
var64 = 0; /* incompatible types Int vs. null; cannot be NULL */
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
{
var65 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__null_instance]))(self); /* null_instance on <self:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var65); /* add on <var_res:Array[Instance]>*/
}
goto BREAK_label66;
} else {
}
{
var68 = ((short int(*)(val* self))(var_param->class->vft[COLOR_nit__model__MParameter__is_vararg]))(var_param); /* is_vararg on <var_param:MParameter>*/
}
var_69 = var68;
if (var68){
{
var70 = ((long(*)(val* self))(var_map->class->vft[COLOR_nit__typing__SignatureMap__vararg_decl]))(var_map); /* vararg_decl on <var_map:nullable SignatureMap(SignatureMap)>*/
}
{
{ /* Inline kernel#Int#> (var70,0l) on <var70:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var73 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var77 = var70 > 0l;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var67 = var71;
} else {
var67 = var_69;
}
if (var67){
{
var78 = ((long(*)(val* self))(var_map->class->vft[COLOR_nit__typing__SignatureMap__vararg_decl]))(var_map); /* vararg_decl on <var_map:nullable SignatureMap(SignatureMap)>*/
}
{
var80 = (long)(var_j)>>2;
var79 = ((val*(*)(val* self, long p0, long p1))(var_exprs->class->vft[COLOR_standard__array__AbstractArrayRead__sub]))(var_exprs, var80, var78); /* sub on <var_exprs:Array[Instance]>*/
}
var_vararg = var79;
{
var81 = ((val*(*)(val* self))(var_param->class->vft[COLOR_nit__model__MParameter__mtype]))(var_param); /* mtype on <var_param:MParameter>*/
}
{
var82 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var83 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var83:MType> isa MClassType */
cltype85 = type_nit__MClassType.color;
idtype86 = type_nit__MClassType.id;
if(cltype85 >= var83->type->table_size) {
var84 = 0;
} else {
var84 = var83->type->type_table[cltype85] == idtype86;
}
if (unlikely(!var84)) {
var_class_name87 = var83 == NULL ? "null" : var83->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 411);
fatal_exit(1);
}
{
var88 = ((val*(*)(val* self, val* p0, val* p1))(var81->class->vft[COLOR_nit__model__MType__anchor_to]))(var81, var82, var83); /* anchor_to on <var81:MType>*/
}
var_elttype = var88;
{
var89 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__array_instance]))(self, var_vararg, var_elttype); /* array_instance on <self:NaiveInterpreter>*/
}
var_arg = var89;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_arg); /* add on <var_res:Array[Instance]>*/
}
goto BREAK_label66;
} else {
}
{
var91 = (long)(var_j)>>2;
var90 = ((val*(*)(val* self, long p0))(var_exprs->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_exprs, var91); /* [] on <var_exprs:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var90); /* add on <var_res:Array[Instance]>*/
}
BREAK_label66: (void)0;
var92 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var92;
} else {
goto BREAK_label93;
}
}
BREAK_label93: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#call for (self: NaiveInterpreter, MMethodDef, Array[Instance]): nullable Instance */
val* nit___nit__NaiveInterpreter___call(val* self, val* p0, val* p1) {
val* var /* : nullable Instance */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[Instance] */;
short int var1 /* : Bool */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionBool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
val* var7 /* : Set[MMethodDef] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Set[MMethodDef] */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var17 /* : String */;
long var18 /* : Int */;
val* var19 /* : nullable MSignature */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
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
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : nullable Object */;
val* var_val /* var val: nullable Object */;
val* var47 /* : ModelBuilder */;
val* var48 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : List[Frame] */;
val* var53 /* : Frame */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : MProperty */;
val* var69 /* : String */;
val* var70 /* : nullable Object */;
val* var71 /* : MType */;
val* var72 /* : String */;
val* var73 /* : String */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
val* var77 /* : nullable Instance */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
val* var81 /* : nullable Instance */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
val* var94 /* : String */;
val* var95 /* : Location */;
val* var96 /* : String */;
val* var97 /* : String */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
val* var100 /* : Instance */;
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
val* var111 /* : String */;
val* var112 /* : String */;
var_mpropdef = p0;
var_args = p1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__modelbuilder]))(self); /* modelbuilder on <self:NaiveInterpreter>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var2); /* toolcontext on <var2:ModelBuilder>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__naive_interpreter__ToolContext__opt_discover_call_trace]))(var3); /* opt_discover_call_trace on <var3:ToolContext>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_opts__Option__value]))(var4); /* value on <var4:OptionBool>*/
}
var6 = (short int)((long)(var5)>>2);
var_ = var6;
if (var6){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__discover_call_trace]))(self); /* discover_call_trace on <self:NaiveInterpreter>*/
}
{
var8 = ((short int(*)(val* self, val* p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var7, var_mpropdef); /* has on <var7:Set[MMethodDef]>*/
}
var9 = !var8;
var1 = var9;
} else {
var1 = var_;
}
if (var1){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__discover_call_trace]))(self); /* discover_call_trace on <self:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var10, var_mpropdef); /* add on <var10:Set[MMethodDef]>*/
}
if (unlikely(varonce==NULL)) {
var11 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Discovered ";
var15 = standard___standard__NativeString___to_s_with_length(var14, 11l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var11)->values[0]=var13;
} else {
var11 = varonce;
varonce = NULL;
}
{
var16 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var11)->values[1]=var16;
{
var17 = ((val*(*)(val* self))(var11->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__debug]))(self, var17); /* debug on <self:NaiveInterpreter>*/
}
} else {
}
{
var18 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[Instance]>*/
}
{
var19 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:MMethodDef>*/
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 430);
fatal_exit(1);
} else {
var20 = ((long(*)(val* self))(var19->class->vft[COLOR_nit__model__MSignature__arity]))(var19); /* arity on <var19:nullable MSignature>*/
}
{
{ /* Inline kernel#Int#+ (var20,1l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var24 = var20 + 1l;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var18,var21) on <var18:Int> */
var27 = var18 == var21;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (unlikely(!var25)) {
if (unlikely(varonce28==NULL)) {
var29 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Invalid arity for ";
var33 = standard___standard__NativeString___to_s_with_length(var32, 18l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ". ";
var37 = standard___standard__NativeString___to_s_with_length(var36, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[2]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " arguments given.";
var41 = standard___standard__NativeString___to_s_with_length(var40, 17l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var29)->values[4]=var39;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var42 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var29)->values[1]=var42;
{
var43 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[Instance]>*/
}
var44 = standard__string___Int___Object__to_s(var43);
((struct instance_standard__NativeArray*)var29)->values[3]=var44;
{
var45 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__debug]))(self, var45); /* debug on <self:NaiveInterpreter>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 430);
fatal_exit(1);
}
{
var46 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__constant_value]))(var_mpropdef); /* constant_value on <var_mpropdef:MMethodDef>*/
}
var_val = var46;
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__modelbuilder]))(self); /* modelbuilder on <self:NaiveInterpreter>*/
}
{
var48 = ((val*(*)(val* self, val* p0))(var47->class->vft[COLOR_nit__modelize_property__ModelBuilder__mpropdef2node]))(var47, var_mpropdef); /* mpropdef2node on <var47:ModelBuilder>*/
}
var_node = var48;
{
var49 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__is_abstract]))(var_mpropdef); /* is_abstract on <var_mpropdef:MMethodDef>*/
}
if (var49){
if (var_node == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
var51 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ANode>*/
var50 = var51;
}
if (var50){
{
var52 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(self); /* frames on <self:NaiveInterpreter>*/
}
{
var53 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__new_frame]))(self, var_node, var_mpropdef, var_args); /* new_frame on <self:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var52->class->vft[COLOR_standard__abstract_collection__Sequence__unshift]))(var52, var53); /* unshift on <var52:List[Frame]>*/
}
} else {
}
if (unlikely(varonce54==NULL)) {
var55 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "Abstract method `";
var59 = standard___standard__NativeString___to_s_with_length(var58, 17l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var55)->values[0]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "` called on `";
var63 = standard___standard__NativeString___to_s_with_length(var62, 13l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var55)->values[2]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "`";
var67 = standard___standard__NativeString___to_s_with_length(var66, 1l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var55)->values[4]=var65;
} else {
var55 = varonce54;
varonce54 = NULL;
}
{
var68 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MMethodDef>*/
}
{
var69 = ((val*(*)(val* self))(var68->class->vft[COLOR_nit__model_base__MEntity__name]))(var68); /* name on <var68:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var55)->values[1]=var69;
{
var70 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
{
var71 = ((val*(*)(val* self))(var70->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var70); /* mtype on <var70:nullable Object(Instance)>*/
}
{
var72 = ((val*(*)(val* self))(var71->class->vft[COLOR_standard__string__Object__to_s]))(var71); /* to_s on <var71:MType>*/
}
((struct instance_standard__NativeArray*)var55)->values[3]=var72;
{
var73 = ((val*(*)(val* self))(var55->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__fatal]))(self, var73); /* fatal on <self:NaiveInterpreter>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 441);
fatal_exit(1);
} else {
}
/* <var_node:nullable ANode> isa APropdef */
cltype75 = type_nit__APropdef.color;
idtype76 = type_nit__APropdef.id;
if(var_node == NULL) {
var74 = 0;
} else {
if(cltype75 >= var_node->type->table_size) {
var74 = 0;
} else {
var74 = var_node->type->type_table[cltype75] == idtype76;
}
}
if (var74){
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__parameter_check]))(self, var_node, var_mpropdef, var_args); /* parameter_check on <self:NaiveInterpreter>*/
}
{
var77 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_node->class->vft[COLOR_nit__naive_interpreter__APropdef__call]))(var_node, self, var_mpropdef, var_args); /* call on <var_node:nullable ANode(APropdef)>*/
}
var = var77;
goto RET_LABEL;
} else {
/* <var_node:nullable ANode> isa AClassdef */
cltype79 = type_nit__AClassdef.color;
idtype80 = type_nit__AClassdef.id;
if(var_node == NULL) {
var78 = 0;
} else {
if(cltype79 >= var_node->type->table_size) {
var78 = 0;
} else {
var78 = var_node->type->type_table[cltype79] == idtype80;
}
}
if (var78){
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__parameter_check]))(self, var_node, var_mpropdef, var_args); /* parameter_check on <self:NaiveInterpreter>*/
}
{
var81 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_node->class->vft[COLOR_nit__naive_interpreter__AClassdef__call]))(var_node, self, var_mpropdef, var_args); /* call on <var_node:nullable ANode(AClassdef)>*/
}
var = var81;
goto RET_LABEL;
} else {
if (var_node == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
var83 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ANode>*/
var82 = var83;
}
if (var82){
if (unlikely(varonce84==NULL)) {
var85 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "Fatal Error: method ";
var89 = standard___standard__NativeString___to_s_with_length(var88, 20l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var85)->values[0]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " associated to unexpected AST node ";
var93 = standard___standard__NativeString___to_s_with_length(var92, 35l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var85)->values[2]=var91;
} else {
var85 = varonce84;
varonce84 = NULL;
}
{
var94 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var85)->values[1]=var94;
{
var95 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_node); /* location on <var_node:nullable ANode(ANode)>*/
}
{
var96 = ((val*(*)(val* self))(var95->class->vft[COLOR_standard__string__Object__to_s]))(var95); /* to_s on <var95:Location>*/
}
((struct instance_standard__NativeArray*)var85)->values[3]=var96;
{
var97 = ((val*(*)(val* self))(var85->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__fatal]))(self, var97); /* fatal on <self:NaiveInterpreter>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 452);
fatal_exit(1);
} else {
if (var_val == NULL) {
var98 = 0; /* is null */
} else {
var98 = 1; /* arg is null and recv is not */
}
if (0) {
var99 = ((short int(*)(val* self, val* p0))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_val, ((val*)NULL)); /* != on <var_val:nullable Object>*/
var98 = var99;
}
if (var98){
{
var100 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__value_instance]))(self, var_val); /* value_instance on <self:NaiveInterpreter>*/
}
var = var100;
goto RET_LABEL;
} else {
if (unlikely(varonce101==NULL)) {
var102 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "Fatal Error: method ";
var106 = standard___standard__NativeString___to_s_with_length(var105, 20l);
var104 = var106;
varonce103 = var104;
}
((struct instance_standard__NativeArray*)var102)->values[0]=var104;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = " not found in the AST";
var110 = standard___standard__NativeString___to_s_with_length(var109, 21l);
var108 = var110;
varonce107 = var108;
}
((struct instance_standard__NativeArray*)var102)->values[2]=var108;
} else {
var102 = varonce101;
varonce101 = NULL;
}
{
var111 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var102)->values[1]=var111;
{
var112 = ((val*(*)(val* self))(var102->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var102); /* native_to_s on <var102:NativeArray[String]>*/
}
varonce101 = var102;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__fatal]))(self, var112); /* fatal on <self:NaiveInterpreter>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 457);
fatal_exit(1);
}
}
}
}
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#parameter_check for (self: NaiveInterpreter, ANode, MMethodDef, Array[Instance]) */
void nit___nit__NaiveInterpreter___parameter_check(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: ANode */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[Instance] */;
val* var /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MProperty */;
val* var11 /* : MPropDef */;
val* var12 /* : nullable MSignature */;
val* var13 /* : Array[MParameter] */;
val* var14 /* : nullable Object */;
val* var15 /* : MType */;
val* var_origmtype /* var origmtype: MType */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Array[MParameter] */;
val* var19 /* : nullable Object */;
val* var20 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var21 /* : nullable Object */;
val* var22 /* : MType */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var_anchor /* var anchor: MClassType */;
val* var27 /* : MModule */;
val* var28 /* : MType */;
val* var_amtype /* var amtype: MType */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
val* var36 /* : nullable Object */;
val* var37 /* : MType */;
val* var38 /* : MModule */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : NativeArray[String] */;
static val* varonce;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
val* var54 /* : String */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
val* var62 /* : nullable Object */;
val* var63 /* : MType */;
val* var64 /* : String */;
val* var65 /* : String */;
long var66 /* : Int */;
var_node = p0;
var_mpropdef = p1;
var_args = p2;
{
var = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:MMethodDef>*/
}
var_msignature = var;
var_i = 0l;
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 465);
fatal_exit(1);
} else {
var1 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:nullable MSignature>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 467);
fatal_exit(1);
} else {
var6 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__vararg_rank]))(var_msignature); /* vararg_rank on <var_msignature:nullable MSignature>*/
}
{
{ /* Inline kernel#Int#== (var6,var_i) on <var6:Int> */
var9 = var6 == var_i;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
goto BREAK_label;
} else {
}
{
var10 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MMethodDef>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model__MProperty__intro]))(var10); /* intro on <var10:MProperty(MMethod)>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var11); /* msignature on <var11:MPropDef(MMethodDef)>*/
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 470);
fatal_exit(1);
} else {
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model__MSignature__mparameters]))(var12); /* mparameters on <var12:nullable MSignature>*/
}
{
var14 = ((val*(*)(val* self, long p0))(var13->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var13, var_i); /* [] on <var13:Array[MParameter]>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MParameter__mtype]))(var14); /* mtype on <var14:nullable Object(MParameter)>*/
}
var_origmtype = var15;
{
var16 = ((short int(*)(val* self))(var_origmtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_origmtype); /* need_anchor on <var_origmtype:MType>*/
}
var17 = !var16;
if (var17){
goto BREAK_label;
} else {
}
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 476);
fatal_exit(1);
} else {
var18 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:nullable MSignature>*/
}
{
var19 = ((val*(*)(val* self, long p0))(var18->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var18, var_i); /* [] on <var18:Array[MParameter]>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__model__MParameter__mtype]))(var19); /* mtype on <var19:nullable Object(MParameter)>*/
}
var_mtype = var20;
{
var21 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var21); /* mtype on <var21:nullable Object(Instance)>*/
}
/* <var22:MType> isa MClassType */
cltype24 = type_nit__MClassType.color;
idtype25 = type_nit__MClassType.id;
if(cltype24 >= var22->type->table_size) {
var23 = 0;
} else {
var23 = var22->type->type_table[cltype24] == idtype25;
}
if (unlikely(!var23)) {
var_class_name26 = var22 == NULL ? "null" : var22->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 477);
fatal_exit(1);
}
var_anchor = var22;
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var28 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var27, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var_amtype = var28;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var35 = var_i + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var36 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var29); /* [] on <var_args:Array[Instance]>*/
}
{
var37 = ((val*(*)(val* self))(var36->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var36); /* mtype on <var36:nullable Object(Instance)>*/
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var39 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var37->class->vft[COLOR_nit__model__MType__is_subtype]))(var37, var38, var_anchor, var_amtype); /* is_subtype on <var37:MType>*/
}
var40 = !var39;
if (var40){
if (unlikely(varonce==NULL)) {
var41 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Cast failed. Expected `";
var45 = standard___standard__NativeString___to_s_with_length(var44, 23l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "`, got `";
var49 = standard___standard__NativeString___to_s_with_length(var48, 8l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[2]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "`";
var53 = standard___standard__NativeString___to_s_with_length(var52, 1l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var41)->values[4]=var51;
} else {
var41 = varonce;
varonce = NULL;
}
{
var54 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var41)->values[1]=var54;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var57 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var61 = var_i + 1l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
var62 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var55); /* [] on <var_args:Array[Instance]>*/
}
{
var63 = ((val*(*)(val* self))(var62->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var62); /* mtype on <var62:nullable Object(Instance)>*/
}
{
var64 = ((val*(*)(val* self))(var63->class->vft[COLOR_standard__string__Object__to_s]))(var63); /* to_s on <var63:MType>*/
}
((struct instance_standard__NativeArray*)var41)->values[3]=var64;
{
var65 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce = var41;
{
((void(*)(val* self, val* p0, val* p1))(var_node->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(var_node, self, var65); /* fatal on <var_node:ANode>*/
}
} else {
}
BREAK_label: (void)0;
var66 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var66;
} else {
goto BREAK_label67;
}
}
BREAK_label67: (void)0;
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#send_commons for (self: NaiveInterpreter, MMethod, Array[Instance], MType): nullable Instance */
val* nit___nit__NaiveInterpreter___send_commons(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Instance */;
val* var_mproperty /* var mproperty: MMethod */;
val* var_args /* var args: Array[Instance] */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var17 /* : Instance */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var25 /* : nullable Object */;
short int var26 /* : Bool */;
val* var27 /* : Instance */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
var_mproperty = p0;
var_args = p1;
var_mtype = p2;
/* <var_mtype:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var1 = 0;
} else {
var1 = var_mtype->type->type_table[cltype] == idtype;
}
if (var1){
{
var3 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mproperty); /* name on <var_mproperty:MMethod>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "==";
var6 = standard___standard__NativeString___to_s_with_length(var5, 2l);
var4 = var6;
varonce = var4;
}
{
var7 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var4); /* == on <var3:String>*/
}
var_ = var7;
if (var7){
var2 = var_;
} else {
{
var8 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mproperty); /* name on <var_mproperty:MMethod>*/
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "is_same_instance";
var12 = standard___standard__NativeString___to_s_with_length(var11, 16l);
var10 = var12;
varonce9 = var10;
}
{
var13 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var8, var10); /* == on <var8:String>*/
}
var2 = var13;
}
if (var2){
{
var14 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var15 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var16 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var14, var15); /* == on <var14:nullable Object(Instance)>*/
}
{
var17 = ((val*(*)(val* self, short int p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(self, var16); /* bool_instance on <self:NaiveInterpreter>*/
}
var = var17;
goto RET_LABEL;
} else {
{
var18 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mproperty); /* name on <var_mproperty:MMethod>*/
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "!=";
var22 = standard___standard__NativeString___to_s_with_length(var21, 2l);
var20 = var22;
varonce19 = var20;
}
{
var23 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var20); /* == on <var18:String>*/
}
if (var23){
{
var24 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var25 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var26 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var24, var25); /* != on <var24:nullable Object(Instance)>*/
}
{
var27 = ((val*(*)(val* self, short int p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(self, var26); /* bool_instance on <self:NaiveInterpreter>*/
}
var = var27;
goto RET_LABEL;
} else {
}
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Receiver is null";
var31 = standard___standard__NativeString___to_s_with_length(var30, 16l);
var29 = var31;
varonce28 = var29;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__fatal]))(self, var29); /* fatal on <self:NaiveInterpreter>*/
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#callsite for (self: NaiveInterpreter, nullable CallSite, Array[Instance]): nullable Instance */
val* nit___nit__NaiveInterpreter___callsite(val* self, val* p0, val* p1) {
val* var /* : nullable Instance */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var_arguments /* var arguments: Array[Instance] */;
val* var1 /* : MMethodDef */;
val* var2 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_recv /* var recv: Instance */;
long var_i /* var i: Int */;
val* var_ /* var : Array[MProperty] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MProperty] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : Array[Instance] */;
val* var_12 /* var : Array[Instance] */;
val* var_args /* var args: Array[Instance] */;
val* var13 /* : MPropDef */;
val* var14 /* : nullable MSignature */;
val* var15 /* : Array[MParameter] */;
val* var_16 /* var : Array[MParameter] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : ArrayIterator[MParameter] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_x /* var x: MParameter */;
val* var21 /* : nullable Object */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name;
long var27 /* : Int */;
val* var28 /* : nullable Instance */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : nullable Object */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : MMethod */;
val* var49 /* : Array[Instance] */;
val* var_50 /* var : Array[Instance] */;
val* var51 /* : nullable Instance */;
val* var52 /* : MMethod */;
val* var53 /* : nullable Instance */;
var_callsite = p0;
var_arguments = p1;
if (var_callsite == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 504);
fatal_exit(1);
} else {
var1 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mpropdef]))(var_callsite); /* mpropdef on <var_callsite:nullable CallSite>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var1); /* initializers on <var1:MMethodDef>*/
}
var_initializers = var2;
{
var3 = ((short int(*)(val* self))(var_initializers->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_initializers); /* is_empty on <var_initializers:Array[MProperty]>*/
}
var4 = !var3;
if (var4){
{
var5 = ((val*(*)(val* self))(var_arguments->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_arguments); /* first on <var_arguments:Array[Instance]>*/
}
var_recv = var5;
var_i = 1l;
var_ = var_initializers;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MProperty]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MProperty]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MProperty]>*/
}
var_p = var9;
/* <var_p:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_p->type->table_size) {
var10 = 0;
} else {
var10 = var_p->type->type_table[cltype] == idtype;
}
if (var10){
var11 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var11->class->vft[COLOR_standard__array__Array__with_capacity]))(var11, 1l); /* with_capacity on <var11:Array[Instance]>*/
}
var_12 = var11;
{
((void(*)(val* self, val* p0))(var_12->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_12, var_recv); /* push on <var_12:Array[Instance]>*/
}
var_args = var_12;
{
var13 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MProperty__intro]))(var_p); /* intro on <var_p:MProperty(MMethod)>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var13); /* msignature on <var13:MPropDef(MMethodDef)>*/
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 511);
fatal_exit(1);
} else {
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MSignature__mparameters]))(var14); /* mparameters on <var14:nullable MSignature>*/
}
var_16 = var15;
{
var17 = ((val*(*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_16); /* iterator on <var_16:Array[MParameter]>*/
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:ArrayIterator[MParameter]>*/
}
if (var19){
{
var20 = ((val*(*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:ArrayIterator[MParameter]>*/
}
var_x = var20;
{
var21 = ((val*(*)(val* self, long p0))(var_arguments->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_i); /* [] on <var_arguments:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_args, var21); /* add on <var_args:Array[Instance]>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var27 = var_i + 1l;
var22 = var27;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
{
((void(*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:ArrayIterator[MParameter]>*/
}
{
var28 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(self, var_p, var_args); /* send on <self:NaiveInterpreter>*/
}
} else {
/* <var_p:MProperty> isa MAttribute */
cltype30 = type_nit__MAttribute.color;
idtype31 = type_nit__MAttribute.id;
if(cltype30 >= var_p->type->table_size) {
var29 = 0;
} else {
var29 = var_p->type->type_table[cltype30] == idtype31;
}
if (var29){
/* <var_recv:Instance> isa MutableInstance */
cltype33 = type_nit__MutableInstance.color;
idtype34 = type_nit__MutableInstance.id;
if(cltype33 >= var_recv->type->table_size) {
var32 = 0;
} else {
var32 = var_recv->type->type_table[cltype33] == idtype34;
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 517);
fatal_exit(1);
}
{
var35 = ((val*(*)(val* self, long p0))(var_arguments->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_i); /* [] on <var_arguments:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_attribute]))(self, var_p, var_recv, var35); /* write_attribute on <self:NaiveInterpreter>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var42 = var_i + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 520);
fatal_exit(1);
}
}
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MProperty]>*/
}
{
var44 = ((long(*)(val* self))(var_arguments->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_arguments); /* length on <var_arguments:Array[Instance]>*/
}
{
{ /* Inline kernel#Int#== (var_i,var44) on <var_i:Int> */
var47 = var_i == var44;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 522);
fatal_exit(1);
}
if (var_callsite == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 524);
fatal_exit(1);
} else {
var48 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:nullable CallSite>*/
}
var49 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var49->class->vft[COLOR_standard__array__Array__with_capacity]))(var49, 1l); /* with_capacity on <var49:Array[Instance]>*/
}
var_50 = var49;
{
((void(*)(val* self, val* p0))(var_50->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_50, var_recv); /* push on <var_50:Array[Instance]>*/
}
{
var51 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(self, var48, var_50); /* send on <self:NaiveInterpreter>*/
}
var = var51;
goto RET_LABEL;
} else {
}
if (var_callsite == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 526);
fatal_exit(1);
} else {
var52 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:nullable CallSite>*/
}
{
var53 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(self, var52, var_arguments); /* send on <self:NaiveInterpreter>*/
}
var = var53;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#send for (self: NaiveInterpreter, MMethod, Array[Instance]): nullable Instance */
val* nit___nit__NaiveInterpreter___send(val* self, val* p0, val* p1) {
val* var /* : nullable Instance */;
val* var_mproperty /* var mproperty: MMethod */;
val* var_args /* var args: Array[Instance] */;
val* var1 /* : nullable Object */;
val* var_recv /* var recv: Instance */;
val* var2 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var3 /* : nullable Instance */;
val* var_ret /* var ret: nullable Instance */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MModule */;
val* var7 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var8 /* : nullable Instance */;
var_mproperty = p0;
var_args = p1;
{
var1 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
var_recv = var1;
{
var2 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
var_mtype = var2;
{
var3 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send_commons]))(self, var_mproperty, var_args, var_mtype); /* send_commons on <self:NaiveInterpreter>*/
}
var_ret = var3;
if (var_ret == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ret, ((val*)NULL)); /* != on <var_ret:nullable Instance>*/
var4 = var5;
}
if (var4){
var = var_ret;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_mproperty->class->vft[COLOR_nit__model__MProperty__lookup_first_definition]))(var_mproperty, var6, var_mtype); /* lookup_first_definition on <var_mproperty:MMethod>*/
}
var_propdef = var7;
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__call]))(self, var_propdef, var_args); /* call on <self:NaiveInterpreter>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#read_attribute for (self: NaiveInterpreter, MAttribute, Instance): Instance */
val* nit___nit__NaiveInterpreter___read_attribute(val* self, val* p0, val* p1) {
val* var /* : Instance */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var_recv /* var recv: Instance */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : Map[MAttribute, Instance] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : Map[MAttribute, Instance] */;
val* var13 /* : nullable Object */;
var_mproperty = p0;
var_recv = p1;
/* <var_recv:Instance> isa MutableInstance */
cltype = type_nit__MutableInstance.color;
idtype = type_nit__MutableInstance.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 546);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__MutableInstance__attributes]))(var_recv); /* attributes on <var_recv:Instance(MutableInstance)>*/
}
{
var3 = ((short int(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var2, var_mproperty); /* has_key on <var2:Map[MAttribute, Instance]>*/
}
var4 = !var3;
if (var4){
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "Uninitialized attribute ";
var9 = standard___standard__NativeString___to_s_with_length(var8, 24l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mproperty); /* name on <var_mproperty:MAttribute>*/
}
((struct instance_standard__NativeArray*)var5)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__fatal]))(self, var11); /* fatal on <self:NaiveInterpreter>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 549);
fatal_exit(1);
} else {
}
{
var12 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__MutableInstance__attributes]))(var_recv); /* attributes on <var_recv:Instance(MutableInstance)>*/
}
{
var13 = ((val*(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var12, var_mproperty); /* [] on <var12:Map[MAttribute, Instance]>*/
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#write_attribute for (self: NaiveInterpreter, MAttribute, Instance, Instance) */
void nit___nit__NaiveInterpreter___write_attribute(val* self, val* p0, val* p1, val* p2) {
val* var_mproperty /* var mproperty: MAttribute */;
val* var_recv /* var recv: Instance */;
val* var_value /* var value: Instance */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Map[MAttribute, Instance] */;
var_mproperty = p0;
var_recv = p1;
var_value = p2;
/* <var_recv:Instance> isa MutableInstance */
cltype = type_nit__MutableInstance.color;
idtype = type_nit__MutableInstance.id;
if(cltype >= var_recv->type->table_size) {
var = 0;
} else {
var = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 557);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__MutableInstance__attributes]))(var_recv); /* attributes on <var_recv:Instance(MutableInstance)>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var1, var_mproperty, var_value); /* []= on <var1:Map[MAttribute, Instance]>*/
}
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#isset_attribute for (self: NaiveInterpreter, MAttribute, Instance): Bool */
short int nit___nit__NaiveInterpreter___isset_attribute(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var_recv /* var recv: Instance */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : Map[MAttribute, Instance] */;
short int var3 /* : Bool */;
var_mproperty = p0;
var_recv = p1;
/* <var_recv:Instance> isa MutableInstance */
cltype = type_nit__MutableInstance.color;
idtype = type_nit__MutableInstance.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 564);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__MutableInstance__attributes]))(var_recv); /* attributes on <var_recv:Instance(MutableInstance)>*/
}
{
var3 = ((short int(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var2, var_mproperty); /* has_key on <var2:Map[MAttribute, Instance]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#collect_attr_propdef for (self: NaiveInterpreter, MType): Array[AAttrPropdef] */
val* nit___nit__NaiveInterpreter___collect_attr_propdef(val* self, val* p0) {
val* var /* : Array[AAttrPropdef] */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : HashMap[MType, Array[AAttrPropdef]] */;
val* var_cache /* var cache: HashMap[MType, Array[AAttrPropdef]] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : Array[AAttrPropdef] */;
val* var_res /* var res: Array[AAttrPropdef] */;
val* var5 /* : MModule */;
val* var6 /* : Set[MClassDef] */;
val* var7 /* : Array[nullable Object] */;
val* var_cds /* var cds: Array[MClassDef] */;
val* var8 /* : MModule */;
val* var_ /* var : Array[MClassDef] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MClassDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var13 /* : ModelBuilder */;
val* var14 /* : Array[AAttrPropdef] */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__collect_attr_propdef_cache]))(self); /* collect_attr_propdef_cache on <self:NaiveInterpreter>*/
}
var_cache = var1;
{
var2 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var_cache, var_mtype); /* has_key on <var_cache:HashMap[MType, Array[AAttrPropdef]]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_cache, var_mtype); /* [] on <var_cache:HashMap[MType, Array[AAttrPropdef]]>*/
}
var = var3;
goto RET_LABEL;
} else {
}
var4 = NEW_standard__Array(&type_standard__Array__nit__AAttrPropdef);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[AAttrPropdef]>*/
}
var_res = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var6 = ((val*(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_nit__model__MType__collect_mclassdefs]))(var_mtype, var5); /* collect_mclassdefs on <var_mtype:MType>*/
}
{
var7 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__array__Collection__to_a]))(var6); /* to_a on <var6:Set[MClassDef]>*/
}
var_cds = var7;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__model__MModule__linearize_mclassdefs]))(var8, var_cds); /* linearize_mclassdefs on <var8:MModule>*/
}
var_ = var_cds;
{
var9 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MClassDef]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MClassDef]>*/
}
var_cd = var12;
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__modelbuilder]))(self); /* modelbuilder on <self:NaiveInterpreter>*/
}
{
var14 = ((val*(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__modelize_property__ModelBuilder__collect_attr_propdef]))(var13, var_cd); /* collect_attr_propdef on <var13:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var14); /* add_all on <var_res:Array[AAttrPropdef]>*/
}
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MClassDef]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_cache->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_cache, var_mtype, var_res); /* []= on <var_cache:HashMap[MType, Array[AAttrPropdef]]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#collect_attr_propdef_cache for (self: NaiveInterpreter): HashMap[MType, Array[AAttrPropdef]] */
val* nit___nit__NaiveInterpreter___collect_attr_propdef_cache(val* self) {
val* var /* : HashMap[MType, Array[AAttrPropdef]] */;
val* var1 /* : HashMap[MType, Array[AAttrPropdef]] */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___collect_attr_propdef_cache].val; /* _collect_attr_propdef_cache on <self:NaiveInterpreter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_attr_propdef_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 585);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#collect_attr_propdef_cache= for (self: NaiveInterpreter, HashMap[MType, Array[AAttrPropdef]]) */
void nit___nit__NaiveInterpreter___collect_attr_propdef_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___collect_attr_propdef_cache].val = p0; /* _collect_attr_propdef_cache on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#init_instance for (self: NaiveInterpreter, Instance) */
void nit___nit__NaiveInterpreter___init_instance(val* self, val* p0) {
val* var_recv /* var recv: Instance */;
val* var /* : MType */;
val* var1 /* : Array[AAttrPropdef] */;
val* var_ /* var : Array[AAttrPropdef] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ArrayIterator[AAttrPropdef] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
var_recv = p0;
{
var = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__collect_attr_propdef]))(self, var); /* collect_attr_propdef on <self:NaiveInterpreter>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[AAttrPropdef]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ArrayIterator[AAttrPropdef]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ArrayIterator[AAttrPropdef]>*/
}
var_npropdef = var5;
{
((void(*)(val* self, val* p0, val* p1))(var_npropdef->class->vft[COLOR_nit__naive_interpreter__AAttrPropdef__init_expr]))(var_npropdef, self, var_recv); /* init_expr on <var_npropdef:AAttrPropdef>*/
}
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ArrayIterator[AAttrPropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ArrayIterator[AAttrPropdef]>*/
}
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#init_instance_primitive for (self: NaiveInterpreter, Instance) */
void nit___nit__NaiveInterpreter___init_instance_primitive(val* self, val* p0) {
val* var_recv /* var recv: Instance */;
var_recv = p0;
RET_LABEL:;
}
/* method naive_interpreter#NaiveInterpreter#unanchor_type for (self: NaiveInterpreter, MType): MType */
val* nit___nit__NaiveInterpreter___unanchor_type(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var3 /* : MType */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__current_receiver_class]))(self); /* current_receiver_class on <self:NaiveInterpreter>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var1, var2); /* anchor_to on <var_mtype:MType>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#error_instance for (self: NaiveInterpreter): MutableInstance */
val* nit___nit__NaiveInterpreter___error_instance(val* self) {
val* var /* : MutableInstance */;
short int var1 /* : Bool */;
val* var2 /* : MutableInstance */;
val* var3 /* : MutableInstance */;
val* var4 /* : ModelBuilder */;
val* var5 /* : Model */;
val* var6 /* : MNullType */;
var1 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___error_instance].val != NULL; /* _error_instance on <self:NaiveInterpreter> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___error_instance].val; /* _error_instance on <self:NaiveInterpreter> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _error_instance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 605);
fatal_exit(1);
}
} else {
var3 = NEW_nit__MutableInstance(&type_nit__MutableInstance);
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__modelbuilder]))(self); /* modelbuilder on <self:NaiveInterpreter>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(var4); /* model on <var4:ModelBuilder>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model__Model__null_type]))(var5); /* null_type on <var5:Model>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var3, var6); /* mtype= on <var3:MutableInstance>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:MutableInstance>*/
}
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___error_instance].val = var3; /* _error_instance on <self:NaiveInterpreter> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method naive_interpreter#NaiveInterpreter#error_instance= for (self: NaiveInterpreter, MutableInstance) */
void nit___nit__NaiveInterpreter___error_instance_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__NaiveInterpreter___error_instance].val = p0; /* _error_instance on <self:NaiveInterpreter> */
RET_LABEL:;
}
/* method naive_interpreter#Instance#mtype for (self: Instance): MType */
val* nit___nit__Instance___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__naive_interpreter__Instance___mtype].val; /* _mtype on <self:Instance> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 612);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#Instance#mtype= for (self: Instance, MType) */
void nit___nit__Instance___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__Instance___mtype].val = p0; /* _mtype on <self:Instance> */
RET_LABEL:;
}
/* method naive_interpreter#Instance#is_true for (self: Instance): Bool */
short int nit___nit__Instance___is_true(val* self) {
short int var /* : Bool */;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 619);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method naive_interpreter#Instance#eq_is for (self: Instance, Instance): Bool */
short int nit___nit__Instance___eq_is(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: Instance */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
var_o = p0;
{
{ /* Inline kernel#Object#is_same_instance (self,var_o) on <self:Instance> */
var3 = self == var_o;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#Instance#to_s for (self: Instance): String */
val* nit___nit__Instance___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
val* var2 /* : MType */;
val* var3 /* : String */;
val* var4 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
} else {
var1 = varonce;
varonce = NULL;
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(self); /* mtype on <self:Instance>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__Object__to_s]))(var2); /* to_s on <var2:MType>*/
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#Instance#to_i for (self: Instance): Int */
long nit___nit__Instance___to_i(val* self) {
long var /* : Int */;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 629);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method naive_interpreter#Instance#to_f for (self: Instance): Float */
double nit___nit__Instance___to_f(val* self) {
double var /* : Float */;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 633);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method naive_interpreter#Instance#val for (self: Instance): nullable Object */
val* nit___nit__Instance___val(val* self) {
val* var /* : nullable Object */;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 637);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method naive_interpreter#Instance#init for (self: Instance) */
void nit___nit__Instance___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Instance___standard__kernel__Object__init]))(self); /* init on <self:Instance>*/
}
RET_LABEL:;
}
/* method naive_interpreter#MutableInstance#attributes for (self: MutableInstance): Map[MAttribute, Instance] */
val* nit___nit__MutableInstance___attributes(val* self) {
val* var /* : Map[MAttribute, Instance] */;
val* var1 /* : Map[MAttribute, Instance] */;
var1 = self->attrs[COLOR_nit__naive_interpreter__MutableInstance___attributes].val; /* _attributes on <self:MutableInstance> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attributes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 644);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#MutableInstance#attributes= for (self: MutableInstance, Map[MAttribute, Instance]) */
void nit___nit__MutableInstance___attributes_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__MutableInstance___attributes].val = p0; /* _attributes on <self:MutableInstance> */
RET_LABEL:;
}
/* method naive_interpreter#PrimitiveInstance#val for (self: PrimitiveInstance[nullable Object]): nullable Object */
val* nit___nit__PrimitiveInstance___Instance__val(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_nit__naive_interpreter__PrimitiveInstance___val].val; /* _val on <self:PrimitiveInstance[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#PrimitiveInstance#val= for (self: PrimitiveInstance[nullable Object], nullable Object) */
void nit___nit__PrimitiveInstance___val_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (val) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__PrimitiveInstance___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 653);
fatal_exit(1);
}
self->attrs[COLOR_nit__naive_interpreter__PrimitiveInstance___val].val = p0; /* _val on <self:PrimitiveInstance[nullable Object]> */
RET_LABEL:;
}
/* method naive_interpreter#PrimitiveInstance#is_true for (self: PrimitiveInstance[nullable Object]): Bool */
short int nit___nit__PrimitiveInstance___Instance__is_true(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(self); /* val on <self:PrimitiveInstance[nullable Object]>*/
}
if (var1 == NULL) {
var2 = 0; /* <1:Bool> cannot be null */
} else {
var4 = (val*)((long)(1)<<2|3);
var3 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var4); /* == on <var1:nullable Object>*/
var2 = var3;
}
if (var2){
var = 1;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(self); /* val on <self:PrimitiveInstance[nullable Object]>*/
}
if (var5 == NULL) {
var6 = 0; /* <0:Bool> cannot be null */
} else {
var8 = (val*)((long)(0)<<2|3);
var7 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var8); /* == on <var5:nullable Object>*/
var6 = var7;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 660);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method naive_interpreter#PrimitiveInstance#== for (self: PrimitiveInstance[nullable Object], nullable Object): Bool */
short int nit___nit__PrimitiveInstance___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa PrimitiveInstance[nullable Object] */
cltype = type_nit__PrimitiveInstance__nullable__standard__Object.color;
idtype = type_nit__PrimitiveInstance__nullable__standard__Object.id;
if(var_o == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(self); /* val on <self:PrimitiveInstance[nullable Object]>*/
}
{
var4 = ((val*(*)(val* self))(var_o->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var_o); /* val on <var_o:nullable Object(PrimitiveInstance[nullable Object])>*/
}
if (var3 == NULL) {
var5 = (var4 == NULL);
} else {
var6 = ((short int(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var4); /* == on <var3:nullable Object>*/
var5 = var6;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#PrimitiveInstance#eq_is for (self: PrimitiveInstance[nullable Object], Instance): Bool */
short int nit___nit__PrimitiveInstance___Instance__eq_is(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: Instance */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
var_o = p0;
/* <var_o:Instance> isa PrimitiveInstance[nullable Object] */
cltype = type_nit__PrimitiveInstance__nullable__standard__Object.color;
idtype = type_nit__PrimitiveInstance__nullable__standard__Object.id;
if(cltype >= var_o->type->table_size) {
var1 = 0;
} else {
var1 = var_o->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(self); /* val on <self:PrimitiveInstance[nullable Object]>*/
}
{
var4 = ((val*(*)(val* self))(var_o->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var_o); /* val on <var_o:Instance(PrimitiveInstance[nullable Object])>*/
}
if (var3 == NULL) {
var5 = (var4 == NULL);
} else {
{ /* Inline kernel#Object#is_same_instance (var3,var4) on <var3:nullable Object> */
var8 = var3 == var4 || (var3 != NULL && var4 != NULL && (!((long)var3&3)) && (!((long)var4&3)) && var3->class == var4->class && ((var3->class->box_kind == 4 && ((struct instance_standard__Float*)var3)->value == ((struct instance_standard__Float*)var4)->value) || (var3->class->box_kind == 5 && ((struct instance_standard__NativeString*)var3)->value == ((struct instance_standard__NativeString*)var4)->value) || (var3->class->box_kind == 6 && ((struct instance_standard__Pointer*)var3)->value == ((struct instance_standard__Pointer*)var4)->value)));
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#PrimitiveInstance#to_s for (self: PrimitiveInstance[nullable Object]): String */
val* nit___nit__PrimitiveInstance___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : MType */;
val* var15 /* : String */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Object */;
val* var20 /* : nullable Object */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : String */;
val* var26 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "#";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[1]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "(";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[3]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")";
var13 = standard___standard__NativeString___to_s_with_length(var12, 1l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var1)->values[5]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(self); /* mtype on <self:PrimitiveInstance[nullable Object]>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__Object__to_s]))(var14); /* to_s on <var14:MType>*/
}
((struct instance_standard__NativeArray*)var1)->values[0]=var15;
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(self); /* val on <self:PrimitiveInstance[nullable Object]>*/
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 675);
fatal_exit(1);
} else {
var17 = ((long(*)(val* self))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_standard__kernel__Object__object_id]))(var16); /* object_id on <var16:nullable Object>*/
}
var18 = standard__string___Int___Object__to_s(var17);
((struct instance_standard__NativeArray*)var1)->values[2]=var18;
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(self); /* val on <self:PrimitiveInstance[nullable Object]>*/
}
if (var20!=NULL) {
var19 = var20;
} else {
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "null";
var24 = standard___standard__NativeString___to_s_with_length(var23, 4l);
var22 = var24;
varonce21 = var22;
}
var19 = var22;
}
{
var25 = ((val*(*)(val* self))((((long)var19&3)?class_info[((long)var19&3)]:var19->class)->vft[COLOR_standard__string__Object__to_s]))(var19); /* to_s on <var19:Object>*/
}
((struct instance_standard__NativeArray*)var1)->values[4]=var25;
{
var26 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#PrimitiveInstance#to_i for (self: PrimitiveInstance[nullable Object]): Int */
long nit___nit__PrimitiveInstance___Instance__to_i(val* self) {
long var /* : Int */;
val* var1 /* : nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(self); /* val on <self:PrimitiveInstance[nullable Object]>*/
}
/* <var1:nullable Object> isa Int */
cltype = type_standard__Int.color;
idtype = type_standard__Int.id;
if(var1 == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 677);
fatal_exit(1);
}
var3 = (long)(var1)>>2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#PrimitiveInstance#to_f for (self: PrimitiveInstance[nullable Object]): Float */
double nit___nit__PrimitiveInstance___Instance__to_f(val* self) {
double var /* : Float */;
val* var1 /* : nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var3 /* : Float */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(self); /* val on <self:PrimitiveInstance[nullable Object]>*/
}
/* <var1:nullable Object> isa Float */
cltype = type_standard__Float.color;
idtype = type_standard__Float.id;
if(var1 == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Float", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 679);
fatal_exit(1);
}
var3 = ((struct instance_standard__Float*)var1)->value; /* autounbox from nullable Object to Float */;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#PrimitiveInstance#init for (self: PrimitiveInstance[nullable Object]) */
void nit___nit__PrimitiveInstance___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__PrimitiveInstance___standard__kernel__Object__init]))(self); /* init on <self:PrimitiveInstance[nullable Object]>*/
}
RET_LABEL:;
}
/* method naive_interpreter#Frame#current_node for (self: Frame): ANode */
val* nit___nit__Frame___current_node(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_nit__naive_interpreter__Frame___current_node].val; /* _current_node on <self:Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_node");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 684);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#Frame#current_node= for (self: Frame, ANode) */
void nit___nit__Frame___current_node_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__Frame___current_node].val = p0; /* _current_node on <self:Frame> */
RET_LABEL:;
}
/* method naive_interpreter#Frame#mpropdef for (self: Frame): MPropDef */
val* nit___nit__Frame___mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nit__naive_interpreter__Frame___mpropdef].val; /* _mpropdef on <self:Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 687);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#Frame#mpropdef= for (self: Frame, MPropDef) */
void nit___nit__Frame___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__Frame___mpropdef].val = p0; /* _mpropdef on <self:Frame> */
RET_LABEL:;
}
/* method naive_interpreter#Frame#arguments for (self: Frame): Array[Instance] */
val* nit___nit__Frame___arguments(val* self) {
val* var /* : Array[Instance] */;
val* var1 /* : Array[Instance] */;
var1 = self->attrs[COLOR_nit__naive_interpreter__Frame___arguments].val; /* _arguments on <self:Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 690);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#Frame#arguments= for (self: Frame, Array[Instance]) */
void nit___nit__Frame___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__Frame___arguments].val = p0; /* _arguments on <self:Frame> */
RET_LABEL:;
}
/* method naive_interpreter#Frame#comprehension for (self: Frame): nullable Array[Instance] */
val* nit___nit__Frame___comprehension(val* self) {
val* var /* : nullable Array[Instance] */;
val* var1 /* : nullable Array[Instance] */;
var1 = self->attrs[COLOR_nit__naive_interpreter__Frame___comprehension].val; /* _comprehension on <self:Frame> */
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#Frame#comprehension= for (self: Frame, nullable Array[Instance]) */
void nit___nit__Frame___comprehension_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__Frame___comprehension].val = p0; /* _comprehension on <self:Frame> */
RET_LABEL:;
}
/* method naive_interpreter#Frame#init for (self: Frame) */
void nit___nit__Frame___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Frame___standard__kernel__Object__init]))(self); /* init on <self:Frame>*/
}
RET_LABEL:;
}
/* method naive_interpreter#InterpreterFrame#map for (self: InterpreterFrame): Map[Variable, Instance] */
val* nit___nit__InterpreterFrame___map(val* self) {
val* var /* : Map[Variable, Instance] */;
val* var1 /* : Map[Variable, Instance] */;
var1 = self->attrs[COLOR_nit__naive_interpreter__InterpreterFrame___map].val; /* _map on <self:InterpreterFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 700);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method naive_interpreter#InterpreterFrame#map= for (self: InterpreterFrame, Map[Variable, Instance]) */
void nit___nit__InterpreterFrame___map_61d(val* self, val* p0) {
self->attrs[COLOR_nit__naive_interpreter__InterpreterFrame___map].val = p0; /* _map on <self:InterpreterFrame> */
RET_LABEL:;
}
/* method naive_interpreter#ANode#fatal for (self: ANode, NaiveInterpreter, String) */
void nit__naive_interpreter___ANode___fatal(val* self, val* p0, val* p1) {
val* var_v /* var v: NaiveInterpreter */;
val* var_message /* var message: String */;
val* var /* : ModelBuilder */;
val* var1 /* : ToolContext */;
val* var2 /* : OptionBool */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Sys */;
val* var10 /* : Sys */;
val* var11 /* : Writer */;
val* var12 /* : NativeArray[String] */;
static val* varonce;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : Location */;
val* var30 /* : nullable SourceFile */;
val* var31 /* : String */;
val* var32 /* : Location */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : Sys */;
val* var38 /* : Sys */;
val* var39 /* : Writer */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
val* var54 /* : Location */;
val* var55 /* : String */;
val* var56 /* : Location */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : Sys */;
val* var65 /* : Sys */;
val* var66 /* : Writer */;
val* var67 /* : String */;
val* var68 /* : Sys */;
val* var70 /* : Sys */;
val* var71 /* : Writer */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
val* var76 /* : Sys */;
var_v = p0;
var_message = p1;
{
var = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__modelbuilder]))(var_v); /* modelbuilder on <var_v:NaiveInterpreter>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var); /* toolcontext on <var:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__toolcontext__ToolContext__opt_no_color]))(var1); /* opt_no_color on <var1:ToolContext>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_opts__Option__value]))(var2); /* value on <var2:OptionBool>*/
}
{
{ /* Inline kernel#Bool#== (var3,1) on <var3:nullable Object(Bool)> */
var7 = (short int)((long)(var3)>>2);
var6 = (var3 != NULL) && (var7 == 1);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Object#sys (self) on <self:ANode> */
var10 = glob_sys;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var11 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__file__Sys__stderr]))(var8); /* stderr on <var8:Sys>*/
}
if (unlikely(varonce==NULL)) {
var12 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Runtime error: ";
var16 = standard___standard__NativeString___to_s_with_length(var15, 15l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " (";
var20 = standard___standard__NativeString___to_s_with_length(var19, 2l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var12)->values[2]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = ":";
var24 = standard___standard__NativeString___to_s_with_length(var23, 1l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var12)->values[4]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = ")\n";
var28 = standard___standard__NativeString___to_s_with_length(var27, 2l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var12)->values[6]=var26;
} else {
var12 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var12)->values[1]=var_message;
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:ANode>*/
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_nit__location__Location__file]))(var29); /* file on <var29:Location>*/
}
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 710);
fatal_exit(1);
} else {
var31 = ((val*(*)(val* self))(var30->class->vft[COLOR_nit__location__SourceFile__filename]))(var30); /* filename on <var30:nullable SourceFile>*/
}
((struct instance_standard__NativeArray*)var12)->values[3]=var31;
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:ANode>*/
}
{
var33 = ((long(*)(val* self))(var32->class->vft[COLOR_nit__location__Location__line_start]))(var32); /* line_start on <var32:Location>*/
}
var34 = standard__string___Int___Object__to_s(var33);
((struct instance_standard__NativeArray*)var12)->values[5]=var34;
{
var35 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__stream__Writer__write]))(var11, var35); /* write on <var11:Writer>*/
}
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:ANode> */
var38 = glob_sys;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
var39 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__file__Sys__stderr]))(var36); /* stderr on <var36:Sys>*/
}
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ": Runtime error: ";
var45 = standard___standard__NativeString___to_s_with_length(var44, 17l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[1]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "\n";
var49 = standard___standard__NativeString___to_s_with_length(var48, 1l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[3]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "\n";
var53 = standard___standard__NativeString___to_s_with_length(var52, 1l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var41)->values[5]=var51;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var54 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:ANode>*/
}
{
var55 = ((val*(*)(val* self))(var54->class->vft[COLOR_standard__string__Object__to_s]))(var54); /* to_s on <var54:Location>*/
}
((struct instance_standard__NativeArray*)var41)->values[0]=var55;
((struct instance_standard__NativeArray*)var41)->values[2]=var_message;
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:ANode>*/
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "0;31";
var60 = standard___standard__NativeString___to_s_with_length(var59, 4l);
var58 = var60;
varonce57 = var58;
}
{
var61 = ((val*(*)(val* self, val* p0))(var56->class->vft[COLOR_nit__location__Location__colored_line]))(var56, var58); /* colored_line on <var56:Location>*/
}
((struct instance_standard__NativeArray*)var41)->values[4]=var61;
{
var62 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_standard__stream__Writer__write]))(var39, var62); /* write on <var39:Writer>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:ANode> */
var65 = glob_sys;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
var66 = ((val*(*)(val* self))(var63->class->vft[COLOR_standard__file__Sys__stderr]))(var63); /* stderr on <var63:Sys>*/
}
{
var67 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stack_trace]))(var_v); /* stack_trace on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var66->class->vft[COLOR_standard__stream__Writer__write]))(var66, var67); /* write on <var66:Writer>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:ANode> */
var70 = glob_sys;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
var71 = ((val*(*)(val* self))(var68->class->vft[COLOR_standard__file__Sys__stderr]))(var68); /* stderr on <var68:Sys>*/
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "\n";
var75 = standard___standard__NativeString___to_s_with_length(var74, 1l);
var73 = var75;
varonce72 = var73;
}
{
((void(*)(val* self, val* p0))(var71->class->vft[COLOR_standard__stream__Writer__write]))(var71, var73); /* write on <var71:Writer>*/
}
}
var76 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var76,1l) on <var76:Sys> */
exit(1l);
RET_LABEL77:(void)0;
}
}
RET_LABEL:;
}
/* method naive_interpreter#APropdef#call for (self: APropdef, NaiveInterpreter, MMethodDef, Array[Instance]): nullable Instance */
val* nit__naive_interpreter___APropdef___call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[Instance] */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_args = p2;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "NOT YET IMPLEMENTED method kind ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 32l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ". ";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__class_name]))(self); /* class_name on <self:APropdef>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var1)->values[3]=var11;
{
var12 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var12); /* fatal on <self:APropdef>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 725);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method naive_interpreter#AMethPropdef#call for (self: AMethPropdef, NaiveInterpreter, MMethodDef, Array[Instance]): nullable Instance */
val* nit__naive_interpreter___AMethPropdef___APropdef__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[Instance] */;
val* var1 /* : Frame */;
val* var_f /* var f: Frame */;
val* var2 /* : nullable Instance */;
val* var_res /* var res: nullable Instance */;
val* var3 /* : List[Frame] */;
val* var4 /* : nullable Object */;
val* var5 /* : nullable Frame */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Instance */;
var_v = p0;
var_mpropdef = p1;
var_args = p2;
{
var1 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__new_frame]))(var_v, self, var_mpropdef, var_args); /* new_frame on <var_v:NaiveInterpreter>*/
}
var_f = var1;
{
var2 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(self->class->vft[COLOR_nit__naive_interpreter__AMethPropdef__call_commons]))(self, var_v, var_mpropdef, var_args, var_f); /* call_commons on <self:AMethPropdef>*/
}
var_res = var2;
{
var3 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(var_v); /* frames on <var_v:NaiveInterpreter>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__abstract_collection__Sequence__shift]))(var3); /* shift on <var3:List[Frame]>*/
}
{
var5 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__returnmark]))(var_v); /* returnmark on <var_v:NaiveInterpreter>*/
}
if (var5 == NULL) {
var6 = 0; /* <var_f:Frame> cannot be null */
} else {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_f); /* == on <var5:nullable Frame>*/
var6 = var7;
}
if (var6){
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__returnmark_61d]))(var_v, ((val*)NULL)); /* returnmark= on <var_v:NaiveInterpreter>*/
}
{
var8 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapevalue]))(var_v); /* escapevalue on <var_v:NaiveInterpreter>*/
}
var_res = var8;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapevalue_61d]))(var_v, ((val*)NULL)); /* escapevalue= on <var_v:NaiveInterpreter>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AMethPropdef#call_commons for (self: AMethPropdef, NaiveInterpreter, MMethodDef, Array[Instance], Frame): nullable Instance */
val* nit__naive_interpreter___AMethPropdef___call_commons(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[Instance] */;
val* var_f /* var f: Frame */;
val* var1 /* : List[Frame] */;
long var_i /* var i: Int */;
val* var2 /* : nullable MSignature */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : nullable ASignature */;
val* var9 /* : ANodes[AParam] */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var21 /* : nullable Object */;
long var22 /* : Int */;
val* var23 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : Array[Instance] */;
val* var_27 /* var : Array[Instance] */;
val* var28 /* : nullable Object */;
val* var_args /* var args: Array[Instance] */;
val* var_29 /* var : Array[CallSite] */;
val* var30 /* : Iterator[nullable Object] */;
val* var_31 /* var : ArrayIterator[CallSite] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
long var_i34 /* var i: Int */;
val* var35 /* : MSignature */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var_44 /* var : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
long var53 /* : Int */;
val* var55 /* : MMethod */;
val* var56 /* : MProperty */;
short int var57 /* : Bool */;
val* var58 /* : nullable Instance */;
short int var60 /* : Bool */;
val* var61 /* : MModule */;
val* var62 /* : nullable Object */;
val* var63 /* : MType */;
val* var64 /* : MPropDef */;
val* var_superpd /* var superpd: MMethodDef */;
val* var65 /* : nullable Instance */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var_68 /* var : Bool */;
short int var69 /* : Bool */;
val* var70 /* : nullable Instance */;
val* var_res /* var res: nullable Instance */;
val* var71 /* : MutableInstance */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : nullable AExpr */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : nullable AExpr */;
short int var78 /* : Bool */;
val* var79 /* : NativeArray[String] */;
static val* varonce;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var84 /* : String */;
val* var85 /* : String */;
short int var86 /* : Bool */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var96 /* : NativeArray[String] */;
static val* varonce95;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
val* var101 /* : String */;
val* var102 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var_f = p3;
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(var_v); /* frames on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Sequence__unshift]))(var1, var_f); /* unshift on <var1:List[Frame]>*/
}
var_i = 0l;
{
var2 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:MMethodDef>*/
}
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 750);
fatal_exit(1);
} else {
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_nit__model__MSignature__arity]))(var2); /* arity on <var2:nullable MSignature>*/
}
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var7 = var_i < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 751);
fatal_exit(1);
} else {
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var8); /* n_params on <var8:nullable ASignature>*/
}
{
var10 = ((val*(*)(val* self, long p0))(var9->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:ANodes[AParam]>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__scope__AParam__variable]))(var10); /* variable on <var10:nullable Object(AParam)>*/
}
var_variable = var11;
if (var_variable == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_variable, ((val*)NULL)); /* != on <var_variable:nullable Variable>*/
var12 = var13;
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 752);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var20 = var_i + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
var21 = ((val*(*)(val* self, long p0))(var_arguments->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_arguments, var14); /* [] on <var_arguments:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_variable]))(var_v, var_variable, var21); /* write_variable on <var_v:NaiveInterpreter>*/
}
var22 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var22;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__auto_super_init__AMethPropdef__auto_super_inits]))(self); /* auto_super_inits on <self:AMethPropdef>*/
}
var_auto_super_inits = var23;
if (var_auto_super_inits == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_auto_super_inits, ((val*)NULL)); /* != on <var_auto_super_inits:nullable Array[CallSite]>*/
var24 = var25;
}
if (var24){
var26 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var26->class->vft[COLOR_standard__array__Array__with_capacity]))(var26, 1l); /* with_capacity on <var26:Array[Instance]>*/
}
var_27 = var26;
{
var28 = ((val*(*)(val* self))(var_arguments->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_arguments); /* first on <var_arguments:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_27->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_27, var28); /* push on <var_27:Array[Instance]>*/
}
var_args = var_27;
var_29 = var_auto_super_inits;
{
var30 = ((val*(*)(val* self))(var_29->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_29); /* iterator on <var_29:Array[CallSite]>*/
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:ArrayIterator[CallSite]>*/
}
if (var32){
{
var33 = ((val*(*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:ArrayIterator[CallSite]>*/
}
var_auto_super_init = var33;
{
((void(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var_args); /* clear on <var_args:Array[Instance]>*/
}
var_i34 = 0l;
{
var35 = ((val*(*)(val* self))(var_auto_super_init->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_auto_super_init); /* msignature on <var_auto_super_init:CallSite>*/
}
{
var36 = ((long(*)(val* self))(var35->class->vft[COLOR_nit__model__MSignature__arity]))(var35); /* arity on <var35:MSignature>*/
}
{
{ /* Inline kernel#Int#+ (var36,1l) on <var36:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var43 = var36 + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_44 = var37;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i34,var_44) on <var_i34:Int> */
/* Covariant cast for argument 0 (i) <var_44:Int> isa OTHER */
/* <var_44:Int> isa OTHER */
var47 = 1; /* easy <var_44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var51 = var_i34 < var_44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
var52 = ((val*(*)(val* self, long p0))(var_arguments->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_i34); /* [] on <var_arguments:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_args, var52); /* add on <var_args:Array[Instance]>*/
}
var53 = standard___standard__Int___Discrete__successor(var_i34, 1l);
var_i34 = var53;
} else {
goto BREAK_label54;
}
}
BREAK_label54: (void)0;
{
var55 = ((val*(*)(val* self))(var_auto_super_init->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_auto_super_init); /* mproperty on <var_auto_super_init:CallSite>*/
}
{
var56 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MMethodDef>*/
}
{
var57 = ((short int(*)(val* self, val* p0))(var55->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var55, var56); /* != on <var55:MMethod>*/
}
if (unlikely(!var57)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 765);
fatal_exit(1);
}
{
var58 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var_auto_super_init, var_args); /* callsite on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label59;
}
}
BREAK_label59: (void)0;
{
((void(*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:ArrayIterator[CallSite]>*/
}
} else {
}
{
var60 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__auto_super_init__AMethPropdef__auto_super_call]))(self); /* auto_super_call on <self:AMethPropdef>*/
}
if (var60){
{
var61 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(var_v); /* mainmodule on <var_v:NaiveInterpreter>*/
}
{
var62 = ((val*(*)(val* self))(var_arguments->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_arguments); /* first on <var_arguments:Array[Instance]>*/
}
{
var63 = ((val*(*)(val* self))(var62->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var62); /* mtype on <var62:nullable Object(Instance)>*/
}
{
var64 = ((val*(*)(val* self, val* p0, val* p1))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__lookup_next_definition]))(var_mpropdef, var61, var63); /* lookup_next_definition on <var_mpropdef:MMethodDef>*/
}
var_superpd = var64;
{
var65 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__call]))(var_v, var_superpd, var_arguments); /* call on <var_v:NaiveInterpreter>*/
}
} else {
}
{
var67 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__is_intern]))(var_mpropdef); /* is_intern on <var_mpropdef:MMethodDef>*/
}
var_68 = var67;
if (var67){
var66 = var_68;
} else {
{
var69 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__is_extern]))(var_mpropdef); /* is_extern on <var_mpropdef:MMethodDef>*/
}
var66 = var69;
}
if (var66){
{
var70 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__AMethPropdef__intern_call]))(self, var_v, var_mpropdef, var_arguments); /* intern_call on <self:AMethPropdef>*/
}
var_res = var70;
{
var71 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__error_instance]))(var_v); /* error_instance on <var_v:NaiveInterpreter>*/
}
if (var_res == NULL) {
var72 = 1; /* <var71:MutableInstance> cannot be null */
} else {
var73 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, var71); /* != on <var_res:nullable Instance>*/
var72 = var73;
}
if (var72){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
{
var74 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(self); /* n_block on <self:AMethPropdef>*/
}
if (var74 == NULL) {
var75 = 0; /* is null */
} else {
var75 = 1; /* arg is null and recv is not */
}
if (0) {
var76 = ((short int(*)(val* self, val* p0))(var74->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var74, ((val*)NULL)); /* != on <var74:nullable AExpr>*/
var75 = var76;
}
if (var75){
{
var77 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(self); /* n_block on <self:AMethPropdef>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var77); /* stmt on <var_v:NaiveInterpreter>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var78 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__is_intern]))(var_mpropdef); /* is_intern on <var_mpropdef:MMethodDef>*/
}
if (var78){
if (unlikely(varonce==NULL)) {
var79 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "NOT YET IMPLEMENTED intern ";
var83 = standard___standard__NativeString___to_s_with_length(var82, 27l);
var81 = var83;
varonce80 = var81;
}
((struct instance_standard__NativeArray*)var79)->values[0]=var81;
} else {
var79 = varonce;
varonce = NULL;
}
{
var84 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var79)->values[1]=var84;
{
var85 = ((val*(*)(val* self))(var79->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var79); /* native_to_s on <var79:NativeArray[String]>*/
}
varonce = var79;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var85); /* fatal on <self:AMethPropdef>*/
}
} else {
{
var86 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__is_extern]))(var_mpropdef); /* is_extern on <var_mpropdef:MMethodDef>*/
}
if (var86){
if (unlikely(varonce87==NULL)) {
var88 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "NOT YET IMPLEMENTED extern ";
var92 = standard___standard__NativeString___to_s_with_length(var91, 27l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var88)->values[0]=var90;
} else {
var88 = varonce87;
varonce87 = NULL;
}
{
var93 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var88)->values[1]=var93;
{
var94 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var94); /* fatal on <self:AMethPropdef>*/
}
} else {
if (unlikely(varonce95==NULL)) {
var96 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "NOT YET IMPLEMENTED <wat?> ";
var100 = standard___standard__NativeString___to_s_with_length(var99, 27l);
var98 = var100;
varonce97 = var98;
}
((struct instance_standard__NativeArray*)var96)->values[0]=var98;
} else {
var96 = varonce95;
varonce95 = NULL;
}
{
var101 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var96)->values[1]=var101;
{
var102 = ((val*(*)(val* self))(var96->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var102); /* fatal on <self:AMethPropdef>*/
}
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 792);
fatal_exit(1);
RET_LABEL:;
return var;
}
