#include "nit__uml_module.sep.0.h"
/* method uml_module#UMLModel#generate_package_uml for (self: UMLModel): Writable */
val* nit__uml_module___UMLModel___generate_package_uml(val* self) {
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
var7 = "\11fontname = \"Bitstream Vera Sans\"\n\11\11\11fontsize = 8\n\11\11\11node [\n\11\11\11\11fontname = \"Bitstream Vera Sans\"\n\11\11\11\11fontsize = 8\n\11\11\11\11shape = \"record\"\n\11\11\11]\n\11\11\11edge [\n\11\11\11\11fontname = \"Bitstream Vera Sans\"\n\11\11\11\11fontsize = 8\n\11\11\11]\n";
var8 = standard___standard__NativeString___to_s_with_length(var7, 209l);
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
var12 = ((val*(*)(val* self, val* p0, val* p1))(var9->class->vft[COLOR_nit__uml_module__Model__tpl_module]))(var9, var10, var11); /* tpl_module on <var9:Model>*/
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
/* method uml_module#Model#tpl_module for (self: Model, ToolContext, MModule): Writable */
val* nit__uml_module___Model___tpl_module(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Writable */;
var_ctx = p0;
var_main = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(var_main->class->vft[COLOR_nit__uml_module__MEntity__tpl_module]))(var_main, var_ctx, var_main); /* tpl_module on <var_main:MModule>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_module#MModule#tpl_module for (self: MModule, ToolContext, MModule): Writable */
val* nit__uml_module___MModule___MEntity__tpl_module(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Template */;
val* var_t /* var t: Template */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : Array[Object] */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : Array[Object] */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
val* var25 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_27 /* var : ArrayIterator[MClassDef] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_i /* var i: MClassDef */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var_33 /* var : Bool */;
val* var34 /* : MClass */;
val* var35 /* : MVisibility */;
val* var36 /* : MVisibility */;
short int var37 /* : Bool */;
val* var38 /* : Writable */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
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
var3 = "subgraph cluster";
var4 = standard___standard__NativeString___to_s_with_length(var3, 16l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " {\n";
var9 = standard___standard__NativeString___to_s_with_length(var8, 3l);
var7 = var9;
varonce6 = var7;
}
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var10 = array_instance Array[Object] */
var11 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var11)->values[0] = (val*) var2;
((struct instance_standard__NativeArray*)var11)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var11)->values[2] = (val*) var7;
{
((void(*)(val* self, val* p0, long p1))(var10->class->vft[COLOR_standard__array__Array__with_native]))(var10, var11, 3l); /* with_native on <var10:Array[Object]>*/
}
}
{
var12 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__Object__to_s]))(var10); /* to_s on <var10:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var12); /* add on <var_t:Template>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "label = \"";
var16 = standard___standard__NativeString___to_s_with_length(var15, 9l);
var14 = var16;
varonce13 = var14;
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MModule>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\"\n";
var21 = standard___standard__NativeString___to_s_with_length(var20, 2l);
var19 = var21;
varonce18 = var19;
}
var22 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var22 = array_instance Array[Object] */
var23 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var23)->values[0] = (val*) var14;
((struct instance_standard__NativeArray*)var23)->values[1] = (val*) var17;
((struct instance_standard__NativeArray*)var23)->values[2] = (val*) var19;
{
((void(*)(val* self, val* p0, long p1))(var22->class->vft[COLOR_standard__array__Array__with_native]))(var22, var23, 3l); /* with_native on <var22:Array[Object]>*/
}
}
{
var24 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__Object__to_s]))(var22); /* to_s on <var22:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var24); /* add on <var_t:Template>*/
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__mclassdefs]))(self); /* mclassdefs on <self:MModule>*/
}
var_ = var25;
{
var26 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_27 = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))(var_27->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_27); /* is_ok on <var_27:ArrayIterator[MClassDef]>*/
}
if (var28){
{
var29 = ((val*(*)(val* self))(var_27->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_27); /* item on <var_27:ArrayIterator[MClassDef]>*/
}
var_i = var29;
{
var31 = ((short int(*)(val* self))(var_ctx->class->vft[COLOR_nit__uml_base__ToolContext__private_gen]))(var_ctx); /* private_gen on <var_ctx:ToolContext>*/
}
var32 = !var31;
var_33 = var32;
if (var32){
{
var34 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_i); /* mclass on <var_i:MClassDef>*/
}
{
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_nit__model__MClass__visibility]))(var34); /* visibility on <var34:MClass>*/
}
{
var36 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__public_visibility]))(self); /* public_visibility on <self:MModule>*/
}
{
var37 = ((short int(*)(val* self, val* p0))(var35->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var35, var36); /* != on <var35:MVisibility>*/
}
var30 = var37;
} else {
var30 = var_33;
}
if (var30){
goto BREAK_label;
} else {
}
{
var38 = ((val*(*)(val* self, val* p0, val* p1))(var_i->class->vft[COLOR_nit__uml_module__MEntity__tpl_module]))(var_i, var_ctx, var_main); /* tpl_module on <var_i:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var38); /* add on <var_t:Template>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_27->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_27); /* next on <var_27:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
((void(*)(val* self))(var_27->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_27); /* finish on <var_27:ArrayIterator[MClassDef]>*/
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "}\n";
var43 = standard___standard__NativeString___to_s_with_length(var42, 2l);
var41 = var43;
varonce40 = var41;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var41); /* add on <var_t:Template>*/
}
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_module#MEntity#tpl_module for (self: MEntity, ToolContext, MModule): Writable */
val* nit__uml_module___MEntity___tpl_module(val* self, val* p0, val* p1) {
val* var /* : Writable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "tpl_module", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_module, 65);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method uml_module#MClassDef#intro_colour for (self: MClassDef): String */
val* nit__uml_module___MClassDef___intro_colour(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__uml_module__MClassDef___intro_colour].val; /* _intro_colour on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_colour");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_module, 71);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method uml_module#MClassDef#intro_colour= for (self: MClassDef, String) */
void nit__uml_module___MClassDef___intro_colour_61d(val* self, val* p0) {
self->attrs[COLOR_nit__uml_module__MClassDef___intro_colour].val = p0; /* _intro_colour on <self:MClassDef> */
RET_LABEL:;
}
/* method uml_module#MClassDef#redef_colour for (self: MClassDef): String */
val* nit__uml_module___MClassDef___redef_colour(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__uml_module__MClassDef___redef_colour].val; /* _redef_colour on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _redef_colour");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_module, 76);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method uml_module#MClassDef#redef_colour= for (self: MClassDef, String) */
void nit__uml_module___MClassDef___redef_colour_61d(val* self, val* p0) {
self->attrs[COLOR_nit__uml_module__MClassDef___redef_colour].val = p0; /* _redef_colour on <self:MClassDef> */
RET_LABEL:;
}
/* method uml_module#MClassDef#tpl_module for (self: MClassDef, ToolContext, MModule): Writable */
val* nit__uml_module___MClassDef___MEntity__tpl_module(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Template */;
val* var_t /* var t: Template */;
val* var2 /* : MModule */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : Array[Object] */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
val* var10 /* : MClass */;
val* var11 /* : MClassKind */;
val* var12 /* : MClassKind */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
val* var22 /* : MClass */;
val* var23 /* : MClassKind */;
val* var24 /* : MClassKind */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : Array[Object] */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
val* var38 /* : MClass */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
val* var48 /* : MClass */;
val* var49 /* : Array[MParameterType] */;
val* var_mparameters /* var mparameters: Array[MParameterType] */;
val* var50 /* : nullable Object */;
val* var51 /* : String */;
long var_i /* var i: Int */;
long var52 /* : Int */;
long var_ /* var : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : nullable Object */;
val* var65 /* : String */;
long var66 /* : Int */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
val* var75 /* : Array[MPropDef] */;
val* var_76 /* var : Array[MPropDef] */;
val* var77 /* : Iterator[nullable Object] */;
val* var_78 /* var : ArrayIterator[MPropDef] */;
short int var79 /* : Bool */;
val* var80 /* : nullable Object */;
val* var_i81 /* var i: MPropDef */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var_90 /* var : Bool */;
val* var91 /* : MProperty */;
val* var92 /* : MVisibility */;
val* var93 /* : MVisibility */;
short int var94 /* : Bool */;
val* var95 /* : Writable */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : FlatString */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : FlatString */;
val* var105 /* : Array[MPropDef] */;
val* var_106 /* var : Array[MPropDef] */;
val* var107 /* : Iterator[nullable Object] */;
val* var_108 /* var : ArrayIterator[MPropDef] */;
short int var109 /* : Bool */;
val* var110 /* : nullable Object */;
val* var_i111 /* var i: MPropDef */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var_120 /* var : Bool */;
val* var121 /* : MProperty */;
val* var122 /* : MVisibility */;
val* var123 /* : MVisibility */;
short int var124 /* : Bool */;
val* var125 /* : Writable */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
short int var135 /* : Bool */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : FlatString */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
val* var144 /* : FlatString */;
val* var145 /* : Array[Object] */;
val* var146 /* : NativeArray[Object] */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
val* var151 /* : FlatString */;
val* var152 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : FlatString */;
val* var157 /* : Array[Object] */;
val* var158 /* : NativeArray[Object] */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
val* var163 /* : FlatString */;
val* var164 /* : nullable POSetElement[MClassDef] */;
val* var165 /* : Collection[nullable Object] */;
val* var_supers /* var supers: Collection[MClassDef] */;
val* var_166 /* var : Collection[MClassDef] */;
val* var167 /* : Iterator[nullable Object] */;
val* var_168 /* var : Iterator[MClassDef] */;
short int var169 /* : Bool */;
val* var170 /* : nullable Object */;
val* var_i171 /* var i: MClassDef */;
val* var172 /* : MModule */;
val* var173 /* : MModule */;
short int var174 /* : Bool */;
val* var176 /* : MModule */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
val* var181 /* : FlatString */;
val* var182 /* : MModule */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : FlatString */;
val* var188 /* : Array[Object] */;
val* var189 /* : NativeArray[Object] */;
val* var190 /* : String */;
val* var191 /* : MClass */;
val* var192 /* : MClassKind */;
val* var193 /* : MClassKind */;
short int var194 /* : Bool */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
val* var198 /* : FlatString */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : FlatString */;
var_ctx = p0;
var_main = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_t = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClassDef>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = " [\n\11label = \"{";
var6 = standard___standard__NativeString___to_s_with_length(var5, 14l);
var4 = var6;
varonce = var4;
}
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var7 = array_instance Array[Object] */
var8 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var8)->values[0] = (val*) var2;
((struct instance_standard__NativeArray*)var8)->values[1] = (val*) var3;
((struct instance_standard__NativeArray*)var8)->values[2] = (val*) var4;
{
((void(*)(val* self, val* p0, long p1))(var7->class->vft[COLOR_standard__array__Array__with_native]))(var7, var8, 3l); /* with_native on <var7:Array[Object]>*/
}
}
{
var9 = ((val*(*)(val* self))(var7->class->vft[COLOR_standard__string__Object__to_s]))(var7); /* to_s on <var7:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var9); /* add on <var_t:Template>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model__MClass__kind]))(var10); /* kind on <var10:MClass>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__Object__abstract_kind]))(self); /* abstract_kind on <self:MClassDef>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var12); /* == on <var11:MClassKind>*/
}
if (var13){
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "abstract\\n";
var17 = standard___standard__NativeString___to_s_with_length(var16, 10l);
var15 = var17;
varonce14 = var15;
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClassDef>*/
}
var19 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var19 = array_instance Array[Object] */
var20 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var15;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var18;
{
((void(*)(val* self, val* p0, long p1))(var19->class->vft[COLOR_standard__array__Array__with_native]))(var19, var20, 2l); /* with_native on <var19:Array[Object]>*/
}
}
{
var21 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__Object__to_s]))(var19); /* to_s on <var19:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var21); /* add on <var_t:Template>*/
}
} else {
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__model__MClass__kind]))(var22); /* kind on <var22:MClass>*/
}
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__Object__interface_kind]))(self); /* interface_kind on <self:MClassDef>*/
}
{
var25 = ((short int(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var23, var24); /* == on <var23:MClassKind>*/
}
if (var25){
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "interface\\n";
var29 = standard___standard__NativeString___to_s_with_length(var28, 11l);
var27 = var29;
varonce26 = var27;
}
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClassDef>*/
}
var31 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var31 = array_instance Array[Object] */
var32 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var32)->values[0] = (val*) var27;
((struct instance_standard__NativeArray*)var32)->values[1] = (val*) var30;
{
((void(*)(val* self, val* p0, long p1))(var31->class->vft[COLOR_standard__array__Array__with_native]))(var31, var32, 2l); /* with_native on <var31:Array[Object]>*/
}
}
{
var33 = ((val*(*)(val* self))(var31->class->vft[COLOR_standard__string__Object__to_s]))(var31); /* to_s on <var31:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var33); /* add on <var_t:Template>*/
}
} else {
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClassDef>*/
}
var35 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var35 = array_instance Array[Object] */
var36 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var36)->values[0] = (val*) var34;
{
((void(*)(val* self, val* p0, long p1))(var35->class->vft[COLOR_standard__array__Array__with_native]))(var35, var36, 1l); /* with_native on <var35:Array[Object]>*/
}
}
{
var37 = ((val*(*)(val* self))(var35->class->vft[COLOR_standard__string__Object__to_s]))(var35); /* to_s on <var35:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var37); /* add on <var_t:Template>*/
}
}
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var39 = ((long(*)(val* self))(var38->class->vft[COLOR_nit__model__MClass__arity]))(var38); /* arity on <var38:MClass>*/
}
{
{ /* Inline kernel#Int#> (var39,0l) on <var39:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var42 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var43 = var39 > 0l;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "[";
var47 = standard___standard__NativeString___to_s_with_length(var46, 1l);
var45 = var47;
varonce44 = var45;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var45); /* add on <var_t:Template>*/
}
{
var48 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var49 = ((val*(*)(val* self))(var48->class->vft[COLOR_nit__model__MClass__mparameters]))(var48); /* mparameters on <var48:MClass>*/
}
var_mparameters = var49;
{
var50 = ((val*(*)(val* self))(var_mparameters->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_mparameters); /* first on <var_mparameters:Array[MParameterType]>*/
}
{
var51 = ((val*(*)(val* self))(var50->class->vft[COLOR_nit__model_base__MEntity__name]))(var50); /* name on <var50:nullable Object(MParameterType)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var51); /* add on <var_t:Template>*/
}
var_i = 1l;
{
var52 = ((long(*)(val* self))(var_mparameters->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_mparameters); /* length on <var_mparameters:Array[MParameterType]>*/
}
var_ = var52;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var55 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var59 = var_i < var_;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ", ";
var63 = standard___standard__NativeString___to_s_with_length(var62, 2l);
var61 = var63;
varonce60 = var61;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var61); /* add on <var_t:Template>*/
}
{
var64 = ((val*(*)(val* self, long p0))(var_mparameters->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_mparameters, var_i); /* [] on <var_mparameters:Array[MParameterType]>*/
}
{
var65 = ((val*(*)(val* self))(var64->class->vft[COLOR_nit__model_base__MEntity__name]))(var64); /* name on <var64:nullable Object(MParameterType)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var65); /* add on <var_t:Template>*/
}
var66 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var66;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "]";
var70 = standard___standard__NativeString___to_s_with_length(var69, 1l);
var68 = var70;
varonce67 = var68;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var68); /* add on <var_t:Template>*/
}
} else {
}
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "|";
var74 = standard___standard__NativeString___to_s_with_length(var73, 1l);
var72 = var74;
varonce71 = var72;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var72); /* add on <var_t:Template>*/
}
{
var75 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(self); /* mpropdefs on <self:MClassDef>*/
}
var_76 = var75;
{
var77 = ((val*(*)(val* self))(var_76->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_76); /* iterator on <var_76:Array[MPropDef]>*/
}
var_78 = var77;
for(;;) {
{
var79 = ((short int(*)(val* self))(var_78->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_78); /* is_ok on <var_78:ArrayIterator[MPropDef]>*/
}
if (var79){
{
var80 = ((val*(*)(val* self))(var_78->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_78); /* item on <var_78:ArrayIterator[MPropDef]>*/
}
var_i81 = var80;
/* <var_i81:MPropDef> isa MAttributeDef */
cltype83 = type_nit__MAttributeDef.color;
idtype84 = type_nit__MAttributeDef.id;
if(cltype83 >= var_i81->type->table_size) {
var82 = 0;
} else {
var82 = var_i81->type->type_table[cltype83] == idtype84;
}
var85 = !var82;
if (var85){
goto BREAK_label86;
} else {
}
{
var88 = ((short int(*)(val* self))(var_ctx->class->vft[COLOR_nit__uml_base__ToolContext__private_gen]))(var_ctx); /* private_gen on <var_ctx:ToolContext>*/
}
var89 = !var88;
var_90 = var89;
if (var89){
{
var91 = ((val*(*)(val* self))(var_i81->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_i81); /* mproperty on <var_i81:MPropDef(MAttributeDef)>*/
}
{
var92 = ((val*(*)(val* self))(var91->class->vft[COLOR_nit__model__MProperty__visibility]))(var91); /* visibility on <var91:MProperty(MAttribute)>*/
}
{
var93 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__public_visibility]))(self); /* public_visibility on <self:MClassDef>*/
}
{
var94 = ((short int(*)(val* self, val* p0))(var92->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var92, var93); /* != on <var92:MVisibility>*/
}
var87 = var94;
} else {
var87 = var_90;
}
if (var87){
goto BREAK_label86;
} else {
}
{
var95 = ((val*(*)(val* self, val* p0, val* p1))(var_i81->class->vft[COLOR_nit__uml_module__MEntity__tpl_module]))(var_i81, var_ctx, var_main); /* tpl_module on <var_i81:MPropDef(MAttributeDef)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var95); /* add on <var_t:Template>*/
}
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "\\l";
var99 = standard___standard__NativeString___to_s_with_length(var98, 2l);
var97 = var99;
varonce96 = var97;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var97); /* add on <var_t:Template>*/
}
BREAK_label86: (void)0;
{
((void(*)(val* self))(var_78->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_78); /* next on <var_78:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label100;
}
}
BREAK_label100: (void)0;
{
((void(*)(val* self))(var_78->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_78); /* finish on <var_78:ArrayIterator[MPropDef]>*/
}
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "|";
var104 = standard___standard__NativeString___to_s_with_length(var103, 1l);
var102 = var104;
varonce101 = var102;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var102); /* add on <var_t:Template>*/
}
{
var105 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(self); /* mpropdefs on <self:MClassDef>*/
}
var_106 = var105;
{
var107 = ((val*(*)(val* self))(var_106->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_106); /* iterator on <var_106:Array[MPropDef]>*/
}
var_108 = var107;
for(;;) {
{
var109 = ((short int(*)(val* self))(var_108->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_108); /* is_ok on <var_108:ArrayIterator[MPropDef]>*/
}
if (var109){
{
var110 = ((val*(*)(val* self))(var_108->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_108); /* item on <var_108:ArrayIterator[MPropDef]>*/
}
var_i111 = var110;
/* <var_i111:MPropDef> isa MMethodDef */
cltype113 = type_nit__MMethodDef.color;
idtype114 = type_nit__MMethodDef.id;
if(cltype113 >= var_i111->type->table_size) {
var112 = 0;
} else {
var112 = var_i111->type->type_table[cltype113] == idtype114;
}
var115 = !var112;
if (var115){
goto BREAK_label116;
} else {
}
{
var118 = ((short int(*)(val* self))(var_ctx->class->vft[COLOR_nit__uml_base__ToolContext__private_gen]))(var_ctx); /* private_gen on <var_ctx:ToolContext>*/
}
var119 = !var118;
var_120 = var119;
if (var119){
{
var121 = ((val*(*)(val* self))(var_i111->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_i111); /* mproperty on <var_i111:MPropDef(MMethodDef)>*/
}
{
var122 = ((val*(*)(val* self))(var121->class->vft[COLOR_nit__model__MProperty__visibility]))(var121); /* visibility on <var121:MProperty(MMethod)>*/
}
{
var123 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__Object__public_visibility]))(self); /* public_visibility on <self:MClassDef>*/
}
{
var124 = ((short int(*)(val* self, val* p0))(var122->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var122, var123); /* != on <var122:MVisibility>*/
}
var117 = var124;
} else {
var117 = var_120;
}
if (var117){
goto BREAK_label116;
} else {
}
{
var125 = ((val*(*)(val* self, val* p0, val* p1))(var_i111->class->vft[COLOR_nit__uml_module__MEntity__tpl_module]))(var_i111, var_ctx, var_main); /* tpl_module on <var_i111:MPropDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var125); /* add on <var_t:Template>*/
}
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "\\l";
var129 = standard___standard__NativeString___to_s_with_length(var128, 2l);
var127 = var129;
varonce126 = var127;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var127); /* add on <var_t:Template>*/
}
BREAK_label116: (void)0;
{
((void(*)(val* self))(var_108->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_108); /* next on <var_108:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label130;
}
}
BREAK_label130: (void)0;
{
((void(*)(val* self))(var_108->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_108); /* finish on <var_108:ArrayIterator[MPropDef]>*/
}
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "}\"";
var134 = standard___standard__NativeString___to_s_with_length(var133, 2l);
var132 = var134;
varonce131 = var132;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var132); /* add on <var_t:Template>*/
}
{
var135 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__is_intro]))(self); /* is_intro on <self:MClassDef>*/
}
if (var135){
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "color=\"";
var139 = standard___standard__NativeString___to_s_with_length(var138, 7l);
var137 = var139;
varonce136 = var137;
}
{
var140 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__uml_module__MClassDef__intro_colour]))(self); /* intro_colour on <self:MClassDef>*/
}
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "\"";
var144 = standard___standard__NativeString___to_s_with_length(var143, 1l);
var142 = var144;
varonce141 = var142;
}
var145 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var145 = array_instance Array[Object] */
var146 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var146)->values[0] = (val*) var137;
((struct instance_standard__NativeArray*)var146)->values[1] = (val*) var140;
((struct instance_standard__NativeArray*)var146)->values[2] = (val*) var142;
{
((void(*)(val* self, val* p0, long p1))(var145->class->vft[COLOR_standard__array__Array__with_native]))(var145, var146, 3l); /* with_native on <var145:Array[Object]>*/
}
}
{
var147 = ((val*(*)(val* self))(var145->class->vft[COLOR_standard__string__Object__to_s]))(var145); /* to_s on <var145:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var147); /* add on <var_t:Template>*/
}
} else {
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "color=\"";
var151 = standard___standard__NativeString___to_s_with_length(var150, 7l);
var149 = var151;
varonce148 = var149;
}
{
var152 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__uml_module__MClassDef__redef_colour]))(self); /* redef_colour on <self:MClassDef>*/
}
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "\"";
var156 = standard___standard__NativeString___to_s_with_length(var155, 1l);
var154 = var156;
varonce153 = var154;
}
var157 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var157 = array_instance Array[Object] */
var158 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var158)->values[0] = (val*) var149;
((struct instance_standard__NativeArray*)var158)->values[1] = (val*) var152;
((struct instance_standard__NativeArray*)var158)->values[2] = (val*) var154;
{
((void(*)(val* self, val* p0, long p1))(var157->class->vft[COLOR_standard__array__Array__with_native]))(var157, var158, 3l); /* with_native on <var157:Array[Object]>*/
}
}
{
var159 = ((val*(*)(val* self))(var157->class->vft[COLOR_standard__string__Object__to_s]))(var157); /* to_s on <var157:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var159); /* add on <var_t:Template>*/
}
}
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "\n]\n";
var163 = standard___standard__NativeString___to_s_with_length(var162, 3l);
var161 = var163;
varonce160 = var161;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var161); /* add on <var_t:Template>*/
}
{
var164 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(self); /* in_hierarchy on <self:MClassDef>*/
}
if (var164 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_module, 122);
fatal_exit(1);
} else {
var165 = ((val*(*)(val* self))(var164->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var164); /* direct_greaters on <var164:nullable POSetElement[MClassDef]>*/
}
var_supers = var165;
var_166 = var_supers;
{
var167 = ((val*(*)(val* self))((((long)var_166&3)?class_info[((long)var_166&3)]:var_166->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_166); /* iterator on <var_166:Collection[MClassDef]>*/
}
var_168 = var167;
for(;;) {
{
var169 = ((short int(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_168); /* is_ok on <var_168:Iterator[MClassDef]>*/
}
if (var169){
{
var170 = ((val*(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_168); /* item on <var_168:Iterator[MClassDef]>*/
}
var_i171 = var170;
{
var172 = ((val*(*)(val* self))(var_i171->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_i171); /* mmodule on <var_i171:MClassDef>*/
}
{
var173 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var174 = ((short int(*)(val* self, val* p0))(var172->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var172, var173); /* != on <var172:MModule>*/
}
if (var174){
goto BREAK_label175;
} else {
}
{
var176 = ((val*(*)(val* self))(var_i171->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var_i171); /* mmodule on <var_i171:MClassDef>*/
}
{
var177 = ((val*(*)(val* self))(var_i171->class->vft[COLOR_nit__model_base__MEntity__name]))(var_i171); /* name on <var_i171:MClassDef>*/
}
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = " -> ";
var181 = standard___standard__NativeString___to_s_with_length(var180, 4l);
var179 = var181;
varonce178 = var179;
}
{
var182 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mmodule]))(self); /* mmodule on <self:MClassDef>*/
}
{
var183 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClassDef>*/
}
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = " [dir=back";
var187 = standard___standard__NativeString___to_s_with_length(var186, 10l);
var185 = var187;
varonce184 = var185;
}
var188 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var188 = array_instance Array[Object] */
var189 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var189)->values[0] = (val*) var176;
((struct instance_standard__NativeArray*)var189)->values[1] = (val*) var177;
((struct instance_standard__NativeArray*)var189)->values[2] = (val*) var179;
((struct instance_standard__NativeArray*)var189)->values[3] = (val*) var182;
((struct instance_standard__NativeArray*)var189)->values[4] = (val*) var183;
((struct instance_standard__NativeArray*)var189)->values[5] = (val*) var185;
{
((void(*)(val* self, val* p0, long p1))(var188->class->vft[COLOR_standard__array__Array__with_native]))(var188, var189, 6l); /* with_native on <var188:Array[Object]>*/
}
}
{
var190 = ((val*(*)(val* self))(var188->class->vft[COLOR_standard__string__Object__to_s]))(var188); /* to_s on <var188:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var190); /* add on <var_t:Template>*/
}
{
var191 = ((val*(*)(val* self))(var_i171->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_i171); /* mclass on <var_i171:MClassDef>*/
}
{
var192 = ((val*(*)(val* self))(var191->class->vft[COLOR_nit__model__MClass__kind]))(var191); /* kind on <var191:MClass>*/
}
{
var193 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__Object__interface_kind]))(self); /* interface_kind on <self:MClassDef>*/
}
{
var194 = ((short int(*)(val* self, val* p0))(var192->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var192, var193); /* == on <var192:MClassKind>*/
}
if (var194){
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = " arrowtail=open style=dashed";
var198 = standard___standard__NativeString___to_s_with_length(var197, 28l);
var196 = var198;
varonce195 = var196;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var196); /* add on <var_t:Template>*/
}
} else {
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = " arrowtail=empty";
var202 = standard___standard__NativeString___to_s_with_length(var201, 16l);
var200 = var202;
varonce199 = var200;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var200); /* add on <var_t:Template>*/
}
}
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "]\n";
var206 = standard___standard__NativeString___to_s_with_length(var205, 2l);
var204 = var206;
varonce203 = var204;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var204); /* add on <var_t:Template>*/
}
BREAK_label175: (void)0;
{
((void(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_168); /* next on <var_168:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label207;
}
}
BREAK_label207: (void)0;
{
((void(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_168); /* finish on <var_168:Iterator[MClassDef]>*/
}
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_module#MMethodDef#tpl_module for (self: MMethodDef, ToolContext, MModule): Writable */
val* nit__uml_module___MMethodDef___MEntity__tpl_module(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Template */;
val* var_t /* var t: Template */;
val* var2 /* : MProperty */;
val* var3 /* : MVisibility */;
val* var4 /* : Writable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : nullable MSignature */;
val* var11 /* : Writable */;
var_ctx = p0;
var_main = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_t = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MMethodDef>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MProperty__visibility]))(var2); /* visibility on <var2:MProperty(MMethod)>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__uml_class__MVisibility__tpl_class]))(var3); /* tpl_class on <var3:MVisibility>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var4); /* add on <var_t:Template>*/
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = " ";
var7 = standard___standard__NativeString___to_s_with_length(var6, 1l);
var5 = var7;
varonce = var5;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var5); /* add on <var_t:Template>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MMethodDef>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__Text__escape_to_dot]))(var8); /* escape_to_dot on <var8:String>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var9); /* add on <var_t:Template>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MMethodDef__msignature]))(self); /* msignature on <self:MMethodDef>*/
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_module, 143);
fatal_exit(1);
} else {
var11 = ((val*(*)(val* self, val* p0, val* p1))(var10->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var10, var_ctx, var_main); /* tpl_class on <var10:nullable MSignature>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var11); /* add on <var_t:Template>*/
}
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_module#MAttributeDef#tpl_module for (self: MAttributeDef, ToolContext, MModule): Writable */
val* nit__uml_module___MAttributeDef___MEntity__tpl_module(val* self, val* p0, val* p1) {
val* var /* : Writable */;
val* var_ctx /* var ctx: ToolContext */;
val* var_main /* var main: MModule */;
val* var1 /* : Template */;
val* var_t /* var t: Template */;
val* var2 /* : MProperty */;
val* var3 /* : MVisibility */;
val* var4 /* : Writable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : nullable MType */;
val* var14 /* : Writable */;
var_ctx = p0;
var_main = p1;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_t = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MAttributeDef>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MProperty__visibility]))(var2); /* visibility on <var2:MProperty(MAttribute)>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__uml_class__MVisibility__tpl_class]))(var3); /* tpl_class on <var3:MVisibility>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var4); /* add on <var_t:Template>*/
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = " ";
var7 = standard___standard__NativeString___to_s_with_length(var6, 1l);
var5 = var7;
varonce = var5;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var5); /* add on <var_t:Template>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var8); /* add on <var_t:Template>*/
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ": ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 2l);
var10 = var12;
varonce9 = var10;
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var10); /* add on <var_t:Template>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(self); /* static_mtype on <self:MAttributeDef>*/
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_module, 155);
fatal_exit(1);
} else {
var14 = ((val*(*)(val* self, val* p0, val* p1))(var13->class->vft[COLOR_nit__uml_class__MEntity__tpl_class]))(var13, var_ctx, var_main); /* tpl_class on <var13:nullable MType>*/
}
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_template__Template__add]))(var_t, var14); /* add on <var_t:Template>*/
}
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
