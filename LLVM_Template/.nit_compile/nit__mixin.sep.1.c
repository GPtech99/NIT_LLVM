#include "nit__mixin.sep.0.h"
/* method mixin#ToolContext#opt_mixins for (self: ToolContext): OptionArray */
val* nit__mixin___ToolContext___opt_mixins(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#opt_mixins= for (self: ToolContext, OptionArray) */
void nit__mixin___ToolContext___opt_mixins_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val = p0; /* _opt_mixins on <self:ToolContext> */
RET_LABEL:;
}
/* method mixin#ToolContext#opt_defines for (self: ToolContext): OptionArray */
val* nit__mixin___ToolContext___opt_defines(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#opt_defines= for (self: ToolContext, OptionArray) */
void nit__mixin___ToolContext___opt_defines_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mixin__ToolContext___opt_defines].val = p0; /* _opt_defines on <self:ToolContext> */
RET_LABEL:;
}
/* method mixin#ToolContext#init for (self: ToolContext) */
void nit__mixin___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionArray */;
val* var2 /* : OptionArray */;
val* var3 /* : Array[Option] */;
val* var4 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__mixin___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mixin__ToolContext__opt_mixins]))(self); /* opt_mixins on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mixin__ToolContext__opt_defines]))(self); /* opt_defines on <self:ToolContext>*/
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
/* method mixin#ToolContext#make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* nit__mixin___ToolContext___make_main_module(val* self, val* p0) {
val* var /* : MModule */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var1 /* : OptionArray */;
val* var2 /* : nullable Object */;
val* var_mixins /* var mixins: Array[String] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : ModelBuilder */;
val* var6 /* : OptionArray */;
val* var7 /* : nullable Object */;
val* var8 /* : Array[MModule] */;
val* var9 /* : ModelBuilder */;
val* var10 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var11 /* : OptionArray */;
val* var12 /* : nullable Object */;
val* var_defines /* var defines: Array[String] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Location */;
val* var_location /* var location: Location */;
val* var16 /* : Model */;
val* var_model /* var model: Model */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
val* var19 /* : MModule */;
val* var20 /* : String */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : String */;
val* var25 /* : nullable MClassType */;
val* var_recv /* var recv: nullable MClassType */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_ /* var : Array[String] */;
val* var29 /* : Iterator[nullable Object] */;
val* var_30 /* var : ArrayIterator[String] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_define /* var define: String */;
val* var33 /* : Array[Text] */;
val* var34 /* : Pattern */;
val* var_spl /* var spl: Array[String] */;
val* var35 /* : nullable Object */;
val* var_name /* var name: String */;
val* var_val /* var val: nullable Object */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var42 /* : MClass */;
val* var43 /* : nullable MMethod */;
val* var_prop /* var prop: nullable MMethod */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
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
val* var57 /* : Message */;
val* var58 /* : MPropDef */;
val* var59 /* : nullable MSignature */;
val* var60 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : Message */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var_85 /* var : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
short int var90 /* : Bool */;
val* var91 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
short int var96 /* : Bool */;
val* var97 /* : nullable Object */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var110 /* : Message */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var_120 /* var : Bool */;
short int var121 /* : Bool */;
long var122 /* : Int */;
val* var123 /* : nullable Object */;
val* var125 /* : NativeArray[String] */;
static val* varonce124;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : FlatString */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : FlatString */;
val* var134 /* : String */;
val* var135 /* : String */;
val* var136 /* : Message */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
val* var146 /* : NativeArray[String] */;
static val* varonce145;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : FlatString */;
val* var155 /* : String */;
val* var156 /* : String */;
val* var157 /* : Message */;
val* var159 /* : NativeArray[String] */;
static val* varonce158;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
val* var163 /* : FlatString */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : FlatString */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : FlatString */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var175 /* : Message */;
val* var176 /* : MMethodDef */;
val* var_pd /* var pd: MMethodDef */;
val* var177 /* : MPropDef */;
val* var178 /* : nullable MSignature */;
short int var180 /* : Bool */;
var_mmodules = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mixin__ToolContext__opt_mixins]))(self); /* opt_mixins on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_opts__Option__value]))(var1); /* value on <var1:OptionArray>*/
}
var_mixins = var2;
{
var3 = ((short int(*)(val* self))(var_mixins->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_mixins); /* is_empty on <var_mixins:Array[String]>*/
}
var4 = !var3;
if (var4){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(self); /* modelbuilder on <self:ToolContext>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mixin__ToolContext__opt_mixins]))(self); /* opt_mixins on <self:ToolContext>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_opts__Option__value]))(var6); /* value on <var6:OptionArray>*/
}
{
var8 = ((val*(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__loader__ModelBuilder__parse]))(var5, var7); /* parse on <var5:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var_mmodules->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_mmodules, var8); /* add_all on <var_mmodules:Array[MModule]>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(self); /* modelbuilder on <self:ToolContext>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_nit__modelbuilder__ModelBuilder__run_phases]))(var9); /* run_phases on <var9:ModelBuilder>*/
}
} else {
}
{
var10 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__mixin___ToolContext___make_main_module]))(self, p0); /* make_main_module on <self:ToolContext>*/
}
var_mainmodule = var10;
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mixin__ToolContext__opt_defines]))(self); /* opt_defines on <self:ToolContext>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_opts__Option__value]))(var11); /* value on <var11:OptionArray>*/
}
var_defines = var12;
{
var13 = ((short int(*)(val* self))(var_defines->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_defines); /* is_empty on <var_defines:Array[String]>*/
}
var14 = !var13;
if (var14){
{
var15 = ((val*(*)(val* self))(var_mainmodule->class->vft[COLOR_nit__mmodule__MModule__location]))(var_mainmodule); /* location on <var_mainmodule:MModule>*/
}
var_location = var15;
{
var16 = ((val*(*)(val* self))(var_mainmodule->class->vft[COLOR_nit__model_base__MEntity__model]))(var_mainmodule); /* model on <var_mainmodule:MModule>*/
}
var_model = var16;
{
var17 = ((val*(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_mmodules); /* first on <var_mmodules:Array[MModule]>*/
}
{
var18 = ((short int(*)(val* self, val* p0))(var_mainmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mainmodule, var17); /* == on <var_mainmodule:MModule>*/
}
if (var18){
var19 = NEW_nit__MModule(&type_nit__MModule);
{
var20 = ((val*(*)(val* self))(var_mainmodule->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mainmodule); /* name on <var_mainmodule:MModule>*/
}
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "-d";
var23 = standard___standard__NativeString___to_s_with_length(var22, 2l);
var21 = var23;
varonce = var21;
}
{
var24 = ((val*(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__string__String___43d]))(var20, var21); /* + on <var20:String>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var19, var_model); /* model= on <var19:MModule>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var19, ((val*)NULL)); /* mgroup= on <var19:MModule>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var19, var24); /* name= on <var19:MModule>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var19, var_location); /* location= on <var19:MModule>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_standard__kernel__Object__init]))(var19); /* init on <var19:MModule>*/
}
var_mainmodule = var19;
{
((void(*)(val* self, val* p0))(var_mainmodule->class->vft[COLOR_nit__mmodule__MModule__set_imported_mmodules]))(var_mainmodule, var_mmodules); /* set_imported_mmodules on <var_mainmodule:MModule>*/
}
{
((void(*)(val* self, short int p0))(var_mainmodule->class->vft[COLOR_nit__mmodule__MModule__is_fictive_61d]))(var_mainmodule, 1); /* is_fictive= on <var_mainmodule:MModule>*/
}
} else {
}
{
var25 = ((val*(*)(val* self))(var_mainmodule->class->vft[COLOR_nit__model__MModule__sys_type]))(var_mainmodule); /* sys_type on <var_mainmodule:MModule>*/
}
var_recv = var25;
if (var_recv == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_recv, ((val*)NULL)); /* != on <var_recv:nullable MClassType>*/
var26 = var27;
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 56);
fatal_exit(1);
}
var28 = NEW_nit__MClassDef(&type_nit__MClassDef);
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_nit__model__MClassDef__mmodule_61d]))(var28, var_mainmodule); /* mmodule= on <var28:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_nit__model__MClassDef__bound_mtype_61d]))(var28, var_recv); /* bound_mtype= on <var28:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_nit__model__MClassDef__location_61d]))(var28, var_location); /* location= on <var28:MClassDef>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_standard__kernel__Object__init]))(var28); /* init on <var28:MClassDef>*/
}
var_mclassdef = var28;
{
((void(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__add_in_hierarchy]))(var_mclassdef); /* add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
var_ = var_defines;
{
var29 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_30 = var29;
for(;;) {
{
var31 = ((short int(*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_30); /* is_ok on <var_30:ArrayIterator[String]>*/
}
if (var31){
{
var32 = ((val*(*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_30); /* item on <var_30:ArrayIterator[String]>*/
}
var_define = var32;
{
var34 = (val*)((long)('=')<<2|2);
var33 = ((val*(*)(val* self, val* p0))(var_define->class->vft[COLOR_standard__string_search__Text__split_once_on]))(var_define, var34); /* split_once_on on <var_define:String>*/
}
var_spl = var33;
{
var35 = ((val*(*)(val* self))(var_spl->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_spl); /* first on <var_spl:Array[String]>*/
}
var_name = var35;
var_val = ((val*)NULL);
{
var36 = ((long(*)(val* self))(var_spl->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_spl); /* length on <var_spl:Array[String]>*/
}
{
{ /* Inline kernel#Int#> (var36,1l) on <var36:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var40 = var36 > 1l;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var41 = ((val*(*)(val* self, long p0))(var_spl->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_spl, 1l); /* [] on <var_spl:Array[String]>*/
}
var_val = var41;
} else {
}
{
var42 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__model__MClassType__mclass]))(var_recv); /* mclass on <var_recv:nullable MClassType(MClassType)>*/
}
{
var43 = ((val*(*)(val* self, val* p0, val* p1))(var_mainmodule->class->vft[COLOR_nit__model__MModule__try_get_primitive_method]))(var_mainmodule, var_name, var42); /* try_get_primitive_method on <var_mainmodule:MModule>*/
}
var_prop = var43;
if (var_prop == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
var45 = ((short int(*)(val* self, val* p0))(var_prop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_prop, ((val*)NULL)); /* == on <var_prop:nullable MMethod>*/
var44 = var45;
}
if (var44){
if (unlikely(varonce46==NULL)) {
var47 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Error: --define: no top-level function `";
var51 = standard___standard__NativeString___to_s_with_length(var50, 40l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "`.";
var55 = standard___standard__NativeString___to_s_with_length(var54, 2l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce46;
varonce46 = NULL;
}
((struct instance_standard__NativeArray*)var47)->values[1]=var_name;
{
var56 = ((val*(*)(val* self))(var47->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
var57 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(self, ((val*)NULL), var56); /* error on <self:ToolContext>*/
}
goto BREAK_label;
} else {
}
{
var58 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_nit__model__MProperty__intro]))(var_prop); /* intro on <var_prop:nullable MMethod(MMethod)>*/
}
{
var59 = ((val*(*)(val* self))(var58->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var58); /* msignature on <var58:MPropDef(MMethodDef)>*/
}
if (var59 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 70);
fatal_exit(1);
} else {
var60 = ((val*(*)(val* self))(var59->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var59); /* return_mtype on <var59:nullable MSignature>*/
}
var_ret = var60;
if (var_ret == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
var62 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, ((val*)NULL)); /* == on <var_ret:nullable MType>*/
var61 = var62;
}
if (var61){
if (unlikely(varonce63==NULL)) {
var64 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "Error: --define: method `";
var68 = standard___standard__NativeString___to_s_with_length(var67, 25l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var64)->values[0]=var66;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "` is not a function.";
var72 = standard___standard__NativeString___to_s_with_length(var71, 20l);
var70 = var72;
varonce69 = var70;
}
((struct instance_standard__NativeArray*)var64)->values[2]=var70;
} else {
var64 = varonce63;
varonce63 = NULL;
}
{
var73 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var64)->values[1]=var73;
{
var74 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
var75 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(self, ((val*)NULL), var74); /* error on <self:ToolContext>*/
}
goto BREAK_label;
} else {
{
var76 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "Bool";
var80 = standard___standard__NativeString___to_s_with_length(var79, 4l);
var78 = var80;
varonce77 = var78;
}
{
var81 = ((short int(*)(val* self, val* p0))(var76->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var76, var78); /* == on <var76:String>*/
}
if (var81){
if (var_val == NULL) {
var83 = 1; /* is null */
} else {
var83 = 0; /* arg is null but recv is not */
}
if (0) {
var84 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, ((val*)NULL)); /* == on <var_val:nullable Object(nullable String)>*/
var83 = var84;
}
var_85 = var83;
if (var83){
var82 = var_85;
} else {
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "true";
var89 = standard___standard__NativeString___to_s_with_length(var88, 4l);
var87 = var89;
varonce86 = var87;
}
{
var90 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var87); /* == on <var_val:nullable Object(String)>*/
}
var82 = var90;
}
if (var82){
var91 = (val*)((long)(1)<<2|3);
var_v = var91;
} else {
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "false";
var95 = standard___standard__NativeString___to_s_with_length(var94, 5l);
var93 = var95;
varonce92 = var93;
}
{
var96 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var93); /* == on <var_val:nullable Object(String)>*/
}
if (var96){
var97 = (val*)((long)(0)<<2|3);
var_v = var97;
} else {
if (unlikely(varonce98==NULL)) {
var99 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Error: --define: method `";
var103 = standard___standard__NativeString___to_s_with_length(var102, 25l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "` needs a Bool.";
var107 = standard___standard__NativeString___to_s_with_length(var106, 15l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var99)->values[2]=var105;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
var108 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var99)->values[1]=var108;
{
var109 = ((val*(*)(val* self))(var99->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
var110 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(self, ((val*)NULL), var109); /* error on <self:ToolContext>*/
}
goto BREAK_label;
}
}
} else {
{
var111 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "Int";
var115 = standard___standard__NativeString___to_s_with_length(var114, 3l);
var113 = var115;
varonce112 = var113;
}
{
var116 = ((short int(*)(val* self, val* p0))(var111->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var111, var113); /* == on <var111:String>*/
}
if (var116){
if (var_val == NULL) {
var118 = 0; /* is null */
} else {
var118 = 1; /* arg is null and recv is not */
}
if (0) {
var119 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_val, ((val*)NULL)); /* != on <var_val:nullable Object(nullable String)>*/
var118 = var119;
}
var_120 = var118;
if (var118){
{
var121 = ((short int(*)(val* self))(var_val->class->vft[COLOR_standard__string__Text__is_numeric]))(var_val); /* is_numeric on <var_val:nullable Object(String)>*/
}
var117 = var121;
} else {
var117 = var_120;
}
if (var117){
{
var122 = ((long(*)(val* self))(var_val->class->vft[COLOR_standard__string__Text__to_i]))(var_val); /* to_i on <var_val:nullable Object(String)>*/
}
var123 = (val*)(var122<<2|1);
var_v = var123;
} else {
if (unlikely(varonce124==NULL)) {
var125 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "Error: --define: method `";
var129 = standard___standard__NativeString___to_s_with_length(var128, 25l);
var127 = var129;
varonce126 = var127;
}
((struct instance_standard__NativeArray*)var125)->values[0]=var127;
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "` needs a Int.";
var133 = standard___standard__NativeString___to_s_with_length(var132, 14l);
var131 = var133;
varonce130 = var131;
}
((struct instance_standard__NativeArray*)var125)->values[2]=var131;
} else {
var125 = varonce124;
varonce124 = NULL;
}
{
var134 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var125)->values[1]=var134;
{
var135 = ((val*(*)(val* self))(var125->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var125); /* native_to_s on <var125:NativeArray[String]>*/
}
varonce124 = var125;
{
var136 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(self, ((val*)NULL), var135); /* error on <self:ToolContext>*/
}
goto BREAK_label;
}
} else {
{
var137 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "String";
var141 = standard___standard__NativeString___to_s_with_length(var140, 6l);
var139 = var141;
varonce138 = var139;
}
{
var142 = ((short int(*)(val* self, val* p0))(var137->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var137, var139); /* == on <var137:String>*/
}
if (var142){
if (var_val == NULL) {
var143 = 0; /* is null */
} else {
var143 = 1; /* arg is null and recv is not */
}
if (0) {
var144 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_val, ((val*)NULL)); /* != on <var_val:nullable Object(nullable String)>*/
var143 = var144;
}
if (var143){
var_v = var_val;
} else {
if (unlikely(varonce145==NULL)) {
var146 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "Error: --define: method `";
var150 = standard___standard__NativeString___to_s_with_length(var149, 25l);
var148 = var150;
varonce147 = var148;
}
((struct instance_standard__NativeArray*)var146)->values[0]=var148;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "` needs a String.";
var154 = standard___standard__NativeString___to_s_with_length(var153, 17l);
var152 = var154;
varonce151 = var152;
}
((struct instance_standard__NativeArray*)var146)->values[2]=var152;
} else {
var146 = varonce145;
varonce145 = NULL;
}
{
var155 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var146)->values[1]=var155;
{
var156 = ((val*(*)(val* self))(var146->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var146); /* native_to_s on <var146:NativeArray[String]>*/
}
varonce145 = var146;
{
var157 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(self, ((val*)NULL), var156); /* error on <self:ToolContext>*/
}
goto BREAK_label;
}
} else {
if (unlikely(varonce158==NULL)) {
var159 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "Error: --define: method `";
var163 = standard___standard__NativeString___to_s_with_length(var162, 25l);
var161 = var163;
varonce160 = var161;
}
((struct instance_standard__NativeArray*)var159)->values[0]=var161;
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "` returns an unsupported type `";
var167 = standard___standard__NativeString___to_s_with_length(var166, 31l);
var165 = var167;
varonce164 = var165;
}
((struct instance_standard__NativeArray*)var159)->values[2]=var165;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "`.";
var171 = standard___standard__NativeString___to_s_with_length(var170, 2l);
var169 = var171;
varonce168 = var169;
}
((struct instance_standard__NativeArray*)var159)->values[4]=var169;
} else {
var159 = varonce158;
varonce158 = NULL;
}
{
var172 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var159)->values[1]=var172;
{
var173 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var159)->values[3]=var173;
{
var174 = ((val*(*)(val* self))(var159->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var159); /* native_to_s on <var159:NativeArray[String]>*/
}
varonce158 = var159;
{
var175 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(self, ((val*)NULL), var174); /* error on <self:ToolContext>*/
}
goto BREAK_label;
}
}
}
}
var176 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
((void(*)(val* self, val* p0))(var176->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var176, var_mclassdef); /* mclassdef= on <var176:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var176->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var176, var_prop); /* mproperty= on <var176:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var176->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var176, var_location); /* location= on <var176:MMethodDef>*/
}
{
((void(*)(val* self))(var176->class->vft[COLOR_standard__kernel__Object__init]))(var176); /* init on <var176:MMethodDef>*/
}
var_pd = var176;
{
var177 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_nit__model__MProperty__intro]))(var_prop); /* intro on <var_prop:nullable MMethod(MMethod)>*/
}
{
var178 = ((val*(*)(val* self))(var177->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var177); /* msignature on <var177:MPropDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var_pd->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var_pd, var178); /* msignature= on <var_pd:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var_pd->class->vft[COLOR_nit__model__MMethodDef__constant_value_61d]))(var_pd, var_v); /* constant_value= on <var_pd:MMethodDef>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_30); /* next on <var_30:ArrayIterator[String]>*/
}
} else {
goto BREAK_label179;
}
}
BREAK_label179: (void)0;
{
((void(*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_30); /* finish on <var_30:ArrayIterator[String]>*/
}
{
var180 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
} else {
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
