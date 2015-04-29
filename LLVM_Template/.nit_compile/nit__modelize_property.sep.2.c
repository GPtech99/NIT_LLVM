#include "nit__modelize_property.sep.0.h"
/* method modelize_property#AMethPropdef#check_signature for (self: AMethPropdef, ModelBuilder) */
void nit__modelize_property___AMethPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var4 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
val* var6 /* : nullable MPropDef */;
val* var7 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable MPropDef */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MProperty */;
val* var18 /* : MPropDef */;
val* var19 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var23 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable AType */;
val* var30 /* : NativeArray[String] */;
static val* varonce;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : MProperty */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : nullable MPropDef */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var47 /* : Bool */;
long var_i /* var i: Int */;
long var48 /* : Int */;
long var_49 /* var : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
short int var56 /* : Bool */;
val* var57 /* : Array[MParameter] */;
val* var58 /* : nullable Object */;
val* var59 /* : MType */;
val* var_myt /* var myt: MType */;
val* var60 /* : Array[MParameter] */;
val* var61 /* : nullable Object */;
val* var62 /* : MType */;
val* var_prt /* var prt: MType */;
val* var63 /* : ANodes[AParam] */;
val* var64 /* : nullable Object */;
val* var_node /* var node: AParam */;
val* var65 /* : MClassType */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
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
val* var86 /* : String */;
val* var87 /* : Array[MParameter] */;
val* var88 /* : nullable Object */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : nullable MPropDef */;
long var93 /* : Int */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var_node96 /* var node: nullable ANode */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : nullable AType */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
val* var104 /* : MClassType */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var108 /* : NativeArray[String] */;
static val* varonce107;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
val* var116 /* : FlatString */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : nullable MPropDef */;
long var125 /* : Int */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
short int var132 /* : Bool */;
long var_i133 /* var i: Int */;
long var134 /* : Int */;
long var_135 /* var : Int */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
int cltype139;
int idtype140;
const char* var_class_name141;
short int var142 /* : Bool */;
val* var143 /* : ANodes[AParam] */;
val* var144 /* : nullable Object */;
val* var145 /* : nullable AType */;
val* var_nt /* var nt: nullable AType */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
val* var148 /* : nullable MType */;
long var149 /* : Int */;
val* var151 /* : nullable AType */;
val* var_nt152 /* var nt: nullable AType */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : nullable MType */;
var_modelbuilder = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MMethodDef>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
var_mclassdef = var3;
{
var4 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
var_mmodule = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_signature]))(self); /* n_signature on <self:AMethPropdef>*/
}
var_nsig = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 993);
fatal_exit(1);
} else {
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var6); /* msignature on <var6:nullable MPropDef(nullable MMethodDef)>*/
}
var_mysignature = var7;
if (var_mysignature == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_mysignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mysignature, ((val*)NULL)); /* == on <var_mysignature:nullable MSignature>*/
var8 = var9;
}
if (var8){
goto RET_LABEL;
} else {
}
if (var_nsig == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nsig, ((val*)NULL)); /* != on <var_nsig:nullable ASignature>*/
var10 = var11;
}
if (var10){
{
var12 = ((short int(*)(val* self, val* p0, val* p1))(var_nsig->class->vft[COLOR_nit__modelize_property__ASignature__check_signature]))(var_nsig, var_modelbuilder, var_mclassdef); /* check_signature on <var_nsig:nullable ASignature(ASignature)>*/
}
var13 = !var12;
if (var13){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 999);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var14, ((val*)NULL)); /* msignature= on <var14:nullable MPropDef(nullable MMethodDef)>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
var15 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
var16 = !var15;
if (var16){
{
var17 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__model__MProperty__intro]))(var17); /* intro on <var17:MProperty(MMethod)>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var18); /* msignature on <var18:MPropDef(MMethodDef)>*/
}
var_msignature = var19;
if (var_msignature == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, ((val*)NULL)); /* == on <var_msignature:nullable MSignature>*/
var20 = var21;
}
if (var20){
goto RET_LABEL;
} else {
}
{
var22 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_msignature); /* return_mtype on <var_msignature:nullable MSignature(MSignature)>*/
}
var_precursor_ret_type = var22;
{
var23 = ((val*(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_mysignature); /* return_mtype on <var_mysignature:nullable MSignature(MSignature)>*/
}
var_ret_type = var23;
if (var_ret_type == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
var26 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ret_type, ((val*)NULL)); /* != on <var_ret_type:nullable MType>*/
var25 = var26;
}
var_ = var25;
if (var25){
if (var_precursor_ret_type == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
var28 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_precursor_ret_type, ((val*)NULL)); /* == on <var_precursor_ret_type:nullable MType>*/
var27 = var28;
}
var24 = var27;
} else {
var24 = var_;
}
if (var24){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1013);
fatal_exit(1);
} else {
var29 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__parser_nodes__ASignature__n_type]))(var_nsig); /* n_type on <var_nsig:nullable ASignature>*/
}
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1013);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var30 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "Redef Error: `";
var34 = standard___standard__NativeString___to_s_with_length(var33, 14l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var30)->values[0]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "` is a procedure, not a function.";
var38 = standard___standard__NativeString___to_s_with_length(var37, 33l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var30)->values[2]=var36;
} else {
var30 = varonce;
varonce = NULL;
}
{
var39 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var40 = ((val*(*)(val* self))(var39->class->vft[COLOR_standard__string__Object__to_s]))(var39); /* to_s on <var39:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var30)->values[1]=var40;
{
var41 = ((val*(*)(val* self))(var30->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce = var30;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var29, var41); /* error on <var_modelbuilder:ModelBuilder>*/
}
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1014);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var42, ((val*)NULL)); /* msignature= on <var42:nullable MPropDef(nullable MMethodDef)>*/
}
goto RET_LABEL;
} else {
}
{
var43 = ((long(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_mysignature); /* arity on <var_mysignature:nullable MSignature(MSignature)>*/
}
{
{ /* Inline kernel#Int#> (var43,0l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var46 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var47 = var43 > 0l;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
var_i = 0l;
{
var48 = ((long(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_mysignature); /* arity on <var_mysignature:nullable MSignature(MSignature)>*/
}
var_49 = var48;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_49) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_49:Int> isa OTHER */
/* <var_49:Int> isa OTHER */
var52 = 1; /* easy <var_49:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var56 = var_i < var_49;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
{
var57 = ((val*(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_mysignature); /* mparameters on <var_mysignature:nullable MSignature(MSignature)>*/
}
{
var58 = ((val*(*)(val* self, long p0))(var57->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var57, var_i); /* [] on <var57:Array[MParameter]>*/
}
{
var59 = ((val*(*)(val* self))(var58->class->vft[COLOR_nit__model__MParameter__mtype]))(var58); /* mtype on <var58:nullable Object(MParameter)>*/
}
var_myt = var59;
{
var60 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:nullable MSignature(MSignature)>*/
}
{
var61 = ((val*(*)(val* self, long p0))(var60->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var60, var_i); /* [] on <var60:Array[MParameter]>*/
}
{
var62 = ((val*(*)(val* self))(var61->class->vft[COLOR_nit__model__MParameter__mtype]))(var61); /* mtype on <var61:nullable Object(MParameter)>*/
}
var_prt = var62;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1023);
fatal_exit(1);
} else {
var63 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var_nsig); /* n_params on <var_nsig:nullable ASignature>*/
}
{
var64 = ((val*(*)(val* self, long p0))(var63->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var63, var_i); /* [] on <var63:ANodes[AParam]>*/
}
var_node = var64;
{
var65 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
var66 = ((short int(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__check_sametype]))(var_modelbuilder, var_node, var_mmodule, var65, var_myt, var_prt); /* check_sametype on <var_modelbuilder:ModelBuilder>*/
}
var67 = !var66;
if (var67){
if (unlikely(varonce68==NULL)) {
var69 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "Redef Error: expected `";
var73 = standard___standard__NativeString___to_s_with_length(var72, 23l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var69)->values[0]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "` for parameter `";
var77 = standard___standard__NativeString___to_s_with_length(var76, 17l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var69)->values[2]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "\'; got `";
var81 = standard___standard__NativeString___to_s_with_length(var80, 8l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var69)->values[4]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "`.";
var85 = standard___standard__NativeString___to_s_with_length(var84, 2l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var69)->values[6]=var83;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
var86 = ((val*(*)(val* self))(var_prt->class->vft[COLOR_standard__string__Object__to_s]))(var_prt); /* to_s on <var_prt:MType>*/
}
((struct instance_standard__NativeArray*)var69)->values[1]=var86;
{
var87 = ((val*(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_mysignature); /* mparameters on <var_mysignature:nullable MSignature(MSignature)>*/
}
{
var88 = ((val*(*)(val* self, long p0))(var87->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var87, var_i); /* [] on <var87:Array[MParameter]>*/
}
{
var89 = ((val*(*)(val* self))(var88->class->vft[COLOR_nit__model_base__MEntity__name]))(var88); /* name on <var88:nullable Object(MParameter)>*/
}
((struct instance_standard__NativeArray*)var69)->values[3]=var89;
{
var90 = ((val*(*)(val* self))(var_myt->class->vft[COLOR_standard__string__Object__to_s]))(var_myt); /* to_s on <var_myt:MType>*/
}
((struct instance_standard__NativeArray*)var69)->values[5]=var90;
{
var91 = ((val*(*)(val* self))(var69->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_node, var91); /* error on <var_modelbuilder:ModelBuilder>*/
}
{
var92 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
if (var92 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1026);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var92->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var92, ((val*)NULL)); /* msignature= on <var92:nullable MPropDef(nullable MMethodDef)>*/
}
} else {
}
var93 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var93;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
if (var_precursor_ret_type == NULL) {
var94 = 0; /* is null */
} else {
var94 = 1; /* arg is null and recv is not */
}
if (0) {
var95 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_precursor_ret_type, ((val*)NULL)); /* != on <var_precursor_ret_type:nullable MType>*/
var94 = var95;
}
if (var94){
var_node96 = ((val*)NULL);
if (var_nsig == NULL) {
var97 = 0; /* is null */
} else {
var97 = 1; /* arg is null and recv is not */
}
if (0) {
var98 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nsig, ((val*)NULL)); /* != on <var_nsig:nullable ASignature>*/
var97 = var98;
}
if (var97){
{
var99 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__parser_nodes__ASignature__n_type]))(var_nsig); /* n_type on <var_nsig:nullable ASignature(ASignature)>*/
}
var_node96 = var99;
} else {
}
if (var_node96 == NULL) {
var100 = 1; /* is null */
} else {
var100 = 0; /* arg is null but recv is not */
}
if (0) {
var101 = ((short int(*)(val* self, val* p0))(var_node96->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node96, ((val*)NULL)); /* == on <var_node96:nullable ANode>*/
var100 = var101;
}
if (var100){
var_node96 = self;
} else {
}
if (var_ret_type == NULL) {
var102 = 1; /* is null */
} else {
var102 = 0; /* arg is null but recv is not */
}
if (0) {
var103 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, ((val*)NULL)); /* == on <var_ret_type:nullable MType>*/
var102 = var103;
}
if (var102){
var_ret_type = var_precursor_ret_type;
} else {
{
var104 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
var105 = ((short int(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__check_subtype]))(var_modelbuilder, var_node96, var_mmodule, var104, var_ret_type, var_precursor_ret_type); /* check_subtype on <var_modelbuilder:ModelBuilder>*/
}
var106 = !var105;
if (var106){
if (unlikely(varonce107==NULL)) {
var108 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "Redef Error: expected `";
var112 = standard___standard__NativeString___to_s_with_length(var111, 23l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var108)->values[0]=var110;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "` for return type; got `";
var116 = standard___standard__NativeString___to_s_with_length(var115, 24l);
var114 = var116;
varonce113 = var114;
}
((struct instance_standard__NativeArray*)var108)->values[2]=var114;
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "`.";
var120 = standard___standard__NativeString___to_s_with_length(var119, 2l);
var118 = var120;
varonce117 = var118;
}
((struct instance_standard__NativeArray*)var108)->values[4]=var118;
} else {
var108 = varonce107;
varonce107 = NULL;
}
{
var121 = ((val*(*)(val* self))(var_precursor_ret_type->class->vft[COLOR_standard__string__Object__to_s]))(var_precursor_ret_type); /* to_s on <var_precursor_ret_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var108)->values[1]=var121;
{
var122 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_standard__string__Object__to_s]))(var_ret_type); /* to_s on <var_ret_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var108)->values[3]=var122;
{
var123 = ((val*(*)(val* self))(var108->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var108); /* native_to_s on <var108:NativeArray[String]>*/
}
varonce107 = var108;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_node96, var123); /* error on <var_modelbuilder:ModelBuilder>*/
}
{
var124 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
if (var124 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1039);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var124->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var124, ((val*)NULL)); /* msignature= on <var124:nullable MPropDef(nullable MMethodDef)>*/
}
} else {
}
}
} else {
}
} else {
}
{
var125 = ((long(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_mysignature); /* arity on <var_mysignature:nullable MSignature(MSignature)>*/
}
{
{ /* Inline kernel#Int#> (var125,0l) on <var125:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var128 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var132 = var125 > 0l;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
if (var126){
var_i133 = 0l;
{
var134 = ((long(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_mysignature); /* arity on <var_mysignature:nullable MSignature(MSignature)>*/
}
var_135 = var134;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i133,var_135) on <var_i133:Int> */
/* Covariant cast for argument 0 (i) <var_135:Int> isa OTHER */
/* <var_135:Int> isa OTHER */
var138 = 1; /* easy <var_135:Int> isa OTHER*/
if (unlikely(!var138)) {
var_class_name141 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name141);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var142 = var_i133 < var_135;
var136 = var142;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
if (var136){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1047);
fatal_exit(1);
} else {
var143 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__parser_nodes__ASignature__n_params]))(var_nsig); /* n_params on <var_nsig:nullable ASignature>*/
}
{
var144 = ((val*(*)(val* self, long p0))(var143->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var143, var_i133); /* [] on <var143:ANodes[AParam]>*/
}
{
var145 = ((val*(*)(val* self))(var144->class->vft[COLOR_nit__parser_nodes__AParam__n_type]))(var144); /* n_type on <var144:nullable Object(AParam)>*/
}
var_nt = var145;
if (var_nt == NULL) {
var146 = 0; /* is null */
} else {
var146 = 1; /* arg is null and recv is not */
}
if (0) {
var147 = ((short int(*)(val* self, val* p0))(var_nt->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nt, ((val*)NULL)); /* != on <var_nt:nullable AType>*/
var146 = var147;
}
if (var146){
{
var148 = ((val*(*)(val* self))(var_nt->class->vft[COLOR_nit__modelbuilder_base__AType__mtype]))(var_nt); /* mtype on <var_nt:nullable AType(AType)>*/
}
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1048);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__check_visibility]))(var_modelbuilder, var_nt, var148, var_mpropdef); /* check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var149 = standard___standard__Int___Discrete__successor(var_i133, 1l);
var_i133 = var149;
} else {
goto BREAK_label150;
}
}
BREAK_label150: (void)0;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1050);
fatal_exit(1);
} else {
var151 = ((val*(*)(val* self))(var_nsig->class->vft[COLOR_nit__parser_nodes__ASignature__n_type]))(var_nsig); /* n_type on <var_nsig:nullable ASignature>*/
}
var_nt152 = var151;
if (var_nt152 == NULL) {
var153 = 0; /* is null */
} else {
var153 = 1; /* arg is null and recv is not */
}
if (0) {
var154 = ((short int(*)(val* self, val* p0))(var_nt152->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nt152, ((val*)NULL)); /* != on <var_nt152:nullable AType>*/
var153 = var154;
}
if (var153){
{
var155 = ((val*(*)(val* self))(var_nt152->class->vft[COLOR_nit__modelbuilder_base__AType__mtype]))(var_nt152); /* mtype on <var_nt152:nullable AType(AType)>*/
}
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1051);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__check_visibility]))(var_modelbuilder, var_nt152, var155, var_mpropdef); /* check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethid#return_is_mandatory for (self: AMethid): Bool */
short int nit__modelize_property___AMethid___return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#accept_special_last_parameter for (self: AMethid): Bool */
short int nit__modelize_property___AMethid___accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#min_arity for (self: AMethid): Int */
long nit__modelize_property___AMethid___min_arity(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#is_binary for (self: AMethid): Bool */
short int nit__modelize_property___AMethid___is_binary(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#return_is_mandatory for (self: AIdMethid): Bool */
short int nit__modelize_property___AIdMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#accept_special_last_parameter for (self: AIdMethid): Bool */
short int nit__modelize_property___AIdMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#min_arity for (self: AIdMethid): Int */
long nit__modelize_property___AIdMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#is_binary for (self: AIdMethid): Bool */
short int nit__modelize_property___AIdMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraMethid#accept_special_last_parameter for (self: ABraMethid): Bool */
short int nit__modelize_property___ABraMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraMethid#is_binary for (self: ABraMethid): Bool */
short int nit__modelize_property___ABraMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#return_is_mandatory for (self: ABraassignMethid): Bool */
short int nit__modelize_property___ABraassignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#min_arity for (self: ABraassignMethid): Int */
long nit__modelize_property___ABraassignMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 2l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#is_binary for (self: ABraassignMethid): Bool */
short int nit__modelize_property___ABraassignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAssignMethid#return_is_mandatory for (self: AAssignMethid): Bool */
short int nit__modelize_property___AAssignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAssignMethid#is_binary for (self: AAssignMethid): Bool */
short int nit__modelize_property___AAssignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#noinit for (self: AAttrPropdef): Bool */
short int nit__modelize_property___AAttrPropdef___noinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#noinit= for (self: AAttrPropdef, Bool) */
void nit__modelize_property___AAttrPropdef___noinit_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s = p0; /* _noinit on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#is_lazy for (self: AAttrPropdef): Bool */
short int nit__modelize_property___AAttrPropdef___is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#is_lazy= for (self: AAttrPropdef, Bool) */
void nit__modelize_property___AAttrPropdef___is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s = p0; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#has_value for (self: AAttrPropdef): Bool */
short int nit__modelize_property___AAttrPropdef___has_value(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#has_value= for (self: AAttrPropdef, Bool) */
void nit__modelize_property___AAttrPropdef___has_value_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s = p0; /* _has_value on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mlazypropdef for (self: AAttrPropdef): nullable MAttributeDef */
val* nit__modelize_property___AAttrPropdef___mlazypropdef(val* self) {
val* var /* : nullable MAttributeDef */;
val* var1 /* : nullable MAttributeDef */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mlazypropdef= for (self: AAttrPropdef, nullable MAttributeDef) */
void nit__modelize_property___AAttrPropdef___mlazypropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val = p0; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nit__modelize_property___AAttrPropdef___mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nit__modelize_property___AAttrPropdef___mreadpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val = p0; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nit__modelize_property___AAttrPropdef___mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nit__modelize_property___AAttrPropdef___mwritepropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val = p0; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_property for (self: AAttrPropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___AAttrPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : TId */;
val* var_nid2 /* var nid2: TId */;
val* var2 /* : String */;
val* var_name /* var name: String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : nullable AAnnotation */;
val* var_atabstract /* var atabstract: nullable AAnnotation */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClassKind */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var13 /* : NativeArray[String] */;
static val* varonce12;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var30 /* : MClassKind */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : MAttribute */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
val* var40 /* : Sys */;
val* var41 /* : MVisibility */;
val* var_mprop /* var mprop: MAttribute */;
val* var42 /* : MAttributeDef */;
val* var43 /* : Location */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
short int var44 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var45 /* : HashMap[MPropDef, APropdef] */;
val* var_readname /* var readname: String */;
val* var46 /* : nullable MProperty */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
val* var_mreadprop /* var mreadprop: nullable MMethod */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable AVisibility */;
val* var54 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var55 /* : MMethod */;
val* var56 /* : nullable TKwredef */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : nullable TKwredef */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : nullable AVisibility */;
val* var63 /* : Map[MProperty, APropdef] */;
val* var64 /* : MMethodDef */;
val* var65 /* : Location */;
val* var_mreadpropdef /* var mreadpropdef: MMethodDef */;
val* var66 /* : HashMap[MPropDef, APropdef] */;
val* var67 /* : nullable MPropDef */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : nullable MPropDef */;
val* var71 /* : nullable MDoc */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : nullable AExpr */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var_ /* var : Bool */;
val* var78 /* : nullable AExpr */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var_84 /* var : Bool */;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
val* var94 /* : nullable AAnnotation */;
val* var_atnoinit /* var atnoinit: nullable AAnnotation */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
val* var101 /* : nullable AAnnotation */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
val* var119 /* : nullable AAnnotation */;
val* var_atlazy /* var atlazy: nullable AAnnotation */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : FlatString */;
val* var124 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var_128 /* var : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var_134 /* var : Bool */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
val* var140 /* : FlatString */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : FlatString */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : FlatString */;
val* var155 /* : MAttribute */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
val* var159 /* : FlatString */;
val* var160 /* : String */;
val* var161 /* : Sys */;
val* var162 /* : MVisibility */;
val* var_mlazyprop /* var mlazyprop: MAttribute */;
val* var163 /* : MAttributeDef */;
val* var164 /* : Location */;
val* var_mlazypropdef /* var mlazypropdef: MAttributeDef */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : FlatString */;
val* var169 /* : nullable AAnnotation */;
val* var_atreadonly /* var atreadonly: nullable AAnnotation */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
val* var177 /* : FlatString */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
val* var181 /* : FlatString */;
val* var182 /* : String */;
val* var_writename /* var writename: String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : FlatString */;
val* var187 /* : nullable AAnnotation */;
val* var_atwritable /* var atwritable: nullable AAnnotation */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
val* var190 /* : ANodes[AExpr] */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
val* var193 /* : String */;
val* var194 /* : nullable String */;
val* var195 /* : nullable MProperty */;
short int var196 /* : Bool */;
int cltype197;
int idtype198;
const char* var_class_name199;
val* var_mwriteprop /* var mwriteprop: nullable MMethod */;
val* var_nwkwredef /* var nwkwredef: nullable Token */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
val* var202 /* : nullable TKwredef */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
val* var207 /* : nullable AVisibility */;
val* var208 /* : MVisibility */;
val* var_mvisibility209 /* var mvisibility: nullable Object */;
val* var210 /* : Sys */;
val* var211 /* : MVisibility */;
val* var212 /* : MMethod */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
val* var215 /* : nullable MDeprecationInfo */;
val* var216 /* : nullable Token */;
val* var217 /* : nullable TKwredef */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
val* var222 /* : nullable AVisibility */;
val* var223 /* : Map[MProperty, APropdef] */;
val* var224 /* : MMethodDef */;
val* var225 /* : Location */;
val* var_mwritepropdef /* var mwritepropdef: MMethodDef */;
val* var226 /* : HashMap[MPropDef, APropdef] */;
val* var227 /* : nullable MDoc */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
var = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
var_mclass = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_id2]))(self); /* n_id2 on <self:AAttrPropdef>*/
}
var_nid2 = var1;
{
var2 = ((val*(*)(val* self))(var_nid2->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_nid2); /* text on <var_nid2:TId>*/
}
var_name = var2;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "abstract";
var5 = standard___standard__NativeString___to_s_with_length(var4, 8l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var3, var_modelbuilder); /* get_single_annotation on <self:AAttrPropdef>*/
}
var_atabstract = var6;
if (var_atabstract == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atabstract, ((val*)NULL)); /* == on <var_atabstract:nullable AAnnotation>*/
var7 = var8;
}
if (var7){
{
var9 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__kind]))(var_mclass); /* kind on <var_mclass:MClass>*/
}
{
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_nit__model__MClassKind__need_init]))(var9); /* need_init on <var9:MClassKind>*/
}
var11 = !var10;
if (var11){
if (unlikely(varonce12==NULL)) {
var13 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Error: attempt to define attribute `";
var17 = standard___standard__NativeString___to_s_with_length(var16, 36l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var13)->values[0]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "` in the ";
var21 = standard___standard__NativeString___to_s_with_length(var20, 9l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var13)->values[2]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " `";
var25 = standard___standard__NativeString___to_s_with_length(var24, 2l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var13)->values[4]=var23;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "`.";
var29 = standard___standard__NativeString___to_s_with_length(var28, 2l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var13)->values[6]=var27;
} else {
var13 = varonce12;
varonce12 = NULL;
}
((struct instance_standard__NativeArray*)var13)->values[1]=var_name;
{
var30 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__kind]))(var_mclass); /* kind on <var_mclass:MClass>*/
}
{
var31 = ((val*(*)(val* self))(var30->class->vft[COLOR_standard__string__Object__to_s]))(var30); /* to_s on <var30:MClassKind>*/
}
((struct instance_standard__NativeArray*)var13)->values[3]=var31;
{
var32 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var13)->values[5]=var32;
{
var33 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce12 = var13;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var33); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var34 = NEW_nit__MAttribute(&type_nit__MAttribute);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "_";
var38 = standard___standard__NativeString___to_s_with_length(var37, 1l);
var36 = var38;
varonce35 = var36;
}
{
var39 = ((val*(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__string__String___43d]))(var36, var_name); /* + on <var36:String>*/
}
var40 = glob_sys;
{
var41 = ((val*(*)(val* self))(var40->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var40); /* private_visibility on <var40:Sys>*/
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var34, var_mclassdef); /* intro_mclassdef= on <var34:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nit__model__MProperty__name_61d]))(var34, var39); /* name= on <var34:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var34, var41); /* visibility= on <var34:MAttribute>*/
}
{
((void(*)(val* self))(var34->class->vft[COLOR_standard__kernel__Object__init]))(var34); /* init on <var34:MAttribute>*/
}
var_mprop = var34;
var42 = NEW_nit__MAttributeDef(&type_nit__MAttributeDef);
{
var43 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:AAttrPropdef>*/
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var42, var_mclassdef); /* mclassdef= on <var42:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var42, var_mprop); /* mproperty= on <var42:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var42, var43); /* location= on <var42:MAttributeDef>*/
}
{
((void(*)(val* self))(var42->class->vft[COLOR_standard__kernel__Object__init]))(var42); /* init on <var42:MAttributeDef>*/
}
var_mpropdef = var42;
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_mpropdef->type->table_size) {
var44 = 0;
} else {
var44 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (unlikely(!var44)) {
var_class_name = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1144);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef_61d]))(self, var_mpropdef); /* mpropdef= on <self:AAttrPropdef>*/
}
{
var45 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder); /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var45->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var45, var_mpropdef, self); /* []= on <var45:HashMap[MPropDef, APropdef]>*/
}
} else {
}
var_readname = var_name;
{
var46 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_nid2, var_mclassdef, var_readname); /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/
}
/* <var46:nullable MProperty> isa nullable MMethod */
cltype48 = type_nullable__nit__MMethod.color;
idtype49 = type_nullable__nit__MMethod.id;
if(var46 == NULL) {
var47 = 1;
} else {
if(cltype48 >= var46->type->table_size) {
var47 = 0;
} else {
var47 = var46->type->type_table[cltype48] == idtype49;
}
}
if (unlikely(!var47)) {
var_class_name50 = var46 == NULL ? "null" : var46->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1149);
fatal_exit(1);
}
var_mreadprop = var46;
if (var_mreadprop == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (0) {
var52 = ((short int(*)(val* self, val* p0))(var_mreadprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mreadprop, ((val*)NULL)); /* == on <var_mreadprop:nullable MMethod>*/
var51 = var52;
}
if (var51){
{
var53 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(self); /* n_visibility on <self:AAttrPropdef>*/
}
{
var54 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_mclassdef, var53); /* new_property_visibility on <self:AAttrPropdef>*/
}
var_mvisibility = var54;
var55 = NEW_nit__MMethod(&type_nit__MMethod);
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var55, var_mclassdef); /* intro_mclassdef= on <var55:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nit__model__MProperty__name_61d]))(var55, var_readname); /* name= on <var55:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var55, var_mvisibility); /* visibility= on <var55:MMethod>*/
}
{
((void(*)(val* self))(var55->class->vft[COLOR_standard__kernel__Object__init]))(var55); /* init on <var55:MMethod>*/
}
var_mreadprop = var55;
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(self); /* n_kwredef on <self:AAttrPropdef>*/
}
{
var57 = ((short int(*)(val* self, val* p0, val* p1, val* p2, short int p3, val* p4))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_mclassdef, var56, 0, var_mreadprop); /* check_redef_keyword on <self:AAttrPropdef>*/
}
var58 = !var57;
if (var58){
goto RET_LABEL;
} else {
}
} else {
{
var59 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(self); /* n_kwredef on <self:AAttrPropdef>*/
}
{
var60 = ((short int(*)(val* self, val* p0, val* p1, val* p2, short int p3, val* p4))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_mclassdef, var59, 1, var_mreadprop); /* check_redef_keyword on <self:AAttrPropdef>*/
}
var61 = !var60;
if (var61){
goto RET_LABEL;
} else {
}
{
var62 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(self); /* n_visibility on <self:AAttrPropdef>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var62, var_mreadprop); /* check_redef_property_visibility on <self:AAttrPropdef>*/
}
}
{
var63 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__modelize_property__MClassDef__mprop2npropdef]))(var_mclassdef); /* mprop2npropdef on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var63&3)?class_info[((long)var63&3)]:var63->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var63, var_mreadprop, self); /* []= on <var63:Map[MProperty, APropdef]>*/
}
var64 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
var65 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:AAttrPropdef>*/
}
{
((void(*)(val* self, val* p0))(var64->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var64, var_mclassdef); /* mclassdef= on <var64:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var64->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var64, var_mreadprop); /* mproperty= on <var64:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var64->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var64, var65); /* location= on <var64:MMethodDef>*/
}
{
((void(*)(val* self))(var64->class->vft[COLOR_standard__kernel__Object__init]))(var64); /* init on <var64:MMethodDef>*/
}
var_mreadpropdef = var64;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mreadpropdef_61d]))(self, var_mreadpropdef); /* mreadpropdef= on <self:AAttrPropdef>*/
}
{
var66 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder); /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var66->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var66, var_mreadpropdef, self); /* []= on <var66:HashMap[MPropDef, APropdef]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_property__APropdef__set_doc]))(self, var_mreadpropdef, var_modelbuilder); /* set_doc on <self:AAttrPropdef>*/
}
{
var67 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
if (var67 == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
var69 = ((short int(*)(val* self, val* p0))(var67->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var67, ((val*)NULL)); /* != on <var67:nullable MPropDef(nullable MAttributeDef)>*/
var68 = var69;
}
if (var68){
{
var70 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
{
var71 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_nit__mdoc__MEntity__mdoc]))(var_mreadpropdef); /* mdoc on <var_mreadpropdef:MMethodDef>*/
}
if (var70 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1164);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var70->class->vft[COLOR_nit__mdoc__MEntity__mdoc_61d]))(var70, var71); /* mdoc= on <var70:nullable MPropDef(nullable MAttributeDef)>*/
}
} else {
}
if (var_atabstract == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
var73 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atabstract, ((val*)NULL)); /* != on <var_atabstract:nullable AAnnotation>*/
var72 = var73;
}
if (var72){
{
((void(*)(val* self, short int p0))(var_mreadpropdef->class->vft[COLOR_nit__model__MMethodDef__is_abstract_61d]))(var_mreadpropdef, 1); /* is_abstract= on <var_mreadpropdef:MMethodDef>*/
}
} else {
}
{
var75 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_expr]))(self); /* n_expr on <self:AAttrPropdef>*/
}
if (var75 == NULL) {
var76 = 0; /* is null */
} else {
var76 = 1; /* arg is null and recv is not */
}
if (0) {
var77 = ((short int(*)(val* self, val* p0))(var75->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var75, ((val*)NULL)); /* != on <var75:nullable AExpr>*/
var76 = var77;
}
var_ = var76;
if (var76){
var74 = var_;
} else {
{
var78 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_block]))(self); /* n_block on <self:AAttrPropdef>*/
}
if (var78 == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (0) {
var80 = ((short int(*)(val* self, val* p0))(var78->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var78, ((val*)NULL)); /* != on <var78:nullable AExpr>*/
var79 = var80;
}
var74 = var79;
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__has_value_61d]))(self, var74); /* has_value= on <self:AAttrPropdef>*/
}
if (var_atabstract == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
var83 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atabstract, ((val*)NULL)); /* != on <var_atabstract:nullable AAnnotation>*/
var82 = var83;
}
var_84 = var82;
if (var82){
{
var85 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__has_value]))(self); /* has_value on <self:AAttrPropdef>*/
}
var81 = var85;
} else {
var81 = var_84;
}
if (var81){
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "Error: `abstract` attributes cannot have an initial value.";
var89 = standard___standard__NativeString___to_s_with_length(var88, 58l);
var87 = var89;
varonce86 = var87;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_atabstract, var87); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "noinit";
var93 = standard___standard__NativeString___to_s_with_length(var92, 6l);
var91 = var93;
varonce90 = var91;
}
{
var94 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var91, var_modelbuilder); /* get_single_annotation on <self:AAttrPropdef>*/
}
var_atnoinit = var94;
if (var_atnoinit == NULL) {
var95 = 1; /* is null */
} else {
var95 = 0; /* arg is null but recv is not */
}
if (0) {
var96 = ((short int(*)(val* self, val* p0))(var_atnoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atnoinit, ((val*)NULL)); /* == on <var_atnoinit:nullable AAnnotation>*/
var95 = var96;
}
if (var95){
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "noautoinit";
var100 = standard___standard__NativeString___to_s_with_length(var99, 10l);
var98 = var100;
varonce97 = var98;
}
{
var101 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var98, var_modelbuilder); /* get_single_annotation on <self:AAttrPropdef>*/
}
var_atnoinit = var101;
} else {
}
if (var_atnoinit == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
var103 = ((short int(*)(val* self, val* p0))(var_atnoinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atnoinit, ((val*)NULL)); /* != on <var_atnoinit:nullable AAnnotation>*/
var102 = var103;
}
if (var102){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__noinit_61d]))(self, 1); /* noinit= on <self:AAttrPropdef>*/
}
{
var104 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__has_value]))(self); /* has_value on <self:AAttrPropdef>*/
}
if (var104){
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "Error: `noautoinit` attributes cannot have an initial value.";
var108 = standard___standard__NativeString___to_s_with_length(var107, 60l);
var106 = var108;
varonce105 = var106;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_atnoinit, var106); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (var_atabstract == NULL) {
var109 = 0; /* is null */
} else {
var109 = 1; /* arg is null and recv is not */
}
if (0) {
var110 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atabstract, ((val*)NULL)); /* != on <var_atabstract:nullable AAnnotation>*/
var109 = var110;
}
if (var109){
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "Error: `noautoinit` attributes cannot be abstract.";
var114 = standard___standard__NativeString___to_s_with_length(var113, 50l);
var112 = var114;
varonce111 = var112;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_atnoinit, var112); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "lazy";
var118 = standard___standard__NativeString___to_s_with_length(var117, 4l);
var116 = var118;
varonce115 = var116;
}
{
var119 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var116, var_modelbuilder); /* get_single_annotation on <self:AAttrPropdef>*/
}
var_atlazy = var119;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "autoinit";
var123 = standard___standard__NativeString___to_s_with_length(var122, 8l);
var121 = var123;
varonce120 = var121;
}
{
var124 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var121, var_modelbuilder); /* get_single_annotation on <self:AAttrPropdef>*/
}
var_atautoinit = var124;
if (var_atlazy == NULL) {
var126 = 0; /* is null */
} else {
var126 = 1; /* arg is null and recv is not */
}
if (0) {
var127 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atlazy, ((val*)NULL)); /* != on <var_atlazy:nullable AAnnotation>*/
var126 = var127;
}
var_128 = var126;
if (var126){
var125 = var_128;
} else {
if (var_atautoinit == NULL) {
var129 = 0; /* is null */
} else {
var129 = 1; /* arg is null and recv is not */
}
if (0) {
var130 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atautoinit, ((val*)NULL)); /* != on <var_atautoinit:nullable AAnnotation>*/
var129 = var130;
}
var125 = var129;
}
if (var125){
if (var_atlazy == NULL) {
var132 = 0; /* is null */
} else {
var132 = 1; /* arg is null and recv is not */
}
if (0) {
var133 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atlazy, ((val*)NULL)); /* != on <var_atlazy:nullable AAnnotation>*/
var132 = var133;
}
var_134 = var132;
if (var132){
if (var_atautoinit == NULL) {
var135 = 0; /* is null */
} else {
var135 = 1; /* arg is null and recv is not */
}
if (0) {
var136 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atautoinit, ((val*)NULL)); /* != on <var_atautoinit:nullable AAnnotation>*/
var135 = var136;
}
var131 = var135;
} else {
var131 = var_134;
}
if (var131){
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "Error: `lazy` incompatible with `autoinit`.";
var140 = standard___standard__NativeString___to_s_with_length(var139, 43l);
var138 = var140;
varonce137 = var138;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_atlazy, var138); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var141 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__has_value]))(self); /* has_value on <self:AAttrPropdef>*/
}
var142 = !var141;
if (var142){
if (var_atlazy == NULL) {
var143 = 0; /* is null */
} else {
var143 = 1; /* arg is null and recv is not */
}
if (0) {
var144 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atlazy, ((val*)NULL)); /* != on <var_atlazy:nullable AAnnotation>*/
var143 = var144;
}
if (var143){
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "Error: `lazy` attributes need a value.";
var148 = standard___standard__NativeString___to_s_with_length(var147, 38l);
var146 = var148;
varonce145 = var146;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_atlazy, var146); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (var_atautoinit == NULL) {
var149 = 0; /* is null */
} else {
var149 = 1; /* arg is null and recv is not */
}
if (0) {
var150 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atautoinit, ((val*)NULL)); /* != on <var_atautoinit:nullable AAnnotation>*/
var149 = var150;
}
if (var149){
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "Error: `autoinit` attributes need a value.";
var154 = standard___standard__NativeString___to_s_with_length(var153, 42l);
var152 = var154;
varonce151 = var152;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_atautoinit, var152); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__has_value_61d]))(self, 1); /* has_value= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__is_lazy_61d]))(self, 1); /* is_lazy= on <self:AAttrPropdef>*/
}
var155 = NEW_nit__MAttribute(&type_nit__MAttribute);
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "lazy _";
var159 = standard___standard__NativeString___to_s_with_length(var158, 6l);
var157 = var159;
varonce156 = var157;
}
{
var160 = ((val*(*)(val* self, val* p0))(var157->class->vft[COLOR_standard__string__String___43d]))(var157, var_name); /* + on <var157:String>*/
}
var161 = glob_sys;
{
var162 = ((val*(*)(val* self))(var161->class->vft[COLOR_nit__model_base__Sys__none_visibility]))(var161); /* none_visibility on <var161:Sys>*/
}
{
((void(*)(val* self, val* p0))(var155->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var155, var_mclassdef); /* intro_mclassdef= on <var155:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var155->class->vft[COLOR_nit__model__MProperty__name_61d]))(var155, var160); /* name= on <var155:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var155->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var155, var162); /* visibility= on <var155:MAttribute>*/
}
{
((void(*)(val* self))(var155->class->vft[COLOR_standard__kernel__Object__init]))(var155); /* init on <var155:MAttribute>*/
}
var_mlazyprop = var155;
var163 = NEW_nit__MAttributeDef(&type_nit__MAttributeDef);
{
var164 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:AAttrPropdef>*/
}
{
((void(*)(val* self, val* p0))(var163->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var163, var_mclassdef); /* mclassdef= on <var163:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var163->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var163, var_mlazyprop); /* mproperty= on <var163:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var163->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var163, var164); /* location= on <var163:MAttributeDef>*/
}
{
((void(*)(val* self))(var163->class->vft[COLOR_standard__kernel__Object__init]))(var163); /* init on <var163:MAttributeDef>*/
}
var_mlazypropdef = var163;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mlazypropdef_61d]))(self, var_mlazypropdef); /* mlazypropdef= on <self:AAttrPropdef>*/
}
} else {
}
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "readonly";
var168 = standard___standard__NativeString___to_s_with_length(var167, 8l);
var166 = var168;
varonce165 = var166;
}
{
var169 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var166, var_modelbuilder); /* get_single_annotation on <self:AAttrPropdef>*/
}
var_atreadonly = var169;
if (var_atreadonly == NULL) {
var170 = 0; /* is null */
} else {
var170 = 1; /* arg is null and recv is not */
}
if (0) {
var171 = ((short int(*)(val* self, val* p0))(var_atreadonly->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atreadonly, ((val*)NULL)); /* != on <var_atreadonly:nullable AAnnotation>*/
var170 = var171;
}
if (var170){
{
var172 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__has_value]))(self); /* has_value on <self:AAttrPropdef>*/
}
var173 = !var172;
if (var173){
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = "Error: `readonly` attributes need a value.";
var177 = standard___standard__NativeString___to_s_with_length(var176, 42l);
var175 = var177;
varonce174 = var175;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_atreadonly, var175); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "=";
var181 = standard___standard__NativeString___to_s_with_length(var180, 1l);
var179 = var181;
varonce178 = var179;
}
{
var182 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__string__String___43d]))(var_name, var179); /* + on <var_name:String>*/
}
var_writename = var182;
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "writable";
var186 = standard___standard__NativeString___to_s_with_length(var185, 8l);
var184 = var186;
varonce183 = var184;
}
{
var187 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var184, var_modelbuilder); /* get_single_annotation on <self:AAttrPropdef>*/
}
var_atwritable = var187;
if (var_atwritable == NULL) {
var188 = 0; /* is null */
} else {
var188 = 1; /* arg is null and recv is not */
}
if (0) {
var189 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atwritable, ((val*)NULL)); /* != on <var_atwritable:nullable AAnnotation>*/
var188 = var189;
}
if (var188){
{
var190 = ((val*(*)(val* self))(var_atwritable->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_args]))(var_atwritable); /* n_args on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
{
var191 = ((short int(*)(val* self))(var190->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var190); /* is_empty on <var190:ANodes[AExpr]>*/
}
var192 = !var191;
if (var192){
{
var194 = ((val*(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_nit__annotation__AAnnotation__arg_as_id]))(var_atwritable, var_modelbuilder); /* arg_as_id on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
if (var194!=NULL) {
var193 = var194;
} else {
var193 = var_writename;
}
var_writename = var193;
} else {
}
} else {
}
{
var195 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_nid2, var_mclassdef, var_writename); /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/
}
/* <var195:nullable MProperty> isa nullable MMethod */
cltype197 = type_nullable__nit__MMethod.color;
idtype198 = type_nullable__nit__MMethod.id;
if(var195 == NULL) {
var196 = 1;
} else {
if(cltype197 >= var195->type->table_size) {
var196 = 0;
} else {
var196 = var195->type->type_table[cltype197] == idtype198;
}
}
if (unlikely(!var196)) {
var_class_name199 = var195 == NULL ? "null" : var195->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name199);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1226);
fatal_exit(1);
}
var_mwriteprop = var195;
var_nwkwredef = ((val*)NULL);
if (var_atwritable == NULL) {
var200 = 0; /* is null */
} else {
var200 = 1; /* arg is null and recv is not */
}
if (0) {
var201 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atwritable, ((val*)NULL)); /* != on <var_atwritable:nullable AAnnotation>*/
var200 = var201;
}
if (var200){
{
var202 = ((val*(*)(val* self))(var_atwritable->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(var_atwritable); /* n_kwredef on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var_nwkwredef = var202;
} else {
}
if (var_mwriteprop == NULL) {
var203 = 1; /* is null */
} else {
var203 = 0; /* arg is null but recv is not */
}
if (0) {
var204 = ((short int(*)(val* self, val* p0))(var_mwriteprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mwriteprop, ((val*)NULL)); /* == on <var_mwriteprop:nullable MMethod>*/
var203 = var204;
}
if (var203){
if (var_atwritable == NULL) {
var205 = 0; /* is null */
} else {
var205 = 1; /* arg is null and recv is not */
}
if (0) {
var206 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atwritable, ((val*)NULL)); /* != on <var_atwritable:nullable AAnnotation>*/
var205 = var206;
}
if (var205){
{
var207 = ((val*(*)(val* self))(var_atwritable->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(var_atwritable); /* n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
{
var208 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_mclassdef, var207); /* new_property_visibility on <self:AAttrPropdef>*/
}
var_mvisibility209 = var208;
} else {
var210 = glob_sys;
{
var211 = ((val*(*)(val* self))(var210->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var210); /* private_visibility on <var210:Sys>*/
}
var_mvisibility209 = var211;
}
var212 = NEW_nit__MMethod(&type_nit__MMethod);
{
((void(*)(val* self, val* p0))(var212->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var212, var_mclassdef); /* intro_mclassdef= on <var212:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var212->class->vft[COLOR_nit__model__MProperty__name_61d]))(var212, var_writename); /* name= on <var212:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var212->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var212, var_mvisibility209); /* visibility= on <var212:MMethod>*/
}
{
((void(*)(val* self))(var212->class->vft[COLOR_standard__kernel__Object__init]))(var212); /* init on <var212:MMethod>*/
}
var_mwriteprop = var212;
{
var213 = ((short int(*)(val* self, val* p0, val* p1, val* p2, short int p3, val* p4))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_mclassdef, var_nwkwredef, 0, var_mwriteprop); /* check_redef_keyword on <self:AAttrPropdef>*/
}
var214 = !var213;
if (var214){
goto RET_LABEL;
} else {
}
{
var215 = ((val*(*)(val* self))(var_mreadprop->class->vft[COLOR_nit__mdoc__MEntity__deprecation]))(var_mreadprop); /* deprecation on <var_mreadprop:nullable MMethod(MMethod)>*/
}
{
((void(*)(val* self, val* p0))(var_mwriteprop->class->vft[COLOR_nit__mdoc__MEntity__deprecation_61d]))(var_mwriteprop, var215); /* deprecation= on <var_mwriteprop:nullable MMethod(MMethod)>*/
}
} else {
if (var_nwkwredef!=NULL) {
var216 = var_nwkwredef;
} else {
{
var217 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(self); /* n_kwredef on <self:AAttrPropdef>*/
}
var216 = var217;
}
{
var218 = ((short int(*)(val* self, val* p0, val* p1, val* p2, short int p3, val* p4))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_mclassdef, var216, 1, var_mwriteprop); /* check_redef_keyword on <self:AAttrPropdef>*/
}
var219 = !var218;
if (var219){
goto RET_LABEL;
} else {
}
if (var_atwritable == NULL) {
var220 = 0; /* is null */
} else {
var220 = 1; /* arg is null and recv is not */
}
if (0) {
var221 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atwritable, ((val*)NULL)); /* != on <var_atwritable:nullable AAnnotation>*/
var220 = var221;
}
if (var220){
{
var222 = ((val*(*)(val* self))(var_atwritable->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(var_atwritable); /* n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var222, var_mwriteprop); /* check_redef_property_visibility on <self:AAttrPropdef>*/
}
} else {
}
}
{
var223 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__modelize_property__MClassDef__mprop2npropdef]))(var_mclassdef); /* mprop2npropdef on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var223&3)?class_info[((long)var223&3)]:var223->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var223, var_mwriteprop, self); /* []= on <var223:Map[MProperty, APropdef]>*/
}
var224 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
var225 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:AAttrPropdef>*/
}
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var224, var_mclassdef); /* mclassdef= on <var224:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var224, var_mwriteprop); /* mproperty= on <var224:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var224, var225); /* location= on <var224:MMethodDef>*/
}
{
((void(*)(val* self))(var224->class->vft[COLOR_standard__kernel__Object__init]))(var224); /* init on <var224:MMethodDef>*/
}
var_mwritepropdef = var224;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mwritepropdef_61d]))(self, var_mwritepropdef); /* mwritepropdef= on <self:AAttrPropdef>*/
}
{
var226 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder); /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var226->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var226, var_mwritepropdef, self); /* []= on <var226:HashMap[MPropDef, APropdef]>*/
}
{
var227 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_nit__mdoc__MEntity__mdoc]))(var_mreadpropdef); /* mdoc on <var_mreadpropdef:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var_mwritepropdef->class->vft[COLOR_nit__mdoc__MEntity__mdoc_61d]))(var_mwritepropdef, var227); /* mdoc= on <var_mwritepropdef:MMethodDef>*/
}
if (var_atabstract == NULL) {
var228 = 0; /* is null */
} else {
var228 = 1; /* arg is null and recv is not */
}
if (0) {
var229 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atabstract, ((val*)NULL)); /* != on <var_atabstract:nullable AAnnotation>*/
var228 = var229;
}
if (var228){
{
((void(*)(val* self, short int p0))(var_mwritepropdef->class->vft[COLOR_nit__model__MMethodDef__is_abstract_61d]))(var_mwritepropdef, 1); /* is_abstract= on <var_mwritepropdef:MMethodDef>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_signature for (self: AAttrPropdef, ModelBuilder) */
void nit__modelize_property___AAttrPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
val* var1 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: nullable MType */;
val* var6 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_inherited_type /* var inherited_type: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MProperty */;
val* var15 /* : MPropDef */;
val* var16 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : MClass */;
val* var23 /* : MClassType */;
val* var24 /* : MClassType */;
val* var25 /* : MType */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype;
int idtype;
val* var34 /* : AType */;
val* var35 /* : nullable MType */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
static val* varonce;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : nullable MClass */;
val* var_cla /* var cla: nullable MClass */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : MClassType */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
val* var53 /* : nullable MClass */;
val* var_cla54 /* var cla: nullable MClass */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : MClassType */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
val* var65 /* : nullable MClass */;
val* var_cla66 /* var cla: nullable MClass */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : MClassType */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
val* var77 /* : nullable MClass */;
val* var_cla78 /* var cla: nullable MClass */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
val* var81 /* : MClassType */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
val* var89 /* : nullable MClass */;
val* var_cla90 /* var cla: nullable MClass */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
val* var93 /* : MClassType */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
val* var101 /* : nullable MClass */;
val* var_cla102 /* var cla: nullable MClass */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
val* var105 /* : MClassType */;
val* var107 /* : NativeArray[String] */;
static val* varonce106;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
val* var116 /* : String */;
val* var117 /* : String */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var_ /* var : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
val* var128 /* : AType */;
val* var129 /* : nullable MType */;
val* var_xmtype /* var xmtype: nullable MType */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : FlatString */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : FlatString */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
val* var143 /* : NativeArray[String] */;
static val* varonce142;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : FlatString */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
val* var151 /* : FlatString */;
val* var152 /* : String */;
val* var153 /* : String */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var156 /* : MSignature */;
val* var157 /* : Array[MParameter] */;
val* var_msignature158 /* var msignature: MSignature */;
val* var159 /* : nullable MMethodDef */;
val* var_mwritepropdef /* var mwritepropdef: nullable MMethodDef */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
val* var162 /* : TId */;
val* var163 /* : String */;
val* var_name /* var name: String */;
val* var164 /* : MParameter */;
val* var_mparameter /* var mparameter: MParameter */;
val* var165 /* : MSignature */;
val* var166 /* : Array[MParameter] */;
val* var_167 /* var : Array[MParameter] */;
val* var_msignature168 /* var msignature: MSignature */;
val* var169 /* : nullable MAttributeDef */;
val* var_mlazypropdef /* var mlazypropdef: nullable MAttributeDef */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
val* var172 /* : Model */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
val* var176 /* : FlatString */;
val* var177 /* : nullable Array[MClass] */;
val* var178 /* : nullable Object */;
val* var179 /* : MClassType */;
var_modelbuilder = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mreadpropdef]))(self); /* mreadpropdef on <self:AAttrPropdef>*/
}
var_mreadpropdef = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
var_mpropdef = var1;
if (var_mreadpropdef == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_mreadpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mreadpropdef, ((val*)NULL)); /* == on <var_mreadpropdef:nullable MMethodDef>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mreadpropdef); /* mclassdef on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
var_mclassdef = var4;
{
var5 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
var_mmodule = var5;
var_mtype = ((val*)NULL);
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_type]))(self); /* n_type on <self:AAttrPropdef>*/
}
var_ntype = var6;
if (var_ntype == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype, ((val*)NULL)); /* != on <var_ntype:nullable AType>*/
var7 = var8;
}
if (var7){
{
var9 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1); /* resolve_mtype_unchecked on <var_modelbuilder:ModelBuilder>*/
}
var_mtype = var9;
if (var_mtype == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var10 = var11;
}
if (var10){
goto RET_LABEL;
} else {
}
} else {
}
var_inherited_type = ((val*)NULL);
{
var12 = ((short int(*)(val* self))(var_mreadpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mreadpropdef); /* is_intro on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
var13 = !var12;
if (var13){
{
var14 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mreadpropdef); /* mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MProperty__intro]))(var14); /* intro on <var14:MProperty(MMethod)>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var15); /* msignature on <var15:MPropDef(MMethodDef)>*/
}
var_msignature = var16;
if (var_msignature == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, ((val*)NULL)); /* == on <var_msignature:nullable MSignature>*/
var17 = var18;
}
if (var17){
goto RET_LABEL;
} else {
}
{
var19 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_msignature); /* return_mtype on <var_msignature:nullable MSignature(MSignature)>*/
}
var_inherited_type = var19;
if (var_inherited_type == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_inherited_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_inherited_type, ((val*)NULL)); /* != on <var_inherited_type:nullable MType>*/
var20 = var21;
}
if (var20){
{
var22 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__model__MClass__mclass_type]))(var22); /* mclass_type on <var22:MClass>*/
}
{
var24 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
var25 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_inherited_type->class->vft[COLOR_nit__model__MType__resolve_for]))(var_inherited_type, var23, var24, var_mmodule, 0); /* resolve_for on <var_inherited_type:nullable MType(MType)>*/
}
var_inherited_type = var25;
if (var_mtype == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var26 = var27;
}
if (var26){
var_mtype = var_inherited_type;
} else {
}
} else {
}
} else {
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_expr]))(self); /* n_expr on <self:AAttrPropdef>*/
}
var_nexpr = var28;
if (var_mtype == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
var30 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var29 = var30;
}
if (var29){
if (var_nexpr == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nexpr, ((val*)NULL)); /* != on <var_nexpr:nullable AExpr>*/
var31 = var32;
}
if (var31){
/* <var_nexpr:nullable AExpr(AExpr)> isa ANewExpr */
cltype = type_nit__ANewExpr.color;
idtype = type_nit__ANewExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var33 = 0;
} else {
var33 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var33){
{
var34 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_type]))(var_nexpr); /* n_type on <var_nexpr:nullable AExpr(ANewExpr)>*/
}
{
var35 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(var_modelbuilder, var_mmodule, var_mclassdef, var34, 1); /* resolve_mtype_unchecked on <var_modelbuilder:ModelBuilder>*/
}
var_mtype = var35;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AIntExpr */
cltype37 = type_nit__AIntExpr.color;
idtype38 = type_nit__AIntExpr.id;
if(cltype37 >= var_nexpr->type->table_size) {
var36 = 0;
} else {
var36 = var_nexpr->type->type_table[cltype37] == idtype38;
}
if (var36){
if (likely(varonce!=NULL)) {
var39 = varonce;
} else {
var40 = "Int";
var41 = standard___standard__NativeString___to_s_with_length(var40, 3l);
var39 = var41;
varonce = var39;
}
{
var42 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var39); /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/
}
var_cla = var42;
if (var_cla == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (0) {
var44 = ((short int(*)(val* self, val* p0))(var_cla->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cla, ((val*)NULL)); /* != on <var_cla:nullable MClass>*/
var43 = var44;
}
if (var43){
{
var45 = ((val*(*)(val* self))(var_cla->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_cla); /* mclass_type on <var_cla:nullable MClass(MClass)>*/
}
var_mtype = var45;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AFloatExpr */
cltype47 = type_nit__AFloatExpr.color;
idtype48 = type_nit__AFloatExpr.id;
if(cltype47 >= var_nexpr->type->table_size) {
var46 = 0;
} else {
var46 = var_nexpr->type->type_table[cltype47] == idtype48;
}
if (var46){
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "Float";
var52 = standard___standard__NativeString___to_s_with_length(var51, 5l);
var50 = var52;
varonce49 = var50;
}
{
var53 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var50); /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/
}
var_cla54 = var53;
if (var_cla54 == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (0) {
var56 = ((short int(*)(val* self, val* p0))(var_cla54->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cla54, ((val*)NULL)); /* != on <var_cla54:nullable MClass>*/
var55 = var56;
}
if (var55){
{
var57 = ((val*(*)(val* self))(var_cla54->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_cla54); /* mclass_type on <var_cla54:nullable MClass(MClass)>*/
}
var_mtype = var57;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ACharExpr */
cltype59 = type_nit__ACharExpr.color;
idtype60 = type_nit__ACharExpr.id;
if(cltype59 >= var_nexpr->type->table_size) {
var58 = 0;
} else {
var58 = var_nexpr->type->type_table[cltype59] == idtype60;
}
if (var58){
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "Char";
var64 = standard___standard__NativeString___to_s_with_length(var63, 4l);
var62 = var64;
varonce61 = var62;
}
{
var65 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var62); /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/
}
var_cla66 = var65;
if (var_cla66 == NULL) {
var67 = 0; /* is null */
} else {
var67 = 1; /* arg is null and recv is not */
}
if (0) {
var68 = ((short int(*)(val* self, val* p0))(var_cla66->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cla66, ((val*)NULL)); /* != on <var_cla66:nullable MClass>*/
var67 = var68;
}
if (var67){
{
var69 = ((val*(*)(val* self))(var_cla66->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_cla66); /* mclass_type on <var_cla66:nullable MClass(MClass)>*/
}
var_mtype = var69;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ABoolExpr */
cltype71 = type_nit__ABoolExpr.color;
idtype72 = type_nit__ABoolExpr.id;
if(cltype71 >= var_nexpr->type->table_size) {
var70 = 0;
} else {
var70 = var_nexpr->type->type_table[cltype71] == idtype72;
}
if (var70){
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "Bool";
var76 = standard___standard__NativeString___to_s_with_length(var75, 4l);
var74 = var76;
varonce73 = var74;
}
{
var77 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var74); /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/
}
var_cla78 = var77;
if (var_cla78 == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (0) {
var80 = ((short int(*)(val* self, val* p0))(var_cla78->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cla78, ((val*)NULL)); /* != on <var_cla78:nullable MClass>*/
var79 = var80;
}
if (var79){
{
var81 = ((val*(*)(val* self))(var_cla78->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_cla78); /* mclass_type on <var_cla78:nullable MClass(MClass)>*/
}
var_mtype = var81;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ASuperstringExpr */
cltype83 = type_nit__ASuperstringExpr.color;
idtype84 = type_nit__ASuperstringExpr.id;
if(cltype83 >= var_nexpr->type->table_size) {
var82 = 0;
} else {
var82 = var_nexpr->type->type_table[cltype83] == idtype84;
}
if (var82){
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "String";
var88 = standard___standard__NativeString___to_s_with_length(var87, 6l);
var86 = var88;
varonce85 = var86;
}
{
var89 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var86); /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/
}
var_cla90 = var89;
if (var_cla90 == NULL) {
var91 = 0; /* is null */
} else {
var91 = 1; /* arg is null and recv is not */
}
if (0) {
var92 = ((short int(*)(val* self, val* p0))(var_cla90->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cla90, ((val*)NULL)); /* != on <var_cla90:nullable MClass>*/
var91 = var92;
}
if (var91){
{
var93 = ((val*(*)(val* self))(var_cla90->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_cla90); /* mclass_type on <var_cla90:nullable MClass(MClass)>*/
}
var_mtype = var93;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AStringFormExpr */
cltype95 = type_nit__AStringFormExpr.color;
idtype96 = type_nit__AStringFormExpr.id;
if(cltype95 >= var_nexpr->type->table_size) {
var94 = 0;
} else {
var94 = var_nexpr->type->type_table[cltype95] == idtype96;
}
if (var94){
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "String";
var100 = standard___standard__NativeString___to_s_with_length(var99, 6l);
var98 = var100;
varonce97 = var98;
}
{
var101 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var98); /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/
}
var_cla102 = var101;
if (var_cla102 == NULL) {
var103 = 0; /* is null */
} else {
var103 = 1; /* arg is null and recv is not */
}
if (0) {
var104 = ((short int(*)(val* self, val* p0))(var_cla102->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cla102, ((val*)NULL)); /* != on <var_cla102:nullable MClass>*/
var103 = var104;
}
if (var103){
{
var105 = ((val*(*)(val* self))(var_cla102->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_cla102); /* mclass_type on <var_cla102:nullable MClass(MClass)>*/
}
var_mtype = var105;
} else {
}
} else {
if (unlikely(varonce106==NULL)) {
var107 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "Error: untyped attribute `";
var111 = standard___standard__NativeString___to_s_with_length(var110, 26l);
var109 = var111;
varonce108 = var109;
}
((struct instance_standard__NativeArray*)var107)->values[0]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "`. Implicit typing allowed only for literals and new.";
var115 = standard___standard__NativeString___to_s_with_length(var114, 53l);
var113 = var115;
varonce112 = var113;
}
((struct instance_standard__NativeArray*)var107)->values[2]=var113;
} else {
var107 = varonce106;
varonce106 = NULL;
}
{
var116 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var107)->values[1]=var116;
{
var117 = ((val*(*)(val* self))(var107->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var107); /* native_to_s on <var107:NativeArray[String]>*/
}
varonce106 = var107;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var117); /* error on <var_modelbuilder:ModelBuilder>*/
}
}
}
}
}
}
}
}
if (var_mtype == NULL) {
var118 = 1; /* is null */
} else {
var118 = 0; /* arg is null but recv is not */
}
if (0) {
var119 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var118 = var119;
}
if (var118){
goto RET_LABEL;
} else {
}
} else {
}
} else {
if (var_ntype == NULL) {
var121 = 0; /* is null */
} else {
var121 = 1; /* arg is null and recv is not */
}
if (0) {
var122 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype, ((val*)NULL)); /* != on <var_ntype:nullable AType>*/
var121 = var122;
}
var_ = var121;
if (var121){
if (var_inherited_type == NULL) {
var123 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
var124 = ((short int(*)(val* self, val* p0))(var_inherited_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_inherited_type, var_mtype); /* == on <var_inherited_type:nullable MType>*/
var123 = var124;
}
var120 = var123;
} else {
var120 = var_;
}
if (var120){
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype126 = type_nit__ANewExpr.color;
idtype127 = type_nit__ANewExpr.id;
if(var_nexpr == NULL) {
var125 = 0;
} else {
if(cltype126 >= var_nexpr->type->table_size) {
var125 = 0;
} else {
var125 = var_nexpr->type->type_table[cltype126] == idtype127;
}
}
if (var125){
{
var128 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_type]))(var_nexpr); /* n_type on <var_nexpr:nullable AExpr(ANewExpr)>*/
}
{
var129 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(var_modelbuilder, var_mmodule, var_mclassdef, var128, 1); /* resolve_mtype_unchecked on <var_modelbuilder:ModelBuilder>*/
}
var_xmtype = var129;
if (var_xmtype == NULL) {
var130 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
var131 = ((short int(*)(val* self, val* p0))(var_xmtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_xmtype, var_mtype); /* == on <var_xmtype:nullable MType>*/
var130 = var131;
}
if (var130){
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "useless-type";
var135 = standard___standard__NativeString___to_s_with_length(var134, 12l);
var133 = var135;
varonce132 = var133;
}
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "Warning: useless type definition";
var139 = standard___standard__NativeString___to_s_with_length(var138, 32l);
var137 = var139;
varonce136 = var137;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(var_modelbuilder, var_ntype, var133, var137); /* advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
} else {
}
}
if (var_mtype == NULL) {
var140 = 1; /* is null */
} else {
var140 = 0; /* arg is null but recv is not */
}
if (0) {
var141 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var140 = var141;
}
if (var140){
if (unlikely(varonce142==NULL)) {
var143 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "Error: untyped attribute `";
var147 = standard___standard__NativeString___to_s_with_length(var146, 26l);
var145 = var147;
varonce144 = var145;
}
((struct instance_standard__NativeArray*)var143)->values[0]=var145;
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "`.";
var151 = standard___standard__NativeString___to_s_with_length(var150, 2l);
var149 = var151;
varonce148 = var149;
}
((struct instance_standard__NativeArray*)var143)->values[2]=var149;
} else {
var143 = varonce142;
varonce142 = NULL;
}
{
var152 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var143)->values[1]=var152;
{
var153 = ((val*(*)(val* self))(var143->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var143); /* native_to_s on <var143:NativeArray[String]>*/
}
varonce142 = var143;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var153); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (var_mpropdef == NULL) {
var154 = 0; /* is null */
} else {
var154 = 1; /* arg is null and recv is not */
}
if (0) {
var155 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mpropdef, ((val*)NULL)); /* != on <var_mpropdef:nullable MAttributeDef>*/
var154 = var155;
}
if (var154){
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__model__MAttributeDef__static_mtype_61d]))(var_mpropdef, var_mtype); /* static_mtype= on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
}
} else {
}
var156 = NEW_nit__MSignature(&type_nit__MSignature);
var157 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
((void(*)(val* self))(var157->class->vft[COLOR_standard__kernel__Object__init]))(var157); /* init on <var157:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var156->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var156, var157); /* mparameters= on <var156:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var156->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var156, var_mtype); /* return_mtype= on <var156:MSignature>*/
}
{
((void(*)(val* self))(var156->class->vft[COLOR_standard__kernel__Object__init]))(var156); /* init on <var156:MSignature>*/
}
var_msignature158 = var156;
{
((void(*)(val* self, val* p0))(var_mreadpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var_mreadpropdef, var_msignature158); /* msignature= on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var159 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mwritepropdef]))(self); /* mwritepropdef on <self:AAttrPropdef>*/
}
var_mwritepropdef = var159;
if (var_mwritepropdef == NULL) {
var160 = 0; /* is null */
} else {
var160 = 1; /* arg is null and recv is not */
}
if (0) {
var161 = ((short int(*)(val* self, val* p0))(var_mwritepropdef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mwritepropdef, ((val*)NULL)); /* != on <var_mwritepropdef:nullable MMethodDef>*/
var160 = var161;
}
if (var160){
{
var162 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_id2]))(self); /* n_id2 on <self:AAttrPropdef>*/
}
{
var163 = ((val*(*)(val* self))(var162->class->vft[COLOR_nit__parser_nodes__Token__text]))(var162); /* text on <var162:TId>*/
}
var_name = var163;
var164 = NEW_nit__MParameter(&type_nit__MParameter);
{
((void(*)(val* self, val* p0))(var164->class->vft[COLOR_nit__model__MParameter__name_61d]))(var164, var_name); /* name= on <var164:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var164->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var164, var_mtype); /* mtype= on <var164:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var164->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var164, 0); /* is_vararg= on <var164:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var164->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var164, 0); /* is_default= on <var164:MParameter>*/
}
{
((void(*)(val* self))(var164->class->vft[COLOR_standard__kernel__Object__init]))(var164); /* init on <var164:MParameter>*/
}
var_mparameter = var164;
var165 = NEW_nit__MSignature(&type_nit__MSignature);
var166 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
((void(*)(val* self, long p0))(var166->class->vft[COLOR_standard__array__Array__with_capacity]))(var166, 1l); /* with_capacity on <var166:Array[MParameter]>*/
}
var_167 = var166;
{
((void(*)(val* self, val* p0))(var_167->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_167, var_mparameter); /* push on <var_167:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var165->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var165, var_167); /* mparameters= on <var165:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var165->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var165, ((val*)NULL)); /* return_mtype= on <var165:MSignature>*/
}
{
((void(*)(val* self))(var165->class->vft[COLOR_standard__kernel__Object__init]))(var165); /* init on <var165:MSignature>*/
}
var_msignature168 = var165;
{
((void(*)(val* self, val* p0))(var_mwritepropdef->class->vft[COLOR_nit__model__MMethodDef__msignature_61d]))(var_mwritepropdef, var_msignature168); /* msignature= on <var_mwritepropdef:nullable MMethodDef(MMethodDef)>*/
}
} else {
}
{
var169 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mlazypropdef]))(self); /* mlazypropdef on <self:AAttrPropdef>*/
}
var_mlazypropdef = var169;
if (var_mlazypropdef == NULL) {
var170 = 0; /* is null */
} else {
var170 = 1; /* arg is null and recv is not */
}
if (0) {
var171 = ((short int(*)(val* self, val* p0))(var_mlazypropdef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mlazypropdef, ((val*)NULL)); /* != on <var_mlazypropdef:nullable MAttributeDef>*/
var170 = var171;
}
if (var170){
{
var172 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(var_modelbuilder); /* model on <var_modelbuilder:ModelBuilder>*/
}
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "Bool";
var176 = standard___standard__NativeString___to_s_with_length(var175, 4l);
var174 = var176;
varonce173 = var174;
}
{
var177 = ((val*(*)(val* self, val* p0))(var172->class->vft[COLOR_nit__model__Model__get_mclasses_by_name]))(var172, var174); /* get_mclasses_by_name on <var172:Model>*/
}
if (var177 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1346);
fatal_exit(1);
} else {
var178 = ((val*(*)(val* self))(var177->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var177); /* first on <var177:nullable Array[MClass]>*/
}
{
var179 = ((val*(*)(val* self))(var178->class->vft[COLOR_nit__model__MClass__mclass_type]))(var178); /* mclass_type on <var178:nullable Object(MClass)>*/
}
{
((void(*)(val* self, val* p0))(var_mlazypropdef->class->vft[COLOR_nit__model__MAttributeDef__static_mtype_61d]))(var_mlazypropdef, var179); /* static_mtype= on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_signature for (self: AAttrPropdef, ModelBuilder) */
void nit__modelize_property___AAttrPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var4 /* : nullable MPropDef */;
val* var5 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var9 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable MType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var17 /* : AType */;
val* var18 /* : nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : MProperty */;
val* var24 /* : MPropDef */;
val* var25 /* : nullable MType */;
val* var_precursor_type /* var precursor_type: nullable MType */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : NativeArray[String] */;
static val* varonce;
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
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : nullable MMethodDef */;
val* var_meth /* var meth: nullable MMethodDef */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_node /* var node: nullable ANode */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : nullable MMethodDef */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var_node53 /* var node: nullable ANode */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
var_modelbuilder = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MAttributeDef>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_type]))(self); /* n_type on <self:AAttrPropdef>*/
}
var_ntype = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1355);
fatal_exit(1);
} else {
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var4); /* static_mtype on <var4:nullable MPropDef(nullable MAttributeDef)>*/
}
var_mtype = var5;
if (var_mtype == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
}
var_mclassdef = var8;
{
var9 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
var_mmodule = var9;
if (var_ntype == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ntype, ((val*)NULL)); /* != on <var_ntype:nullable AType>*/
var10 = var11;
}
if (var10){
{
var12 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype]))(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype); /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/
}
if (var12 == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, ((val*)NULL)); /* == on <var12:nullable MType>*/
var13 = var14;
}
if (var13){
goto RET_LABEL;
} else {
}
} else {
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_expr]))(self); /* n_expr on <self:AAttrPropdef>*/
}
var_nexpr = var15;
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype = type_nit__ANewExpr.color;
idtype = type_nit__ANewExpr.id;
if(var_nexpr == NULL) {
var16 = 0;
} else {
if(cltype >= var_nexpr->type->table_size) {
var16 = 0;
} else {
var16 = var_nexpr->type->type_table[cltype] == idtype;
}
}
if (var16){
{
var17 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nit__parser_nodes__ANewExpr__n_type]))(var_nexpr); /* n_type on <var_nexpr:nullable AExpr(ANewExpr)>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype]))(var_modelbuilder, var_mmodule, var_mclassdef, var17); /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/
}
if (var18 == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, ((val*)NULL)); /* == on <var18:nullable MType>*/
var19 = var20;
}
if (var19){
goto RET_LABEL;
} else {
}
} else {
}
{
var21 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
}
var22 = !var21;
if (var22){
{
var23 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
}
{
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_nit__model__MProperty__intro]))(var23); /* intro on <var23:MProperty(MAttribute)>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var24); /* static_mtype on <var24:MPropDef(MAttributeDef)>*/
}
var_precursor_type = var25;
if (var_precursor_type == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))(var_precursor_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_precursor_type, ((val*)NULL)); /* == on <var_precursor_type:nullable MType>*/
var26 = var27;
}
if (var26){
goto RET_LABEL;
} else {
}
{
var28 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mtype, var_precursor_type); /* != on <var_mtype:nullable MType(MType)>*/
}
if (var28){
if (unlikely(var_ntype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1377);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var29 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Redef Error: expected `";
var33 = standard___standard__NativeString___to_s_with_length(var32, 23l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "` type as a bound; got `";
var37 = standard___standard__NativeString___to_s_with_length(var36, 24l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[2]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`.";
var41 = standard___standard__NativeString___to_s_with_length(var40, 2l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var29)->values[4]=var39;
} else {
var29 = varonce;
varonce = NULL;
}
{
var42 = ((val*(*)(val* self))(var_precursor_type->class->vft[COLOR_standard__string__Object__to_s]))(var_precursor_type); /* to_s on <var_precursor_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var29)->values[1]=var42;
{
var43 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var29)->values[3]=var43;
{
var44 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce = var29;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_ntype, var44); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
var45 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mreadpropdef]))(self); /* mreadpropdef on <self:AAttrPropdef>*/
}
var_meth = var45;
if (var_meth == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
var47 = ((short int(*)(val* self, val* p0))(var_meth->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_meth, ((val*)NULL)); /* != on <var_meth:nullable MMethodDef>*/
var46 = var47;
}
if (var46){
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__check_method_signature]))(self, var_modelbuilder, var_meth); /* check_method_signature on <self:AAttrPropdef>*/
}
var_node = var_ntype;
if (var_node == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
var49 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, ((val*)NULL)); /* == on <var_node:nullable ANode>*/
var48 = var49;
}
if (var48){
var_node = self;
} else {
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__check_visibility]))(var_modelbuilder, var_node, var_mtype, var_meth); /* check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var50 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mwritepropdef]))(self); /* mwritepropdef on <self:AAttrPropdef>*/
}
var_meth = var50;
if (var_meth == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
var52 = ((short int(*)(val* self, val* p0))(var_meth->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_meth, ((val*)NULL)); /* != on <var_meth:nullable MMethodDef>*/
var51 = var52;
}
if (var51){
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__check_method_signature]))(self, var_modelbuilder, var_meth); /* check_method_signature on <self:AAttrPropdef>*/
}
var_node53 = var_ntype;
if (var_node53 == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
var55 = ((short int(*)(val* self, val* p0))(var_node53->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node53, ((val*)NULL)); /* == on <var_node53:nullable ANode>*/
var54 = var55;
}
if (var54){
var_node53 = self;
} else {
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__check_visibility]))(var_modelbuilder, var_node53, var_mtype, var_meth); /* check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_method_signature for (self: AAttrPropdef, ModelBuilder, MMethodDef) */
void nit__modelize_property___AAttrPropdef___check_method_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var2 /* : nullable AType */;
val* var_nsig /* var nsig: nullable AType */;
val* var3 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MProperty */;
val* var9 /* : MPropDef */;
val* var10 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_node /* var node: ANode */;
val* var21 /* : NativeArray[String] */;
static val* varonce;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
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
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : MProperty */;
val* var45 /* : String */;
val* var46 /* : String */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : MProperty */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var53 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var_ /* var : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var_node61 /* var node: ANode */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
val* var72 /* : MProperty */;
val* var73 /* : String */;
val* var74 /* : String */;
long var75 /* : Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var79 /* : Bool */;
long var_i /* var i: Int */;
long var80 /* : Int */;
long var_81 /* var : Int */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
short int var88 /* : Bool */;
val* var89 /* : Array[MParameter] */;
val* var90 /* : nullable Object */;
val* var91 /* : MType */;
val* var_myt /* var myt: MType */;
val* var92 /* : Array[MParameter] */;
val* var93 /* : nullable Object */;
val* var94 /* : MType */;
val* var_prt /* var prt: MType */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var_node97 /* var node: ANode */;
val* var98 /* : MClassType */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
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
val* var120 /* : Array[MParameter] */;
val* var121 /* : nullable Object */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
long var125 /* : Int */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var_node130 /* var node: ANode */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
val* var133 /* : MClassType */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : FlatString */;
val* var150 /* : String */;
val* var151 /* : String */;
val* var152 /* : String */;
var_modelbuilder = p0;
var_mpropdef = p1;
{
var = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MMethodDef>*/
}
var_mclassdef = var;
{
var1 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
var_mmodule = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_type]))(self); /* n_type on <self:AAttrPropdef>*/
}
var_nsig = var2;
{
var3 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:MMethodDef>*/
}
var_mysignature = var3;
if (var_mysignature == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mysignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mysignature, ((val*)NULL)); /* == on <var_mysignature:nullable MSignature>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MMethodDef>*/
}
var7 = !var6;
if (var7){
{
var8 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MMethodDef>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__model__MProperty__intro]))(var8); /* intro on <var8:MProperty(MMethod)>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var9); /* msignature on <var9:MPropDef(MMethodDef)>*/
}
var_msignature = var10;
if (var_msignature == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, ((val*)NULL)); /* == on <var_msignature:nullable MSignature>*/
var11 = var12;
}
if (var11){
goto RET_LABEL;
} else {
}
{
var13 = ((long(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_mysignature); /* arity on <var_mysignature:nullable MSignature(MSignature)>*/
}
{
var14 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:nullable MSignature(MSignature)>*/
}
{
{ /* Inline kernel#Int#!= (var13,var14) on <var13:Int> */
var17 = var13 == var14;
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
if (var_nsig == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nsig, ((val*)NULL)); /* != on <var_nsig:nullable AType>*/
var19 = var20;
}
if (var19){
var_node = var_nsig;
} else {
var_node = self;
}
if (unlikely(varonce==NULL)) {
var21 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "Redef Error: expected ";
var25 = standard___standard__NativeString___to_s_with_length(var24, 22l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var21)->values[0]=var23;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = " parameter(s) for `";
var29 = standard___standard__NativeString___to_s_with_length(var28, 19l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var21)->values[2]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "`; got ";
var33 = standard___standard__NativeString___to_s_with_length(var32, 7l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var21)->values[5]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ". See introduction at `";
var37 = standard___standard__NativeString___to_s_with_length(var36, 23l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var21)->values[7]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`.";
var41 = standard___standard__NativeString___to_s_with_length(var40, 2l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var21)->values[9]=var39;
} else {
var21 = varonce;
varonce = NULL;
}
{
var42 = ((long(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_msignature); /* arity on <var_msignature:nullable MSignature(MSignature)>*/
}
var43 = standard__string___Int___Object__to_s(var42);
((struct instance_standard__NativeArray*)var21)->values[1]=var43;
{
var44 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MMethodDef>*/
}
{
var45 = ((val*(*)(val* self))(var44->class->vft[COLOR_nit__model_base__MEntity__name]))(var44); /* name on <var44:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var21)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_standard__NativeArray*)var21)->values[4]=var46;
{
var47 = ((long(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_mysignature); /* arity on <var_mysignature:nullable MSignature(MSignature)>*/
}
var48 = standard__string___Int___Object__to_s(var47);
((struct instance_standard__NativeArray*)var21)->values[6]=var48;
{
var49 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MMethodDef>*/
}
{
var50 = ((val*(*)(val* self))(var49->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var49); /* full_name on <var49:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var21)->values[8]=var50;
{
var51 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce = var21;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_node, var51); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var52 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_msignature); /* return_mtype on <var_msignature:nullable MSignature(MSignature)>*/
}
var_precursor_ret_type = var52;
{
var53 = ((val*(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var_mysignature); /* return_mtype on <var_mysignature:nullable MSignature(MSignature)>*/
}
var_ret_type = var53;
if (var_ret_type == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (0) {
var56 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ret_type, ((val*)NULL)); /* != on <var_ret_type:nullable MType>*/
var55 = var56;
}
var_ = var55;
if (var55){
if (var_precursor_ret_type == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
var58 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_precursor_ret_type, ((val*)NULL)); /* == on <var_precursor_ret_type:nullable MType>*/
var57 = var58;
}
var54 = var57;
} else {
var54 = var_;
}
if (var54){
if (var_nsig == NULL) {
var59 = 0; /* is null */
} else {
var59 = 1; /* arg is null and recv is not */
}
if (0) {
var60 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nsig, ((val*)NULL)); /* != on <var_nsig:nullable AType>*/
var59 = var60;
}
if (var59){
var_node61 = var_nsig;
} else {
var_node61 = self;
}
if (unlikely(varonce62==NULL)) {
var63 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "Redef Error: `";
var67 = standard___standard__NativeString___to_s_with_length(var66, 14l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var63)->values[0]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "` is a procedure, not a function.";
var71 = standard___standard__NativeString___to_s_with_length(var70, 33l);
var69 = var71;
varonce68 = var69;
}
((struct instance_standard__NativeArray*)var63)->values[2]=var69;
} else {
var63 = varonce62;
varonce62 = NULL;
}
{
var72 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MMethodDef>*/
}
{
var73 = ((val*(*)(val* self))(var72->class->vft[COLOR_standard__string__Object__to_s]))(var72); /* to_s on <var72:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var63)->values[1]=var73;
{
var74 = ((val*(*)(val* self))(var63->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_node61, var74); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var75 = ((long(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_mysignature); /* arity on <var_mysignature:nullable MSignature(MSignature)>*/
}
{
{ /* Inline kernel#Int#> (var75,0l) on <var75:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var78 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var79 = var75 > 0l;
var76 = var79;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
var_i = 0l;
{
var80 = ((long(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__arity]))(var_mysignature); /* arity on <var_mysignature:nullable MSignature(MSignature)>*/
}
var_81 = var80;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_81) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_81:Int> isa OTHER */
/* <var_81:Int> isa OTHER */
var84 = 1; /* easy <var_81:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var88 = var_i < var_81;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
if (var82){
{
var89 = ((val*(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_mysignature); /* mparameters on <var_mysignature:nullable MSignature(MSignature)>*/
}
{
var90 = ((val*(*)(val* self, long p0))(var89->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var89, var_i); /* [] on <var89:Array[MParameter]>*/
}
{
var91 = ((val*(*)(val* self))(var90->class->vft[COLOR_nit__model__MParameter__mtype]))(var90); /* mtype on <var90:nullable Object(MParameter)>*/
}
var_myt = var91;
{
var92 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msignature); /* mparameters on <var_msignature:nullable MSignature(MSignature)>*/
}
{
var93 = ((val*(*)(val* self, long p0))(var92->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var92, var_i); /* [] on <var92:Array[MParameter]>*/
}
{
var94 = ((val*(*)(val* self))(var93->class->vft[COLOR_nit__model__MParameter__mtype]))(var93); /* mtype on <var93:nullable Object(MParameter)>*/
}
var_prt = var94;
if (var_nsig == NULL) {
var95 = 0; /* is null */
} else {
var95 = 1; /* arg is null and recv is not */
}
if (0) {
var96 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nsig, ((val*)NULL)); /* != on <var_nsig:nullable AType>*/
var95 = var96;
}
if (var95){
var_node97 = var_nsig;
} else {
var_node97 = self;
}
{
var98 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
var99 = ((short int(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__check_sametype]))(var_modelbuilder, var_node97, var_mmodule, var98, var_myt, var_prt); /* check_sametype on <var_modelbuilder:ModelBuilder>*/
}
var100 = !var99;
if (var100){
if (unlikely(varonce101==NULL)) {
var102 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "Redef Error: expected `";
var106 = standard___standard__NativeString___to_s_with_length(var105, 23l);
var104 = var106;
varonce103 = var104;
}
((struct instance_standard__NativeArray*)var102)->values[0]=var104;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "` type for parameter `";
var110 = standard___standard__NativeString___to_s_with_length(var109, 22l);
var108 = var110;
varonce107 = var108;
}
((struct instance_standard__NativeArray*)var102)->values[2]=var108;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "\'; got `";
var114 = standard___standard__NativeString___to_s_with_length(var113, 8l);
var112 = var114;
varonce111 = var112;
}
((struct instance_standard__NativeArray*)var102)->values[4]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "`.";
var118 = standard___standard__NativeString___to_s_with_length(var117, 2l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var102)->values[6]=var116;
} else {
var102 = varonce101;
varonce101 = NULL;
}
{
var119 = ((val*(*)(val* self))(var_prt->class->vft[COLOR_standard__string__Object__to_s]))(var_prt); /* to_s on <var_prt:MType>*/
}
((struct instance_standard__NativeArray*)var102)->values[1]=var119;
{
var120 = ((val*(*)(val* self))(var_mysignature->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_mysignature); /* mparameters on <var_mysignature:nullable MSignature(MSignature)>*/
}
{
var121 = ((val*(*)(val* self, long p0))(var120->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var120, var_i); /* [] on <var120:Array[MParameter]>*/
}
{
var122 = ((val*(*)(val* self))(var121->class->vft[COLOR_nit__model_base__MEntity__name]))(var121); /* name on <var121:nullable Object(MParameter)>*/
}
((struct instance_standard__NativeArray*)var102)->values[3]=var122;
{
var123 = ((val*(*)(val* self))(var_myt->class->vft[COLOR_standard__string__Object__to_s]))(var_myt); /* to_s on <var_myt:MType>*/
}
((struct instance_standard__NativeArray*)var102)->values[5]=var123;
{
var124 = ((val*(*)(val* self))(var102->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var102); /* native_to_s on <var102:NativeArray[String]>*/
}
varonce101 = var102;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_node97, var124); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var125 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var125;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
if (var_precursor_ret_type == NULL) {
var126 = 0; /* is null */
} else {
var126 = 1; /* arg is null and recv is not */
}
if (0) {
var127 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_precursor_ret_type, ((val*)NULL)); /* != on <var_precursor_ret_type:nullable MType>*/
var126 = var127;
}
if (var126){
if (var_nsig == NULL) {
var128 = 0; /* is null */
} else {
var128 = 1; /* arg is null and recv is not */
}
if (0) {
var129 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nsig, ((val*)NULL)); /* != on <var_nsig:nullable AType>*/
var128 = var129;
}
if (var128){
var_node130 = var_nsig;
} else {
var_node130 = self;
}
if (var_ret_type == NULL) {
var131 = 1; /* is null */
} else {
var131 = 0; /* arg is null but recv is not */
}
if (0) {
var132 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, ((val*)NULL)); /* == on <var_ret_type:nullable MType>*/
var131 = var132;
}
if (var131){
var_ret_type = var_precursor_ret_type;
} else {
{
var133 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
{
var134 = ((short int(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__check_subtype]))(var_modelbuilder, var_node130, var_mmodule, var133, var_ret_type, var_precursor_ret_type); /* check_subtype on <var_modelbuilder:ModelBuilder>*/
}
var135 = !var134;
if (var135){
if (unlikely(varonce136==NULL)) {
var137 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "Redef Error: expected `";
var141 = standard___standard__NativeString___to_s_with_length(var140, 23l);
var139 = var141;
varonce138 = var139;
}
((struct instance_standard__NativeArray*)var137)->values[0]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "` return type; got `";
var145 = standard___standard__NativeString___to_s_with_length(var144, 20l);
var143 = var145;
varonce142 = var143;
}
((struct instance_standard__NativeArray*)var137)->values[2]=var143;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "`.";
var149 = standard___standard__NativeString___to_s_with_length(var148, 2l);
var147 = var149;
varonce146 = var147;
}
((struct instance_standard__NativeArray*)var137)->values[4]=var147;
} else {
var137 = varonce136;
varonce136 = NULL;
}
{
var150 = ((val*(*)(val* self))(var_precursor_ret_type->class->vft[COLOR_standard__string__Object__to_s]))(var_precursor_ret_type); /* to_s on <var_precursor_ret_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var137)->values[1]=var150;
{
var151 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_standard__string__Object__to_s]))(var_ret_type); /* to_s on <var_ret_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var137)->values[3]=var151;
{
var152 = ((val*(*)(val* self))(var137->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_node130, var152); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_property for (self: ATypePropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___ATypePropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : TClassid */;
val* var1 /* : String */;
val* var_name /* var name: String */;
val* var2 /* : TClassid */;
val* var3 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable AVisibility */;
val* var7 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var8 /* : MVirtualTypeProp */;
val* var9 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : IndexedIterator[Char] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
char var14 /* : Char */;
char var_c /* var c: Char */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : TClassid */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : nullable TKwredef */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : nullable TKwredef */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
val* var52 /* : nullable AVisibility */;
val* var53 /* : Map[MProperty, APropdef] */;
val* var54 /* : MVirtualTypeDef */;
val* var55 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const struct type* type_struct;
const char* var_class_name59;
val* var60 /* : HashMap[MPropDef, APropdef] */;
short int var61 /* : Bool */;
val* var62 /* : ToolContext */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : ToolContext */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
val* var86 /* : nullable AAnnotation */;
val* var_atfixed /* var atfixed: nullable AAnnotation */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_id]))(self); /* n_id on <self:ATypePropdef>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__parser_nodes__Token__text]))(var); /* text on <var:TClassid>*/
}
var_name = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_id]))(self); /* n_id on <self:ATypePropdef>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var2, var_mclassdef, var_name); /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/
}
var_mprop = var3;
if (var_mprop == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mprop, ((val*)NULL)); /* == on <var_mprop:nullable MProperty>*/
var4 = var5;
}
if (var4){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(self); /* n_visibility on <self:ATypePropdef>*/
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_mclassdef, var6); /* new_property_visibility on <self:ATypePropdef>*/
}
var_mvisibility = var7;
var8 = NEW_nit__MVirtualTypeProp(&type_nit__MVirtualTypeProp);
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var8, var_mclassdef); /* intro_mclassdef= on <var8:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__model__MProperty__name_61d]))(var8, var_name); /* name= on <var8:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var8, var_mvisibility); /* visibility= on <var8:MVirtualTypeProp>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:MVirtualTypeProp>*/
}
var_mprop = var8;
{
var9 = ((val*(*)(val* self))(var_name->class->vft[COLOR_standard__string__Text__chars]))(var_name); /* chars on <var_name:String>*/
}
var_ = var9;
{
var10 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:IndexedIterator[Char]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:IndexedIterator[Char]>*/
}
var14 = (char)((long)(var13)>>2);
var_c = var14;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var18 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var19 = var_c >= 'a';
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_20 = var16;
if (var16){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var23 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var27 = var_c <= 'z';
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var15 = var21;
} else {
var15 = var_20;
}
if (var15){
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_id]))(self); /* n_id on <self:ATypePropdef>*/
}
if (likely(varonce!=NULL)) {
var29 = varonce;
} else {
var30 = "bad-type-name";
var31 = standard___standard__NativeString___to_s_with_length(var30, 13l);
var29 = var31;
varonce = var29;
}
if (unlikely(varonce32==NULL)) {
var33 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Warning: lowercase in the virtual type `";
var37 = standard___standard__NativeString___to_s_with_length(var36, 40l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`.";
var41 = standard___standard__NativeString___to_s_with_length(var40, 2l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var33)->values[2]=var39;
} else {
var33 = varonce32;
varonce32 = NULL;
}
((struct instance_standard__NativeArray*)var33)->values[1]=var_name;
{
var42 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var_modelbuilder, var28, var29, var42); /* warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:IndexedIterator[Char]>*/
}
{
var43 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(self); /* n_kwredef on <self:ATypePropdef>*/
}
{
var44 = ((short int(*)(val* self, val* p0, val* p1, val* p2, short int p3, val* p4))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_mclassdef, var43, 0, var_mprop); /* check_redef_keyword on <self:ATypePropdef>*/
}
var45 = !var44;
if (var45){
goto RET_LABEL;
} else {
}
} else {
{
var46 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(self); /* n_kwredef on <self:ATypePropdef>*/
}
{
var47 = ((short int(*)(val* self, val* p0, val* p1, val* p2, short int p3, val* p4))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_mclassdef, var46, 1, var_mprop); /* check_redef_keyword on <self:ATypePropdef>*/
}
var48 = !var47;
if (var48){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype50 = type_nit__MVirtualTypeProp.color;
idtype51 = type_nit__MVirtualTypeProp.id;
if(cltype50 >= var_mprop->type->table_size) {
var49 = 0;
} else {
var49 = var_mprop->type->type_table[cltype50] == idtype51;
}
if (unlikely(!var49)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1471);
fatal_exit(1);
}
{
var52 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(self); /* n_visibility on <self:ATypePropdef>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var52, var_mprop); /* check_redef_property_visibility on <self:ATypePropdef>*/
}
}
{
var53 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__modelize_property__MClassDef__mprop2npropdef]))(var_mclassdef); /* mprop2npropdef on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var53&3)?class_info[((long)var53&3)]:var53->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var53, var_mprop, self); /* []= on <var53:Map[MProperty, APropdef]>*/
}
var54 = NEW_nit__MVirtualTypeDef(&type_nit__MVirtualTypeDef);
{
var55 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:ATypePropdef>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var54, var_mclassdef); /* mclassdef= on <var54:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var54, var_mprop); /* mproperty= on <var54:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var54, var55); /* location= on <var54:MVirtualTypeDef>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_standard__kernel__Object__init]))(var54); /* init on <var54:MVirtualTypeDef>*/
}
var_mpropdef = var54;
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype57 = type_struct->color;
idtype58 = type_struct->id;
if(cltype57 >= var_mpropdef->type->table_size) {
var56 = 0;
} else {
var56 = var_mpropdef->type->type_table[cltype57] == idtype58;
}
if (unlikely(!var56)) {
var_class_name59 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1477);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef_61d]))(self, var_mpropdef); /* mpropdef= on <self:ATypePropdef>*/
}
{
var60 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder); /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var60->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var60, var_mpropdef, self); /* []= on <var60:HashMap[MPropDef, APropdef]>*/
}
{
var61 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MVirtualTypeDef>*/
}
if (var61){
{
var62 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var_modelbuilder); /* toolcontext on <var_modelbuilder:ModelBuilder>*/
}
if (unlikely(varonce63==NULL)) {
var64 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = " introduces new type ";
var68 = standard___standard__NativeString___to_s_with_length(var67, 21l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var64)->values[1]=var66;
} else {
var64 = varonce63;
varonce63 = NULL;
}
{
var69 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MVirtualTypeDef>*/
}
((struct instance_standard__NativeArray*)var64)->values[0]=var69;
{
var70 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mprop); /* full_name on <var_mprop:nullable MProperty(MVirtualTypeProp)>*/
}
((struct instance_standard__NativeArray*)var64)->values[2]=var70;
{
var71 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
((void(*)(val* self, val* p0, long p1))(var62->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var62, var71, 4l); /* info on <var62:ToolContext>*/
}
} else {
{
var72 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var_modelbuilder); /* toolcontext on <var_modelbuilder:ModelBuilder>*/
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = " redefines type ";
var78 = standard___standard__NativeString___to_s_with_length(var77, 16l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var74)->values[1]=var76;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
var79 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MVirtualTypeDef>*/
}
((struct instance_standard__NativeArray*)var74)->values[0]=var79;
{
var80 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mprop); /* full_name on <var_mprop:nullable MProperty(MVirtualTypeProp)>*/
}
((struct instance_standard__NativeArray*)var74)->values[2]=var80;
{
var81 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
((void(*)(val* self, val* p0, long p1))(var72->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var72, var81, 4l); /* info on <var72:ToolContext>*/
}
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_property__APropdef__set_doc]))(self, var_mpropdef, var_modelbuilder); /* set_doc on <self:ATypePropdef>*/
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "fixed";
var85 = standard___standard__NativeString___to_s_with_length(var84, 5l);
var83 = var85;
varonce82 = var83;
}
{
var86 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var83, var_modelbuilder); /* get_single_annotation on <self:ATypePropdef>*/
}
var_atfixed = var86;
if (var_atfixed == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (0) {
var88 = ((short int(*)(val* self, val* p0))(var_atfixed->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_atfixed, ((val*)NULL)); /* != on <var_atfixed:nullable AAnnotation>*/
var87 = var88;
}
if (var87){
{
((void(*)(val* self, short int p0))(var_mpropdef->class->vft[COLOR_nit__model__MVirtualTypeDef__is_fixed_61d]))(var_mpropdef, 1); /* is_fixed= on <var_mpropdef:MVirtualTypeDef>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_signature for (self: ATypePropdef, ModelBuilder) */
void nit__modelize_property___ATypePropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var4 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: nullable MType */;
val* var5 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var6 /* : nullable MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_modelbuilder = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:ATypePropdef>*/
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MVirtualTypeDef>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
var_mclassdef = var3;
{
var4 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
var_mmodule = var4;
var_mtype = ((val*)NULL);
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_type]))(self); /* n_type on <self:ATypePropdef>*/
}
var_ntype = var5;
{
var6 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1); /* resolve_mtype_unchecked on <var_modelbuilder:ModelBuilder>*/
}
var_mtype = var6;
if (var_mtype == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__model__MVirtualTypeDef__bound_61d]))(var_mpropdef, var_mtype); /* bound= on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#check_signature for (self: ATypePropdef, ModelBuilder) */
void nit__modelize_property___ATypePropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : AType */;
val* var7 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var8 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var10 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var11 /* : nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MProperty */;
val* var15 /* : Array[MPropDef] */;
val* var_ /* var : Array[MVirtualTypeDef] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var20 /* : nullable MType */;
val* var_supbound /* var supbound: nullable MType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : NativeArray[String] */;
static val* varonce;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
val* var37 /* : MProperty */;
val* var38 /* : String */;
val* var39 /* : MClassDef */;
val* var40 /* : MClass */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : MClassDef */;
val* var44 /* : MClass */;
val* var45 /* : MClass */;
short int var46 /* : Bool */;
val* var47 /* : AType */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var56 /* : AType */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : AType */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
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
val* var75 /* : String */;
val* var76 /* : String */;
var_modelbuilder = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:ATypePropdef>*/
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MVirtualTypeDef>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MVirtualTypeDef__bound]))(var_mpropdef); /* bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
var_bound = var3;
if (var_bound == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_bound->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_bound, ((val*)NULL)); /* == on <var_bound:nullable MType>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_type]))(self); /* n_type on <self:ATypePropdef>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__check_visibility]))(var_modelbuilder, var6, var_bound, var_mpropdef); /* check_visibility on <var_modelbuilder:ModelBuilder>*/
}
{
var7 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
var_mclassdef = var7;
{
var8 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_mclassdef); /* mmodule on <var_mclassdef:MClassDef>*/
}
var_mmodule = var8;
{
var9 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:MClassDef>*/
}
var_anchor = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_type]))(self); /* n_type on <self:ATypePropdef>*/
}
var_ntype = var10;
{
var11 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype]))(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype); /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/
}
if (var11 == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, ((val*)NULL)); /* == on <var11:nullable MType>*/
var12 = var13;
}
if (var12){
{
((void(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_nit__model__MVirtualTypeDef__bound_61d]))(var_mpropdef, ((val*)NULL)); /* bound= on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var14->class->vft[COLOR_nit__model__MProperty__lookup_super_definitions]))(var14, var_mmodule, var_anchor); /* lookup_super_definitions on <var14:MProperty(MVirtualTypeProp)>*/
}
var_ = var15;
{
var16 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MVirtualTypeDef]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:ArrayIterator[MVirtualTypeDef]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:ArrayIterator[MVirtualTypeDef]>*/
}
var_p = var19;
{
var20 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MVirtualTypeDef__bound]))(var_p); /* bound on <var_p:MVirtualTypeDef>*/
}
var_supbound = var20;
if (var_supbound == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = ((short int(*)(val* self, val* p0))(var_supbound->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_supbound, ((val*)NULL)); /* == on <var_supbound:nullable MType>*/
var21 = var22;
}
if (var21){
goto BREAK_label;
} else {
}
{
var23 = ((short int(*)(val* self))(var_p->class->vft[COLOR_nit__model__MVirtualTypeDef__is_fixed]))(var_p); /* is_fixed on <var_p:MVirtualTypeDef>*/
}
if (var23){
if (unlikely(varonce==NULL)) {
var24 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Redef Error: virtual type `";
var28 = standard___standard__NativeString___to_s_with_length(var27, 27l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "` is fixed in super-class `";
var32 = standard___standard__NativeString___to_s_with_length(var31, 27l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var24)->values[2]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "`.";
var36 = standard___standard__NativeString___to_s_with_length(var35, 2l);
var34 = var36;
varonce33 = var34;
}
((struct instance_standard__NativeArray*)var24)->values[4]=var34;
} else {
var24 = varonce;
varonce = NULL;
}
{
var37 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/
}
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__Object__to_s]))(var37); /* to_s on <var37:MProperty(MVirtualTypeProp)>*/
}
((struct instance_standard__NativeArray*)var24)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_p); /* mclassdef on <var_p:MVirtualTypeDef>*/
}
{
var40 = ((val*(*)(val* self))(var39->class->vft[COLOR_nit__model__MClassDef__mclass]))(var39); /* mclass on <var39:MClassDef>*/
}
{
var41 = ((val*(*)(val* self))(var40->class->vft[COLOR_standard__string__Object__to_s]))(var40); /* to_s on <var40:MClass>*/
}
((struct instance_standard__NativeArray*)var24)->values[3]=var41;
{
var42 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce = var24;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var42); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
var43 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_p); /* mclassdef on <var_p:MVirtualTypeDef>*/
}
{
var44 = ((val*(*)(val* self))(var43->class->vft[COLOR_nit__model__MClassDef__mclass]))(var43); /* mclass on <var43:MClassDef>*/
}
{
var45 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var46 = ((short int(*)(val* self, val* p0))(var44->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var44, var45); /* == on <var44:MClass>*/
}
if (var46){
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_type]))(self); /* n_type on <self:ATypePropdef>*/
}
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "refine-type";
var51 = standard___standard__NativeString___to_s_with_length(var50, 11l);
var49 = var51;
varonce48 = var49;
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Redef Error: a virtual type cannot be refined.";
var55 = standard___standard__NativeString___to_s_with_length(var54, 46l);
var53 = var55;
varonce52 = var53;
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(var_modelbuilder, var47, var49, var53); /* warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_type]))(self); /* n_type on <self:ATypePropdef>*/
}
{
var57 = ((short int(*)(val* self, val* p0, val* p1, val* p2, val* p3, val* p4))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__check_subtype]))(var_modelbuilder, var56, var_mmodule, var_anchor, var_bound, var_supbound); /* check_subtype on <var_modelbuilder:ModelBuilder>*/
}
var58 = !var57;
if (var58){
{
var59 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ATypePropdef__n_type]))(self); /* n_type on <self:ATypePropdef>*/
}
if (unlikely(varonce60==NULL)) {
var61 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "Redef Error: expected `";
var65 = standard___standard__NativeString___to_s_with_length(var64, 23l);
var63 = var65;
varonce62 = var63;
}
((struct instance_standard__NativeArray*)var61)->values[0]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "` bound type; got `";
var69 = standard___standard__NativeString___to_s_with_length(var68, 19l);
var67 = var69;
varonce66 = var67;
}
((struct instance_standard__NativeArray*)var61)->values[2]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "`.";
var73 = standard___standard__NativeString___to_s_with_length(var72, 2l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var61)->values[4]=var71;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
var74 = ((val*(*)(val* self))(var_supbound->class->vft[COLOR_standard__string__Object__to_s]))(var_supbound); /* to_s on <var_supbound:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var61)->values[1]=var74;
{
var75 = ((val*(*)(val* self))(var_bound->class->vft[COLOR_standard__string__Object__to_s]))(var_bound); /* to_s on <var_bound:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var61)->values[3]=var75;
{
var76 = ((val*(*)(val* self))(var61->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var59, var76); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:ArrayIterator[MVirtualTypeDef]>*/
}
RET_LABEL:;
}
