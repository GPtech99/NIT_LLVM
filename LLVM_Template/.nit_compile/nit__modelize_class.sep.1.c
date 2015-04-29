#include "nit__modelize_class.sep.0.h"
/* method modelize_class#ToolContext#modelize_class_phase for (self: ToolContext): Phase */
val* nit__modelize_class___ToolContext___modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ToolContext#modelize_class_phase= for (self: ToolContext, Phase) */
void nit__modelize_class___ToolContext___modelize_class_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__ToolContext___modelize_class_phase].val = p0; /* _modelize_class_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method modelize_class#ModelizeClassPhase#process_nmodule for (self: ModelizeClassPhase, AModule) */
void nit__modelize_class___nit__modelize_class__ModelizeClassPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var1 /* : ModelBuilder */;
var_nmodule = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:ModelizeClassPhase>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(var); /* modelbuilder on <var:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__modelize_class__ModelBuilder__build_classes]))(var1, var_nmodule); /* build_classes on <var1:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclass for (self: ModelBuilder, AModule, AClassdef) */
void nit__modelize_class___ModelBuilder___build_a_mclass(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
long var_arity /* var arity: Int */;
val* var1 /* : Array[String] */;
val* var_names /* var names: Array[String] */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : nullable TClassid */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : AClasskind */;
val* var_nkind /* var nkind: nullable AClasskind */;
val* var6 /* : MClassKind */;
val* var_mkind /* var mkind: MClassKind */;
val* var7 /* : nullable AVisibility */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var8 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: nullable MVisibility */;
val* var9 /* : ANodes[AFormaldef] */;
long var10 /* : Int */;
val* var11 /* : Sys */;
val* var12 /* : MVisibility */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : Sys */;
val* var18 /* : MVisibility */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name;
short int var29 /* : Bool */;
val* var30 /* : ANodes[AFormaldef] */;
val* var31 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var32 /* : TClassid */;
val* var33 /* : String */;
val* var_ptname /* var ptname: String */;
short int var34 /* : Bool */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : SequenceRead[Char] */;
val* var_47 /* var : SequenceRead[Char] */;
val* var48 /* : Iterator[nullable Object] */;
val* var_49 /* var : IndexedIterator[Char] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
char var52 /* : Char */;
char var_c /* var c: Char */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
short int var_61 /* var : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
val* var83 /* : String */;
long var84 /* : Int */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
short int var_90 /* var : Bool */;
val* var91 /* : ANodes[APropdef] */;
val* var92 /* : nullable Object */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
val* var97 /* : nullable AMethid */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
short int var103 /* : Bool */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
val* var108 /* : Sys */;
val* var109 /* : MClassKind */;
val* var110 /* : Sys */;
val* var111 /* : MVisibility */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
val* var116 /* : Sys */;
val* var117 /* : MClassKind */;
val* var118 /* : Sys */;
val* var119 /* : MVisibility */;
val* var120 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
short int var_127 /* var : Bool */;
val* var128 /* : nullable TKwredef */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
val* var132 /* : NativeArray[String] */;
static val* varonce131;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
val* var140 /* : FlatString */;
val* var141 /* : String */;
short int var142 /* : Bool */;
val* var143 /* : nullable MGroup */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var_146 /* var : Bool */;
val* var147 /* : Sys */;
val* var148 /* : MVisibility */;
short int var149 /* : Bool */;
val* var150 /* : Model */;
val* var151 /* : nullable Array[MClass] */;
val* var_mclasses /* var mclasses: nullable Array[MClass] */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
val* var_154 /* var : Array[MClass] */;
val* var155 /* : Iterator[nullable Object] */;
val* var_156 /* var : ArrayIterator[MClass] */;
short int var157 /* : Bool */;
val* var158 /* : nullable Object */;
val* var_other /* var other: MClass */;
short int var159 /* : Bool */;
val* var160 /* : MModule */;
val* var161 /* : nullable MGroup */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var_164 /* var : Bool */;
val* var165 /* : MModule */;
val* var166 /* : nullable MGroup */;
val* var167 /* : MProject */;
val* var168 /* : nullable MGroup */;
val* var169 /* : MProject */;
short int var170 /* : Bool */;
val* var171 /* : nullable MClassDef */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
val* var180 /* : NativeArray[String] */;
static val* varonce179;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : FlatString */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
val* var188 /* : FlatString */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
val* var192 /* : FlatString */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : FlatString */;
val* var197 /* : String */;
val* var198 /* : MModule */;
val* var199 /* : String */;
val* var200 /* : MClassDef */;
val* var201 /* : Location */;
val* var202 /* : String */;
val* var203 /* : String */;
val* var205 /* : MClass */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
int cltype208;
int idtype209;
short int var_210 /* var : Bool */;
val* var211 /* : Map[MClass, AClassdef] */;
short int var212 /* : Bool */;
val* var214 /* : NativeArray[String] */;
static val* varonce213;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
val* var218 /* : FlatString */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
val* var222 /* : FlatString */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
val* var226 /* : FlatString */;
val* var227 /* : Map[MClass, AClassdef] */;
val* var228 /* : nullable Object */;
val* var229 /* : Location */;
long var230 /* : Int */;
val* var231 /* : String */;
val* var232 /* : String */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
int cltype235;
int idtype236;
short int var_237 /* var : Bool */;
val* var238 /* : nullable TKwredef */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
val* var242 /* : NativeArray[String] */;
static val* varonce241;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
val* var246 /* : FlatString */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
val* var250 /* : FlatString */;
val* var251 /* : String */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
short int var_257 /* var : Bool */;
long var258 /* : Int */;
short int var259 /* : Bool */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
val* var264 /* : NativeArray[String] */;
static val* varonce263;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : FlatString */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : FlatString */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
val* var276 /* : FlatString */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
val* var280 /* : FlatString */;
long var281 /* : Int */;
val* var282 /* : String */;
val* var283 /* : String */;
val* var284 /* : String */;
val* var285 /* : String */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
short int var_290 /* var : Bool */;
val* var291 /* : Sys */;
val* var292 /* : MClassKind */;
short int var293 /* : Bool */;
short int var_294 /* var : Bool */;
val* var295 /* : MClassKind */;
short int var296 /* : Bool */;
val* var298 /* : NativeArray[String] */;
static val* varonce297;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
val* var302 /* : FlatString */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
val* var306 /* : FlatString */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
val* var310 /* : FlatString */;
val* var311 /* : MClassKind */;
val* var312 /* : String */;
val* var313 /* : String */;
val* var314 /* : String */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
short int var318 /* : Bool */;
short int var_319 /* var : Bool */;
val* var320 /* : Sys */;
val* var321 /* : MVisibility */;
short int var322 /* : Bool */;
short int var_323 /* var : Bool */;
val* var324 /* : MVisibility */;
short int var325 /* : Bool */;
val* var327 /* : NativeArray[String] */;
static val* varonce326;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : NativeString */;
val* var331 /* : FlatString */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
val* var335 /* : FlatString */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
val* var339 /* : FlatString */;
val* var340 /* : MVisibility */;
val* var341 /* : String */;
val* var342 /* : String */;
val* var343 /* : String */;
val* var344 /* : Map[MClass, AClassdef] */;
short int var345 /* : Bool */;
short int var346 /* : Bool */;
val* var347 /* : Map[MClass, AClassdef] */;
val* var348 /* : Array[AClassdef] */;
val* var_349 /* var : Array[AClassdef] */;
val* var350 /* : Map[MClass, AClassdef] */;
val* var351 /* : nullable Object */;
val* var352 /* : nullable Array[AClassdef] */;
var_nmodule = p0;
var_nclassdef = p1;
{
var = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:AModule>*/
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 40);
fatal_exit(1);
}
var_mmodule = var;
var_arity = 0l;
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_names = var1;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var2 = 0;
} else {
var2 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_id]))(var_nclassdef); /* n_id on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 50);
fatal_exit(1);
} else {
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__parser_nodes__Token__text]))(var3); /* text on <var3:nullable TClassid>*/
}
var_name = var4;
{
var5 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_classkind]))(var_nclassdef); /* n_classkind on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
var_nkind = var5;
{
var6 = ((val*(*)(val* self))(var_nkind->class->vft[COLOR_nit__modelize_class__AClasskind__mkind]))(var_nkind); /* mkind on <var_nkind:nullable AClasskind(AClasskind)>*/
}
var_mkind = var6;
{
var7 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ADefinition__n_visibility]))(var_nclassdef); /* n_visibility on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
var_nvisibility = var7;
if (var_nvisibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 54);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility>*/
}
var_mvisibility = var8;
{
var9 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef); /* n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
{
var10 = ((long(*)(val* self))(var9->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var9); /* length on <var9:ANodes[AFormaldef]>*/
}
var_arity = var10;
var11 = glob_sys;
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model_base__Sys__protected_visibility]))(var11); /* protected_visibility on <var11:Sys>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var12); /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
if (var13){
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "Error: only properties can be protected.";
var16 = standard___standard__NativeString___to_s_with_length(var15, 40l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nvisibility, var14); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
var17 = glob_sys;
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__model_base__Sys__intrude_visibility]))(var17); /* intrude_visibility on <var17:Sys>*/
}
{
var19 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var18); /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
if (var19){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Error: intrude is not a legal visibility for classes.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 53l);
var21 = var23;
varonce20 = var21;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nvisibility, var21); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
var_i = 0l;
var_ = var_arity;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var26 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var29 = var_i < var_;
var24 = var29;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
var30 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef); /* n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
{
var31 = ((val*(*)(val* self, long p0))(var30->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var30, var_i); /* [] on <var30:ANodes[AFormaldef]>*/
}
var_nfd = var31;
{
var32 = ((val*(*)(val* self))(var_nfd->class->vft[COLOR_nit__parser_nodes__AFormaldef__n_id]))(var_nfd); /* n_id on <var_nfd:AFormaldef>*/
}
{
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_nit__parser_nodes__Token__text]))(var32); /* text on <var32:TClassid>*/
}
var_ptname = var33;
{
var34 = ((short int(*)(val* self, val* p0))(var_names->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_names, var_ptname); /* has on <var_names:Array[String]>*/
}
if (var34){
if (unlikely(varonce35==NULL)) {
var36 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "Error: a formal parameter type `";
var40 = standard___standard__NativeString___to_s_with_length(var39, 32l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "` already exists.";
var44 = standard___standard__NativeString___to_s_with_length(var43, 17l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var36)->values[2]=var42;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_standard__NativeArray*)var36)->values[1]=var_ptname;
{
var45 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nfd, var45); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var46 = ((val*(*)(val* self))(var_ptname->class->vft[COLOR_standard__string__Text__chars]))(var_ptname); /* chars on <var_ptname:String>*/
}
var_47 = var46;
{
var48 = ((val*(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_47); /* iterator on <var_47:SequenceRead[Char]>*/
}
var_49 = var48;
for(;;) {
{
var50 = ((short int(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_49); /* is_ok on <var_49:IndexedIterator[Char]>*/
}
if (var50){
{
var51 = ((val*(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_49); /* item on <var_49:IndexedIterator[Char]>*/
}
var52 = (char)((long)(var51)>>2);
var_c = var52;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var56 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var60 = var_c >= 'a';
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_61 = var54;
if (var54){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var64 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var68 = var_c <= 'z';
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var53 = var62;
} else {
var53 = var_61;
}
if (var53){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "formal-type-name";
var72 = standard___standard__NativeString___to_s_with_length(var71, 16l);
var70 = var72;
varonce69 = var70;
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Warning: lowercase in the formal parameter type `";
var78 = standard___standard__NativeString___to_s_with_length(var77, 49l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "`.";
var82 = standard___standard__NativeString___to_s_with_length(var81, 2l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var74)->values[2]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
((struct instance_standard__NativeArray*)var74)->values[1]=var_ptname;
{
var83 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(self, var_nfd, var70, var83); /* warning on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_49); /* next on <var_49:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_49); /* finish on <var_49:IndexedIterator[Char]>*/
}
{
((void(*)(val* self, val* p0))(var_names->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_names, var_ptname); /* add on <var_names:Array[String]>*/
}
var84 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var84;
} else {
goto BREAK_label85;
}
}
BREAK_label85: (void)0;
} else {
/* <var_nclassdef:AClassdef> isa ATopClassdef */
cltype88 = type_nit__ATopClassdef.color;
idtype89 = type_nit__ATopClassdef.id;
if(cltype88 >= var_nclassdef->type->table_size) {
var87 = 0;
} else {
var87 = var_nclassdef->type->type_table[cltype88] == idtype89;
}
var_90 = var87;
if (var87){
{
var91 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(var_nclassdef); /* n_propdefs on <var_nclassdef:AClassdef(ATopClassdef)>*/
}
{
var92 = ((val*(*)(val* self))(var91->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var91); /* first on <var91:ANodes[APropdef]>*/
}
/* <var92:nullable Object(APropdef)> isa AMethPropdef */
cltype94 = type_nit__AMethPropdef.color;
idtype95 = type_nit__AMethPropdef.id;
if(cltype94 >= var92->type->table_size) {
var93 = 0;
} else {
var93 = var92->type->type_table[cltype94] == idtype95;
}
if (unlikely(!var93)) {
var_class_name96 = var92 == NULL ? "null" : var92->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 78);
fatal_exit(1);
}
{
var97 = ((val*(*)(val* self))(var92->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(var92); /* n_methid on <var92:APropdef(AMethPropdef)>*/
}
if (var97 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 78);
fatal_exit(1);
} else {
var98 = ((val*(*)(val* self))(var97->class->vft[COLOR_nit__parser_work__Prod__collect_text]))(var97); /* collect_text on <var97:nullable AMethid>*/
}
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "sys";
var102 = standard___standard__NativeString___to_s_with_length(var101, 3l);
var100 = var102;
varonce99 = var100;
}
{
var103 = ((short int(*)(val* self, val* p0))(var98->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var98, var100); /* == on <var98:String>*/
}
var86 = var103;
} else {
var86 = var_90;
}
if (var86){
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "Object";
var107 = standard___standard__NativeString___to_s_with_length(var106, 6l);
var105 = var107;
varonce104 = var105;
}
var_name = var105;
var_nkind = ((val*)NULL);
var108 = glob_sys;
{
var109 = ((val*(*)(val* self))(var108->class->vft[COLOR_nit__model__Sys__interface_kind]))(var108); /* interface_kind on <var108:Sys>*/
}
var_mkind = var109;
var_nvisibility = ((val*)NULL);
var110 = glob_sys;
{
var111 = ((val*(*)(val* self))(var110->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var110); /* public_visibility on <var110:Sys>*/
}
var_mvisibility = var111;
} else {
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "Sys";
var115 = standard___standard__NativeString___to_s_with_length(var114, 3l);
var113 = var115;
varonce112 = var113;
}
var_name = var113;
var_nkind = ((val*)NULL);
var116 = glob_sys;
{
var117 = ((val*(*)(val* self))(var116->class->vft[COLOR_nit__model__Sys__concrete_kind]))(var116); /* concrete_kind on <var116:Sys>*/
}
var_mkind = var117;
var_nvisibility = ((val*)NULL);
var118 = glob_sys;
{
var119 = ((val*(*)(val* self))(var118->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var118); /* public_visibility on <var118:Sys>*/
}
var_mvisibility = var119;
}
}
{
var120 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(self, var_nclassdef, var_mmodule, var_name); /* try_get_mclass_by_name on <self:ModelBuilder>*/
}
var_mclass = var120;
if (var_mclass == NULL) {
var121 = 1; /* is null */
} else {
var121 = 0; /* arg is null but recv is not */
}
if (0) {
var122 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var121 = var122;
}
if (var121){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype125 = type_nit__AStdClassdef.color;
idtype126 = type_nit__AStdClassdef.id;
if(cltype125 >= var_nclassdef->type->table_size) {
var124 = 0;
} else {
var124 = var_nclassdef->type->type_table[cltype125] == idtype126;
}
var_127 = var124;
if (var124){
{
var128 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(var_nclassdef); /* n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
if (var128 == NULL) {
var129 = 0; /* is null */
} else {
var129 = 1; /* arg is null and recv is not */
}
if (0) {
var130 = ((short int(*)(val* self, val* p0))(var128->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var128, ((val*)NULL)); /* != on <var128:nullable TKwredef>*/
var129 = var130;
}
var123 = var129;
} else {
var123 = var_127;
}
if (var123){
if (unlikely(varonce131==NULL)) {
var132 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "Redef Error: no imported class `";
var136 = standard___standard__NativeString___to_s_with_length(var135, 32l);
var134 = var136;
varonce133 = var134;
}
((struct instance_standard__NativeArray*)var132)->values[0]=var134;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "` to refine.";
var140 = standard___standard__NativeString___to_s_with_length(var139, 12l);
var138 = var140;
varonce137 = var138;
}
((struct instance_standard__NativeArray*)var132)->values[2]=var138;
} else {
var132 = varonce131;
varonce131 = NULL;
}
((struct instance_standard__NativeArray*)var132)->values[1]=var_name;
{
var141 = ((val*(*)(val* self))(var132->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var132); /* native_to_s on <var132:NativeArray[String]>*/
}
varonce131 = var132;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nclassdef, var141); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var143 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var_mmodule); /* mgroup on <var_mmodule:MModule>*/
}
if (var143 == NULL) {
var144 = 0; /* is null */
} else {
var144 = 1; /* arg is null and recv is not */
}
if (0) {
var145 = ((short int(*)(val* self, val* p0))(var143->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var143, ((val*)NULL)); /* != on <var143:nullable MGroup>*/
var144 = var145;
}
var_146 = var144;
if (var144){
var147 = glob_sys;
{
var148 = ((val*(*)(val* self))(var147->class->vft[COLOR_nit__model_base__Sys__protected_visibility]))(var147); /* protected_visibility on <var147:Sys>*/
}
{
var149 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Comparable___62d_61d]))(var_mvisibility, var148); /* >= on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
var142 = var149;
} else {
var142 = var_146;
}
if (var142){
{
var150 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model]))(self); /* model on <self:ModelBuilder>*/
}
{
var151 = ((val*(*)(val* self, val* p0))(var150->class->vft[COLOR_nit__model__Model__get_mclasses_by_name]))(var150, var_name); /* get_mclasses_by_name on <var150:Model>*/
}
var_mclasses = var151;
if (var_mclasses == NULL) {
var152 = 0; /* is null */
} else {
var152 = 1; /* arg is null and recv is not */
}
if (0) {
var153 = ((short int(*)(val* self, val* p0))(var_mclasses->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mclasses, ((val*)NULL)); /* != on <var_mclasses:nullable Array[MClass]>*/
var152 = var153;
}
if (var152){
var_154 = var_mclasses;
{
var155 = ((val*(*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_154); /* iterator on <var_154:Array[MClass]>*/
}
var_156 = var155;
for(;;) {
{
var157 = ((short int(*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_156); /* is_ok on <var_156:ArrayIterator[MClass]>*/
}
if (var157){
{
var158 = ((val*(*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_156); /* item on <var_156:ArrayIterator[MClass]>*/
}
var_other = var158;
{
var160 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var_other); /* intro_mmodule on <var_other:MClass>*/
}
{
var161 = ((val*(*)(val* self))(var160->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var160); /* mgroup on <var160:MModule>*/
}
if (var161 == NULL) {
var162 = 0; /* is null */
} else {
var162 = 1; /* arg is null and recv is not */
}
if (0) {
var163 = ((short int(*)(val* self, val* p0))(var161->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var161, ((val*)NULL)); /* != on <var161:nullable MGroup>*/
var162 = var163;
}
var_164 = var162;
if (var162){
{
var165 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var_other); /* intro_mmodule on <var_other:MClass>*/
}
{
var166 = ((val*(*)(val* self))(var165->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var165); /* mgroup on <var165:MModule>*/
}
if (var166 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 106);
fatal_exit(1);
} else {
var167 = ((val*(*)(val* self))(var166->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var166); /* mproject on <var166:nullable MGroup>*/
}
{
var168 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(var_mmodule); /* mgroup on <var_mmodule:MModule>*/
}
if (var168 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 106);
fatal_exit(1);
} else {
var169 = ((val*(*)(val* self))(var168->class->vft[COLOR_nit__mproject__MGroup__mproject]))(var168); /* mproject on <var168:nullable MGroup>*/
}
{
var170 = ((short int(*)(val* self, val* p0))(var167->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var167, var169); /* == on <var167:MProject>*/
}
var159 = var170;
} else {
var159 = var_164;
}
if (var159){
{
var171 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MClass__try_intro]))(var_other); /* try_intro on <var_other:MClass>*/
}
if (var171 == NULL) {
var172 = 1; /* is null */
} else {
var172 = 0; /* arg is null but recv is not */
}
if (0) {
var173 = ((short int(*)(val* self, val* p0))(var171->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var171, ((val*)NULL)); /* == on <var171:nullable MClassDef>*/
var172 = var173;
}
if (var172){
goto BREAK_label174;
} else {
}
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "full-name-conflict";
var178 = standard___standard__NativeString___to_s_with_length(var177, 18l);
var176 = var178;
varonce175 = var176;
}
if (unlikely(varonce179==NULL)) {
var180 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "Error: a class named `";
var184 = standard___standard__NativeString___to_s_with_length(var183, 22l);
var182 = var184;
varonce181 = var182;
}
((struct instance_standard__NativeArray*)var180)->values[0]=var182;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "` is already defined in module `";
var188 = standard___standard__NativeString___to_s_with_length(var187, 32l);
var186 = var188;
varonce185 = var186;
}
((struct instance_standard__NativeArray*)var180)->values[2]=var186;
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "` at ";
var192 = standard___standard__NativeString___to_s_with_length(var191, 5l);
var190 = var192;
varonce189 = var190;
}
((struct instance_standard__NativeArray*)var180)->values[4]=var190;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = ".";
var196 = standard___standard__NativeString___to_s_with_length(var195, 1l);
var194 = var196;
varonce193 = var194;
}
((struct instance_standard__NativeArray*)var180)->values[6]=var194;
} else {
var180 = varonce179;
varonce179 = NULL;
}
{
var197 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_other); /* full_name on <var_other:MClass>*/
}
((struct instance_standard__NativeArray*)var180)->values[1]=var197;
{
var198 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MClass__intro_mmodule]))(var_other); /* intro_mmodule on <var_other:MClass>*/
}
{
var199 = ((val*(*)(val* self))(var198->class->vft[COLOR_standard__string__Object__to_s]))(var198); /* to_s on <var198:MModule>*/
}
((struct instance_standard__NativeArray*)var180)->values[3]=var199;
{
var200 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__model__MClass__intro]))(var_other); /* intro on <var_other:MClass>*/
}
{
var201 = ((val*(*)(val* self))(var200->class->vft[COLOR_nit__model__MClassDef__location]))(var200); /* location on <var200:MClassDef>*/
}
{
var202 = ((val*(*)(val* self))(var201->class->vft[COLOR_standard__string__Object__to_s]))(var201); /* to_s on <var201:Location>*/
}
((struct instance_standard__NativeArray*)var180)->values[5]=var202;
{
var203 = ((val*(*)(val* self))(var180->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var180); /* native_to_s on <var180:NativeArray[String]>*/
}
varonce179 = var180;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(self, var_nclassdef, var176, var203); /* warning on <self:ModelBuilder>*/
}
goto BREAK_label204;
} else {
}
BREAK_label174: (void)0;
{
((void(*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_156); /* next on <var_156:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label204;
}
}
BREAK_label204: (void)0;
{
((void(*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_156); /* finish on <var_156:ArrayIterator[MClass]>*/
}
} else {
}
} else {
}
var205 = NEW_nit__MClass(&type_nit__MClass);
{
((void(*)(val* self, val* p0))(var205->class->vft[COLOR_nit__model__MClass__intro_mmodule_61d]))(var205, var_mmodule); /* intro_mmodule= on <var205:MClass>*/
}
{
((void(*)(val* self, val* p0))(var205->class->vft[COLOR_nit__model__MClass__name_61d]))(var205, var_name); /* name= on <var205:MClass>*/
}
{
((void(*)(val* self, val* p0))(var205->class->vft[COLOR_nit__model__MClass__setup_parameter_names]))(var205, var_names); /* setup_parameter_names on <var205:MClass>*/
}
{
((void(*)(val* self, val* p0))(var205->class->vft[COLOR_nit__model__MClass__kind_61d]))(var205, var_mkind); /* kind= on <var205:MClass>*/
}
{
((void(*)(val* self, val* p0))(var205->class->vft[COLOR_nit__model__MClass__visibility_61d]))(var205, var_mvisibility); /* visibility= on <var205:MClass>*/
}
{
((void(*)(val* self))(var205->class->vft[COLOR_standard__kernel__Object__init]))(var205); /* init on <var205:MClass>*/
}
var_mclass = var205;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype208 = type_nit__AStdClassdef.color;
idtype209 = type_nit__AStdClassdef.id;
if(cltype208 >= var_nclassdef->type->table_size) {
var207 = 0;
} else {
var207 = var_nclassdef->type->type_table[cltype208] == idtype209;
}
var_210 = var207;
if (var207){
{
var211 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__modelize_class__AModule__mclass2nclassdef]))(var_nmodule); /* mclass2nclassdef on <var_nmodule:AModule>*/
}
{
var212 = ((short int(*)(val* self, val* p0))((((long)var211&3)?class_info[((long)var211&3)]:var211->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var211, var_mclass); /* has_key on <var211:Map[MClass, AClassdef]>*/
}
var206 = var212;
} else {
var206 = var_210;
}
if (var206){
if (unlikely(varonce213==NULL)) {
var214 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "Error: a class `";
var218 = standard___standard__NativeString___to_s_with_length(var217, 16l);
var216 = var218;
varonce215 = var216;
}
((struct instance_standard__NativeArray*)var214)->values[0]=var216;
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "` is already defined at line ";
var222 = standard___standard__NativeString___to_s_with_length(var221, 29l);
var220 = var222;
varonce219 = var220;
}
((struct instance_standard__NativeArray*)var214)->values[2]=var220;
if (likely(varonce223!=NULL)) {
var224 = varonce223;
} else {
var225 = ".";
var226 = standard___standard__NativeString___to_s_with_length(var225, 1l);
var224 = var226;
varonce223 = var224;
}
((struct instance_standard__NativeArray*)var214)->values[4]=var224;
} else {
var214 = varonce213;
varonce213 = NULL;
}
((struct instance_standard__NativeArray*)var214)->values[1]=var_name;
{
var227 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__modelize_class__AModule__mclass2nclassdef]))(var_nmodule); /* mclass2nclassdef on <var_nmodule:AModule>*/
}
{
var228 = ((val*(*)(val* self, val* p0))((((long)var227&3)?class_info[((long)var227&3)]:var227->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var227, var_mclass); /* [] on <var227:Map[MClass, AClassdef]>*/
}
{
var229 = ((val*(*)(val* self))(var228->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var228); /* location on <var228:nullable Object(AClassdef)>*/
}
{
var230 = ((long(*)(val* self))(var229->class->vft[COLOR_nit__location__Location__line_start]))(var229); /* line_start on <var229:Location>*/
}
var231 = standard__string___Int___Object__to_s(var230);
((struct instance_standard__NativeArray*)var214)->values[3]=var231;
{
var232 = ((val*(*)(val* self))(var214->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var214); /* native_to_s on <var214:NativeArray[String]>*/
}
varonce213 = var214;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nclassdef, var232); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype235 = type_nit__AStdClassdef.color;
idtype236 = type_nit__AStdClassdef.id;
if(cltype235 >= var_nclassdef->type->table_size) {
var234 = 0;
} else {
var234 = var_nclassdef->type->type_table[cltype235] == idtype236;
}
var_237 = var234;
if (var234){
{
var238 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef]))(var_nclassdef); /* n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
if (var238 == NULL) {
var239 = 1; /* is null */
} else {
var239 = 0; /* arg is null but recv is not */
}
if (0) {
var240 = ((short int(*)(val* self, val* p0))(var238->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var238, ((val*)NULL)); /* == on <var238:nullable TKwredef>*/
var239 = var240;
}
var233 = var239;
} else {
var233 = var_237;
}
if (var233){
if (unlikely(varonce241==NULL)) {
var242 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = "Redef Error: `";
var246 = standard___standard__NativeString___to_s_with_length(var245, 14l);
var244 = var246;
varonce243 = var244;
}
((struct instance_standard__NativeArray*)var242)->values[0]=var244;
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "` is an imported class. Add the `redef` keyword to refine it.";
var250 = standard___standard__NativeString___to_s_with_length(var249, 61l);
var248 = var250;
varonce247 = var248;
}
((struct instance_standard__NativeArray*)var242)->values[2]=var248;
} else {
var242 = varonce241;
varonce241 = NULL;
}
((struct instance_standard__NativeArray*)var242)->values[1]=var_name;
{
var251 = ((val*(*)(val* self))(var242->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var242); /* native_to_s on <var242:NativeArray[String]>*/
}
varonce241 = var242;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nclassdef, var251); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#!= (var_arity,0l) on <var_arity:Int> */
var255 = var_arity == 0l;
var256 = !var255;
var253 = var256;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
}
var_257 = var253;
if (var253){
{
var258 = ((long(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__arity]))(var_mclass); /* arity on <var_mclass:nullable MClass(MClass)>*/
}
{
{ /* Inline kernel#Int#!= (var258,var_arity) on <var258:Int> */
var261 = var258 == var_arity;
var262 = !var261;
var259 = var262;
goto RET_LABEL260;
RET_LABEL260:(void)0;
}
}
var252 = var259;
} else {
var252 = var_257;
}
if (var252){
if (unlikely(varonce263==NULL)) {
var264 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "Redef Error: expected ";
var268 = standard___standard__NativeString___to_s_with_length(var267, 22l);
var266 = var268;
varonce265 = var266;
}
((struct instance_standard__NativeArray*)var264)->values[0]=var266;
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = " formal parameter(s) for ";
var272 = standard___standard__NativeString___to_s_with_length(var271, 25l);
var270 = var272;
varonce269 = var270;
}
((struct instance_standard__NativeArray*)var264)->values[2]=var270;
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "; got ";
var276 = standard___standard__NativeString___to_s_with_length(var275, 6l);
var274 = var276;
varonce273 = var274;
}
((struct instance_standard__NativeArray*)var264)->values[4]=var274;
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = ".";
var280 = standard___standard__NativeString___to_s_with_length(var279, 1l);
var278 = var280;
varonce277 = var278;
}
((struct instance_standard__NativeArray*)var264)->values[6]=var278;
} else {
var264 = varonce263;
varonce263 = NULL;
}
{
var281 = ((long(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__arity]))(var_mclass); /* arity on <var_mclass:nullable MClass(MClass)>*/
}
var282 = standard__string___Int___Object__to_s(var281);
((struct instance_standard__NativeArray*)var264)->values[1]=var282;
{
var283 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__signature_to_s]))(var_mclass); /* signature_to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var264)->values[3]=var283;
var284 = standard__string___Int___Object__to_s(var_arity);
((struct instance_standard__NativeArray*)var264)->values[5]=var284;
{
var285 = ((val*(*)(val* self))(var264->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var264); /* native_to_s on <var264:NativeArray[String]>*/
}
varonce263 = var264;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nclassdef, var285); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
if (var_nkind == NULL) {
var288 = 0; /* is null */
} else {
var288 = 1; /* arg is null and recv is not */
}
if (0) {
var289 = ((short int(*)(val* self, val* p0))(var_nkind->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nkind, ((val*)NULL)); /* != on <var_nkind:nullable AClasskind>*/
var288 = var289;
}
var_290 = var288;
if (var288){
var291 = glob_sys;
{
var292 = ((val*(*)(val* self))(var291->class->vft[COLOR_nit__model__Sys__concrete_kind]))(var291); /* concrete_kind on <var291:Sys>*/
}
{
var293 = ((short int(*)(val* self, val* p0))(var_mkind->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mkind, var292); /* != on <var_mkind:MClassKind>*/
}
var287 = var293;
} else {
var287 = var_290;
}
var_294 = var287;
if (var287){
{
var295 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__kind]))(var_mclass); /* kind on <var_mclass:nullable MClass(MClass)>*/
}
{
var296 = ((short int(*)(val* self, val* p0))(var295->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var295, var_mkind); /* != on <var295:MClassKind>*/
}
var286 = var296;
} else {
var286 = var_294;
}
if (var286){
if (unlikely(varonce297==NULL)) {
var298 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = "Redef Error: refinement changed the kind from `";
var302 = standard___standard__NativeString___to_s_with_length(var301, 47l);
var300 = var302;
varonce299 = var300;
}
((struct instance_standard__NativeArray*)var298)->values[0]=var300;
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "` to `";
var306 = standard___standard__NativeString___to_s_with_length(var305, 6l);
var304 = var306;
varonce303 = var304;
}
((struct instance_standard__NativeArray*)var298)->values[2]=var304;
if (likely(varonce307!=NULL)) {
var308 = varonce307;
} else {
var309 = "`.";
var310 = standard___standard__NativeString___to_s_with_length(var309, 2l);
var308 = var310;
varonce307 = var308;
}
((struct instance_standard__NativeArray*)var298)->values[4]=var308;
} else {
var298 = varonce297;
varonce297 = NULL;
}
{
var311 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__kind]))(var_mclass); /* kind on <var_mclass:nullable MClass(MClass)>*/
}
{
var312 = ((val*(*)(val* self))(var311->class->vft[COLOR_standard__string__Object__to_s]))(var311); /* to_s on <var311:MClassKind>*/
}
((struct instance_standard__NativeArray*)var298)->values[1]=var312;
{
var313 = ((val*(*)(val* self))(var_mkind->class->vft[COLOR_standard__string__Object__to_s]))(var_mkind); /* to_s on <var_mkind:MClassKind>*/
}
((struct instance_standard__NativeArray*)var298)->values[3]=var313;
{
var314 = ((val*(*)(val* self))(var298->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var298); /* native_to_s on <var298:NativeArray[String]>*/
}
varonce297 = var298;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nkind, var314); /* error on <self:ModelBuilder>*/
}
} else {
if (var_nvisibility == NULL) {
var317 = 0; /* is null */
} else {
var317 = 1; /* arg is null and recv is not */
}
if (0) {
var318 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nvisibility, ((val*)NULL)); /* != on <var_nvisibility:nullable AVisibility>*/
var317 = var318;
}
var_319 = var317;
if (var317){
var320 = glob_sys;
{
var321 = ((val*(*)(val* self))(var320->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var320); /* public_visibility on <var320:Sys>*/
}
{
var322 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_mvisibility, var321); /* != on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
var316 = var322;
} else {
var316 = var_319;
}
var_323 = var316;
if (var316){
{
var324 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__visibility]))(var_mclass); /* visibility on <var_mclass:nullable MClass(MClass)>*/
}
{
var325 = ((short int(*)(val* self, val* p0))(var324->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var324, var_mvisibility); /* != on <var324:MVisibility>*/
}
var315 = var325;
} else {
var315 = var_323;
}
if (var315){
if (unlikely(varonce326==NULL)) {
var327 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = "Redef Error: refinement changed the visibility from `";
var331 = standard___standard__NativeString___to_s_with_length(var330, 53l);
var329 = var331;
varonce328 = var329;
}
((struct instance_standard__NativeArray*)var327)->values[0]=var329;
if (likely(varonce332!=NULL)) {
var333 = varonce332;
} else {
var334 = "` to `";
var335 = standard___standard__NativeString___to_s_with_length(var334, 6l);
var333 = var335;
varonce332 = var333;
}
((struct instance_standard__NativeArray*)var327)->values[2]=var333;
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "`";
var339 = standard___standard__NativeString___to_s_with_length(var338, 1l);
var337 = var339;
varonce336 = var337;
}
((struct instance_standard__NativeArray*)var327)->values[4]=var337;
} else {
var327 = varonce326;
varonce326 = NULL;
}
{
var340 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__visibility]))(var_mclass); /* visibility on <var_mclass:nullable MClass(MClass)>*/
}
{
var341 = ((val*(*)(val* self))(var340->class->vft[COLOR_standard__string__Object__to_s]))(var340); /* to_s on <var340:MVisibility>*/
}
((struct instance_standard__NativeArray*)var327)->values[1]=var341;
{
var342 = ((val*(*)(val* self))(var_mvisibility->class->vft[COLOR_standard__string__Object__to_s]))(var_mvisibility); /* to_s on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
((struct instance_standard__NativeArray*)var327)->values[3]=var342;
{
var343 = ((val*(*)(val* self))(var327->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var327); /* native_to_s on <var327:NativeArray[String]>*/
}
varonce326 = var327;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nvisibility, var343); /* error on <self:ModelBuilder>*/
}
} else {
}
}
}
}
}
}
{
((void(*)(val* self, val* p0))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclass_61d]))(var_nclassdef, var_mclass); /* mclass= on <var_nclassdef:AClassdef>*/
}
{
var344 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__modelize_class__AModule__mclass2nclassdef]))(var_nmodule); /* mclass2nclassdef on <var_nmodule:AModule>*/
}
{
var345 = ((short int(*)(val* self, val* p0))((((long)var344&3)?class_info[((long)var344&3)]:var344->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var344, var_mclass); /* has_key on <var344:Map[MClass, AClassdef]>*/
}
var346 = !var345;
if (var346){
{
var347 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__modelize_class__AModule__mclass2nclassdef]))(var_nmodule); /* mclass2nclassdef on <var_nmodule:AModule>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var347&3)?class_info[((long)var347&3)]:var347->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var347, var_mclass, var_nclassdef); /* []= on <var347:Map[MClass, AClassdef]>*/
}
var348 = NEW_standard__Array(&type_standard__Array__nit__AClassdef);
{
((void(*)(val* self, long p0))(var348->class->vft[COLOR_standard__array__Array__with_capacity]))(var348, 1l); /* with_capacity on <var348:Array[AClassdef]>*/
}
var_349 = var348;
{
((void(*)(val* self, val* p0))(var_349->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_349, var_nclassdef); /* push on <var_349:Array[AClassdef]>*/
}
{
((void(*)(val* self, val* p0))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__all_defs_61d]))(var_nclassdef, var_349); /* all_defs= on <var_nclassdef:AClassdef>*/
}
} else {
{
var350 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__modelize_class__AModule__mclass2nclassdef]))(var_nmodule); /* mclass2nclassdef on <var_nmodule:AModule>*/
}
{
var351 = ((val*(*)(val* self, val* p0))((((long)var350&3)?class_info[((long)var350&3)]:var350->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var350, var_mclass); /* [] on <var350:Map[MClass, AClassdef]>*/
}
{
var352 = ((val*(*)(val* self))(var351->class->vft[COLOR_nit__modelize_class__AClassdef__all_defs]))(var351); /* all_defs on <var351:nullable Object(AClassdef)>*/
}
if (var352 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 136);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var352->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var352, var_nclassdef); /* add on <var352:nullable Array[AClassdef]>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclassdef for (self: ModelBuilder, AModule, AClassdef) */
void nit__modelize_class___ModelBuilder___build_a_mclassdef(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var5 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Map[MClass, AClassdef] */;
val* var9 /* : nullable Object */;
val* var_other_nclassdef /* var other_nclassdef: AClassdef */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
short int var12 /* : Bool */;
val* var13 /* : nullable MClassDef */;
val* var14 /* : Array[MType] */;
val* var_bounds /* var bounds: Array[MType] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
short int var_ /* var : Bool */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name;
short int var25 /* : Bool */;
long var_i /* var i: Int */;
long var26 /* : Int */;
long var_27 /* var : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : ANodes[AFormaldef] */;
short int var36 /* : Bool */;
val* var37 /* : MClassDef */;
val* var38 /* : MClassType */;
val* var39 /* : Array[MType] */;
val* var40 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var41 /* : ANodes[AFormaldef] */;
val* var42 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var43 /* : Array[MParameterType] */;
val* var44 /* : nullable Object */;
val* var45 /* : String */;
val* var_pname /* var pname: String */;
val* var46 /* : TClassid */;
val* var47 /* : String */;
short int var48 /* : Bool */;
val* var49 /* : TClassid */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
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
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
val* var72 /* : String */;
val* var73 /* : TClassid */;
val* var74 /* : String */;
val* var75 /* : MClassDef */;
val* var76 /* : MModule */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var79 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable MType */;
val* var_bound83 /* var bound: nullable MType */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
short int var_102 /* var : Bool */;
val* var103 /* : MClass */;
val* var104 /* : MClassKind */;
val* var105 /* : Sys */;
val* var106 /* : MClassKind */;
short int var107 /* : Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : FlatString */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : FlatString */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : Array[MClassDef] */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : FlatString */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : FlatString */;
val* var138 /* : String */;
val* var139 /* : MClassType */;
val* var140 /* : MType */;
val* var_bound141 /* var bound: MType */;
val* var142 /* : MClassDef */;
val* var143 /* : MClassType */;
val* var144 /* : Array[MType] */;
val* var145 /* : nullable Object */;
val* var_bound146 /* var bound: MType */;
long var147 /* : Int */;
val* var149 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var150 /* : MClassDef */;
val* var151 /* : Location */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var152 /* : HashMap[MClassDef, AClassdef] */;
short int var153 /* : Bool */;
int cltype154;
int idtype155;
val* var156 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
val* var159 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var_162 /* var : Bool */;
val* var163 /* : MVisibility */;
val* var164 /* : Sys */;
val* var165 /* : MVisibility */;
short int var166 /* : Bool */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : FlatString */;
val* var172 /* : NativeArray[String] */;
static val* varonce171;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
val* var176 /* : FlatString */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : FlatString */;
val* var181 /* : String */;
val* var182 /* : String */;
short int var183 /* : Bool */;
val* var184 /* : ToolContext */;
val* var186 /* : NativeArray[String] */;
static val* varonce185;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : FlatString */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
val* var195 /* : String */;
val* var196 /* : MClassKind */;
val* var197 /* : String */;
val* var198 /* : String */;
val* var199 /* : String */;
val* var200 /* : ToolContext */;
val* var202 /* : NativeArray[String] */;
static val* varonce201;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : FlatString */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
val* var210 /* : FlatString */;
val* var211 /* : String */;
val* var212 /* : MClassKind */;
val* var213 /* : String */;
val* var214 /* : String */;
val* var215 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
var = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:AModule>*/
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 143);
fatal_exit(1);
}
var_mmodule = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Object";
var3 = standard___standard__NativeString___to_s_with_length(var2, 6l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(self, var_nmodule, var_mmodule, var1); /* try_get_mclass_by_name on <self:ModelBuilder>*/
}
var_objectclass = var4;
{
var5 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclass]))(var_nclassdef); /* mclass on <var_nclassdef:AClassdef>*/
}
var_mclass = var5;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__modelize_class__AModule__mclass2nclassdef]))(var_nmodule); /* mclass2nclassdef on <var_nmodule:AModule>*/
}
{
var9 = ((val*(*)(val* self, val* p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var8, var_mclass); /* [] on <var8:Map[MClass, AClassdef]>*/
}
var_other_nclassdef = var9;
{
var10 = ((short int(*)(val* self, val* p0))(var_other_nclassdef->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_other_nclassdef, var_nclassdef); /* != on <var_other_nclassdef:AClassdef>*/
}
if (var10){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var11 = 0;
} else {
var11 = var_nclassdef->type->type_table[cltype] == idtype;
}
var12 = !var11;
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 151);
fatal_exit(1);
}
{
var13 = ((val*(*)(val* self))(var_other_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef]))(var_other_nclassdef); /* mclassdef on <var_other_nclassdef:AClassdef>*/
}
{
((void(*)(val* self, val* p0))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef_61d]))(var_nclassdef, var13); /* mclassdef= on <var_nclassdef:AClassdef>*/
}
goto RET_LABEL;
} else {
}
var14 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
((void(*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__init]))(var14); /* init on <var14:Array[MType]>*/
}
var_bounds = var14;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype17 = type_nit__AStdClassdef.color;
idtype18 = type_nit__AStdClassdef.id;
if(cltype17 >= var_nclassdef->type->table_size) {
var16 = 0;
} else {
var16 = var_nclassdef->type->type_table[cltype17] == idtype18;
}
var_ = var16;
if (var16){
{
var19 = ((long(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__arity]))(var_mclass); /* arity on <var_mclass:nullable MClass(MClass)>*/
}
{
{ /* Inline kernel#Int#> (var19,0l) on <var19:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var25 = var19 > 0l;
var20 = var25;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var15 = var20;
} else {
var15 = var_;
}
if (var15){
var_i = 0l;
{
var26 = ((long(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__arity]))(var_mclass); /* arity on <var_mclass:nullable MClass(MClass)>*/
}
var_27 = var26;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_27) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_27:Int> isa OTHER */
/* <var_27:Int> isa OTHER */
var30 = 1; /* easy <var_27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var34 = var_i < var_27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
var35 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef); /* n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
{
var36 = ((short int(*)(val* self))(var35->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var35); /* is_empty on <var35:ANodes[AFormaldef]>*/
}
if (var36){
{
var37 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__intro]))(var_mclass); /* intro on <var_mclass:nullable MClass(MClass)>*/
}
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var37); /* bound_mtype on <var37:MClassDef>*/
}
{
var39 = ((val*(*)(val* self))(var38->class->vft[COLOR_nit__model__MClassType__arguments]))(var38); /* arguments on <var38:MClassType>*/
}
{
var40 = ((val*(*)(val* self, long p0))(var39->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var39, var_i); /* [] on <var39:Array[MType]>*/
}
var_bound = var40;
{
((void(*)(val* self, val* p0))(var_bounds->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_bounds, var_bound); /* add on <var_bounds:Array[MType]>*/
}
goto BREAK_label;
} else {
}
{
var41 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef); /* n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
{
var42 = ((val*(*)(val* self, long p0))(var41->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var41, var_i); /* [] on <var41:ANodes[AFormaldef]>*/
}
var_nfd = var42;
{
var43 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mparameters]))(var_mclass); /* mparameters on <var_mclass:nullable MClass(MClass)>*/
}
{
var44 = ((val*(*)(val* self, long p0))(var43->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var43, var_i); /* [] on <var43:Array[MParameterType]>*/
}
{
var45 = ((val*(*)(val* self))(var44->class->vft[COLOR_nit__model_base__MEntity__name]))(var44); /* name on <var44:nullable Object(MParameterType)>*/
}
var_pname = var45;
{
var46 = ((val*(*)(val* self))(var_nfd->class->vft[COLOR_nit__parser_nodes__AFormaldef__n_id]))(var_nfd); /* n_id on <var_nfd:AFormaldef>*/
}
{
var47 = ((val*(*)(val* self))(var46->class->vft[COLOR_nit__parser_nodes__Token__text]))(var46); /* text on <var46:TClassid>*/
}
{
var48 = ((short int(*)(val* self, val* p0))(var47->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var47, var_pname); /* != on <var47:String>*/
}
if (var48){
{
var49 = ((val*(*)(val* self))(var_nfd->class->vft[COLOR_nit__parser_nodes__AFormaldef__n_id]))(var_nfd); /* n_id on <var_nfd:AFormaldef>*/
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Error: formal parameter type #";
var55 = standard___standard__NativeString___to_s_with_length(var54, 30l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var51)->values[0]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = " `";
var59 = standard___standard__NativeString___to_s_with_length(var58, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var51)->values[2]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "` must be named `";
var63 = standard___standard__NativeString___to_s_with_length(var62, 17l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var51)->values[4]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "` as in the original definition in module `";
var67 = standard___standard__NativeString___to_s_with_length(var66, 43l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var51)->values[6]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "`.";
var71 = standard___standard__NativeString___to_s_with_length(var70, 2l);
var69 = var71;
varonce68 = var69;
}
((struct instance_standard__NativeArray*)var51)->values[8]=var69;
} else {
var51 = varonce50;
varonce50 = NULL;
}
var72 = standard__string___Int___Object__to_s(var_i);
((struct instance_standard__NativeArray*)var51)->values[1]=var72;
{
var73 = ((val*(*)(val* self))(var_nfd->class->vft[COLOR_nit__parser_nodes__AFormaldef__n_id]))(var_nfd); /* n_id on <var_nfd:AFormaldef>*/
}
{
var74 = ((val*(*)(val* self))(var73->class->vft[COLOR_nit__parser_nodes__Token__text]))(var73); /* text on <var73:TClassid>*/
}
((struct instance_standard__NativeArray*)var51)->values[3]=var74;
((struct instance_standard__NativeArray*)var51)->values[5]=var_pname;
{
var75 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__intro]))(var_mclass); /* intro on <var_mclass:nullable MClass(MClass)>*/
}
{
var76 = ((val*(*)(val* self))(var75->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var75); /* mmodule on <var75:MClassDef>*/
}
{
var77 = ((val*(*)(val* self))(var76->class->vft[COLOR_standard__string__Object__to_s]))(var76); /* to_s on <var76:MModule>*/
}
((struct instance_standard__NativeArray*)var51)->values[7]=var77;
{
var78 = ((val*(*)(val* self))(var51->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var49, var78); /* error on <self:ModelBuilder>*/
}
} else {
}
{
var79 = ((val*(*)(val* self))(var_nfd->class->vft[COLOR_nit__parser_nodes__AFormaldef__n_type]))(var_nfd); /* n_type on <var_nfd:AFormaldef>*/
}
var_nfdt = var79;
if (var_nfdt == NULL) {
var80 = 0; /* is null */
} else {
var80 = 1; /* arg is null and recv is not */
}
if (0) {
var81 = ((short int(*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nfdt, ((val*)NULL)); /* != on <var_nfdt:nullable AType>*/
var80 = var81;
}
if (var80){
{
var82 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(self, var_mmodule, ((val*)NULL), var_nfdt, 0); /* resolve_mtype_unchecked on <self:ModelBuilder>*/
}
var_bound83 = var82;
if (var_bound83 == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (0) {
var85 = ((short int(*)(val* self, val* p0))(var_bound83->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_bound83, ((val*)NULL)); /* == on <var_bound83:nullable MType>*/
var84 = var85;
}
if (var84){
goto RET_LABEL;
} else {
}
{
var86 = ((short int(*)(val* self))(var_bound83->class->vft[COLOR_nit__model__MType__need_anchor]))(var_bound83); /* need_anchor on <var_bound83:nullable MType(MType)>*/
}
if (var86){
if (unlikely(varonce87==NULL)) {
var88 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "Error: formal parameter type `";
var92 = standard___standard__NativeString___to_s_with_length(var91, 30l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var88)->values[0]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "` bounded with a formal parameter type.";
var96 = standard___standard__NativeString___to_s_with_length(var95, 39l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var88)->values[2]=var94;
} else {
var88 = varonce87;
varonce87 = NULL;
}
((struct instance_standard__NativeArray*)var88)->values[1]=var_pname;
{
var97 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nfd, var97); /* error on <self:ModelBuilder>*/
}
} else {
{
((void(*)(val* self, val* p0))(var_bounds->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_bounds, var_bound83); /* add on <var_bounds:Array[MType]>*/
}
{
((void(*)(val* self, val* p0))(var_nfd->class->vft[COLOR_nit__modelize_class__AFormaldef__bound_61d]))(var_nfd, var_bound83); /* bound= on <var_nfd:AFormaldef>*/
}
}
/* <var_bound83:nullable MType(MType)> isa MClassType */
cltype100 = type_nit__MClassType.color;
idtype101 = type_nit__MClassType.id;
if(cltype100 >= var_bound83->type->table_size) {
var99 = 0;
} else {
var99 = var_bound83->type->type_table[cltype100] == idtype101;
}
var_102 = var99;
if (var99){
{
var103 = ((val*(*)(val* self))(var_bound83->class->vft[COLOR_nit__model__MClassType__mclass]))(var_bound83); /* mclass on <var_bound83:nullable MType(MClassType)>*/
}
{
var104 = ((val*(*)(val* self))(var103->class->vft[COLOR_nit__model__MClass__kind]))(var103); /* kind on <var103:MClass>*/
}
var105 = glob_sys;
{
var106 = ((val*(*)(val* self))(var105->class->vft[COLOR_nit__model__Sys__enum_kind]))(var105); /* enum_kind on <var105:Sys>*/
}
{
var107 = ((short int(*)(val* self, val* p0))(var104->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var104, var106); /* == on <var104:MClassKind>*/
}
var98 = var107;
} else {
var98 = var_102;
}
if (var98){
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "useless-bound";
var111 = standard___standard__NativeString___to_s_with_length(var110, 13l);
var109 = var111;
varonce108 = var109;
}
if (unlikely(varonce112==NULL)) {
var113 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "Warning: useless formal parameter type since `";
var117 = standard___standard__NativeString___to_s_with_length(var116, 46l);
var115 = var117;
varonce114 = var115;
}
((struct instance_standard__NativeArray*)var113)->values[0]=var115;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "` cannot have subclasses.";
var121 = standard___standard__NativeString___to_s_with_length(var120, 25l);
var119 = var121;
varonce118 = var119;
}
((struct instance_standard__NativeArray*)var113)->values[2]=var119;
} else {
var113 = varonce112;
varonce112 = NULL;
}
{
var122 = ((val*(*)(val* self))(var_bound83->class->vft[COLOR_standard__string__Object__to_s]))(var_bound83); /* to_s on <var_bound83:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var113)->values[1]=var122;
{
var123 = ((val*(*)(val* self))(var113->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(self, var_nfdt, var109, var123); /* warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
var124 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclassdefs]))(var_mclass); /* mclassdefs on <var_mclass:nullable MClass(MClass)>*/
}
{
var125 = ((short int(*)(val* self))(var124->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var124); /* is_empty on <var124:Array[MClassDef]>*/
}
if (var125){
if (var_objectclass == NULL) {
var126 = 1; /* is null */
} else {
var126 = 0; /* arg is null but recv is not */
}
if (0) {
var127 = ((short int(*)(val* self, val* p0))(var_objectclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_objectclass, ((val*)NULL)); /* == on <var_objectclass:nullable MClass>*/
var126 = var127;
}
if (var126){
if (unlikely(varonce128==NULL)) {
var129 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "Error: formal parameter type `";
var133 = standard___standard__NativeString___to_s_with_length(var132, 30l);
var131 = var133;
varonce130 = var131;
}
((struct instance_standard__NativeArray*)var129)->values[0]=var131;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "` unbounded but no `Object` class exists.";
var137 = standard___standard__NativeString___to_s_with_length(var136, 41l);
var135 = var137;
varonce134 = var135;
}
((struct instance_standard__NativeArray*)var129)->values[2]=var135;
} else {
var129 = varonce128;
varonce128 = NULL;
}
((struct instance_standard__NativeArray*)var129)->values[1]=var_pname;
{
var138 = ((val*(*)(val* self))(var129->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nfd, var138); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var139 = ((val*(*)(val* self))(var_objectclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_objectclass); /* mclass_type on <var_objectclass:nullable MClass(MClass)>*/
}
{
var140 = ((val*(*)(val* self))(var139->class->vft[COLOR_nit__model__MType__as_nullable]))(var139); /* as_nullable on <var139:MClassType>*/
}
var_bound141 = var140;
{
((void(*)(val* self, val* p0))(var_bounds->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_bounds, var_bound141); /* add on <var_bounds:Array[MType]>*/
}
{
((void(*)(val* self, val* p0))(var_nfd->class->vft[COLOR_nit__modelize_class__AFormaldef__bound_61d]))(var_nfd, var_bound141); /* bound= on <var_nfd:AFormaldef>*/
}
} else {
{
var142 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__intro]))(var_mclass); /* intro on <var_mclass:nullable MClass(MClass)>*/
}
{
var143 = ((val*(*)(val* self))(var142->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var142); /* bound_mtype on <var142:MClassDef>*/
}
{
var144 = ((val*(*)(val* self))(var143->class->vft[COLOR_nit__model__MClassType__arguments]))(var143); /* arguments on <var143:MClassType>*/
}
{
var145 = ((val*(*)(val* self, long p0))(var144->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var144, var_i); /* [] on <var144:Array[MType]>*/
}
var_bound146 = var145;
{
((void(*)(val* self, val* p0))(var_bounds->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_bounds, var_bound146); /* add on <var_bounds:Array[MType]>*/
}
{
((void(*)(val* self, val* p0))(var_nfd->class->vft[COLOR_nit__modelize_class__AFormaldef__bound_61d]))(var_nfd, var_bound146); /* bound= on <var_nfd:AFormaldef>*/
}
}
}
BREAK_label: (void)0;
var147 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var147;
} else {
goto BREAK_label148;
}
}
BREAK_label148: (void)0;
} else {
}
{
var149 = ((val*(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_nit__model__MClass__get_mtype]))(var_mclass, var_bounds); /* get_mtype on <var_mclass:nullable MClass(MClass)>*/
}
var_bound_mtype = var149;
var150 = NEW_nit__MClassDef(&type_nit__MClassDef);
{
var151 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_nclassdef); /* location on <var_nclassdef:AClassdef>*/
}
{
((void(*)(val* self, val* p0))(var150->class->vft[COLOR_nit__model__MClassDef__mmodule_61d]))(var150, var_mmodule); /* mmodule= on <var150:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var150->class->vft[COLOR_nit__model__MClassDef__bound_mtype_61d]))(var150, var_bound_mtype); /* bound_mtype= on <var150:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var150->class->vft[COLOR_nit__model__MClassDef__location_61d]))(var150, var151); /* location= on <var150:MClassDef>*/
}
{
((void(*)(val* self))(var150->class->vft[COLOR_standard__kernel__Object__init]))(var150); /* init on <var150:MClassDef>*/
}
var_mclassdef = var150;
{
((void(*)(val* self, val* p0))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef_61d]))(var_nclassdef, var_mclassdef); /* mclassdef= on <var_nclassdef:AClassdef>*/
}
{
var152 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__mclassdef2nclassdef]))(self); /* mclassdef2nclassdef on <self:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var152->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var152, var_mclassdef, var_nclassdef); /* []= on <var152:HashMap[MClassDef, AClassdef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype154 = type_nit__AStdClassdef.color;
idtype155 = type_nit__AStdClassdef.id;
if(cltype154 >= var_nclassdef->type->table_size) {
var153 = 0;
} else {
var153 = var_nclassdef->type->type_table[cltype154] == idtype155;
}
if (var153){
{
var156 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__ADefinition__n_doc]))(var_nclassdef); /* n_doc on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
var_ndoc = var156;
if (var_ndoc == NULL) {
var157 = 0; /* is null */
} else {
var157 = 1; /* arg is null and recv is not */
}
if (0) {
var158 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ndoc, ((val*)NULL)); /* != on <var_ndoc:nullable ADoc>*/
var157 = var158;
}
if (var157){
{
var159 = ((val*(*)(val* self))(var_ndoc->class->vft[COLOR_nit__modelbuilder_base__ADoc__to_mdoc]))(var_ndoc); /* to_mdoc on <var_ndoc:nullable ADoc(ADoc)>*/
}
var_mdoc = var159;
{
((void(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_nit__mdoc__MEntity__mdoc_61d]))(var_mclassdef, var_mdoc); /* mdoc= on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_mdoc->class->vft[COLOR_nit__mdoc__MDoc__original_mentity_61d]))(var_mdoc, var_mclassdef); /* original_mentity= on <var_mdoc:MDoc>*/
}
} else {
{
var161 = ((short int(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__is_intro]))(var_mclassdef); /* is_intro on <var_mclassdef:MClassDef>*/
}
var_162 = var161;
if (var161){
{
var163 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__visibility]))(var_mclass); /* visibility on <var_mclass:nullable MClass(MClass)>*/
}
var164 = glob_sys;
{
var165 = ((val*(*)(val* self))(var164->class->vft[COLOR_nit__model_base__Sys__public_visibility]))(var164); /* public_visibility on <var164:Sys>*/
}
{
var166 = ((short int(*)(val* self, val* p0))(var163->class->vft[COLOR_standard__kernel__Comparable___62d_61d]))(var163, var165); /* >= on <var163:MVisibility>*/
}
var160 = var166;
} else {
var160 = var_162;
}
if (var160){
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "missing-doc";
var170 = standard___standard__NativeString___to_s_with_length(var169, 11l);
var168 = var170;
varonce167 = var168;
}
if (unlikely(varonce171==NULL)) {
var172 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "Documentation warning: Undocumented public class `";
var176 = standard___standard__NativeString___to_s_with_length(var175, 50l);
var174 = var176;
varonce173 = var174;
}
((struct instance_standard__NativeArray*)var172)->values[0]=var174;
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "`";
var180 = standard___standard__NativeString___to_s_with_length(var179, 1l);
var178 = var180;
varonce177 = var178;
}
((struct instance_standard__NativeArray*)var172)->values[2]=var178;
} else {
var172 = varonce171;
varonce171 = NULL;
}
{
var181 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var172)->values[1]=var181;
{
var182 = ((val*(*)(val* self))(var172->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var172); /* native_to_s on <var172:NativeArray[String]>*/
}
varonce171 = var172;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__advice]))(self, var_nclassdef, var168, var182); /* advice on <self:ModelBuilder>*/
}
} else {
}
}
} else {
}
{
var183 = ((short int(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__is_intro]))(var_mclassdef); /* is_intro on <var_mclassdef:MClassDef>*/
}
if (var183){
{
var184 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce185==NULL)) {
var186 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = " introduces new ";
var190 = standard___standard__NativeString___to_s_with_length(var189, 16l);
var188 = var190;
varonce187 = var188;
}
((struct instance_standard__NativeArray*)var186)->values[1]=var188;
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = " ";
var194 = standard___standard__NativeString___to_s_with_length(var193, 1l);
var192 = var194;
varonce191 = var192;
}
((struct instance_standard__NativeArray*)var186)->values[3]=var192;
} else {
var186 = varonce185;
varonce185 = NULL;
}
{
var195 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var186)->values[0]=var195;
{
var196 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__kind]))(var_mclass); /* kind on <var_mclass:nullable MClass(MClass)>*/
}
{
var197 = ((val*(*)(val* self))(var196->class->vft[COLOR_standard__string__Object__to_s]))(var196); /* to_s on <var196:MClassKind>*/
}
((struct instance_standard__NativeArray*)var186)->values[2]=var197;
{
var198 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mclass); /* full_name on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var186)->values[4]=var198;
{
var199 = ((val*(*)(val* self))(var186->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var186); /* native_to_s on <var186:NativeArray[String]>*/
}
varonce185 = var186;
{
((void(*)(val* self, val* p0, long p1))(var184->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var184, var199, 3l); /* info on <var184:ToolContext>*/
}
} else {
{
var200 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce201==NULL)) {
var202 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = " refine ";
var206 = standard___standard__NativeString___to_s_with_length(var205, 8l);
var204 = var206;
varonce203 = var204;
}
((struct instance_standard__NativeArray*)var202)->values[1]=var204;
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = " ";
var210 = standard___standard__NativeString___to_s_with_length(var209, 1l);
var208 = var210;
varonce207 = var208;
}
((struct instance_standard__NativeArray*)var202)->values[3]=var208;
} else {
var202 = varonce201;
varonce201 = NULL;
}
{
var211 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var202)->values[0]=var211;
{
var212 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__kind]))(var_mclass); /* kind on <var_mclass:nullable MClass(MClass)>*/
}
{
var213 = ((val*(*)(val* self))(var212->class->vft[COLOR_standard__string__Object__to_s]))(var212); /* to_s on <var212:MClassKind>*/
}
((struct instance_standard__NativeArray*)var202)->values[2]=var213;
{
var214 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_mclass); /* full_name on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var202)->values[4]=var214;
{
var215 = ((val*(*)(val* self))(var202->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var202); /* native_to_s on <var202:NativeArray[String]>*/
}
varonce201 = var202;
{
((void(*)(val* self, val* p0, long p1))(var200->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var200, var215, 3l); /* info on <var200:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#collect_a_mclassdef_inheritance for (self: ModelBuilder, AModule, AClassdef) */
void nit__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : nullable MClass */;
val* var_pointerclass /* var pointerclass: nullable MClass */;
val* var12 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_specobject /* var specobject: Bool */;
short int var_specpointer /* var specpointer: Bool */;
val* var18 /* : Array[MClassType] */;
val* var_supertypes /* var supertypes: Array[MClassType] */;
short int var19 /* : Bool */;
int cltype;
int idtype;
val* var20 /* : Array[ASuperPropdef] */;
val* var_ /* var : Array[ASuperPropdef] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : ArrayIterator[ASuperPropdef] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperPropdef */;
val* var25 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var26 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
val* var37 /* : MClassKind */;
val* var38 /* : MClass */;
val* var39 /* : MClassKind */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : MClassKind */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : MClass */;
val* var68 /* : MClassKind */;
val* var69 /* : String */;
val* var70 /* : MClass */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : MClass */;
val* var74 /* : MClassKind */;
val* var75 /* : Sys */;
val* var76 /* : MClassKind */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var_81 /* var : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
val* var85 /* : MClassKind */;
val* var86 /* : Sys */;
val* var87 /* : MClassKind */;
short int var88 /* : Bool */;
short int var_89 /* var : Bool */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
short int var95 /* : Bool */;
val* var96 /* : MClassType */;
short int var97 /* : Bool */;
short int var_98 /* var : Bool */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
short int var104 /* : Bool */;
val* var105 /* : MClassType */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : ToolContext */;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : FlatString */;
val* var120 /* : String */;
val* var121 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
var = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:AModule>*/
}
var_mmodule = var;
if (var_mmodule == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Object";
var5 = standard___standard__NativeString___to_s_with_length(var4, 6l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(self, var_nmodule, var_mmodule, var3); /* try_get_mclass_by_name on <self:ModelBuilder>*/
}
var_objectclass = var6;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Pointer";
var10 = standard___standard__NativeString___to_s_with_length(var9, 7l);
var8 = var10;
varonce7 = var8;
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(self, var_nmodule, var_mmodule, var8); /* try_get_mclass_by_name on <self:ModelBuilder>*/
}
var_pointerclass = var11;
{
var12 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclass]))(var_nclassdef); /* mclass on <var_nclassdef:AClassdef>*/
}
var_mclass = var12;
if (var_mclass == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var13 = var14;
}
if (var13){
goto RET_LABEL;
} else {
}
{
var15 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef]))(var_nclassdef); /* mclassdef on <var_nclassdef:AClassdef>*/
}
var_mclassdef = var15;
if (var_mclassdef == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, ((val*)NULL)); /* == on <var_mclassdef:nullable MClassDef>*/
var16 = var17;
}
if (var16){
goto RET_LABEL;
} else {
}
var_specobject = 1;
var_specpointer = 1;
var18 = NEW_standard__Array(&type_standard__Array__nit__MClassType);
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:Array[MClassType]>*/
}
var_supertypes = var18;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var19 = 0;
} else {
var19 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var19){
{
var20 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_superclasses]))(var_nclassdef); /* n_superclasses on <var_nclassdef:AClassdef(AStdClassdef)>*/
}
var_ = var20;
{
var21 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[ASuperPropdef]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:ArrayIterator[ASuperPropdef]>*/
}
if (var23){
{
var24 = ((val*(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:ArrayIterator[ASuperPropdef]>*/
}
var_nsc = var24;
var_specobject = 0;
{
var25 = ((val*(*)(val* self))(var_nsc->class->vft[COLOR_nit__parser_nodes__ASuperPropdef__n_type]))(var_nsc); /* n_type on <var_nsc:ASuperPropdef>*/
}
var_ntype = var25;
{
var26 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype_unchecked]))(self, var_mmodule, var_mclassdef, var_ntype, 0); /* resolve_mtype_unchecked on <self:ModelBuilder>*/
}
var_mtype = var26;
if (var_mtype == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
var28 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var27 = var28;
}
if (var27){
goto BREAK_label;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype30 = type_nit__MClassType.color;
idtype31 = type_nit__MClassType.id;
if(cltype30 >= var_mtype->type->table_size) {
var29 = 0;
} else {
var29 = var_mtype->type->type_table[cltype30] == idtype31;
}
var32 = !var29;
if (var32){
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "Error: supertypes cannot be a formal type.";
var36 = standard___standard__NativeString___to_s_with_length(var35, 42l);
var34 = var36;
varonce33 = var34;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_ntype, var34); /* error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var37 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__kind]))(var_mclass); /* kind on <var_mclass:nullable MClass(MClass)>*/
}
{
var38 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype); /* mclass on <var_mtype:nullable MType(MClassType)>*/
}
{
var39 = ((val*(*)(val* self))(var38->class->vft[COLOR_nit__model__MClass__kind]))(var38); /* kind on <var38:MClass>*/
}
{
var40 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_nit__model__MClassKind__can_specialize]))(var37, var39); /* can_specialize on <var37:MClassKind>*/
}
var41 = !var40;
if (var41){
if (unlikely(varonce42==NULL)) {
var43 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Error: ";
var47 = standard___standard__NativeString___to_s_with_length(var46, 7l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = " `";
var51 = standard___standard__NativeString___to_s_with_length(var50, 2l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var43)->values[2]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "` cannot specialize ";
var55 = standard___standard__NativeString___to_s_with_length(var54, 20l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var43)->values[4]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = " `";
var59 = standard___standard__NativeString___to_s_with_length(var58, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var43)->values[6]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "`.";
var63 = standard___standard__NativeString___to_s_with_length(var62, 2l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var43)->values[8]=var61;
} else {
var43 = varonce42;
varonce42 = NULL;
}
{
var64 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__kind]))(var_mclass); /* kind on <var_mclass:nullable MClass(MClass)>*/
}
{
var65 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__Object__to_s]))(var64); /* to_s on <var64:MClassKind>*/
}
((struct instance_standard__NativeArray*)var43)->values[1]=var65;
{
var66 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var43)->values[3]=var66;
{
var67 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype); /* mclass on <var_mtype:nullable MType(MClassType)>*/
}
{
var68 = ((val*(*)(val* self))(var67->class->vft[COLOR_nit__model__MClass__kind]))(var67); /* kind on <var67:MClass>*/
}
{
var69 = ((val*(*)(val* self))(var68->class->vft[COLOR_standard__string__Object__to_s]))(var68); /* to_s on <var68:MClassKind>*/
}
((struct instance_standard__NativeArray*)var43)->values[5]=var69;
{
var70 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype); /* mclass on <var_mtype:nullable MType(MClassType)>*/
}
{
var71 = ((val*(*)(val* self))(var70->class->vft[COLOR_standard__string__Object__to_s]))(var70); /* to_s on <var70:MClass>*/
}
((struct instance_standard__NativeArray*)var43)->values[7]=var71;
{
var72 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_ntype, var72); /* error on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(var_supertypes->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_supertypes, var_mtype); /* add on <var_supertypes:Array[MClassType]>*/
}
{
var73 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype); /* mclass on <var_mtype:nullable MType(MClassType)>*/
}
{
var74 = ((val*(*)(val* self))(var73->class->vft[COLOR_nit__model__MClass__kind]))(var73); /* kind on <var73:MClass>*/
}
var75 = glob_sys;
{
var76 = ((val*(*)(val* self))(var75->class->vft[COLOR_nit__model__Sys__extern_kind]))(var75); /* extern_kind on <var75:Sys>*/
}
{
var77 = ((short int(*)(val* self, val* p0))(var74->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var74, var76); /* == on <var74:MClassKind>*/
}
if (var77){
var_specpointer = 0;
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:ArrayIterator[ASuperPropdef]>*/
}
} else {
goto BREAK_label78;
}
}
BREAK_label78: (void)0;
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:ArrayIterator[ASuperPropdef]>*/
}
} else {
}
{
var80 = ((short int(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__is_intro]))(var_mclassdef); /* is_intro on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var_81 = var80;
if (var80){
if (var_objectclass == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
var83 = ((short int(*)(val* self, val* p0))(var_objectclass->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_objectclass, ((val*)NULL)); /* != on <var_objectclass:nullable MClass>*/
var82 = var83;
}
var79 = var82;
} else {
var79 = var_81;
}
if (var79){
{
var85 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__kind]))(var_mclass); /* kind on <var_mclass:nullable MClass(MClass)>*/
}
var86 = glob_sys;
{
var87 = ((val*(*)(val* self))(var86->class->vft[COLOR_nit__model__Sys__extern_kind]))(var86); /* extern_kind on <var86:Sys>*/
}
{
var88 = ((short int(*)(val* self, val* p0))(var85->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var85, var87); /* == on <var85:MClassKind>*/
}
var_89 = var88;
if (var88){
{
var90 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:nullable MClass(MClass)>*/
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "Pointer";
var94 = standard___standard__NativeString___to_s_with_length(var93, 7l);
var92 = var94;
varonce91 = var92;
}
{
var95 = ((short int(*)(val* self, val* p0))(var90->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var90, var92); /* != on <var90:String>*/
}
var84 = var95;
} else {
var84 = var_89;
}
if (var84){
if (var_specpointer){
if (var_pointerclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 269);
fatal_exit(1);
} else {
var96 = ((val*(*)(val* self))(var_pointerclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_pointerclass); /* mclass_type on <var_pointerclass:nullable MClass>*/
}
{
((void(*)(val* self, val* p0))(var_supertypes->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_supertypes, var96); /* add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
} else {
var_98 = var_specobject;
if (var_specobject){
{
var99 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:nullable MClass(MClass)>*/
}
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Object";
var103 = standard___standard__NativeString___to_s_with_length(var102, 6l);
var101 = var103;
varonce100 = var101;
}
{
var104 = ((short int(*)(val* self, val* p0))(var99->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var99, var101); /* != on <var99:String>*/
}
var97 = var104;
} else {
var97 = var_98;
}
if (var97){
{
var105 = ((val*(*)(val* self))(var_objectclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_objectclass); /* mclass_type on <var_objectclass:nullable MClass(MClass)>*/
}
{
((void(*)(val* self, val* p0))(var_supertypes->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_supertypes, var105); /* add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
}
} else {
}
{
((void(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__set_supertypes]))(var_mclassdef, var_supertypes); /* set_supertypes on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var106 = ((short int(*)(val* self))(var_supertypes->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_supertypes); /* is_empty on <var_supertypes:Array[MClassType]>*/
}
var107 = !var106;
if (var107){
{
var108 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
if (unlikely(varonce109==NULL)) {
var110 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = " new super-types: ";
var114 = standard___standard__NativeString___to_s_with_length(var113, 18l);
var112 = var114;
varonce111 = var112;
}
((struct instance_standard__NativeArray*)var110)->values[1]=var112;
} else {
var110 = varonce109;
varonce109 = NULL;
}
{
var115 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
((struct instance_standard__NativeArray*)var110)->values[0]=var115;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = ", ";
var119 = standard___standard__NativeString___to_s_with_length(var118, 2l);
var117 = var119;
varonce116 = var117;
}
{
var120 = ((val*(*)(val* self, val* p0))(var_supertypes->class->vft[COLOR_standard__string__Collection__join]))(var_supertypes, var117); /* join on <var_supertypes:Array[MClassType]>*/
}
((struct instance_standard__NativeArray*)var110)->values[2]=var120;
{
var121 = ((val*(*)(val* self))(var110->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
((void(*)(val* self, val* p0, long p1))(var108->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var108, var121, 3l); /* info on <var108:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#check_supertypes for (self: ModelBuilder, AModule, AClassdef) */
void nit__modelize_class___ModelBuilder___check_supertypes(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[MClassType] */;
val* var_ /* var : Array[MClassType] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MClassType] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassType */;
short int var16 /* : Bool */;
val* var17 /* : NativeArray[String] */;
static val* varonce;
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
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
var = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:AModule>*/
}
var_mmodule = var;
if (var_mmodule == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclass]))(var_nclassdef); /* mclass on <var_nclassdef:AClassdef>*/
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, ((val*)NULL)); /* == on <var_mclass:nullable MClass>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_nclassdef->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef]))(var_nclassdef); /* mclassdef on <var_nclassdef:AClassdef>*/
}
var_mclassdef = var6;
if (var_mclassdef == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, ((val*)NULL)); /* == on <var_mclassdef:nullable MClassDef>*/
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__supertypes]))(var_mclassdef); /* supertypes on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var_ = var9;
{
var10 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassType]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:ArrayIterator[MClassType]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:ArrayIterator[MClassType]>*/
}
var_s = var13;
{
var14 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var15 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var16 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_s->class->vft[COLOR_nit__model__MType__is_subtype]))(var_s, var_mmodule, var14, var15); /* is_subtype on <var_s:MClassType>*/
}
if (var16){
if (unlikely(varonce==NULL)) {
var17 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "Error: inheritance loop for class `";
var21 = standard___standard__NativeString___to_s_with_length(var20, 35l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "` with type `";
var25 = standard___standard__NativeString___to_s_with_length(var24, 13l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var17)->values[2]=var23;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "`.";
var29 = standard___standard__NativeString___to_s_with_length(var28, 2l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var17)->values[4]=var27;
} else {
var17 = varonce;
varonce = NULL;
}
{
var30 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var17)->values[1]=var30;
{
var31 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:MClassType>*/
}
((struct instance_standard__NativeArray*)var17)->values[3]=var31;
{
var32 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce = var17;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nclassdef, var32); /* error on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:ArrayIterator[MClassType]>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_classes for (self: ModelBuilder, AModule) */
void nit__modelize_class___ModelBuilder___build_classes(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
long var1 /* : Int */;
long var_errcount /* var errcount: Int */;
short int var2 /* : Bool */;
val* var3 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : POSetElement[MModule] */;
val* var7 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[MModule] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_imp /* var imp: MModule */;
val* var12 /* : nullable AModule */;
val* var_nimp /* var nimp: nullable AModule */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : ToolContext */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : ANodes[AClassdef] */;
val* var_22 /* var : ANodes[AClassdef] */;
val* var23 /* : Iterator[nullable Object] */;
val* var_24 /* var : Iterator[AClassdef] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var27 /* : Bool */;
int cltype;
int idtype;
short int var28 /* : Bool */;
val* var31 /* : ANodes[AClassdef] */;
val* var_32 /* var : ANodes[AClassdef] */;
val* var33 /* : Iterator[nullable Object] */;
val* var_34 /* var : Iterator[AClassdef] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_nclassdef37 /* var nclassdef: AClassdef */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var43 /* : ToolContext */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : ANodes[AClassdef] */;
val* var_50 /* var : ANodes[AClassdef] */;
val* var51 /* : Iterator[nullable Object] */;
val* var_52 /* var : Iterator[AClassdef] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_nclassdef55 /* var nclassdef: AClassdef */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
short int var59 /* : Bool */;
val* var62 /* : ANodes[AClassdef] */;
val* var_63 /* var : ANodes[AClassdef] */;
val* var64 /* : Iterator[nullable Object] */;
val* var_65 /* var : Iterator[AClassdef] */;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
val* var_nclassdef68 /* var nclassdef: AClassdef */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
val* var74 /* : ToolContext */;
long var75 /* : Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : ANodes[AClassdef] */;
val* var_81 /* var : ANodes[AClassdef] */;
val* var82 /* : Iterator[nullable Object] */;
val* var_83 /* var : Iterator[AClassdef] */;
short int var84 /* : Bool */;
val* var85 /* : nullable Object */;
val* var_nclassdef86 /* var nclassdef: AClassdef */;
val* var88 /* : ToolContext */;
long var89 /* : Int */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : Array[MClassDef] */;
val* var_95 /* var : Array[MClassDef] */;
val* var96 /* : Iterator[nullable Object] */;
val* var_97 /* var : ArrayIterator[MClassDef] */;
short int var98 /* : Bool */;
val* var99 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var101 /* : ToolContext */;
long var102 /* : Int */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var107 /* : ANodes[AClassdef] */;
val* var_108 /* var : ANodes[AClassdef] */;
val* var109 /* : Iterator[nullable Object] */;
val* var_110 /* var : Iterator[AClassdef] */;
short int var111 /* : Bool */;
val* var112 /* : nullable Object */;
val* var_nclassdef113 /* var nclassdef: AClassdef */;
val* var115 /* : ToolContext */;
long var116 /* : Int */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
val* var121 /* : ANodes[AClassdef] */;
val* var_122 /* var : ANodes[AClassdef] */;
val* var123 /* : Iterator[nullable Object] */;
val* var_124 /* var : Iterator[AClassdef] */;
short int var125 /* : Bool */;
val* var126 /* : nullable Object */;
val* var_nclassdef127 /* var nclassdef: AClassdef */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
val* var131 /* : nullable MClassDef */;
val* var_mclassdef132 /* var mclassdef: nullable MClassDef */;
val* var133 /* : ANodes[AFormaldef] */;
val* var_134 /* var : ANodes[AFormaldef] */;
val* var135 /* : Iterator[nullable Object] */;
val* var_136 /* var : Iterator[AFormaldef] */;
short int var137 /* : Bool */;
val* var138 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var139 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var_143 /* var : Bool */;
val* var144 /* : nullable MType */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
val* var147 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
val* var151 /* : Array[ASuperPropdef] */;
val* var_152 /* var : Array[ASuperPropdef] */;
val* var153 /* : Iterator[nullable Object] */;
val* var_154 /* var : ArrayIterator[ASuperPropdef] */;
short int var155 /* : Bool */;
val* var156 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperPropdef */;
val* var157 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var158 /* : nullable MType */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
val* var161 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var166 /* : ToolContext */;
long var167 /* : Int */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
val* var172 /* : ANodes[AClassdef] */;
val* var_173 /* var : ANodes[AClassdef] */;
val* var174 /* : Iterator[nullable Object] */;
val* var_175 /* var : Iterator[AClassdef] */;
short int var176 /* : Bool */;
val* var177 /* : nullable Object */;
val* var_nclassdef178 /* var nclassdef: AClassdef */;
val* var179 /* : nullable MClassDef */;
val* var_mclassdef180 /* var mclassdef: nullable MClassDef */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
val* var184 /* : HashMap[MClass, MClassType] */;
val* var_superclasses /* var superclasses: HashMap[MClass, MClassType] */;
val* var185 /* : nullable POSetElement[MClassDef] */;
val* var186 /* : Collection[nullable Object] */;
val* var_187 /* var : Collection[MClassDef] */;
val* var188 /* : Iterator[nullable Object] */;
val* var_189 /* var : Iterator[MClassDef] */;
short int var190 /* : Bool */;
val* var191 /* : nullable Object */;
val* var_scd /* var scd: MClassDef */;
val* var192 /* : Array[MClassType] */;
val* var_193 /* var : Array[MClassType] */;
val* var194 /* : Iterator[nullable Object] */;
val* var_195 /* var : ArrayIterator[MClassType] */;
short int var196 /* : Bool */;
val* var197 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var198 /* : MClass */;
short int var199 /* : Bool */;
short int var200 /* : Bool */;
val* var201 /* : MClass */;
val* var202 /* : MClass */;
val* var203 /* : nullable Object */;
short int var204 /* : Bool */;
val* var205 /* : MClass */;
val* var206 /* : nullable Object */;
val* var207 /* : MClass */;
val* var208 /* : MClassType */;
val* var209 /* : MClassType */;
val* var210 /* : MType */;
val* var_st1 /* var st1: MClassType */;
val* var211 /* : MClass */;
val* var212 /* : MClassType */;
val* var213 /* : MClassType */;
val* var214 /* : MType */;
val* var_st2 /* var st2: MClassType */;
short int var215 /* : Bool */;
val* var216 /* : NativeArray[String] */;
static val* varonce;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
val* var220 /* : FlatString */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
val* var224 /* : FlatString */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
val* var228 /* : FlatString */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
val* var232 /* : FlatString */;
val* var233 /* : MClass */;
val* var234 /* : String */;
val* var235 /* : String */;
val* var236 /* : String */;
val* var237 /* : String */;
val* var241 /* : ToolContext */;
long var242 /* : Int */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
val* var247 /* : ANodes[AClassdef] */;
val* var_248 /* var : ANodes[AClassdef] */;
val* var249 /* : Iterator[nullable Object] */;
val* var_250 /* var : Iterator[AClassdef] */;
short int var251 /* : Bool */;
val* var252 /* : nullable Object */;
val* var_nclassdef253 /* var nclassdef: AClassdef */;
short int var254 /* : Bool */;
int cltype255;
int idtype256;
short int var257 /* : Bool */;
val* var259 /* : nullable MClassDef */;
val* var_mclassdef260 /* var mclassdef: nullable MClassDef */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
val* var263 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var264 /* : nullable POSetElement[MClassDef] */;
val* var265 /* : Collection[nullable Object] */;
val* var_266 /* var : Collection[MClassDef] */;
val* var267 /* : Iterator[nullable Object] */;
val* var_268 /* var : Iterator[MClassDef] */;
short int var269 /* : Bool */;
val* var270 /* : nullable Object */;
val* var_sup /* var sup: MClassDef */;
val* var271 /* : MClass */;
val* var273 /* : ArrayMap[MClass, AType] */;
val* var_seen_parents /* var seen_parents: ArrayMap[MClass, AType] */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
val* var277 /* : FlatString */;
val* var278 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var279 /* : Array[ASuperPropdef] */;
val* var_280 /* var : Array[ASuperPropdef] */;
val* var281 /* : Iterator[nullable Object] */;
val* var_282 /* var : ArrayIterator[ASuperPropdef] */;
short int var283 /* : Bool */;
val* var284 /* : nullable Object */;
val* var_nsc285 /* var nsc: ASuperPropdef */;
val* var286 /* : AType */;
val* var_ntype287 /* var ntype: AType */;
val* var288 /* : nullable MType */;
val* var_mtype289 /* var mtype: nullable MType */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
short int var293 /* : Bool */;
int cltype294;
int idtype295;
val* var296 /* : MClass */;
val* var_sc /* var sc: MClass */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
short int var_300 /* var : Bool */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
val* var303 /* : Location */;
val* var304 /* : nullable SourceFile */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
short int var_307 /* var : Bool */;
val* var308 /* : Location */;
val* var309 /* : nullable SourceFile */;
val* var310 /* : String */;
short int var311 /* : Bool */;
short int var312 /* : Bool */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
val* var316 /* : FlatString */;
val* var318 /* : NativeArray[String] */;
static val* varonce317;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
val* var322 /* : FlatString */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
val* var326 /* : FlatString */;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : NativeString */;
val* var330 /* : FlatString */;
val* var331 /* : String */;
val* var332 /* : MClass */;
val* var333 /* : String */;
val* var334 /* : String */;
short int var335 /* : Bool */;
short int var336 /* : Bool */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
val* var340 /* : FlatString */;
val* var342 /* : NativeArray[String] */;
static val* varonce341;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
val* var346 /* : FlatString */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
val* var350 /* : FlatString */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
val* var354 /* : FlatString */;
val* var355 /* : String */;
val* var356 /* : MClass */;
val* var357 /* : String */;
val* var358 /* : String */;
var_nmodule = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var1 = ((long(*)(val* self))(var->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var); /* error_count on <var:ToolContext>*/
}
var_errcount = var1;
{
var2 = ((short int(*)(val* self))(var_nmodule->class->vft[COLOR_nit__modelize_class__AModule__build_classes_is_done]))(var_nmodule); /* build_classes_is_done on <var_nmodule:AModule>*/
}
if (var2){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(var_nmodule->class->vft[COLOR_nit__modelize_class__AModule__build_classes_is_done_61d]))(var_nmodule, 1); /* build_classes_is_done= on <var_nmodule:AModule>*/
}
{
var3 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__loader__AModule__mmodule]))(var_nmodule); /* mmodule on <var_nmodule:AModule>*/
}
var_mmodule = var3;
if (var_mmodule == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, ((val*)NULL)); /* == on <var_mmodule:nullable MModule>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(var_mmodule); /* in_importation on <var_mmodule:nullable MModule(MModule)>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var6); /* direct_greaters on <var6:POSetElement[MModule]>*/
}
var_ = var7;
{
var8 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[MModule]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[MModule]>*/
}
var_imp = var11;
{
var12 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__loader__ModelBuilder__mmodule2node]))(self, var_imp); /* mmodule2node on <self:ModelBuilder>*/
}
var_nimp = var12;
if (var_nimp == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_nimp->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nimp, ((val*)NULL)); /* != on <var_nimp:nullable AModule>*/
var13 = var14;
}
if (var13){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__build_classes]))(self, var_nimp); /* build_classes on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[MModule]>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var16 = ((long(*)(val* self))(var15->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var15); /* error_count on <var15:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var16) on <var_errcount:Int> */
var19 = var_errcount == var16;
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
goto RET_LABEL;
} else {
}
{
var21 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_22 = var21;
{
var23 = ((val*(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_22); /* iterator on <var_22:ANodes[AClassdef]>*/
}
var_24 = var23;
for(;;) {
{
var25 = ((short int(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_24); /* is_ok on <var_24:Iterator[AClassdef]>*/
}
if (var25){
{
var26 = ((val*(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_24); /* item on <var_24:Iterator[AClassdef]>*/
}
var_nclassdef = var26;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var27 = 0;
} else {
var27 = var_nclassdef->type->type_table[cltype] == idtype;
}
var28 = !var27;
if (var28){
goto BREAK_label29;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__build_a_mclass]))(self, var_nmodule, var_nclassdef); /* build_a_mclass on <self:ModelBuilder>*/
}
BREAK_label29: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_24); /* next on <var_24:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label30;
}
}
BREAK_label30: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_24); /* finish on <var_24:Iterator[AClassdef]>*/
}
{
var31 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_32 = var31;
{
var33 = ((val*(*)(val* self))(var_32->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_32); /* iterator on <var_32:ANodes[AClassdef]>*/
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:Iterator[AClassdef]>*/
}
if (var35){
{
var36 = ((val*(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:Iterator[AClassdef]>*/
}
var_nclassdef37 = var36;
/* <var_nclassdef37:AClassdef> isa AStdClassdef */
cltype39 = type_nit__AStdClassdef.color;
idtype40 = type_nit__AStdClassdef.id;
if(cltype39 >= var_nclassdef37->type->table_size) {
var38 = 0;
} else {
var38 = var_nclassdef37->type->type_table[cltype39] == idtype40;
}
if (var38){
goto BREAK_label41;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__build_a_mclass]))(self, var_nmodule, var_nclassdef37); /* build_a_mclass on <self:ModelBuilder>*/
}
BREAK_label41: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:Iterator[AClassdef]>*/
}
{
var43 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var44 = ((long(*)(val* self))(var43->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var43); /* error_count on <var43:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var44) on <var_errcount:Int> */
var47 = var_errcount == var44;
var48 = !var47;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
goto RET_LABEL;
} else {
}
{
var49 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_50 = var49;
{
var51 = ((val*(*)(val* self))(var_50->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_50); /* iterator on <var_50:ANodes[AClassdef]>*/
}
var_52 = var51;
for(;;) {
{
var53 = ((short int(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_52); /* is_ok on <var_52:Iterator[AClassdef]>*/
}
if (var53){
{
var54 = ((val*(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_52); /* item on <var_52:Iterator[AClassdef]>*/
}
var_nclassdef55 = var54;
/* <var_nclassdef55:AClassdef> isa AStdClassdef */
cltype57 = type_nit__AStdClassdef.color;
idtype58 = type_nit__AStdClassdef.id;
if(cltype57 >= var_nclassdef55->type->table_size) {
var56 = 0;
} else {
var56 = var_nclassdef55->type->type_table[cltype57] == idtype58;
}
var59 = !var56;
if (var59){
goto BREAK_label60;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__build_a_mclassdef]))(self, var_nmodule, var_nclassdef55); /* build_a_mclassdef on <self:ModelBuilder>*/
}
BREAK_label60: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_52); /* next on <var_52:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label61;
}
}
BREAK_label61: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_52); /* finish on <var_52:Iterator[AClassdef]>*/
}
{
var62 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_63 = var62;
{
var64 = ((val*(*)(val* self))(var_63->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_63); /* iterator on <var_63:ANodes[AClassdef]>*/
}
var_65 = var64;
for(;;) {
{
var66 = ((short int(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_65); /* is_ok on <var_65:Iterator[AClassdef]>*/
}
if (var66){
{
var67 = ((val*(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_65); /* item on <var_65:Iterator[AClassdef]>*/
}
var_nclassdef68 = var67;
/* <var_nclassdef68:AClassdef> isa AStdClassdef */
cltype70 = type_nit__AStdClassdef.color;
idtype71 = type_nit__AStdClassdef.id;
if(cltype70 >= var_nclassdef68->type->table_size) {
var69 = 0;
} else {
var69 = var_nclassdef68->type->type_table[cltype70] == idtype71;
}
if (var69){
goto BREAK_label72;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__build_a_mclassdef]))(self, var_nmodule, var_nclassdef68); /* build_a_mclassdef on <self:ModelBuilder>*/
}
BREAK_label72: (void)0;
{
((void(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_65); /* next on <var_65:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label73;
}
}
BREAK_label73: (void)0;
{
((void(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_65); /* finish on <var_65:Iterator[AClassdef]>*/
}
{
var74 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var75 = ((long(*)(val* self))(var74->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var74); /* error_count on <var74:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var75) on <var_errcount:Int> */
var78 = var_errcount == var75;
var79 = !var78;
var76 = var79;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
goto RET_LABEL;
} else {
}
{
var80 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_81 = var80;
{
var82 = ((val*(*)(val* self))(var_81->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_81); /* iterator on <var_81:ANodes[AClassdef]>*/
}
var_83 = var82;
for(;;) {
{
var84 = ((short int(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_83); /* is_ok on <var_83:Iterator[AClassdef]>*/
}
if (var84){
{
var85 = ((val*(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_83); /* item on <var_83:Iterator[AClassdef]>*/
}
var_nclassdef86 = var85;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__collect_a_mclassdef_inheritance]))(self, var_nmodule, var_nclassdef86); /* collect_a_mclassdef_inheritance on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_83); /* next on <var_83:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label87;
}
}
BREAK_label87: (void)0;
{
((void(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_83); /* finish on <var_83:Iterator[AClassdef]>*/
}
{
var88 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var89 = ((long(*)(val* self))(var88->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var88); /* error_count on <var88:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var89) on <var_errcount:Int> */
var92 = var_errcount == var89;
var93 = !var92;
var90 = var93;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
if (var90){
goto RET_LABEL;
} else {
}
{
var94 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_nit__model__MModule__mclassdefs]))(var_mmodule); /* mclassdefs on <var_mmodule:nullable MModule(MModule)>*/
}
var_95 = var94;
{
var96 = ((val*(*)(val* self))(var_95->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_95); /* iterator on <var_95:Array[MClassDef]>*/
}
var_97 = var96;
for(;;) {
{
var98 = ((short int(*)(val* self))(var_97->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_97); /* is_ok on <var_97:ArrayIterator[MClassDef]>*/
}
if (var98){
{
var99 = ((val*(*)(val* self))(var_97->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_97); /* item on <var_97:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var99;
{
((void(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__add_in_hierarchy]))(var_mclassdef); /* add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self))(var_97->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_97); /* next on <var_97:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label100;
}
}
BREAK_label100: (void)0;
{
((void(*)(val* self))(var_97->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_97); /* finish on <var_97:ArrayIterator[MClassDef]>*/
}
{
var101 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var102 = ((long(*)(val* self))(var101->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var101); /* error_count on <var101:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var102) on <var_errcount:Int> */
var105 = var_errcount == var102;
var106 = !var105;
var103 = var106;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
if (var103){
goto RET_LABEL;
} else {
}
{
var107 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_108 = var107;
{
var109 = ((val*(*)(val* self))(var_108->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_108); /* iterator on <var_108:ANodes[AClassdef]>*/
}
var_110 = var109;
for(;;) {
{
var111 = ((short int(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_110); /* is_ok on <var_110:Iterator[AClassdef]>*/
}
if (var111){
{
var112 = ((val*(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_110); /* item on <var_110:Iterator[AClassdef]>*/
}
var_nclassdef113 = var112;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__check_supertypes]))(self, var_nmodule, var_nclassdef113); /* check_supertypes on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_110); /* next on <var_110:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label114;
}
}
BREAK_label114: (void)0;
{
((void(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_110); /* finish on <var_110:Iterator[AClassdef]>*/
}
{
var115 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var116 = ((long(*)(val* self))(var115->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var115); /* error_count on <var115:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var116) on <var_errcount:Int> */
var119 = var_errcount == var116;
var120 = !var119;
var117 = var120;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
if (var117){
goto RET_LABEL;
} else {
}
{
var121 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_122 = var121;
{
var123 = ((val*(*)(val* self))(var_122->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_122); /* iterator on <var_122:ANodes[AClassdef]>*/
}
var_124 = var123;
for(;;) {
{
var125 = ((short int(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_124); /* is_ok on <var_124:Iterator[AClassdef]>*/
}
if (var125){
{
var126 = ((val*(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_124); /* item on <var_124:Iterator[AClassdef]>*/
}
var_nclassdef127 = var126;
/* <var_nclassdef127:AClassdef> isa AStdClassdef */
cltype129 = type_nit__AStdClassdef.color;
idtype130 = type_nit__AStdClassdef.id;
if(cltype129 >= var_nclassdef127->type->table_size) {
var128 = 0;
} else {
var128 = var_nclassdef127->type->type_table[cltype129] == idtype130;
}
if (var128){
{
var131 = ((val*(*)(val* self))(var_nclassdef127->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef]))(var_nclassdef127); /* mclassdef on <var_nclassdef127:AClassdef(AStdClassdef)>*/
}
var_mclassdef132 = var131;
{
var133 = ((val*(*)(val* self))(var_nclassdef127->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef127); /* n_formaldefs on <var_nclassdef127:AClassdef(AStdClassdef)>*/
}
var_134 = var133;
{
var135 = ((val*(*)(val* self))(var_134->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_134); /* iterator on <var_134:ANodes[AFormaldef]>*/
}
var_136 = var135;
for(;;) {
{
var137 = ((short int(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_136); /* is_ok on <var_136:Iterator[AFormaldef]>*/
}
if (var137){
{
var138 = ((val*(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_136); /* item on <var_136:Iterator[AFormaldef]>*/
}
var_nfd = var138;
{
var139 = ((val*(*)(val* self))(var_nfd->class->vft[COLOR_nit__parser_nodes__AFormaldef__n_type]))(var_nfd); /* n_type on <var_nfd:AFormaldef>*/
}
var_nfdt = var139;
if (var_nfdt == NULL) {
var141 = 0; /* is null */
} else {
var141 = 1; /* arg is null and recv is not */
}
if (0) {
var142 = ((short int(*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nfdt, ((val*)NULL)); /* != on <var_nfdt:nullable AType>*/
var141 = var142;
}
var_143 = var141;
if (var141){
{
var144 = ((val*(*)(val* self))(var_nfdt->class->vft[COLOR_nit__modelbuilder_base__AType__mtype]))(var_nfdt); /* mtype on <var_nfdt:nullable AType(AType)>*/
}
if (var144 == NULL) {
var145 = 0; /* is null */
} else {
var145 = 1; /* arg is null and recv is not */
}
if (0) {
var146 = ((short int(*)(val* self, val* p0))(var144->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var144, ((val*)NULL)); /* != on <var144:nullable MType>*/
var145 = var146;
}
var140 = var145;
} else {
var140 = var_143;
}
if (var140){
{
var147 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype]))(self, var_mmodule, var_mclassdef132, var_nfdt); /* resolve_mtype on <self:ModelBuilder>*/
}
var_bound = var147;
if (var_bound == NULL) {
var148 = 1; /* is null */
} else {
var148 = 0; /* arg is null but recv is not */
}
if (0) {
var149 = ((short int(*)(val* self, val* p0))(var_bound->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_bound, ((val*)NULL)); /* == on <var_bound:nullable MType>*/
var148 = var149;
}
if (var148){
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_136); /* next on <var_136:Iterator[AFormaldef]>*/
}
} else {
goto BREAK_label150;
}
}
BREAK_label150: (void)0;
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_136); /* finish on <var_136:Iterator[AFormaldef]>*/
}
{
var151 = ((val*(*)(val* self))(var_nclassdef127->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_superclasses]))(var_nclassdef127); /* n_superclasses on <var_nclassdef127:AClassdef(AStdClassdef)>*/
}
var_152 = var151;
{
var153 = ((val*(*)(val* self))(var_152->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_152); /* iterator on <var_152:Array[ASuperPropdef]>*/
}
var_154 = var153;
for(;;) {
{
var155 = ((short int(*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_154); /* is_ok on <var_154:ArrayIterator[ASuperPropdef]>*/
}
if (var155){
{
var156 = ((val*(*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_154); /* item on <var_154:ArrayIterator[ASuperPropdef]>*/
}
var_nsc = var156;
{
var157 = ((val*(*)(val* self))(var_nsc->class->vft[COLOR_nit__parser_nodes__ASuperPropdef__n_type]))(var_nsc); /* n_type on <var_nsc:ASuperPropdef>*/
}
var_ntype = var157;
{
var158 = ((val*(*)(val* self))(var_ntype->class->vft[COLOR_nit__modelbuilder_base__AType__mtype]))(var_ntype); /* mtype on <var_ntype:AType>*/
}
if (var158 == NULL) {
var159 = 0; /* is null */
} else {
var159 = 1; /* arg is null and recv is not */
}
if (0) {
var160 = ((short int(*)(val* self, val* p0))(var158->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var158, ((val*)NULL)); /* != on <var158:nullable MType>*/
var159 = var160;
}
if (var159){
{
var161 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__resolve_mtype]))(self, var_mmodule, var_mclassdef132, var_ntype); /* resolve_mtype on <self:ModelBuilder>*/
}
var_mtype = var161;
if (var_mtype == NULL) {
var162 = 1; /* is null */
} else {
var162 = 0; /* arg is null but recv is not */
}
if (0) {
var163 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, ((val*)NULL)); /* == on <var_mtype:nullable MType>*/
var162 = var163;
}
if (var162){
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_154); /* next on <var_154:ArrayIterator[ASuperPropdef]>*/
}
} else {
goto BREAK_label164;
}
}
BREAK_label164: (void)0;
{
((void(*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_154); /* finish on <var_154:ArrayIterator[ASuperPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_124); /* next on <var_124:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label165;
}
}
BREAK_label165: (void)0;
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_124); /* finish on <var_124:Iterator[AClassdef]>*/
}
{
var166 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var167 = ((long(*)(val* self))(var166->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var166); /* error_count on <var166:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var167) on <var_errcount:Int> */
var170 = var_errcount == var167;
var171 = !var170;
var168 = var171;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
if (var168){
goto RET_LABEL;
} else {
}
{
var172 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_173 = var172;
{
var174 = ((val*(*)(val* self))(var_173->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_173); /* iterator on <var_173:ANodes[AClassdef]>*/
}
var_175 = var174;
for(;;) {
{
var176 = ((short int(*)(val* self))((((long)var_175&3)?class_info[((long)var_175&3)]:var_175->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_175); /* is_ok on <var_175:Iterator[AClassdef]>*/
}
if (var176){
{
var177 = ((val*(*)(val* self))((((long)var_175&3)?class_info[((long)var_175&3)]:var_175->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_175); /* item on <var_175:Iterator[AClassdef]>*/
}
var_nclassdef178 = var177;
{
var179 = ((val*(*)(val* self))(var_nclassdef178->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef]))(var_nclassdef178); /* mclassdef on <var_nclassdef178:AClassdef>*/
}
var_mclassdef180 = var179;
if (var_mclassdef180 == NULL) {
var181 = 1; /* is null */
} else {
var181 = 0; /* arg is null but recv is not */
}
if (0) {
var182 = ((short int(*)(val* self, val* p0))(var_mclassdef180->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef180, ((val*)NULL)); /* == on <var_mclassdef180:nullable MClassDef>*/
var181 = var182;
}
if (var181){
goto BREAK_label183;
} else {
}
var184 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__nit__MClassType);
{
((void(*)(val* self))(var184->class->vft[COLOR_standard__kernel__Object__init]))(var184); /* init on <var184:HashMap[MClass, MClassType]>*/
}
var_superclasses = var184;
{
var185 = ((val*(*)(val* self))(var_mclassdef180->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(var_mclassdef180); /* in_hierarchy on <var_mclassdef180:nullable MClassDef(MClassDef)>*/
}
if (var185 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 390);
fatal_exit(1);
} else {
var186 = ((val*(*)(val* self))(var185->class->vft[COLOR_poset__POSetElement__greaters]))(var185); /* greaters on <var185:nullable POSetElement[MClassDef]>*/
}
var_187 = var186;
{
var188 = ((val*(*)(val* self))((((long)var_187&3)?class_info[((long)var_187&3)]:var_187->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_187); /* iterator on <var_187:Collection[MClassDef]>*/
}
var_189 = var188;
for(;;) {
{
var190 = ((short int(*)(val* self))((((long)var_189&3)?class_info[((long)var_189&3)]:var_189->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_189); /* is_ok on <var_189:Iterator[MClassDef]>*/
}
if (var190){
{
var191 = ((val*(*)(val* self))((((long)var_189&3)?class_info[((long)var_189&3)]:var_189->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_189); /* item on <var_189:Iterator[MClassDef]>*/
}
var_scd = var191;
{
var192 = ((val*(*)(val* self))(var_scd->class->vft[COLOR_nit__model__MClassDef__supertypes]))(var_scd); /* supertypes on <var_scd:MClassDef>*/
}
var_193 = var192;
{
var194 = ((val*(*)(val* self))(var_193->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_193); /* iterator on <var_193:Array[MClassType]>*/
}
var_195 = var194;
for(;;) {
{
var196 = ((short int(*)(val* self))(var_195->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_195); /* is_ok on <var_195:ArrayIterator[MClassType]>*/
}
if (var196){
{
var197 = ((val*(*)(val* self))(var_195->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_195); /* item on <var_195:ArrayIterator[MClassType]>*/
}
var_st = var197;
{
var198 = ((val*(*)(val* self))(var_st->class->vft[COLOR_nit__model__MClassType__mclass]))(var_st); /* mclass on <var_st:MClassType>*/
}
{
var199 = ((short int(*)(val* self, val* p0))(var_superclasses->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var_superclasses, var198); /* has_key on <var_superclasses:HashMap[MClass, MClassType]>*/
}
var200 = !var199;
if (var200){
{
var201 = ((val*(*)(val* self))(var_st->class->vft[COLOR_nit__model__MClassType__mclass]))(var_st); /* mclass on <var_st:MClassType>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_superclasses->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_superclasses, var201, var_st); /* []= on <var_superclasses:HashMap[MClass, MClassType]>*/
}
} else {
{
var202 = ((val*(*)(val* self))(var_st->class->vft[COLOR_nit__model__MClassType__mclass]))(var_st); /* mclass on <var_st:MClassType>*/
}
{
var203 = ((val*(*)(val* self, val* p0))(var_superclasses->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_superclasses, var202); /* [] on <var_superclasses:HashMap[MClass, MClassType]>*/
}
{
var204 = ((short int(*)(val* self, val* p0))(var203->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var203, var_st); /* != on <var203:nullable Object(MClassType)>*/
}
if (var204){
{
var205 = ((val*(*)(val* self))(var_st->class->vft[COLOR_nit__model__MClassType__mclass]))(var_st); /* mclass on <var_st:MClassType>*/
}
{
var206 = ((val*(*)(val* self, val* p0))(var_superclasses->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_superclasses, var205); /* [] on <var_superclasses:HashMap[MClass, MClassType]>*/
}
{
var207 = ((val*(*)(val* self))(var_mclassdef180->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef180); /* mclass on <var_mclassdef180:nullable MClassDef(MClassDef)>*/
}
{
var208 = ((val*(*)(val* self))(var207->class->vft[COLOR_nit__model__MClass__mclass_type]))(var207); /* mclass_type on <var207:MClass>*/
}
{
var209 = ((val*(*)(val* self))(var_mclassdef180->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef180); /* bound_mtype on <var_mclassdef180:nullable MClassDef(MClassDef)>*/
}
{
var210 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var206->class->vft[COLOR_nit__model__MType__resolve_for]))(var206, var208, var209, var_mmodule, 0); /* resolve_for on <var206:nullable Object(MClassType)>*/
}
var_st1 = var210;
{
var211 = ((val*(*)(val* self))(var_mclassdef180->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef180); /* mclass on <var_mclassdef180:nullable MClassDef(MClassDef)>*/
}
{
var212 = ((val*(*)(val* self))(var211->class->vft[COLOR_nit__model__MClass__mclass_type]))(var211); /* mclass_type on <var211:MClass>*/
}
{
var213 = ((val*(*)(val* self))(var_mclassdef180->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef180); /* bound_mtype on <var_mclassdef180:nullable MClassDef(MClassDef)>*/
}
{
var214 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_st->class->vft[COLOR_nit__model__MType__resolve_for]))(var_st, var212, var213, var_mmodule, 0); /* resolve_for on <var_st:MClassType>*/
}
var_st2 = var214;
{
var215 = ((short int(*)(val* self, val* p0))(var_st1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_st1, var_st2); /* != on <var_st1:MClassType>*/
}
if (var215){
if (unlikely(varonce==NULL)) {
var216 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = "Error: incompatible ancestors for `";
var220 = standard___standard__NativeString___to_s_with_length(var219, 35l);
var218 = var220;
varonce217 = var218;
}
((struct instance_standard__NativeArray*)var216)->values[0]=var218;
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "`; conflict: `";
var224 = standard___standard__NativeString___to_s_with_length(var223, 14l);
var222 = var224;
varonce221 = var222;
}
((struct instance_standard__NativeArray*)var216)->values[2]=var222;
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "` and `";
var228 = standard___standard__NativeString___to_s_with_length(var227, 7l);
var226 = var228;
varonce225 = var226;
}
((struct instance_standard__NativeArray*)var216)->values[4]=var226;
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "`";
var232 = standard___standard__NativeString___to_s_with_length(var231, 1l);
var230 = var232;
varonce229 = var230;
}
((struct instance_standard__NativeArray*)var216)->values[6]=var230;
} else {
var216 = varonce;
varonce = NULL;
}
{
var233 = ((val*(*)(val* self))(var_mclassdef180->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef180); /* mclass on <var_mclassdef180:nullable MClassDef(MClassDef)>*/
}
{
var234 = ((val*(*)(val* self))(var233->class->vft[COLOR_standard__string__Object__to_s]))(var233); /* to_s on <var233:MClass>*/
}
((struct instance_standard__NativeArray*)var216)->values[1]=var234;
{
var235 = ((val*(*)(val* self))(var_st1->class->vft[COLOR_standard__string__Object__to_s]))(var_st1); /* to_s on <var_st1:MClassType>*/
}
((struct instance_standard__NativeArray*)var216)->values[3]=var235;
{
var236 = ((val*(*)(val* self))(var_st2->class->vft[COLOR_standard__string__Object__to_s]))(var_st2); /* to_s on <var_st2:MClassType>*/
}
((struct instance_standard__NativeArray*)var216)->values[5]=var236;
{
var237 = ((val*(*)(val* self))(var216->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var216); /* native_to_s on <var216:NativeArray[String]>*/
}
varonce = var216;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(self, var_nclassdef178, var237); /* error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
}
{
((void(*)(val* self))(var_195->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_195); /* next on <var_195:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label238;
}
}
BREAK_label238: (void)0;
{
((void(*)(val* self))(var_195->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_195); /* finish on <var_195:ArrayIterator[MClassType]>*/
}
{
((void(*)(val* self))((((long)var_189&3)?class_info[((long)var_189&3)]:var_189->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_189); /* next on <var_189:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label239;
}
}
BREAK_label239: (void)0;
{
((void(*)(val* self))((((long)var_189&3)?class_info[((long)var_189&3)]:var_189->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_189); /* finish on <var_189:Iterator[MClassDef]>*/
}
BREAK_label183: (void)0;
{
((void(*)(val* self))((((long)var_175&3)?class_info[((long)var_175&3)]:var_175->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_175); /* next on <var_175:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label240;
}
}
BREAK_label240: (void)0;
{
((void(*)(val* self))((((long)var_175&3)?class_info[((long)var_175&3)]:var_175->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_175); /* finish on <var_175:Iterator[AClassdef]>*/
}
{
var241 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(self); /* toolcontext on <self:ModelBuilder>*/
}
{
var242 = ((long(*)(val* self))(var241->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(var241); /* error_count on <var241:ToolContext>*/
}
{
{ /* Inline kernel#Int#!= (var_errcount,var242) on <var_errcount:Int> */
var245 = var_errcount == var242;
var246 = !var245;
var243 = var246;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
if (var243){
goto RET_LABEL;
} else {
}
{
var247 = ((val*(*)(val* self))(var_nmodule->class->vft[COLOR_nit__parser_nodes__AModule__n_classdefs]))(var_nmodule); /* n_classdefs on <var_nmodule:AModule>*/
}
var_248 = var247;
{
var249 = ((val*(*)(val* self))(var_248->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_248); /* iterator on <var_248:ANodes[AClassdef]>*/
}
var_250 = var249;
for(;;) {
{
var251 = ((short int(*)(val* self))((((long)var_250&3)?class_info[((long)var_250&3)]:var_250->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_250); /* is_ok on <var_250:Iterator[AClassdef]>*/
}
if (var251){
{
var252 = ((val*(*)(val* self))((((long)var_250&3)?class_info[((long)var_250&3)]:var_250->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_250); /* item on <var_250:Iterator[AClassdef]>*/
}
var_nclassdef253 = var252;
/* <var_nclassdef253:AClassdef> isa AStdClassdef */
cltype255 = type_nit__AStdClassdef.color;
idtype256 = type_nit__AStdClassdef.id;
if(cltype255 >= var_nclassdef253->type->table_size) {
var254 = 0;
} else {
var254 = var_nclassdef253->type->type_table[cltype255] == idtype256;
}
var257 = !var254;
if (var257){
goto BREAK_label258;
} else {
}
{
var259 = ((val*(*)(val* self))(var_nclassdef253->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef]))(var_nclassdef253); /* mclassdef on <var_nclassdef253:AClassdef(AStdClassdef)>*/
}
var_mclassdef260 = var259;
if (var_mclassdef260 == NULL) {
var261 = 1; /* is null */
} else {
var261 = 0; /* arg is null but recv is not */
}
if (0) {
var262 = ((short int(*)(val* self, val* p0))(var_mclassdef260->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef260, ((val*)NULL)); /* == on <var_mclassdef260:nullable MClassDef>*/
var261 = var262;
}
if (var261){
goto BREAK_label258;
} else {
}
var263 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
((void(*)(val* self))(var263->class->vft[COLOR_standard__kernel__Object__init]))(var263); /* init on <var263:Array[MClass]>*/
}
var_parents = var263;
{
var264 = ((val*(*)(val* self))(var_mclassdef260->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(var_mclassdef260); /* in_hierarchy on <var_mclassdef260:nullable MClassDef(MClassDef)>*/
}
if (var264 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 418);
fatal_exit(1);
} else {
var265 = ((val*(*)(val* self))(var264->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var264); /* direct_greaters on <var264:nullable POSetElement[MClassDef]>*/
}
var_266 = var265;
{
var267 = ((val*(*)(val* self))((((long)var_266&3)?class_info[((long)var_266&3)]:var_266->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_266); /* iterator on <var_266:Collection[MClassDef]>*/
}
var_268 = var267;
for(;;) {
{
var269 = ((short int(*)(val* self))((((long)var_268&3)?class_info[((long)var_268&3)]:var_268->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_268); /* is_ok on <var_268:Iterator[MClassDef]>*/
}
if (var269){
{
var270 = ((val*(*)(val* self))((((long)var_268&3)?class_info[((long)var_268&3)]:var_268->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_268); /* item on <var_268:Iterator[MClassDef]>*/
}
var_sup = var270;
{
var271 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_sup); /* mclass on <var_sup:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_parents->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_parents, var271); /* add on <var_parents:Array[MClass]>*/
}
{
((void(*)(val* self))((((long)var_268&3)?class_info[((long)var_268&3)]:var_268->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_268); /* next on <var_268:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label272;
}
}
BREAK_label272: (void)0;
{
((void(*)(val* self))((((long)var_268&3)?class_info[((long)var_268&3)]:var_268->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_268); /* finish on <var_268:Iterator[MClassDef]>*/
}
var273 = NEW_standard__ArrayMap(&type_standard__ArrayMap__nit__MClass__nit__AType);
{
((void(*)(val* self))(var273->class->vft[COLOR_standard__kernel__Object__init]))(var273); /* init on <var273:ArrayMap[MClass, AType]>*/
}
var_seen_parents = var273;
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "Object";
var277 = standard___standard__NativeString___to_s_with_length(var276, 6l);
var275 = var277;
varonce274 = var275;
}
{
var278 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mclass_by_name]))(self, var_nmodule, var_mmodule, var275); /* try_get_mclass_by_name on <self:ModelBuilder>*/
}
var_objectclass = var278;
{
var279 = ((val*(*)(val* self))(var_nclassdef253->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_superclasses]))(var_nclassdef253); /* n_superclasses on <var_nclassdef253:AClassdef(AStdClassdef)>*/
}
var_280 = var279;
{
var281 = ((val*(*)(val* self))(var_280->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_280); /* iterator on <var_280:Array[ASuperPropdef]>*/
}
var_282 = var281;
for(;;) {
{
var283 = ((short int(*)(val* self))(var_282->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_282); /* is_ok on <var_282:ArrayIterator[ASuperPropdef]>*/
}
if (var283){
{
var284 = ((val*(*)(val* self))(var_282->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_282); /* item on <var_282:ArrayIterator[ASuperPropdef]>*/
}
var_nsc285 = var284;
{
var286 = ((val*(*)(val* self))(var_nsc285->class->vft[COLOR_nit__parser_nodes__ASuperPropdef__n_type]))(var_nsc285); /* n_type on <var_nsc285:ASuperPropdef>*/
}
var_ntype287 = var286;
{
var288 = ((val*(*)(val* self))(var_ntype287->class->vft[COLOR_nit__modelbuilder_base__AType__mtype]))(var_ntype287); /* mtype on <var_ntype287:AType>*/
}
var_mtype289 = var288;
if (var_mtype289 == NULL) {
var290 = 1; /* is null */
} else {
var290 = 0; /* arg is null but recv is not */
}
if (0) {
var291 = ((short int(*)(val* self, val* p0))(var_mtype289->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype289, ((val*)NULL)); /* == on <var_mtype289:nullable MType>*/
var290 = var291;
}
if (var290){
goto BREAK_label292;
} else {
}
/* <var_mtype289:nullable MType(MType)> isa MClassType */
cltype294 = type_nit__MClassType.color;
idtype295 = type_nit__MClassType.id;
if(cltype294 >= var_mtype289->type->table_size) {
var293 = 0;
} else {
var293 = var_mtype289->type->type_table[cltype294] == idtype295;
}
if (unlikely(!var293)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 433);
fatal_exit(1);
}
{
var296 = ((val*(*)(val* self))(var_mtype289->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mtype289); /* mclass on <var_mtype289:nullable MType(MClassType)>*/
}
var_sc = var296;
{
var298 = ((short int(*)(val* self, val* p0))(var_parents->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_parents, var_sc); /* has on <var_parents:Array[MClass]>*/
}
var299 = !var298;
var_300 = var299;
if (var299){
var297 = var_300;
} else {
{
var301 = ((short int(*)(val* self, val* p0))(var_sc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sc, var_objectclass); /* == on <var_sc:MClass>*/
}
var297 = var301;
}
if (var297){
{
var303 = ((val*(*)(val* self))(var_ntype287->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_ntype287); /* location on <var_ntype287:AType>*/
}
{
var304 = ((val*(*)(val* self))(var303->class->vft[COLOR_nit__location__Location__file]))(var303); /* file on <var303:Location>*/
}
if (var304 == NULL) {
var305 = 0; /* is null */
} else {
var305 = 1; /* arg is null and recv is not */
}
if (0) {
var306 = ((short int(*)(val* self, val* p0))(var304->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var304, ((val*)NULL)); /* != on <var304:nullable SourceFile>*/
var305 = var306;
}
var_307 = var305;
if (var305){
{
var308 = ((val*(*)(val* self))(var_ntype287->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_ntype287); /* location on <var_ntype287:AType>*/
}
{
var309 = ((val*(*)(val* self))(var308->class->vft[COLOR_nit__location__Location__file]))(var308); /* file on <var308:Location>*/
}
if (var309 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 437);
fatal_exit(1);
} else {
var310 = ((val*(*)(val* self))(var309->class->vft[COLOR_nit__location__SourceFile__filename]))(var309); /* filename on <var309:nullable SourceFile>*/
}
{
var311 = ((short int(*)(val* self))(var310->class->vft[COLOR_standard__string__Text__is_empty]))(var310); /* is_empty on <var310:String>*/
}
var312 = !var311;
var302 = var312;
} else {
var302 = var_307;
}
if (var302){
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = "useless-superclass";
var316 = standard___standard__NativeString___to_s_with_length(var315, 18l);
var314 = var316;
varonce313 = var314;
}
if (unlikely(varonce317==NULL)) {
var318 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "Warning: superfluous super-class `";
var322 = standard___standard__NativeString___to_s_with_length(var321, 34l);
var320 = var322;
varonce319 = var320;
}
((struct instance_standard__NativeArray*)var318)->values[0]=var320;
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "` in class `";
var326 = standard___standard__NativeString___to_s_with_length(var325, 12l);
var324 = var326;
varonce323 = var324;
}
((struct instance_standard__NativeArray*)var318)->values[2]=var324;
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = "`.";
var330 = standard___standard__NativeString___to_s_with_length(var329, 2l);
var328 = var330;
varonce327 = var328;
}
((struct instance_standard__NativeArray*)var318)->values[4]=var328;
} else {
var318 = varonce317;
varonce317 = NULL;
}
{
var331 = ((val*(*)(val* self))(var_mtype289->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype289); /* to_s on <var_mtype289:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var318)->values[1]=var331;
{
var332 = ((val*(*)(val* self))(var_mclassdef260->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef260); /* mclass on <var_mclassdef260:nullable MClassDef(MClassDef)>*/
}
{
var333 = ((val*(*)(val* self))(var332->class->vft[COLOR_standard__string__Object__to_s]))(var332); /* to_s on <var332:MClass>*/
}
((struct instance_standard__NativeArray*)var318)->values[3]=var333;
{
var334 = ((val*(*)(val* self))(var318->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var318); /* native_to_s on <var318:NativeArray[String]>*/
}
varonce317 = var318;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(self, var_ntype287, var314, var334); /* warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
var335 = ((short int(*)(val* self, val* p0))(var_seen_parents->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var_seen_parents, var_sc); /* has_key on <var_seen_parents:ArrayMap[MClass, AType]>*/
}
var336 = !var335;
if (var336){
{
((void(*)(val* self, val* p0, val* p1))(var_seen_parents->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_seen_parents, var_sc, var_ntype287); /* []= on <var_seen_parents:ArrayMap[MClass, AType]>*/
}
} else {
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "useless-superclass";
var340 = standard___standard__NativeString___to_s_with_length(var339, 18l);
var338 = var340;
varonce337 = var338;
}
if (unlikely(varonce341==NULL)) {
var342 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = "Warning: duplicated super-class `";
var346 = standard___standard__NativeString___to_s_with_length(var345, 33l);
var344 = var346;
varonce343 = var344;
}
((struct instance_standard__NativeArray*)var342)->values[0]=var344;
if (likely(varonce347!=NULL)) {
var348 = varonce347;
} else {
var349 = "` in class `";
var350 = standard___standard__NativeString___to_s_with_length(var349, 12l);
var348 = var350;
varonce347 = var348;
}
((struct instance_standard__NativeArray*)var342)->values[2]=var348;
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "`.";
var354 = standard___standard__NativeString___to_s_with_length(var353, 2l);
var352 = var354;
varonce351 = var352;
}
((struct instance_standard__NativeArray*)var342)->values[4]=var352;
} else {
var342 = varonce341;
varonce341 = NULL;
}
{
var355 = ((val*(*)(val* self))(var_mtype289->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype289); /* to_s on <var_mtype289:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var342)->values[1]=var355;
{
var356 = ((val*(*)(val* self))(var_mclassdef260->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef260); /* mclass on <var_mclassdef260:nullable MClassDef(MClassDef)>*/
}
{
var357 = ((val*(*)(val* self))(var356->class->vft[COLOR_standard__string__Object__to_s]))(var356); /* to_s on <var356:MClass>*/
}
((struct instance_standard__NativeArray*)var342)->values[3]=var357;
{
var358 = ((val*(*)(val* self))(var342->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var342); /* native_to_s on <var342:NativeArray[String]>*/
}
varonce341 = var342;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__warning]))(self, var_ntype287, var338, var358); /* warning on <self:ModelBuilder>*/
}
}
}
BREAK_label292: (void)0;
{
((void(*)(val* self))(var_282->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_282); /* next on <var_282:ArrayIterator[ASuperPropdef]>*/
}
} else {
goto BREAK_label359;
}
}
BREAK_label359: (void)0;
{
((void(*)(val* self))(var_282->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_282); /* finish on <var_282:ArrayIterator[ASuperPropdef]>*/
}
BREAK_label258: (void)0;
{
((void(*)(val* self))((((long)var_250&3)?class_info[((long)var_250&3)]:var_250->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_250); /* next on <var_250:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label360;
}
}
BREAK_label360: (void)0;
{
((void(*)(val* self))((((long)var_250&3)?class_info[((long)var_250&3)]:var_250->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_250); /* finish on <var_250:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef for (self: ModelBuilder): HashMap[MClassDef, AClassdef] */
val* nit__modelize_class___ModelBuilder___mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
var1 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 449);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef= for (self: ModelBuilder, HashMap[MClassDef, AClassdef]) */
void nit__modelize_class___ModelBuilder___mclassdef2nclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val = p0; /* _mclassdef2nclassdef on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#mclassdef2node for (self: ModelBuilder, MClassDef): nullable AClassdef */
val* nit__modelize_class___ModelBuilder___mclassdef2node(val* self, val* p0) {
val* var /* : nullable AClassdef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
val* var2 /* : nullable Object */;
var_mclassdef = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ModelBuilder__mclassdef2nclassdef]))(self); /* mclassdef2nclassdef on <self:ModelBuilder>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var1, var_mclassdef); /* get_or_null on <var1:HashMap[MClassDef, AClassdef]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done for (self: AModule): Bool */
short int nit__modelize_class___AModule___build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done= for (self: AModule, Bool) */
void nit__modelize_class___AModule___build_classes_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_class__AModule___build_classes_is_done].s = p0; /* _build_classes_is_done on <self:AModule> */
RET_LABEL:;
}
/* method modelize_class#AModule#mclass2nclassdef for (self: AModule): Map[MClass, AClassdef] */
val* nit__modelize_class___AModule___mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
var1 = self->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 464);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#mclass2nclassdef= for (self: AModule, Map[MClass, AClassdef]) */
void nit__modelize_class___AModule___mclass2nclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val = p0; /* _mclass2nclassdef on <self:AModule> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclass for (self: AClassdef): nullable MClass */
val* nit__modelize_class___AClassdef___mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = self->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val; /* _mclass on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass= for (self: AClassdef, nullable MClass) */
void nit__modelize_class___AClassdef___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val = p0; /* _mclass on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclassdef for (self: AClassdef): nullable MClassDef */
val* nit__modelize_class___AClassdef___mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclassdef= for (self: AClassdef, nullable MClassDef) */
void nit__modelize_class___AClassdef___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val = p0; /* _mclassdef on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#all_defs for (self: AClassdef): nullable Array[AClassdef] */
val* nit__modelize_class___AClassdef___all_defs(val* self) {
val* var /* : nullable Array[AClassdef] */;
val* var1 /* : nullable Array[AClassdef] */;
var1 = self->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val; /* _all_defs on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#all_defs= for (self: AClassdef, nullable Array[AClassdef]) */
void nit__modelize_class___AClassdef___all_defs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val = p0; /* _all_defs on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClasskind#mkind for (self: AClasskind): MClassKind */
val* nit__modelize_class___AClasskind___mkind(val* self) {
val* var /* : MClassKind */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "mkind", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 479);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method modelize_class#AConcreteClasskind#mkind for (self: AConcreteClasskind): MClassKind */
val* nit__modelize_class___AConcreteClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__Sys__concrete_kind]))(var1); /* concrete_kind on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: AAbstractClasskind): MClassKind */
val* nit__modelize_class___AAbstractClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__Sys__abstract_kind]))(var1); /* abstract_kind on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: AInterfaceClasskind): MClassKind */
val* nit__modelize_class___AInterfaceClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__Sys__interface_kind]))(var1); /* interface_kind on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: AEnumClasskind): MClassKind */
val* nit__modelize_class___AEnumClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__Sys__enum_kind]))(var1); /* enum_kind on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: AExternClasskind): MClassKind */
val* nit__modelize_class___AExternClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__Sys__extern_kind]))(var1); /* extern_kind on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#mtype for (self: AFormaldef): nullable MParameterType */
val* nit__modelize_class___AFormaldef___mtype(val* self) {
val* var /* : nullable MParameterType */;
val* var1 /* : nullable MParameterType */;
var1 = self->attrs[COLOR_nit__modelize_class__AFormaldef___mtype].val; /* _mtype on <self:AFormaldef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#mtype= for (self: AFormaldef, nullable MParameterType) */
void nit__modelize_class___AFormaldef___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AFormaldef___mtype].val = p0; /* _mtype on <self:AFormaldef> */
RET_LABEL:;
}
/* method modelize_class#AFormaldef#bound for (self: AFormaldef): nullable MType */
val* nit__modelize_class___AFormaldef___bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val; /* _bound on <self:AFormaldef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#bound= for (self: AFormaldef, nullable MType) */
void nit__modelize_class___AFormaldef___bound_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = p0; /* _bound on <self:AFormaldef> */
RET_LABEL:;
}
