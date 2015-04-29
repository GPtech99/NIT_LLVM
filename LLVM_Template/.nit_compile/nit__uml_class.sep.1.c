#include "nit__uml_class.sep.0.h"
/* method uml_class#UMLModel#generate_class_uml for (self: UMLModel): Writable */
val* nit__uml_class___UMLModel___generate_class_uml(val* self) {
val* var /* : Writable */;
val* var1 /* : Template */;
val* var_tpl /* var tpl: Template */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : Model */;
val* var10 /* : ToolContext */;
val* var11 /* : MModule */;
val* var12 /* : Writable */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_tpl = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "digraph G {\n";
var4 = standard___standard__NativeString___to_s_with_length(var3, 12l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var2); /* add on <var_tpl:Template>*/
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\11fontname = \"Bitstream Vera Sans\"\n\11\11\11\11fontsize = 8\n\11\11\11\11node [\n\11\11\11\11\11fontname = \"Bitstream Vera Sans\"\n\11\11\11\11\11fontsize = 8\n\11\11\11\11\11shape = \"record\"\n\11\11\11\11]\n\n\11\11\11\11edge [\n\11\11\11\11\11fontname = \"Bitstream Vera Sans\"\n\11\11\11\11\11fontsize = 8\n\11\11\11\11]\n";
var8 = standard___standard__NativeString___to_s_with_length(var7, 220l);
var6 = var8;
varonce5 = var6;
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var6); /* add on <var_tpl:Template>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__uml_base__UMLModel__model]))(self); /* model on <self:UMLModel>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__uml_base__UMLModel__ctx]))(self); /* ctx on <self:UMLModel>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__uml_base__UMLModel__mainmodule]))(self); /* mainmodule on <self:UMLModel>*/
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(var9->class->vft[COLOR_nit__uml_class__Model__tpl_class]))(var9, var10, var11); /* tpl_class on <var9:Model>*/
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var12); /* add on <var_tpl:Template>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "}";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var14); /* add on <var_tpl:Template>*/
}
var = var_tpl;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#Model#tpl_class for (self: Model, ToolContext, MModule): Writable */
val* nit__uml_class___Model___tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Template */;
val* var_t /* var t: Template */;
val* var2 /* : Array[MClass] */;
val* var_ /* var : Array[MClass] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClass] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_i /* var i: MClass */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_10 /* var : Bool */;
val* var11 /* : MVisibility */;
val* var12 /* : MVisibility */;
short int var13 /* : Bool */;
val* var14 /* : Writable */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
var_ctx = p0;
var_main = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_t = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__Model__mclasses]))(self); /* mclasses on <self:Model>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClass]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClass]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClass]>*/
}
var_i = var6;
{
var8 = ((short int(*)(val* self))(var_ctx->class->vft[COLOR_nit__uml_base__ToolContext__private_gen]))(var_ctx); /* private_gen on <var_ctx:ToolContext>*/
}
var9 = !var8;
var_10 = var9;
if (var9){
{
var11 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nit__model__MClass__visibility]))(var_i); /* visibility on <var_i:MClass>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__public_visibility]))(self); /* public_visibility on <self:Model>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var11, var12); /* != on <var11:MVisibility>*/
}
var7 = var13;
} else {
var7 = var_10;
}
if (var7){
goto BREAK_label;
} else {
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(var_i->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var_i, var_ctx, var_main); /* tpl_class on <var_i:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var14); /* add on <var_t:Template>*/
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "\n";
var17 = standard___standard__NativeString___to_s_with_length(var16, 1l);
var15 = var17;
varonce = var15;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var15); /* add on <var_t:Template>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label18;
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClass]>*/
}
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#MEntity#tpl_class for (self: MEntity, ToolContext, MModule): Writable */
val* nit__uml_class___MEntity___tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "tpl_class", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_class, 59);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method uml_class#MClass#tpl_class for (self: MClass, ToolContext, MModule): Writable */
val* nit__uml_class___MClass___MEntity__tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Template */;
val* var_t /* var t: Template */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : Array[Object] */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
val* var9 /* : MClassKind */;
val* var10 /* : MClassKind */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : MClassKind */;
val* var21 /* : MClassKind */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
val* var28 /* : Array[Object] */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : Array[MParameterType] */;
val* var45 /* : nullable Object */;
val* var46 /* : String */;
long var_i /* var i: Int */;
val* var47 /* : Array[MParameterType] */;
long var48 /* : Int */;
long var_ /* var : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
val* var60 /* : Array[MParameterType] */;
val* var61 /* : nullable Object */;
val* var62 /* : String */;
long var63 /* : Int */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
short int var72 /* : Bool */;
val* var73 /* : MVisibility */;
val* var74 /* : Set[MProperty] */;
val* var_props /* var props: Collection[MProperty] */;
val* var75 /* : MVisibility */;
val* var76 /* : Set[MProperty] */;
val* var_77 /* var : Set[MProperty] */;
val* var78 /* : Iterator[nullable Object] */;
val* var_79 /* var : Iterator[MProperty] */;
short int var80 /* : Bool */;
val* var81 /* : nullable Object */;
val* var_i82 /* var i: MProperty */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
val* var86 /* : Writable */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
val* var96 /* : Set[MMethod] */;
val* var_97 /* var : Set[MMethod] */;
val* var98 /* : Iterator[nullable Object] */;
val* var_99 /* var : Iterator[MMethod] */;
short int var100 /* : Bool */;
val* var101 /* : nullable Object */;
val* var_i102 /* var i: MMethod */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var_106 /* var : Bool */;
val* var107 /* : MVisibility */;
val* var108 /* : MVisibility */;
short int var109 /* : Bool */;
val* var111 /* : Writable */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
val* var121 /* : POSetElement[MClass] */;
val* var122 /* : Collection[nullable Object] */;
val* var_g /* var g: Collection[MClass] */;
val* var_123 /* var : Collection[MClass] */;
val* var124 /* : Iterator[nullable Object] */;
val* var_125 /* var : Iterator[MClass] */;
short int var126 /* : Bool */;
val* var127 /* : nullable Object */;
val* var_i128 /* var i: MClass */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var_132 /* var : Bool */;
val* var133 /* : MVisibility */;
val* var134 /* : MVisibility */;
short int var135 /* : Bool */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : FlatString */;
val* var147 /* : Array[Object] */;
val* var148 /* : NativeArray[Object] */;
val* var149 /* : String */;
val* var150 /* : MClassKind */;
val* var151 /* : MClassKind */;
short int var152 /* : Bool */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : FlatString */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
val* var160 /* : FlatString */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
val* var164 /* : FlatString */;
var_ctx = p0;
var_main = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_t = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = " [\n label = \"{";
var5 = standard___standard__NativeString___to_s_with_length(var4, 14l);
var3 = var5;
varonce = var3;
}
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var6 = array_instance Array[Object] */
var7 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var7)->values[0] = (val*) var2;
((struct instance_standard__NativeArray*)var7)->values[1] = (val*) var3;
{
((void(*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_standard__array__Array__with_native]))(var6, var7, 2l); /* with_native on <var6:Array[Object]>*/
}
}
{
var8 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__Object__to_s]))(var6); /* to_s on <var6:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var8); /* add on <var_t:Template>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__kind]))(self); /* kind on <self:MClass>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__Object__abstract_kind]))(self); /* abstract_kind on <self:MClass>*/
}
{
var11 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var10); /* == on <var9:MClassKind>*/
}
if (var11){
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "abstract\\n";
var15 = standard___standard__NativeString___to_s_with_length(var14, 10l);
var13 = var15;
varonce12 = var13;
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
var17 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var17 = array_instance Array[Object] */
var18 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var18)->values[0] = (val*) var13;
((struct instance_standard__NativeArray*)var18)->values[1] = (val*) var16;
{
((void(*)(val* self, val* p0, long p1))(var17->class->vft[COLOR_standard__array__Array__with_native]))(var17, var18, 2l); /* with_native on <var17:Array[Object]>*/
}
}
{
var19 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__Object__to_s]))(var17); /* to_s on <var17:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var19); /* add on <var_t:Template>*/
}
} else {
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__kind]))(self); /* kind on <self:MClass>*/
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__Object__interface_kind]))(self); /* interface_kind on <self:MClass>*/
}
{
var22 = ((short int(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var21); /* == on <var20:MClassKind>*/
}
if (var22){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "interface\\n";
var26 = standard___standard__NativeString___to_s_with_length(var25, 11l);
var24 = var26;
varonce23 = var24;
}
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
var28 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var28 = array_instance Array[Object] */
var29 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var24;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var27;
{
((void(*)(val* self, val* p0, long p1))(var28->class->vft[COLOR_standard__array__Array__with_native]))(var28, var29, 2l); /* with_native on <var28:Array[Object]>*/
}
}
{
var30 = ((val*(*)(val* self))(var28->class->vft[COLOR_standard__string__Object__to_s]))(var28); /* to_s on <var28:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var30); /* add on <var_t:Template>*/
}
} else {
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var32 = array_instance Array[Object] */
var33 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var33)->values[0] = (val*) var31;
{
((void(*)(val* self, val* p0, long p1))(var32->class->vft[COLOR_standard__array__Array__with_native]))(var32, var33, 1l); /* with_native on <var32:Array[Object]>*/
}
}
{
var34 = ((val*(*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32); /* to_s on <var32:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var34); /* add on <var_t:Template>*/
}
}
}
{
var35 = ((long(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__arity]))(self); /* arity on <self:MClass>*/
}
{
{ /* Inline kernel#Int#> (var35,0l) on <var35:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var38 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var39 = var35 > 0l;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "[";
var43 = standard___standard__NativeString___to_s_with_length(var42, 1l);
var41 = var43;
varonce40 = var41;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var41); /* add on <var_t:Template>*/
}
{
var44 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mparameters]))(self); /* mparameters on <self:MClass>*/
}
{
var45 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var44); /* first on <var44:Array[MParameterType]>*/
}
{
var46 = ((val*(*)(val* self))(var45->class->vft[COLOR_nit__model_base__MEntity__name]))(var45); /* name on <var45:nullable Object(MParameterType)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var46); /* add on <var_t:Template>*/
}
var_i = 1l;
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mparameters]))(self); /* mparameters on <self:MClass>*/
}
{
var48 = ((long(*)(val* self))(var47->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var47); /* length on <var47:Array[MParameterType]>*/
}
var_ = var48;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var51 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var55 = var_i < var_;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = ", ";
var59 = standard___standard__NativeString___to_s_with_length(var58, 2l);
var57 = var59;
varonce56 = var57;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var57); /* add on <var_t:Template>*/
}
{
var60 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mparameters]))(self); /* mparameters on <self:MClass>*/
}
{
var61 = ((val*(*)(val* self, long p0))(var60->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var60, var_i); /* [] on <var60:Array[MParameterType]>*/
}
{
var62 = ((val*(*)(val* self))(var61->class->vft[COLOR_nit__model_base__MEntity__name]))(var61); /* name on <var61:nullable Object(MParameterType)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var62); /* add on <var_t:Template>*/
}
var63 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var63;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "]";
var67 = standard___standard__NativeString___to_s_with_length(var66, 1l);
var65 = var67;
varonce64 = var65;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var65); /* add on <var_t:Template>*/
}
} else {
}
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "|";
var71 = standard___standard__NativeString___to_s_with_length(var70, 1l);
var69 = var71;
varonce68 = var69;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var69); /* add on <var_t:Template>*/
}
{
var72 = ((short int(*)(val* self))(var_ctx->class->vft[COLOR_nit__uml_base__ToolContext__private_gen]))(var_ctx); /* private_gen on <var_ctx:ToolContext>*/
}
if (var72){
{
var73 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__none_visibility]))(self); /* none_visibility on <self:MClass>*/
}
{
var74 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model_utils__MClass__intro_mproperties]))(self, var73); /* intro_mproperties on <self:MClass>*/
}
var_props = var74;
} else {
{
var75 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__public_visibility]))(self); /* public_visibility on <self:MClass>*/
}
{
var76 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model_utils__MClass__intro_mproperties]))(self, var75); /* intro_mproperties on <self:MClass>*/
}
var_props = var76;
}
var_77 = var_props;
{
var78 = ((val*(*)(val* self))((((long)var_77&3)?class_info[((long)var_77&3)]:var_77->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_77); /* iterator on <var_77:Set[MProperty]>*/
}
var_79 = var78;
for(;;) {
{
var80 = ((short int(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_79); /* is_ok on <var_79:Iterator[MProperty]>*/
}
if (var80){
{
var81 = ((val*(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_79); /* item on <var_79:Iterator[MProperty]>*/
}
var_i82 = var81;
/* <var_i82:MProperty> isa MAttribute */
cltype84 = type_nit__MAttribute.color;
idtype85 = type_nit__MAttribute.id;
if(cltype84 >= var_i82->type->table_size) {
var83 = 0;
} else {
var83 = var_i82->type->type_table[cltype84] == idtype85;
}
if (var83){
{
var86 = ((val*(*)(val* self, val* p0, val* p1))(var_i82->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var_i82, var_ctx, var_main); /* tpl_class on <var_i82:MProperty(MAttribute)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var86); /* add on <var_t:Template>*/
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "\\l";
var90 = standard___standard__NativeString___to_s_with_length(var89, 2l);
var88 = var90;
varonce87 = var88;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var88); /* add on <var_t:Template>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_79); /* next on <var_79:Iterator[MProperty]>*/
}
} else {
goto BREAK_label91;
}
}
BREAK_label91: (void)0;
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_79); /* finish on <var_79:Iterator[MProperty]>*/
}
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "|";
var95 = standard___standard__NativeString___to_s_with_length(var94, 1l);
var93 = var95;
varonce92 = var93;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var93); /* add on <var_t:Template>*/
}
{
var96 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_utils__MClass__intro_methods]))(self); /* intro_methods on <self:MClass>*/
}
var_97 = var96;
{
var98 = ((val*(*)(val* self))((((long)var_97&3)?class_info[((long)var_97&3)]:var_97->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_97); /* iterator on <var_97:Set[MMethod]>*/
}
var_99 = var98;
for(;;) {
{
var100 = ((short int(*)(val* self))((((long)var_99&3)?class_info[((long)var_99&3)]:var_99->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_99); /* is_ok on <var_99:Iterator[MMethod]>*/
}
if (var100){
{
var101 = ((val*(*)(val* self))((((long)var_99&3)?class_info[((long)var_99&3)]:var_99->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_99); /* item on <var_99:Iterator[MMethod]>*/
}
var_i102 = var101;
{
var104 = ((short int(*)(val* self))(var_ctx->class->vft[COLOR_nit__uml_base__ToolContext__private_gen]))(var_ctx); /* private_gen on <var_ctx:ToolContext>*/
}
var105 = !var104;
var_106 = var105;
if (var105){
{
var107 = ((val*(*)(val* self))(var_i102->class->vft[COLOR_nit__model__MProperty__visibility]))(var_i102); /* visibility on <var_i102:MMethod>*/
}
{
var108 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__public_visibility]))(self); /* public_visibility on <self:MClass>*/
}
{
var109 = ((short int(*)(val* self, val* p0))(var107->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var107, var108); /* != on <var107:MVisibility>*/
}
var103 = var109;
} else {
var103 = var_106;
}
if (var103){
goto BREAK_label110;
} else {
}
{
var111 = ((val*(*)(val* self, val* p0, val* p1))(var_i102->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var_i102, var_ctx, var_main); /* tpl_class on <var_i102:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var111); /* add on <var_t:Template>*/
}
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "\\l";
var115 = standard___standard__NativeString___to_s_with_length(var114, 2l);
var113 = var115;
varonce112 = var113;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var113); /* add on <var_t:Template>*/
}
BREAK_label110: (void)0;
{
((void(*)(val* self))((((long)var_99&3)?class_info[((long)var_99&3)]:var_99->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_99); /* next on <var_99:Iterator[MMethod]>*/
}
} else {
goto BREAK_label116;
}
}
BREAK_label116: (void)0;
{
((void(*)(val* self))((((long)var_99&3)?class_info[((long)var_99&3)]:var_99->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_99); /* finish on <var_99:Iterator[MMethod]>*/
}
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "}\"\n]\n";
var120 = standard___standard__NativeString___to_s_with_length(var119, 5l);
var118 = var120;
varonce117 = var118;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var118); /* add on <var_t:Template>*/
}
{
var121 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClass__in_hierarchy]))(self, var_main); /* in_hierarchy on <self:MClass>*/
}
{
var122 = ((val*(*)(val* self))(var121->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var121); /* direct_greaters on <var121:POSetElement[MClass]>*/
}
var_g = var122;
var_123 = var_g;
{
var124 = ((val*(*)(val* self))((((long)var_123&3)?class_info[((long)var_123&3)]:var_123->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_123); /* iterator on <var_123:Collection[MClass]>*/
}
var_125 = var124;
for(;;) {
{
var126 = ((short int(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_125); /* is_ok on <var_125:Iterator[MClass]>*/
}
if (var126){
{
var127 = ((val*(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_125); /* item on <var_125:Iterator[MClass]>*/
}
var_i128 = var127;
{
var130 = ((short int(*)(val* self))(var_ctx->class->vft[COLOR_nit__uml_base__ToolContext__private_gen]))(var_ctx); /* private_gen on <var_ctx:ToolContext>*/
}
var131 = !var130;
var_132 = var131;
if (var131){
{
var133 = ((val*(*)(val* self))(var_i128->class->vft[COLOR_nit__model__MClass__visibility]))(var_i128); /* visibility on <var_i128:MClass>*/
}
{
var134 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__public_visibility]))(self); /* public_visibility on <self:MClass>*/
}
{
var135 = ((short int(*)(val* self, val* p0))(var133->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var133, var134); /* != on <var133:MVisibility>*/
}
var129 = var135;
} else {
var129 = var_132;
}
if (var129){
goto BREAK_label136;
} else {
}
{
var137 = ((val*(*)(val* self))(var_i128->class->vft[COLOR_nit__model_base__MEntity__name]))(var_i128); /* name on <var_i128:MClass>*/
}
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = " -> ";
var141 = standard___standard__NativeString___to_s_with_length(var140, 4l);
var139 = var141;
varonce138 = var139;
}
{
var142 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = " [dir=back";
var146 = standard___standard__NativeString___to_s_with_length(var145, 10l);
var144 = var146;
varonce143 = var144;
}
var147 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var147 = array_instance Array[Object] */
var148 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var148)->values[0] = (val*) var137;
((struct instance_standard__NativeArray*)var148)->values[1] = (val*) var139;
((struct instance_standard__NativeArray*)var148)->values[2] = (val*) var142;
((struct instance_standard__NativeArray*)var148)->values[3] = (val*) var144;
{
((void(*)(val* self, val* p0, long p1))(var147->class->vft[COLOR_standard__array__Array__with_native]))(var147, var148, 4l); /* with_native on <var147:Array[Object]>*/
}
}
{
var149 = ((val*(*)(val* self))(var147->class->vft[COLOR_standard__string__Object__to_s]))(var147); /* to_s on <var147:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var149); /* add on <var_t:Template>*/
}
{
var150 = ((val*(*)(val* self))(var_i128->class->vft[COLOR_nit__model__MClass__kind]))(var_i128); /* kind on <var_i128:MClass>*/
}
{
var151 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__Object__interface_kind]))(self); /* interface_kind on <self:MClass>*/
}
{
var152 = ((short int(*)(val* self, val* p0))(var150->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var150, var151); /* == on <var150:MClassKind>*/
}
if (var152){
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = " arrowtail=open style=dashed";
var156 = standard___standard__NativeString___to_s_with_length(var155, 28l);
var154 = var156;
varonce153 = var154;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var154); /* add on <var_t:Template>*/
}
} else {
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = " arrowtail=empty";
var160 = standard___standard__NativeString___to_s_with_length(var159, 16l);
var158 = var160;
varonce157 = var158;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var158); /* add on <var_t:Template>*/
}
}
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "];\n";
var164 = standard___standard__NativeString___to_s_with_length(var163, 3l);
var162 = var164;
varonce161 = var162;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var162); /* add on <var_t:Template>*/
}
BREAK_label136: (void)0;
{
((void(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_125); /* next on <var_125:Iterator[MClass]>*/
}
} else {
goto BREAK_label165;
}
}
BREAK_label165: (void)0;
{
((void(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_125); /* finish on <var_125:Iterator[MClass]>*/
}
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#MMethod#tpl_class for (self: MMethod, ToolContext, MModule): Writable */
val* nit__uml_class___MMethod___MEntity__tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Template */;
val* var_tpl /* var tpl: Template */;
val* var2 /* : MVisibility */;
val* var3 /* : Writable */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var9 /* : MPropDef */;
val* var10 /* : nullable MSignature */;
val* var11 /* : Writable */;
var_ctx = p0;
var_main = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_tpl = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__visibility]))(self); /* visibility on <self:MMethod>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__uml_class__MVisibility__tpl_class]))(var2); /* tpl_class on <var2:MVisibility>*/
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var3); /* add on <var_tpl:Template>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = " ";
var6 = standard___standard__NativeString___to_s_with_length(var5, 1l);
var4 = var6;
varonce = var4;
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var4); /* add on <var_tpl:Template>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MMethod>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_standard__string__Text__escape_to_dot]))(var7); /* escape_to_dot on <var7:String>*/
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var8); /* add on <var_tpl:Template>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro]))(self); /* intro on <self:MMethod>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var9); /* msignature on <var9:MPropDef(MMethodDef)>*/
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_class, 126);
fatal_exit(1);
} else {
var11 = ((val*(*)(val* self, val* p0, val* p1))(var10->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var10, var_ctx, var_main); /* tpl_class on <var10:nullable MSignature>*/
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var11); /* add on <var_tpl:Template>*/
}
var = var_tpl;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#MSignature#tpl_class for (self: MSignature, ToolContext, MModule): Writable */
val* nit__uml_class___MSignature___MEntity__tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Template */;
val* var_t /* var t: Template */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : Array[MParameter] */;
val* var_params /* var params: Array[MParameter] */;
val* var6 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[MParameter] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_i /* var i: MParameter */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : nullable Object */;
val* var23 /* : MType */;
val* var24 /* : Writable */;
long var_i25 /* var i: Int */;
long var26 /* : Int */;
long var_27 /* var : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : nullable Object */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : nullable Object */;
val* var46 /* : MType */;
val* var47 /* : Writable */;
long var48 /* : Int */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
val* var54 /* : nullable MType */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : nullable MType */;
val* var62 /* : Writable */;
var_ctx = p0;
var_main = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_t = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "(";
var4 = standard___standard__NativeString___to_s_with_length(var3, 1l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var2); /* add on <var_t:Template>*/
}
var5 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[MParameter]>*/
}
var_params = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__mparameters]))(self); /* mparameters on <self:MSignature>*/
}
var_ = var6;
{
var7 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MParameter]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:ArrayIterator[MParameter]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:ArrayIterator[MParameter]>*/
}
var_i = var10;
{
((void(*)(val* self, val* p0))(var_params->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_params, var_i); /* add on <var_params:Array[MParameter]>*/
}
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:ArrayIterator[MParameter]>*/
}
{
var11 = ((long(*)(val* self))(var_params->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_params); /* length on <var_params:Array[MParameter]>*/
}
{
{ /* Inline kernel#Int#> (var11,0l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var15 = var11 > 0l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
var16 = ((val*(*)(val* self))(var_params->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_params); /* first on <var_params:Array[MParameter]>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__model_base__MEntity__name]))(var16); /* name on <var16:nullable Object(MParameter)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var17); /* add on <var_t:Template>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ": ";
var21 = standard___standard__NativeString___to_s_with_length(var20, 2l);
var19 = var21;
varonce18 = var19;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var19); /* add on <var_t:Template>*/
}
{
var22 = ((val*(*)(val* self))(var_params->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_params); /* first on <var_params:Array[MParameter]>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__model__MParameter__mtype]))(var22); /* mtype on <var22:nullable Object(MParameter)>*/
}
{
var24 = ((val*(*)(val* self, val* p0, val* p1))(var23->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var23, var_ctx, var_main); /* tpl_class on <var23:MType>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var24); /* add on <var_t:Template>*/
}
var_i25 = 1l;
{
var26 = ((long(*)(val* self))(var_params->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_params); /* length on <var_params:Array[MParameter]>*/
}
var_27 = var26;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i25,var_27) on <var_i25:Int> */
/* Covariant cast for argument 0 (i) <var_27:Int> isa OTHER */
/* <var_27:Int> isa OTHER */
var30 = 1; /* easy <var_27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var34 = var_i25 < var_27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ", ";
var38 = standard___standard__NativeString___to_s_with_length(var37, 2l);
var36 = var38;
varonce35 = var36;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var36); /* add on <var_t:Template>*/
}
{
var39 = ((val*(*)(val* self, long p0))(var_params->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_params, var_i25); /* [] on <var_params:Array[MParameter]>*/
}
{
var40 = ((val*(*)(val* self))(var39->class->vft[COLOR_nit__model_base__MEntity__name]))(var39); /* name on <var39:nullable Object(MParameter)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var40); /* add on <var_t:Template>*/
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ": ";
var44 = standard___standard__NativeString___to_s_with_length(var43, 2l);
var42 = var44;
varonce41 = var42;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var42); /* add on <var_t:Template>*/
}
{
var45 = ((val*(*)(val* self, long p0))(var_params->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_params, var_i25); /* [] on <var_params:Array[MParameter]>*/
}
{
var46 = ((val*(*)(val* self))(var45->class->vft[COLOR_nit__model__MParameter__mtype]))(var45); /* mtype on <var45:nullable Object(MParameter)>*/
}
{
var47 = ((val*(*)(val* self, val* p0, val* p1))(var46->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var46, var_ctx, var_main); /* tpl_class on <var46:MType>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var47); /* add on <var_t:Template>*/
}
var48 = standard___standard__Int___Discrete__successor(var_i25, 1l);
var_i25 = var48;
} else {
goto BREAK_label49;
}
}
BREAK_label49: (void)0;
} else {
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ")";
var53 = standard___standard__NativeString___to_s_with_length(var52, 1l);
var51 = var53;
varonce50 = var51;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var51); /* add on <var_t:Template>*/
}
{
var54 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__return_mtype]))(self); /* return_mtype on <self:MSignature>*/
}
if (var54 == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (0) {
var56 = ((short int(*)(val* self, val* p0))(var54->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var54, ((val*)NULL)); /* != on <var54:nullable MType>*/
var55 = var56;
}
if (var55){
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = ": ";
var60 = standard___standard__NativeString___to_s_with_length(var59, 2l);
var58 = var60;
varonce57 = var58;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var58); /* add on <var_t:Template>*/
}
{
var61 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MSignature__return_mtype]))(self); /* return_mtype on <self:MSignature>*/
}
if (var61 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_class, 154);
fatal_exit(1);
} else {
var62 = ((val*(*)(val* self, val* p0, val* p1))(var61->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var61, var_ctx, var_main); /* tpl_class on <var61:nullable MType>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var62); /* add on <var_t:Template>*/
}
} else {
}
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#MAttribute#tpl_class for (self: MAttribute, ToolContext, MModule): Writable */
val* nit__uml_class___MAttribute___MEntity__tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Template */;
val* var_tpl /* var tpl: Template */;
val* var2 /* : MVisibility */;
val* var3 /* : Writable */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : MPropDef */;
val* var13 /* : nullable MType */;
val* var14 /* : Writable */;
var_ctx = p0;
var_main = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_tpl = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__visibility]))(self); /* visibility on <self:MAttribute>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__uml_class__MVisibility__tpl_class]))(var2); /* tpl_class on <var2:MVisibility>*/
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var3); /* add on <var_tpl:Template>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = " ";
var6 = standard___standard__NativeString___to_s_with_length(var5, 1l);
var4 = var6;
varonce = var4;
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var4); /* add on <var_tpl:Template>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var7); /* add on <var_tpl:Template>*/
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = ": ";
var11 = standard___standard__NativeString___to_s_with_length(var10, 2l);
var9 = var11;
varonce8 = var9;
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var9); /* add on <var_tpl:Template>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro]))(self); /* intro on <self:MAttribute>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var12); /* static_mtype on <var12:MPropDef(MAttributeDef)>*/
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_class, 167);
fatal_exit(1);
} else {
var14 = ((val*(*)(val* self, val* p0, val* p1))(var13->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var13, var_ctx, var_main); /* tpl_class on <var13:nullable MType>*/
}
{
((void(*)(val* self, val* p0))(var_tpl->class->vft[COLOR_template__Template__add]))(var_tpl, var14); /* add on <var_tpl:Template>*/
}
var = var_tpl;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#MVisibility#tpl_class for (self: MVisibility): Writable */
val* nit__uml_class___MVisibility___tpl_class(val* self) {
val* var /* : Writable */;
val* var1 /* : MVisibility */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MVisibility */;
short int var7 /* : Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : MVisibility */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__private_visibility]))(self); /* private_visibility on <self:MVisibility>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var1); /* == on <self:MVisibility>*/
}
if (var2){
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "-";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce = var3;
}
var = var3;
goto RET_LABEL;
} else {
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__protected_visibility]))(self); /* protected_visibility on <self:MVisibility>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var6); /* == on <self:MVisibility>*/
}
if (var7){
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "#";
var11 = standard___standard__NativeString___to_s_with_length(var10, 1l);
var9 = var11;
varonce8 = var9;
}
var = var9;
goto RET_LABEL;
} else {
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__public_visibility]))(self); /* public_visibility on <self:MVisibility>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var12); /* == on <self:MVisibility>*/
}
if (var13){
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "+";
var17 = standard___standard__NativeString___to_s_with_length(var16, 1l);
var15 = var17;
varonce14 = var15;
}
var = var15;
goto RET_LABEL;
} else {
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "+";
var21 = standard___standard__NativeString___to_s_with_length(var20, 1l);
var19 = var21;
varonce18 = var19;
}
var = var19;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method uml_class#MClassType#tpl_class for (self: MClassType, ToolContext, MModule): Writable */
val* nit__uml_class___MClassType___MEntity__tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_c /* var c: ToolContext */;
val* var_m /* var m: MModule */;
val* var1 /* : String */;
var_c = p0;
var_m = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClassType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#MGenericType#tpl_class for (self: MGenericType, ToolContext, MModule): Writable */
val* nit__uml_class___MGenericType___MEntity__tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_c /* var c: ToolContext */;
val* var_m /* var m: MModule */;
val* var1 /* : Template */;
val* var_t /* var t: Template */;
val* var2 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
val* var5 /* : Text */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : Array[MType] */;
val* var10 /* : nullable Object */;
val* var11 /* : Writable */;
long var_i /* var i: Int */;
val* var12 /* : Array[MType] */;
long var13 /* : Int */;
long var_ /* var : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : Array[MType] */;
val* var23 /* : nullable Object */;
val* var24 /* : Writable */;
long var25 /* : Int */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
var_c = p0;
var_m = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_t = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MGenericType>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MGenericType>*/
}
{
var4 = ((long(*)(val* self, char p0))(var3->class->vft[COLOR_standard__string__Text__index_of]))(var3, '['); /* index_of on <var3:String>*/
}
{
var5 = ((val*(*)(val* self, long p0, long p1))(var2->class->vft[COLOR_standard__string__Text__substring]))(var2, 0l, var4); /* substring on <var2:String>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var5); /* add on <var_t:Template>*/
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "[";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var6); /* add on <var_t:Template>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var9); /* first on <var9:Array[MType]>*/
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(var10->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var10, var_c, var_m); /* tpl_class on <var10:nullable Object(MType)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var11); /* add on <var_t:Template>*/
}
var_i = 1l;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
{
var13 = ((long(*)(val* self))(var12->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var12); /* length on <var12:Array[MType]>*/
}
var_ = var13;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var16 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var17 = var_i < var_;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ", ";
var21 = standard___standard__NativeString___to_s_with_length(var20, 2l);
var19 = var21;
varonce18 = var19;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var19); /* add on <var_t:Template>*/
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassType__arguments]))(self); /* arguments on <self:MGenericType>*/
}
{
var23 = ((val*(*)(val* self, long p0))(var22->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var22, var_i); /* [] on <var22:Array[MType]>*/
}
{
var24 = ((val*(*)(val* self, val* p0, val* p1))(var23->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var23, var_c, var_m); /* tpl_class on <var23:nullable Object(MType)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var24); /* add on <var_t:Template>*/
}
var25 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var25;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "]";
var29 = standard___standard__NativeString___to_s_with_length(var28, 1l);
var27 = var29;
varonce26 = var27;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var27); /* add on <var_t:Template>*/
}
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#MParameterType#tpl_class for (self: MParameterType, ToolContext, MModule): Writable */
val* nit__uml_class___MParameterType___MEntity__tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_c /* var c: ToolContext */;
val* var_m /* var m: MModule */;
val* var1 /* : String */;
var_c = p0;
var_m = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MParameterType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#MVirtualType#tpl_class for (self: MVirtualType, ToolContext, MModule): Writable */
val* nit__uml_class___MVirtualType___MEntity__tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_c /* var c: ToolContext */;
val* var_m /* var m: MModule */;
val* var1 /* : String */;
var_c = p0;
var_m = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MVirtualType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_class#MNullableType#tpl_class for (self: MNullableType, ToolContext, MModule): Writable */
val* nit__uml_class___MNullableType___MEntity__tpl_class(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_c /* var c: ToolContext */;
val* var_m /* var m: MModule */;
val* var1 /* : Template */;
val* var_t /* var t: Template */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : MType */;
val* var6 /* : Writable */;
var_c = p0;
var_m = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_t = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "nullable ";
var4 = standard___standard__NativeString___to_s_with_length(var3, 9l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var2); /* add on <var_t:Template>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MNullableType__mtype]))(self); /* mtype on <self:MNullableType>*/
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(var5->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var5, var_c, var_m); /* tpl_class on <var5:MType>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var6); /* add on <var_t:Template>*/
}
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
