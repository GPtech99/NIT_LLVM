#include "nit__auto_super_init.sep.0.h"
/* method auto_super_init#ToolContext#auto_super_init_phase for (self: ToolContext): Phase */
val* nit__auto_super_init___ToolContext___auto_super_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#ToolContext#auto_super_init_phase= for (self: ToolContext, Phase) */
void nit__auto_super_init___ToolContext___auto_super_init_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__auto_super_init__ToolContext___auto_super_init_phase].val = p0; /* _auto_super_init_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitPhase#process_npropdef for (self: AutoSuperInitPhase, APropdef) */
void nit__auto_super_init___nit__auto_super_init__AutoSuperInitPhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : ToolContext */;
val* var2 /* : ModelBuilder */;
var_npropdef = p0;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
if (var){
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__Phase__toolcontext]))(self); /* toolcontext on <self:AutoSuperInitPhase>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__modelbuilder_base__ToolContext__modelbuilder]))(var1); /* modelbuilder on <var1:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var_npropdef->class->vft[COLOR_nit__auto_super_init__AMethPropdef__do_auto_super_init]))(var_npropdef, var2); /* do_auto_super_init on <var_npropdef:APropdef(AMethPropdef)>*/
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#visit for (self: AutoSuperInitVisitor, ANode) */
void nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__auto_super_init__ANode__accept_auto_super_init]))(var_n, self); /* accept_auto_super_init on <var_n:ANode>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init for (self: AutoSuperInitVisitor): nullable ANode */
val* nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= for (self: AutoSuperInitVisitor, nullable ANode) */
void nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init_61d(val* self, val* p0) {
self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = p0; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken for (self: AutoSuperInitVisitor): Bool */
short int nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___is_broken(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken= for (self: AutoSuperInitVisitor, Bool) */
void nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___is_broken_61d(val* self, short int p0) {
self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s = p0; /* _is_broken on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_inits for (self: AMethPropdef): nullable Array[CallSite] */
val* nit__auto_super_init___AMethPropdef___auto_super_inits(val* self) {
val* var /* : nullable Array[CallSite] */;
val* var1 /* : nullable Array[CallSite] */;
var1 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_inits= for (self: AMethPropdef, nullable Array[CallSite]) */
void nit__auto_super_init___AMethPropdef___auto_super_inits_61d(val* self, val* p0) {
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val = p0; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_call for (self: AMethPropdef): Bool */
short int nit__auto_super_init___AMethPropdef___auto_super_call(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_call= for (self: AMethPropdef, Bool) */
void nit__auto_super_init___AMethPropdef___auto_super_call_61d(val* self, short int p0) {
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s = p0; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#do_auto_super_init for (self: AMethPropdef, ModelBuilder) */
void nit__auto_super_init___AMethPropdef___do_auto_super_init(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var2 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MClassDef */;
val* var9 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var10 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var11 /* : MClass */;
val* var12 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : nullable AAnnotation */;
val* var_nosuper /* var nosuper: nullable AAnnotation */;
short int var17 /* : Bool */;
val* var18 /* : MProperty */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
val* var21 /* : MProperty */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
short int var_skip /* var skip: Bool */;
val* var29 /* : nullable POSetElement[MClassDef] */;
val* var30 /* : Collection[nullable Object] */;
val* var_31 /* var : Collection[MClassDef] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : Iterator[MClassDef] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var36 /* : MClass */;
val* var37 /* : MClassKind */;
short int var38 /* : Bool */;
val* var39 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : AutoSuperInitVisitor */;
val* var_v /* var v: AutoSuperInitVisitor */;
val* var43 /* : nullable ANode */;
val* var_anode /* var anode: nullable ANode */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : ToolContext */;
val* var59 /* : NativeArray[String] */;
static val* varonce58;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: Array[CallSite] */;
val* var67 /* : Array[MClassType] */;
val* var_68 /* var : Array[MClassType] */;
val* var69 /* : Iterator[nullable Object] */;
val* var_70 /* var : ArrayIterator[MClassType] */;
short int var71 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var73 /* : MClass */;
val* var74 /* : MClassKind */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var78 /* : MClassType */;
val* var79 /* : MType */;
val* var80 /* : MProperty */;
val* var81 /* : String */;
val* var82 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
val* var89 /* : nullable MProperty */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
val* var93 /* : NativeArray[String] */;
static val* varonce92;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : FlatString */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : FlatString */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
val* var105 /* : FlatString */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : FlatString */;
val* var110 /* : String */;
val* var111 /* : MProperty */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
short int var118 /* : Bool */;
val* var119 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
val* var120 /* : nullable Object */;
val* var_candidatedef /* var candidatedef: MMethodDef */;
val* var121 /* : nullable MSignature */;
val* var122 /* : nullable MSignature */;
val* var123 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var124 /* : MType */;
val* var125 /* : CallSite */;
val* var_callsite /* var callsite: CallSite */;
val* var126 /* : ToolContext */;
val* var128 /* : NativeArray[String] */;
static val* varonce127;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
val* var137 /* : String */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var141 /* : nullable MMethod */;
val* var_the_root_init_mmethod /* var the_root_init_mmethod: nullable MMethod */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
short int var_145 /* var : Bool */;
short int var146 /* : Bool */;
val* var147 /* : Array[MPropDef] */;
val* var_candidatedefs148 /* var candidatedefs: Array[MMethodDef] */;
val* var149 /* : nullable Object */;
val* var_candidatedef150 /* var candidatedef: MMethodDef */;
long var151 /* : Int */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
const char* var_class_name157;
short int var158 /* : Bool */;
val* var_159 /* var : Array[MMethodDef] */;
val* var160 /* : Iterator[nullable Object] */;
val* var_161 /* var : ArrayIterator[MMethodDef] */;
short int var162 /* : Bool */;
val* var163 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var164 /* : Array[MProperty] */;
long var165 /* : Int */;
val* var166 /* : Array[MProperty] */;
long var167 /* : Int */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
int cltype171;
int idtype172;
const char* var_class_name173;
short int var174 /* : Bool */;
val* var_176 /* var : Array[MMethodDef] */;
val* var177 /* : Iterator[nullable Object] */;
val* var_178 /* var : ArrayIterator[MMethodDef] */;
short int var179 /* : Bool */;
val* var180 /* : nullable Object */;
val* var_spd181 /* var spd: MMethodDef */;
long var_i /* var i: Int */;
val* var182 /* : Array[MProperty] */;
val* var_183 /* var : Array[MProperty] */;
val* var184 /* : Iterator[nullable Object] */;
val* var_185 /* var : ArrayIterator[MProperty] */;
short int var186 /* : Bool */;
val* var187 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var188 /* : Array[MProperty] */;
val* var189 /* : nullable Object */;
short int var190 /* : Bool */;
val* var192 /* : NativeArray[String] */;
static val* varonce191;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : FlatString */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
val* var200 /* : FlatString */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
val* var204 /* : FlatString */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : FlatString */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
val* var212 /* : FlatString */;
val* var213 /* : String */;
val* var214 /* : Array[MProperty] */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
val* var218 /* : FlatString */;
val* var219 /* : String */;
val* var220 /* : String */;
val* var221 /* : Array[MProperty] */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
val* var225 /* : FlatString */;
val* var226 /* : String */;
val* var227 /* : String */;
long var228 /* : Int */;
short int var230 /* : Bool */;
int cltype231;
int idtype232;
const char* var_class_name233;
long var234 /* : Int */;
val* var237 /* : nullable MSignature */;
val* var238 /* : nullable MSignature */;
val* var239 /* : nullable MSignature */;
val* var_msignature240 /* var msignature: nullable MSignature */;
val* var241 /* : MType */;
val* var242 /* : CallSite */;
val* var_callsite243 /* var callsite: CallSite */;
val* var244 /* : ToolContext */;
val* var246 /* : NativeArray[String] */;
static val* varonce245;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
val* var250 /* : FlatString */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
val* var254 /* : FlatString */;
val* var255 /* : String */;
val* var256 /* : String */;
val* var257 /* : String */;
short int var258 /* : Bool */;
val* var260 /* : NativeArray[String] */;
static val* varonce259;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
val* var264 /* : FlatString */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : FlatString */;
val* var269 /* : String */;
val* var270 /* : String */;
val* var_271 /* var : Array[CallSite] */;
val* var272 /* : Iterator[nullable Object] */;
val* var_273 /* var : ArrayIterator[CallSite] */;
short int var274 /* : Bool */;
val* var275 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var276 /* : MMethodDef */;
val* var_auto_super_init_def /* var auto_super_init_def: MMethodDef */;
val* var277 /* : nullable MSignature */;
val* var_msig /* var msig: MSignature */;
val* var278 /* : MSignature */;
val* var_supermsig /* var supermsig: MSignature */;
long var279 /* : Int */;
long var280 /* : Int */;
short int var281 /* : Bool */;
short int var283 /* : Bool */;
int cltype284;
int idtype285;
const char* var_class_name286;
short int var287 /* : Bool */;
val* var289 /* : NativeArray[String] */;
static val* varonce288;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
val* var293 /* : FlatString */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
val* var297 /* : FlatString */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
val* var301 /* : FlatString */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
val* var305 /* : FlatString */;
val* var306 /* : String */;
val* var307 /* : String */;
long var308 /* : Int */;
val* var309 /* : String */;
long var310 /* : Int */;
val* var311 /* : String */;
val* var312 /* : String */;
long var_i314 /* var i: Int */;
val* var315 /* : Array[MParameter] */;
val* var_316 /* var : Array[MParameter] */;
val* var317 /* : Iterator[nullable Object] */;
val* var_318 /* var : ArrayIterator[MParameter] */;
short int var319 /* : Bool */;
val* var320 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var321 /* : Array[MParameter] */;
val* var322 /* : nullable Object */;
val* var_p323 /* var p: MParameter */;
val* var324 /* : MType */;
val* var_sub /* var sub: MType */;
val* var325 /* : MType */;
val* var_sup /* var sup: MType */;
short int var326 /* : Bool */;
short int var327 /* : Bool */;
val* var329 /* : NativeArray[String] */;
static val* varonce328;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
val* var333 /* : FlatString */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
val* var337 /* : FlatString */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
val* var341 /* : FlatString */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
val* var345 /* : FlatString */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : NativeString */;
val* var349 /* : FlatString */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
val* var353 /* : FlatString */;
val* var354 /* : String */;
val* var355 /* : String */;
val* var356 /* : String */;
val* var357 /* : MType */;
val* var358 /* : String */;
val* var359 /* : String */;
val* var360 /* : MType */;
val* var361 /* : String */;
val* var362 /* : String */;
long var364 /* : Int */;
short int var366 /* : Bool */;
int cltype367;
int idtype368;
const char* var_class_name369;
long var370 /* : Int */;
var_modelbuilder = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(self); /* parent on <self:AMethPropdef>*/
}
/* <var:nullable ANode> isa AClassdef */
cltype = type_nit__AClassdef.color;
idtype = type_nit__AClassdef.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 59);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__modelize_class__AClassdef__mclassdef]))(var); /* mclassdef on <var:nullable ANode(AClassdef)>*/
}
var_mclassdef = var2;
if (var_mclassdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, ((val*)NULL)); /* == on <var_mclassdef:nullable MClassDef>*/
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AMethPropdef>*/
}
var_mpropdef = var5;
if (var_mpropdef == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MMethodDef>*/
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__model__MClassDef__mmodule]))(var8); /* mmodule on <var8:MClassDef>*/
}
var_mmodule = var9;
{
var10 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var_anchor = var10;
{
var11 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__MClass__mclass_type]))(var11); /* mclass_type on <var11:MClass>*/
}
var_recvtype = var12;
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "nosuper";
var15 = standard___standard__NativeString___to_s_with_length(var14, 7l);
var13 = var15;
varonce = var13;
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__annotation__Prod__get_single_annotation]))(self, var13, var_modelbuilder); /* get_single_annotation on <self:AMethPropdef>*/
}
var_nosuper = var16;
{
var18 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var19 = ((short int(*)(val* self))(var18->class->vft[COLOR_nit__model__MMethod__is_init]))(var18); /* is_init on <var18:MProperty(MMethod)>*/
}
var20 = !var19;
var_ = var20;
if (var20){
var17 = var_;
} else {
{
var21 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var22 = ((short int(*)(val* self))(var21->class->vft[COLOR_nit__model__MMethod__is_new]))(var21); /* is_new on <var21:MProperty(MMethod)>*/
}
var17 = var22;
}
if (var17){
if (var_nosuper == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nosuper, ((val*)NULL)); /* != on <var_nosuper:nullable AAnnotation>*/
var23 = var24;
}
if (var23){
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Error: `nosuper` only allowed in `init`.";
var28 = standard___standard__NativeString___to_s_with_length(var27, 40l);
var26 = var28;
varonce25 = var26;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_nosuper, var26); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
var_skip = 1;
{
var29 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(var_mclassdef); /* in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 78);
fatal_exit(1);
} else {
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var29); /* direct_greaters on <var29:nullable POSetElement[MClassDef]>*/
}
var_31 = var30;
{
var32 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:Collection[MClassDef]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:Iterator[MClassDef]>*/
}
if (var34){
{
var35 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:Iterator[MClassDef]>*/
}
var_cd = var35;
{
var36 = ((val*(*)(val* self))(var_cd->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_cd); /* mclass on <var_cd:MClassDef>*/
}
{
var37 = ((val*(*)(val* self))(var36->class->vft[COLOR_nit__model__MClass__kind]))(var36); /* kind on <var36:MClass>*/
}
{
var38 = ((short int(*)(val* self))(var37->class->vft[COLOR_nit__model__MClassKind__need_init]))(var37); /* need_init on <var37:MClassKind>*/
}
if (var38){
var_skip = 0;
} else {
}
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:Iterator[MClassDef]>*/
}
if (var_skip){
goto RET_LABEL;
} else {
}
{
var39 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block]))(self); /* n_block on <self:AMethPropdef>*/
}
var_nblock = var39;
if (var_nblock == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
var41 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nblock, ((val*)NULL)); /* != on <var_nblock:nullable AExpr>*/
var40 = var41;
}
if (var40){
var42 = NEW_nit__auto_super_init__AutoSuperInitVisitor(&type_nit__auto_super_init__AutoSuperInitVisitor);
{
((void(*)(val* self))(var42->class->vft[COLOR_standard__kernel__Object__init]))(var42); /* init on <var42:AutoSuperInitVisitor>*/
}
var_v = var42;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var_nblock); /* enter_visit on <var_v:AutoSuperInitVisitor>*/
}
{
var43 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__auto_super_init__AutoSuperInitVisitor__has_explicit_super_init]))(var_v); /* has_explicit_super_init on <var_v:AutoSuperInitVisitor>*/
}
var_anode = var43;
if (var_anode == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
var45 = ((short int(*)(val* self, val* p0))(var_anode->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_anode, ((val*)NULL)); /* != on <var_anode:nullable ANode>*/
var44 = var45;
}
if (var44){
if (var_nosuper == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
var47 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nosuper, ((val*)NULL)); /* != on <var_nosuper:nullable AAnnotation>*/
var46 = var47;
}
if (var46){
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Error: method is annotated `nosuper` but a super-constructor call is present.";
var51 = standard___standard__NativeString___to_s_with_length(var50, 77l);
var49 = var51;
varonce48 = var49;
}
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, var_anode, var49); /* error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
var52 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__auto_super_init__AutoSuperInitVisitor__is_broken]))(var_v); /* is_broken on <var_v:AutoSuperInitVisitor>*/
}
if (var52){
goto RET_LABEL;
} else {
}
} else {
}
if (var_nosuper == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (0) {
var54 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nosuper, ((val*)NULL)); /* != on <var_nosuper:nullable AAnnotation>*/
var53 = var54;
}
if (var53){
goto RET_LABEL;
} else {
}
{
var55 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
var56 = !var55;
if (var56){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__auto_super_init__AMethPropdef__auto_super_call_61d]))(self, 1); /* auto_super_call= on <self:AMethPropdef>*/
}
{
((void(*)(val* self, short int p0))(var_mpropdef->class->vft[COLOR_nit__modelize_property__MPropDef__has_supercall_61d]))(var_mpropdef, 1); /* has_supercall= on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var57 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var_modelbuilder); /* toolcontext on <var_modelbuilder:ModelBuilder>*/
}
if (unlikely(varonce58==NULL)) {
var59 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "Auto-super call for ";
var63 = standard___standard__NativeString___to_s_with_length(var62, 20l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var59)->values[0]=var61;
} else {
var59 = varonce58;
varonce58 = NULL;
}
{
var64 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var59)->values[1]=var64;
{
var65 = ((val*(*)(val* self))(var59->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce58 = var59;
{
((void(*)(val* self, val* p0, long p1))(var57->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var57, var65, 4l); /* info on <var57:ToolContext>*/
}
goto RET_LABEL;
} else {
}
var66 = NEW_standard__Array(&type_standard__Array__nit__CallSite);
{
((void(*)(val* self))(var66->class->vft[COLOR_standard__kernel__Object__init]))(var66); /* init on <var66:Array[CallSite]>*/
}
var_auto_super_inits = var66;
{
var67 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__supertypes]))(var_mclassdef); /* supertypes on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var_68 = var67;
{
var69 = ((val*(*)(val* self))(var_68->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_68); /* iterator on <var_68:Array[MClassType]>*/
}
var_70 = var69;
for(;;) {
{
var71 = ((short int(*)(val* self))(var_70->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_70); /* is_ok on <var_70:ArrayIterator[MClassType]>*/
}
if (var71){
{
var72 = ((val*(*)(val* self))(var_70->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_70); /* item on <var_70:ArrayIterator[MClassType]>*/
}
var_msupertype = var72;
{
var73 = ((val*(*)(val* self))(var_msupertype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_msupertype); /* mclass on <var_msupertype:MClassType>*/
}
{
var74 = ((val*(*)(val* self))(var73->class->vft[COLOR_nit__model__MClass__kind]))(var73); /* kind on <var73:MClass>*/
}
{
var75 = ((short int(*)(val* self))(var74->class->vft[COLOR_nit__model__MClassKind__need_init]))(var74); /* need_init on <var74:MClassKind>*/
}
var76 = !var75;
if (var76){
goto BREAK_label77;
} else {
}
{
var78 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var_mclassdef); /* bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var79 = ((val*(*)(val* self, val* p0, val* p1))(var_msupertype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_msupertype, var_mmodule, var78); /* anchor_to on <var_msupertype:MClassType>*/
}
var_msupertype = var79;
{
var80 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var81 = ((val*(*)(val* self))(var80->class->vft[COLOR_nit__model_base__MEntity__name]))(var80); /* name on <var80:MProperty(MMethod)>*/
}
{
var82 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name2]))(var_modelbuilder, self, var_mmodule, var_msupertype, var81); /* try_get_mproperty_by_name2 on <var_modelbuilder:ModelBuilder>*/
}
var_candidate = var82;
if (var_candidate == NULL) {
var83 = 1; /* is null */
} else {
var83 = 0; /* arg is null but recv is not */
}
if (0) {
var84 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable MProperty>*/
var83 = var84;
}
if (var83){
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "init";
var88 = standard___standard__NativeString___to_s_with_length(var87, 4l);
var86 = var88;
varonce85 = var86;
}
{
var89 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__try_get_mproperty_by_name2]))(var_modelbuilder, self, var_mmodule, var_msupertype, var86); /* try_get_mproperty_by_name2 on <var_modelbuilder:ModelBuilder>*/
}
var_candidate = var89;
} else {
}
if (var_candidate == NULL) {
var90 = 1; /* is null */
} else {
var90 = 0; /* arg is null but recv is not */
}
if (0) {
var91 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable MProperty>*/
var90 = var91;
}
if (var90){
if (unlikely(varonce92==NULL)) {
var93 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "Error: cannot do an implicit constructor call in `";
var97 = standard___standard__NativeString___to_s_with_length(var96, 50l);
var95 = var97;
varonce94 = var95;
}
((struct instance_standard__NativeArray*)var93)->values[0]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "`; there is no constructor named `";
var101 = standard___standard__NativeString___to_s_with_length(var100, 34l);
var99 = var101;
varonce98 = var99;
}
((struct instance_standard__NativeArray*)var93)->values[2]=var99;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "` in `";
var105 = standard___standard__NativeString___to_s_with_length(var104, 6l);
var103 = var105;
varonce102 = var103;
}
((struct instance_standard__NativeArray*)var93)->values[4]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "`.";
var109 = standard___standard__NativeString___to_s_with_length(var108, 2l);
var107 = var109;
varonce106 = var107;
}
((struct instance_standard__NativeArray*)var93)->values[6]=var107;
} else {
var93 = varonce92;
varonce92 = NULL;
}
{
var110 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var93)->values[1]=var110;
{
var111 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
{
var112 = ((val*(*)(val* self))(var111->class->vft[COLOR_nit__model_base__MEntity__name]))(var111); /* name on <var111:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var93)->values[3]=var112;
{
var113 = ((val*(*)(val* self))(var_msupertype->class->vft[COLOR_standard__string__Object__to_s]))(var_msupertype); /* to_s on <var_msupertype:MClassType>*/
}
((struct instance_standard__NativeArray*)var93)->values[5]=var113;
{
var114 = ((val*(*)(val* self))(var93->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var93); /* native_to_s on <var93:NativeArray[String]>*/
}
varonce92 = var93;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var114); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_candidate:nullable MProperty(MProperty)> isa MMethod */
cltype116 = type_nit__MMethod.color;
idtype117 = type_nit__MMethod.id;
if(cltype116 >= var_candidate->type->table_size) {
var115 = 0;
} else {
var115 = var_candidate->type->type_table[cltype116] == idtype117;
}
if (unlikely(!var115)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 125);
fatal_exit(1);
}
{
var118 = ((short int(*)(val* self))(var_candidate->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var_candidate); /* is_root_init on <var_candidate:nullable MProperty(MMethod)>*/
}
if (var118){
goto BREAK_label77;
} else {
}
{
var119 = ((val*(*)(val* self, val* p0, val* p1))(var_candidate->class->vft[COLOR_nit__model__MProperty__lookup_definitions]))(var_candidate, var_mmodule, var_anchor); /* lookup_definitions on <var_candidate:nullable MProperty(MMethod)>*/
}
var_candidatedefs = var119;
{
var120 = ((val*(*)(val* self))(var_candidatedefs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_candidatedefs); /* first on <var_candidatedefs:Array[MMethodDef]>*/
}
var_candidatedef = var120;
{
var122 = ((val*(*)(val* self))(var_candidatedef->class->vft[COLOR_nit__model__MMethodDef__new_msignature]))(var_candidatedef); /* new_msignature on <var_candidatedef:MMethodDef>*/
}
if (var122!=NULL) {
var121 = var122;
} else {
{
var123 = ((val*(*)(val* self))(var_candidatedef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_candidatedef); /* msignature on <var_candidatedef:MMethodDef>*/
}
var121 = var123;
}
var_msignature = var121;
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 135);
fatal_exit(1);
} else {
var124 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_msignature->class->vft[COLOR_nit__model__MType__resolve_for]))(var_msignature, var_recvtype, var_anchor, var_mmodule, 1); /* resolve_for on <var_msignature:nullable MSignature>*/
}
var_msignature = var124;
var125 = NEW_nit__CallSite(&type_nit__CallSite);
{
((void(*)(val* self, val* p0))(var125->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var125, self); /* node= on <var125:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var125->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var125, var_recvtype); /* recv= on <var125:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var125->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var125, var_mmodule); /* mmodule= on <var125:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var125->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var125, var_anchor); /* anchor= on <var125:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var125->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var125, 1); /* recv_is_self= on <var125:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var125->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var125, var_candidate); /* mproperty= on <var125:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var125->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var125, var_candidatedef); /* mpropdef= on <var125:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var125->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var125, var_msignature); /* msignature= on <var125:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var125->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var125, 0); /* erasure_cast= on <var125:CallSite>*/
}
{
((void(*)(val* self))(var125->class->vft[COLOR_standard__kernel__Object__init]))(var125); /* init on <var125:CallSite>*/
}
var_callsite = var125;
{
((void(*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_auto_super_inits, var_callsite); /* add on <var_auto_super_inits:Array[CallSite]>*/
}
{
var126 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var_modelbuilder); /* toolcontext on <var_modelbuilder:ModelBuilder>*/
}
if (unlikely(varonce127==NULL)) {
var128 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "Old-style auto-super init for ";
var132 = standard___standard__NativeString___to_s_with_length(var131, 30l);
var130 = var132;
varonce129 = var130;
}
((struct instance_standard__NativeArray*)var128)->values[0]=var130;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = " to ";
var136 = standard___standard__NativeString___to_s_with_length(var135, 4l);
var134 = var136;
varonce133 = var134;
}
((struct instance_standard__NativeArray*)var128)->values[2]=var134;
} else {
var128 = varonce127;
varonce127 = NULL;
}
{
var137 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var128)->values[1]=var137;
{
var138 = ((val*(*)(val* self))(var_candidate->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_candidate); /* full_name on <var_candidate:nullable MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var128)->values[3]=var138;
{
var139 = ((val*(*)(val* self))(var128->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var128); /* native_to_s on <var128:NativeArray[String]>*/
}
varonce127 = var128;
{
((void(*)(val* self, val* p0, long p1))(var126->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var126, var139, 4l); /* info on <var126:ToolContext>*/
}
BREAK_label77: (void)0;
{
((void(*)(val* self))(var_70->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_70); /* next on <var_70:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label140;
}
}
BREAK_label140: (void)0;
{
((void(*)(val* self))(var_70->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_70); /* finish on <var_70:ArrayIterator[MClassType]>*/
}
{
var141 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelize_property__ModelBuilder__the_root_init_mmethod]))(var_modelbuilder); /* the_root_init_mmethod on <var_modelbuilder:ModelBuilder>*/
}
var_the_root_init_mmethod = var141;
if (var_the_root_init_mmethod == NULL) {
var143 = 0; /* is null */
} else {
var143 = 1; /* arg is null and recv is not */
}
if (0) {
var144 = ((short int(*)(val* self, val* p0))(var_the_root_init_mmethod->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_the_root_init_mmethod, ((val*)NULL)); /* != on <var_the_root_init_mmethod:nullable MMethod>*/
var143 = var144;
}
var_145 = var143;
if (var143){
{
var146 = ((short int(*)(val* self))(var_auto_super_inits->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_auto_super_inits); /* is_empty on <var_auto_super_inits:Array[CallSite]>*/
}
var142 = var146;
} else {
var142 = var_145;
}
if (var142){
{
var147 = ((val*(*)(val* self, val* p0, val* p1))(var_the_root_init_mmethod->class->vft[COLOR_nit__model__MProperty__lookup_definitions]))(var_the_root_init_mmethod, var_mmodule, var_anchor); /* lookup_definitions on <var_the_root_init_mmethod:nullable MMethod(MMethod)>*/
}
var_candidatedefs148 = var147;
{
var149 = ((val*(*)(val* self))(var_candidatedefs148->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_candidatedefs148); /* first on <var_candidatedefs148:Array[MMethodDef]>*/
}
var_candidatedef150 = var149;
{
var151 = ((long(*)(val* self))(var_candidatedefs148->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_candidatedefs148); /* length on <var_candidatedefs148:Array[MMethodDef]>*/
}
{
{ /* Inline kernel#Int#> (var151,1l) on <var151:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var154 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var154)) {
var_class_name157 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name157);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var158 = var151 > 1l;
var152 = var158;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
if (var152){
var_159 = var_candidatedefs148;
{
var160 = ((val*(*)(val* self))(var_159->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_159); /* iterator on <var_159:Array[MMethodDef]>*/
}
var_161 = var160;
for(;;) {
{
var162 = ((short int(*)(val* self))(var_161->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_161); /* is_ok on <var_161:ArrayIterator[MMethodDef]>*/
}
if (var162){
{
var163 = ((val*(*)(val* self))(var_161->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_161); /* item on <var_161:ArrayIterator[MMethodDef]>*/
}
var_spd = var163;
{
var164 = ((val*(*)(val* self))(var_spd->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_spd); /* initializers on <var_spd:MMethodDef>*/
}
{
var165 = ((long(*)(val* self))(var164->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var164); /* length on <var164:Array[MProperty]>*/
}
{
var166 = ((val*(*)(val* self))(var_candidatedef150->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_candidatedef150); /* initializers on <var_candidatedef150:MMethodDef>*/
}
{
var167 = ((long(*)(val* self))(var166->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var166); /* length on <var166:Array[MProperty]>*/
}
{
{ /* Inline kernel#Int#> (var165,var167) on <var165:Int> */
/* Covariant cast for argument 0 (i) <var167:Int> isa OTHER */
/* <var167:Int> isa OTHER */
var170 = 1; /* easy <var167:Int> isa OTHER*/
if (unlikely(!var170)) {
var_class_name173 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name173);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var174 = var165 > var167;
var168 = var174;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
if (var168){
var_candidatedef150 = var_spd;
} else {
}
{
((void(*)(val* self))(var_161->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_161); /* next on <var_161:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label175;
}
}
BREAK_label175: (void)0;
{
((void(*)(val* self))(var_161->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_161); /* finish on <var_161:ArrayIterator[MMethodDef]>*/
}
var_176 = var_candidatedefs148;
{
var177 = ((val*(*)(val* self))(var_176->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_176); /* iterator on <var_176:Array[MMethodDef]>*/
}
var_178 = var177;
for(;;) {
{
var179 = ((short int(*)(val* self))(var_178->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_178); /* is_ok on <var_178:ArrayIterator[MMethodDef]>*/
}
if (var179){
{
var180 = ((val*(*)(val* self))(var_178->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_178); /* item on <var_178:ArrayIterator[MMethodDef]>*/
}
var_spd181 = var180;
var_i = 0l;
{
var182 = ((val*(*)(val* self))(var_spd181->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_spd181); /* initializers on <var_spd181:MMethodDef>*/
}
var_183 = var182;
{
var184 = ((val*(*)(val* self))(var_183->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_183); /* iterator on <var_183:Array[MProperty]>*/
}
var_185 = var184;
for(;;) {
{
var186 = ((short int(*)(val* self))(var_185->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_185); /* is_ok on <var_185:ArrayIterator[MProperty]>*/
}
if (var186){
{
var187 = ((val*(*)(val* self))(var_185->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_185); /* item on <var_185:ArrayIterator[MProperty]>*/
}
var_p = var187;
{
var188 = ((val*(*)(val* self))(var_candidatedef150->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_candidatedef150); /* initializers on <var_candidatedef150:MMethodDef>*/
}
{
var189 = ((val*(*)(val* self, long p0))(var188->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var188, var_i); /* [] on <var188:Array[MProperty]>*/
}
{
var190 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_p, var189); /* != on <var_p:MProperty>*/
}
if (var190){
if (unlikely(varonce191==NULL)) {
var192 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "Error: cannot do an implicit constructor call to conflicting inherited inits `";
var196 = standard___standard__NativeString___to_s_with_length(var195, 78l);
var194 = var196;
varonce193 = var194;
}
((struct instance_standard__NativeArray*)var192)->values[0]=var194;
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "(";
var200 = standard___standard__NativeString___to_s_with_length(var199, 1l);
var198 = var200;
varonce197 = var198;
}
((struct instance_standard__NativeArray*)var192)->values[2]=var198;
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = "`) and `";
var204 = standard___standard__NativeString___to_s_with_length(var203, 8l);
var202 = var204;
varonce201 = var202;
}
((struct instance_standard__NativeArray*)var192)->values[4]=var202;
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "(";
var208 = standard___standard__NativeString___to_s_with_length(var207, 1l);
var206 = var208;
varonce205 = var206;
}
((struct instance_standard__NativeArray*)var192)->values[6]=var206;
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = "`). NOTE: Do not mix old-style and new-style init!";
var212 = standard___standard__NativeString___to_s_with_length(var211, 50l);
var210 = var212;
varonce209 = var210;
}
((struct instance_standard__NativeArray*)var192)->values[8]=var210;
} else {
var192 = varonce191;
varonce191 = NULL;
}
{
var213 = ((val*(*)(val* self))(var_spd181->class->vft[COLOR_standard__string__Object__to_s]))(var_spd181); /* to_s on <var_spd181:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var192)->values[1]=var213;
{
var214 = ((val*(*)(val* self))(var_spd181->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_spd181); /* initializers on <var_spd181:MMethodDef>*/
}
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = ", ";
var218 = standard___standard__NativeString___to_s_with_length(var217, 2l);
var216 = var218;
varonce215 = var216;
}
{
var219 = ((val*(*)(val* self, val* p0))(var214->class->vft[COLOR_standard__string__Collection__join]))(var214, var216); /* join on <var214:Array[MProperty]>*/
}
((struct instance_standard__NativeArray*)var192)->values[3]=var219;
{
var220 = ((val*(*)(val* self))(var_candidatedef150->class->vft[COLOR_standard__string__Object__to_s]))(var_candidatedef150); /* to_s on <var_candidatedef150:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var192)->values[5]=var220;
{
var221 = ((val*(*)(val* self))(var_candidatedef150->class->vft[COLOR_nit__model__MMethodDef__initializers]))(var_candidatedef150); /* initializers on <var_candidatedef150:MMethodDef>*/
}
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = ", ";
var225 = standard___standard__NativeString___to_s_with_length(var224, 2l);
var223 = var225;
varonce222 = var223;
}
{
var226 = ((val*(*)(val* self, val* p0))(var221->class->vft[COLOR_standard__string__Collection__join]))(var221, var223); /* join on <var221:Array[MProperty]>*/
}
((struct instance_standard__NativeArray*)var192)->values[7]=var226;
{
var227 = ((val*(*)(val* self))(var192->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var192); /* native_to_s on <var192:NativeArray[String]>*/
}
varonce191 = var192;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var227); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var230 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var230)) {
var_class_name233 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name233);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var234 = var_i + 1l;
var228 = var234;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
}
var_i = var228;
{
((void(*)(val* self))(var_185->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_185); /* next on <var_185:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label235;
}
}
BREAK_label235: (void)0;
{
((void(*)(val* self))(var_185->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_185); /* finish on <var_185:ArrayIterator[MProperty]>*/
}
{
((void(*)(val* self))(var_178->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_178); /* next on <var_178:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label236;
}
}
BREAK_label236: (void)0;
{
((void(*)(val* self))(var_178->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_178); /* finish on <var_178:ArrayIterator[MMethodDef]>*/
}
} else {
}
{
var238 = ((val*(*)(val* self))(var_candidatedef150->class->vft[COLOR_nit__model__MMethodDef__new_msignature]))(var_candidatedef150); /* new_msignature on <var_candidatedef150:MMethodDef>*/
}
if (var238!=NULL) {
var237 = var238;
} else {
{
var239 = ((val*(*)(val* self))(var_candidatedef150->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_candidatedef150); /* msignature on <var_candidatedef150:MMethodDef>*/
}
var237 = var239;
}
var_msignature240 = var237;
if (var_msignature240 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 170);
fatal_exit(1);
} else {
var241 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_msignature240->class->vft[COLOR_nit__model__MType__resolve_for]))(var_msignature240, var_recvtype, var_anchor, var_mmodule, 1); /* resolve_for on <var_msignature240:nullable MSignature>*/
}
var_msignature240 = var241;
var242 = NEW_nit__CallSite(&type_nit__CallSite);
{
((void(*)(val* self, val* p0))(var242->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var242, self); /* node= on <var242:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var242->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var242, var_recvtype); /* recv= on <var242:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var242->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var242, var_mmodule); /* mmodule= on <var242:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var242->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var242, var_anchor); /* anchor= on <var242:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var242->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var242, 1); /* recv_is_self= on <var242:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var242->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var242, var_the_root_init_mmethod); /* mproperty= on <var242:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var242->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var242, var_candidatedef150); /* mpropdef= on <var242:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var242->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var242, var_msignature240); /* msignature= on <var242:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var242->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var242, 0); /* erasure_cast= on <var242:CallSite>*/
}
{
((void(*)(val* self))(var242->class->vft[COLOR_standard__kernel__Object__init]))(var242); /* init on <var242:CallSite>*/
}
var_callsite243 = var242;
{
((void(*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_auto_super_inits, var_callsite243); /* add on <var_auto_super_inits:Array[CallSite]>*/
}
{
var244 = ((val*(*)(val* self))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext]))(var_modelbuilder); /* toolcontext on <var_modelbuilder:ModelBuilder>*/
}
if (unlikely(varonce245==NULL)) {
var246 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "Auto-super init for ";
var250 = standard___standard__NativeString___to_s_with_length(var249, 20l);
var248 = var250;
varonce247 = var248;
}
((struct instance_standard__NativeArray*)var246)->values[0]=var248;
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = " to ";
var254 = standard___standard__NativeString___to_s_with_length(var253, 4l);
var252 = var254;
varonce251 = var252;
}
((struct instance_standard__NativeArray*)var246)->values[2]=var252;
} else {
var246 = varonce245;
varonce245 = NULL;
}
{
var255 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var246)->values[1]=var255;
{
var256 = ((val*(*)(val* self))(var_the_root_init_mmethod->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_the_root_init_mmethod); /* full_name on <var_the_root_init_mmethod:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var246)->values[3]=var256;
{
var257 = ((val*(*)(val* self))(var246->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var246); /* native_to_s on <var246:NativeArray[String]>*/
}
varonce245 = var246;
{
((void(*)(val* self, val* p0, long p1))(var244->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var244, var257, 4l); /* info on <var244:ToolContext>*/
}
} else {
}
{
var258 = ((short int(*)(val* self))(var_auto_super_inits->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_auto_super_inits); /* is_empty on <var_auto_super_inits:Array[CallSite]>*/
}
if (var258){
if (unlikely(varonce259==NULL)) {
var260 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "Error: no constructors to call implicitly in `";
var264 = standard___standard__NativeString___to_s_with_length(var263, 46l);
var262 = var264;
varonce261 = var262;
}
((struct instance_standard__NativeArray*)var260)->values[0]=var262;
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "`. Call one explicitly.";
var268 = standard___standard__NativeString___to_s_with_length(var267, 23l);
var266 = var268;
varonce265 = var266;
}
((struct instance_standard__NativeArray*)var260)->values[2]=var266;
} else {
var260 = varonce259;
varonce259 = NULL;
}
{
var269 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var260)->values[1]=var269;
{
var270 = ((val*(*)(val* self))(var260->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var260); /* native_to_s on <var260:NativeArray[String]>*/
}
varonce259 = var260;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var270); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var_271 = var_auto_super_inits;
{
var272 = ((val*(*)(val* self))(var_271->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_271); /* iterator on <var_271:Array[CallSite]>*/
}
var_273 = var272;
for(;;) {
{
var274 = ((short int(*)(val* self))(var_273->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_273); /* is_ok on <var_273:ArrayIterator[CallSite]>*/
}
if (var274){
{
var275 = ((val*(*)(val* self))(var_273->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_273); /* item on <var_273:ArrayIterator[CallSite]>*/
}
var_auto_super_init = var275;
{
var276 = ((val*(*)(val* self))(var_auto_super_init->class->vft[COLOR_nit__typing__CallSite__mpropdef]))(var_auto_super_init); /* mpropdef on <var_auto_super_init:CallSite>*/
}
var_auto_super_init_def = var276;
{
var277 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_mpropdef); /* msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 184);
fatal_exit(1);
}
var_msig = var277;
{
var278 = ((val*(*)(val* self))(var_auto_super_init->class->vft[COLOR_nit__typing__CallSite__msignature]))(var_auto_super_init); /* msignature on <var_auto_super_init:CallSite>*/
}
var_supermsig = var278;
{
var279 = ((long(*)(val* self))(var_supermsig->class->vft[COLOR_nit__model__MSignature__arity]))(var_supermsig); /* arity on <var_supermsig:MSignature>*/
}
{
var280 = ((long(*)(val* self))(var_msig->class->vft[COLOR_nit__model__MSignature__arity]))(var_msig); /* arity on <var_msig:MSignature>*/
}
{
{ /* Inline kernel#Int#> (var279,var280) on <var279:Int> */
/* Covariant cast for argument 0 (i) <var280:Int> isa OTHER */
/* <var280:Int> isa OTHER */
var283 = 1; /* easy <var280:Int> isa OTHER*/
if (unlikely(!var283)) {
var_class_name286 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name286);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var287 = var279 > var280;
var281 = var287;
goto RET_LABEL282;
RET_LABEL282:(void)0;
}
}
if (var281){
if (unlikely(varonce288==NULL)) {
var289 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = "Error: cannot do an implicit constructor call to `";
var293 = standard___standard__NativeString___to_s_with_length(var292, 50l);
var291 = var293;
varonce290 = var291;
}
((struct instance_standard__NativeArray*)var289)->values[0]=var291;
if (likely(varonce294!=NULL)) {
var295 = varonce294;
} else {
var296 = "`. Expected at least `";
var297 = standard___standard__NativeString___to_s_with_length(var296, 22l);
var295 = var297;
varonce294 = var295;
}
((struct instance_standard__NativeArray*)var289)->values[3]=var295;
if (likely(varonce298!=NULL)) {
var299 = varonce298;
} else {
var300 = "` arguments, got `";
var301 = standard___standard__NativeString___to_s_with_length(var300, 18l);
var299 = var301;
varonce298 = var299;
}
((struct instance_standard__NativeArray*)var289)->values[5]=var299;
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "`.";
var305 = standard___standard__NativeString___to_s_with_length(var304, 2l);
var303 = var305;
varonce302 = var303;
}
((struct instance_standard__NativeArray*)var289)->values[7]=var303;
} else {
var289 = varonce288;
varonce288 = NULL;
}
{
var306 = ((val*(*)(val* self))(var_auto_super_init_def->class->vft[COLOR_standard__string__Object__to_s]))(var_auto_super_init_def); /* to_s on <var_auto_super_init_def:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var289)->values[1]=var306;
{
var307 = ((val*(*)(val* self))(var_supermsig->class->vft[COLOR_standard__string__Object__to_s]))(var_supermsig); /* to_s on <var_supermsig:MSignature>*/
}
((struct instance_standard__NativeArray*)var289)->values[2]=var307;
{
var308 = ((long(*)(val* self))(var_supermsig->class->vft[COLOR_nit__model__MSignature__arity]))(var_supermsig); /* arity on <var_supermsig:MSignature>*/
}
var309 = standard__string___Int___Object__to_s(var308);
((struct instance_standard__NativeArray*)var289)->values[4]=var309;
{
var310 = ((long(*)(val* self))(var_msig->class->vft[COLOR_nit__model__MSignature__arity]))(var_msig); /* arity on <var_msig:MSignature>*/
}
var311 = standard__string___Int___Object__to_s(var310);
((struct instance_standard__NativeArray*)var289)->values[6]=var311;
{
var312 = ((val*(*)(val* self))(var289->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var289); /* native_to_s on <var289:NativeArray[String]>*/
}
varonce288 = var289;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var312); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label313;
} else {
}
var_i314 = 0l;
{
var315 = ((val*(*)(val* self))(var_supermsig->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_supermsig); /* mparameters on <var_supermsig:MSignature>*/
}
var_316 = var315;
{
var317 = ((val*(*)(val* self))(var_316->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_316); /* iterator on <var_316:Array[MParameter]>*/
}
var_318 = var317;
for(;;) {
{
var319 = ((short int(*)(val* self))(var_318->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_318); /* is_ok on <var_318:ArrayIterator[MParameter]>*/
}
if (var319){
{
var320 = ((val*(*)(val* self))(var_318->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_318); /* item on <var_318:ArrayIterator[MParameter]>*/
}
var_sp = var320;
{
var321 = ((val*(*)(val* self))(var_msig->class->vft[COLOR_nit__model__MSignature__mparameters]))(var_msig); /* mparameters on <var_msig:MSignature>*/
}
{
var322 = ((val*(*)(val* self, long p0))(var321->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var321, var_i314); /* [] on <var321:Array[MParameter]>*/
}
var_p323 = var322;
{
var324 = ((val*(*)(val* self))(var_p323->class->vft[COLOR_nit__model__MParameter__mtype]))(var_p323); /* mtype on <var_p323:MParameter>*/
}
var_sub = var324;
{
var325 = ((val*(*)(val* self))(var_sp->class->vft[COLOR_nit__model__MParameter__mtype]))(var_sp); /* mtype on <var_sp:MParameter>*/
}
var_sup = var325;
{
var326 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__is_subtype]))(var_sub, var_mmodule, var_anchor, var_sup); /* is_subtype on <var_sub:MType>*/
}
var327 = !var326;
if (var327){
if (unlikely(varonce328==NULL)) {
var329 = NEW_standard__NativeArray(12l, &type_standard__NativeArray__standard__String);
if (likely(varonce330!=NULL)) {
var331 = varonce330;
} else {
var332 = "Error: cannot do an implicit constructor call to `";
var333 = standard___standard__NativeString___to_s_with_length(var332, 50l);
var331 = var333;
varonce330 = var331;
}
((struct instance_standard__NativeArray*)var329)->values[0]=var331;
if (likely(varonce334!=NULL)) {
var335 = varonce334;
} else {
var336 = "`. Expected argument #";
var337 = standard___standard__NativeString___to_s_with_length(var336, 22l);
var335 = var337;
varonce334 = var335;
}
((struct instance_standard__NativeArray*)var329)->values[3]=var335;
if (likely(varonce338!=NULL)) {
var339 = varonce338;
} else {
var340 = " of type `";
var341 = standard___standard__NativeString___to_s_with_length(var340, 10l);
var339 = var341;
varonce338 = var339;
}
((struct instance_standard__NativeArray*)var329)->values[5]=var339;
if (likely(varonce342!=NULL)) {
var343 = varonce342;
} else {
var344 = "`, got implicit argument `";
var345 = standard___standard__NativeString___to_s_with_length(var344, 26l);
var343 = var345;
varonce342 = var343;
}
((struct instance_standard__NativeArray*)var329)->values[7]=var343;
if (likely(varonce346!=NULL)) {
var347 = varonce346;
} else {
var348 = "` of type `";
var349 = standard___standard__NativeString___to_s_with_length(var348, 11l);
var347 = var349;
varonce346 = var347;
}
((struct instance_standard__NativeArray*)var329)->values[9]=var347;
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = "`.";
var353 = standard___standard__NativeString___to_s_with_length(var352, 2l);
var351 = var353;
varonce350 = var351;
}
((struct instance_standard__NativeArray*)var329)->values[11]=var351;
} else {
var329 = varonce328;
varonce328 = NULL;
}
{
var354 = ((val*(*)(val* self))(var_auto_super_init_def->class->vft[COLOR_standard__string__Object__to_s]))(var_auto_super_init_def); /* to_s on <var_auto_super_init_def:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var329)->values[1]=var354;
{
var355 = ((val*(*)(val* self))(var_supermsig->class->vft[COLOR_standard__string__Object__to_s]))(var_supermsig); /* to_s on <var_supermsig:MSignature>*/
}
((struct instance_standard__NativeArray*)var329)->values[2]=var355;
var356 = standard__string___Int___Object__to_s(var_i314);
((struct instance_standard__NativeArray*)var329)->values[4]=var356;
{
var357 = ((val*(*)(val* self))(var_sp->class->vft[COLOR_nit__model__MParameter__mtype]))(var_sp); /* mtype on <var_sp:MParameter>*/
}
{
var358 = ((val*(*)(val* self))(var357->class->vft[COLOR_standard__string__Object__to_s]))(var357); /* to_s on <var357:MType>*/
}
((struct instance_standard__NativeArray*)var329)->values[6]=var358;
{
var359 = ((val*(*)(val* self))(var_p323->class->vft[COLOR_nit__model_base__MEntity__name]))(var_p323); /* name on <var_p323:MParameter>*/
}
((struct instance_standard__NativeArray*)var329)->values[8]=var359;
{
var360 = ((val*(*)(val* self))(var_p323->class->vft[COLOR_nit__model__MParameter__mtype]))(var_p323); /* mtype on <var_p323:MParameter>*/
}
{
var361 = ((val*(*)(val* self))(var360->class->vft[COLOR_standard__string__Object__to_s]))(var360); /* to_s on <var360:MType>*/
}
((struct instance_standard__NativeArray*)var329)->values[10]=var361;
{
var362 = ((val*(*)(val* self))(var329->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var329); /* native_to_s on <var329:NativeArray[String]>*/
}
varonce328 = var329;
{
((void(*)(val* self, val* p0, val* p1))(var_modelbuilder->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__error]))(var_modelbuilder, self, var362); /* error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label363;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i314,1l) on <var_i314:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var366 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var366)) {
var_class_name369 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name369);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var370 = var_i314 + 1l;
var364 = var370;
goto RET_LABEL365;
RET_LABEL365:(void)0;
}
}
var_i314 = var364;
{
((void(*)(val* self))(var_318->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_318); /* next on <var_318:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label363;
}
}
BREAK_label363: (void)0;
{
((void(*)(val* self))(var_318->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_318); /* finish on <var_318:ArrayIterator[MParameter]>*/
}
BREAK_label313: (void)0;
{
((void(*)(val* self))(var_273->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_273); /* next on <var_273:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label371;
}
}
BREAK_label371: (void)0;
{
((void(*)(val* self))(var_273->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_273); /* finish on <var_273:ArrayIterator[CallSite]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__auto_super_init__AMethPropdef__auto_super_inits_61d]))(self, var_auto_super_inits); /* auto_super_inits= on <self:AMethPropdef>*/
}
RET_LABEL:;
}
/* method auto_super_init#ANode#accept_auto_super_init for (self: ANode, AutoSuperInitVisitor) */
void nit__auto_super_init___ANode___accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method auto_super_init#ASendExpr#accept_auto_super_init for (self: ASendExpr, AutoSuperInitVisitor) */
void nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
val* var /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MMethod */;
short int var4 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__callsite]))(self); /* callsite on <self:ASendExpr>*/
}
var_callsite = var;
if (var_callsite == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, ((val*)NULL)); /* == on <var_callsite:nullable CallSite>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__auto_super_init__AutoSuperInitVisitor__is_broken_61d]))(var_v, 1); /* is_broken= on <var_v:AutoSuperInitVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_callsite->class->vft[COLOR_nit__typing__CallSite__mproperty]))(var_callsite); /* mproperty on <var_callsite:nullable CallSite(CallSite)>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_nit__model__MMethod__is_init]))(var3); /* is_init on <var3:MMethod>*/
}
if (var4){
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d]))(var_v, self); /* has_explicit_super_init= on <var_v:AutoSuperInitVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init#ASuperExpr#accept_auto_super_init for (self: ASuperExpr, AutoSuperInitVisitor) */
void nit__auto_super_init___ASuperExpr___ANode__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d]))(var_v, self); /* has_explicit_super_init= on <var_v:AutoSuperInitVisitor>*/
}
RET_LABEL:;
}
