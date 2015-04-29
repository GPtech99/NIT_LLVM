#include "nit__model.sep.0.h"
/* method model#MSignature#to_s for (self: MSignature): String */
val* nit___nit__MSignature___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var2 /* : Array[MParameter] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
long var_i /* var i: Int */;
val* var8 /* : Array[MParameter] */;
long var9 /* : Int */;
long var_ /* var : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
val* var14 /* : Array[MParameter] */;
val* var15 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : MType */;
val* var33 /* : String */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
long var39 /* : Int */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
val* var52 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_b = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
{
var3 = ((short int(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var2); /* is_empty on <var2:Array[MParameter]>*/
}
var4 = !var3;
if (var4){
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "(";
var7 = standard___standard__NativeString___to_s_with_length(var6, 1l);
var5 = var7;
varonce = var5;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var5); /* append on <var_b:FlatBuffer>*/
}
var_i = 0l;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var8); /* length on <var8:Array[MParameter]>*/
}
var_ = var9;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var12 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var13 = var_i < var_;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
{
var15 = ((val*(*)(val* self, long p0))(var14->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var14, var_i); /* [] on <var14:Array[MParameter]>*/
}
var_mparameter = var15;
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var18 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var22 = var_i > 0l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ", ";
var26 = standard___standard__NativeString___to_s_with_length(var25, 2l);
var24 = var26;
varonce23 = var24;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var24); /* append on <var_b:FlatBuffer>*/
}
} else {
}
{
var27 = ((val*(*)(val* self))(var_mparameter->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mparameter); /* name on <var_mparameter:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var27); /* append on <var_b:FlatBuffer>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ": ";
var31 = standard___standard__NativeString___to_s_with_length(var30, 2l);
var29 = var31;
varonce28 = var29;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var29); /* append on <var_b:FlatBuffer>*/
}
{
var32 = ((val*(*)(val* self))(var_mparameter->class->vft[COLOR_nit__model__MParameter__mtype]))(var_mparameter); /* mtype on <var_mparameter:MParameter>*/
}
{
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32); /* to_s on <var32:MType>*/
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var33); /* append on <var_b:FlatBuffer>*/
}
{
var34 = ((short int(*)(val* self))(var_mparameter->class->vft[COLOR_nit__model__MParameter__is_vararg]))(var_mparameter); /* is_vararg on <var_mparameter:MParameter>*/
}
if (var34){
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "...";
var38 = standard___standard__NativeString___to_s_with_length(var37, 3l);
var36 = var38;
varonce35 = var36;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var36); /* append on <var_b:FlatBuffer>*/
}
} else {
}
var39 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var39;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = ")";
var43 = standard___standard__NativeString___to_s_with_length(var42, 1l);
var41 = var43;
varonce40 = var41;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var41); /* append on <var_b:FlatBuffer>*/
}
} else {
}
{
var44 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__return_mtype]))(self); /* return_mtype on <self:MSignature>*/
}
var_ret = var44;
if (var_ret == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
var46 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ret, ((val*)NULL)); /* != on <var_ret:nullable MType>*/
var45 = var46;
}
if (var45){
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ": ";
var50 = standard___standard__NativeString___to_s_with_length(var49, 2l);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var48); /* append on <var_b:FlatBuffer>*/
}
{
var51 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var51); /* append on <var_b:FlatBuffer>*/
}
} else {
}
{
var52 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
var = var52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#resolve_for for (self: MSignature, MType, nullable MClassType, MModule, Bool): MSignature */
val* nit___nit__MSignature___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MSignature */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : Array[MParameter] */;
val* var_params /* var params: Array[MParameter] */;
val* var2 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MParameter] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var7 /* : MParameter */;
val* var8 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
val* var12 /* : MSignature */;
val* var_res /* var res: MSignature */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[MParameter]>*/
}
var_params = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MParameter]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MParameter]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MParameter]>*/
}
var_p = var6;
{
var7 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_p->class->vft[COLOR_nit__model__MParameter__resolve_for]))(var_p, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_p:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var_params->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_params, var7); /* add on <var_params:Array[MParameter]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MParameter]>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__return_mtype]))(self); /* return_mtype on <self:MSignature>*/
}
var_ret = var8;
if (var_ret == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ret, ((val*)NULL)); /* != on <var_ret:nullable MType>*/
var9 = var10;
}
if (var9){
{
var11 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nit__model__MType__resolve_for]))(var_ret, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_ret:nullable MType(MType)>*/
}
var_ret = var11;
} else {
}
var12 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var12, var_params); /* mparameters= on <var12:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var12, var_ret); /* return_mtype= on <var12:MSignature>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_standard__kernel__Object__init]))(var12); /* init on <var12:MSignature>*/
}
var_res = var12;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#name for (self: MParameter): String */
val* nit___nit__MParameter___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1837);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name= for (self: MParameter, String) */
void nit___nit__MParameter___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameter___name].val = p0; /* _name on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#mtype for (self: MParameter): MType */
val* nit___nit__MParameter___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1840);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#mtype= for (self: MParameter, MType) */
void nit___nit__MParameter___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameter___mtype].val = p0; /* _mtype on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#is_vararg for (self: MParameter): Bool */
short int nit___nit__MParameter___is_vararg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#is_vararg= for (self: MParameter, Bool) */
void nit___nit__MParameter___is_vararg_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MParameter___is_vararg].s = p0; /* _is_vararg on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#is_default for (self: MParameter): Bool */
short int nit___nit__MParameter___is_default(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MParameter___is_default].s; /* _is_default on <self:MParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#is_default= for (self: MParameter, Bool) */
void nit___nit__MParameter___is_default_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MParameter___is_default].s = p0; /* _is_default on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#to_s for (self: MParameter): String */
val* nit___nit__MParameter___standard__string__Object__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : String */;
val* var12 /* : MType */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var22 /* : MType */;
val* var23 /* : String */;
val* var24 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MParameter__is_vararg]))(self); /* is_vararg on <self:MParameter>*/
}
if (var1){
if (unlikely(varonce==NULL)) {
var2 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = ": ";
var6 = standard___standard__NativeString___to_s_with_length(var5, 2l);
var4 = var6;
varonce3 = var4;
}
((struct instance_standard__NativeArray*)var2)->values[1]=var4;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "...";
var10 = standard___standard__NativeString___to_s_with_length(var9, 3l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var2)->values[3]=var8;
} else {
var2 = varonce;
varonce = NULL;
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MParameter>*/
}
((struct instance_standard__NativeArray*)var2)->values[0]=var11;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameter__mtype]))(self); /* mtype on <self:MParameter>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__Object__to_s]))(var12); /* to_s on <var12:MType>*/
}
((struct instance_standard__NativeArray*)var2)->values[2]=var13;
{
var14 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
var = var14;
goto RET_LABEL;
} else {
if (unlikely(varonce15==NULL)) {
var16 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = ": ";
var20 = standard___standard__NativeString___to_s_with_length(var19, 2l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[1]=var18;
} else {
var16 = varonce15;
varonce15 = NULL;
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MParameter>*/
}
((struct instance_standard__NativeArray*)var16)->values[0]=var21;
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameter__mtype]))(self); /* mtype on <self:MParameter>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__Object__to_s]))(var22); /* to_s on <var22:MType>*/
}
((struct instance_standard__NativeArray*)var16)->values[2]=var23;
{
var24 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var = var24;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method model#MParameter#resolve_for for (self: MParameter, MType, nullable MClassType, MModule, Bool): MParameter */
val* nit___nit__MParameter___resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MParameter */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var5 /* : MType */;
val* var_newtype /* var newtype: MType */;
val* var6 /* : MParameter */;
val* var7 /* : String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_res /* var res: MParameter */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameter__mtype]))(self); /* mtype on <self:MParameter>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_nit__model__MType__need_anchor]))(var1); /* need_anchor on <var1:MType>*/
}
var3 = !var2;
if (var3){
var = self;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameter__mtype]))(self); /* mtype on <self:MParameter>*/
}
{
var5 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var4->class->vft[COLOR_nit__model__MType__resolve_for]))(var4, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var4:MType>*/
}
var_newtype = var5;
var6 = NEW_nit__MParameter(&type_nit__MParameter);
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MParameter>*/
}
{
var8 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MParameter__is_vararg]))(self); /* is_vararg on <self:MParameter>*/
}
{
var9 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MParameter__is_default]))(self); /* is_default on <self:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__model__MParameter__name_61d]))(var6, var7); /* name= on <var6:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var6, var_newtype); /* mtype= on <var6:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var6->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var6, var8); /* is_vararg= on <var6:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var6->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var6, var9); /* is_default= on <var6:MParameter>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:MParameter>*/
}
var_res = var6;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#model for (self: MParameter): Model */
val* nit___nit__MParameter___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var2 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MParameter__mtype]))(self); /* mtype on <self:MParameter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1); /* model on <var1:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#init for (self: MParameter) */
void nit___nit__MParameter___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MParameter___standard__kernel__Object__init]))(self); /* init on <self:MParameter>*/
}
RET_LABEL:;
}
/* method model#MProperty#intro_mclassdef for (self: MProperty): MClassDef */
val* nit___nit__MProperty___intro_mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1889);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef= for (self: MProperty, MClassDef) */
void nit___nit__MProperty___intro_mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val = p0; /* _intro_mclassdef on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#name for (self: MProperty): String */
val* nit___nit__MProperty___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1894);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#name= for (self: MProperty, String) */
void nit___nit__MProperty___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MProperty___name].val = p0; /* _name on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#full_name for (self: MProperty): String */
val* nit___nit__MProperty___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : MClassDef */;
val* var15 /* : MModule */;
val* var16 /* : MVisibility */;
val* var17 /* : String */;
val* var18 /* : MClassDef */;
val* var19 /* : MClass */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
var1 = self->attrs[COLOR_nit__model__MProperty___full_name].val != NULL; /* _full_name on <self:MProperty> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MProperty___full_name].val; /* _full_name on <self:MProperty> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1897);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "::";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "::";
var13 = standard___standard__NativeString___to_s_with_length(var12, 2l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var5)->values[3]=var11;
} else {
var5 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(self); /* intro_mclassdef on <self:MProperty>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var14); /* mmodule on <var14:MClassDef>*/
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__visibility]))(self); /* visibility on <self:MProperty>*/
}
{
var17 = ((val*(*)(val* self, val* p0))(var15->class->vft[COLOR_nit__mmodule__MModule__namespace_for]))(var15, var16); /* namespace_for on <var15:MModule>*/
}
((struct instance_standard__NativeArray*)var5)->values[0]=var17;
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(self); /* intro_mclassdef on <self:MProperty>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__model__MClassDef__mclass]))(var18); /* mclass on <var18:MClassDef>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__model_base__MEntity__name]))(var19); /* name on <var19:MClass>*/
}
((struct instance_standard__NativeArray*)var5)->values[2]=var20;
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MProperty>*/
}
((struct instance_standard__NativeArray*)var5)->values[4]=var21;
{
var22 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var22;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MProperty___full_name].val = var3; /* _full_name on <self:MProperty> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MProperty#full_name= for (self: MProperty, String) */
void nit___nit__MProperty___full_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MProperty___full_name].val = p0; /* _full_name on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#c_name for (self: MProperty): String */
val* nit___nit__MProperty___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : MClassDef */;
val* var15 /* : MModule */;
val* var16 /* : String */;
val* var17 /* : MClassDef */;
val* var18 /* : MClass */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var1 = self->attrs[COLOR_nit__model__MProperty___c_name].val != NULL; /* _c_name on <self:MProperty> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MProperty___c_name].val; /* _c_name on <self:MProperty> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1905);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "__";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "__";
var13 = standard___standard__NativeString___to_s_with_length(var12, 2l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var5)->values[3]=var11;
} else {
var5 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(self); /* intro_mclassdef on <self:MProperty>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var14); /* mmodule on <var14:MClassDef>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var15); /* c_name on <var15:MModule>*/
}
((struct instance_standard__NativeArray*)var5)->values[0]=var16;
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(self); /* intro_mclassdef on <self:MProperty>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__model__MClassDef__mclass]))(var17); /* mclass on <var17:MClassDef>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__model_base__MEntity__name]))(var18); /* name on <var18:MClass>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__Text__to_cmangle]))(var19); /* to_cmangle on <var19:String>*/
}
((struct instance_standard__NativeArray*)var5)->values[2]=var20;
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MProperty>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__Text__to_cmangle]))(var21); /* to_cmangle on <var21:String>*/
}
((struct instance_standard__NativeArray*)var5)->values[4]=var22;
{
var23 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var23;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MProperty___c_name].val = var3; /* _c_name on <self:MProperty> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MProperty#c_name= for (self: MProperty, String) */
void nit___nit__MProperty___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MProperty___c_name].val = p0; /* _c_name on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#visibility for (self: MProperty): MVisibility */
val* nit___nit__MProperty___visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1910);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility= for (self: MProperty, MVisibility) */
void nit___nit__MProperty___visibility_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MProperty___visibility].val = p0; /* _visibility on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#is_autoinit for (self: MProperty): Bool */
short int nit___nit__MProperty___is_autoinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MProperty___is_autoinit].s; /* _is_autoinit on <self:MProperty> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#is_autoinit= for (self: MProperty, Bool) */
void nit___nit__MProperty___is_autoinit_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MProperty___is_autoinit].s = p0; /* _is_autoinit on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#init for (self: MProperty) */
void nit___nit__MProperty___standard__kernel__Object__init(val* self) {
val* var /* : MClassDef */;
val* var1 /* : Array[MProperty] */;
val* var2 /* : MClassDef */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
val* var_model /* var model: Model */;
val* var5 /* : MultiHashMap[String, MProperty] */;
val* var6 /* : String */;
val* var7 /* : Array[MProperty] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MProperty___standard__kernel__Object__init]))(self); /* init on <self:MProperty>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(self); /* intro_mclassdef on <self:MProperty>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model__MClassDef__intro_mproperties]))(var); /* intro_mproperties on <var:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var1, self); /* add on <var1:Array[MProperty]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(self); /* intro_mclassdef on <self:MProperty>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var2); /* mmodule on <var2:MClassDef>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__model_base__MEntity__model]))(var3); /* model on <var3:MModule>*/
}
var_model = var4;
{
var5 = ((val*(*)(val* self))(var_model->class->vft[COLOR_nit__model__Model__mproperties_by_name]))(var_model); /* mproperties_by_name on <var_model:Model>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MProperty>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var5->class->vft[COLOR_more_collections__MultiHashMap__add_one]))(var5, var6, self); /* add_one on <var5:MultiHashMap[String, MProperty]>*/
}
{
var7 = ((val*(*)(val* self))(var_model->class->vft[COLOR_nit__model__Model__mproperties]))(var_model); /* mproperties on <var_model:Model>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var7, self); /* add on <var7:Array[MProperty]>*/
}
RET_LABEL:;
}
/* method model#MProperty#mpropdefs for (self: MProperty): Array[MPropDef] */
val* nit___nit__MProperty___mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1924);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#mpropdefs= for (self: MProperty, Array[MPropDef]) */
void nit___nit__MProperty___mpropdefs_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mpropdefs) <p0:Array[MPropDef]> isa Array[MPROPDEF] */
/* <p0:Array[MPropDef]> isa Array[MPROPDEF] */
type_struct = self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[MPROPDEF]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1924);
fatal_exit(1);
}
self->attrs[COLOR_nit__model__MProperty___mpropdefs].val = p0; /* _mpropdefs on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#intro for (self: MProperty): MPropDef */
val* nit___nit__MProperty___intro(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1929);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro= for (self: MProperty, MPropDef) */
void nit___nit__MProperty___intro_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (intro) <p0:MPropDef> isa MPROPDEF */
/* <p0:MPropDef> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nit__model__MProperty__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1929);
fatal_exit(1);
}
self->attrs[COLOR_nit__model__MProperty___intro].val = p0; /* _intro on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#model for (self: MProperty): Model */
val* nit___nit__MProperty___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MPropDef */;
val* var2 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro]))(self); /* intro on <self:MProperty>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1); /* model on <var1:MPropDef>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#to_s for (self: MProperty): String */
val* nit___nit__MProperty___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MProperty>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* nit___nit__MProperty___lookup_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var5 /* : nullable Object */;
val* var_cache /* var cache: nullable Array[MPropDef] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var9 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MPropDef] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var14 /* : POSetElement[MModule] */;
val* var15 /* : MClassDef */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : MClassDef */;
val* var20 /* : MClassType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var28 /* : Bool */;
val* var29 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var30 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1951);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__lookup_definitions_cache]))(self); /* lookup_definitions_cache on <self:MProperty>*/
}
{
var5 = ((val*(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_more_collections__HashMap2___91d_93d]))(var4, var_mmodule, var_mtype); /* [] on <var4:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var_cache = var5;
if (var_cache == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cache, ((val*)NULL)); /* != on <var_cache:nullable Array[MPropDef]>*/
var6 = var7;
}
if (var6){
var = var_cache;
goto RET_LABEL;
} else {
}
var8 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:Array[MPropDef]>*/
}
var_candidates = var8;
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__mpropdefs]))(self); /* mpropdefs on <self:MProperty>*/
}
var_ = var9;
{
var10 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MPropDef]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:ArrayIterator[MPropDef]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var13;
{
var14 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var15 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var15); /* mmodule on <var15:MClassDef>*/
}
{
var17 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_poset__POSetElement___60d_61d]))(var14, var16); /* <= on <var14:POSetElement[MModule]>*/
}
var18 = !var17;
if (var18){
goto BREAK_label;
} else {
}
{
var19 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var19); /* bound_mtype on <var19:MClassDef>*/
}
{
var21 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_mtype->class->vft[COLOR_nit__model__MType__is_subtype]))(var_mtype, var_mmodule, ((val*)NULL), var20); /* is_subtype on <var_mtype:MType>*/
}
var22 = !var21;
if (var22){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_candidates->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_candidates, var_mpropdef); /* add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label23;
}
}
BREAK_label23: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:ArrayIterator[MPropDef]>*/
}
{
var24 = ((long(*)(val* self))(var_candidates->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_candidates); /* length on <var_candidates:Array[MPropDef]>*/
}
{
{ /* Inline kernel#Int#<= (var24,1l) on <var24:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var28 = var24 <= 1l;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__lookup_definitions_cache]))(self); /* lookup_definitions_cache on <self:MProperty>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var29->class->vft[COLOR_more_collections__HashMap2___91d_93d_61d]))(var29, var_mmodule, var_mtype, var_candidates); /* []= on <var29:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var30 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MProperty__select_most_specific]))(self, var_mmodule, var_candidates); /* select_most_specific on <self:MProperty>*/
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* nit___nit__MProperty___lookup_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1978);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache= for (self: MProperty, HashMap2[MModule, MType, Array[MPropDef]]) */
void nit___nit__MProperty___lookup_definitions_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (lookup_definitions_cache) <p0:HashMap2[MModule, MType, Array[MPropDef]]> isa HashMap2[MModule, MType, Array[MPROPDEF]] */
/* <p0:HashMap2[MModule, MType, Array[MPropDef]]> isa HashMap2[MModule, MType, Array[MPROPDEF]] */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2[MModule, MType, Array[MPROPDEF]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1978);
fatal_exit(1);
}
self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val = p0; /* _lookup_definitions_cache on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#lookup_super_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* nit___nit__MProperty___lookup_super_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var5 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[MPropDef] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var10 /* : POSetElement[MModule] */;
val* var11 /* : MClassDef */;
val* var12 /* : MModule */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MClassDef */;
val* var16 /* : MClassType */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : MClassDef */;
val* var21 /* : MClassType */;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
val* var24 /* : MClassDef */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var32 /* : Bool */;
val* var33 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1991);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var3;
var4 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[MPropDef]>*/
}
var_candidates = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__mpropdefs]))(self); /* mpropdefs on <self:MProperty>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MPropDef]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:ArrayIterator[MPropDef]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var9;
{
var10 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var11 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var11); /* mmodule on <var11:MClassDef>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_poset__POSetElement___60d_61d]))(var10, var12); /* <= on <var10:POSetElement[MModule]>*/
}
var14 = !var13;
if (var14){
goto BREAK_label;
} else {
}
{
var15 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var15); /* bound_mtype on <var15:MClassDef>*/
}
{
var17 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_mtype->class->vft[COLOR_nit__model__MType__is_subtype]))(var_mtype, var_mmodule, ((val*)NULL), var16); /* is_subtype on <var_mtype:MType>*/
}
var18 = !var17;
if (var18){
goto BREAK_label;
} else {
}
{
var20 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var20); /* bound_mtype on <var20:MClassDef>*/
}
{
var22 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var21); /* == on <var_mtype:MType>*/
}
var_23 = var22;
if (var22){
{
var24 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var24); /* mmodule on <var24:MClassDef>*/
}
{
var26 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, var25); /* == on <var_mmodule:MModule>*/
}
var19 = var26;
} else {
var19 = var_23;
}
if (var19){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_candidates->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_candidates, var_mpropdef); /* add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label27;
}
}
BREAK_label27: (void)0;
{
((void(*)(val* self))(var_7->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:ArrayIterator[MPropDef]>*/
}
{
var28 = ((long(*)(val* self))(var_candidates->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_candidates); /* length on <var_candidates:Array[MPropDef]>*/
}
{
{ /* Inline kernel#Int#<= (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var32 = var28 <= 1l;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var33 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MProperty__select_most_specific]))(self, var_mmodule, var_candidates); /* select_most_specific on <self:MProperty>*/
}
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#select_most_specific for (self: MProperty, MModule, Array[MPropDef]): Array[MPropDef] */
val* nit___nit__MProperty___select_most_specific(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mmodule /* var mmodule: MModule */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var2 /* : Array[MPropDef] */;
val* var_res /* var res: Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MPropDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_pd1 /* var pd1: MPropDef */;
val* var7 /* : MClassDef */;
val* var_cd1 /* var cd1: MClassDef */;
val* var8 /* : MClass */;
val* var_c1 /* var c1: MClass */;
short int var_keep /* var keep: Bool */;
val* var_9 /* var : Array[MPropDef] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MPropDef] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_pd2 /* var pd2: MPropDef */;
short int var14 /* : Bool */;
val* var15 /* : MClassDef */;
val* var_cd2 /* var cd2: MClassDef */;
val* var16 /* : MClass */;
val* var_c2 /* var c2: MClass */;
val* var17 /* : MClassType */;
val* var18 /* : MClassType */;
short int var19 /* : Bool */;
val* var20 /* : MModule */;
val* var21 /* : POSetElement[MModule] */;
val* var22 /* : MModule */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : MClassType */;
val* var27 /* : MClassType */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
val* var30 /* : MClassType */;
val* var31 /* : MClassType */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Sys */;
val* var36 /* : NativeArray[String] */;
static val* varonce;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : String */;
/* Covariant cast for argument 1 (candidates) <p1:Array[MPropDef]> isa Array[MPROPDEF] */
/* <p1:Array[MPropDef]> isa Array[MPROPDEF] */
type_struct = self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[MPROPDEF]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
fatal_exit(1);
}
var_mmodule = p0;
var_candidates = p1;
var2 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[MPropDef]>*/
}
var_res = var2;
var_ = var_candidates;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MPropDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MPropDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MPropDef]>*/
}
var_pd1 = var6;
{
var7 = ((val*(*)(val* self))(var_pd1->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_pd1); /* mclassdef on <var_pd1:MPropDef>*/
}
var_cd1 = var7;
{
var8 = ((val*(*)(val* self))(var_cd1->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_cd1); /* mclass on <var_cd1:MClassDef>*/
}
var_c1 = var8;
var_keep = 1;
var_9 = var_candidates;
{
var10 = ((val*(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_9); /* iterator on <var_9:Array[MPropDef]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:ArrayIterator[MPropDef]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:ArrayIterator[MPropDef]>*/
}
var_pd2 = var13;
{
var14 = ((short int(*)(val* self, val* p0))(var_pd2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pd2, var_pd1); /* == on <var_pd2:MPropDef>*/
}
if (var14){
goto BREAK_label;
} else {
}
{
var15 = ((val*(*)(val* self))(var_pd2->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_pd2); /* mclassdef on <var_pd2:MPropDef>*/
}
var_cd2 = var15;
{
var16 = ((val*(*)(val* self))(var_cd2->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_cd2); /* mclass on <var_cd2:MClassDef>*/
}
var_c2 = var16;
{
var17 = ((val*(*)(val* self))(var_c2->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_c2); /* mclass_type on <var_c2:MClass>*/
}
{
var18 = ((val*(*)(val* self))(var_c1->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_c1); /* mclass_type on <var_c1:MClass>*/
}
{
var19 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var17, var18); /* == on <var17:MClassType>*/
}
if (var19){
{
var20 = ((val*(*)(val* self))(var_cd2->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_cd2); /* mmodule on <var_cd2:MClassDef>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var20); /* in_importation on <var20:MModule>*/
}
{
var22 = ((val*(*)(val* self))(var_cd1->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_cd1); /* mmodule on <var_cd1:MClassDef>*/
}
{
var23 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_poset__POSetElement___60d]))(var21, var22); /* < on <var21:POSetElement[MModule]>*/
}
if (var23){
var_keep = 0;
goto BREAK_label24;
} else {
}
} else {
{
var26 = ((val*(*)(val* self))(var_cd2->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_cd2); /* bound_mtype on <var_cd2:MClassDef>*/
}
{
var27 = ((val*(*)(val* self))(var_cd1->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_cd1); /* bound_mtype on <var_cd1:MClassDef>*/
}
{
var28 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var26->class->vft[COLOR_nit__model__MType__is_subtype]))(var26, var_mmodule, ((val*)NULL), var27); /* is_subtype on <var26:MClassType>*/
}
var_29 = var28;
if (var28){
{
var30 = ((val*(*)(val* self))(var_cd2->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_cd2); /* bound_mtype on <var_cd2:MClassDef>*/
}
{
var31 = ((val*(*)(val* self))(var_cd1->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_cd1); /* bound_mtype on <var_cd1:MClassDef>*/
}
{
var32 = ((short int(*)(val* self, val* p0))(var30->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var30, var31); /* != on <var30:MClassType>*/
}
var25 = var32;
} else {
var25 = var_29;
}
if (var25){
var_keep = 0;
goto BREAK_label24;
} else {
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label24;
}
}
BREAK_label24: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:ArrayIterator[MPropDef]>*/
}
if (var_keep){
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_pd1); /* add on <var_res:Array[MPropDef]>*/
}
} else {
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label33;
}
}
BREAK_label33: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MPropDef]>*/
}
{
var34 = ((short int(*)(val* self))(var_res->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_res); /* is_empty on <var_res:Array[MPropDef]>*/
}
if (var34){
var35 = glob_sys;
if (unlikely(varonce==NULL)) {
var36 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "All lost! ";
var40 = standard___standard__NativeString___to_s_with_length(var39, 10l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var36)->values[0]=var38;
} else {
var36 = varonce;
varonce = NULL;
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ", ";
var44 = standard___standard__NativeString___to_s_with_length(var43, 2l);
var42 = var44;
varonce41 = var42;
}
{
var45 = ((val*(*)(val* self, val* p0))(var_candidates->class->vft[COLOR_standard__string__Collection__join]))(var_candidates, var42); /* join on <var_candidates:Array[MPropDef]>*/
}
((struct instance_standard__NativeArray*)var36)->values[1]=var45;
{
var46 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce = var36;
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_standard__file__Sys__print]))(var35, var46); /* print on <var35:Sys>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_first_definition for (self: MProperty, MModule, MType): MPropDef */
val* nit___nit__MProperty___lookup_first_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : Array[MPropDef] */;
val* var2 /* : nullable Object */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MProperty__lookup_all_definitions]))(self, var_mmodule, var_mtype); /* lookup_all_definitions on <self:MProperty>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var1); /* first on <var1:Array[MPropDef]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* nit___nit__MProperty___lookup_all_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var2 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var3 /* : nullable Object */;
val* var_cache /* var cache: nullable Array[MPropDef] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var10 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[MPropDef] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var15 /* : POSetElement[MModule] */;
val* var16 /* : MClassDef */;
val* var17 /* : MModule */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : MClassDef */;
val* var21 /* : MClassType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var29 /* : Bool */;
val* var30 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var31 /* : Array[nullable Object] */;
val* var32 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__lookup_all_definitions_cache]))(self); /* lookup_all_definitions_cache on <self:MProperty>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var2->class->vft[COLOR_more_collections__HashMap2___91d_93d]))(var2, var_mmodule, var_mtype); /* [] on <var2:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var_cache = var3;
if (var_cache == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cache, ((val*)NULL)); /* != on <var_cache:nullable Array[MPropDef]>*/
var4 = var5;
}
if (var4){
var = var_cache;
goto RET_LABEL;
} else {
}
{
var6 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var7 = !var6;
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2075);
fatal_exit(1);
}
{
var8 = ((short int(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__has_mproperty]))(var_mtype, var_mmodule, self); /* has_mproperty on <var_mtype:MType>*/
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2076);
fatal_exit(1);
}
var9 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:Array[MPropDef]>*/
}
var_candidates = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__mpropdefs]))(self); /* mpropdefs on <self:MProperty>*/
}
var_ = var10;
{
var11 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MPropDef]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:ArrayIterator[MPropDef]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var14;
{
var15 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:MModule>*/
}
{
var16 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var16); /* mmodule on <var16:MClassDef>*/
}
{
var18 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_poset__POSetElement___60d_61d]))(var15, var17); /* <= on <var15:POSetElement[MModule]>*/
}
var19 = !var18;
if (var19){
goto BREAK_label;
} else {
}
{
var20 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MPropDef>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var20); /* bound_mtype on <var20:MClassDef>*/
}
{
var22 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_mtype->class->vft[COLOR_nit__model__MType__is_subtype]))(var_mtype, var_mmodule, ((val*)NULL), var21); /* is_subtype on <var_mtype:MType>*/
}
var23 = !var22;
if (var23){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_candidates->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_candidates, var_mpropdef); /* add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label24;
}
}
BREAK_label24: (void)0;
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:ArrayIterator[MPropDef]>*/
}
{
var25 = ((long(*)(val* self))(var_candidates->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_candidates); /* length on <var_candidates:Array[MPropDef]>*/
}
{
{ /* Inline kernel#Int#<= (var25,1l) on <var25:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var29 = var25 <= 1l;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__lookup_all_definitions_cache]))(self); /* lookup_all_definitions_cache on <self:MProperty>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var30->class->vft[COLOR_more_collections__HashMap2___91d_93d_61d]))(var30, var_mmodule, var_mtype, var_candidates); /* []= on <var30:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__model__MModule__linearize_mpropdefs]))(var_mmodule, var_candidates); /* linearize_mpropdefs on <var_mmodule:MModule>*/
}
{
var31 = ((val*(*)(val* self))(var_candidates->class->vft[COLOR_standard__array__AbstractArrayRead__reversed]))(var_candidates); /* reversed on <var_candidates:Array[MPropDef]>*/
}
var_candidates = var31;
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__lookup_all_definitions_cache]))(self); /* lookup_all_definitions_cache on <self:MProperty>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var32->class->vft[COLOR_more_collections__HashMap2___91d_93d_61d]))(var32, var_mmodule, var_mtype, var_candidates); /* []= on <var32:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* nit___nit__MProperty___lookup_all_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2101);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache= for (self: MProperty, HashMap2[MModule, MType, Array[MPropDef]]) */
void nit___nit__MProperty___lookup_all_definitions_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (lookup_all_definitions_cache) <p0:HashMap2[MModule, MType, Array[MPropDef]]> isa HashMap2[MModule, MType, Array[MPROPDEF]] */
/* <p0:HashMap2[MModule, MType, Array[MPropDef]]> isa HashMap2[MModule, MType, Array[MPROPDEF]] */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2[MModule, MType, Array[MPROPDEF]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2101);
fatal_exit(1);
}
self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val = p0; /* _lookup_all_definitions_cache on <self:MProperty> */
RET_LABEL:;
}
/* method model#MMethod#is_toplevel for (self: MMethod): Bool */
short int nit___nit__MMethod___is_toplevel(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethod___is_toplevel].s; /* _is_toplevel on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_toplevel= for (self: MMethod, Bool) */
void nit___nit__MMethod___is_toplevel_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethod___is_toplevel].s = p0; /* _is_toplevel on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_init for (self: MMethod): Bool */
short int nit___nit__MMethod___is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init= for (self: MMethod, Bool) */
void nit___nit__MMethod___is_init_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethod___is_init].s = p0; /* _is_init on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_root_init for (self: MMethod): Bool */
short int nit___nit__MMethod___is_root_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_root_init= for (self: MMethod, Bool) */
void nit___nit__MMethod___is_root_init_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethod___is_root_init].s = p0; /* _is_root_init on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_new for (self: MMethod): Bool */
short int nit___nit__MMethod___is_new(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_new= for (self: MMethod, Bool) */
void nit___nit__MMethod___is_new_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethod___is_new].s = p0; /* _is_new on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_init_for for (self: MMethod, MClass): Bool */
short int nit___nit__MMethod___is_init_for(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
short int var1 /* : Bool */;
var_mclass = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MMethod__is_init]))(self); /* is_init on <self:MMethod>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeProp#mvirtualtype for (self: MVirtualTypeProp): MVirtualType */
val* nit___nit__MVirtualTypeProp___mvirtualtype(val* self) {
val* var /* : MVirtualType */;
val* var1 /* : MVirtualType */;
var1 = self->attrs[COLOR_nit__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <self:MVirtualTypeProp> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2148);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeProp#mvirtualtype= for (self: MVirtualTypeProp, MVirtualType) */
void nit___nit__MVirtualTypeProp___mvirtualtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MVirtualTypeProp___mvirtualtype].val = p0; /* _mvirtualtype on <self:MVirtualTypeProp> */
RET_LABEL:;
}
/* method model#MPropDef#mclassdef for (self: MPropDef): MClassDef */
val* nit___nit__MPropDef___mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2166);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mclassdef= for (self: MPropDef, MClassDef) */
void nit___nit__MPropDef___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDef___mclassdef].val = p0; /* _mclassdef on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#mproperty for (self: MPropDef): MProperty */
val* nit___nit__MPropDef___mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2169);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mproperty= for (self: MPropDef, MProperty) */
void nit___nit__MPropDef___mproperty_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mproperty) <p0:MProperty> isa MPROPERTY */
/* <p0:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_nit__model__MPropDef__MPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2169);
fatal_exit(1);
}
self->attrs[COLOR_nit__model__MPropDef___mproperty].val = p0; /* _mproperty on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#location for (self: MPropDef): Location */
val* nit___nit__MPropDef___location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nit__model__MPropDef___location].val; /* _location on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2172);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location= for (self: MPropDef, Location) */
void nit___nit__MPropDef___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDef___location].val = p0; /* _location on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#init for (self: MPropDef) */
void nit___nit__MPropDef___standard__kernel__Object__init(val* self) {
val* var /* : MClassDef */;
val* var1 /* : Array[MPropDef] */;
val* var2 /* : MProperty */;
val* var3 /* : Array[MPropDef] */;
val* var4 /* : MProperty */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassDef */;
short int var7 /* : Bool */;
val* var8 /* : MProperty */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MProperty */;
val* var12 /* : NativeArray[String] */;
static val* varonce;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : MClassDef */;
val* var18 /* : String */;
val* var19 /* : MProperty */;
val* var20 /* : String */;
val* var21 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MPropDef___standard__kernel__Object__init]))(self); /* init on <self:MPropDef>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var); /* mpropdefs on <var:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var1, self); /* add on <var1:Array[MPropDef]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MProperty__mpropdefs]))(var2); /* mpropdefs on <var2:MProperty>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var3, self); /* add on <var3:Array[MPropDef]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var4); /* intro_mclassdef on <var4:MProperty>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var6); /* == on <var5:MClassDef>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
var9 = var8->attrs[COLOR_nit__model__MProperty___intro].val != NULL; /* _intro on <var8:MProperty> */
var10 = !var9;
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2180);
fatal_exit(1);
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_nit__model__MProperty__intro_61d]))(var11, self); /* intro= on <var11:MProperty>*/
}
} else {
}
if (unlikely(varonce==NULL)) {
var12 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "#";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[1]=var14;
} else {
var12 = varonce;
varonce = NULL;
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__Object__to_s]))(var17); /* to_s on <var17:MClassDef>*/
}
((struct instance_standard__NativeArray*)var12)->values[0]=var18;
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__Object__to_s]))(var19); /* to_s on <var19:MProperty>*/
}
((struct instance_standard__NativeArray*)var12)->values[2]=var20;
{
var21 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MPropDef__to_s_61d]))(self, var21); /* to_s= on <self:MPropDef>*/
}
RET_LABEL:;
}
/* method model#MPropDef#name for (self: MPropDef): String */
val* nit___nit__MPropDef___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : MProperty */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__name]))(var1); /* name on <var1:MProperty>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#full_name for (self: MPropDef): String */
val* nit___nit__MPropDef___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var6 /* : MClassDef */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : MClassDef */;
val* var12 /* : MClass */;
val* var13 /* : MProperty */;
val* var14 /* : MClassDef */;
val* var15 /* : MClass */;
short int var16 /* : Bool */;
val* var17 /* : String */;
val* var18 /* : MClassDef */;
val* var19 /* : MModule */;
val* var20 /* : nullable MProject */;
val* var21 /* : MProperty */;
val* var22 /* : MClassDef */;
val* var23 /* : MModule */;
val* var24 /* : nullable MProject */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MProperty */;
val* var28 /* : MClassDef */;
val* var29 /* : MModule */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : MProperty */;
val* var36 /* : MVisibility */;
val* var37 /* : Sys */;
val* var38 /* : MVisibility */;
short int var39 /* : Bool */;
val* var40 /* : MClassDef */;
val* var41 /* : MModule */;
val* var42 /* : MClassDef */;
val* var43 /* : MClass */;
val* var44 /* : MVisibility */;
val* var45 /* : String */;
val* var46 /* : MProperty */;
val* var47 /* : MClassDef */;
val* var48 /* : MModule */;
val* var49 /* : nullable MProject */;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var55 /* : MProperty */;
val* var56 /* : MClassDef */;
val* var57 /* : MModule */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
val* var63 /* : MClassDef */;
val* var64 /* : MClass */;
val* var65 /* : MProperty */;
val* var66 /* : MClassDef */;
val* var67 /* : MClass */;
short int var68 /* : Bool */;
val* var69 /* : MProperty */;
val* var70 /* : MClassDef */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
val* var76 /* : MProperty */;
val* var77 /* : String */;
val* var78 /* : String */;
var1 = self->attrs[COLOR_nit__model__MPropDef___full_name].val != NULL; /* _full_name on <self:MPropDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MPropDef___full_name].val; /* _full_name on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2189);
fatal_exit(1);
}
} else {
{
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
var_res = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var6); /* full_name on <var6:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var7); /* append on <var_res:FlatBuffer>*/
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "#";
var10 = standard___standard__NativeString___to_s_with_length(var9, 1l);
var8 = var10;
varonce = var8;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var8); /* append on <var_res:FlatBuffer>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__MClassDef__mclass]))(var11); /* mclass on <var11:MClassDef>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var13); /* intro_mclassdef on <var13:MProperty>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MClassDef__mclass]))(var14); /* mclass on <var14:MClassDef>*/
}
{
var16 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var15); /* == on <var12:MClass>*/
}
if (var16){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MPropDef>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var17); /* append on <var_res:FlatBuffer>*/
}
} else {
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var18); /* mmodule on <var18:MClassDef>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__mmodule__MModule__mproject]))(var19); /* mproject on <var19:MModule>*/
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var21); /* intro_mclassdef on <var21:MProperty>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var22); /* mmodule on <var22:MClassDef>*/
}
{
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_nit__mmodule__MModule__mproject]))(var23); /* mproject on <var23:MModule>*/
}
if (var20 == NULL) {
var25 = (var24 != NULL);
} else {
var26 = ((short int(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var20, var24); /* != on <var20:nullable MProject>*/
var25 = var26;
}
if (var25){
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var27); /* intro_mclassdef on <var27:MProperty>*/
}
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var28); /* mmodule on <var28:MClassDef>*/
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var29); /* full_name on <var29:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var30); /* append on <var_res:FlatBuffer>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "::";
var34 = standard___standard__NativeString___to_s_with_length(var33, 2l);
var32 = var34;
varonce31 = var32;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var32); /* append on <var_res:FlatBuffer>*/
}
} else {
{
var35 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var36 = ((val*(*)(val* self))(var35->class->vft[COLOR_nit__model__MProperty__visibility]))(var35); /* visibility on <var35:MProperty>*/
}
var37 = glob_sys;
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_nit__model_base__Sys__private_visibility]))(var37); /* private_visibility on <var37:Sys>*/
}
{
var39 = ((short int(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__kernel__Comparable___60d_61d]))(var36, var38); /* <= on <var36:MVisibility>*/
}
if (var39){
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var41 = ((val*(*)(val* self))(var40->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var40); /* mmodule on <var40:MClassDef>*/
}
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_nit__model__MClassDef__mclass]))(var42); /* mclass on <var42:MClassDef>*/
}
{
var44 = ((val*(*)(val* self))(var43->class->vft[COLOR_nit__model__MClass__visibility]))(var43); /* visibility on <var43:MClass>*/
}
{
var45 = ((val*(*)(val* self, val* p0))(var41->class->vft[COLOR_nit__mmodule__MModule__namespace_for]))(var41, var44); /* namespace_for on <var41:MModule>*/
}
{
var46 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var47 = ((val*(*)(val* self))(var46->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var46); /* intro_mclassdef on <var46:MProperty>*/
}
{
var48 = ((val*(*)(val* self))(var47->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var47); /* mmodule on <var47:MClassDef>*/
}
{
var49 = ((val*(*)(val* self))(var48->class->vft[COLOR_nit__mmodule__MModule__mproject]))(var48); /* mproject on <var48:MModule>*/
}
{
var50 = ((short int(*)(val* self, val* p0))(var45->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var45, var49); /* != on <var45:String>*/
}
if (var50){
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "::";
var54 = standard___standard__NativeString___to_s_with_length(var53, 2l);
var52 = var54;
varonce51 = var52;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var52); /* append on <var_res:FlatBuffer>*/
}
{
var55 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var56 = ((val*(*)(val* self))(var55->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var55); /* intro_mclassdef on <var55:MProperty>*/
}
{
var57 = ((val*(*)(val* self))(var56->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var56); /* mmodule on <var56:MClassDef>*/
}
{
var58 = ((val*(*)(val* self))(var57->class->vft[COLOR_nit__model_base__MEntity__name]))(var57); /* name on <var57:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var58); /* append on <var_res:FlatBuffer>*/
}
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "::";
var62 = standard___standard__NativeString___to_s_with_length(var61, 2l);
var60 = var62;
varonce59 = var60;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var60); /* append on <var_res:FlatBuffer>*/
}
} else {
}
} else {
}
}
{
var63 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var64 = ((val*(*)(val* self))(var63->class->vft[COLOR_nit__model__MClassDef__mclass]))(var63); /* mclass on <var63:MClassDef>*/
}
{
var65 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var66 = ((val*(*)(val* self))(var65->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var65); /* intro_mclassdef on <var65:MProperty>*/
}
{
var67 = ((val*(*)(val* self))(var66->class->vft[COLOR_nit__model__MClassDef__mclass]))(var66); /* mclass on <var66:MClassDef>*/
}
{
var68 = ((short int(*)(val* self, val* p0))(var64->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var64, var67); /* != on <var64:MClass>*/
}
if (var68){
{
var69 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var70 = ((val*(*)(val* self))(var69->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var69); /* intro_mclassdef on <var69:MProperty>*/
}
{
var71 = ((val*(*)(val* self))(var70->class->vft[COLOR_nit__model_base__MEntity__name]))(var70); /* name on <var70:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var71); /* append on <var_res:FlatBuffer>*/
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "::";
var75 = standard___standard__NativeString___to_s_with_length(var74, 2l);
var73 = var75;
varonce72 = var73;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var73); /* append on <var_res:FlatBuffer>*/
}
} else {
}
{
var76 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var77 = ((val*(*)(val* self))(var76->class->vft[COLOR_nit__model_base__MEntity__name]))(var76); /* name on <var76:MProperty>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var77); /* append on <var_res:FlatBuffer>*/
}
}
{
var78 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:FlatBuffer>*/
}
var3 = var78;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MPropDef___full_name].val = var3; /* _full_name on <self:MPropDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MPropDef#full_name= for (self: MPropDef, String) */
void nit___nit__MPropDef___full_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDef___full_name].val = p0; /* _full_name on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#c_name for (self: MPropDef): String */
val* nit___nit__MPropDef___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var6 /* : MClassDef */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : MClassDef */;
val* var12 /* : MClass */;
val* var13 /* : MProperty */;
val* var14 /* : MClassDef */;
val* var15 /* : MClass */;
short int var16 /* : Bool */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : MClassDef */;
val* var20 /* : MModule */;
val* var21 /* : MProperty */;
val* var22 /* : MClassDef */;
val* var23 /* : MModule */;
short int var24 /* : Bool */;
val* var25 /* : MProperty */;
val* var26 /* : MClassDef */;
val* var27 /* : MModule */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : MClassDef */;
val* var34 /* : MClass */;
val* var35 /* : MProperty */;
val* var36 /* : MClassDef */;
val* var37 /* : MClass */;
short int var38 /* : Bool */;
val* var39 /* : MProperty */;
val* var40 /* : MClassDef */;
val* var41 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : MProperty */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
var1 = self->attrs[COLOR_nit__model__MPropDef___c_name].val != NULL; /* _c_name on <self:MPropDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MPropDef___c_name].val; /* _c_name on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2238);
fatal_exit(1);
}
} else {
{
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
var_res = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var6); /* c_name on <var6:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var7); /* append on <var_res:FlatBuffer>*/
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "___";
var10 = standard___standard__NativeString___to_s_with_length(var9, 3l);
var8 = var10;
varonce = var8;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var8); /* append on <var_res:FlatBuffer>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__MClassDef__mclass]))(var11); /* mclass on <var11:MClassDef>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var13); /* intro_mclassdef on <var13:MProperty>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MClassDef__mclass]))(var14); /* mclass on <var14:MClassDef>*/
}
{
var16 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var15); /* == on <var12:MClass>*/
}
if (var16){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MPropDef>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__Text__to_cmangle]))(var17); /* to_cmangle on <var17:String>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var18); /* append on <var_res:FlatBuffer>*/
}
} else {
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var19); /* mmodule on <var19:MClassDef>*/
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var21); /* intro_mclassdef on <var21:MProperty>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var22); /* mmodule on <var22:MClassDef>*/
}
{
var24 = ((short int(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var20, var23); /* != on <var20:MModule>*/
}
if (var24){
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var26 = ((val*(*)(val* self))(var25->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var25); /* intro_mclassdef on <var25:MProperty>*/
}
{
var27 = ((val*(*)(val* self))(var26->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var26); /* mmodule on <var26:MClassDef>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var27); /* c_name on <var27:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var28); /* append on <var_res:FlatBuffer>*/
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "__";
var32 = standard___standard__NativeString___to_s_with_length(var31, 2l);
var30 = var32;
varonce29 = var30;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var30); /* append on <var_res:FlatBuffer>*/
}
} else {
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var34 = ((val*(*)(val* self))(var33->class->vft[COLOR_nit__model__MClassDef__mclass]))(var33); /* mclass on <var33:MClassDef>*/
}
{
var35 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var36 = ((val*(*)(val* self))(var35->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var35); /* intro_mclassdef on <var35:MProperty>*/
}
{
var37 = ((val*(*)(val* self))(var36->class->vft[COLOR_nit__model__MClassDef__mclass]))(var36); /* mclass on <var36:MClassDef>*/
}
{
var38 = ((short int(*)(val* self, val* p0))(var34->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var34, var37); /* != on <var34:MClass>*/
}
if (var38){
{
var39 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var40 = ((val*(*)(val* self))(var39->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var39); /* intro_mclassdef on <var39:MProperty>*/
}
{
var41 = ((val*(*)(val* self))(var40->class->vft[COLOR_nit__model_base__MEntity__name]))(var40); /* name on <var40:MClassDef>*/
}
{
var42 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__Text__to_cmangle]))(var41); /* to_cmangle on <var41:String>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var42); /* append on <var_res:FlatBuffer>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "__";
var46 = standard___standard__NativeString___to_s_with_length(var45, 2l);
var44 = var46;
varonce43 = var44;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var44); /* append on <var_res:FlatBuffer>*/
}
} else {
}
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var48 = ((val*(*)(val* self))(var47->class->vft[COLOR_nit__model_base__MEntity__name]))(var47); /* name on <var47:MProperty>*/
}
{
var49 = ((val*(*)(val* self))(var48->class->vft[COLOR_standard__string__Text__to_cmangle]))(var48); /* to_cmangle on <var48:String>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var49); /* append on <var_res:FlatBuffer>*/
}
}
{
var50 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:FlatBuffer>*/
}
var3 = var50;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MPropDef___c_name].val = var3; /* _c_name on <self:MPropDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MPropDef#c_name= for (self: MPropDef, String) */
void nit___nit__MPropDef___c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDef___c_name].val = p0; /* _c_name on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#model for (self: MPropDef): Model */
val* nit___nit__MPropDef___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClassDef */;
val* var2 /* : Model */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(self); /* mclassdef on <self:MPropDef>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1); /* model on <var1:MClassDef>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s for (self: MPropDef): String */
val* nit___nit__MPropDef___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MPropDef___to_s].val; /* _to_s on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2260);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s= for (self: MPropDef, String) */
void nit___nit__MPropDef___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDef___to_s].val = p0; /* _to_s on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#is_intro for (self: MPropDef): Bool */
short int nit___nit__MPropDef___is_intro(val* self) {
short int var /* : Bool */;
val* var1 /* : MProperty */;
val* var2 /* : MPropDef */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MProperty__intro]))(var1); /* intro on <var1:MProperty>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, self); /* == on <var2:MPropDef>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#lookup_next_definition for (self: MPropDef, MModule, MType): MPropDef */
val* nit___nit__MPropDef___lookup_next_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MProperty */;
val* var4 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_i /* var i: ArrayIterator[MPropDef] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2274);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__model__MProperty__lookup_all_definitions]))(var3, var_mmodule, var_mtype); /* lookup_all_definitions on <var3:MProperty>*/
}
var_mpropdefs = var4;
{
var5 = ((val*(*)(val* self))(var_mpropdefs->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_mpropdefs); /* iterator on <var_mpropdefs:Array[MPropDef]>*/
}
var_i = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:ArrayIterator[MPropDef]>*/
}
var_ = var7;
if (var7){
{
var8 = ((val*(*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:ArrayIterator[MPropDef]>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var8, self); /* != on <var8:nullable Object(MPropDef)>*/
}
var6 = var9;
} else {
var6 = var_;
}
if (var6){
{
((void(*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var10 = ((short int(*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:ArrayIterator[MPropDef]>*/
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert \'has_property\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2279);
fatal_exit(1);
}
{
((void(*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:ArrayIterator[MPropDef]>*/
}
{
var11 = ((short int(*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:ArrayIterator[MPropDef]>*/
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert \'has_next_property\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2281);
fatal_exit(1);
}
{
var12 = ((val*(*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:ArrayIterator[MPropDef]>*/
}
/* <var12:nullable Object(MPropDef)> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nit__model__MPropDef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var12->type->table_size) {
var13 = 0;
} else {
var13 = var12->type->type_table[cltype] == idtype;
}
if (unlikely(!var13)) {
var_class_name = var12 == NULL ? "null" : var12->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2282);
fatal_exit(1);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature for (self: MMethodDef): nullable MSignature */
val* nit___nit__MMethodDef___msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature= for (self: MMethodDef, nullable MSignature) */
void nit___nit__MMethodDef___msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MMethodDef___msignature].val = p0; /* _msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#new_msignature for (self: MMethodDef): nullable MSignature */
val* nit___nit__MMethodDef___new_msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#new_msignature= for (self: MMethodDef, nullable MSignature) */
void nit___nit__MMethodDef___new_msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = p0; /* _new_msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#initializers for (self: MMethodDef): Array[MProperty] */
val* nit___nit__MMethodDef___initializers(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <self:MMethodDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2302);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#initializers= for (self: MMethodDef, Array[MProperty]) */
void nit___nit__MMethodDef___initializers_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MMethodDef___initializers].val = p0; /* _initializers on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_abstract for (self: MMethodDef): Bool */
short int nit___nit__MMethodDef___is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract= for (self: MMethodDef, Bool) */
void nit___nit__MMethodDef___is_abstract_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethodDef___is_abstract].s = p0; /* _is_abstract on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_intern for (self: MMethodDef): Bool */
short int nit___nit__MMethodDef___is_intern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___is_intern].s; /* _is_intern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_intern= for (self: MMethodDef, Bool) */
void nit___nit__MMethodDef___is_intern_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethodDef___is_intern].s = p0; /* _is_intern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_extern for (self: MMethodDef): Bool */
short int nit___nit__MMethodDef___is_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_extern= for (self: MMethodDef, Bool) */
void nit___nit__MMethodDef___is_extern_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethodDef___is_extern].s = p0; /* _is_extern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#constant_value for (self: MMethodDef): nullable Object */
val* nit___nit__MMethodDef___constant_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#constant_value= for (self: MMethodDef, nullable Object) */
void nit___nit__MMethodDef___constant_value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MMethodDef___constant_value].val = p0; /* _constant_value on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MAttributeDef#static_mtype for (self: MAttributeDef): nullable MType */
val* nit___nit__MAttributeDef___static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <self:MAttributeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttributeDef#static_mtype= for (self: MAttributeDef, nullable MType) */
void nit___nit__MAttributeDef___static_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val = p0; /* _static_mtype on <self:MAttributeDef> */
RET_LABEL:;
}
/* method model#MVirtualTypeDef#bound for (self: MVirtualTypeDef): nullable MType */
val* nit___nit__MVirtualTypeDef___bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#bound= for (self: MVirtualTypeDef, nullable MType) */
void nit___nit__MVirtualTypeDef___bound_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val = p0; /* _bound on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model#MVirtualTypeDef#is_fixed for (self: MVirtualTypeDef): Bool */
short int nit___nit__MVirtualTypeDef___is_fixed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#is_fixed= for (self: MVirtualTypeDef, Bool) */
void nit___nit__MVirtualTypeDef___is_fixed_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s = p0; /* _is_fixed on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model#MClassKind#to_s for (self: MClassKind): String */
val* nit___nit__MClassKind___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassKind___to_s].val; /* _to_s on <self:MClassKind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2365);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#to_s= for (self: MClassKind, String) */
void nit___nit__MClassKind___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassKind___to_s].val = p0; /* _to_s on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#need_init for (self: MClassKind): Bool */
short int nit___nit__MClassKind___need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MClassKind___need_init].s; /* _need_init on <self:MClassKind> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#need_init= for (self: MClassKind, Bool) */
void nit___nit__MClassKind___need_init_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MClassKind___need_init].s = p0; /* _need_init on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#can_specialize for (self: MClassKind, MClassKind): Bool */
short int nit___nit__MClassKind___can_specialize(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Sys */;
val* var6 /* : MClassKind */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : Sys */;
val* var9 /* : MClassKind */;
short int var10 /* : Bool */;
val* var11 /* : Sys */;
val* var12 /* : MClassKind */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Sys */;
val* var17 /* : MClassKind */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : Sys */;
val* var21 /* : MClassKind */;
short int var22 /* : Bool */;
var_other = p0;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__Sys__interface_kind]))(var1); /* interface_kind on <var1:Sys>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var_other->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other, var2); /* == on <var_other:MClassKind>*/
}
if (var3){
var = 1;
goto RET_LABEL;
} else {
}
var5 = glob_sys;
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model__Sys__interface_kind]))(var5); /* interface_kind on <var5:Sys>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var6); /* == on <self:MClassKind>*/
}
var_ = var7;
if (var7){
var4 = var_;
} else {
var8 = glob_sys;
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__model__Sys__enum_kind]))(var8); /* enum_kind on <var8:Sys>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var9); /* == on <self:MClassKind>*/
}
var4 = var10;
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
var11 = glob_sys;
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__Sys__extern_kind]))(var11); /* extern_kind on <var11:Sys>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var12); /* == on <self:MClassKind>*/
}
if (var13){
{
var14 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var_other); /* == on <self:MClassKind>*/
}
var = var14;
goto RET_LABEL;
} else {
var16 = glob_sys;
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__model__Sys__enum_kind]))(var16); /* enum_kind on <var16:Sys>*/
}
{
var18 = ((short int(*)(val* self, val* p0))(var_other->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other, var17); /* == on <var_other:MClassKind>*/
}
var_19 = var18;
if (var18){
var15 = var_19;
} else {
var20 = glob_sys;
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__Sys__extern_kind]))(var20); /* extern_kind on <var20:Sys>*/
}
{
var22 = ((short int(*)(val* self, val* p0))(var_other->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other, var21); /* == on <var_other:MClassKind>*/
}
var15 = var22;
}
if (var15){
var = 0;
goto RET_LABEL;
} else {
}
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassKind#init for (self: MClassKind) */
void nit___nit__MClassKind___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MClassKind___standard__kernel__Object__init]))(self); /* init on <self:MClassKind>*/
}
RET_LABEL:;
}
/* method model#Sys#abstract_kind for (self: Sys): MClassKind */
val* nit__model___standard__Sys___abstract_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "abstract class";
var6 = standard___standard__NativeString___to_s_with_length(var5, 14l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, 1); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Sys#concrete_kind for (self: Sys): MClassKind */
val* nit__model___standard__Sys___concrete_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "class";
var6 = standard___standard__NativeString___to_s_with_length(var5, 5l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, 1); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Sys#interface_kind for (self: Sys): MClassKind */
val* nit__model___standard__Sys___interface_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "interface";
var6 = standard___standard__NativeString___to_s_with_length(var5, 9l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Sys#enum_kind for (self: Sys): MClassKind */
val* nit__model___standard__Sys___enum_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "enum";
var6 = standard___standard__NativeString___to_s_with_length(var5, 4l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Sys#extern_kind for (self: Sys): MClassKind */
val* nit__model___standard__Sys___extern_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "extern class";
var6 = standard___standard__NativeString___to_s_with_length(var5, 12l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
