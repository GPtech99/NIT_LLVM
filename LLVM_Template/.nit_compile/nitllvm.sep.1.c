#include "nitllvm.sep.0.h"
/* method nitllvm#ToolContext#llvm_phase for (self: ToolContext): Phase */
val* nitllvm___nit__ToolContext___llvm_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitllvm__ToolContext___llvm_phase].val; /* _llvm_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _llvm_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 15);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitllvm#ToolContext#llvm_phase= for (self: ToolContext, Phase) */
void nitllvm___nit__ToolContext___llvm_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nitllvm__ToolContext___llvm_phase].val = p0; /* _llvm_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method nitllvm#LLVMPhase#process_mainmodule for (self: LLVMPhase, MModule, SequenceRead[MModule]) */
void nitllvm___nitllvm__LLVMPhase___nit__modelbuilder__Phase__process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_mmodules /* var mmodules: SequenceRead[MModule] */;
val* var /* : FileWriter */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : Sys */;
val* var7 /* : Sequence[String] */;
val* var8 /* : nullable Object */;
val* var9 /* : String */;
val* var_fw /* var fw: FileWriter */;
val* var10 /* : FileWriter */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : Sys */;
val* var18 /* : Sequence[String] */;
val* var19 /* : nullable Object */;
val* var20 /* : String */;
val* var_ll /* var ll: FileWriter */;
val* var21 /* : HashMap[String, String] */;
val* var_llvm_classes_vtables /* var llvm_classes_vtables: HashMap[String, String] */;
val* var22 /* : HashMap[String, String] */;
val* var_llvm_functions /* var llvm_functions: HashMap[String, String] */;
val* var23 /* : HashMap[String, String] */;
val* var_llvm_attributes /* var llvm_attributes: HashMap[String, String] */;
val* var24 /* : Sys */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : Sys */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : POSet[MClass] */;
val* var_full_mclass_hierarchy /* var full_mclass_hierarchy: POSet[MClass] */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var_ /* var : POSet[MClass] */;
val* var43 /* : Iterator[nullable Object] */;
val* var_44 /* var : Iterator[MClass] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var47 /* : String */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
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
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
val* var82 /* : Sys */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
val* var87 /* : Sys */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : FlatString */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
val* var105 /* : FlatString */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : FlatString */;
val* var110 /* : String */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : FlatString */;
val* var120 /* : MVisibility */;
val* var121 /* : Set[MProperty] */;
val* var_my_mproperties /* var my_mproperties: Set[MProperty] */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
val* var_126 /* var : Set[MProperty] */;
val* var127 /* : Iterator[nullable Object] */;
val* var_128 /* var : Iterator[MProperty] */;
short int var129 /* : Bool */;
val* var130 /* : nullable Object */;
val* var_my_mproperty /* var my_mproperty: MProperty */;
short int var131 /* : Bool */;
int cltype;
int idtype;
val* var132 /* : Sys */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
val* var137 /* : Sys */;
val* var139 /* : NativeArray[String] */;
static val* varonce138;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : FlatString */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : FlatString */;
val* var148 /* : String */;
val* var149 /* : String */;
val* var150 /* : Sys */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : FlatString */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
val* var160 /* : FlatString */;
val* var161 /* : String */;
val* var162 /* : String */;
val* var164 /* : NativeArray[String] */;
static val* varonce163;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : FlatString */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
val* var172 /* : FlatString */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var175 /* : MClassType */;
val* var176 /* : Array[MPropDef] */;
val* var_my_MPROPALLDEF /* var my_MPROPALLDEF: Array[MMethodDef] */;
long var_j /* var j: Int */;
val* var_177 /* var : Array[MMethodDef] */;
val* var178 /* : Iterator[nullable Object] */;
val* var_179 /* var : ArrayIterator[MMethodDef] */;
short int var180 /* : Bool */;
val* var181 /* : nullable Object */;
val* var_x /* var x: MMethodDef */;
val* var183 /* : NativeArray[String] */;
static val* varonce182;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : FlatString */;
val* var188 /* : MClassDef */;
val* var189 /* : String */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var_index /* var index: String */;
val* var192 /* : Sys */;
val* var194 /* : NativeArray[String] */;
static val* varonce193;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
val* var198 /* : FlatString */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : FlatString */;
val* var203 /* : String */;
val* var205 /* : NativeArray[String] */;
static val* varonce204;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
val* var209 /* : FlatString */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
val* var213 /* : FlatString */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
val* var217 /* : FlatString */;
val* var218 /* : String */;
val* var219 /* : MClassDef */;
val* var220 /* : String */;
val* var221 /* : String */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
val* var225 /* : FlatString */;
val* var226 /* : Sys */;
val* var228 /* : NativeArray[String] */;
static val* varonce227;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
val* var232 /* : FlatString */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
val* var236 /* : FlatString */;
val* var237 /* : nullable MSignature */;
val* var238 /* : String */;
val* var239 /* : String */;
val* var240 /* : nullable MSignature */;
val* var241 /* : nullable MType */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
val* var244 /* : Sys */;
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
val* var255 /* : nullable MSignature */;
val* var256 /* : nullable MType */;
val* var257 /* : String */;
val* var258 /* : String */;
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
val* var269 /* : nullable Object */;
val* var270 /* : nullable MSignature */;
val* var271 /* : nullable MType */;
val* var272 /* : String */;
val* var273 /* : String */;
val* var274 /* : String */;
val* var276 /* : NativeArray[String] */;
static val* varonce275;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
val* var280 /* : FlatString */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : FlatString */;
val* var285 /* : String */;
val* var286 /* : nullable Object */;
val* var287 /* : nullable MSignature */;
val* var288 /* : nullable MType */;
val* var289 /* : String */;
val* var290 /* : String */;
val* var292 /* : NativeArray[String] */;
static val* varonce291;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
val* var296 /* : FlatString */;
val* var297 /* : nullable Object */;
val* var298 /* : String */;
val* var299 /* : String */;
val* var301 /* : NativeArray[String] */;
static val* varonce300;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
val* var305 /* : FlatString */;
val* var306 /* : String */;
val* var307 /* : nullable Object */;
val* var308 /* : String */;
val* var309 /* : String */;
val* var311 /* : NativeArray[String] */;
static val* varonce310;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
val* var315 /* : FlatString */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
val* var319 /* : FlatString */;
val* var320 /* : String */;
val* var321 /* : nullable Object */;
val* var322 /* : MClassDef */;
val* var323 /* : String */;
val* var324 /* : String */;
val* var326 /* : NativeArray[String] */;
static val* varonce325;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : NativeString */;
val* var330 /* : FlatString */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
val* var334 /* : FlatString */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
val* var338 /* : FlatString */;
val* var339 /* : nullable Object */;
val* var340 /* : String */;
val* var341 /* : String */;
val* var342 /* : nullable MSignature */;
val* var343 /* : Array[MParameter] */;
val* var_funct_params /* var funct_params: Array[MParameter] */;
long var_i /* var i: Int */;
val* var_344 /* var : Array[MParameter] */;
val* var345 /* : Iterator[nullable Object] */;
val* var_346 /* var : ArrayIterator[MParameter] */;
short int var347 /* : Bool */;
val* var348 /* : nullable Object */;
val* var_y /* var y: MParameter */;
val* var349 /* : Sys */;
val* var351 /* : NativeArray[String] */;
static val* varonce350;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
val* var355 /* : FlatString */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
val* var359 /* : FlatString */;
val* var360 /* : MType */;
val* var361 /* : String */;
val* var362 /* : String */;
val* var363 /* : Sys */;
val* var365 /* : NativeArray[String] */;
static val* varonce364;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
val* var369 /* : FlatString */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
val* var373 /* : FlatString */;
val* var374 /* : String */;
val* var375 /* : String */;
val* var377 /* : NativeArray[String] */;
static val* varonce376;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
val* var381 /* : FlatString */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
val* var385 /* : FlatString */;
val* var386 /* : nullable Object */;
val* var387 /* : MType */;
val* var388 /* : String */;
val* var389 /* : String */;
val* var390 /* : String */;
long var391 /* : Int */;
short int var392 /* : Bool */;
short int var394 /* : Bool */;
int cltype395;
int idtype396;
const char* var_class_name;
short int var397 /* : Bool */;
val* var398 /* : String */;
val* var400 /* : NativeArray[String] */;
static val* varonce399;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
val* var404 /* : FlatString */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
val* var408 /* : FlatString */;
val* var409 /* : String */;
val* var410 /* : nullable Object */;
val* var411 /* : MType */;
val* var412 /* : String */;
val* var413 /* : String */;
val* var414 /* : String */;
val* var416 /* : NativeArray[String] */;
static val* varonce415;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
val* var420 /* : FlatString */;
val* var421 /* : String */;
val* var422 /* : nullable Object */;
val* var423 /* : MType */;
val* var424 /* : String */;
val* var425 /* : String */;
long var426 /* : Int */;
short int var428 /* : Bool */;
int cltype429;
int idtype430;
const char* var_class_name431;
long var432 /* : Int */;
val* var434 /* : NativeArray[String] */;
static val* varonce433;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
val* var438 /* : FlatString */;
val* var439 /* : nullable Object */;
val* var440 /* : String */;
long var441 /* : Int */;
short int var442 /* : Bool */;
short int var444 /* : Bool */;
int cltype445;
int idtype446;
const char* var_class_name447;
short int var448 /* : Bool */;
val* var449 /* : String */;
val* var451 /* : NativeArray[String] */;
static val* varonce450;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
val* var455 /* : FlatString */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : NativeString */;
val* var459 /* : FlatString */;
val* var460 /* : String */;
val* var461 /* : nullable Object */;
val* var462 /* : String */;
val* var463 /* : String */;
val* var465 /* : NativeArray[String] */;
static val* varonce464;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : NativeString */;
val* var469 /* : FlatString */;
static val* varonce470;
val* var471 /* : String */;
char* var472 /* : NativeString */;
val* var473 /* : FlatString */;
val* var474 /* : String */;
val* var475 /* : nullable Object */;
val* var476 /* : String */;
long var477 /* : Int */;
short int var479 /* : Bool */;
int cltype480;
int idtype481;
const char* var_class_name482;
long var483 /* : Int */;
val* var486 /* : String */;
val* var488 /* : NativeArray[String] */;
static val* varonce487;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : NativeString */;
val* var492 /* : FlatString */;
val* var493 /* : String */;
val* var494 /* : nullable Object */;
val* var495 /* : String */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : NativeString */;
val* var499 /* : FlatString */;
val* var500 /* : String */;
val* var502 /* : NativeArray[String] */;
static val* varonce501;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : NativeString */;
val* var506 /* : FlatString */;
static val* varonce507;
val* var508 /* : String */;
char* var509 /* : NativeString */;
val* var510 /* : FlatString */;
val* var511 /* : String */;
val* var512 /* : nullable Object */;
val* var513 /* : String */;
val* var514 /* : String */;
val* var515 /* : nullable Object */;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : NativeString */;
val* var520 /* : FlatString */;
val* var521 /* : Collection[nullable Object] */;
val* var_522 /* var : RemovableCollection[String] */;
val* var523 /* : Iterator[nullable Object] */;
val* var_524 /* var : Iterator[String] */;
short int var525 /* : Bool */;
val* var526 /* : nullable Object */;
val* var_v /* var v: String */;
static val* varonce528;
val* var529 /* : String */;
char* var530 /* : NativeString */;
val* var531 /* : FlatString */;
val* var532 /* : Collection[nullable Object] */;
val* var_533 /* var : RemovableCollection[String] */;
val* var534 /* : Iterator[nullable Object] */;
val* var_535 /* var : Iterator[String] */;
short int var536 /* : Bool */;
val* var537 /* : nullable Object */;
val* var_v538 /* var v: String */;
static val* varonce540;
val* var541 /* : String */;
char* var542 /* : NativeString */;
val* var543 /* : FlatString */;
var_mainmodule = p0;
var_mmodules = p1;
var = NEW_standard__FileWriter(&type_standard__FileWriter);
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "_Vtables.txt";
var5 = standard___standard__NativeString___to_s_with_length(var4, 12l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
var6 = glob_sys;
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__Sys__args]))(var6); /* args on <var6:Sys>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, 0l); /* [] on <var7:Sequence[String]>*/
}
((struct instance_standard__NativeArray*)var1)->values[0]=var8;
{
var9 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__file__FileWriter__open]))(var, var9); /* open on <var:FileWriter>*/
}
var_fw = var;
var10 = NEW_standard__FileWriter(&type_standard__FileWriter);
if (unlikely(varonce11==NULL)) {
var12 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ".ll";
var16 = standard___standard__NativeString___to_s_with_length(var15, 3l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[1]=var14;
} else {
var12 = varonce11;
varonce11 = NULL;
}
var17 = glob_sys;
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__Sys__args]))(var17); /* args on <var17:Sys>*/
}
{
var19 = ((val*(*)(val* self, long p0))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var18, 0l); /* [] on <var18:Sequence[String]>*/
}
((struct instance_standard__NativeArray*)var12)->values[0]=var19;
{
var20 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__file__FileWriter__open]))(var10, var20); /* open on <var10:FileWriter>*/
}
var_ll = var10;
var21 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__standard__String);
{
((void(*)(val* self))(var21->class->vft[COLOR_standard__kernel__Object__init]))(var21); /* init on <var21:HashMap[String, String]>*/
}
var_llvm_classes_vtables = var21;
var22 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__standard__String);
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:HashMap[String, String]>*/
}
var_llvm_functions = var22;
var23 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__standard__String);
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:HashMap[String, String]>*/
}
var_llvm_attributes = var23;
var24 = glob_sys;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Process process_mainmodule";
var28 = standard___standard__NativeString___to_s_with_length(var27, 26l);
var26 = var28;
varonce25 = var26;
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__file__Sys__print]))(var24, var26); /* print on <var24:Sys>*/
}
var29 = glob_sys;
if (unlikely(varonce30==NULL)) {
var31 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "mainmodule ";
var35 = standard___standard__NativeString___to_s_with_length(var34, 11l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var31)->values[0]=var33;
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
var36 = ((val*(*)(val* self))(var_mainmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mainmodule); /* to_s on <var_mainmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var31)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var31->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__file__Sys__print]))(var29, var37); /* print on <var29:Sys>*/
}
{
var38 = ((val*(*)(val* self))(var_mainmodule->class->vft[COLOR_nit__model__MModule__flatten_mclass_hierarchy]))(var_mainmodule); /* flatten_mclass_hierarchy on <var_mainmodule:MModule>*/
}
var_full_mclass_hierarchy = var38;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "\n\n;Class Structures\n";
var42 = standard___standard__NativeString___to_s_with_length(var41, 20l);
var40 = var42;
varonce39 = var40;
}
{
((void(*)(val* self, val* p0))(var_ll->class->vft[COLOR_standard__stream__Writer__write]))(var_ll, var40); /* write on <var_ll:FileWriter>*/
}
var_ = var_full_mclass_hierarchy;
{
var43 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:POSet[MClass]>*/
}
var_44 = var43;
for(;;) {
{
var45 = ((short int(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_44); /* is_ok on <var_44:Iterator[MClass]>*/
}
if (var45){
{
var46 = ((val*(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_44); /* item on <var_44:Iterator[MClass]>*/
}
var_mclass = var46;
{
var47 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "%class_";
var53 = standard___standard__NativeString___to_s_with_length(var52, 7l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "_vtable = type {\n";
var57 = standard___standard__NativeString___to_s_with_length(var56, 17l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var49)->values[2]=var55;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
var58 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var49)->values[1]=var58;
{
var59 = ((val*(*)(val* self))(var49->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_classes_vtables, var47, var59); /* []= on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
{
var60 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "%class_";
var66 = standard___standard__NativeString___to_s_with_length(var65, 7l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var62)->values[0]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = " = type {%class_";
var70 = standard___standard__NativeString___to_s_with_length(var69, 16l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var62)->values[2]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "_vtable*";
var74 = standard___standard__NativeString___to_s_with_length(var73, 8l);
var72 = var74;
varonce71 = var72;
}
((struct instance_standard__NativeArray*)var62)->values[4]=var72;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var75 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var62)->values[1]=var75;
{
var76 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var62)->values[3]=var76;
{
var77 = ((val*(*)(val* self))(var62->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_attributes->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_attributes, var60, var77); /* []= on <var_llvm_attributes:HashMap[String, String]>*/
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "-----------------------------\n";
var81 = standard___standard__NativeString___to_s_with_length(var80, 30l);
var79 = var81;
varonce78 = var79;
}
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var79); /* write on <var_fw:FileWriter>*/
}
var82 = glob_sys;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "-----------------------------";
var86 = standard___standard__NativeString___to_s_with_length(var85, 29l);
var84 = var86;
varonce83 = var84;
}
{
((void(*)(val* self, val* p0))(var82->class->vft[COLOR_standard__file__Sys__print]))(var82, var84); /* print on <var82:Sys>*/
}
var87 = glob_sys;
if (unlikely(varonce88==NULL)) {
var89 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "mclass.name:>>";
var93 = standard___standard__NativeString___to_s_with_length(var92, 14l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var89)->values[0]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "<<";
var97 = standard___standard__NativeString___to_s_with_length(var96, 2l);
var95 = var97;
varonce94 = var95;
}
((struct instance_standard__NativeArray*)var89)->values[2]=var95;
} else {
var89 = varonce88;
varonce88 = NULL;
}
{
var98 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var89)->values[1]=var98;
{
var99 = ((val*(*)(val* self))(var89->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
((void(*)(val* self, val* p0))(var87->class->vft[COLOR_standard__file__Sys__print]))(var87, var99); /* print on <var87:Sys>*/
}
if (unlikely(varonce100==NULL)) {
var101 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "Class:";
var105 = standard___standard__NativeString___to_s_with_length(var104, 6l);
var103 = var105;
varonce102 = var103;
}
((struct instance_standard__NativeArray*)var101)->values[0]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "\n";
var109 = standard___standard__NativeString___to_s_with_length(var108, 1l);
var107 = var109;
varonce106 = var107;
}
((struct instance_standard__NativeArray*)var101)->values[2]=var107;
} else {
var101 = varonce100;
varonce100 = NULL;
}
{
var110 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var101)->values[1]=var110;
{
var111 = ((val*(*)(val* self))(var101->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var111); /* write on <var_fw:FileWriter>*/
}
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "\nVtable:\n";
var115 = standard___standard__NativeString___to_s_with_length(var114, 9l);
var113 = var115;
varonce112 = var113;
}
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var113); /* write on <var_fw:FileWriter>*/
}
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "**********************\n";
var119 = standard___standard__NativeString___to_s_with_length(var118, 23l);
var117 = var119;
varonce116 = var117;
}
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var117); /* write on <var_fw:FileWriter>*/
}
{
var120 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__visibility]))(var_mclass); /* visibility on <var_mclass:MClass>*/
}
{
var121 = ((val*(*)(val* self, val* p0, val* p1))(var_mclass->class->vft[COLOR_nit__model_utils__MClass__all_mproperties]))(var_mclass, var_mainmodule, var120); /* all_mproperties on <var_mclass:MClass>*/
}
var_my_mproperties = var121;
{
var122 = ((short int(*)(val* self))((((long)var_my_mproperties&3)?class_info[((long)var_my_mproperties&3)]:var_my_mproperties->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_my_mproperties); /* is_empty on <var_my_mproperties:Set[MProperty]>*/
}
{
{ /* Inline kernel#Bool#== (var122,0) on <var122:Bool> */
var125 = var122 == 0;
var123 = var125;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
if (var123){
var_126 = var_my_mproperties;
{
var127 = ((val*(*)(val* self))((((long)var_126&3)?class_info[((long)var_126&3)]:var_126->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_126); /* iterator on <var_126:Set[MProperty]>*/
}
var_128 = var127;
for(;;) {
{
var129 = ((short int(*)(val* self))((((long)var_128&3)?class_info[((long)var_128&3)]:var_128->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_128); /* is_ok on <var_128:Iterator[MProperty]>*/
}
if (var129){
{
var130 = ((val*(*)(val* self))((((long)var_128&3)?class_info[((long)var_128&3)]:var_128->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_128); /* item on <var_128:Iterator[MProperty]>*/
}
var_my_mproperty = var130;
/* <var_my_mproperty:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_my_mproperty->type->table_size) {
var131 = 0;
} else {
var131 = var_my_mproperty->type->type_table[cltype] == idtype;
}
if (var131){
var132 = glob_sys;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "Method found";
var136 = standard___standard__NativeString___to_s_with_length(var135, 12l);
var134 = var136;
varonce133 = var134;
}
{
((void(*)(val* self, val* p0))(var132->class->vft[COLOR_standard__file__Sys__print]))(var132, var134); /* print on <var132:Sys>*/
}
var137 = glob_sys;
if (unlikely(varonce138==NULL)) {
var139 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "my_mproperty.full_name:>>";
var143 = standard___standard__NativeString___to_s_with_length(var142, 25l);
var141 = var143;
varonce140 = var141;
}
((struct instance_standard__NativeArray*)var139)->values[0]=var141;
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "<<";
var147 = standard___standard__NativeString___to_s_with_length(var146, 2l);
var145 = var147;
varonce144 = var145;
}
((struct instance_standard__NativeArray*)var139)->values[2]=var145;
} else {
var139 = varonce138;
varonce138 = NULL;
}
{
var148 = ((val*(*)(val* self))(var_my_mproperty->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_my_mproperty); /* full_name on <var_my_mproperty:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var139)->values[1]=var148;
{
var149 = ((val*(*)(val* self))(var139->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var139); /* native_to_s on <var139:NativeArray[String]>*/
}
varonce138 = var139;
{
((void(*)(val* self, val* p0))(var137->class->vft[COLOR_standard__file__Sys__print]))(var137, var149); /* print on <var137:Sys>*/
}
var150 = glob_sys;
if (unlikely(varonce151==NULL)) {
var152 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "my_mproperty.name:>>";
var156 = standard___standard__NativeString___to_s_with_length(var155, 20l);
var154 = var156;
varonce153 = var154;
}
((struct instance_standard__NativeArray*)var152)->values[0]=var154;
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "<<\n";
var160 = standard___standard__NativeString___to_s_with_length(var159, 3l);
var158 = var160;
varonce157 = var158;
}
((struct instance_standard__NativeArray*)var152)->values[2]=var158;
} else {
var152 = varonce151;
varonce151 = NULL;
}
{
var161 = ((val*(*)(val* self))(var_my_mproperty->class->vft[COLOR_nit__model_base__MEntity__name]))(var_my_mproperty); /* name on <var_my_mproperty:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var152)->values[1]=var161;
{
var162 = ((val*(*)(val* self))(var152->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
{
((void(*)(val* self, val* p0))(var150->class->vft[COLOR_standard__file__Sys__print]))(var150, var162); /* print on <var150:Sys>*/
}
if (unlikely(varonce163==NULL)) {
var164 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "Function:";
var168 = standard___standard__NativeString___to_s_with_length(var167, 9l);
var166 = var168;
varonce165 = var166;
}
((struct instance_standard__NativeArray*)var164)->values[0]=var166;
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "\n";
var172 = standard___standard__NativeString___to_s_with_length(var171, 1l);
var170 = var172;
varonce169 = var170;
}
((struct instance_standard__NativeArray*)var164)->values[2]=var170;
} else {
var164 = varonce163;
varonce163 = NULL;
}
{
var173 = ((val*(*)(val* self))(var_my_mproperty->class->vft[COLOR_nit__model_base__MEntity__name]))(var_my_mproperty); /* name on <var_my_mproperty:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var164)->values[1]=var173;
{
var174 = ((val*(*)(val* self))(var164->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var164); /* native_to_s on <var164:NativeArray[String]>*/
}
varonce163 = var164;
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var174); /* write on <var_fw:FileWriter>*/
}
{
var175 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__mclass_type]))(var_mclass); /* mclass_type on <var_mclass:MClass>*/
}
{
var176 = ((val*(*)(val* self, val* p0, val* p1))(var_my_mproperty->class->vft[COLOR_nit__model__MProperty__lookup_all_definitions]))(var_my_mproperty, var_mainmodule, var175); /* lookup_all_definitions on <var_my_mproperty:MProperty(MMethod)>*/
}
var_my_MPROPALLDEF = var176;
var_j = 0l;
var_177 = var_my_MPROPALLDEF;
{
var178 = ((val*(*)(val* self))(var_177->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_177); /* iterator on <var_177:Array[MMethodDef]>*/
}
var_179 = var178;
for(;;) {
{
var180 = ((short int(*)(val* self))(var_179->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_179); /* is_ok on <var_179:ArrayIterator[MMethodDef]>*/
}
if (var180){
{
var181 = ((val*(*)(val* self))(var_179->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_179); /* item on <var_179:ArrayIterator[MMethodDef]>*/
}
var_x = var181;
if (unlikely(varonce182==NULL)) {
var183 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "_";
var187 = standard___standard__NativeString___to_s_with_length(var186, 1l);
var185 = var187;
varonce184 = var185;
}
((struct instance_standard__NativeArray*)var183)->values[1]=var185;
} else {
var183 = varonce182;
varonce182 = NULL;
}
{
var188 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_x); /* mclassdef on <var_x:MMethodDef>*/
}
{
var189 = ((val*(*)(val* self))(var188->class->vft[COLOR_nit__model_base__MEntity__name]))(var188); /* name on <var188:MClassDef>*/
}
((struct instance_standard__NativeArray*)var183)->values[0]=var189;
{
var190 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model_base__MEntity__name]))(var_x); /* name on <var_x:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var183)->values[2]=var190;
{
var191 = ((val*(*)(val* self))(var183->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var183); /* native_to_s on <var183:NativeArray[String]>*/
}
varonce182 = var183;
var_index = var191;
var192 = glob_sys;
if (unlikely(varonce193==NULL)) {
var194 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "index:>>";
var198 = standard___standard__NativeString___to_s_with_length(var197, 8l);
var196 = var198;
varonce195 = var196;
}
((struct instance_standard__NativeArray*)var194)->values[0]=var196;
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "<<\n";
var202 = standard___standard__NativeString___to_s_with_length(var201, 3l);
var200 = var202;
varonce199 = var200;
}
((struct instance_standard__NativeArray*)var194)->values[2]=var200;
} else {
var194 = varonce193;
varonce193 = NULL;
}
((struct instance_standard__NativeArray*)var194)->values[1]=var_index;
{
var203 = ((val*(*)(val* self))(var194->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var194); /* native_to_s on <var194:NativeArray[String]>*/
}
varonce193 = var194;
{
((void(*)(val* self, val* p0))(var192->class->vft[COLOR_standard__file__Sys__print]))(var192, var203); /* print on <var192:Sys>*/
}
if (unlikely(varonce204==NULL)) {
var205 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = "\n_";
var209 = standard___standard__NativeString___to_s_with_length(var208, 2l);
var207 = var209;
varonce206 = var207;
}
((struct instance_standard__NativeArray*)var205)->values[0]=var207;
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "_";
var213 = standard___standard__NativeString___to_s_with_length(var212, 1l);
var211 = var213;
varonce210 = var211;
}
((struct instance_standard__NativeArray*)var205)->values[2]=var211;
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "\n";
var217 = standard___standard__NativeString___to_s_with_length(var216, 1l);
var215 = var217;
varonce214 = var215;
}
((struct instance_standard__NativeArray*)var205)->values[4]=var215;
} else {
var205 = varonce204;
varonce204 = NULL;
}
{
var218 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model_base__MEntity__name]))(var_x); /* name on <var_x:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var205)->values[1]=var218;
{
var219 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_x); /* mclassdef on <var_x:MMethodDef>*/
}
{
var220 = ((val*(*)(val* self))(var219->class->vft[COLOR_nit__model_base__MEntity__name]))(var219); /* name on <var219:MClassDef>*/
}
((struct instance_standard__NativeArray*)var205)->values[3]=var220;
{
var221 = ((val*(*)(val* self))(var205->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var205); /* native_to_s on <var205:NativeArray[String]>*/
}
varonce204 = var205;
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var221); /* write on <var_fw:FileWriter>*/
}
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = "define ";
var225 = standard___standard__NativeString___to_s_with_length(var224, 7l);
var223 = var225;
varonce222 = var223;
}
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_functions, var_index, var223); /* []= on <var_llvm_functions:HashMap[String, String]>*/
}
var226 = glob_sys;
if (unlikely(varonce227==NULL)) {
var228 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "Signature:>>";
var232 = standard___standard__NativeString___to_s_with_length(var231, 12l);
var230 = var232;
varonce229 = var230;
}
((struct instance_standard__NativeArray*)var228)->values[0]=var230;
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "<<\n";
var236 = standard___standard__NativeString___to_s_with_length(var235, 3l);
var234 = var236;
varonce233 = var234;
}
((struct instance_standard__NativeArray*)var228)->values[2]=var234;
} else {
var228 = varonce227;
varonce227 = NULL;
}
{
var237 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_x); /* msignature on <var_x:MMethodDef>*/
}
if (var237 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 85);
fatal_exit(1);
} else {
var238 = ((val*(*)(val* self))(var237->class->vft[COLOR_nit__model_base__MEntity__name]))(var237); /* name on <var237:nullable MSignature>*/
}
((struct instance_standard__NativeArray*)var228)->values[1]=var238;
{
var239 = ((val*(*)(val* self))(var228->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var228); /* native_to_s on <var228:NativeArray[String]>*/
}
varonce227 = var228;
{
((void(*)(val* self, val* p0))(var226->class->vft[COLOR_standard__file__Sys__print]))(var226, var239); /* print on <var226:Sys>*/
}
{
var240 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_x); /* msignature on <var_x:MMethodDef>*/
}
if (var240 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 86);
fatal_exit(1);
} else {
var241 = ((val*(*)(val* self))(var240->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var240); /* return_mtype on <var240:nullable MSignature>*/
}
if (var241 == NULL) {
var242 = 0; /* is null */
} else {
var242 = 1; /* arg is null and recv is not */
}
if (0) {
var243 = ((short int(*)(val* self, val* p0))(var241->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var241, ((val*)NULL)); /* != on <var241:nullable MType>*/
var242 = var243;
}
if (var242){
var244 = glob_sys;
if (unlikely(varonce245==NULL)) {
var246 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "Signature mtype:>>";
var250 = standard___standard__NativeString___to_s_with_length(var249, 18l);
var248 = var250;
varonce247 = var248;
}
((struct instance_standard__NativeArray*)var246)->values[0]=var248;
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "<<\n";
var254 = standard___standard__NativeString___to_s_with_length(var253, 3l);
var252 = var254;
varonce251 = var252;
}
((struct instance_standard__NativeArray*)var246)->values[2]=var252;
} else {
var246 = varonce245;
varonce245 = NULL;
}
{
var255 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_x); /* msignature on <var_x:MMethodDef>*/
}
if (var255 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 87);
fatal_exit(1);
} else {
var256 = ((val*(*)(val* self))(var255->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var255); /* return_mtype on <var255:nullable MSignature>*/
}
if (var256 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 87);
fatal_exit(1);
} else {
var257 = ((val*(*)(val* self))(var256->class->vft[COLOR_nit__model_base__MEntity__name]))(var256); /* name on <var256:nullable MType>*/
}
((struct instance_standard__NativeArray*)var246)->values[1]=var257;
{
var258 = ((val*(*)(val* self))(var246->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var246); /* native_to_s on <var246:NativeArray[String]>*/
}
varonce245 = var246;
{
((void(*)(val* self, val* p0))(var244->class->vft[COLOR_standard__file__Sys__print]))(var244, var258); /* print on <var244:Sys>*/
}
if (unlikely(varonce259==NULL)) {
var260 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "%";
var264 = standard___standard__NativeString___to_s_with_length(var263, 1l);
var262 = var264;
varonce261 = var262;
}
((struct instance_standard__NativeArray*)var260)->values[1]=var262;
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = " ";
var268 = standard___standard__NativeString___to_s_with_length(var267, 1l);
var266 = var268;
varonce265 = var266;
}
((struct instance_standard__NativeArray*)var260)->values[3]=var266;
} else {
var260 = varonce259;
varonce259 = NULL;
}
{
var269 = ((val*(*)(val* self, val* p0))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_functions, var_index); /* [] on <var_llvm_functions:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var260)->values[0]=var269;
{
var270 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_x); /* msignature on <var_x:MMethodDef>*/
}
if (var270 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 89);
fatal_exit(1);
} else {
var271 = ((val*(*)(val* self))(var270->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var270); /* return_mtype on <var270:nullable MSignature>*/
}
if (var271 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 89);
fatal_exit(1);
} else {
var272 = ((val*(*)(val* self))(var271->class->vft[COLOR_nit__model_base__MEntity__name]))(var271); /* name on <var271:nullable MType>*/
}
((struct instance_standard__NativeArray*)var260)->values[2]=var272;
{
var273 = ((val*(*)(val* self))(var260->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var260); /* native_to_s on <var260:NativeArray[String]>*/
}
varonce259 = var260;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_functions, var_index, var273); /* []= on <var_llvm_functions:HashMap[String, String]>*/
}
{
var274 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce275==NULL)) {
var276 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "%";
var280 = standard___standard__NativeString___to_s_with_length(var279, 1l);
var278 = var280;
varonce277 = var278;
}
((struct instance_standard__NativeArray*)var276)->values[1]=var278;
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "(";
var284 = standard___standard__NativeString___to_s_with_length(var283, 1l);
var282 = var284;
varonce281 = var282;
}
((struct instance_standard__NativeArray*)var276)->values[3]=var282;
} else {
var276 = varonce275;
varonce275 = NULL;
}
{
var285 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var286 = ((val*(*)(val* self, val* p0))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_classes_vtables, var285); /* [] on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var276)->values[0]=var286;
{
var287 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_x); /* msignature on <var_x:MMethodDef>*/
}
if (var287 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 90);
fatal_exit(1);
} else {
var288 = ((val*(*)(val* self))(var287->class->vft[COLOR_nit__model__MSignature__return_mtype]))(var287); /* return_mtype on <var287:nullable MSignature>*/
}
if (var288 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 90);
fatal_exit(1);
} else {
var289 = ((val*(*)(val* self))(var288->class->vft[COLOR_nit__model_base__MEntity__name]))(var288); /* name on <var288:nullable MType>*/
}
((struct instance_standard__NativeArray*)var276)->values[2]=var289;
{
var290 = ((val*(*)(val* self))(var276->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var276); /* native_to_s on <var276:NativeArray[String]>*/
}
varonce275 = var276;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_classes_vtables, var274, var290); /* []= on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
} else {
if (unlikely(varonce291==NULL)) {
var292 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "void ";
var296 = standard___standard__NativeString___to_s_with_length(var295, 5l);
var294 = var296;
varonce293 = var294;
}
((struct instance_standard__NativeArray*)var292)->values[1]=var294;
} else {
var292 = varonce291;
varonce291 = NULL;
}
{
var297 = ((val*(*)(val* self, val* p0))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_functions, var_index); /* [] on <var_llvm_functions:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var292)->values[0]=var297;
{
var298 = ((val*(*)(val* self))(var292->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var292); /* native_to_s on <var292:NativeArray[String]>*/
}
varonce291 = var292;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_functions, var_index, var298); /* []= on <var_llvm_functions:HashMap[String, String]>*/
}
{
var299 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce300==NULL)) {
var301 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "void(";
var305 = standard___standard__NativeString___to_s_with_length(var304, 5l);
var303 = var305;
varonce302 = var303;
}
((struct instance_standard__NativeArray*)var301)->values[1]=var303;
} else {
var301 = varonce300;
varonce300 = NULL;
}
{
var306 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var307 = ((val*(*)(val* self, val* p0))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_classes_vtables, var306); /* [] on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var301)->values[0]=var307;
{
var308 = ((val*(*)(val* self))(var301->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var301); /* native_to_s on <var301:NativeArray[String]>*/
}
varonce300 = var301;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_classes_vtables, var299, var308); /* []= on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
}
{
var309 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce310==NULL)) {
var311 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "%class_";
var315 = standard___standard__NativeString___to_s_with_length(var314, 7l);
var313 = var315;
varonce312 = var313;
}
((struct instance_standard__NativeArray*)var311)->values[1]=var313;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "*,";
var319 = standard___standard__NativeString___to_s_with_length(var318, 2l);
var317 = var319;
varonce316 = var317;
}
((struct instance_standard__NativeArray*)var311)->values[3]=var317;
} else {
var311 = varonce310;
varonce310 = NULL;
}
{
var320 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var321 = ((val*(*)(val* self, val* p0))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_classes_vtables, var320); /* [] on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var311)->values[0]=var321;
{
var322 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_x); /* mclassdef on <var_x:MMethodDef>*/
}
{
var323 = ((val*(*)(val* self))(var322->class->vft[COLOR_nit__model_base__MEntity__name]))(var322); /* name on <var322:MClassDef>*/
}
((struct instance_standard__NativeArray*)var311)->values[2]=var323;
{
var324 = ((val*(*)(val* self))(var311->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var311); /* native_to_s on <var311:NativeArray[String]>*/
}
varonce310 = var311;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_classes_vtables, var309, var324); /* []= on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
if (unlikely(varonce325==NULL)) {
var326 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = "@";
var330 = standard___standard__NativeString___to_s_with_length(var329, 1l);
var328 = var330;
varonce327 = var328;
}
((struct instance_standard__NativeArray*)var326)->values[1]=var328;
if (likely(varonce331!=NULL)) {
var332 = varonce331;
} else {
var333 = "(%class_";
var334 = standard___standard__NativeString___to_s_with_length(var333, 8l);
var332 = var334;
varonce331 = var332;
}
((struct instance_standard__NativeArray*)var326)->values[3]=var332;
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "* %this";
var338 = standard___standard__NativeString___to_s_with_length(var337, 7l);
var336 = var338;
varonce335 = var336;
}
((struct instance_standard__NativeArray*)var326)->values[5]=var336;
} else {
var326 = varonce325;
varonce325 = NULL;
}
{
var339 = ((val*(*)(val* self, val* p0))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_functions, var_index); /* [] on <var_llvm_functions:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var326)->values[0]=var339;
((struct instance_standard__NativeArray*)var326)->values[2]=var_index;
{
var340 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var326)->values[4]=var340;
{
var341 = ((val*(*)(val* self))(var326->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var326); /* native_to_s on <var326:NativeArray[String]>*/
}
varonce325 = var326;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_functions, var_index, var341); /* []= on <var_llvm_functions:HashMap[String, String]>*/
}
{
var342 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nit__model__MMethodDef__msignature]))(var_x); /* msignature on <var_x:MMethodDef>*/
}
if (var342 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitllvm, 99);
fatal_exit(1);
} else {
var343 = ((val*(*)(val* self))(var342->class->vft[COLOR_nit__model__MSignature__mparameters]))(var342); /* mparameters on <var342:nullable MSignature>*/
}
var_funct_params = var343;
var_i = 0l;
var_344 = var_funct_params;
{
var345 = ((val*(*)(val* self))(var_344->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_344); /* iterator on <var_344:Array[MParameter]>*/
}
var_346 = var345;
for(;;) {
{
var347 = ((short int(*)(val* self))(var_346->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_346); /* is_ok on <var_346:ArrayIterator[MParameter]>*/
}
if (var347){
{
var348 = ((val*(*)(val* self))(var_346->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_346); /* item on <var_346:ArrayIterator[MParameter]>*/
}
var_y = var348;
var349 = glob_sys;
if (unlikely(varonce350==NULL)) {
var351 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = "Signature param mtype:>>";
var355 = standard___standard__NativeString___to_s_with_length(var354, 24l);
var353 = var355;
varonce352 = var353;
}
((struct instance_standard__NativeArray*)var351)->values[0]=var353;
if (likely(varonce356!=NULL)) {
var357 = varonce356;
} else {
var358 = "<<\n";
var359 = standard___standard__NativeString___to_s_with_length(var358, 3l);
var357 = var359;
varonce356 = var357;
}
((struct instance_standard__NativeArray*)var351)->values[2]=var357;
} else {
var351 = varonce350;
varonce350 = NULL;
}
{
var360 = ((val*(*)(val* self))(var_y->class->vft[COLOR_nit__model__MParameter__mtype]))(var_y); /* mtype on <var_y:MParameter>*/
}
{
var361 = ((val*(*)(val* self))(var360->class->vft[COLOR_nit__model_base__MEntity__name]))(var360); /* name on <var360:MType>*/
}
((struct instance_standard__NativeArray*)var351)->values[1]=var361;
{
var362 = ((val*(*)(val* self))(var351->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var351); /* native_to_s on <var351:NativeArray[String]>*/
}
varonce350 = var351;
{
((void(*)(val* self, val* p0))(var349->class->vft[COLOR_standard__file__Sys__print]))(var349, var362); /* print on <var349:Sys>*/
}
var363 = glob_sys;
if (unlikely(varonce364==NULL)) {
var365 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "Signature param name:>>";
var369 = standard___standard__NativeString___to_s_with_length(var368, 23l);
var367 = var369;
varonce366 = var367;
}
((struct instance_standard__NativeArray*)var365)->values[0]=var367;
if (likely(varonce370!=NULL)) {
var371 = varonce370;
} else {
var372 = "<<\n";
var373 = standard___standard__NativeString___to_s_with_length(var372, 3l);
var371 = var373;
varonce370 = var371;
}
((struct instance_standard__NativeArray*)var365)->values[2]=var371;
} else {
var365 = varonce364;
varonce364 = NULL;
}
{
var374 = ((val*(*)(val* self))(var_y->class->vft[COLOR_nit__model_base__MEntity__name]))(var_y); /* name on <var_y:MParameter>*/
}
((struct instance_standard__NativeArray*)var365)->values[1]=var374;
{
var375 = ((val*(*)(val* self))(var365->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var365); /* native_to_s on <var365:NativeArray[String]>*/
}
varonce364 = var365;
{
((void(*)(val* self, val* p0))(var363->class->vft[COLOR_standard__file__Sys__print]))(var363, var375); /* print on <var363:Sys>*/
}
if (unlikely(varonce376==NULL)) {
var377 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce378!=NULL)) {
var379 = varonce378;
} else {
var380 = ",%class_";
var381 = standard___standard__NativeString___to_s_with_length(var380, 8l);
var379 = var381;
varonce378 = var379;
}
((struct instance_standard__NativeArray*)var377)->values[1]=var379;
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = " ";
var385 = standard___standard__NativeString___to_s_with_length(var384, 1l);
var383 = var385;
varonce382 = var383;
}
((struct instance_standard__NativeArray*)var377)->values[3]=var383;
} else {
var377 = varonce376;
varonce376 = NULL;
}
{
var386 = ((val*(*)(val* self, val* p0))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_functions, var_index); /* [] on <var_llvm_functions:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var377)->values[0]=var386;
{
var387 = ((val*(*)(val* self))(var_y->class->vft[COLOR_nit__model__MParameter__mtype]))(var_y); /* mtype on <var_y:MParameter>*/
}
{
var388 = ((val*(*)(val* self))(var387->class->vft[COLOR_nit__model_base__MEntity__name]))(var387); /* name on <var387:MType>*/
}
((struct instance_standard__NativeArray*)var377)->values[2]=var388;
{
var389 = ((val*(*)(val* self))(var_y->class->vft[COLOR_nit__model_base__MEntity__name]))(var_y); /* name on <var_y:MParameter>*/
}
((struct instance_standard__NativeArray*)var377)->values[4]=var389;
{
var390 = ((val*(*)(val* self))(var377->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var377); /* native_to_s on <var377:NativeArray[String]>*/
}
varonce376 = var377;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_functions, var_index, var390); /* []= on <var_llvm_functions:HashMap[String, String]>*/
}
{
var391 = ((long(*)(val* self))(var_funct_params->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_funct_params); /* length on <var_funct_params:Array[MParameter]>*/
}
{
{ /* Inline kernel#Int#< (var_i,var391) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var391:Int> isa OTHER */
/* <var391:Int> isa OTHER */
var394 = 1; /* easy <var391:Int> isa OTHER*/
if (unlikely(!var394)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var397 = var_i < var391;
var392 = var397;
goto RET_LABEL393;
RET_LABEL393:(void)0;
}
}
if (var392){
{
var398 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce399==NULL)) {
var400 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = "%class_";
var404 = standard___standard__NativeString___to_s_with_length(var403, 7l);
var402 = var404;
varonce401 = var402;
}
((struct instance_standard__NativeArray*)var400)->values[1]=var402;
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = ",";
var408 = standard___standard__NativeString___to_s_with_length(var407, 1l);
var406 = var408;
varonce405 = var406;
}
((struct instance_standard__NativeArray*)var400)->values[3]=var406;
} else {
var400 = varonce399;
varonce399 = NULL;
}
{
var409 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var410 = ((val*(*)(val* self, val* p0))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_classes_vtables, var409); /* [] on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var400)->values[0]=var410;
{
var411 = ((val*(*)(val* self))(var_y->class->vft[COLOR_nit__model__MParameter__mtype]))(var_y); /* mtype on <var_y:MParameter>*/
}
{
var412 = ((val*(*)(val* self))(var411->class->vft[COLOR_nit__model_base__MEntity__name]))(var411); /* name on <var411:MType>*/
}
((struct instance_standard__NativeArray*)var400)->values[2]=var412;
{
var413 = ((val*(*)(val* self))(var400->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var400); /* native_to_s on <var400:NativeArray[String]>*/
}
varonce399 = var400;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_classes_vtables, var398, var413); /* []= on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
} else {
{
var414 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce415==NULL)) {
var416 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "%class_";
var420 = standard___standard__NativeString___to_s_with_length(var419, 7l);
var418 = var420;
varonce417 = var418;
}
((struct instance_standard__NativeArray*)var416)->values[1]=var418;
} else {
var416 = varonce415;
varonce415 = NULL;
}
{
var421 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var422 = ((val*(*)(val* self, val* p0))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_classes_vtables, var421); /* [] on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var416)->values[0]=var422;
{
var423 = ((val*(*)(val* self))(var_y->class->vft[COLOR_nit__model__MParameter__mtype]))(var_y); /* mtype on <var_y:MParameter>*/
}
{
var424 = ((val*(*)(val* self))(var423->class->vft[COLOR_nit__model_base__MEntity__name]))(var423); /* name on <var423:MType>*/
}
((struct instance_standard__NativeArray*)var416)->values[2]=var424;
{
var425 = ((val*(*)(val* self))(var416->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var416); /* native_to_s on <var416:NativeArray[String]>*/
}
varonce415 = var416;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_classes_vtables, var414, var425); /* []= on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var428 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var428)) {
var_class_name431 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name431);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var432 = var_i + 1l;
var426 = var432;
goto RET_LABEL427;
RET_LABEL427:(void)0;
}
}
var_i = var426;
{
((void(*)(val* self))(var_346->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_346); /* next on <var_346:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_346->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_346); /* finish on <var_346:ArrayIterator[MParameter]>*/
}
if (unlikely(varonce433==NULL)) {
var434 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce435!=NULL)) {
var436 = varonce435;
} else {
var437 = ") nounwind {\n;Corp de la methode\n}\n";
var438 = standard___standard__NativeString___to_s_with_length(var437, 35l);
var436 = var438;
varonce435 = var436;
}
((struct instance_standard__NativeArray*)var434)->values[1]=var436;
} else {
var434 = varonce433;
varonce433 = NULL;
}
{
var439 = ((val*(*)(val* self, val* p0))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_functions, var_index); /* [] on <var_llvm_functions:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var434)->values[0]=var439;
{
var440 = ((val*(*)(val* self))(var434->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var434); /* native_to_s on <var434:NativeArray[String]>*/
}
varonce433 = var434;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_functions, var_index, var440); /* []= on <var_llvm_functions:HashMap[String, String]>*/
}
{
var441 = ((long(*)(val* self))(var_my_MPROPALLDEF->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_my_MPROPALLDEF); /* length on <var_my_MPROPALLDEF:Array[MMethodDef]>*/
}
{
{ /* Inline kernel#Int#< (var_j,var441) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var441:Int> isa OTHER */
/* <var441:Int> isa OTHER */
var444 = 1; /* easy <var441:Int> isa OTHER*/
if (unlikely(!var444)) {
var_class_name447 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name447);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var448 = var_j < var441;
var442 = var448;
goto RET_LABEL443;
RET_LABEL443:(void)0;
}
}
if (var442){
{
var449 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce450==NULL)) {
var451 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce452!=NULL)) {
var453 = varonce452;
} else {
var454 = ")* @";
var455 = standard___standard__NativeString___to_s_with_length(var454, 4l);
var453 = var455;
varonce452 = var453;
}
((struct instance_standard__NativeArray*)var451)->values[1]=var453;
if (likely(varonce456!=NULL)) {
var457 = varonce456;
} else {
var458 = ",\n";
var459 = standard___standard__NativeString___to_s_with_length(var458, 2l);
var457 = var459;
varonce456 = var457;
}
((struct instance_standard__NativeArray*)var451)->values[3]=var457;
} else {
var451 = varonce450;
varonce450 = NULL;
}
{
var460 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var461 = ((val*(*)(val* self, val* p0))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_classes_vtables, var460); /* [] on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var451)->values[0]=var461;
((struct instance_standard__NativeArray*)var451)->values[2]=var_index;
{
var462 = ((val*(*)(val* self))(var451->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var451); /* native_to_s on <var451:NativeArray[String]>*/
}
varonce450 = var451;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_classes_vtables, var449, var462); /* []= on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
} else {
{
var463 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce464==NULL)) {
var465 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce466!=NULL)) {
var467 = varonce466;
} else {
var468 = ")* @";
var469 = standard___standard__NativeString___to_s_with_length(var468, 4l);
var467 = var469;
varonce466 = var467;
}
((struct instance_standard__NativeArray*)var465)->values[1]=var467;
if (likely(varonce470!=NULL)) {
var471 = varonce470;
} else {
var472 = "\n";
var473 = standard___standard__NativeString___to_s_with_length(var472, 1l);
var471 = var473;
varonce470 = var471;
}
((struct instance_standard__NativeArray*)var465)->values[3]=var471;
} else {
var465 = varonce464;
varonce464 = NULL;
}
{
var474 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var475 = ((val*(*)(val* self, val* p0))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_classes_vtables, var474); /* [] on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var465)->values[0]=var475;
((struct instance_standard__NativeArray*)var465)->values[2]=var_index;
{
var476 = ((val*(*)(val* self))(var465->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var465); /* native_to_s on <var465:NativeArray[String]>*/
}
varonce464 = var465;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_classes_vtables, var463, var476); /* []= on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var479 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var479)) {
var_class_name482 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name482);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var483 = var_j + 1l;
var477 = var483;
goto RET_LABEL478;
RET_LABEL478:(void)0;
}
}
var_j = var477;
{
((void(*)(val* self))(var_179->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_179); /* next on <var_179:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label484;
}
}
BREAK_label484: (void)0;
{
((void(*)(val* self))(var_179->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_179); /* finish on <var_179:ArrayIterator[MMethodDef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_128&3)?class_info[((long)var_128&3)]:var_128->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_128); /* next on <var_128:Iterator[MProperty]>*/
}
} else {
goto BREAK_label485;
}
}
BREAK_label485: (void)0;
{
((void(*)(val* self))((((long)var_128&3)?class_info[((long)var_128&3)]:var_128->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_128); /* finish on <var_128:Iterator[MProperty]>*/
}
{
var486 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce487==NULL)) {
var488 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce489!=NULL)) {
var490 = varonce489;
} else {
var491 = "\n}\n\n";
var492 = standard___standard__NativeString___to_s_with_length(var491, 4l);
var490 = var492;
varonce489 = var490;
}
((struct instance_standard__NativeArray*)var488)->values[1]=var490;
} else {
var488 = varonce487;
varonce487 = NULL;
}
{
var493 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var494 = ((val*(*)(val* self, val* p0))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_classes_vtables, var493); /* [] on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var488)->values[0]=var494;
{
var495 = ((val*(*)(val* self))(var488->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var488); /* native_to_s on <var488:NativeArray[String]>*/
}
varonce487 = var488;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_classes_vtables, var486, var495); /* []= on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
if (likely(varonce496!=NULL)) {
var497 = varonce496;
} else {
var498 = "**********************\n\n";
var499 = standard___standard__NativeString___to_s_with_length(var498, 24l);
var497 = var499;
varonce496 = var497;
}
{
((void(*)(val* self, val* p0))(var_fw->class->vft[COLOR_standard__stream__Writer__write]))(var_fw, var497); /* write on <var_fw:FileWriter>*/
}
} else {
}
{
var500 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
if (unlikely(varonce501==NULL)) {
var502 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce503!=NULL)) {
var504 = varonce503;
} else {
var505 = "\n";
var506 = standard___standard__NativeString___to_s_with_length(var505, 1l);
var504 = var506;
varonce503 = var504;
}
((struct instance_standard__NativeArray*)var502)->values[0]=var504;
if (likely(varonce507!=NULL)) {
var508 = varonce507;
} else {
var509 = "}\n";
var510 = standard___standard__NativeString___to_s_with_length(var509, 2l);
var508 = var510;
varonce507 = var508;
}
((struct instance_standard__NativeArray*)var502)->values[2]=var508;
} else {
var502 = varonce501;
varonce501 = NULL;
}
{
var511 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var512 = ((val*(*)(val* self, val* p0))(var_llvm_attributes->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_attributes, var511); /* [] on <var_llvm_attributes:HashMap[String, String]>*/
}
((struct instance_standard__NativeArray*)var502)->values[1]=var512;
{
var513 = ((val*(*)(val* self))(var502->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var502); /* native_to_s on <var502:NativeArray[String]>*/
}
varonce501 = var502;
{
((void(*)(val* self, val* p0, val* p1))(var_llvm_attributes->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_llvm_attributes, var500, var513); /* []= on <var_llvm_attributes:HashMap[String, String]>*/
}
{
var514 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mclass); /* name on <var_mclass:MClass>*/
}
{
var515 = ((val*(*)(val* self, val* p0))(var_llvm_attributes->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_llvm_attributes, var514); /* [] on <var_llvm_attributes:HashMap[String, String]>*/
}
{
((void(*)(val* self, val* p0))(var_ll->class->vft[COLOR_standard__stream__Writer__write]))(var_ll, var515); /* write on <var_ll:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_44); /* next on <var_44:Iterator[MClass]>*/
}
} else {
goto BREAK_label516;
}
}
BREAK_label516: (void)0;
{
((void(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_44); /* finish on <var_44:Iterator[MClass]>*/
}
if (likely(varonce517!=NULL)) {
var518 = varonce517;
} else {
var519 = "\n\n;Functions\n";
var520 = standard___standard__NativeString___to_s_with_length(var519, 13l);
var518 = var520;
varonce517 = var518;
}
{
((void(*)(val* self, val* p0))(var_ll->class->vft[COLOR_standard__stream__Writer__write]))(var_ll, var518); /* write on <var_ll:FileWriter>*/
}
{
var521 = ((val*(*)(val* self))(var_llvm_functions->class->vft[COLOR_standard__abstract_collection__MapRead__values]))(var_llvm_functions); /* values on <var_llvm_functions:HashMap[String, String]>*/
}
var_522 = var521;
{
var523 = ((val*(*)(val* self))((((long)var_522&3)?class_info[((long)var_522&3)]:var_522->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_522); /* iterator on <var_522:RemovableCollection[String]>*/
}
var_524 = var523;
for(;;) {
{
var525 = ((short int(*)(val* self))((((long)var_524&3)?class_info[((long)var_524&3)]:var_524->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_524); /* is_ok on <var_524:Iterator[String]>*/
}
if (var525){
{
var526 = ((val*(*)(val* self))((((long)var_524&3)?class_info[((long)var_524&3)]:var_524->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_524); /* item on <var_524:Iterator[String]>*/
}
var_v = var526;
{
((void(*)(val* self, val* p0))(var_ll->class->vft[COLOR_standard__stream__Writer__write]))(var_ll, var_v); /* write on <var_ll:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_524&3)?class_info[((long)var_524&3)]:var_524->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_524); /* next on <var_524:Iterator[String]>*/
}
} else {
goto BREAK_label527;
}
}
BREAK_label527: (void)0;
{
((void(*)(val* self))((((long)var_524&3)?class_info[((long)var_524&3)]:var_524->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_524); /* finish on <var_524:Iterator[String]>*/
}
if (likely(varonce528!=NULL)) {
var529 = varonce528;
} else {
var530 = "\n\n;Classes Vtables\n";
var531 = standard___standard__NativeString___to_s_with_length(var530, 19l);
var529 = var531;
varonce528 = var529;
}
{
((void(*)(val* self, val* p0))(var_ll->class->vft[COLOR_standard__stream__Writer__write]))(var_ll, var529); /* write on <var_ll:FileWriter>*/
}
{
var532 = ((val*(*)(val* self))(var_llvm_classes_vtables->class->vft[COLOR_standard__abstract_collection__MapRead__values]))(var_llvm_classes_vtables); /* values on <var_llvm_classes_vtables:HashMap[String, String]>*/
}
var_533 = var532;
{
var534 = ((val*(*)(val* self))((((long)var_533&3)?class_info[((long)var_533&3)]:var_533->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_533); /* iterator on <var_533:RemovableCollection[String]>*/
}
var_535 = var534;
for(;;) {
{
var536 = ((short int(*)(val* self))((((long)var_535&3)?class_info[((long)var_535&3)]:var_535->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_535); /* is_ok on <var_535:Iterator[String]>*/
}
if (var536){
{
var537 = ((val*(*)(val* self))((((long)var_535&3)?class_info[((long)var_535&3)]:var_535->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_535); /* item on <var_535:Iterator[String]>*/
}
var_v538 = var537;
{
((void(*)(val* self, val* p0))(var_ll->class->vft[COLOR_standard__stream__Writer__write]))(var_ll, var_v538); /* write on <var_ll:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_535&3)?class_info[((long)var_535&3)]:var_535->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_535); /* next on <var_535:Iterator[String]>*/
}
} else {
goto BREAK_label539;
}
}
BREAK_label539: (void)0;
{
((void(*)(val* self))((((long)var_535&3)?class_info[((long)var_535&3)]:var_535->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_535); /* finish on <var_535:Iterator[String]>*/
}
if (likely(varonce540!=NULL)) {
var541 = varonce540;
} else {
var542 = "\n\ndefine i32 @main(i32 %argc, i8** %argv) nounwind {\n\n}";
var543 = standard___standard__NativeString___to_s_with_length(var542, 55l);
var541 = var543;
varonce540 = var541;
}
{
((void(*)(val* self, val* p0))(var_ll->class->vft[COLOR_standard__stream__Writer__write]))(var_ll, var541); /* write on <var_ll:FileWriter>*/
}
{
((void(*)(val* self))(var_fw->class->vft[COLOR_standard__stream__Stream__close]))(var_fw); /* close on <var_fw:FileWriter>*/
}
{
((void(*)(val* self))(var_ll->class->vft[COLOR_standard__stream__Stream__close]))(var_ll); /* close on <var_ll:FileWriter>*/
}
RET_LABEL:;
}
/* method nitllvm#Sys#main for (self: Sys) */
void nitllvm___standard__Sys___main(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : ToolContext */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var4 /* : Sequence[String] */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : OptionContext */;
val* var14 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : Model */;
val* var_model /* var model: Model */;
val* var24 /* : ModelBuilder */;
val* var_mbuilder /* var mbuilder: ModelBuilder */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
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
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "--------------Start toolcontext--------------";
var2 = standard___standard__NativeString___to_s_with_length(var1, 45l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var); /* print on <self:Sys>*/
}
var3 = NEW_nit__ToolContext(&type_nit__ToolContext);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:ToolContext>*/
}
var_toolcontext = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Sys__args]))(self); /* args on <self:Sys>*/
}
{
((void(*)(val* self, val* p0))(var_toolcontext->class->vft[COLOR_nit__toolcontext__ToolContext__process_options]))(var_toolcontext, var4); /* process_options on <var_toolcontext:ToolContext>*/
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "--------------Start toolcontext Complete--------------";
var8 = standard___standard__NativeString___to_s_with_length(var7, 54l);
var6 = var8;
varonce5 = var6;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var6); /* print on <self:Sys>*/
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "--------------arguments--------------";
var12 = standard___standard__NativeString___to_s_with_length(var11, 37l);
var10 = var12;
varonce9 = var10;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var10); /* print on <self:Sys>*/
}
{
var13 = ((val*(*)(val* self))(var_toolcontext->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(var_toolcontext); /* option_context on <var_toolcontext:ToolContext>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_opts__OptionContext__rest]))(var13); /* rest on <var13:OptionContext>*/
}
var_arguments = var14;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "--------------arguments Complete--------------";
var18 = standard___standard__NativeString___to_s_with_length(var17, 46l);
var16 = var18;
varonce15 = var16;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var16); /* print on <self:Sys>*/
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "--------------building model--------------";
var22 = standard___standard__NativeString___to_s_with_length(var21, 42l);
var20 = var22;
varonce19 = var20;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var20); /* print on <self:Sys>*/
}
var23 = NEW_nit__Model(&type_nit__Model);
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:Model>*/
}
var_model = var23;
var24 = NEW_nit__ModelBuilder(&type_nit__ModelBuilder);
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model_61d]))(var24, var_model); /* model= on <var24:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext_61d]))(var24, var_toolcontext); /* toolcontext= on <var24:ModelBuilder>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_standard__kernel__Object__init]))(var24); /* init on <var24:ModelBuilder>*/
}
var_mbuilder = var24;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "--------------building model Complete--------------";
var28 = standard___standard__NativeString___to_s_with_length(var27, 51l);
var26 = var28;
varonce25 = var26;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var26); /* print on <self:Sys>*/
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "--------------Parsing--------------";
var32 = standard___standard__NativeString___to_s_with_length(var31, 35l);
var30 = var32;
varonce29 = var30;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var30); /* print on <self:Sys>*/
}
{
var33 = ((val*(*)(val* self, val* p0))(var_mbuilder->class->vft[COLOR_nit__loader__ModelBuilder__parse_full]))(var_mbuilder, var_arguments); /* parse_full on <var_mbuilder:ModelBuilder>*/
}
var_mmodules = var33;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "--------------Parsing Complete--------------";
var37 = standard___standard__NativeString___to_s_with_length(var36, 44l);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var35); /* print on <self:Sys>*/
}
{
var38 = ((short int(*)(val* self))(var_mmodules->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_mmodules); /* is_empty on <var_mmodules:Array[MModule]>*/
}
if (var38){
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "file empty";
var42 = standard___standard__NativeString___to_s_with_length(var41, 10l);
var40 = var42;
varonce39 = var40;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var40); /* print on <self:Sys>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "--------------mbuilder run_phases--------------";
var46 = standard___standard__NativeString___to_s_with_length(var45, 47l);
var44 = var46;
varonce43 = var44;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var44); /* print on <self:Sys>*/
}
{
((void(*)(val* self))(var_mbuilder->class->vft[COLOR_nit__modelbuilder__ModelBuilder__run_phases]))(var_mbuilder); /* run_phases on <var_mbuilder:ModelBuilder>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "--------------mbuilder run_phases Complete--------------";
var50 = standard___standard__NativeString___to_s_with_length(var49, 56l);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var48); /* print on <self:Sys>*/
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "--------------toolcontext run_global_phases--------------";
var54 = standard___standard__NativeString___to_s_with_length(var53, 57l);
var52 = var54;
varonce51 = var52;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var52); /* print on <self:Sys>*/
}
{
((void(*)(val* self, val* p0))(var_toolcontext->class->vft[COLOR_nit__modelbuilder__ToolContext__run_global_phases]))(var_toolcontext, var_mmodules); /* run_global_phases on <var_toolcontext:ToolContext>*/
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "--------------toolcontext run_global_phases Complete--------------";
var58 = standard___standard__NativeString___to_s_with_length(var57, 66l);
var56 = var58;
varonce55 = var56;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__file__Sys__print]))(self, var56); /* print on <self:Sys>*/
}
RET_LABEL:;
}
