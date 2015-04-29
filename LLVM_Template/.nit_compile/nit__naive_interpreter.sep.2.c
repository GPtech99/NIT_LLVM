#include "nit__naive_interpreter.sep.0.h"
/* method naive_interpreter#AMethPropdef#intern_call for (self: AMethPropdef, NaiveInterpreter, MMethodDef, Array[Instance]): nullable Instance */
val* nit__naive_interpreter___AMethPropdef___intern_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[Instance] */;
val* var1 /* : MProperty */;
val* var2 /* : String */;
val* var_pname /* var pname: String */;
val* var3 /* : MClassDef */;
val* var4 /* : MClass */;
val* var5 /* : String */;
val* var_cname /* var cname: String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_recv /* var recv: Instance */;
val* var11 /* : nullable Object */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_recv18 /* var recv: Instance */;
short int var19 /* : Bool */;
int cltype;
int idtype;
val* var20 /* : nullable Object */;
long var21 /* : Int */;
val* var22 /* : Instance */;
long var23 /* : Int */;
val* var24 /* : Instance */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_recv31 /* var recv: Instance */;
val* var32 /* : Sys */;
val* var33 /* : MType */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_recv40 /* var recv: Instance */;
val* var41 /* : MType */;
val* var42 /* : String */;
val* var_txt /* var txt: String */;
val* var43 /* : Instance */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var50 /* : nullable Object */;
short int var51 /* : Bool */;
val* var52 /* : Instance */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var59 /* : nullable Object */;
short int var60 /* : Bool */;
val* var61 /* : Instance */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
val* var68 /* : MType */;
val* var69 /* : nullable Object */;
val* var70 /* : MType */;
short int var71 /* : Bool */;
val* var72 /* : Instance */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
short int var77 /* : Bool */;
val* var78 /* : nullable Object */;
val* var79 /* : nullable Object */;
short int var80 /* : Bool */;
val* var81 /* : Instance */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
short int var86 /* : Bool */;
val* var87 /* : Sys */;
val* var88 /* : nullable Object */;
long var89 /* : Int */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
short int var95 /* : Bool */;
val* var96 /* : Sys */;
val* var98 /* : Sys */;
long var99 /* : Int */;
val* var100 /* : Instance */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : FlatString */;
short int var105 /* : Bool */;
val* var106 /* : Sys */;
val* var108 /* : Sys */;
long var109 /* : Int */;
val* var110 /* : Instance */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
short int var115 /* : Bool */;
val* var116 /* : Sys */;
val* var118 /* : Sys */;
long var119 /* : Int */;
val* var120 /* : Instance */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
short int var125 /* : Bool */;
val* var126 /* : nullable Instance */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : FlatString */;
short int var131 /* : Bool */;
val* var132 /* : nullable Object */;
long var133 /* : Int */;
long var_recvval /* var recvval: Int */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : FlatString */;
short int var138 /* : Bool */;
val* var139 /* : nullable Object */;
long var140 /* : Int */;
long var141 /* : Int */;
long var143 /* : Int */;
val* var144 /* : Instance */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : FlatString */;
short int var149 /* : Bool */;
val* var150 /* : nullable Object */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : FlatString */;
short int var155 /* : Bool */;
val* var156 /* : nullable Object */;
long var157 /* : Int */;
val* var158 /* : nullable Object */;
long var159 /* : Int */;
long var160 /* : Int */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name;
long var165 /* : Int */;
val* var166 /* : Instance */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : FlatString */;
short int var171 /* : Bool */;
val* var172 /* : nullable Object */;
long var173 /* : Int */;
val* var174 /* : nullable Object */;
long var175 /* : Int */;
long var176 /* : Int */;
short int var178 /* : Bool */;
int cltype179;
int idtype180;
const char* var_class_name181;
long var182 /* : Int */;
val* var183 /* : Instance */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : FlatString */;
short int var188 /* : Bool */;
val* var189 /* : nullable Object */;
long var190 /* : Int */;
val* var191 /* : nullable Object */;
long var192 /* : Int */;
long var193 /* : Int */;
short int var195 /* : Bool */;
int cltype196;
int idtype197;
const char* var_class_name198;
long var199 /* : Int */;
val* var200 /* : Instance */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
val* var204 /* : FlatString */;
short int var205 /* : Bool */;
val* var206 /* : nullable Object */;
long var207 /* : Int */;
val* var208 /* : nullable Object */;
long var209 /* : Int */;
long var210 /* : Int */;
long var212 /* : Int */;
val* var213 /* : Instance */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
val* var217 /* : FlatString */;
short int var218 /* : Bool */;
val* var219 /* : nullable Object */;
long var220 /* : Int */;
val* var221 /* : nullable Object */;
long var222 /* : Int */;
long var223 /* : Int */;
short int var225 /* : Bool */;
int cltype226;
int idtype227;
const char* var_class_name228;
long var229 /* : Int */;
val* var230 /* : Instance */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
val* var234 /* : FlatString */;
short int var235 /* : Bool */;
val* var236 /* : nullable Object */;
long var237 /* : Int */;
val* var238 /* : nullable Object */;
long var239 /* : Int */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
int cltype243;
int idtype244;
const char* var_class_name245;
short int var246 /* : Bool */;
val* var247 /* : Instance */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : FlatString */;
short int var252 /* : Bool */;
val* var253 /* : nullable Object */;
long var254 /* : Int */;
val* var255 /* : nullable Object */;
long var256 /* : Int */;
short int var257 /* : Bool */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
const char* var_class_name262;
short int var263 /* : Bool */;
val* var264 /* : Instance */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : FlatString */;
short int var269 /* : Bool */;
val* var270 /* : nullable Object */;
long var271 /* : Int */;
val* var272 /* : nullable Object */;
long var273 /* : Int */;
short int var274 /* : Bool */;
short int var276 /* : Bool */;
int cltype277;
int idtype278;
const char* var_class_name279;
short int var280 /* : Bool */;
val* var281 /* : Instance */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
val* var285 /* : FlatString */;
short int var286 /* : Bool */;
val* var287 /* : nullable Object */;
long var288 /* : Int */;
val* var289 /* : nullable Object */;
long var290 /* : Int */;
short int var291 /* : Bool */;
short int var293 /* : Bool */;
int cltype294;
int idtype295;
const char* var_class_name296;
short int var297 /* : Bool */;
val* var298 /* : Instance */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
val* var302 /* : FlatString */;
short int var303 /* : Bool */;
val* var304 /* : nullable Object */;
long var305 /* : Int */;
val* var306 /* : nullable Object */;
long var307 /* : Int */;
long var308 /* : Int */;
val* var309 /* : Instance */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
val* var313 /* : FlatString */;
short int var314 /* : Bool */;
val* var315 /* : nullable Object */;
long var316 /* : Int */;
char var317 /* : Char */;
char var319 /* : Char */;
val* var320 /* : Instance */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
val* var324 /* : FlatString */;
short int var325 /* : Bool */;
val* var326 /* : nullable Object */;
long var327 /* : Int */;
double var328 /* : Float */;
double var330 /* : Float */;
val* var331 /* : Instance */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
val* var335 /* : FlatString */;
short int var336 /* : Bool */;
val* var337 /* : nullable Object */;
long var338 /* : Int */;
val* var339 /* : nullable Object */;
long var340 /* : Int */;
long var341 /* : Int */;
long var343 /* : Int */;
val* var344 /* : Instance */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
val* var348 /* : FlatString */;
short int var349 /* : Bool */;
val* var350 /* : nullable Object */;
long var351 /* : Int */;
val* var352 /* : nullable Object */;
long var353 /* : Int */;
long var354 /* : Int */;
long var356 /* : Int */;
val* var357 /* : Instance */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : NativeString */;
val* var361 /* : FlatString */;
short int var362 /* : Bool */;
long var363 /* : Int */;
long var_res /* var res: Int */;
val* var364 /* : Instance */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
val* var368 /* : FlatString */;
short int var369 /* : Bool */;
val* var370 /* : nullable Object */;
long var371 /* : Int */;
val* var372 /* : nullable Object */;
long var373 /* : Int */;
long var374 /* : Int */;
val* var375 /* : Instance */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
val* var379 /* : FlatString */;
short int var380 /* : Bool */;
val* var381 /* : nullable Object */;
long var382 /* : Int */;
val* var383 /* : nullable Object */;
long var384 /* : Int */;
long var385 /* : Int */;
val* var386 /* : Instance */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : NativeString */;
val* var390 /* : FlatString */;
short int var391 /* : Bool */;
val* var392 /* : nullable Object */;
long var393 /* : Int */;
val* var394 /* : nullable Object */;
long var395 /* : Int */;
long var396 /* : Int */;
val* var397 /* : Instance */;
static val* varonce398;
val* var399 /* : String */;
char* var400 /* : NativeString */;
val* var401 /* : FlatString */;
short int var402 /* : Bool */;
val* var403 /* : nullable Object */;
long var404 /* : Int */;
long var405 /* : Int */;
val* var406 /* : Instance */;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
val* var410 /* : FlatString */;
short int var411 /* : Bool */;
val* var412 /* : String */;
long var413 /* : Int */;
val* var414 /* : Instance */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : NativeString */;
val* var418 /* : FlatString */;
short int var419 /* : Bool */;
val* var420 /* : String */;
val* var_s /* var s: String */;
val* var421 /* : nullable Object */;
val* var422 /* : nullable Object */;
short int var423 /* : Bool */;
int cltype424;
int idtype425;
const char* var_class_name426;
val* var_srecv /* var srecv: Buffer */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
val* var430 /* : FlatString */;
short int var431 /* : Bool */;
val* var432 /* : String */;
val* var433 /* : Instance */;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : NativeString */;
val* var437 /* : FlatString */;
short int var438 /* : Bool */;
val* var439 /* : nullable Object */;
val* var440 /* : nullable Object */;
short int var441 /* : Bool */;
int cltype442;
int idtype443;
const char* var_class_name444;
char var445 /* : Char */;
char var_recv446 /* var recv: Char */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
val* var450 /* : FlatString */;
short int var451 /* : Bool */;
long var452 /* : Int */;
long var454 /* : Int */;
val* var455 /* : Instance */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : NativeString */;
val* var459 /* : FlatString */;
short int var460 /* : Bool */;
val* var461 /* : nullable Object */;
long var462 /* : Int */;
char var463 /* : Char */;
char var465 /* : Char */;
val* var466 /* : Instance */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
val* var470 /* : FlatString */;
short int var471 /* : Bool */;
val* var472 /* : nullable Object */;
long var473 /* : Int */;
char var474 /* : Char */;
char var476 /* : Char */;
val* var477 /* : Instance */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : NativeString */;
val* var481 /* : FlatString */;
short int var482 /* : Bool */;
val* var483 /* : nullable Object */;
val* var484 /* : nullable Object */;
short int var485 /* : Bool */;
int cltype486;
int idtype487;
const char* var_class_name488;
short int var489 /* : Bool */;
short int var491 /* : Bool */;
int cltype492;
int idtype493;
const char* var_class_name494;
char var495 /* : Char */;
short int var496 /* : Bool */;
val* var497 /* : Instance */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
val* var501 /* : FlatString */;
short int var502 /* : Bool */;
val* var503 /* : nullable Object */;
val* var504 /* : nullable Object */;
short int var505 /* : Bool */;
int cltype506;
int idtype507;
const char* var_class_name508;
short int var509 /* : Bool */;
short int var511 /* : Bool */;
int cltype512;
int idtype513;
const char* var_class_name514;
char var515 /* : Char */;
short int var516 /* : Bool */;
val* var517 /* : Instance */;
static val* varonce518;
val* var519 /* : String */;
char* var520 /* : NativeString */;
val* var521 /* : FlatString */;
short int var522 /* : Bool */;
val* var523 /* : nullable Object */;
val* var524 /* : nullable Object */;
short int var525 /* : Bool */;
int cltype526;
int idtype527;
const char* var_class_name528;
short int var529 /* : Bool */;
short int var531 /* : Bool */;
int cltype532;
int idtype533;
const char* var_class_name534;
char var535 /* : Char */;
short int var536 /* : Bool */;
val* var537 /* : Instance */;
static val* varonce538;
val* var539 /* : String */;
char* var540 /* : NativeString */;
val* var541 /* : FlatString */;
short int var542 /* : Bool */;
val* var543 /* : nullable Object */;
val* var544 /* : nullable Object */;
short int var545 /* : Bool */;
int cltype546;
int idtype547;
const char* var_class_name548;
short int var549 /* : Bool */;
short int var551 /* : Bool */;
int cltype552;
int idtype553;
const char* var_class_name554;
char var555 /* : Char */;
short int var556 /* : Bool */;
val* var557 /* : Instance */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : NativeString */;
val* var561 /* : FlatString */;
short int var562 /* : Bool */;
val* var563 /* : nullable Object */;
val* var564 /* : nullable Object */;
short int var565 /* : Bool */;
int cltype566;
int idtype567;
const char* var_class_name568;
long var569 /* : Int */;
val* var570 /* : Comparable */;
val* var571 /* : Instance */;
static val* varonce572;
val* var573 /* : String */;
char* var574 /* : NativeString */;
val* var575 /* : FlatString */;
short int var576 /* : Bool */;
val* var577 /* : nullable Object */;
double var578 /* : Float */;
double var_recv579 /* var recv: Float */;
static val* varonce580;
val* var581 /* : String */;
char* var582 /* : NativeString */;
val* var583 /* : FlatString */;
short int var584 /* : Bool */;
double var585 /* : Float */;
double var587 /* : Float */;
val* var588 /* : Instance */;
static val* varonce589;
val* var590 /* : String */;
char* var591 /* : NativeString */;
val* var592 /* : FlatString */;
short int var593 /* : Bool */;
val* var594 /* : nullable Object */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : NativeString */;
val* var598 /* : FlatString */;
short int var599 /* : Bool */;
val* var600 /* : nullable Object */;
double var601 /* : Float */;
double var602 /* : Float */;
short int var604 /* : Bool */;
int cltype605;
int idtype606;
const char* var_class_name607;
double var608 /* : Float */;
val* var609 /* : Instance */;
static val* varonce610;
val* var611 /* : String */;
char* var612 /* : NativeString */;
val* var613 /* : FlatString */;
short int var614 /* : Bool */;
val* var615 /* : nullable Object */;
double var616 /* : Float */;
double var617 /* : Float */;
short int var619 /* : Bool */;
int cltype620;
int idtype621;
const char* var_class_name622;
double var623 /* : Float */;
val* var624 /* : Instance */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : NativeString */;
val* var628 /* : FlatString */;
short int var629 /* : Bool */;
val* var630 /* : nullable Object */;
double var631 /* : Float */;
double var632 /* : Float */;
short int var634 /* : Bool */;
int cltype635;
int idtype636;
const char* var_class_name637;
double var638 /* : Float */;
val* var639 /* : Instance */;
static val* varonce640;
val* var641 /* : String */;
char* var642 /* : NativeString */;
val* var643 /* : FlatString */;
short int var644 /* : Bool */;
val* var645 /* : nullable Object */;
double var646 /* : Float */;
double var647 /* : Float */;
short int var649 /* : Bool */;
int cltype650;
int idtype651;
const char* var_class_name652;
double var653 /* : Float */;
val* var654 /* : Instance */;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : NativeString */;
val* var658 /* : FlatString */;
short int var659 /* : Bool */;
val* var660 /* : nullable Object */;
double var661 /* : Float */;
short int var662 /* : Bool */;
short int var664 /* : Bool */;
int cltype665;
int idtype666;
const char* var_class_name667;
short int var668 /* : Bool */;
val* var669 /* : Instance */;
static val* varonce670;
val* var671 /* : String */;
char* var672 /* : NativeString */;
val* var673 /* : FlatString */;
short int var674 /* : Bool */;
val* var675 /* : nullable Object */;
double var676 /* : Float */;
short int var677 /* : Bool */;
short int var679 /* : Bool */;
int cltype680;
int idtype681;
const char* var_class_name682;
short int var683 /* : Bool */;
val* var684 /* : Instance */;
static val* varonce685;
val* var686 /* : String */;
char* var687 /* : NativeString */;
val* var688 /* : FlatString */;
short int var689 /* : Bool */;
val* var690 /* : nullable Object */;
double var691 /* : Float */;
short int var692 /* : Bool */;
short int var694 /* : Bool */;
int cltype695;
int idtype696;
const char* var_class_name697;
short int var698 /* : Bool */;
val* var699 /* : Instance */;
static val* varonce700;
val* var701 /* : String */;
char* var702 /* : NativeString */;
val* var703 /* : FlatString */;
short int var704 /* : Bool */;
val* var705 /* : nullable Object */;
double var706 /* : Float */;
short int var707 /* : Bool */;
short int var709 /* : Bool */;
int cltype710;
int idtype711;
const char* var_class_name712;
short int var713 /* : Bool */;
val* var714 /* : Instance */;
static val* varonce715;
val* var716 /* : String */;
char* var717 /* : NativeString */;
val* var718 /* : FlatString */;
short int var719 /* : Bool */;
long var720 /* : Int */;
long var722 /* : Int */;
val* var723 /* : Instance */;
static val* varonce724;
val* var725 /* : String */;
char* var726 /* : NativeString */;
val* var727 /* : FlatString */;
short int var728 /* : Bool */;
val* var729 /* : nullable Object */;
double var730 /* : Float */;
double var731 /* : Float */;
val* var732 /* : Instance */;
static val* varonce733;
val* var734 /* : String */;
char* var735 /* : NativeString */;
val* var736 /* : FlatString */;
short int var737 /* : Bool */;
val* var738 /* : nullable Object */;
double var739 /* : Float */;
double var740 /* : Float */;
val* var741 /* : Instance */;
static val* varonce742;
val* var743 /* : String */;
char* var744 /* : NativeString */;
val* var745 /* : FlatString */;
short int var746 /* : Bool */;
val* var747 /* : nullable Object */;
double var748 /* : Float */;
double var749 /* : Float */;
val* var750 /* : Instance */;
static val* varonce751;
val* var752 /* : String */;
char* var753 /* : NativeString */;
val* var754 /* : FlatString */;
short int var755 /* : Bool */;
val* var756 /* : nullable Object */;
double var757 /* : Float */;
double var758 /* : Float */;
val* var759 /* : Instance */;
static val* varonce760;
val* var761 /* : String */;
char* var762 /* : NativeString */;
val* var763 /* : FlatString */;
short int var764 /* : Bool */;
val* var765 /* : nullable Object */;
double var766 /* : Float */;
double var767 /* : Float */;
val* var768 /* : Instance */;
static val* varonce769;
val* var770 /* : String */;
char* var771 /* : NativeString */;
val* var772 /* : FlatString */;
short int var773 /* : Bool */;
val* var774 /* : nullable Object */;
double var775 /* : Float */;
double var776 /* : Float */;
val* var777 /* : Instance */;
static val* varonce778;
val* var779 /* : String */;
char* var780 /* : NativeString */;
val* var781 /* : FlatString */;
short int var782 /* : Bool */;
val* var783 /* : nullable Object */;
double var784 /* : Float */;
double var785 /* : Float */;
val* var786 /* : Instance */;
static val* varonce787;
val* var788 /* : String */;
char* var789 /* : NativeString */;
val* var790 /* : FlatString */;
short int var791 /* : Bool */;
val* var792 /* : nullable Object */;
double var793 /* : Float */;
double var794 /* : Float */;
val* var795 /* : Instance */;
static val* varonce796;
val* var797 /* : String */;
char* var798 /* : NativeString */;
val* var799 /* : FlatString */;
short int var800 /* : Bool */;
val* var801 /* : nullable Object */;
double var802 /* : Float */;
double var803 /* : Float */;
val* var804 /* : Instance */;
static val* varonce805;
val* var806 /* : String */;
char* var807 /* : NativeString */;
val* var808 /* : FlatString */;
short int var809 /* : Bool */;
val* var810 /* : nullable Object */;
double var811 /* : Float */;
val* var812 /* : nullable Object */;
double var813 /* : Float */;
double var814 /* : Float */;
val* var815 /* : Instance */;
static val* varonce816;
val* var817 /* : String */;
char* var818 /* : NativeString */;
val* var819 /* : FlatString */;
short int var820 /* : Bool */;
val* var821 /* : nullable Object */;
double var822 /* : Float */;
double var823 /* : Float */;
val* var824 /* : Instance */;
static val* varonce825;
val* var826 /* : String */;
char* var827 /* : NativeString */;
val* var828 /* : FlatString */;
short int var829 /* : Bool */;
val* var830 /* : nullable Object */;
double var831 /* : Float */;
double var832 /* : Float */;
val* var833 /* : Instance */;
static val* varonce834;
val* var835 /* : String */;
char* var836 /* : NativeString */;
val* var837 /* : FlatString */;
short int var838 /* : Bool */;
val* var839 /* : nullable Object */;
double var840 /* : Float */;
val* var841 /* : nullable Object */;
double var842 /* : Float */;
double var843 /* : Float */;
val* var844 /* : Instance */;
static val* varonce845;
val* var846 /* : String */;
char* var847 /* : NativeString */;
val* var848 /* : FlatString */;
short int var849 /* : Bool */;
val* var850 /* : nullable Object */;
double var851 /* : Float */;
short int var852 /* : Bool */;
val* var853 /* : Instance */;
static val* varonce854;
val* var855 /* : String */;
char* var856 /* : NativeString */;
val* var857 /* : FlatString */;
short int var858 /* : Bool */;
val* var859 /* : nullable Object */;
double var860 /* : Float */;
long var861 /* : Int */;
short int var862 /* : Bool */;
short int var864 /* : Bool */;
short int var865 /* : Bool */;
val* var866 /* : Instance */;
static val* varonce867;
val* var868 /* : String */;
char* var869 /* : NativeString */;
val* var870 /* : FlatString */;
short int var871 /* : Bool */;
val* var872 /* : nullable Object */;
double var873 /* : Float */;
double var874 /* : Float */;
val* var875 /* : Instance */;
static val* varonce876;
val* var877 /* : String */;
char* var878 /* : NativeString */;
val* var879 /* : FlatString */;
short int var880 /* : Bool */;
static val* varonce881;
val* var882 /* : String */;
char* var883 /* : NativeString */;
val* var884 /* : FlatString */;
short int var885 /* : Bool */;
static val* varonce886;
val* var887 /* : String */;
char* var888 /* : NativeString */;
val* var889 /* : FlatString */;
val* var890 /* : nullable Object */;
long var891 /* : Int */;
val* var892 /* : String */;
val* var893 /* : Instance */;
val* var894 /* : nullable Object */;
val* var895 /* : nullable Object */;
short int var896 /* : Bool */;
int cltype897;
int idtype898;
const char* var_class_name899;
val* var_recvval900 /* var recvval: Buffer */;
static val* varonce901;
val* var902 /* : String */;
char* var903 /* : NativeString */;
val* var904 /* : FlatString */;
short int var905 /* : Bool */;
val* var906 /* : nullable Object */;
long var907 /* : Int */;
long var_arg1 /* var arg1: Int */;
short int var908 /* : Bool */;
long var909 /* : Int */;
short int var910 /* : Bool */;
short int var912 /* : Bool */;
int cltype913;
int idtype914;
const char* var_class_name915;
short int var916 /* : Bool */;
short int var_ /* var : Bool */;
short int var917 /* : Bool */;
short int var919 /* : Bool */;
int cltype920;
int idtype921;
const char* var_class_name922;
short int var923 /* : Bool */;
val* var925 /* : NativeArray[String] */;
static val* varonce924;
static val* varonce926;
val* var927 /* : String */;
char* var928 /* : NativeString */;
val* var929 /* : FlatString */;
static val* varonce930;
val* var931 /* : String */;
char* var932 /* : NativeString */;
val* var933 /* : FlatString */;
static val* varonce934;
val* var935 /* : String */;
char* var936 /* : NativeString */;
val* var937 /* : FlatString */;
val* var938 /* : String */;
val* var939 /* : String */;
long var940 /* : Int */;
val* var941 /* : String */;
val* var942 /* : String */;
val* var943 /* : SequenceRead[Char] */;
val* var944 /* : nullable Object */;
val* var945 /* : Instance */;
char var946 /* : Char */;
static val* varonce947;
val* var948 /* : String */;
char* var949 /* : NativeString */;
val* var950 /* : FlatString */;
short int var951 /* : Bool */;
val* var952 /* : nullable Object */;
long var953 /* : Int */;
long var_arg1954 /* var arg1: Int */;
short int var955 /* : Bool */;
long var956 /* : Int */;
short int var957 /* : Bool */;
short int var959 /* : Bool */;
int cltype960;
int idtype961;
const char* var_class_name962;
short int var963 /* : Bool */;
short int var_964 /* var : Bool */;
short int var965 /* : Bool */;
short int var967 /* : Bool */;
int cltype968;
int idtype969;
const char* var_class_name970;
short int var971 /* : Bool */;
val* var973 /* : NativeArray[String] */;
static val* varonce972;
static val* varonce974;
val* var975 /* : String */;
char* var976 /* : NativeString */;
val* var977 /* : FlatString */;
static val* varonce978;
val* var979 /* : String */;
char* var980 /* : NativeString */;
val* var981 /* : FlatString */;
static val* varonce982;
val* var983 /* : String */;
char* var984 /* : NativeString */;
val* var985 /* : FlatString */;
val* var986 /* : String */;
val* var987 /* : String */;
long var988 /* : Int */;
val* var989 /* : String */;
val* var990 /* : String */;
val* var991 /* : SequenceRead[Char] */;
val* var992 /* : nullable Object */;
val* var993 /* : nullable Object */;
short int var994 /* : Bool */;
int cltype995;
int idtype996;
const char* var_class_name997;
static val* varonce998;
val* var999 /* : String */;
char* var1000 /* : NativeString */;
val* var1001 /* : FlatString */;
short int var1002 /* : Bool */;
val* var1003 /* : nullable Object */;
val* var1004 /* : nullable Object */;
short int var1005 /* : Bool */;
int cltype1006;
int idtype1007;
const char* var_class_name1008;
val* var_destval /* var destval: FlatBuffer */;
val* var1009 /* : nullable Object */;
long var1010 /* : Int */;
long var_lenval /* var lenval: Int */;
val* var1011 /* : nullable Object */;
long var1012 /* : Int */;
long var_fromval /* var fromval: Int */;
val* var1013 /* : nullable Object */;
long var1014 /* : Int */;
long var_toval /* var toval: Int */;
short int var1015 /* : Bool */;
short int var1017 /* : Bool */;
int cltype1018;
int idtype1019;
const char* var_class_name1020;
short int var1021 /* : Bool */;
val* var1023 /* : NativeArray[String] */;
static val* varonce1022;
static val* varonce1024;
val* var1025 /* : String */;
char* var1026 /* : NativeString */;
val* var1027 /* : FlatString */;
static val* varonce1028;
val* var1029 /* : String */;
char* var1030 /* : NativeString */;
val* var1031 /* : FlatString */;
static val* varonce1032;
val* var1033 /* : String */;
char* var1034 /* : NativeString */;
val* var1035 /* : FlatString */;
val* var1036 /* : String */;
val* var1037 /* : String */;
long var1038 /* : Int */;
val* var1039 /* : String */;
val* var1040 /* : String */;
long var1041 /* : Int */;
short int var1043 /* : Bool */;
int cltype1044;
int idtype1045;
const char* var_class_name1046;
long var1047 /* : Int */;
long var1048 /* : Int */;
short int var1049 /* : Bool */;
short int var1051 /* : Bool */;
int cltype1052;
int idtype1053;
const char* var_class_name1054;
short int var1055 /* : Bool */;
val* var1057 /* : NativeArray[String] */;
static val* varonce1056;
static val* varonce1058;
val* var1059 /* : String */;
char* var1060 /* : NativeString */;
val* var1061 /* : FlatString */;
static val* varonce1062;
val* var1063 /* : String */;
char* var1064 /* : NativeString */;
val* var1065 /* : FlatString */;
static val* varonce1066;
val* var1067 /* : String */;
char* var1068 /* : NativeString */;
val* var1069 /* : FlatString */;
static val* varonce1070;
val* var1071 /* : String */;
char* var1072 /* : NativeString */;
val* var1073 /* : FlatString */;
val* var1074 /* : String */;
val* var1075 /* : String */;
val* var1076 /* : String */;
long var1077 /* : Int */;
val* var1078 /* : String */;
val* var1079 /* : String */;
short int var1080 /* : Bool */;
short int var1082 /* : Bool */;
int cltype1083;
int idtype1084;
const char* var_class_name1085;
short int var1086 /* : Bool */;
val* var1088 /* : NativeArray[String] */;
static val* varonce1087;
static val* varonce1089;
val* var1090 /* : String */;
char* var1091 /* : NativeString */;
val* var1092 /* : FlatString */;
static val* varonce1093;
val* var1094 /* : String */;
char* var1095 /* : NativeString */;
val* var1096 /* : FlatString */;
static val* varonce1097;
val* var1098 /* : String */;
char* var1099 /* : NativeString */;
val* var1100 /* : FlatString */;
val* var1101 /* : String */;
val* var1102 /* : String */;
long var1103 /* : Int */;
val* var1104 /* : String */;
val* var1105 /* : String */;
long var1106 /* : Int */;
short int var1108 /* : Bool */;
int cltype1109;
int idtype1110;
const char* var_class_name1111;
long var1112 /* : Int */;
long var1113 /* : Int */;
short int var1114 /* : Bool */;
short int var1116 /* : Bool */;
int cltype1117;
int idtype1118;
const char* var_class_name1119;
short int var1120 /* : Bool */;
val* var1122 /* : NativeArray[String] */;
static val* varonce1121;
static val* varonce1123;
val* var1124 /* : String */;
char* var1125 /* : NativeString */;
val* var1126 /* : FlatString */;
static val* varonce1127;
val* var1128 /* : String */;
char* var1129 /* : NativeString */;
val* var1130 /* : FlatString */;
static val* varonce1131;
val* var1132 /* : String */;
char* var1133 /* : NativeString */;
val* var1134 /* : FlatString */;
static val* varonce1135;
val* var1136 /* : String */;
char* var1137 /* : NativeString */;
val* var1138 /* : FlatString */;
val* var1139 /* : String */;
val* var1140 /* : String */;
val* var1141 /* : String */;
long var1142 /* : Int */;
val* var1143 /* : String */;
val* var1144 /* : String */;
short int var1145 /* : Bool */;
int cltype1146;
int idtype1147;
const char* var_class_name1148;
static val* varonce1149;
val* var1150 /* : String */;
char* var1151 /* : NativeString */;
val* var1152 /* : FlatString */;
short int var1153 /* : Bool */;
long var1154 /* : Int */;
val* var1155 /* : Instance */;
static val* varonce1156;
val* var1157 /* : String */;
char* var1158 /* : NativeString */;
val* var1159 /* : FlatString */;
short int var1160 /* : Bool */;
val* var1161 /* : String */;
short int var1162 /* : Bool */;
val* var1163 /* : Instance */;
static val* varonce1164;
val* var1165 /* : String */;
char* var1166 /* : NativeString */;
val* var1167 /* : FlatString */;
short int var1168 /* : Bool */;
val* var1169 /* : String */;
val* var1170 /* : nullable Error */;
val* var_res1171 /* var res: nullable Error */;
short int var1172 /* : Bool */;
short int var1173 /* : Bool */;
val* var1174 /* : Instance */;
static val* varonce1175;
val* var1176 /* : String */;
char* var1177 /* : NativeString */;
val* var1178 /* : FlatString */;
short int var1179 /* : Bool */;
val* var1180 /* : String */;
val* var1181 /* : nullable Error */;
val* var_res1182 /* var res: nullable Error */;
short int var1183 /* : Bool */;
short int var1184 /* : Bool */;
val* var1185 /* : Instance */;
static val* varonce1186;
val* var1187 /* : String */;
char* var1188 /* : NativeString */;
val* var1189 /* : FlatString */;
short int var1190 /* : Bool */;
val* var1191 /* : String */;
val* var1192 /* : String */;
val* var1193 /* : Instance */;
static val* varonce1194;
val* var1195 /* : String */;
char* var1196 /* : NativeString */;
val* var1197 /* : FlatString */;
short int var1198 /* : Bool */;
val* var1199 /* : String */;
val* var1200 /* : String */;
val* var_txt1201 /* var txt: String */;
val* var1202 /* : Instance */;
static val* varonce1203;
val* var1204 /* : String */;
char* var1205 /* : NativeString */;
val* var1206 /* : FlatString */;
short int var1207 /* : Bool */;
val* var1208 /* : Sys */;
val* var1210 /* : Sys */;
val* var1211 /* : String */;
long var1212 /* : Int */;
long var_res1213 /* var res: Int */;
val* var1214 /* : Instance */;
static val* varonce1215;
val* var1216 /* : String */;
char* var1217 /* : NativeString */;
val* var1218 /* : FlatString */;
short int var1219 /* : Bool */;
double var1220 /* : Float */;
val* var1221 /* : Instance */;
static val* varonce1222;
val* var1223 /* : String */;
char* var1224 /* : NativeString */;
val* var1225 /* : FlatString */;
short int var1226 /* : Bool */;
char* var1227 /* : NativeString */;
val* var1228 /* : String */;
val* var1229 /* : nullable Object */;
long var1230 /* : Int */;
val* var1231 /* : Text */;
val* var_ns /* var ns: String */;
val* var1232 /* : Instance */;
static val* varonce1233;
val* var1234 /* : String */;
char* var1235 /* : NativeString */;
val* var1236 /* : FlatString */;
short int var1237 /* : Bool */;
static val* varonce1238;
val* var1239 /* : String */;
char* var1240 /* : NativeString */;
val* var1241 /* : FlatString */;
val* var1242 /* : nullable Object */;
val* var1243 /* : MType */;
val* var1244 /* : MMethod */;
val* var1245 /* : Array[Instance] */;
val* var_1246 /* var : Array[Instance] */;
val* var1247 /* : nullable Object */;
val* var1248 /* : nullable Instance */;
val* var_cs /* var cs: nullable Instance */;
val* var1249 /* : nullable Object */;
val* var1250 /* : String */;
val* var_str /* var str: String */;
static val* varonce1251;
val* var1252 /* : String */;
char* var1253 /* : NativeString */;
val* var1254 /* : FlatString */;
short int var1255 /* : Bool */;
val* var1256 /* : Array[Instance] */;
val* var_res1257 /* var res: Array[Instance] */;
val* var1258 /* : Array[String] */;
val* var_1259 /* var : Array[String] */;
val* var1260 /* : Iterator[nullable Object] */;
val* var_1261 /* var : ArrayIterator[String] */;
short int var1262 /* : Bool */;
val* var1263 /* : nullable Object */;
val* var_f /* var f: String */;
val* var1264 /* : Instance */;
val* var1265 /* : MModule */;
val* var1266 /* : MClassType */;
val* var1267 /* : Instance */;
static val* varonce1268;
val* var1269 /* : String */;
char* var1270 /* : NativeString */;
val* var1271 /* : FlatString */;
short int var1272 /* : Bool */;
static val* varonce1273;
val* var1274 /* : String */;
char* var1275 /* : NativeString */;
val* var1276 /* : FlatString */;
val* var1277 /* : nullable Object */;
long var1278 /* : Int */;
val* var1279 /* : String */;
val* var1280 /* : Instance */;
static val* varonce1281;
val* var1282 /* : String */;
char* var1283 /* : NativeString */;
val* var1284 /* : FlatString */;
short int var1285 /* : Bool */;
static val* varonce1286;
val* var1287 /* : String */;
char* var1288 /* : NativeString */;
val* var1289 /* : FlatString */;
short int var1290 /* : Bool */;
val* var1291 /* : Array[Instance] */;
val* var1292 /* : Instance */;
val* var1293 /* : nullable Object */;
long var1294 /* : Int */;
val* var_val /* var val: Array[Instance] */;
val* var1295 /* : PrimitiveInstance[Array[Instance]] */;
val* var1296 /* : nullable Object */;
val* var1297 /* : MType */;
val* var_instance /* var instance: PrimitiveInstance[Array[Instance]] */;
val* var1298 /* : nullable Object */;
val* var1299 /* : nullable Object */;
short int var1300 /* : Bool */;
int cltype1301;
int idtype1302;
const char* var_class_name1303;
val* var_recvval1304 /* var recvval: Array[Instance] */;
static val* varonce1305;
val* var1306 /* : String */;
char* var1307 /* : NativeString */;
val* var1308 /* : FlatString */;
short int var1309 /* : Bool */;
short int var1310 /* : Bool */;
val* var1311 /* : nullable Object */;
long var1312 /* : Int */;
long var1313 /* : Int */;
short int var1314 /* : Bool */;
short int var1316 /* : Bool */;
int cltype1317;
int idtype1318;
const char* var_class_name1319;
short int var1320 /* : Bool */;
short int var_1321 /* var : Bool */;
val* var1322 /* : nullable Object */;
long var1323 /* : Int */;
short int var1324 /* : Bool */;
short int var1326 /* : Bool */;
int cltype1327;
int idtype1328;
const char* var_class_name1329;
short int var1330 /* : Bool */;
val* var1332 /* : NativeArray[String] */;
static val* varonce1331;
static val* varonce1333;
val* var1334 /* : String */;
char* var1335 /* : NativeString */;
val* var1336 /* : FlatString */;
static val* varonce1337;
val* var1338 /* : String */;
char* var1339 /* : NativeString */;
val* var1340 /* : FlatString */;
static val* varonce1341;
val* var1342 /* : String */;
char* var1343 /* : NativeString */;
val* var1344 /* : FlatString */;
val* var1345 /* : String */;
val* var1346 /* : nullable Object */;
long var1347 /* : Int */;
val* var1348 /* : String */;
long var1349 /* : Int */;
val* var1350 /* : String */;
val* var1351 /* : String */;
val* var1352 /* : nullable Object */;
long var1353 /* : Int */;
val* var1354 /* : nullable Object */;
static val* varonce1355;
val* var1356 /* : String */;
char* var1357 /* : NativeString */;
val* var1358 /* : FlatString */;
short int var1359 /* : Bool */;
val* var1360 /* : nullable Object */;
long var1361 /* : Int */;
val* var1362 /* : nullable Object */;
static val* varonce1363;
val* var1364 /* : String */;
char* var1365 /* : NativeString */;
val* var1366 /* : FlatString */;
short int var1367 /* : Bool */;
long var1368 /* : Int */;
val* var1369 /* : Instance */;
static val* varonce1370;
val* var1371 /* : String */;
char* var1372 /* : NativeString */;
val* var1373 /* : FlatString */;
short int var1374 /* : Bool */;
val* var1375 /* : nullable Object */;
long var1376 /* : Int */;
val* var1377 /* : nullable Object */;
val* var1378 /* : nullable Object */;
short int var1379 /* : Bool */;
int cltype1380;
int idtype1381;
const char* var_class_name1382;
static val* varonce1383;
val* var1384 /* : String */;
char* var1385 /* : NativeString */;
val* var1386 /* : FlatString */;
short int var1387 /* : Bool */;
static val* varonce1388;
val* var1389 /* : String */;
char* var1390 /* : NativeString */;
val* var1391 /* : FlatString */;
short int var1392 /* : Bool */;
val* var1393 /* : PrimitiveNativeFile */;
val* var_inst /* var inst: PrimitiveNativeFile */;
val* var1394 /* : PrimitiveInstance[PrimitiveNativeFile] */;
val* var1395 /* : MClassDef */;
val* var1396 /* : MClass */;
val* var1397 /* : MClassType */;
val* var_instance1398 /* var instance: PrimitiveInstance[PrimitiveNativeFile] */;
static val* varonce1399;
val* var1400 /* : String */;
char* var1401 /* : NativeString */;
val* var1402 /* : FlatString */;
short int var1403 /* : Bool */;
val* var1404 /* : PrimitiveNativeFile */;
val* var_inst1405 /* var inst: PrimitiveNativeFile */;
val* var1406 /* : PrimitiveInstance[PrimitiveNativeFile] */;
val* var1407 /* : MClassDef */;
val* var1408 /* : MClass */;
val* var1409 /* : MClassType */;
val* var_instance1410 /* var instance: PrimitiveInstance[PrimitiveNativeFile] */;
static val* varonce1411;
val* var1412 /* : String */;
char* var1413 /* : NativeString */;
val* var1414 /* : FlatString */;
short int var1415 /* : Bool */;
val* var1416 /* : PrimitiveNativeFile */;
val* var_inst1417 /* var inst: PrimitiveNativeFile */;
val* var1418 /* : PrimitiveInstance[PrimitiveNativeFile] */;
val* var1419 /* : MClassDef */;
val* var1420 /* : MClass */;
val* var1421 /* : MClassType */;
val* var_instance1422 /* var instance: PrimitiveInstance[PrimitiveNativeFile] */;
static val* varonce1423;
val* var1424 /* : String */;
char* var1425 /* : NativeString */;
val* var1426 /* : FlatString */;
short int var1427 /* : Bool */;
val* var1428 /* : nullable Object */;
val* var1429 /* : nullable Object */;
short int var1430 /* : Bool */;
int cltype1431;
int idtype1432;
const char* var_class_name1433;
val* var_a1 /* var a1: Buffer */;
val* var1434 /* : PrimitiveNativeFile */;
val* var1435 /* : String */;
val* var_inst1436 /* var inst: PrimitiveNativeFile */;
val* var1437 /* : PrimitiveInstance[PrimitiveNativeFile] */;
val* var1438 /* : MClassDef */;
val* var1439 /* : MClass */;
val* var1440 /* : MClassType */;
val* var_instance1441 /* var instance: PrimitiveInstance[PrimitiveNativeFile] */;
static val* varonce1442;
val* var1443 /* : String */;
char* var1444 /* : NativeString */;
val* var1445 /* : FlatString */;
short int var1446 /* : Bool */;
val* var1447 /* : nullable Object */;
val* var1448 /* : nullable Object */;
short int var1449 /* : Bool */;
int cltype1450;
int idtype1451;
const char* var_class_name1452;
val* var_a11453 /* var a1: Buffer */;
val* var1454 /* : PrimitiveNativeFile */;
val* var1455 /* : String */;
val* var_inst1456 /* var inst: PrimitiveNativeFile */;
val* var1457 /* : PrimitiveInstance[PrimitiveNativeFile] */;
val* var1458 /* : MClassDef */;
val* var1459 /* : MClass */;
val* var1460 /* : MClassType */;
val* var_instance1461 /* var instance: PrimitiveInstance[PrimitiveNativeFile] */;
val* var1462 /* : nullable Object */;
val* var1463 /* : nullable Object */;
val* var_recvval1464 /* var recvval: nullable Object */;
static val* varonce1465;
val* var1466 /* : String */;
char* var1467 /* : NativeString */;
val* var1468 /* : FlatString */;
short int var1469 /* : Bool */;
val* var1470 /* : nullable Object */;
val* var1471 /* : nullable Object */;
short int var1472 /* : Bool */;
int cltype1473;
int idtype1474;
const char* var_class_name1475;
val* var_a11476 /* var a1: Buffer */;
short int var1477 /* : Bool */;
int cltype1478;
int idtype1479;
const char* var_class_name1480;
char* var1481 /* : NativeString */;
val* var1482 /* : nullable Object */;
long var1483 /* : Int */;
long var1484 /* : Int */;
val* var1485 /* : Instance */;
static val* varonce1486;
val* var1487 /* : String */;
char* var1488 /* : NativeString */;
val* var1489 /* : FlatString */;
short int var1490 /* : Bool */;
val* var1491 /* : nullable Object */;
val* var1492 /* : nullable Object */;
short int var1493 /* : Bool */;
int cltype1494;
int idtype1495;
const char* var_class_name1496;
val* var_a11497 /* var a1: Buffer */;
char* var1498 /* : NativeString */;
long var1499 /* : Int */;
char* var1500 /* : NativeString */;
char* var1502 /* : NativeString */;
char* var_ns1503 /* var ns: NativeString */;
short int var1504 /* : Bool */;
int cltype1505;
int idtype1506;
const char* var_class_name1507;
val* var1508 /* : nullable Object */;
long var1509 /* : Int */;
long var1510 /* : Int */;
long var_len /* var len: Int */;
val* var1511 /* : FlatString */;
val* var1512 /* : Instance */;
static val* varonce1513;
val* var1514 /* : String */;
char* var1515 /* : NativeString */;
val* var1516 /* : FlatString */;
short int var1517 /* : Bool */;
short int var1518 /* : Bool */;
int cltype1519;
int idtype1520;
const char* var_class_name1521;
long var1522 /* : Int */;
static val* varonce1523;
val* var1524 /* : String */;
char* var1525 /* : NativeString */;
val* var1526 /* : FlatString */;
short int var1527 /* : Bool */;
short int var1528 /* : Bool */;
int cltype1529;
int idtype1530;
const char* var_class_name1531;
long var1532 /* : Int */;
val* var1533 /* : Instance */;
static val* varonce1534;
val* var1535 /* : String */;
char* var1536 /* : NativeString */;
val* var1537 /* : FlatString */;
short int var1538 /* : Bool */;
short int var1539 /* : Bool */;
int cltype1540;
int idtype1541;
const char* var_class_name1542;
val* var1543 /* : nullable Object */;
long var1544 /* : Int */;
val* var1545 /* : nullable Object */;
long var1546 /* : Int */;
long var1547 /* : Int */;
val* var1548 /* : Instance */;
static val* varonce1549;
val* var1550 /* : String */;
char* var1551 /* : NativeString */;
val* var1552 /* : FlatString */;
short int var1553 /* : Bool */;
val* var1554 /* : Array[String] */;
long var1555 /* : Int */;
val* var1556 /* : Instance */;
static val* varonce1557;
val* var1558 /* : String */;
char* var1559 /* : NativeString */;
val* var1560 /* : FlatString */;
short int var1561 /* : Bool */;
val* var1562 /* : Array[String] */;
val* var1563 /* : nullable Object */;
long var1564 /* : Int */;
val* var1565 /* : nullable Object */;
val* var_txt1566 /* var txt: String */;
val* var1567 /* : Instance */;
static val* varonce1568;
val* var1569 /* : String */;
char* var1570 /* : NativeString */;
val* var1571 /* : FlatString */;
short int var1572 /* : Bool */;
val* var1573 /* : Array[String] */;
long var1574 /* : Int */;
val* var1575 /* : Instance */;
static val* varonce1576;
val* var1577 /* : String */;
char* var1578 /* : NativeString */;
val* var1579 /* : FlatString */;
short int var1580 /* : Bool */;
val* var1581 /* : Array[String] */;
val* var1582 /* : nullable Object */;
long var1583 /* : Int */;
val* var1584 /* : nullable Object */;
val* var_txt1585 /* var txt: String */;
val* var1586 /* : Instance */;
static val* varonce1587;
val* var1588 /* : String */;
char* var1589 /* : NativeString */;
val* var1590 /* : FlatString */;
short int var1591 /* : Bool */;
long var1592 /* : Int */;
val* var1593 /* : Instance */;
static val* varonce1594;
val* var1595 /* : String */;
char* var1596 /* : NativeString */;
val* var1597 /* : FlatString */;
short int var1598 /* : Bool */;
val* var1599 /* : Sys */;
static val* varonce1600;
val* var1601 /* : String */;
char* var1602 /* : NativeString */;
val* var1603 /* : FlatString */;
short int var1604 /* : Bool */;
val* var1605 /* : Sys */;
val* var1606 /* : nullable Object */;
long var1607 /* : Int */;
static val* varonce1608;
val* var1609 /* : String */;
char* var1610 /* : NativeString */;
val* var1611 /* : FlatString */;
short int var1612 /* : Bool */;
val* var1613 /* : Sys */;
val* var1614 /* : nullable Object */;
double var1615 /* : Float */;
val* var1616 /* : nullable Object */;
double var1617 /* : Float */;
double var1618 /* : Float */;
val* var1619 /* : Instance */;
static val* varonce1620;
val* var1621 /* : String */;
char* var1622 /* : NativeString */;
val* var1623 /* : FlatString */;
short int var1624 /* : Bool */;
val* var1625 /* : Sys */;
double var1626 /* : Float */;
val* var1627 /* : Instance */;
static val* varonce1628;
val* var1629 /* : String */;
char* var1630 /* : NativeString */;
val* var1631 /* : FlatString */;
short int var1632 /* : Bool */;
val* var1633 /* : nullable Object */;
long var1634 /* : Int */;
val* var1635 /* : nullable Object */;
long var1636 /* : Int */;
long var1637 /* : Int */;
val* var1638 /* : Instance */;
static val* varonce1639;
val* var1640 /* : String */;
char* var1641 /* : NativeString */;
val* var1642 /* : FlatString */;
short int var1643 /* : Bool */;
val* var1644 /* : nullable Object */;
long var1645 /* : Int */;
long var1646 /* : Int */;
val* var1647 /* : Instance */;
static val* varonce1648;
val* var1649 /* : String */;
char* var1650 /* : NativeString */;
val* var1651 /* : FlatString */;
short int var1652 /* : Bool */;
val* var1653 /* : nullable Object */;
long var1654 /* : Int */;
val* var1655 /* : nullable Object */;
long var1656 /* : Int */;
long var1657 /* : Int */;
val* var1658 /* : Instance */;
static val* varonce1659;
val* var1660 /* : String */;
char* var1661 /* : NativeString */;
val* var1662 /* : FlatString */;
short int var1663 /* : Bool */;
val* var1664 /* : nullable Object */;
long var1665 /* : Int */;
val* var1666 /* : nullable Object */;
long var1667 /* : Int */;
long var1668 /* : Int */;
val* var1669 /* : Instance */;
static val* varonce1670;
val* var1671 /* : String */;
char* var1672 /* : NativeString */;
val* var1673 /* : FlatString */;
short int var1674 /* : Bool */;
val* var1675 /* : Sys */;
val* var1676 /* : String */;
val* var1677 /* : Instance */;
static val* varonce1678;
val* var1679 /* : String */;
char* var1680 /* : NativeString */;
val* var1681 /* : FlatString */;
short int var1682 /* : Bool */;
val* var1683 /* : Sys */;
val* var1685 /* : Sys */;
long var1686 /* : Int */;
val* var1687 /* : Instance */;
static val* varonce1688;
val* var1689 /* : String */;
char* var1690 /* : NativeString */;
val* var1691 /* : FlatString */;
short int var1692 /* : Bool */;
val* var1693 /* : nullable Object */;
val* var_recv1694 /* var recv: Instance */;
short int var1695 /* : Bool */;
int cltype1696;
int idtype1697;
val* var1698 /* : nullable Object */;
short int var1699 /* : Bool */;
val* var1700 /* : Instance */;
val* var1701 /* : Instance */;
val* var1702 /* : MutableInstance */;
var_v = p0;
var_mpropdef = p1;
var_args = p2;
{
var1 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MMethodDef>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__name]))(var1); /* name on <var1:MProperty(MMethod)>*/
}
var_pname = var2;
{
var3 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MMethodDef>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__model__MClassDef__mclass]))(var3); /* mclass on <var3:MClassDef>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__model_base__MEntity__name]))(var4); /* name on <var4:MClass>*/
}
var_cname = var5;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "output";
var8 = standard___standard__NativeString___to_s_with_length(var7, 6l);
var6 = var8;
varonce = var6;
}
{
var9 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var6); /* == on <var_pname:String>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
var_recv = var10;
{
var11 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var_recv); /* val on <var_recv:Instance>*/
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 803);
fatal_exit(1);
} else {
((void(*)(val* self))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_standard__kernel__Object__output]))(var11); /* output on <var11:nullable Object>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "object_id";
var15 = standard___standard__NativeString___to_s_with_length(var14, 9l);
var13 = var15;
varonce12 = var13;
}
{
var16 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var13); /* == on <var_pname:String>*/
}
if (var16){
{
var17 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
var_recv18 = var17;
/* <var_recv18:Instance> isa PrimitiveInstance[Object] */
cltype = type_nit__PrimitiveInstance__standard__Object.color;
idtype = type_nit__PrimitiveInstance__standard__Object.id;
if(cltype >= var_recv18->type->table_size) {
var19 = 0;
} else {
var19 = var_recv18->type->type_table[cltype] == idtype;
}
if (var19){
{
var20 = ((val*(*)(val* self))(var_recv18->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var_recv18); /* val on <var_recv18:Instance(PrimitiveInstance[Object])>*/
}
{
var21 = ((long(*)(val* self))((((long)var20&3)?class_info[((long)var20&3)]:var20->class)->vft[COLOR_standard__kernel__Object__object_id]))(var20); /* object_id on <var20:nullable Object(Object)>*/
}
{
var22 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var21); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var22;
goto RET_LABEL;
} else {
{
var23 = ((long(*)(val* self))(var_recv18->class->vft[COLOR_standard__kernel__Object__object_id]))(var_recv18); /* object_id on <var_recv18:Instance>*/
}
{
var24 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var23); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var24;
goto RET_LABEL;
}
} else {
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "output_class_name";
var28 = standard___standard__NativeString___to_s_with_length(var27, 17l);
var26 = var28;
varonce25 = var26;
}
{
var29 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var26); /* == on <var_pname:String>*/
}
if (var29){
{
var30 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
var_recv31 = var30;
var32 = glob_sys;
{
var33 = ((val*(*)(val* self))(var_recv31->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv31); /* mtype on <var_recv31:Instance>*/
}
{
((void(*)(val* self, val* p0))(var32->class->vft[COLOR_standard__file__Sys__print]))(var32, var33); /* print on <var32:Sys>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "native_class_name";
var37 = standard___standard__NativeString___to_s_with_length(var36, 17l);
var35 = var37;
varonce34 = var35;
}
{
var38 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var35); /* == on <var_pname:String>*/
}
if (var38){
{
var39 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
var_recv40 = var39;
{
var41 = ((val*(*)(val* self))(var_recv40->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv40); /* mtype on <var_recv40:Instance>*/
}
{
var42 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__Object__to_s]))(var41); /* to_s on <var41:MType>*/
}
var_txt = var42;
{
var43 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var_txt); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var43;
goto RET_LABEL;
} else {
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "==";
var47 = standard___standard__NativeString___to_s_with_length(var46, 2l);
var45 = var47;
varonce44 = var45;
}
{
var48 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var45); /* == on <var_pname:String>*/
}
if (var48){
{
var49 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var50 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var51 = ((short int(*)(val* self, val* p0))(var49->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var49, var50); /* == on <var49:nullable Object(Instance)>*/
}
{
var52 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var51); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var52;
goto RET_LABEL;
} else {
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "!=";
var56 = standard___standard__NativeString___to_s_with_length(var55, 2l);
var54 = var56;
varonce53 = var54;
}
{
var57 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var54); /* == on <var_pname:String>*/
}
if (var57){
{
var58 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var59 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var60 = ((short int(*)(val* self, val* p0))(var58->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var58, var59); /* != on <var58:nullable Object(Instance)>*/
}
{
var61 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var60); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var61;
goto RET_LABEL;
} else {
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "is_same_type";
var65 = standard___standard__NativeString___to_s_with_length(var64, 12l);
var63 = var65;
varonce62 = var63;
}
{
var66 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var63); /* == on <var_pname:String>*/
}
if (var66){
{
var67 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var68 = ((val*(*)(val* self))(var67->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var67); /* mtype on <var67:nullable Object(Instance)>*/
}
{
var69 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var70 = ((val*(*)(val* self))(var69->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var69); /* mtype on <var69:nullable Object(Instance)>*/
}
{
var71 = ((short int(*)(val* self, val* p0))(var68->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var68, var70); /* == on <var68:MType>*/
}
{
var72 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var71); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var72;
goto RET_LABEL;
} else {
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "is_same_instance";
var76 = standard___standard__NativeString___to_s_with_length(var75, 16l);
var74 = var76;
varonce73 = var74;
}
{
var77 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var74); /* == on <var_pname:String>*/
}
if (var77){
{
var78 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var79 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var80 = ((short int(*)(val* self, val* p0))(var78->class->vft[COLOR_nit__naive_interpreter__Instance__eq_is]))(var78, var79); /* eq_is on <var78:nullable Object(Instance)>*/
}
{
var81 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var80); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var81;
goto RET_LABEL;
} else {
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "exit";
var85 = standard___standard__NativeString___to_s_with_length(var84, 4l);
var83 = var85;
varonce82 = var83;
}
{
var86 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var83); /* == on <var_pname:String>*/
}
if (var86){
var87 = glob_sys;
{
var88 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var89 = ((long(*)(val* self))(var88->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var88); /* to_i on <var88:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Sys#exit (var87,var89) on <var87:Sys> */
exit(var89);
RET_LABEL90:(void)0;
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 831);
fatal_exit(1);
} else {
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "buffer_mode_full";
var94 = standard___standard__NativeString___to_s_with_length(var93, 16l);
var92 = var94;
varonce91 = var92;
}
{
var95 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var92); /* == on <var_pname:String>*/
}
if (var95){
{
{ /* Inline kernel#Object#sys (self) on <self:AMethPropdef> */
var98 = glob_sys;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
var99 = ((long(*)(val* self))(var96->class->vft[COLOR_standard__file__Sys__buffer_mode_full]))(var96); /* buffer_mode_full on <var96:Sys>*/
}
{
var100 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var99); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var100;
goto RET_LABEL;
} else {
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "buffer_mode_line";
var104 = standard___standard__NativeString___to_s_with_length(var103, 16l);
var102 = var104;
varonce101 = var102;
}
{
var105 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var102); /* == on <var_pname:String>*/
}
if (var105){
{
{ /* Inline kernel#Object#sys (self) on <self:AMethPropdef> */
var108 = glob_sys;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
var109 = ((long(*)(val* self))(var106->class->vft[COLOR_standard__file__Sys__buffer_mode_line]))(var106); /* buffer_mode_line on <var106:Sys>*/
}
{
var110 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var109); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var110;
goto RET_LABEL;
} else {
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "buffer_mode_none";
var114 = standard___standard__NativeString___to_s_with_length(var113, 16l);
var112 = var114;
varonce111 = var112;
}
{
var115 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var112); /* == on <var_pname:String>*/
}
if (var115){
{
{ /* Inline kernel#Object#sys (self) on <self:AMethPropdef> */
var118 = glob_sys;
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
var119 = ((long(*)(val* self))(var116->class->vft[COLOR_standard__file__Sys__buffer_mode_none]))(var116); /* buffer_mode_none on <var116:Sys>*/
}
{
var120 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var119); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var120;
goto RET_LABEL;
} else {
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "sys";
var124 = standard___standard__NativeString___to_s_with_length(var123, 3l);
var122 = var124;
varonce121 = var122;
}
{
var125 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var122); /* == on <var_pname:String>*/
}
if (var125){
{
var126 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainobj]))(var_v); /* mainobj on <var_v:NaiveInterpreter>*/
}
var = var126;
goto RET_LABEL;
} else {
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "Int";
var130 = standard___standard__NativeString___to_s_with_length(var129, 3l);
var128 = var130;
varonce127 = var128;
}
{
var131 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var128); /* == on <var_cname:String>*/
}
if (var131){
{
var132 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var133 = ((long(*)(val* self))(var132->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var132); /* to_i on <var132:nullable Object(Instance)>*/
}
var_recvval = var133;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "unary -";
var137 = standard___standard__NativeString___to_s_with_length(var136, 7l);
var135 = var137;
varonce134 = var135;
}
{
var138 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var135); /* == on <var_pname:String>*/
}
if (var138){
{
var139 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var140 = ((long(*)(val* self))(var139->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var139); /* to_i on <var139:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#unary - (var140) on <var140:Int> */
var143 = -var140;
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
var144 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var141); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var144;
goto RET_LABEL;
} else {
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "unary +";
var148 = standard___standard__NativeString___to_s_with_length(var147, 7l);
var146 = var148;
varonce145 = var146;
}
{
var149 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var146); /* == on <var_pname:String>*/
}
if (var149){
{
var150 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
var = var150;
goto RET_LABEL;
} else {
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "+";
var154 = standard___standard__NativeString___to_s_with_length(var153, 1l);
var152 = var154;
varonce151 = var152;
}
{
var155 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var152); /* == on <var_pname:String>*/
}
if (var155){
{
var156 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var157 = ((long(*)(val* self))(var156->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var156); /* to_i on <var156:nullable Object(Instance)>*/
}
{
var158 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var159 = ((long(*)(val* self))(var158->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var158); /* to_i on <var158:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#+ (var157,var159) on <var157:Int> */
/* Covariant cast for argument 0 (i) <var159:Int> isa OTHER */
/* <var159:Int> isa OTHER */
var162 = 1; /* easy <var159:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var165 = var157 + var159;
var160 = var165;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
{
var166 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var160); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var166;
goto RET_LABEL;
} else {
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "-";
var170 = standard___standard__NativeString___to_s_with_length(var169, 1l);
var168 = var170;
varonce167 = var168;
}
{
var171 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var168); /* == on <var_pname:String>*/
}
if (var171){
{
var172 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var173 = ((long(*)(val* self))(var172->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var172); /* to_i on <var172:nullable Object(Instance)>*/
}
{
var174 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var175 = ((long(*)(val* self))(var174->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var174); /* to_i on <var174:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#- (var173,var175) on <var173:Int> */
/* Covariant cast for argument 0 (i) <var175:Int> isa OTHER */
/* <var175:Int> isa OTHER */
var178 = 1; /* easy <var175:Int> isa OTHER*/
if (unlikely(!var178)) {
var_class_name181 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name181);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var182 = var173 - var175;
var176 = var182;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
{
var183 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var176); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var183;
goto RET_LABEL;
} else {
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "*";
var187 = standard___standard__NativeString___to_s_with_length(var186, 1l);
var185 = var187;
varonce184 = var185;
}
{
var188 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var185); /* == on <var_pname:String>*/
}
if (var188){
{
var189 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var190 = ((long(*)(val* self))(var189->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var189); /* to_i on <var189:nullable Object(Instance)>*/
}
{
var191 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var192 = ((long(*)(val* self))(var191->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var191); /* to_i on <var191:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#* (var190,var192) on <var190:Int> */
/* Covariant cast for argument 0 (i) <var192:Int> isa OTHER */
/* <var192:Int> isa OTHER */
var195 = 1; /* easy <var192:Int> isa OTHER*/
if (unlikely(!var195)) {
var_class_name198 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name198);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var199 = var190 * var192;
var193 = var199;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
}
{
var200 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var193); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var200;
goto RET_LABEL;
} else {
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = "%";
var204 = standard___standard__NativeString___to_s_with_length(var203, 1l);
var202 = var204;
varonce201 = var202;
}
{
var205 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var202); /* == on <var_pname:String>*/
}
if (var205){
{
var206 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var207 = ((long(*)(val* self))(var206->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var206); /* to_i on <var206:nullable Object(Instance)>*/
}
{
var208 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var209 = ((long(*)(val* self))(var208->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var208); /* to_i on <var208:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#% (var207,var209) on <var207:Int> */
var212 = var207 % var209;
var210 = var212;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
{
var213 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var210); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var213;
goto RET_LABEL;
} else {
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "/";
var217 = standard___standard__NativeString___to_s_with_length(var216, 1l);
var215 = var217;
varonce214 = var215;
}
{
var218 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var215); /* == on <var_pname:String>*/
}
if (var218){
{
var219 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var220 = ((long(*)(val* self))(var219->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var219); /* to_i on <var219:nullable Object(Instance)>*/
}
{
var221 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var222 = ((long(*)(val* self))(var221->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var221); /* to_i on <var221:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#/ (var220,var222) on <var220:Int> */
/* Covariant cast for argument 0 (i) <var222:Int> isa OTHER */
/* <var222:Int> isa OTHER */
var225 = 1; /* easy <var222:Int> isa OTHER*/
if (unlikely(!var225)) {
var_class_name228 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name228);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var229 = var220 / var222;
var223 = var229;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
}
{
var230 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var223); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var230;
goto RET_LABEL;
} else {
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = "<";
var234 = standard___standard__NativeString___to_s_with_length(var233, 1l);
var232 = var234;
varonce231 = var232;
}
{
var235 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var232); /* == on <var_pname:String>*/
}
if (var235){
{
var236 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var237 = ((long(*)(val* self))(var236->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var236); /* to_i on <var236:nullable Object(Instance)>*/
}
{
var238 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var239 = ((long(*)(val* self))(var238->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var238); /* to_i on <var238:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#< (var237,var239) on <var237:Int> */
/* Covariant cast for argument 0 (i) <var239:Int> isa OTHER */
/* <var239:Int> isa OTHER */
var242 = 1; /* easy <var239:Int> isa OTHER*/
if (unlikely(!var242)) {
var_class_name245 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name245);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var246 = var237 < var239;
var240 = var246;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
}
{
var247 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var240); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var247;
goto RET_LABEL;
} else {
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = ">";
var251 = standard___standard__NativeString___to_s_with_length(var250, 1l);
var249 = var251;
varonce248 = var249;
}
{
var252 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var249); /* == on <var_pname:String>*/
}
if (var252){
{
var253 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var254 = ((long(*)(val* self))(var253->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var253); /* to_i on <var253:nullable Object(Instance)>*/
}
{
var255 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var256 = ((long(*)(val* self))(var255->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var255); /* to_i on <var255:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#> (var254,var256) on <var254:Int> */
/* Covariant cast for argument 0 (i) <var256:Int> isa OTHER */
/* <var256:Int> isa OTHER */
var259 = 1; /* easy <var256:Int> isa OTHER*/
if (unlikely(!var259)) {
var_class_name262 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name262);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var263 = var254 > var256;
var257 = var263;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
}
{
var264 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var257); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var264;
goto RET_LABEL;
} else {
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "<=";
var268 = standard___standard__NativeString___to_s_with_length(var267, 2l);
var266 = var268;
varonce265 = var266;
}
{
var269 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var266); /* == on <var_pname:String>*/
}
if (var269){
{
var270 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var271 = ((long(*)(val* self))(var270->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var270); /* to_i on <var270:nullable Object(Instance)>*/
}
{
var272 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var273 = ((long(*)(val* self))(var272->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var272); /* to_i on <var272:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#<= (var271,var273) on <var271:Int> */
/* Covariant cast for argument 0 (i) <var273:Int> isa OTHER */
/* <var273:Int> isa OTHER */
var276 = 1; /* easy <var273:Int> isa OTHER*/
if (unlikely(!var276)) {
var_class_name279 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name279);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var280 = var271 <= var273;
var274 = var280;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
}
{
var281 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var274); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var281;
goto RET_LABEL;
} else {
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = ">=";
var285 = standard___standard__NativeString___to_s_with_length(var284, 2l);
var283 = var285;
varonce282 = var283;
}
{
var286 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var283); /* == on <var_pname:String>*/
}
if (var286){
{
var287 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var288 = ((long(*)(val* self))(var287->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var287); /* to_i on <var287:nullable Object(Instance)>*/
}
{
var289 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var290 = ((long(*)(val* self))(var289->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var289); /* to_i on <var289:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#>= (var288,var290) on <var288:Int> */
/* Covariant cast for argument 0 (i) <var290:Int> isa OTHER */
/* <var290:Int> isa OTHER */
var293 = 1; /* easy <var290:Int> isa OTHER*/
if (unlikely(!var293)) {
var_class_name296 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name296);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var297 = var288 >= var290;
var291 = var297;
goto RET_LABEL292;
RET_LABEL292:(void)0;
}
}
{
var298 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var291); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var298;
goto RET_LABEL;
} else {
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = "<=>";
var302 = standard___standard__NativeString___to_s_with_length(var301, 3l);
var300 = var302;
varonce299 = var300;
}
{
var303 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var300); /* == on <var_pname:String>*/
}
if (var303){
{
var304 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var305 = ((long(*)(val* self))(var304->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var304); /* to_i on <var304:nullable Object(Instance)>*/
}
{
var306 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var307 = ((long(*)(val* self))(var306->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var306); /* to_i on <var306:nullable Object(Instance)>*/
}
var308 = standard___standard__Int___Comparable___60d_61d_62d(var305, var307);
{
var309 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var308); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var309;
goto RET_LABEL;
} else {
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "ascii";
var313 = standard___standard__NativeString___to_s_with_length(var312, 5l);
var311 = var313;
varonce310 = var311;
}
{
var314 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var311); /* == on <var_pname:String>*/
}
if (var314){
{
var315 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var316 = ((long(*)(val* self))(var315->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var315); /* to_i on <var315:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#ascii (var316) on <var316:Int> */
var319 = var316;
var317 = var319;
goto RET_LABEL318;
RET_LABEL318:(void)0;
}
}
{
var320 = ((val*(*)(val* self, char p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__char_instance]))(var_v, var317); /* char_instance on <var_v:NaiveInterpreter>*/
}
var = var320;
goto RET_LABEL;
} else {
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "to_f";
var324 = standard___standard__NativeString___to_s_with_length(var323, 4l);
var322 = var324;
varonce321 = var322;
}
{
var325 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var322); /* == on <var_pname:String>*/
}
if (var325){
{
var326 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var327 = ((long(*)(val* self))(var326->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var326); /* to_i on <var326:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#to_f (var327) on <var327:Int> */
var330 = (double)var327;
var328 = var330;
goto RET_LABEL329;
RET_LABEL329:(void)0;
}
}
{
var331 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var328); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var331;
goto RET_LABEL;
} else {
if (likely(varonce332!=NULL)) {
var333 = varonce332;
} else {
var334 = "lshift";
var335 = standard___standard__NativeString___to_s_with_length(var334, 6l);
var333 = var335;
varonce332 = var333;
}
{
var336 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var333); /* == on <var_pname:String>*/
}
if (var336){
{
var337 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var338 = ((long(*)(val* self))(var337->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var337); /* to_i on <var337:nullable Object(Instance)>*/
}
{
var339 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var340 = ((long(*)(val* self))(var339->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var339); /* to_i on <var339:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#lshift (var338,var340) on <var338:Int> */
var343 = var338 << var340;
var341 = var343;
goto RET_LABEL342;
RET_LABEL342:(void)0;
}
}
{
var344 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var341); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var344;
goto RET_LABEL;
} else {
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "rshift";
var348 = standard___standard__NativeString___to_s_with_length(var347, 6l);
var346 = var348;
varonce345 = var346;
}
{
var349 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var346); /* == on <var_pname:String>*/
}
if (var349){
{
var350 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var351 = ((long(*)(val* self))(var350->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var350); /* to_i on <var350:nullable Object(Instance)>*/
}
{
var352 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var353 = ((long(*)(val* self))(var352->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var352); /* to_i on <var352:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#rshift (var351,var353) on <var351:Int> */
var356 = var351 >> var353;
var354 = var356;
goto RET_LABEL355;
RET_LABEL355:(void)0;
}
}
{
var357 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var354); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var357;
goto RET_LABEL;
} else {
if (likely(varonce358!=NULL)) {
var359 = varonce358;
} else {
var360 = "rand";
var361 = standard___standard__NativeString___to_s_with_length(var360, 4l);
var359 = var361;
varonce358 = var359;
}
{
var362 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var359); /* == on <var_pname:String>*/
}
if (var362){
var363 = standard__math___Int___rand(var_recvval);
var_res = var363;
{
var364 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var_res); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var364;
goto RET_LABEL;
} else {
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "bin_and";
var368 = standard___standard__NativeString___to_s_with_length(var367, 7l);
var366 = var368;
varonce365 = var366;
}
{
var369 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var366); /* == on <var_pname:String>*/
}
if (var369){
{
var370 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var371 = ((long(*)(val* self))(var370->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var370); /* to_i on <var370:nullable Object(Instance)>*/
}
{
var372 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var373 = ((long(*)(val* self))(var372->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var372); /* to_i on <var372:nullable Object(Instance)>*/
}
var374 = standard__math___Int___bin_and(var371, var373);
{
var375 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var374); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var375;
goto RET_LABEL;
} else {
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = "bin_or";
var379 = standard___standard__NativeString___to_s_with_length(var378, 6l);
var377 = var379;
varonce376 = var377;
}
{
var380 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var377); /* == on <var_pname:String>*/
}
if (var380){
{
var381 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var382 = ((long(*)(val* self))(var381->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var381); /* to_i on <var381:nullable Object(Instance)>*/
}
{
var383 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var384 = ((long(*)(val* self))(var383->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var383); /* to_i on <var383:nullable Object(Instance)>*/
}
var385 = standard__math___Int___bin_or(var382, var384);
{
var386 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var385); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var386;
goto RET_LABEL;
} else {
if (likely(varonce387!=NULL)) {
var388 = varonce387;
} else {
var389 = "bin_xor";
var390 = standard___standard__NativeString___to_s_with_length(var389, 7l);
var388 = var390;
varonce387 = var388;
}
{
var391 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var388); /* == on <var_pname:String>*/
}
if (var391){
{
var392 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var393 = ((long(*)(val* self))(var392->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var392); /* to_i on <var392:nullable Object(Instance)>*/
}
{
var394 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var395 = ((long(*)(val* self))(var394->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var394); /* to_i on <var394:nullable Object(Instance)>*/
}
var396 = standard__math___Int___bin_xor(var393, var395);
{
var397 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var396); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var397;
goto RET_LABEL;
} else {
if (likely(varonce398!=NULL)) {
var399 = varonce398;
} else {
var400 = "bin_not";
var401 = standard___standard__NativeString___to_s_with_length(var400, 7l);
var399 = var401;
varonce398 = var399;
}
{
var402 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var399); /* == on <var_pname:String>*/
}
if (var402){
{
var403 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var404 = ((long(*)(val* self))(var403->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var403); /* to_i on <var403:nullable Object(Instance)>*/
}
var405 = standard__math___Int___bin_not(var404);
{
var406 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var405); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var406;
goto RET_LABEL;
} else {
if (likely(varonce407!=NULL)) {
var408 = varonce407;
} else {
var409 = "int_to_s_len";
var410 = standard___standard__NativeString___to_s_with_length(var409, 12l);
var408 = var410;
varonce407 = var408;
}
{
var411 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var408); /* == on <var_pname:String>*/
}
if (var411){
var412 = standard__string___Int___Object__to_s(var_recvval);
{
var413 = ((long(*)(val* self))(var412->class->vft[COLOR_standard__string__Text__length]))(var412); /* length on <var412:String>*/
}
{
var414 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var413); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var414;
goto RET_LABEL;
} else {
if (likely(varonce415!=NULL)) {
var416 = varonce415;
} else {
var417 = "native_int_to_s";
var418 = standard___standard__NativeString___to_s_with_length(var417, 15l);
var416 = var418;
varonce415 = var416;
}
{
var419 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var416); /* == on <var_pname:String>*/
}
if (var419){
var420 = standard__string___Int___Object__to_s(var_recvval);
var_s = var420;
{
var421 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var422 = ((val*(*)(val* self))(var421->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var421); /* val on <var421:nullable Object(Instance)>*/
}
/* <var422:nullable Object> isa Buffer */
cltype424 = type_standard__Buffer.color;
idtype425 = type_standard__Buffer.id;
if(var422 == NULL) {
var423 = 0;
} else {
if(cltype424 >= (((long)var422&3)?type_info[((long)var422&3)]:var422->type)->table_size) {
var423 = 0;
} else {
var423 = (((long)var422&3)?type_info[((long)var422&3)]:var422->type)->type_table[cltype424] == idtype425;
}
}
if (unlikely(!var423)) {
var_class_name426 = var422 == NULL ? "null" : (((long)var422&3)?type_info[((long)var422&3)]:var422->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Buffer", var_class_name426);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 889);
fatal_exit(1);
}
var_srecv = var422;
{
((void(*)(val* self))(var_srecv->class->vft[COLOR_standard__string__Buffer__clear]))(var_srecv); /* clear on <var_srecv:Buffer>*/
}
{
((void(*)(val* self, val* p0))(var_srecv->class->vft[COLOR_standard__string__Buffer__append]))(var_srecv, var_s); /* append on <var_srecv:Buffer>*/
}
{
((void(*)(val* self, char p0))(var_srecv->class->vft[COLOR_standard__string__Buffer__add]))(var_srecv, '\000'); /* add on <var_srecv:Buffer>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (likely(varonce427!=NULL)) {
var428 = varonce427;
} else {
var429 = "strerror_ext";
var430 = standard___standard__NativeString___to_s_with_length(var429, 12l);
var428 = var430;
varonce427 = var428;
}
{
var431 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var428); /* == on <var_pname:String>*/
}
if (var431){
var432 = standard__string___Int___strerror(var_recvval);
{
var433 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var432); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var433;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce434!=NULL)) {
var435 = varonce434;
} else {
var436 = "Char";
var437 = standard___standard__NativeString___to_s_with_length(var436, 4l);
var435 = var437;
varonce434 = var435;
}
{
var438 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var435); /* == on <var_cname:String>*/
}
if (var438){
{
var439 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var440 = ((val*(*)(val* self))(var439->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var439); /* val on <var439:nullable Object(Instance)>*/
}
/* <var440:nullable Object> isa Char */
cltype442 = type_standard__Char.color;
idtype443 = type_standard__Char.id;
if(var440 == NULL) {
var441 = 0;
} else {
if(cltype442 >= (((long)var440&3)?type_info[((long)var440&3)]:var440->type)->table_size) {
var441 = 0;
} else {
var441 = (((long)var440&3)?type_info[((long)var440&3)]:var440->type)->type_table[cltype442] == idtype443;
}
}
if (unlikely(!var441)) {
var_class_name444 = var440 == NULL ? "null" : (((long)var440&3)?type_info[((long)var440&3)]:var440->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name444);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 898);
fatal_exit(1);
}
var445 = (char)((long)(var440)>>2);
var_recv446 = var445;
if (likely(varonce447!=NULL)) {
var448 = varonce447;
} else {
var449 = "ascii";
var450 = standard___standard__NativeString___to_s_with_length(var449, 5l);
var448 = var450;
varonce447 = var448;
}
{
var451 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var448); /* == on <var_pname:String>*/
}
if (var451){
{
{ /* Inline kernel#Char#ascii (var_recv446) on <var_recv446:Char> */
var454 = (unsigned char)var_recv446;
var452 = var454;
goto RET_LABEL453;
RET_LABEL453:(void)0;
}
}
{
var455 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var452); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var455;
goto RET_LABEL;
} else {
if (likely(varonce456!=NULL)) {
var457 = varonce456;
} else {
var458 = "successor";
var459 = standard___standard__NativeString___to_s_with_length(var458, 9l);
var457 = var459;
varonce456 = var457;
}
{
var460 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var457); /* == on <var_pname:String>*/
}
if (var460){
{
var461 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var462 = ((long(*)(val* self))(var461->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var461); /* to_i on <var461:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Char#successor (var_recv446,var462) on <var_recv446:Char> */
var465 = var_recv446 + var462;
var463 = var465;
goto RET_LABEL464;
RET_LABEL464:(void)0;
}
}
{
var466 = ((val*(*)(val* self, char p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__char_instance]))(var_v, var463); /* char_instance on <var_v:NaiveInterpreter>*/
}
var = var466;
goto RET_LABEL;
} else {
if (likely(varonce467!=NULL)) {
var468 = varonce467;
} else {
var469 = "predecessor";
var470 = standard___standard__NativeString___to_s_with_length(var469, 11l);
var468 = var470;
varonce467 = var468;
}
{
var471 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var468); /* == on <var_pname:String>*/
}
if (var471){
{
var472 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var473 = ((long(*)(val* self))(var472->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var472); /* to_i on <var472:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Char#predecessor (var_recv446,var473) on <var_recv446:Char> */
var476 = var_recv446 - var473;
var474 = var476;
goto RET_LABEL475;
RET_LABEL475:(void)0;
}
}
{
var477 = ((val*(*)(val* self, char p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__char_instance]))(var_v, var474); /* char_instance on <var_v:NaiveInterpreter>*/
}
var = var477;
goto RET_LABEL;
} else {
if (likely(varonce478!=NULL)) {
var479 = varonce478;
} else {
var480 = "<";
var481 = standard___standard__NativeString___to_s_with_length(var480, 1l);
var479 = var481;
varonce478 = var479;
}
{
var482 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var479); /* == on <var_pname:String>*/
}
if (var482){
{
var483 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var484 = ((val*(*)(val* self))(var483->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var483); /* val on <var483:nullable Object(Instance)>*/
}
/* <var484:nullable Object> isa Char */
cltype486 = type_standard__Char.color;
idtype487 = type_standard__Char.id;
if(var484 == NULL) {
var485 = 0;
} else {
if(cltype486 >= (((long)var484&3)?type_info[((long)var484&3)]:var484->type)->table_size) {
var485 = 0;
} else {
var485 = (((long)var484&3)?type_info[((long)var484&3)]:var484->type)->type_table[cltype486] == idtype487;
}
}
if (unlikely(!var485)) {
var_class_name488 = var484 == NULL ? "null" : (((long)var484&3)?type_info[((long)var484&3)]:var484->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name488);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 906);
fatal_exit(1);
}
{
{ /* Inline kernel#Char#< (var_recv446,var484) on <var_recv446:Char> */
/* Covariant cast for argument 0 (i) <var484:nullable Object(Char)> isa OTHER */
/* <var484:nullable Object(Char)> isa OTHER */
var491 = 1; /* easy <var484:nullable Object(Char)> isa OTHER*/
if (unlikely(!var491)) {
var_class_name494 = var484 == NULL ? "null" : (((long)var484&3)?type_info[((long)var484&3)]:var484->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name494);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 611);
fatal_exit(1);
}
var495 = (char)((long)(var484)>>2);
var496 = var_recv446 < var495;
var489 = var496;
goto RET_LABEL490;
RET_LABEL490:(void)0;
}
}
{
var497 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var489); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var497;
goto RET_LABEL;
} else {
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = ">";
var501 = standard___standard__NativeString___to_s_with_length(var500, 1l);
var499 = var501;
varonce498 = var499;
}
{
var502 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var499); /* == on <var_pname:String>*/
}
if (var502){
{
var503 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var504 = ((val*(*)(val* self))(var503->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var503); /* val on <var503:nullable Object(Instance)>*/
}
/* <var504:nullable Object> isa Char */
cltype506 = type_standard__Char.color;
idtype507 = type_standard__Char.id;
if(var504 == NULL) {
var505 = 0;
} else {
if(cltype506 >= (((long)var504&3)?type_info[((long)var504&3)]:var504->type)->table_size) {
var505 = 0;
} else {
var505 = (((long)var504&3)?type_info[((long)var504&3)]:var504->type)->type_table[cltype506] == idtype507;
}
}
if (unlikely(!var505)) {
var_class_name508 = var504 == NULL ? "null" : (((long)var504&3)?type_info[((long)var504&3)]:var504->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name508);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 908);
fatal_exit(1);
}
{
{ /* Inline kernel#Char#> (var_recv446,var504) on <var_recv446:Char> */
/* Covariant cast for argument 0 (i) <var504:nullable Object(Char)> isa OTHER */
/* <var504:nullable Object(Char)> isa OTHER */
var511 = 1; /* easy <var504:nullable Object(Char)> isa OTHER*/
if (unlikely(!var511)) {
var_class_name514 = var504 == NULL ? "null" : (((long)var504&3)?type_info[((long)var504&3)]:var504->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name514);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 613);
fatal_exit(1);
}
var515 = (char)((long)(var504)>>2);
var516 = var_recv446 > var515;
var509 = var516;
goto RET_LABEL510;
RET_LABEL510:(void)0;
}
}
{
var517 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var509); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var517;
goto RET_LABEL;
} else {
if (likely(varonce518!=NULL)) {
var519 = varonce518;
} else {
var520 = "<=";
var521 = standard___standard__NativeString___to_s_with_length(var520, 2l);
var519 = var521;
varonce518 = var519;
}
{
var522 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var519); /* == on <var_pname:String>*/
}
if (var522){
{
var523 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var524 = ((val*(*)(val* self))(var523->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var523); /* val on <var523:nullable Object(Instance)>*/
}
/* <var524:nullable Object> isa Char */
cltype526 = type_standard__Char.color;
idtype527 = type_standard__Char.id;
if(var524 == NULL) {
var525 = 0;
} else {
if(cltype526 >= (((long)var524&3)?type_info[((long)var524&3)]:var524->type)->table_size) {
var525 = 0;
} else {
var525 = (((long)var524&3)?type_info[((long)var524&3)]:var524->type)->type_table[cltype526] == idtype527;
}
}
if (unlikely(!var525)) {
var_class_name528 = var524 == NULL ? "null" : (((long)var524&3)?type_info[((long)var524&3)]:var524->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name528);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 910);
fatal_exit(1);
}
{
{ /* Inline kernel#Char#<= (var_recv446,var524) on <var_recv446:Char> */
/* Covariant cast for argument 0 (i) <var524:nullable Object(Char)> isa OTHER */
/* <var524:nullable Object(Char)> isa OTHER */
var531 = 1; /* easy <var524:nullable Object(Char)> isa OTHER*/
if (unlikely(!var531)) {
var_class_name534 = var524 == NULL ? "null" : (((long)var524&3)?type_info[((long)var524&3)]:var524->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name534);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 610);
fatal_exit(1);
}
var535 = (char)((long)(var524)>>2);
var536 = var_recv446 <= var535;
var529 = var536;
goto RET_LABEL530;
RET_LABEL530:(void)0;
}
}
{
var537 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var529); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var537;
goto RET_LABEL;
} else {
if (likely(varonce538!=NULL)) {
var539 = varonce538;
} else {
var540 = ">=";
var541 = standard___standard__NativeString___to_s_with_length(var540, 2l);
var539 = var541;
varonce538 = var539;
}
{
var542 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var539); /* == on <var_pname:String>*/
}
if (var542){
{
var543 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var544 = ((val*(*)(val* self))(var543->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var543); /* val on <var543:nullable Object(Instance)>*/
}
/* <var544:nullable Object> isa Char */
cltype546 = type_standard__Char.color;
idtype547 = type_standard__Char.id;
if(var544 == NULL) {
var545 = 0;
} else {
if(cltype546 >= (((long)var544&3)?type_info[((long)var544&3)]:var544->type)->table_size) {
var545 = 0;
} else {
var545 = (((long)var544&3)?type_info[((long)var544&3)]:var544->type)->type_table[cltype546] == idtype547;
}
}
if (unlikely(!var545)) {
var_class_name548 = var544 == NULL ? "null" : (((long)var544&3)?type_info[((long)var544&3)]:var544->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name548);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 912);
fatal_exit(1);
}
{
{ /* Inline kernel#Char#>= (var_recv446,var544) on <var_recv446:Char> */
/* Covariant cast for argument 0 (i) <var544:nullable Object(Char)> isa OTHER */
/* <var544:nullable Object(Char)> isa OTHER */
var551 = 1; /* easy <var544:nullable Object(Char)> isa OTHER*/
if (unlikely(!var551)) {
var_class_name554 = var544 == NULL ? "null" : (((long)var544&3)?type_info[((long)var544&3)]:var544->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name554);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 612);
fatal_exit(1);
}
var555 = (char)((long)(var544)>>2);
var556 = var_recv446 >= var555;
var549 = var556;
goto RET_LABEL550;
RET_LABEL550:(void)0;
}
}
{
var557 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var549); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var557;
goto RET_LABEL;
} else {
if (likely(varonce558!=NULL)) {
var559 = varonce558;
} else {
var560 = "<=>";
var561 = standard___standard__NativeString___to_s_with_length(var560, 3l);
var559 = var561;
varonce558 = var559;
}
{
var562 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var559); /* == on <var_pname:String>*/
}
if (var562){
{
var563 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var564 = ((val*(*)(val* self))(var563->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var563); /* val on <var563:nullable Object(Instance)>*/
}
/* <var564:nullable Object> isa Char */
cltype566 = type_standard__Char.color;
idtype567 = type_standard__Char.id;
if(var564 == NULL) {
var565 = 0;
} else {
if(cltype566 >= (((long)var564&3)?type_info[((long)var564&3)]:var564->type)->table_size) {
var565 = 0;
} else {
var565 = (((long)var564&3)?type_info[((long)var564&3)]:var564->type)->type_table[cltype566] == idtype567;
}
}
if (unlikely(!var565)) {
var_class_name568 = var564 == NULL ? "null" : (((long)var564&3)?type_info[((long)var564&3)]:var564->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name568);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 914);
fatal_exit(1);
}
var570 = (val*)((long)(var_recv446)<<2|2);
var569 = standard___standard__Comparable____60d_61d_62d(var570, var564);
{
var571 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var569); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var571;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
} else {
if (likely(varonce572!=NULL)) {
var573 = varonce572;
} else {
var574 = "Float";
var575 = standard___standard__NativeString___to_s_with_length(var574, 5l);
var573 = var575;
varonce572 = var573;
}
{
var576 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var573); /* == on <var_cname:String>*/
}
if (var576){
{
var577 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var578 = ((double(*)(val* self))(var577->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var577); /* to_f on <var577:nullable Object(Instance)>*/
}
var_recv579 = var578;
if (likely(varonce580!=NULL)) {
var581 = varonce580;
} else {
var582 = "unary -";
var583 = standard___standard__NativeString___to_s_with_length(var582, 7l);
var581 = var583;
varonce580 = var581;
}
{
var584 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var581); /* == on <var_pname:String>*/
}
if (var584){
{
{ /* Inline kernel#Float#unary - (var_recv579) on <var_recv579:Float> */
var587 = -var_recv579;
var585 = var587;
goto RET_LABEL586;
RET_LABEL586:(void)0;
}
}
{
var588 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var585); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var588;
goto RET_LABEL;
} else {
if (likely(varonce589!=NULL)) {
var590 = varonce589;
} else {
var591 = "unary +";
var592 = standard___standard__NativeString___to_s_with_length(var591, 7l);
var590 = var592;
varonce589 = var590;
}
{
var593 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var590); /* == on <var_pname:String>*/
}
if (var593){
{
var594 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
var = var594;
goto RET_LABEL;
} else {
if (likely(varonce595!=NULL)) {
var596 = varonce595;
} else {
var597 = "+";
var598 = standard___standard__NativeString___to_s_with_length(var597, 1l);
var596 = var598;
varonce595 = var596;
}
{
var599 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var596); /* == on <var_pname:String>*/
}
if (var599){
{
var600 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var601 = ((double(*)(val* self))(var600->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var600); /* to_f on <var600:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Float#+ (var_recv579,var601) on <var_recv579:Float> */
/* Covariant cast for argument 0 (i) <var601:Float> isa OTHER */
/* <var601:Float> isa OTHER */
var604 = 1; /* easy <var601:Float> isa OTHER*/
if (unlikely(!var604)) {
var_class_name607 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name607);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 339);
fatal_exit(1);
}
var608 = var_recv579 + var601;
var602 = var608;
goto RET_LABEL603;
RET_LABEL603:(void)0;
}
}
{
var609 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var602); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var609;
goto RET_LABEL;
} else {
if (likely(varonce610!=NULL)) {
var611 = varonce610;
} else {
var612 = "-";
var613 = standard___standard__NativeString___to_s_with_length(var612, 1l);
var611 = var613;
varonce610 = var611;
}
{
var614 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var611); /* == on <var_pname:String>*/
}
if (var614){
{
var615 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var616 = ((double(*)(val* self))(var615->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var615); /* to_f on <var615:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Float#- (var_recv579,var616) on <var_recv579:Float> */
/* Covariant cast for argument 0 (i) <var616:Float> isa OTHER */
/* <var616:Float> isa OTHER */
var619 = 1; /* easy <var616:Float> isa OTHER*/
if (unlikely(!var619)) {
var_class_name622 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name622);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 341);
fatal_exit(1);
}
var623 = var_recv579 - var616;
var617 = var623;
goto RET_LABEL618;
RET_LABEL618:(void)0;
}
}
{
var624 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var617); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var624;
goto RET_LABEL;
} else {
if (likely(varonce625!=NULL)) {
var626 = varonce625;
} else {
var627 = "*";
var628 = standard___standard__NativeString___to_s_with_length(var627, 1l);
var626 = var628;
varonce625 = var626;
}
{
var629 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var626); /* == on <var_pname:String>*/
}
if (var629){
{
var630 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var631 = ((double(*)(val* self))(var630->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var630); /* to_f on <var630:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Float#* (var_recv579,var631) on <var_recv579:Float> */
/* Covariant cast for argument 0 (i) <var631:Float> isa OTHER */
/* <var631:Float> isa OTHER */
var634 = 1; /* easy <var631:Float> isa OTHER*/
if (unlikely(!var634)) {
var_class_name637 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name637);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 342);
fatal_exit(1);
}
var638 = var_recv579 * var631;
var632 = var638;
goto RET_LABEL633;
RET_LABEL633:(void)0;
}
}
{
var639 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var632); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var639;
goto RET_LABEL;
} else {
if (likely(varonce640!=NULL)) {
var641 = varonce640;
} else {
var642 = "/";
var643 = standard___standard__NativeString___to_s_with_length(var642, 1l);
var641 = var643;
varonce640 = var641;
}
{
var644 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var641); /* == on <var_pname:String>*/
}
if (var644){
{
var645 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var646 = ((double(*)(val* self))(var645->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var645); /* to_f on <var645:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Float#/ (var_recv579,var646) on <var_recv579:Float> */
/* Covariant cast for argument 0 (i) <var646:Float> isa OTHER */
/* <var646:Float> isa OTHER */
var649 = 1; /* easy <var646:Float> isa OTHER*/
if (unlikely(!var649)) {
var_class_name652 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name652);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 343);
fatal_exit(1);
}
var653 = var_recv579 / var646;
var647 = var653;
goto RET_LABEL648;
RET_LABEL648:(void)0;
}
}
{
var654 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var647); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var654;
goto RET_LABEL;
} else {
if (likely(varonce655!=NULL)) {
var656 = varonce655;
} else {
var657 = "<";
var658 = standard___standard__NativeString___to_s_with_length(var657, 1l);
var656 = var658;
varonce655 = var656;
}
{
var659 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var656); /* == on <var_pname:String>*/
}
if (var659){
{
var660 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var661 = ((double(*)(val* self))(var660->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var660); /* to_f on <var660:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Float#< (var_recv579,var661) on <var_recv579:Float> */
/* Covariant cast for argument 0 (i) <var661:Float> isa OTHER */
/* <var661:Float> isa OTHER */
var664 = 1; /* easy <var661:Float> isa OTHER*/
if (unlikely(!var664)) {
var_class_name667 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name667);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var668 = var_recv579 < var661;
var662 = var668;
goto RET_LABEL663;
RET_LABEL663:(void)0;
}
}
{
var669 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var662); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var669;
goto RET_LABEL;
} else {
if (likely(varonce670!=NULL)) {
var671 = varonce670;
} else {
var672 = ">";
var673 = standard___standard__NativeString___to_s_with_length(var672, 1l);
var671 = var673;
varonce670 = var671;
}
{
var674 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var671); /* == on <var_pname:String>*/
}
if (var674){
{
var675 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var676 = ((double(*)(val* self))(var675->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var675); /* to_f on <var675:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Float#> (var_recv579,var676) on <var_recv579:Float> */
/* Covariant cast for argument 0 (i) <var676:Float> isa OTHER */
/* <var676:Float> isa OTHER */
var679 = 1; /* easy <var676:Float> isa OTHER*/
if (unlikely(!var679)) {
var_class_name682 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name682);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 337);
fatal_exit(1);
}
var683 = var_recv579 > var676;
var677 = var683;
goto RET_LABEL678;
RET_LABEL678:(void)0;
}
}
{
var684 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var677); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var684;
goto RET_LABEL;
} else {
if (likely(varonce685!=NULL)) {
var686 = varonce685;
} else {
var687 = "<=";
var688 = standard___standard__NativeString___to_s_with_length(var687, 2l);
var686 = var688;
varonce685 = var686;
}
{
var689 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var686); /* == on <var_pname:String>*/
}
if (var689){
{
var690 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var691 = ((double(*)(val* self))(var690->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var690); /* to_f on <var690:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Float#<= (var_recv579,var691) on <var_recv579:Float> */
/* Covariant cast for argument 0 (i) <var691:Float> isa OTHER */
/* <var691:Float> isa OTHER */
var694 = 1; /* easy <var691:Float> isa OTHER*/
if (unlikely(!var694)) {
var_class_name697 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name697);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 334);
fatal_exit(1);
}
var698 = var_recv579 <= var691;
var692 = var698;
goto RET_LABEL693;
RET_LABEL693:(void)0;
}
}
{
var699 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var692); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var699;
goto RET_LABEL;
} else {
if (likely(varonce700!=NULL)) {
var701 = varonce700;
} else {
var702 = ">=";
var703 = standard___standard__NativeString___to_s_with_length(var702, 2l);
var701 = var703;
varonce700 = var701;
}
{
var704 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var701); /* == on <var_pname:String>*/
}
if (var704){
{
var705 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var706 = ((double(*)(val* self))(var705->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var705); /* to_f on <var705:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Float#>= (var_recv579,var706) on <var_recv579:Float> */
/* Covariant cast for argument 0 (i) <var706:Float> isa OTHER */
/* <var706:Float> isa OTHER */
var709 = 1; /* easy <var706:Float> isa OTHER*/
if (unlikely(!var709)) {
var_class_name712 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name712);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 336);
fatal_exit(1);
}
var713 = var_recv579 >= var706;
var707 = var713;
goto RET_LABEL708;
RET_LABEL708:(void)0;
}
}
{
var714 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var707); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var714;
goto RET_LABEL;
} else {
if (likely(varonce715!=NULL)) {
var716 = varonce715;
} else {
var717 = "to_i";
var718 = standard___standard__NativeString___to_s_with_length(var717, 4l);
var716 = var718;
varonce715 = var716;
}
{
var719 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var716); /* == on <var_pname:String>*/
}
if (var719){
{
{ /* Inline kernel#Float#to_i (var_recv579) on <var_recv579:Float> */
var722 = (long)var_recv579;
var720 = var722;
goto RET_LABEL721;
RET_LABEL721:(void)0;
}
}
{
var723 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var720); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var723;
goto RET_LABEL;
} else {
if (likely(varonce724!=NULL)) {
var725 = varonce724;
} else {
var726 = "cos";
var727 = standard___standard__NativeString___to_s_with_length(var726, 3l);
var725 = var727;
varonce724 = var725;
}
{
var728 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var725); /* == on <var_pname:String>*/
}
if (var728){
{
var729 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var730 = ((double(*)(val* self))(var729->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var729); /* to_f on <var729:nullable Object(Instance)>*/
}
var731 = standard__math___Float___cos(var730);
{
var732 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var731); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var732;
goto RET_LABEL;
} else {
if (likely(varonce733!=NULL)) {
var734 = varonce733;
} else {
var735 = "sin";
var736 = standard___standard__NativeString___to_s_with_length(var735, 3l);
var734 = var736;
varonce733 = var734;
}
{
var737 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var734); /* == on <var_pname:String>*/
}
if (var737){
{
var738 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var739 = ((double(*)(val* self))(var738->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var738); /* to_f on <var738:nullable Object(Instance)>*/
}
var740 = standard__math___Float___sin(var739);
{
var741 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var740); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var741;
goto RET_LABEL;
} else {
if (likely(varonce742!=NULL)) {
var743 = varonce742;
} else {
var744 = "tan";
var745 = standard___standard__NativeString___to_s_with_length(var744, 3l);
var743 = var745;
varonce742 = var743;
}
{
var746 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var743); /* == on <var_pname:String>*/
}
if (var746){
{
var747 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var748 = ((double(*)(val* self))(var747->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var747); /* to_f on <var747:nullable Object(Instance)>*/
}
var749 = standard__math___Float___tan(var748);
{
var750 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var749); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var750;
goto RET_LABEL;
} else {
if (likely(varonce751!=NULL)) {
var752 = varonce751;
} else {
var753 = "acos";
var754 = standard___standard__NativeString___to_s_with_length(var753, 4l);
var752 = var754;
varonce751 = var752;
}
{
var755 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var752); /* == on <var_pname:String>*/
}
if (var755){
{
var756 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var757 = ((double(*)(val* self))(var756->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var756); /* to_f on <var756:nullable Object(Instance)>*/
}
var758 = standard__math___Float___acos(var757);
{
var759 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var758); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var759;
goto RET_LABEL;
} else {
if (likely(varonce760!=NULL)) {
var761 = varonce760;
} else {
var762 = "asin";
var763 = standard___standard__NativeString___to_s_with_length(var762, 4l);
var761 = var763;
varonce760 = var761;
}
{
var764 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var761); /* == on <var_pname:String>*/
}
if (var764){
{
var765 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var766 = ((double(*)(val* self))(var765->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var765); /* to_f on <var765:nullable Object(Instance)>*/
}
var767 = standard__math___Float___asin(var766);
{
var768 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var767); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var768;
goto RET_LABEL;
} else {
if (likely(varonce769!=NULL)) {
var770 = varonce769;
} else {
var771 = "atan";
var772 = standard___standard__NativeString___to_s_with_length(var771, 4l);
var770 = var772;
varonce769 = var770;
}
{
var773 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var770); /* == on <var_pname:String>*/
}
if (var773){
{
var774 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var775 = ((double(*)(val* self))(var774->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var774); /* to_f on <var774:nullable Object(Instance)>*/
}
var776 = standard__math___Float___atan(var775);
{
var777 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var776); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var777;
goto RET_LABEL;
} else {
if (likely(varonce778!=NULL)) {
var779 = varonce778;
} else {
var780 = "sqrt";
var781 = standard___standard__NativeString___to_s_with_length(var780, 4l);
var779 = var781;
varonce778 = var779;
}
{
var782 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var779); /* == on <var_pname:String>*/
}
if (var782){
{
var783 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var784 = ((double(*)(val* self))(var783->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var783); /* to_f on <var783:nullable Object(Instance)>*/
}
var785 = standard__math___Float___sqrt(var784);
{
var786 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var785); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var786;
goto RET_LABEL;
} else {
if (likely(varonce787!=NULL)) {
var788 = varonce787;
} else {
var789 = "exp";
var790 = standard___standard__NativeString___to_s_with_length(var789, 3l);
var788 = var790;
varonce787 = var788;
}
{
var791 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var788); /* == on <var_pname:String>*/
}
if (var791){
{
var792 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var793 = ((double(*)(val* self))(var792->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var792); /* to_f on <var792:nullable Object(Instance)>*/
}
var794 = standard__math___Float___exp(var793);
{
var795 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var794); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var795;
goto RET_LABEL;
} else {
if (likely(varonce796!=NULL)) {
var797 = varonce796;
} else {
var798 = "log";
var799 = standard___standard__NativeString___to_s_with_length(var798, 3l);
var797 = var799;
varonce796 = var797;
}
{
var800 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var797); /* == on <var_pname:String>*/
}
if (var800){
{
var801 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var802 = ((double(*)(val* self))(var801->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var801); /* to_f on <var801:nullable Object(Instance)>*/
}
var803 = standard__math___Float___log(var802);
{
var804 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var803); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var804;
goto RET_LABEL;
} else {
if (likely(varonce805!=NULL)) {
var806 = varonce805;
} else {
var807 = "pow";
var808 = standard___standard__NativeString___to_s_with_length(var807, 3l);
var806 = var808;
varonce805 = var806;
}
{
var809 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var806); /* == on <var_pname:String>*/
}
if (var809){
{
var810 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var811 = ((double(*)(val* self))(var810->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var810); /* to_f on <var810:nullable Object(Instance)>*/
}
{
var812 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var813 = ((double(*)(val* self))(var812->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var812); /* to_f on <var812:nullable Object(Instance)>*/
}
var814 = standard__math___Float___pow(var811, var813);
{
var815 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var814); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var815;
goto RET_LABEL;
} else {
if (likely(varonce816!=NULL)) {
var817 = varonce816;
} else {
var818 = "rand";
var819 = standard___standard__NativeString___to_s_with_length(var818, 4l);
var817 = var819;
varonce816 = var817;
}
{
var820 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var817); /* == on <var_pname:String>*/
}
if (var820){
{
var821 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var822 = ((double(*)(val* self))(var821->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var821); /* to_f on <var821:nullable Object(Instance)>*/
}
var823 = standard__math___Float___rand(var822);
{
var824 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var823); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var824;
goto RET_LABEL;
} else {
if (likely(varonce825!=NULL)) {
var826 = varonce825;
} else {
var827 = "abs";
var828 = standard___standard__NativeString___to_s_with_length(var827, 3l);
var826 = var828;
varonce825 = var826;
}
{
var829 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var826); /* == on <var_pname:String>*/
}
if (var829){
{
var830 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var831 = ((double(*)(val* self))(var830->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var830); /* to_f on <var830:nullable Object(Instance)>*/
}
var832 = standard__math___Float___abs(var831);
{
var833 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var832); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var833;
goto RET_LABEL;
} else {
if (likely(varonce834!=NULL)) {
var835 = varonce834;
} else {
var836 = "hypot_with";
var837 = standard___standard__NativeString___to_s_with_length(var836, 10l);
var835 = var837;
varonce834 = var835;
}
{
var838 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var835); /* == on <var_pname:String>*/
}
if (var838){
{
var839 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var840 = ((double(*)(val* self))(var839->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var839); /* to_f on <var839:nullable Object(Instance)>*/
}
{
var841 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var842 = ((double(*)(val* self))(var841->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var841); /* to_f on <var841:nullable Object(Instance)>*/
}
var843 = standard__math___Float___hypot_with(var840, var842);
{
var844 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var843); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var844;
goto RET_LABEL;
} else {
if (likely(varonce845!=NULL)) {
var846 = varonce845;
} else {
var847 = "is_nan";
var848 = standard___standard__NativeString___to_s_with_length(var847, 6l);
var846 = var848;
varonce845 = var846;
}
{
var849 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var846); /* == on <var_pname:String>*/
}
if (var849){
{
var850 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var851 = ((double(*)(val* self))(var850->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var850); /* to_f on <var850:nullable Object(Instance)>*/
}
var852 = standard__math___Float___is_nan(var851);
{
var853 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var852); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var853;
goto RET_LABEL;
} else {
if (likely(varonce854!=NULL)) {
var855 = varonce854;
} else {
var856 = "is_inf_extern";
var857 = standard___standard__NativeString___to_s_with_length(var856, 13l);
var855 = var857;
varonce854 = var855;
}
{
var858 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var855); /* == on <var_pname:String>*/
}
if (var858){
{
var859 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var860 = ((double(*)(val* self))(var859->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var859); /* to_f on <var859:nullable Object(Instance)>*/
}
var861 = standard__math___Float___is_inf(var860);
{
{ /* Inline kernel#Int#!= (var861,0l) on <var861:Int> */
var864 = var861 == 0l;
var865 = !var864;
var862 = var865;
goto RET_LABEL863;
RET_LABEL863:(void)0;
}
}
{
var866 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var862); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var866;
goto RET_LABEL;
} else {
if (likely(varonce867!=NULL)) {
var868 = varonce867;
} else {
var869 = "round";
var870 = standard___standard__NativeString___to_s_with_length(var869, 5l);
var868 = var870;
varonce867 = var868;
}
{
var871 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var868); /* == on <var_pname:String>*/
}
if (var871){
{
var872 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var873 = ((double(*)(val* self))(var872->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var872); /* to_f on <var872:nullable Object(Instance)>*/
}
var874 = standard__math___Float___round(var873);
{
var875 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var874); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var875;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce876!=NULL)) {
var877 = varonce876;
} else {
var878 = "NativeString";
var879 = standard___standard__NativeString___to_s_with_length(var878, 12l);
var877 = var879;
varonce876 = var877;
}
{
var880 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var877); /* == on <var_cname:String>*/
}
if (var880){
if (likely(varonce881!=NULL)) {
var882 = varonce881;
} else {
var883 = "new";
var884 = standard___standard__NativeString___to_s_with_length(var883, 3l);
var882 = var884;
varonce881 = var882;
}
{
var885 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var882); /* == on <var_pname:String>*/
}
if (var885){
if (likely(varonce886!=NULL)) {
var887 = varonce886;
} else {
var888 = "!";
var889 = standard___standard__NativeString___to_s_with_length(var888, 1l);
var887 = var889;
varonce886 = var887;
}
{
var890 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var891 = ((long(*)(val* self))(var890->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var890); /* to_i on <var890:nullable Object(Instance)>*/
}
{
var892 = ((val*(*)(val* self, long p0))(var887->class->vft[COLOR_standard__string__String___42d]))(var887, var891); /* * on <var887:String>*/
}
{
var893 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var892); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var893;
goto RET_LABEL;
} else {
}
{
var894 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
{
var895 = ((val*(*)(val* self))(var894->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var894); /* val on <var894:nullable Object(Instance)>*/
}
/* <var895:nullable Object> isa Buffer */
cltype897 = type_standard__Buffer.color;
idtype898 = type_standard__Buffer.id;
if(var895 == NULL) {
var896 = 0;
} else {
if(cltype897 >= (((long)var895&3)?type_info[((long)var895&3)]:var895->type)->table_size) {
var896 = 0;
} else {
var896 = (((long)var895&3)?type_info[((long)var895&3)]:var895->type)->type_table[cltype897] == idtype898;
}
}
if (unlikely(!var896)) {
var_class_name899 = var895 == NULL ? "null" : (((long)var895&3)?type_info[((long)var895&3)]:var895->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Buffer", var_class_name899);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 977);
fatal_exit(1);
}
var_recvval900 = var895;
if (likely(varonce901!=NULL)) {
var902 = varonce901;
} else {
var903 = "[]";
var904 = standard___standard__NativeString___to_s_with_length(var903, 2l);
var902 = var904;
varonce901 = var902;
}
{
var905 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var902); /* == on <var_pname:String>*/
}
if (var905){
{
var906 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var907 = ((long(*)(val* self))(var906->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var906); /* to_i on <var906:nullable Object(Instance)>*/
}
var_arg1 = var907;
{
var909 = ((long(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__length]))(var_recvval900); /* length on <var_recvval900:Buffer>*/
}
{
{ /* Inline kernel#Int#>= (var_arg1,var909) on <var_arg1:Int> */
/* Covariant cast for argument 0 (i) <var909:Int> isa OTHER */
/* <var909:Int> isa OTHER */
var912 = 1; /* easy <var909:Int> isa OTHER*/
if (unlikely(!var912)) {
var_class_name915 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name915);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var916 = var_arg1 >= var909;
var910 = var916;
goto RET_LABEL911;
RET_LABEL911:(void)0;
}
}
var_ = var910;
if (var910){
var908 = var_;
} else {
{
{ /* Inline kernel#Int#< (var_arg1,0l) on <var_arg1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var919 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var919)) {
var_class_name922 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name922);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var923 = var_arg1 < 0l;
var917 = var923;
goto RET_LABEL918;
RET_LABEL918:(void)0;
}
}
var908 = var917;
}
if (var908){
if (unlikely(varonce924==NULL)) {
var925 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce926!=NULL)) {
var927 = varonce926;
} else {
var928 = "Illegal access on ";
var929 = standard___standard__NativeString___to_s_with_length(var928, 18l);
var927 = var929;
varonce926 = var927;
}
((struct instance_standard__NativeArray*)var925)->values[0]=var927;
if (likely(varonce930!=NULL)) {
var931 = varonce930;
} else {
var932 = " for element ";
var933 = standard___standard__NativeString___to_s_with_length(var932, 13l);
var931 = var933;
varonce930 = var931;
}
((struct instance_standard__NativeArray*)var925)->values[2]=var931;
if (likely(varonce934!=NULL)) {
var935 = varonce934;
} else {
var936 = "/";
var937 = standard___standard__NativeString___to_s_with_length(var936, 1l);
var935 = var937;
varonce934 = var935;
}
((struct instance_standard__NativeArray*)var925)->values[4]=var935;
} else {
var925 = varonce924;
varonce924 = NULL;
}
{
var938 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
((struct instance_standard__NativeArray*)var925)->values[1]=var938;
var939 = standard__string___Int___Object__to_s(var_arg1);
((struct instance_standard__NativeArray*)var925)->values[3]=var939;
{
var940 = ((long(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__length]))(var_recvval900); /* length on <var_recvval900:Buffer>*/
}
var941 = standard__string___Int___Object__to_s(var940);
((struct instance_standard__NativeArray*)var925)->values[5]=var941;
{
var942 = ((val*(*)(val* self))(var925->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var925); /* native_to_s on <var925:NativeArray[String]>*/
}
varonce924 = var925;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(self, var942); /* debug on <self:AMethPropdef>*/
}
} else {
}
{
var943 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__chars]))(var_recvval900); /* chars on <var_recvval900:Buffer>*/
}
{
var944 = ((val*(*)(val* self, long p0))((((long)var943&3)?class_info[((long)var943&3)]:var943->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var943, var_arg1); /* [] on <var943:SequenceRead[Char](Sequence[Char])>*/
}
{
var946 = (char)((long)(var944)>>2);
var945 = ((val*(*)(val* self, char p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__char_instance]))(var_v, var946); /* char_instance on <var_v:NaiveInterpreter>*/
}
var = var945;
goto RET_LABEL;
} else {
if (likely(varonce947!=NULL)) {
var948 = varonce947;
} else {
var949 = "[]=";
var950 = standard___standard__NativeString___to_s_with_length(var949, 3l);
var948 = var950;
varonce947 = var948;
}
{
var951 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var948); /* == on <var_pname:String>*/
}
if (var951){
{
var952 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var953 = ((long(*)(val* self))(var952->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var952); /* to_i on <var952:nullable Object(Instance)>*/
}
var_arg1954 = var953;
{
var956 = ((long(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__length]))(var_recvval900); /* length on <var_recvval900:Buffer>*/
}
{
{ /* Inline kernel#Int#>= (var_arg1954,var956) on <var_arg1954:Int> */
/* Covariant cast for argument 0 (i) <var956:Int> isa OTHER */
/* <var956:Int> isa OTHER */
var959 = 1; /* easy <var956:Int> isa OTHER*/
if (unlikely(!var959)) {
var_class_name962 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name962);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var963 = var_arg1954 >= var956;
var957 = var963;
goto RET_LABEL958;
RET_LABEL958:(void)0;
}
}
var_964 = var957;
if (var957){
var955 = var_964;
} else {
{
{ /* Inline kernel#Int#< (var_arg1954,0l) on <var_arg1954:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var967 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var967)) {
var_class_name970 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name970);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var971 = var_arg1954 < 0l;
var965 = var971;
goto RET_LABEL966;
RET_LABEL966:(void)0;
}
}
var955 = var965;
}
if (var955){
if (unlikely(varonce972==NULL)) {
var973 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce974!=NULL)) {
var975 = varonce974;
} else {
var976 = "Illegal access on ";
var977 = standard___standard__NativeString___to_s_with_length(var976, 18l);
var975 = var977;
varonce974 = var975;
}
((struct instance_standard__NativeArray*)var973)->values[0]=var975;
if (likely(varonce978!=NULL)) {
var979 = varonce978;
} else {
var980 = " for element ";
var981 = standard___standard__NativeString___to_s_with_length(var980, 13l);
var979 = var981;
varonce978 = var979;
}
((struct instance_standard__NativeArray*)var973)->values[2]=var979;
if (likely(varonce982!=NULL)) {
var983 = varonce982;
} else {
var984 = "/";
var985 = standard___standard__NativeString___to_s_with_length(var984, 1l);
var983 = var985;
varonce982 = var983;
}
((struct instance_standard__NativeArray*)var973)->values[4]=var983;
} else {
var973 = varonce972;
varonce972 = NULL;
}
{
var986 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
((struct instance_standard__NativeArray*)var973)->values[1]=var986;
var987 = standard__string___Int___Object__to_s(var_arg1954);
((struct instance_standard__NativeArray*)var973)->values[3]=var987;
{
var988 = ((long(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__length]))(var_recvval900); /* length on <var_recvval900:Buffer>*/
}
var989 = standard__string___Int___Object__to_s(var988);
((struct instance_standard__NativeArray*)var973)->values[5]=var989;
{
var990 = ((val*(*)(val* self))(var973->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var973); /* native_to_s on <var973:NativeArray[String]>*/
}
varonce972 = var973;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(self, var990); /* debug on <self:AMethPropdef>*/
}
} else {
}
{
var991 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__chars]))(var_recvval900); /* chars on <var_recvval900:Buffer>*/
}
{
var992 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var993 = ((val*(*)(val* self))(var992->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var992); /* val on <var992:nullable Object(Instance)>*/
}
/* <var993:nullable Object> isa Char */
cltype995 = type_standard__Char.color;
idtype996 = type_standard__Char.id;
if(var993 == NULL) {
var994 = 0;
} else {
if(cltype995 >= (((long)var993&3)?type_info[((long)var993&3)]:var993->type)->table_size) {
var994 = 0;
} else {
var994 = (((long)var993&3)?type_info[((long)var993&3)]:var993->type)->type_table[cltype995] == idtype996;
}
}
if (unlikely(!var994)) {
var_class_name997 = var993 == NULL ? "null" : (((long)var993&3)?type_info[((long)var993&3)]:var993->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name997);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 989);
fatal_exit(1);
}
{
((void(*)(val* self, long p0, val* p1))((((long)var991&3)?class_info[((long)var991&3)]:var991->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var991, var_arg1954, var993); /* []= on <var991:SequenceRead[Char](Sequence[Char])>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (likely(varonce998!=NULL)) {
var999 = varonce998;
} else {
var1000 = "copy_to";
var1001 = standard___standard__NativeString___to_s_with_length(var1000, 7l);
var999 = var1001;
varonce998 = var999;
}
{
var1002 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var999); /* == on <var_pname:String>*/
}
if (var1002){
{
var1003 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1004 = ((val*(*)(val* self))(var1003->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var1003); /* val on <var1003:nullable Object(Instance)>*/
}
/* <var1004:nullable Object> isa FlatBuffer */
cltype1006 = type_standard__FlatBuffer.color;
idtype1007 = type_standard__FlatBuffer.id;
if(var1004 == NULL) {
var1005 = 0;
} else {
if(cltype1006 >= (((long)var1004&3)?type_info[((long)var1004&3)]:var1004->type)->table_size) {
var1005 = 0;
} else {
var1005 = (((long)var1004&3)?type_info[((long)var1004&3)]:var1004->type)->type_table[cltype1006] == idtype1007;
}
}
if (unlikely(!var1005)) {
var_class_name1008 = var1004 == NULL ? "null" : (((long)var1004&3)?type_info[((long)var1004&3)]:var1004->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatBuffer", var_class_name1008);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 993);
fatal_exit(1);
}
var_destval = var1004;
{
var1009 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var1010 = ((long(*)(val* self))(var1009->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1009); /* to_i on <var1009:nullable Object(Instance)>*/
}
var_lenval = var1010;
{
var1011 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 3l); /* [] on <var_args:Array[Instance]>*/
}
{
var1012 = ((long(*)(val* self))(var1011->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1011); /* to_i on <var1011:nullable Object(Instance)>*/
}
var_fromval = var1012;
{
var1013 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 4l); /* [] on <var_args:Array[Instance]>*/
}
{
var1014 = ((long(*)(val* self))(var1013->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1013); /* to_i on <var1013:nullable Object(Instance)>*/
}
var_toval = var1014;
{
{ /* Inline kernel#Int#< (var_fromval,0l) on <var_fromval:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var1017 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var1017)) {
var_class_name1020 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name1020);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var1021 = var_fromval < 0l;
var1015 = var1021;
goto RET_LABEL1016;
RET_LABEL1016:(void)0;
}
}
if (var1015){
if (unlikely(varonce1022==NULL)) {
var1023 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce1024!=NULL)) {
var1025 = varonce1024;
} else {
var1026 = "Illegal access on ";
var1027 = standard___standard__NativeString___to_s_with_length(var1026, 18l);
var1025 = var1027;
varonce1024 = var1025;
}
((struct instance_standard__NativeArray*)var1023)->values[0]=var1025;
if (likely(varonce1028!=NULL)) {
var1029 = varonce1028;
} else {
var1030 = " for element ";
var1031 = standard___standard__NativeString___to_s_with_length(var1030, 13l);
var1029 = var1031;
varonce1028 = var1029;
}
((struct instance_standard__NativeArray*)var1023)->values[2]=var1029;
if (likely(varonce1032!=NULL)) {
var1033 = varonce1032;
} else {
var1034 = "/";
var1035 = standard___standard__NativeString___to_s_with_length(var1034, 1l);
var1033 = var1035;
varonce1032 = var1033;
}
((struct instance_standard__NativeArray*)var1023)->values[4]=var1033;
} else {
var1023 = varonce1022;
varonce1022 = NULL;
}
{
var1036 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
((struct instance_standard__NativeArray*)var1023)->values[1]=var1036;
var1037 = standard__string___Int___Object__to_s(var_fromval);
((struct instance_standard__NativeArray*)var1023)->values[3]=var1037;
{
var1038 = ((long(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__length]))(var_recvval900); /* length on <var_recvval900:Buffer>*/
}
var1039 = standard__string___Int___Object__to_s(var1038);
((struct instance_standard__NativeArray*)var1023)->values[5]=var1039;
{
var1040 = ((val*(*)(val* self))(var1023->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1023); /* native_to_s on <var1023:NativeArray[String]>*/
}
varonce1022 = var1023;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(self, var1040); /* debug on <self:AMethPropdef>*/
}
} else {
}
{
{ /* Inline kernel#Int#+ (var_fromval,var_lenval) on <var_fromval:Int> */
/* Covariant cast for argument 0 (i) <var_lenval:Int> isa OTHER */
/* <var_lenval:Int> isa OTHER */
var1043 = 1; /* easy <var_lenval:Int> isa OTHER*/
if (unlikely(!var1043)) {
var_class_name1046 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name1046);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var1047 = var_fromval + var_lenval;
var1041 = var1047;
goto RET_LABEL1042;
RET_LABEL1042:(void)0;
}
}
{
var1048 = ((long(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__length]))(var_recvval900); /* length on <var_recvval900:Buffer>*/
}
{
{ /* Inline kernel#Int#> (var1041,var1048) on <var1041:Int> */
/* Covariant cast for argument 0 (i) <var1048:Int> isa OTHER */
/* <var1048:Int> isa OTHER */
var1051 = 1; /* easy <var1048:Int> isa OTHER*/
if (unlikely(!var1051)) {
var_class_name1054 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name1054);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var1055 = var1041 > var1048;
var1049 = var1055;
goto RET_LABEL1050;
RET_LABEL1050:(void)0;
}
}
if (var1049){
if (unlikely(varonce1056==NULL)) {
var1057 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce1058!=NULL)) {
var1059 = varonce1058;
} else {
var1060 = "Illegal access on ";
var1061 = standard___standard__NativeString___to_s_with_length(var1060, 18l);
var1059 = var1061;
varonce1058 = var1059;
}
((struct instance_standard__NativeArray*)var1057)->values[0]=var1059;
if (likely(varonce1062!=NULL)) {
var1063 = varonce1062;
} else {
var1064 = " for element ";
var1065 = standard___standard__NativeString___to_s_with_length(var1064, 13l);
var1063 = var1065;
varonce1062 = var1063;
}
((struct instance_standard__NativeArray*)var1057)->values[2]=var1063;
if (likely(varonce1066!=NULL)) {
var1067 = varonce1066;
} else {
var1068 = "+";
var1069 = standard___standard__NativeString___to_s_with_length(var1068, 1l);
var1067 = var1069;
varonce1066 = var1067;
}
((struct instance_standard__NativeArray*)var1057)->values[4]=var1067;
if (likely(varonce1070!=NULL)) {
var1071 = varonce1070;
} else {
var1072 = "/";
var1073 = standard___standard__NativeString___to_s_with_length(var1072, 1l);
var1071 = var1073;
varonce1070 = var1071;
}
((struct instance_standard__NativeArray*)var1057)->values[6]=var1071;
} else {
var1057 = varonce1056;
varonce1056 = NULL;
}
{
var1074 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
((struct instance_standard__NativeArray*)var1057)->values[1]=var1074;
var1075 = standard__string___Int___Object__to_s(var_fromval);
((struct instance_standard__NativeArray*)var1057)->values[3]=var1075;
var1076 = standard__string___Int___Object__to_s(var_lenval);
((struct instance_standard__NativeArray*)var1057)->values[5]=var1076;
{
var1077 = ((long(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__length]))(var_recvval900); /* length on <var_recvval900:Buffer>*/
}
var1078 = standard__string___Int___Object__to_s(var1077);
((struct instance_standard__NativeArray*)var1057)->values[7]=var1078;
{
var1079 = ((val*(*)(val* self))(var1057->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1057); /* native_to_s on <var1057:NativeArray[String]>*/
}
varonce1056 = var1057;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(self, var1079); /* debug on <self:AMethPropdef>*/
}
} else {
}
{
{ /* Inline kernel#Int#< (var_toval,0l) on <var_toval:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var1082 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var1082)) {
var_class_name1085 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name1085);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var1086 = var_toval < 0l;
var1080 = var1086;
goto RET_LABEL1081;
RET_LABEL1081:(void)0;
}
}
if (var1080){
if (unlikely(varonce1087==NULL)) {
var1088 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce1089!=NULL)) {
var1090 = varonce1089;
} else {
var1091 = "Illegal access on ";
var1092 = standard___standard__NativeString___to_s_with_length(var1091, 18l);
var1090 = var1092;
varonce1089 = var1090;
}
((struct instance_standard__NativeArray*)var1088)->values[0]=var1090;
if (likely(varonce1093!=NULL)) {
var1094 = varonce1093;
} else {
var1095 = " for element ";
var1096 = standard___standard__NativeString___to_s_with_length(var1095, 13l);
var1094 = var1096;
varonce1093 = var1094;
}
((struct instance_standard__NativeArray*)var1088)->values[2]=var1094;
if (likely(varonce1097!=NULL)) {
var1098 = varonce1097;
} else {
var1099 = "/";
var1100 = standard___standard__NativeString___to_s_with_length(var1099, 1l);
var1098 = var1100;
varonce1097 = var1098;
}
((struct instance_standard__NativeArray*)var1088)->values[4]=var1098;
} else {
var1088 = varonce1087;
varonce1087 = NULL;
}
{
var1101 = ((val*(*)(val* self))(var_destval->class->vft[COLOR_standard__string__Object__to_s]))(var_destval); /* to_s on <var_destval:FlatBuffer>*/
}
((struct instance_standard__NativeArray*)var1088)->values[1]=var1101;
var1102 = standard__string___Int___Object__to_s(var_toval);
((struct instance_standard__NativeArray*)var1088)->values[3]=var1102;
{
var1103 = ((long(*)(val* self))(var_destval->class->vft[COLOR_standard__string__Text__length]))(var_destval); /* length on <var_destval:FlatBuffer>*/
}
var1104 = standard__string___Int___Object__to_s(var1103);
((struct instance_standard__NativeArray*)var1088)->values[5]=var1104;
{
var1105 = ((val*(*)(val* self))(var1088->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1088); /* native_to_s on <var1088:NativeArray[String]>*/
}
varonce1087 = var1088;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(self, var1105); /* debug on <self:AMethPropdef>*/
}
} else {
}
{
{ /* Inline kernel#Int#+ (var_toval,var_lenval) on <var_toval:Int> */
/* Covariant cast for argument 0 (i) <var_lenval:Int> isa OTHER */
/* <var_lenval:Int> isa OTHER */
var1108 = 1; /* easy <var_lenval:Int> isa OTHER*/
if (unlikely(!var1108)) {
var_class_name1111 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name1111);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var1112 = var_toval + var_lenval;
var1106 = var1112;
goto RET_LABEL1107;
RET_LABEL1107:(void)0;
}
}
{
var1113 = ((long(*)(val* self))(var_destval->class->vft[COLOR_standard__string__Text__length]))(var_destval); /* length on <var_destval:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#> (var1106,var1113) on <var1106:Int> */
/* Covariant cast for argument 0 (i) <var1113:Int> isa OTHER */
/* <var1113:Int> isa OTHER */
var1116 = 1; /* easy <var1113:Int> isa OTHER*/
if (unlikely(!var1116)) {
var_class_name1119 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name1119);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var1120 = var1106 > var1113;
var1114 = var1120;
goto RET_LABEL1115;
RET_LABEL1115:(void)0;
}
}
if (var1114){
if (unlikely(varonce1121==NULL)) {
var1122 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce1123!=NULL)) {
var1124 = varonce1123;
} else {
var1125 = "Illegal access on ";
var1126 = standard___standard__NativeString___to_s_with_length(var1125, 18l);
var1124 = var1126;
varonce1123 = var1124;
}
((struct instance_standard__NativeArray*)var1122)->values[0]=var1124;
if (likely(varonce1127!=NULL)) {
var1128 = varonce1127;
} else {
var1129 = " for element ";
var1130 = standard___standard__NativeString___to_s_with_length(var1129, 13l);
var1128 = var1130;
varonce1127 = var1128;
}
((struct instance_standard__NativeArray*)var1122)->values[2]=var1128;
if (likely(varonce1131!=NULL)) {
var1132 = varonce1131;
} else {
var1133 = "+";
var1134 = standard___standard__NativeString___to_s_with_length(var1133, 1l);
var1132 = var1134;
varonce1131 = var1132;
}
((struct instance_standard__NativeArray*)var1122)->values[4]=var1132;
if (likely(varonce1135!=NULL)) {
var1136 = varonce1135;
} else {
var1137 = "/";
var1138 = standard___standard__NativeString___to_s_with_length(var1137, 1l);
var1136 = var1138;
varonce1135 = var1136;
}
((struct instance_standard__NativeArray*)var1122)->values[6]=var1136;
} else {
var1122 = varonce1121;
varonce1121 = NULL;
}
{
var1139 = ((val*(*)(val* self))(var_destval->class->vft[COLOR_standard__string__Object__to_s]))(var_destval); /* to_s on <var_destval:FlatBuffer>*/
}
((struct instance_standard__NativeArray*)var1122)->values[1]=var1139;
var1140 = standard__string___Int___Object__to_s(var_toval);
((struct instance_standard__NativeArray*)var1122)->values[3]=var1140;
var1141 = standard__string___Int___Object__to_s(var_lenval);
((struct instance_standard__NativeArray*)var1122)->values[5]=var1141;
{
var1142 = ((long(*)(val* self))(var_destval->class->vft[COLOR_standard__string__Text__length]))(var_destval); /* length on <var_destval:FlatBuffer>*/
}
var1143 = standard__string___Int___Object__to_s(var1142);
((struct instance_standard__NativeArray*)var1122)->values[7]=var1143;
{
var1144 = ((val*(*)(val* self))(var1122->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1122); /* native_to_s on <var1122:NativeArray[String]>*/
}
varonce1121 = var1122;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(self, var1144); /* debug on <self:AMethPropdef>*/
}
} else {
}
/* <var_recvval900:Buffer> isa FlatBuffer */
cltype1146 = type_standard__FlatBuffer.color;
idtype1147 = type_standard__FlatBuffer.id;
if(cltype1146 >= var_recvval900->type->table_size) {
var1145 = 0;
} else {
var1145 = var_recvval900->type->type_table[cltype1146] == idtype1147;
}
if (unlikely(!var1145)) {
var_class_name1148 = var_recvval900 == NULL ? "null" : var_recvval900->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatBuffer", var_class_name1148);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1009);
fatal_exit(1);
}
{
((void(*)(val* self, long p0, long p1, val* p2, long p3))(var_recvval900->class->vft[COLOR_standard__string__FlatBuffer__copy]))(var_recvval900, var_fromval, var_lenval, var_destval, var_toval); /* copy on <var_recvval900:Buffer(FlatBuffer)>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (likely(varonce1149!=NULL)) {
var1150 = varonce1149;
} else {
var1151 = "atoi";
var1152 = standard___standard__NativeString___to_s_with_length(var1151, 4l);
var1150 = var1152;
varonce1149 = var1150;
}
{
var1153 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1150); /* == on <var_pname:String>*/
}
if (var1153){
{
var1154 = ((long(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__to_i]))(var_recvval900); /* to_i on <var_recvval900:Buffer>*/
}
{
var1155 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1154); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1155;
goto RET_LABEL;
} else {
if (likely(varonce1156!=NULL)) {
var1157 = varonce1156;
} else {
var1158 = "file_exists";
var1159 = standard___standard__NativeString___to_s_with_length(var1158, 11l);
var1157 = var1159;
varonce1156 = var1157;
}
{
var1160 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1157); /* == on <var_pname:String>*/
}
if (var1160){
{
var1161 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
{
var1162 = ((short int(*)(val* self))(var1161->class->vft[COLOR_standard__file__String__file_exists]))(var1161); /* file_exists on <var1161:String>*/
}
{
var1163 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var1162); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var1163;
goto RET_LABEL;
} else {
if (likely(varonce1164!=NULL)) {
var1165 = varonce1164;
} else {
var1166 = "file_mkdir";
var1167 = standard___standard__NativeString___to_s_with_length(var1166, 10l);
var1165 = var1167;
varonce1164 = var1165;
}
{
var1168 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1165); /* == on <var_pname:String>*/
}
if (var1168){
{
var1169 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
{
var1170 = ((val*(*)(val* self))(var1169->class->vft[COLOR_standard__file__String__mkdir]))(var1169); /* mkdir on <var1169:String>*/
}
var_res1171 = var1170;
if (var_res1171 == NULL) {
var1172 = 1; /* is null */
} else {
var1172 = 0; /* arg is null but recv is not */
}
if (0) {
var1173 = ((short int(*)(val* self, val* p0))(var_res1171->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res1171, ((val*)NULL)); /* == on <var_res1171:nullable Error>*/
var1172 = var1173;
}
{
var1174 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var1172); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var1174;
goto RET_LABEL;
} else {
if (likely(varonce1175!=NULL)) {
var1176 = varonce1175;
} else {
var1177 = "file_chdir";
var1178 = standard___standard__NativeString___to_s_with_length(var1177, 10l);
var1176 = var1178;
varonce1175 = var1176;
}
{
var1179 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1176); /* == on <var_pname:String>*/
}
if (var1179){
{
var1180 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
{
var1181 = ((val*(*)(val* self))(var1180->class->vft[COLOR_standard__file__String__chdir]))(var1180); /* chdir on <var1180:String>*/
}
var_res1182 = var1181;
if (var_res1182 == NULL) {
var1183 = 1; /* is null */
} else {
var1183 = 0; /* arg is null but recv is not */
}
if (0) {
var1184 = ((short int(*)(val* self, val* p0))(var_res1182->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res1182, ((val*)NULL)); /* == on <var_res1182:nullable Error>*/
var1183 = var1184;
}
{
var1185 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var1183); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var1185;
goto RET_LABEL;
} else {
if (likely(varonce1186!=NULL)) {
var1187 = varonce1186;
} else {
var1188 = "file_realpath";
var1189 = standard___standard__NativeString___to_s_with_length(var1188, 13l);
var1187 = var1189;
varonce1186 = var1187;
}
{
var1190 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1187); /* == on <var_pname:String>*/
}
if (var1190){
{
var1191 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
{
var1192 = ((val*(*)(val* self))(var1191->class->vft[COLOR_standard__file__String__realpath]))(var1191); /* realpath on <var1191:String>*/
}
{
var1193 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var1192); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var1193;
goto RET_LABEL;
} else {
if (likely(varonce1194!=NULL)) {
var1195 = varonce1194;
} else {
var1196 = "get_environ";
var1197 = standard___standard__NativeString___to_s_with_length(var1196, 11l);
var1195 = var1197;
varonce1194 = var1195;
}
{
var1198 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1195); /* == on <var_pname:String>*/
}
if (var1198){
{
var1199 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
{
var1200 = ((val*(*)(val* self))(var1199->class->vft[COLOR_standard__environ__String__environ]))(var1199); /* environ on <var1199:String>*/
}
var_txt1201 = var1200;
{
var1202 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var_txt1201); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var1202;
goto RET_LABEL;
} else {
if (likely(varonce1203!=NULL)) {
var1204 = varonce1203;
} else {
var1205 = "system";
var1206 = standard___standard__NativeString___to_s_with_length(var1205, 6l);
var1204 = var1206;
varonce1203 = var1204;
}
{
var1207 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1204); /* == on <var_pname:String>*/
}
if (var1207){
{
{ /* Inline kernel#Object#sys (self) on <self:AMethPropdef> */
var1210 = glob_sys;
var1208 = var1210;
goto RET_LABEL1209;
RET_LABEL1209:(void)0;
}
}
{
var1211 = ((val*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval900); /* to_s on <var_recvval900:Buffer>*/
}
{
var1212 = ((long(*)(val* self, val* p0))(var1208->class->vft[COLOR_standard__exec__Sys__system]))(var1208, var1211); /* system on <var1208:Sys>*/
}
var_res1213 = var1212;
{
var1214 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var_res1213); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1214;
goto RET_LABEL;
} else {
if (likely(varonce1215!=NULL)) {
var1216 = varonce1215;
} else {
var1217 = "atof";
var1218 = standard___standard__NativeString___to_s_with_length(var1217, 4l);
var1216 = var1218;
varonce1215 = var1216;
}
{
var1219 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1216); /* == on <var_pname:String>*/
}
if (var1219){
{
var1220 = ((double(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__to_f]))(var_recvval900); /* to_f on <var_recvval900:Buffer>*/
}
{
var1221 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var1220); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var1221;
goto RET_LABEL;
} else {
if (likely(varonce1222!=NULL)) {
var1223 = varonce1222;
} else {
var1224 = "fast_cstring";
var1225 = standard___standard__NativeString___to_s_with_length(var1224, 12l);
var1223 = var1225;
varonce1222 = var1223;
}
{
var1226 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1223); /* == on <var_pname:String>*/
}
if (var1226){
{
var1227 = ((char*(*)(val* self))(var_recvval900->class->vft[COLOR_standard__string__Text__to_cstring]))(var_recvval900); /* to_cstring on <var_recvval900:Buffer>*/
}
var1228 = standard___standard__NativeString___Object__to_s(var1227);
{
var1229 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1230 = ((long(*)(val* self))(var1229->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1229); /* to_i on <var1229:nullable Object(Instance)>*/
}
{
var1231 = ((val*(*)(val* self, long p0))(var1228->class->vft[COLOR_standard__string__Text__substring_from]))(var1228, var1230); /* substring_from on <var1228:String>*/
}
var_ns = var1231;
{
var1232 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var_ns); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var1232;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce1233!=NULL)) {
var1234 = varonce1233;
} else {
var1235 = "String";
var1236 = standard___standard__NativeString___to_s_with_length(var1235, 6l);
var1234 = var1236;
varonce1233 = var1234;
}
{
var1237 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var1234); /* == on <var_cname:String>*/
}
if (var1237){
if (likely(varonce1238!=NULL)) {
var1239 = varonce1238;
} else {
var1240 = "to_cstring";
var1241 = standard___standard__NativeString___to_s_with_length(var1240, 10l);
var1239 = var1241;
varonce1238 = var1239;
}
{
var1242 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
{
var1243 = ((val*(*)(val* self))(var1242->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var1242); /* mtype on <var1242:nullable Object(Instance)>*/
}
{
var1244 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__force_get_primitive_method]))(var_v, var1239, var1243); /* force_get_primitive_method on <var_v:NaiveInterpreter>*/
}
var1245 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var1245->class->vft[COLOR_standard__array__Array__with_capacity]))(var1245, 1l); /* with_capacity on <var1245:Array[Instance]>*/
}
var_1246 = var1245;
{
var1247 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_1246->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_1246, var1247); /* push on <var_1246:Array[Instance]>*/
}
{
var1248 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(var_v, var1244, var_1246); /* send on <var_v:NaiveInterpreter>*/
}
var_cs = var1248;
if (var_cs == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1037);
fatal_exit(1);
} else {
var1249 = ((val*(*)(val* self))(var_cs->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var_cs); /* val on <var_cs:nullable Instance>*/
}
if (var1249 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1037);
fatal_exit(1);
} else {
var1250 = ((val*(*)(val* self))((((long)var1249&3)?class_info[((long)var1249&3)]:var1249->class)->vft[COLOR_standard__string__Object__to_s]))(var1249); /* to_s on <var1249:nullable Object>*/
}
var_str = var1250;
if (likely(varonce1251!=NULL)) {
var1252 = varonce1251;
} else {
var1253 = "files";
var1254 = standard___standard__NativeString___to_s_with_length(var1253, 5l);
var1252 = var1254;
varonce1251 = var1252;
}
{
var1255 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1252); /* == on <var_pname:String>*/
}
if (var1255){
var1256 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self))(var1256->class->vft[COLOR_standard__kernel__Object__init]))(var1256); /* init on <var1256:Array[Instance]>*/
}
var_res1257 = var1256;
{
var1258 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__file__String__files]))(var_str); /* files on <var_str:String>*/
}
var_1259 = var1258;
{
var1260 = ((val*(*)(val* self))(var_1259->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_1259); /* iterator on <var_1259:Array[String]>*/
}
var_1261 = var1260;
for(;;) {
{
var1262 = ((short int(*)(val* self))(var_1261->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_1261); /* is_ok on <var_1261:ArrayIterator[String]>*/
}
if (var1262){
{
var1263 = ((val*(*)(val* self))(var_1261->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_1261); /* item on <var_1261:ArrayIterator[String]>*/
}
var_f = var1263;
{
var1264 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__string_instance]))(var_v, var_f); /* string_instance on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var_res1257->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res1257, var1264); /* add on <var_res1257:Array[Instance]>*/
}
{
((void(*)(val* self))(var_1261->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_1261); /* next on <var_1261:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_1261->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_1261); /* finish on <var_1261:ArrayIterator[String]>*/
}
{
var1265 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(var_v); /* mainmodule on <var_v:NaiveInterpreter>*/
}
{
var1266 = ((val*(*)(val* self))(var1265->class->vft[COLOR_nit__model__MModule__string_type]))(var1265); /* string_type on <var1265:MModule>*/
}
{
var1267 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__array_instance]))(var_v, var_res1257, var1266); /* array_instance on <var_v:NaiveInterpreter>*/
}
var = var1267;
goto RET_LABEL;
} else {
}
} else {
if (likely(varonce1268!=NULL)) {
var1269 = varonce1268;
} else {
var1270 = "calloc_string";
var1271 = standard___standard__NativeString___to_s_with_length(var1270, 13l);
var1269 = var1271;
varonce1268 = var1269;
}
{
var1272 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1269); /* == on <var_pname:String>*/
}
if (var1272){
if (likely(varonce1273!=NULL)) {
var1274 = varonce1273;
} else {
var1275 = "!";
var1276 = standard___standard__NativeString___to_s_with_length(var1275, 1l);
var1274 = var1276;
varonce1273 = var1274;
}
{
var1277 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1278 = ((long(*)(val* self))(var1277->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1277); /* to_i on <var1277:nullable Object(Instance)>*/
}
{
var1279 = ((val*(*)(val* self, long p0))(var1274->class->vft[COLOR_standard__string__String___42d]))(var1274, var1278); /* * on <var1274:String>*/
}
{
var1280 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var1279); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var1280;
goto RET_LABEL;
} else {
if (likely(varonce1281!=NULL)) {
var1282 = varonce1281;
} else {
var1283 = "NativeArray";
var1284 = standard___standard__NativeString___to_s_with_length(var1283, 11l);
var1282 = var1284;
varonce1281 = var1282;
}
{
var1285 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var1282); /* == on <var_cname:String>*/
}
if (var1285){
if (likely(varonce1286!=NULL)) {
var1287 = varonce1286;
} else {
var1288 = "new";
var1289 = standard___standard__NativeString___to_s_with_length(var1288, 3l);
var1287 = var1289;
varonce1286 = var1287;
}
{
var1290 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1287); /* == on <var_pname:String>*/
}
if (var1290){
var1291 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
var1292 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__null_instance]))(var_v); /* null_instance on <var_v:NaiveInterpreter>*/
}
{
var1293 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1294 = ((long(*)(val* self))(var1293->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1293); /* to_i on <var1293:nullable Object(Instance)>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1291->class->vft[COLOR_standard__array__Array__filled_with]))(var1291, var1292, var1294); /* filled_with on <var1291:Array[Instance]>*/
}
var_val = var1291;
var1295 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__standard__Array__nit__Instance);
{
var1296 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
{
var1297 = ((val*(*)(val* self))(var1296->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var1296); /* mtype on <var1296:nullable Object(Instance)>*/
}
{
((void(*)(val* self, val* p0))(var1295->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var1295, var1297); /* mtype= on <var1295:PrimitiveInstance[Array[Instance]]>*/
}
{
((void(*)(val* self, val* p0))(var1295->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var1295, var_val); /* val= on <var1295:PrimitiveInstance[Array[Instance]]>*/
}
{
((void(*)(val* self))(var1295->class->vft[COLOR_standard__kernel__Object__init]))(var1295); /* init on <var1295:PrimitiveInstance[Array[Instance]]>*/
}
var_instance = var1295;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(var_v, var_instance); /* init_instance_primitive on <var_v:NaiveInterpreter>*/
}
var = var_instance;
goto RET_LABEL;
} else {
}
{
var1298 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
{
var1299 = ((val*(*)(val* self))(var1298->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var1298); /* val on <var1298:nullable Object(Instance)>*/
}
/* <var1299:nullable Object> isa Array[Instance] */
cltype1301 = type_standard__Array__nit__Instance.color;
idtype1302 = type_standard__Array__nit__Instance.id;
if(var1299 == NULL) {
var1300 = 0;
} else {
if(cltype1301 >= (((long)var1299&3)?type_info[((long)var1299&3)]:var1299->type)->table_size) {
var1300 = 0;
} else {
var1300 = (((long)var1299&3)?type_info[((long)var1299&3)]:var1299->type)->type_table[cltype1301] == idtype1302;
}
}
if (unlikely(!var1300)) {
var_class_name1303 = var1299 == NULL ? "null" : (((long)var1299&3)?type_info[((long)var1299&3)]:var1299->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[Instance]", var_class_name1303);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1052);
fatal_exit(1);
}
var_recvval1304 = var1299;
if (likely(varonce1305!=NULL)) {
var1306 = varonce1305;
} else {
var1307 = "[]";
var1308 = standard___standard__NativeString___to_s_with_length(var1307, 2l);
var1306 = var1308;
varonce1305 = var1306;
}
{
var1309 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1306); /* == on <var_pname:String>*/
}
if (var1309){
{
var1311 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1312 = ((long(*)(val* self))(var1311->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1311); /* to_i on <var1311:nullable Object(Instance)>*/
}
{
var1313 = ((long(*)(val* self))(var_recvval1304->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_recvval1304); /* length on <var_recvval1304:Array[Instance]>*/
}
{
{ /* Inline kernel#Int#>= (var1312,var1313) on <var1312:Int> */
/* Covariant cast for argument 0 (i) <var1313:Int> isa OTHER */
/* <var1313:Int> isa OTHER */
var1316 = 1; /* easy <var1313:Int> isa OTHER*/
if (unlikely(!var1316)) {
var_class_name1319 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name1319);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var1320 = var1312 >= var1313;
var1314 = var1320;
goto RET_LABEL1315;
RET_LABEL1315:(void)0;
}
}
var_1321 = var1314;
if (var1314){
var1310 = var_1321;
} else {
{
var1322 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1323 = ((long(*)(val* self))(var1322->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1322); /* to_i on <var1322:nullable Object(Instance)>*/
}
{
{ /* Inline kernel#Int#< (var1323,0l) on <var1323:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var1326 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var1326)) {
var_class_name1329 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name1329);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var1330 = var1323 < 0l;
var1324 = var1330;
goto RET_LABEL1325;
RET_LABEL1325:(void)0;
}
}
var1310 = var1324;
}
if (var1310){
if (unlikely(varonce1331==NULL)) {
var1332 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce1333!=NULL)) {
var1334 = varonce1333;
} else {
var1335 = "Illegal access on ";
var1336 = standard___standard__NativeString___to_s_with_length(var1335, 18l);
var1334 = var1336;
varonce1333 = var1334;
}
((struct instance_standard__NativeArray*)var1332)->values[0]=var1334;
if (likely(varonce1337!=NULL)) {
var1338 = varonce1337;
} else {
var1339 = " for element ";
var1340 = standard___standard__NativeString___to_s_with_length(var1339, 13l);
var1338 = var1340;
varonce1337 = var1338;
}
((struct instance_standard__NativeArray*)var1332)->values[2]=var1338;
if (likely(varonce1341!=NULL)) {
var1342 = varonce1341;
} else {
var1343 = "/";
var1344 = standard___standard__NativeString___to_s_with_length(var1343, 1l);
var1342 = var1344;
varonce1341 = var1342;
}
((struct instance_standard__NativeArray*)var1332)->values[4]=var1342;
} else {
var1332 = varonce1331;
varonce1331 = NULL;
}
{
var1345 = ((val*(*)(val* self))(var_recvval1304->class->vft[COLOR_standard__string__Object__to_s]))(var_recvval1304); /* to_s on <var_recvval1304:Array[Instance]>*/
}
((struct instance_standard__NativeArray*)var1332)->values[1]=var1345;
{
var1346 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1347 = ((long(*)(val* self))(var1346->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1346); /* to_i on <var1346:nullable Object(Instance)>*/
}
var1348 = standard__string___Int___Object__to_s(var1347);
((struct instance_standard__NativeArray*)var1332)->values[3]=var1348;
{
var1349 = ((long(*)(val* self))(var_recvval1304->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_recvval1304); /* length on <var_recvval1304:Array[Instance]>*/
}
var1350 = standard__string___Int___Object__to_s(var1349);
((struct instance_standard__NativeArray*)var1332)->values[5]=var1350;
{
var1351 = ((val*(*)(val* self))(var1332->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1332); /* native_to_s on <var1332:NativeArray[String]>*/
}
varonce1331 = var1332;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__debug]))(self, var1351); /* debug on <self:AMethPropdef>*/
}
} else {
}
{
var1352 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1353 = ((long(*)(val* self))(var1352->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1352); /* to_i on <var1352:nullable Object(Instance)>*/
}
{
var1354 = ((val*(*)(val* self, long p0))(var_recvval1304->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_recvval1304, var1353); /* [] on <var_recvval1304:Array[Instance]>*/
}
var = var1354;
goto RET_LABEL;
} else {
if (likely(varonce1355!=NULL)) {
var1356 = varonce1355;
} else {
var1357 = "[]=";
var1358 = standard___standard__NativeString___to_s_with_length(var1357, 3l);
var1356 = var1358;
varonce1355 = var1356;
}
{
var1359 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1356); /* == on <var_pname:String>*/
}
if (var1359){
{
var1360 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1361 = ((long(*)(val* self))(var1360->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1360); /* to_i on <var1360:nullable Object(Instance)>*/
}
{
var1362 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_recvval1304->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var_recvval1304, var1361, var1362); /* []= on <var_recvval1304:Array[Instance]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (likely(varonce1363!=NULL)) {
var1364 = varonce1363;
} else {
var1365 = "length";
var1366 = standard___standard__NativeString___to_s_with_length(var1365, 6l);
var1364 = var1366;
varonce1363 = var1364;
}
{
var1367 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1364); /* == on <var_pname:String>*/
}
if (var1367){
{
var1368 = ((long(*)(val* self))(var_recvval1304->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_recvval1304); /* length on <var_recvval1304:Array[Instance]>*/
}
{
var1369 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1368); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1369;
goto RET_LABEL;
} else {
if (likely(varonce1370!=NULL)) {
var1371 = varonce1370;
} else {
var1372 = "copy_to";
var1373 = standard___standard__NativeString___to_s_with_length(var1372, 7l);
var1371 = var1373;
varonce1370 = var1371;
}
{
var1374 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1371); /* == on <var_pname:String>*/
}
if (var1374){
{
var1375 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var1376 = ((long(*)(val* self))(var1375->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1375); /* to_i on <var1375:nullable Object(Instance)>*/
}
{
var1377 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1378 = ((val*(*)(val* self))(var1377->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var1377); /* val on <var1377:nullable Object(Instance)>*/
}
/* <var1378:nullable Object> isa Array[Instance] */
cltype1380 = type_standard__Array__nit__Instance.color;
idtype1381 = type_standard__Array__nit__Instance.id;
if(var1378 == NULL) {
var1379 = 0;
} else {
if(cltype1380 >= (((long)var1378&3)?type_info[((long)var1378&3)]:var1378->type)->table_size) {
var1379 = 0;
} else {
var1379 = (((long)var1378&3)?type_info[((long)var1378&3)]:var1378->type)->type_table[cltype1380] == idtype1381;
}
}
if (unlikely(!var1379)) {
var_class_name1382 = var1378 == NULL ? "null" : (((long)var1378&3)?type_info[((long)var1378&3)]:var1378->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[Instance]", var_class_name1382);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1064);
fatal_exit(1);
}
{
((void(*)(val* self, long p0, long p1, val* p2, long p3))(var_recvval1304->class->vft[COLOR_standard__array__AbstractArrayRead__copy_to]))(var_recvval1304, 0l, var1376, var1378, 0l); /* copy_to on <var_recvval1304:Array[Instance]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (likely(varonce1383!=NULL)) {
var1384 = varonce1383;
} else {
var1385 = "NativeFile";
var1386 = standard___standard__NativeString___to_s_with_length(var1385, 10l);
var1384 = var1386;
varonce1383 = var1384;
}
{
var1387 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var1384); /* == on <var_cname:String>*/
}
if (var1387){
if (likely(varonce1388!=NULL)) {
var1389 = varonce1388;
} else {
var1390 = "native_stdout";
var1391 = standard___standard__NativeString___to_s_with_length(var1390, 13l);
var1389 = var1391;
varonce1388 = var1389;
}
{
var1392 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1389); /* == on <var_pname:String>*/
}
if (var1392){
var1393 = NEW_nit__PrimitiveNativeFile(&type_nit__PrimitiveNativeFile);
{
((void(*)(val* self))(var1393->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__native_stdout]))(var1393); /* native_stdout on <var1393:PrimitiveNativeFile>*/
}
var_inst = var1393;
var1394 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__nit__PrimitiveNativeFile);
{
var1395 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MMethodDef>*/
}
{
var1396 = ((val*(*)(val* self))(var1395->class->vft[COLOR_nit__model__MClassDef__mclass]))(var1395); /* mclass on <var1395:MClassDef>*/
}
{
var1397 = ((val*(*)(val* self))(var1396->class->vft[COLOR_nit__model__MClass__mclass_type]))(var1396); /* mclass_type on <var1396:MClass>*/
}
{
((void(*)(val* self, val* p0))(var1394->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var1394, var1397); /* mtype= on <var1394:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self, val* p0))(var1394->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var1394, var_inst); /* val= on <var1394:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self))(var1394->class->vft[COLOR_standard__kernel__Object__init]))(var1394); /* init on <var1394:PrimitiveInstance[PrimitiveNativeFile]>*/
}
var_instance1398 = var1394;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(var_v, var_instance1398); /* init_instance_primitive on <var_v:NaiveInterpreter>*/
}
var = var_instance1398;
goto RET_LABEL;
} else {
if (likely(varonce1399!=NULL)) {
var1400 = varonce1399;
} else {
var1401 = "native_stdin";
var1402 = standard___standard__NativeString___to_s_with_length(var1401, 12l);
var1400 = var1402;
varonce1399 = var1400;
}
{
var1403 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1400); /* == on <var_pname:String>*/
}
if (var1403){
var1404 = NEW_nit__PrimitiveNativeFile(&type_nit__PrimitiveNativeFile);
{
((void(*)(val* self))(var1404->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__native_stdin]))(var1404); /* native_stdin on <var1404:PrimitiveNativeFile>*/
}
var_inst1405 = var1404;
var1406 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__nit__PrimitiveNativeFile);
{
var1407 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MMethodDef>*/
}
{
var1408 = ((val*(*)(val* self))(var1407->class->vft[COLOR_nit__model__MClassDef__mclass]))(var1407); /* mclass on <var1407:MClassDef>*/
}
{
var1409 = ((val*(*)(val* self))(var1408->class->vft[COLOR_nit__model__MClass__mclass_type]))(var1408); /* mclass_type on <var1408:MClass>*/
}
{
((void(*)(val* self, val* p0))(var1406->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var1406, var1409); /* mtype= on <var1406:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self, val* p0))(var1406->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var1406, var_inst1405); /* val= on <var1406:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self))(var1406->class->vft[COLOR_standard__kernel__Object__init]))(var1406); /* init on <var1406:PrimitiveInstance[PrimitiveNativeFile]>*/
}
var_instance1410 = var1406;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(var_v, var_instance1410); /* init_instance_primitive on <var_v:NaiveInterpreter>*/
}
var = var_instance1410;
goto RET_LABEL;
} else {
if (likely(varonce1411!=NULL)) {
var1412 = varonce1411;
} else {
var1413 = "native_stderr";
var1414 = standard___standard__NativeString___to_s_with_length(var1413, 13l);
var1412 = var1414;
varonce1411 = var1412;
}
{
var1415 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1412); /* == on <var_pname:String>*/
}
if (var1415){
var1416 = NEW_nit__PrimitiveNativeFile(&type_nit__PrimitiveNativeFile);
{
((void(*)(val* self))(var1416->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__native_stderr]))(var1416); /* native_stderr on <var1416:PrimitiveNativeFile>*/
}
var_inst1417 = var1416;
var1418 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__nit__PrimitiveNativeFile);
{
var1419 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MMethodDef>*/
}
{
var1420 = ((val*(*)(val* self))(var1419->class->vft[COLOR_nit__model__MClassDef__mclass]))(var1419); /* mclass on <var1419:MClassDef>*/
}
{
var1421 = ((val*(*)(val* self))(var1420->class->vft[COLOR_nit__model__MClass__mclass_type]))(var1420); /* mclass_type on <var1420:MClass>*/
}
{
((void(*)(val* self, val* p0))(var1418->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var1418, var1421); /* mtype= on <var1418:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self, val* p0))(var1418->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var1418, var_inst1417); /* val= on <var1418:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self))(var1418->class->vft[COLOR_standard__kernel__Object__init]))(var1418); /* init on <var1418:PrimitiveInstance[PrimitiveNativeFile]>*/
}
var_instance1422 = var1418;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(var_v, var_instance1422); /* init_instance_primitive on <var_v:NaiveInterpreter>*/
}
var = var_instance1422;
goto RET_LABEL;
} else {
if (likely(varonce1423!=NULL)) {
var1424 = varonce1423;
} else {
var1425 = "io_open_read";
var1426 = standard___standard__NativeString___to_s_with_length(var1425, 12l);
var1424 = var1426;
varonce1423 = var1424;
}
{
var1427 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1424); /* == on <var_pname:String>*/
}
if (var1427){
{
var1428 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1429 = ((val*(*)(val* self))(var1428->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var1428); /* val on <var1428:nullable Object(Instance)>*/
}
/* <var1429:nullable Object> isa Buffer */
cltype1431 = type_standard__Buffer.color;
idtype1432 = type_standard__Buffer.id;
if(var1429 == NULL) {
var1430 = 0;
} else {
if(cltype1431 >= (((long)var1429&3)?type_info[((long)var1429&3)]:var1429->type)->table_size) {
var1430 = 0;
} else {
var1430 = (((long)var1429&3)?type_info[((long)var1429&3)]:var1429->type)->type_table[cltype1431] == idtype1432;
}
}
if (unlikely(!var1430)) {
var_class_name1433 = var1429 == NULL ? "null" : (((long)var1429&3)?type_info[((long)var1429&3)]:var1429->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Buffer", var_class_name1433);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1084);
fatal_exit(1);
}
var_a1 = var1429;
var1434 = NEW_nit__PrimitiveNativeFile(&type_nit__PrimitiveNativeFile);
{
var1435 = ((val*(*)(val* self))(var_a1->class->vft[COLOR_standard__string__Object__to_s]))(var_a1); /* to_s on <var_a1:Buffer>*/
}
{
((void(*)(val* self, val* p0))(var1434->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__io_open_read]))(var1434, var1435); /* io_open_read on <var1434:PrimitiveNativeFile>*/
}
var_inst1436 = var1434;
var1437 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__nit__PrimitiveNativeFile);
{
var1438 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MMethodDef>*/
}
{
var1439 = ((val*(*)(val* self))(var1438->class->vft[COLOR_nit__model__MClassDef__mclass]))(var1438); /* mclass on <var1438:MClassDef>*/
}
{
var1440 = ((val*(*)(val* self))(var1439->class->vft[COLOR_nit__model__MClass__mclass_type]))(var1439); /* mclass_type on <var1439:MClass>*/
}
{
((void(*)(val* self, val* p0))(var1437->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var1437, var1440); /* mtype= on <var1437:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self, val* p0))(var1437->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var1437, var_inst1436); /* val= on <var1437:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self))(var1437->class->vft[COLOR_standard__kernel__Object__init]))(var1437); /* init on <var1437:PrimitiveInstance[PrimitiveNativeFile]>*/
}
var_instance1441 = var1437;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(var_v, var_instance1441); /* init_instance_primitive on <var_v:NaiveInterpreter>*/
}
var = var_instance1441;
goto RET_LABEL;
} else {
if (likely(varonce1442!=NULL)) {
var1443 = varonce1442;
} else {
var1444 = "io_open_write";
var1445 = standard___standard__NativeString___to_s_with_length(var1444, 13l);
var1443 = var1445;
varonce1442 = var1443;
}
{
var1446 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1443); /* == on <var_pname:String>*/
}
if (var1446){
{
var1447 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1448 = ((val*(*)(val* self))(var1447->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var1447); /* val on <var1447:nullable Object(Instance)>*/
}
/* <var1448:nullable Object> isa Buffer */
cltype1450 = type_standard__Buffer.color;
idtype1451 = type_standard__Buffer.id;
if(var1448 == NULL) {
var1449 = 0;
} else {
if(cltype1450 >= (((long)var1448&3)?type_info[((long)var1448&3)]:var1448->type)->table_size) {
var1449 = 0;
} else {
var1449 = (((long)var1448&3)?type_info[((long)var1448&3)]:var1448->type)->type_table[cltype1450] == idtype1451;
}
}
if (unlikely(!var1449)) {
var_class_name1452 = var1448 == NULL ? "null" : (((long)var1448&3)?type_info[((long)var1448&3)]:var1448->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Buffer", var_class_name1452);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1090);
fatal_exit(1);
}
var_a11453 = var1448;
var1454 = NEW_nit__PrimitiveNativeFile(&type_nit__PrimitiveNativeFile);
{
var1455 = ((val*(*)(val* self))(var_a11453->class->vft[COLOR_standard__string__Object__to_s]))(var_a11453); /* to_s on <var_a11453:Buffer>*/
}
{
((void(*)(val* self, val* p0))(var1454->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__io_open_write]))(var1454, var1455); /* io_open_write on <var1454:PrimitiveNativeFile>*/
}
var_inst1456 = var1454;
var1457 = NEW_nit__PrimitiveInstance(&type_nit__PrimitiveInstance__nit__PrimitiveNativeFile);
{
var1458 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mclassdef]))(var_mpropdef); /* mclassdef on <var_mpropdef:MMethodDef>*/
}
{
var1459 = ((val*(*)(val* self))(var1458->class->vft[COLOR_nit__model__MClassDef__mclass]))(var1458); /* mclass on <var1458:MClassDef>*/
}
{
var1460 = ((val*(*)(val* self))(var1459->class->vft[COLOR_nit__model__MClass__mclass_type]))(var1459); /* mclass_type on <var1459:MClass>*/
}
{
((void(*)(val* self, val* p0))(var1457->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var1457, var1460); /* mtype= on <var1457:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self, val* p0))(var1457->class->vft[COLOR_nit__naive_interpreter__PrimitiveInstance__val_61d]))(var1457, var_inst1456); /* val= on <var1457:PrimitiveInstance[PrimitiveNativeFile]>*/
}
{
((void(*)(val* self))(var1457->class->vft[COLOR_standard__kernel__Object__init]))(var1457); /* init on <var1457:PrimitiveInstance[PrimitiveNativeFile]>*/
}
var_instance1461 = var1457;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance_primitive]))(var_v, var_instance1461); /* init_instance_primitive on <var_v:NaiveInterpreter>*/
}
var = var_instance1461;
goto RET_LABEL;
} else {
}
}
}
}
}
{
var1462 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
{
var1463 = ((val*(*)(val* self))(var1462->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var1462); /* val on <var1462:nullable Object(Instance)>*/
}
var_recvval1464 = var1463;
if (likely(varonce1465!=NULL)) {
var1466 = varonce1465;
} else {
var1467 = "io_write";
var1468 = standard___standard__NativeString___to_s_with_length(var1467, 8l);
var1466 = var1468;
varonce1465 = var1466;
}
{
var1469 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1466); /* == on <var_pname:String>*/
}
if (var1469){
{
var1470 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1471 = ((val*(*)(val* self))(var1470->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var1470); /* val on <var1470:nullable Object(Instance)>*/
}
/* <var1471:nullable Object> isa Buffer */
cltype1473 = type_standard__Buffer.color;
idtype1474 = type_standard__Buffer.id;
if(var1471 == NULL) {
var1472 = 0;
} else {
if(cltype1473 >= (((long)var1471&3)?type_info[((long)var1471&3)]:var1471->type)->table_size) {
var1472 = 0;
} else {
var1472 = (((long)var1471&3)?type_info[((long)var1471&3)]:var1471->type)->type_table[cltype1473] == idtype1474;
}
}
if (unlikely(!var1472)) {
var_class_name1475 = var1471 == NULL ? "null" : (((long)var1471&3)?type_info[((long)var1471&3)]:var1471->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Buffer", var_class_name1475);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1098);
fatal_exit(1);
}
var_a11476 = var1471;
/* <var_recvval1464:nullable Object> isa PrimitiveNativeFile */
cltype1478 = type_nit__PrimitiveNativeFile.color;
idtype1479 = type_nit__PrimitiveNativeFile.id;
if(var_recvval1464 == NULL) {
var1477 = 0;
} else {
if(cltype1478 >= (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->table_size) {
var1477 = 0;
} else {
var1477 = (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->type_table[cltype1478] == idtype1479;
}
}
if (unlikely(!var1477)) {
var_class_name1480 = var_recvval1464 == NULL ? "null" : (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "PrimitiveNativeFile", var_class_name1480);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1099);
fatal_exit(1);
}
{
var1481 = ((char*(*)(val* self))(var_a11476->class->vft[COLOR_standard__string__Text__to_cstring]))(var_a11476); /* to_cstring on <var_a11476:Buffer>*/
}
{
var1482 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var1483 = ((long(*)(val* self))(var1482->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1482); /* to_i on <var1482:nullable Object(Instance)>*/
}
{
var1484 = ((long(*)(val* self, char* p0, long p1))(var_recvval1464->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__io_write]))(var_recvval1464, var1481, var1483); /* io_write on <var_recvval1464:nullable Object(PrimitiveNativeFile)>*/
}
{
var1485 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1484); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1485;
goto RET_LABEL;
} else {
if (likely(varonce1486!=NULL)) {
var1487 = varonce1486;
} else {
var1488 = "io_read";
var1489 = standard___standard__NativeString___to_s_with_length(var1488, 7l);
var1487 = var1489;
varonce1486 = var1487;
}
{
var1490 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1487); /* == on <var_pname:String>*/
}
if (var1490){
{
var1491 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1492 = ((val*(*)(val* self))(var1491->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var1491); /* val on <var1491:nullable Object(Instance)>*/
}
/* <var1492:nullable Object> isa Buffer */
cltype1494 = type_standard__Buffer.color;
idtype1495 = type_standard__Buffer.id;
if(var1492 == NULL) {
var1493 = 0;
} else {
if(cltype1494 >= (((long)var1492&3)?type_info[((long)var1492&3)]:var1492->type)->table_size) {
var1493 = 0;
} else {
var1493 = (((long)var1492&3)?type_info[((long)var1492&3)]:var1492->type)->type_table[cltype1494] == idtype1495;
}
}
if (unlikely(!var1493)) {
var_class_name1496 = var1492 == NULL ? "null" : (((long)var1492&3)?type_info[((long)var1492&3)]:var1492->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Buffer", var_class_name1496);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1101);
fatal_exit(1);
}
var_a11497 = var1492;
var1498 = NULL/*special!*/;
{
var1499 = ((long(*)(val* self))(var_a11497->class->vft[COLOR_standard__string__Text__length]))(var_a11497); /* length on <var_a11497:Buffer>*/
}
{
{ /* Inline string#NativeString#new (var1498,var1499) on <var1498:NativeString> */
var1502 = (char*)nit_alloc(var1499);
var1500 = var1502;
goto RET_LABEL1501;
RET_LABEL1501:(void)0;
}
}
var_ns1503 = var1500;
/* <var_recvval1464:nullable Object> isa PrimitiveNativeFile */
cltype1505 = type_nit__PrimitiveNativeFile.color;
idtype1506 = type_nit__PrimitiveNativeFile.id;
if(var_recvval1464 == NULL) {
var1504 = 0;
} else {
if(cltype1505 >= (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->table_size) {
var1504 = 0;
} else {
var1504 = (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->type_table[cltype1505] == idtype1506;
}
}
if (unlikely(!var1504)) {
var_class_name1507 = var_recvval1464 == NULL ? "null" : (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "PrimitiveNativeFile", var_class_name1507);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1103);
fatal_exit(1);
}
{
var1508 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var1509 = ((long(*)(val* self))(var1508->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1508); /* to_i on <var1508:nullable Object(Instance)>*/
}
{
var1510 = ((long(*)(val* self, char* p0, long p1))(var_recvval1464->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__io_read]))(var_recvval1464, var_ns1503, var1509); /* io_read on <var_recvval1464:nullable Object(PrimitiveNativeFile)>*/
}
var_len = var1510;
{
((void(*)(val* self))(var_a11497->class->vft[COLOR_standard__string__Buffer__clear]))(var_a11497); /* clear on <var_a11497:Buffer>*/
}
var1511 = standard___standard__NativeString___to_s_with_length(var_ns1503, var_len);
{
((void(*)(val* self, val* p0))(var_a11497->class->vft[COLOR_standard__string__Buffer__append]))(var_a11497, var1511); /* append on <var_a11497:Buffer>*/
}
{
var1512 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var_len); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1512;
goto RET_LABEL;
} else {
if (likely(varonce1513!=NULL)) {
var1514 = varonce1513;
} else {
var1515 = "flush";
var1516 = standard___standard__NativeString___to_s_with_length(var1515, 5l);
var1514 = var1516;
varonce1513 = var1514;
}
{
var1517 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1514); /* == on <var_pname:String>*/
}
if (var1517){
/* <var_recvval1464:nullable Object> isa PrimitiveNativeFile */
cltype1519 = type_nit__PrimitiveNativeFile.color;
idtype1520 = type_nit__PrimitiveNativeFile.id;
if(var_recvval1464 == NULL) {
var1518 = 0;
} else {
if(cltype1519 >= (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->table_size) {
var1518 = 0;
} else {
var1518 = (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->type_table[cltype1519] == idtype1520;
}
}
if (unlikely(!var1518)) {
var_class_name1521 = var_recvval1464 == NULL ? "null" : (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "PrimitiveNativeFile", var_class_name1521);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1108);
fatal_exit(1);
}
{
var1522 = ((long(*)(val* self))(var_recvval1464->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__flush]))(var_recvval1464); /* flush on <var_recvval1464:nullable Object(PrimitiveNativeFile)>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (likely(varonce1523!=NULL)) {
var1524 = varonce1523;
} else {
var1525 = "io_close";
var1526 = standard___standard__NativeString___to_s_with_length(var1525, 8l);
var1524 = var1526;
varonce1523 = var1524;
}
{
var1527 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1524); /* == on <var_pname:String>*/
}
if (var1527){
/* <var_recvval1464:nullable Object> isa PrimitiveNativeFile */
cltype1529 = type_nit__PrimitiveNativeFile.color;
idtype1530 = type_nit__PrimitiveNativeFile.id;
if(var_recvval1464 == NULL) {
var1528 = 0;
} else {
if(cltype1529 >= (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->table_size) {
var1528 = 0;
} else {
var1528 = (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->type_table[cltype1529] == idtype1530;
}
}
if (unlikely(!var1528)) {
var_class_name1531 = var_recvval1464 == NULL ? "null" : (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "PrimitiveNativeFile", var_class_name1531);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1111);
fatal_exit(1);
}
{
var1532 = ((long(*)(val* self))(var_recvval1464->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__io_close]))(var_recvval1464); /* io_close on <var_recvval1464:nullable Object(PrimitiveNativeFile)>*/
}
{
var1533 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1532); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1533;
goto RET_LABEL;
} else {
if (likely(varonce1534!=NULL)) {
var1535 = varonce1534;
} else {
var1536 = "set_buffering_type";
var1537 = standard___standard__NativeString___to_s_with_length(var1536, 18l);
var1535 = var1537;
varonce1534 = var1535;
}
{
var1538 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1535); /* == on <var_pname:String>*/
}
if (var1538){
/* <var_recvval1464:nullable Object> isa PrimitiveNativeFile */
cltype1540 = type_nit__PrimitiveNativeFile.color;
idtype1541 = type_nit__PrimitiveNativeFile.id;
if(var_recvval1464 == NULL) {
var1539 = 0;
} else {
if(cltype1540 >= (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->table_size) {
var1539 = 0;
} else {
var1539 = (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->type_table[cltype1540] == idtype1541;
}
}
if (unlikely(!var1539)) {
var_class_name1542 = var_recvval1464 == NULL ? "null" : (((long)var_recvval1464&3)?type_info[((long)var_recvval1464&3)]:var_recvval1464->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "PrimitiveNativeFile", var_class_name1542);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1113);
fatal_exit(1);
}
{
var1543 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1544 = ((long(*)(val* self))(var1543->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1543); /* to_i on <var1543:nullable Object(Instance)>*/
}
{
var1545 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var1546 = ((long(*)(val* self))(var1545->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1545); /* to_i on <var1545:nullable Object(Instance)>*/
}
{
var1547 = ((long(*)(val* self, long p0, long p1))(var_recvval1464->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__set_buffering_type]))(var_recvval1464, var1544, var1546); /* set_buffering_type on <var_recvval1464:nullable Object(PrimitiveNativeFile)>*/
}
{
var1548 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1547); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1548;
goto RET_LABEL;
} else {
}
}
}
}
}
} else {
if (likely(varonce1549!=NULL)) {
var1550 = varonce1549;
} else {
var1551 = "native_argc";
var1552 = standard___standard__NativeString___to_s_with_length(var1551, 11l);
var1550 = var1552;
varonce1549 = var1550;
}
{
var1553 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1550); /* == on <var_pname:String>*/
}
if (var1553){
{
var1554 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__arguments]))(var_v); /* arguments on <var_v:NaiveInterpreter>*/
}
{
var1555 = ((long(*)(val* self))(var1554->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var1554); /* length on <var1554:Array[String]>*/
}
{
var1556 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1555); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1556;
goto RET_LABEL;
} else {
if (likely(varonce1557!=NULL)) {
var1558 = varonce1557;
} else {
var1559 = "native_argv";
var1560 = standard___standard__NativeString___to_s_with_length(var1559, 11l);
var1558 = var1560;
varonce1557 = var1558;
}
{
var1561 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1558); /* == on <var_pname:String>*/
}
if (var1561){
{
var1562 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__arguments]))(var_v); /* arguments on <var_v:NaiveInterpreter>*/
}
{
var1563 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1564 = ((long(*)(val* self))(var1563->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1563); /* to_i on <var1563:nullable Object(Instance)>*/
}
{
var1565 = ((val*(*)(val* self, long p0))(var1562->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1562, var1564); /* [] on <var1562:Array[String]>*/
}
var_txt1566 = var1565;
{
var1567 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var_txt1566); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var1567;
goto RET_LABEL;
} else {
if (likely(varonce1568!=NULL)) {
var1569 = varonce1568;
} else {
var1570 = "native_argc";
var1571 = standard___standard__NativeString___to_s_with_length(var1570, 11l);
var1569 = var1571;
varonce1568 = var1569;
}
{
var1572 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1569); /* == on <var_pname:String>*/
}
if (var1572){
{
var1573 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__arguments]))(var_v); /* arguments on <var_v:NaiveInterpreter>*/
}
{
var1574 = ((long(*)(val* self))(var1573->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var1573); /* length on <var1573:Array[String]>*/
}
{
var1575 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1574); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1575;
goto RET_LABEL;
} else {
if (likely(varonce1576!=NULL)) {
var1577 = varonce1576;
} else {
var1578 = "native_argv";
var1579 = standard___standard__NativeString___to_s_with_length(var1578, 11l);
var1577 = var1579;
varonce1576 = var1577;
}
{
var1580 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1577); /* == on <var_pname:String>*/
}
if (var1580){
{
var1581 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__arguments]))(var_v); /* arguments on <var_v:NaiveInterpreter>*/
}
{
var1582 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1583 = ((long(*)(val* self))(var1582->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1582); /* to_i on <var1582:nullable Object(Instance)>*/
}
{
var1584 = ((val*(*)(val* self, long p0))(var1581->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1581, var1583); /* [] on <var1581:Array[String]>*/
}
var_txt1585 = var1584;
{
var1586 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var_txt1585); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var1586;
goto RET_LABEL;
} else {
if (likely(varonce1587!=NULL)) {
var1588 = varonce1587;
} else {
var1589 = "get_time";
var1590 = standard___standard__NativeString___to_s_with_length(var1589, 8l);
var1588 = var1590;
varonce1587 = var1588;
}
{
var1591 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1588); /* == on <var_pname:String>*/
}
if (var1591){
{
var1592 = ((long(*)(val* self))(self->class->vft[COLOR_standard__time__Object__get_time]))(self); /* get_time on <self:AMethPropdef>*/
}
{
var1593 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1592); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1593;
goto RET_LABEL;
} else {
if (likely(varonce1594!=NULL)) {
var1595 = varonce1594;
} else {
var1596 = "srand";
var1597 = standard___standard__NativeString___to_s_with_length(var1596, 5l);
var1595 = var1597;
varonce1594 = var1595;
}
{
var1598 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1595); /* == on <var_pname:String>*/
}
if (var1598){
var1599 = glob_sys;
{
((void(*)(val* self))(var1599->class->vft[COLOR_standard__math__Sys__srand]))(var1599); /* srand on <var1599:Sys>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (likely(varonce1600!=NULL)) {
var1601 = varonce1600;
} else {
var1602 = "srand_from";
var1603 = standard___standard__NativeString___to_s_with_length(var1602, 10l);
var1601 = var1603;
varonce1600 = var1601;
}
{
var1604 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1601); /* == on <var_pname:String>*/
}
if (var1604){
var1605 = glob_sys;
{
var1606 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1607 = ((long(*)(val* self))(var1606->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1606); /* to_i on <var1606:nullable Object(Instance)>*/
}
{
((void(*)(val* self, long p0))(var1605->class->vft[COLOR_standard__math__Sys__srand_from]))(var1605, var1607); /* srand_from on <var1605:Sys>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (likely(varonce1608!=NULL)) {
var1609 = varonce1608;
} else {
var1610 = "atan2";
var1611 = standard___standard__NativeString___to_s_with_length(var1610, 5l);
var1609 = var1611;
varonce1608 = var1609;
}
{
var1612 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1609); /* == on <var_pname:String>*/
}
if (var1612){
var1613 = glob_sys;
{
var1614 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1615 = ((double(*)(val* self))(var1614->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var1614); /* to_f on <var1614:nullable Object(Instance)>*/
}
{
var1616 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var1617 = ((double(*)(val* self))(var1616->class->vft[COLOR_nit__naive_interpreter__Instance__to_f]))(var1616); /* to_f on <var1616:nullable Object(Instance)>*/
}
{
var1618 = ((double(*)(val* self, double p0, double p1))(var1613->class->vft[COLOR_standard__math__Sys__atan2]))(var1613, var1615, var1617); /* atan2 on <var1613:Sys>*/
}
{
var1619 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var1618); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var1619;
goto RET_LABEL;
} else {
if (likely(varonce1620!=NULL)) {
var1621 = varonce1620;
} else {
var1622 = "pi";
var1623 = standard___standard__NativeString___to_s_with_length(var1622, 2l);
var1621 = var1623;
varonce1620 = var1621;
}
{
var1624 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1621); /* == on <var_pname:String>*/
}
if (var1624){
var1625 = glob_sys;
{
var1626 = ((double(*)(val* self))(var1625->class->vft[COLOR_standard__math__Sys__pi]))(var1625); /* pi on <var1625:Sys>*/
}
{
var1627 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var1626); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var1627;
goto RET_LABEL;
} else {
if (likely(varonce1628!=NULL)) {
var1629 = varonce1628;
} else {
var1630 = "lexer_goto";
var1631 = standard___standard__NativeString___to_s_with_length(var1630, 10l);
var1629 = var1631;
varonce1628 = var1629;
}
{
var1632 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1629); /* == on <var_pname:String>*/
}
if (var1632){
{
var1633 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1634 = ((long(*)(val* self))(var1633->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1633); /* to_i on <var1633:nullable Object(Instance)>*/
}
{
var1635 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var1636 = ((long(*)(val* self))(var1635->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1635); /* to_i on <var1635:nullable Object(Instance)>*/
}
{
var1637 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__lexer_goto]))(self, var1634, var1636); /* lexer_goto on <self:AMethPropdef>*/
}
{
var1638 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1637); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1638;
goto RET_LABEL;
} else {
if (likely(varonce1639!=NULL)) {
var1640 = varonce1639;
} else {
var1641 = "lexer_accept";
var1642 = standard___standard__NativeString___to_s_with_length(var1641, 12l);
var1640 = var1642;
varonce1639 = var1640;
}
{
var1643 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1640); /* == on <var_pname:String>*/
}
if (var1643){
{
var1644 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1645 = ((long(*)(val* self))(var1644->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1644); /* to_i on <var1644:nullable Object(Instance)>*/
}
{
var1646 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_nit__tables__TablesCapable__lexer_accept]))(self, var1645); /* lexer_accept on <self:AMethPropdef>*/
}
{
var1647 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1646); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1647;
goto RET_LABEL;
} else {
if (likely(varonce1648!=NULL)) {
var1649 = varonce1648;
} else {
var1650 = "parser_goto";
var1651 = standard___standard__NativeString___to_s_with_length(var1650, 11l);
var1649 = var1651;
varonce1648 = var1649;
}
{
var1652 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1649); /* == on <var_pname:String>*/
}
if (var1652){
{
var1653 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1654 = ((long(*)(val* self))(var1653->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1653); /* to_i on <var1653:nullable Object(Instance)>*/
}
{
var1655 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var1656 = ((long(*)(val* self))(var1655->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1655); /* to_i on <var1655:nullable Object(Instance)>*/
}
{
var1657 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_goto]))(self, var1654, var1656); /* parser_goto on <self:AMethPropdef>*/
}
{
var1658 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1657); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1658;
goto RET_LABEL;
} else {
if (likely(varonce1659!=NULL)) {
var1660 = varonce1659;
} else {
var1661 = "parser_action";
var1662 = standard___standard__NativeString___to_s_with_length(var1661, 13l);
var1660 = var1662;
varonce1659 = var1660;
}
{
var1663 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1660); /* == on <var_pname:String>*/
}
if (var1663){
{
var1664 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
var1665 = ((long(*)(val* self))(var1664->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1664); /* to_i on <var1664:nullable Object(Instance)>*/
}
{
var1666 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 2l); /* [] on <var_args:Array[Instance]>*/
}
{
var1667 = ((long(*)(val* self))(var1666->class->vft[COLOR_nit__naive_interpreter__Instance__to_i]))(var1666); /* to_i on <var1666:nullable Object(Instance)>*/
}
{
var1668 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_action]))(self, var1665, var1667); /* parser_action on <self:AMethPropdef>*/
}
{
var1669 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1668); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1669;
goto RET_LABEL;
} else {
if (likely(varonce1670!=NULL)) {
var1671 = varonce1670;
} else {
var1672 = "file_getcwd";
var1673 = standard___standard__NativeString___to_s_with_length(var1672, 11l);
var1671 = var1673;
varonce1670 = var1671;
}
{
var1674 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1671); /* == on <var_pname:String>*/
}
if (var1674){
var1675 = glob_sys;
{
var1676 = ((val*(*)(val* self))(var1675->class->vft[COLOR_standard__file__Sys__getcwd]))(var1675); /* getcwd on <var1675:Sys>*/
}
{
var1677 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__native_string_instance]))(var_v, var1676); /* native_string_instance on <var_v:NaiveInterpreter>*/
}
var = var1677;
goto RET_LABEL;
} else {
if (likely(varonce1678!=NULL)) {
var1679 = varonce1678;
} else {
var1680 = "errno";
var1681 = standard___standard__NativeString___to_s_with_length(var1680, 5l);
var1679 = var1681;
varonce1678 = var1679;
}
{
var1682 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1679); /* == on <var_pname:String>*/
}
if (var1682){
{
{ /* Inline kernel#Object#sys (self) on <self:AMethPropdef> */
var1685 = glob_sys;
var1683 = var1685;
goto RET_LABEL1684;
RET_LABEL1684:(void)0;
}
}
{
var1686 = ((long(*)(val* self))(var1683->class->vft[COLOR_standard__kernel__Sys__errno]))(var1683); /* errno on <var1683:Sys>*/
}
{
var1687 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var1686); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var1687;
goto RET_LABEL;
} else {
if (likely(varonce1688!=NULL)) {
var1689 = varonce1688;
} else {
var1690 = "address_is_null";
var1691 = standard___standard__NativeString___to_s_with_length(var1690, 15l);
var1689 = var1691;
varonce1688 = var1689;
}
{
var1692 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1689); /* == on <var_pname:String>*/
}
if (var1692){
{
var1693 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 0l); /* [] on <var_args:Array[Instance]>*/
}
var_recv1694 = var1693;
/* <var_recv1694:Instance> isa PrimitiveInstance[PrimitiveNativeFile] */
cltype1696 = type_nit__PrimitiveInstance__nit__PrimitiveNativeFile.color;
idtype1697 = type_nit__PrimitiveInstance__nit__PrimitiveNativeFile.id;
if(cltype1696 >= var_recv1694->type->table_size) {
var1695 = 0;
} else {
var1695 = var_recv1694->type->type_table[cltype1696] == idtype1697;
}
if (var1695){
{
var1698 = ((val*(*)(val* self))(var_recv1694->class->vft[COLOR_nit__naive_interpreter__Instance__val]))(var_recv1694); /* val on <var_recv1694:Instance(PrimitiveInstance[PrimitiveNativeFile])>*/
}
{
var1699 = ((short int(*)(val* self))(var1698->class->vft[COLOR_nit__primitive_types__PrimitiveNativeFile__address_is_null]))(var1698); /* address_is_null on <var1698:nullable Object(PrimitiveNativeFile)>*/
}
{
var1700 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var1699); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var1700;
goto RET_LABEL;
} else {
}
{
var1701 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__false_instance]))(var_v); /* false_instance on <var_v:NaiveInterpreter>*/
}
var = var1701;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
{
var1702 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__error_instance]))(var_v); /* error_instance on <var_v:NaiveInterpreter>*/
}
var = var1702;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AAttrPropdef#call for (self: AAttrPropdef, NaiveInterpreter, MMethodDef, Array[Instance]): nullable Instance */
val* nit__naive_interpreter___AAttrPropdef___APropdef__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[Instance] */;
val* var1 /* : nullable Object */;
val* var_recv /* var recv: Instance */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : nullable MPropDef */;
val* var4 /* : MProperty */;
val* var_attr /* var attr: MAttribute */;
val* var5 /* : nullable MMethodDef */;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Instance */;
val* var16 /* : Frame */;
val* var_f /* var f: Frame */;
val* var17 /* : Instance */;
val* var18 /* : nullable MMethodDef */;
short int var19 /* : Bool */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
var_v = p0;
var_mpropdef = p1;
var_args = p2;
{
var1 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
var_recv = var1;
/* <var_recv:Instance> isa MutableInstance */
cltype = type_nit__MutableInstance.color;
idtype = type_nit__MutableInstance.id;
if(cltype >= var_recv->type->table_size) {
var2 = 0;
} else {
var2 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1164);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1165);
fatal_exit(1);
} else {
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var3); /* mproperty on <var3:nullable MPropDef(nullable MAttributeDef)>*/
}
var_attr = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mreadpropdef]))(self); /* mreadpropdef on <self:AAttrPropdef>*/
}
{
var6 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, var5); /* == on <var_mpropdef:MMethodDef>*/
}
if (var6){
{
var7 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[Instance]>*/
}
{
{ /* Inline kernel#Int#== (var7,1l) on <var7:Int> */
var10 = var7 == 1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1167);
fatal_exit(1);
}
{
var12 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__is_lazy]))(self); /* is_lazy on <self:AAttrPropdef>*/
}
var13 = !var12;
var_ = var13;
if (var13){
var11 = var_;
} else {
{
var14 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__isset_attribute]))(var_v, var_attr, var_recv); /* isset_attribute on <var_v:NaiveInterpreter>*/
}
var11 = var14;
}
if (var11){
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__read_attribute]))(var_v, var_attr, var_recv); /* read_attribute on <var_v:NaiveInterpreter>*/
}
var = var15;
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__new_frame]))(var_v, self, var_mpropdef, var_args); /* new_frame on <var_v:NaiveInterpreter>*/
}
var_f = var16;
{
var17 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__AAttrPropdef__evaluate_expr]))(self, var_v, var_recv, var_f); /* evaluate_expr on <self:AAttrPropdef>*/
}
var = var17;
goto RET_LABEL;
} else {
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__mwritepropdef]))(self); /* mwritepropdef on <self:AAttrPropdef>*/
}
{
var19 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, var18); /* == on <var_mpropdef:MMethodDef>*/
}
if (var19){
{
var20 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[Instance]>*/
}
{
{ /* Inline kernel#Int#== (var20,2l) on <var20:Int> */
var23 = var20 == 2l;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1172);
fatal_exit(1);
}
{
var24 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, 1l); /* [] on <var_args:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_attribute]))(var_v, var_attr, var_recv, var24); /* write_attribute on <var_v:NaiveInterpreter>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1176);
fatal_exit(1);
}
}
RET_LABEL:;
return var;
}
/* method naive_interpreter#AAttrPropdef#init_expr for (self: AAttrPropdef, NaiveInterpreter, Instance) */
void nit__naive_interpreter___AAttrPropdef___init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: NaiveInterpreter */;
val* var_recv /* var recv: Instance */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
val* var4 /* : Frame */;
val* var_f /* var f: Frame */;
val* var5 /* : Instance */;
val* var6 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var10 /* : MModule */;
val* var11 /* : MType */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var13 /* : MType */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : nullable MPropDef */;
val* var18 /* : MProperty */;
val* var19 /* : Instance */;
var_v = p0;
var_recv = p1;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__is_lazy]))(self); /* is_lazy on <self:AAttrPropdef>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__AAttrPropdef__has_value]))(self); /* has_value on <self:AAttrPropdef>*/
}
if (var1){
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1185);
fatal_exit(1);
}
var3 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var3->class->vft[COLOR_standard__array__Array__with_capacity]))(var3, 1l); /* with_capacity on <var3:Array[Instance]>*/
}
var_ = var3;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_recv); /* push on <var_:Array[Instance]>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__new_frame]))(var_v, self, var2, var_); /* new_frame on <var_v:NaiveInterpreter>*/
}
var_f = var4;
{
var5 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__AAttrPropdef__evaluate_expr]))(self, var_v, var_recv, var_f); /* evaluate_expr on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
var_mpropdef = var6;
if (var_mpropdef == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, ((val*)NULL)); /* == on <var_mpropdef:nullable MAttributeDef>*/
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var_mpropdef); /* static_mtype on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1191);
fatal_exit(1);
}
var_mtype = var9;
{
var10 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(var_v); /* mainmodule on <var_v:NaiveInterpreter>*/
}
{
var11 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var11:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1192);
fatal_exit(1);
}
{
var13 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var10, var11); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var13;
/* <var_mtype:MType> isa MNullableType */
cltype15 = type_nit__MNullableType.color;
idtype16 = type_nit__MNullableType.id;
if(cltype15 >= var_mtype->type->table_size) {
var14 = 0;
} else {
var14 = var_mtype->type->type_table[cltype15] == idtype16;
}
if (var14){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1194);
fatal_exit(1);
} else {
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var17); /* mproperty on <var17:nullable MPropDef(nullable MAttributeDef)>*/
}
{
var19 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__null_instance]))(var_v); /* null_instance on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_attribute]))(var_v, var18, var_recv, var19); /* write_attribute on <var_v:NaiveInterpreter>*/
}
} else {
}
RET_LABEL:;
}
/* method naive_interpreter#AAttrPropdef#evaluate_expr for (self: AAttrPropdef, NaiveInterpreter, Instance, Frame): Instance */
val* nit__naive_interpreter___AAttrPropdef___evaluate_expr(val* self, val* p0, val* p1, val* p2) {
val* var /* : Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var_recv /* var recv: Instance */;
val* var_f /* var f: Frame */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : List[Frame] */;
val* var3 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var4 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Instance */;
val* var_val /* var val: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Frame */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable Instance */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : List[Frame] */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable MPropDef */;
val* var21 /* : MProperty */;
var_v = p0;
var_recv = p1;
var_f = p2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1200);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(var_v); /* frames on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__Sequence__unshift]))(var2, var_f); /* unshift on <var2:List[Frame]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_expr]))(self); /* n_expr on <self:AAttrPropdef>*/
}
var_nexpr = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_block]))(self); /* n_block on <self:AAttrPropdef>*/
}
var_nblock = var4;
if (var_nexpr == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nexpr, ((val*)NULL)); /* != on <var_nexpr:nullable AExpr>*/
var5 = var6;
}
if (var5){
{
var7 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var_nexpr); /* expr on <var_v:NaiveInterpreter>*/
}
var_val = var7;
} else {
if (var_nblock == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nblock, ((val*)NULL)); /* != on <var_nblock:nullable AExpr>*/
var8 = var9;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var_nblock); /* stmt on <var_v:NaiveInterpreter>*/
}
{
var10 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__returnmark]))(var_v); /* returnmark on <var_v:NaiveInterpreter>*/
}
if (var10 == NULL) {
var11 = 0; /* <var_f:Frame> cannot be null */
} else {
var12 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_f); /* == on <var10:nullable Frame>*/
var11 = var12;
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1211);
fatal_exit(1);
}
{
var13 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapevalue]))(var_v); /* escapevalue on <var_v:NaiveInterpreter>*/
}
var_val = var13;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__returnmark_61d]))(var_v, ((val*)NULL)); /* returnmark= on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapevalue_61d]))(var_v, ((val*)NULL)); /* escapevalue= on <var_v:NaiveInterpreter>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1216);
fatal_exit(1);
}
}
if (var_val == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_val, ((val*)NULL)); /* != on <var_val:nullable Object(nullable Instance)>*/
var14 = var15;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1218);
fatal_exit(1);
}
{
var16 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frames]))(var_v); /* frames on <var_v:NaiveInterpreter>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__abstract_collection__Sequence__shift]))(var16); /* shift on <var16:List[Frame]>*/
}
{
var18 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escaping]))(var_v); /* is_escaping on <var_v:NaiveInterpreter>*/
}
var19 = !var18;
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1221);
fatal_exit(1);
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__APropdef__mpropdef]))(self); /* mpropdef on <self:AAttrPropdef>*/
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1222);
fatal_exit(1);
} else {
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var20); /* mproperty on <var20:nullable MPropDef(nullable MAttributeDef)>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_attribute]))(var_v, var21, var_recv, var_val); /* write_attribute on <var_v:NaiveInterpreter>*/
}
var = var_val;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AClassdef#call for (self: AClassdef, NaiveInterpreter, MMethodDef, Array[Instance]): nullable Instance */
val* nit__naive_interpreter___AClassdef___call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[Instance] */;
val* var1 /* : MProperty */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MModule */;
val* var10 /* : nullable Object */;
val* var11 /* : MType */;
val* var12 /* : MPropDef */;
val* var_superpd /* var superpd: MMethodDef */;
val* var13 /* : nullable Instance */;
var_v = p0;
var_mpropdef = p1;
var_args = p2;
{
var1 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MMethodDef>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_nit__model__MMethod__is_root_init]))(var1); /* is_root_init on <var1:MProperty(MMethod)>*/
}
if (var2){
{
var3 = ((long(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[Instance]>*/
}
{
{ /* Inline kernel#Int#== (var3,1l) on <var3:Int> */
var6 = var3 == 1l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1232);
fatal_exit(1);
}
{
var7 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MMethodDef>*/
}
var8 = !var7;
if (var8){
{
var9 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(var_v); /* mainmodule on <var_v:NaiveInterpreter>*/
}
{
var10 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[Instance]>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var10); /* mtype on <var10:nullable Object(Instance)>*/
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__lookup_next_definition]))(var_mpropdef, var9, var11); /* lookup_next_definition on <var_mpropdef:MMethodDef>*/
}
var_superpd = var12;
{
var13 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__call]))(var_v, var_superpd, var_args); /* call on <var_v:NaiveInterpreter>*/
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1240);
fatal_exit(1);
}
RET_LABEL:;
return var;
}
/* method naive_interpreter#AExpr#expr for (self: AExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AExpr___expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "NOT YET IMPLEMENTED expr ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 25l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__class_name]))(self); /* class_name on <self:AExpr>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var7); /* fatal on <self:AExpr>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1253);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method naive_interpreter#AExpr#stmt for (self: AExpr, NaiveInterpreter) */
void nit__naive_interpreter___AExpr___stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : nullable Instance */;
var_v = p0;
{
var = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__AExpr__expr]))(self, var_v); /* expr on <self:AExpr>*/
}
RET_LABEL:;
}
/* method naive_interpreter#ABlockExpr#expr for (self: ABlockExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ABlockExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : nullable Object */;
val* var_last /* var last: AExpr */;
val* var3 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[AExpr] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var1); /* last on <var1:ANodes[AExpr]>*/
}
var_last = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AExpr]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[AExpr]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[AExpr]>*/
}
var_e = var7;
{
var8 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e, var_last); /* == on <var_e:AExpr>*/
}
if (var8){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var_e); /* stmt on <var_v:NaiveInterpreter>*/
}
{
var9 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escaping]))(var_v); /* is_escaping on <var_v:NaiveInterpreter>*/
}
if (var9){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[AExpr]>*/
}
{
var10 = ((val*(*)(val* self, val* p0))(var_last->class->vft[COLOR_nit__naive_interpreter__AExpr__expr]))(var_last, var_v); /* expr on <var_last:AExpr>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ABlockExpr#stmt for (self: ABlockExpr, NaiveInterpreter) */
void nit__naive_interpreter___ABlockExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[AExpr] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var5 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABlockExpr__n_expr]))(self); /* n_expr on <self:ABlockExpr>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AExpr]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[AExpr]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[AExpr]>*/
}
var_e = var4;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var_e); /* stmt on <var_v:NaiveInterpreter>*/
}
{
var5 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escaping]))(var_v); /* is_escaping on <var_v:NaiveInterpreter>*/
}
if (var5){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method naive_interpreter#AVardeclExpr#expr for (self: AVardeclExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AVardeclExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : nullable AExpr */;
val* var_ne /* var ne: nullable AExpr */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Variable */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AVardeclExpr__n_expr]))(self); /* n_expr on <self:AVardeclExpr>*/
}
var_ne = var1;
if (var_ne == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_ne->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ne, ((val*)NULL)); /* != on <var_ne:nullable AExpr>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var_ne); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var4;
if (var_i == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVardeclExpr__variable]))(self); /* variable on <self:AVardeclExpr>*/
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1294);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_variable]))(var_v, var7, var_i); /* write_variable on <var_v:NaiveInterpreter>*/
}
var = var_i;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AVarExpr#expr for (self: AVarExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AVarExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : nullable Variable */;
val* var2 /* : Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarExpr>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1304);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__read_variable]))(var_v, var1); /* read_variable on <var_v:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AVarAssignExpr#expr for (self: AVarAssignExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AVarAssignExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Variable */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssignFormExpr__n_value]))(self); /* n_value on <self:AVarAssignExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var2;
if (var_i == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarAssignExpr>*/
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1313);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_variable]))(var_v, var5, var_i); /* write_variable on <var_v:NaiveInterpreter>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AVarReassignExpr#stmt for (self: AVarReassignExpr, NaiveInterpreter) */
void nit__naive_interpreter___AVarReassignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : Instance */;
val* var_vari /* var vari: Instance */;
val* var2 /* : AExpr */;
val* var3 /* : nullable Instance */;
val* var_value /* var value: nullable Instance */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable CallSite */;
val* var7 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
val* var8 /* : nullable Instance */;
val* var_res /* var res: nullable Instance */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AVarFormExpr__variable]))(self); /* variable on <self:AVarReassignExpr>*/
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1321);
fatal_exit(1);
}
var_variable = var;
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__read_variable]))(var_v, var_variable); /* read_variable on <var_v:NaiveInterpreter>*/
}
var_vari = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReassignFormExpr__n_value]))(self); /* n_value on <self:AVarReassignExpr>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var2); /* expr on <var_v:NaiveInterpreter>*/
}
var_value = var3;
if (var_value == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_value->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_value, ((val*)NULL)); /* == on <var_value:nullable Instance>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AReassignFormExpr__reassign_callsite]))(self); /* reassign_callsite on <self:AVarReassignExpr>*/
}
var7 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var7->class->vft[COLOR_standard__array__Array__with_capacity]))(var7, 2l); /* with_capacity on <var7:Array[Instance]>*/
}
var_ = var7;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_vari); /* push on <var_:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_value); /* push on <var_:Array[Instance]>*/
}
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var6, var_); /* callsite on <var_v:NaiveInterpreter>*/
}
var_res = var8;
if (var_res == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable Instance>*/
var9 = var10;
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1326);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_variable]))(var_v, var_variable, var_res); /* write_variable on <var_v:NaiveInterpreter>*/
}
RET_LABEL:;
}
/* method naive_interpreter#ASelfExpr#expr for (self: ASelfExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ASelfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : Frame */;
val* var2 /* : Array[Instance] */;
val* var3 /* : nullable Object */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(var_v); /* frame on <var_v:NaiveInterpreter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__naive_interpreter__Frame__arguments]))(var1); /* arguments on <var1:Frame>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var2); /* first on <var2:Array[Instance]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AImplicitSelfExpr#expr for (self: AImplicitSelfExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AImplicitSelfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Instance */;
val* var4 /* : nullable Instance */;
var_v = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__typing__AImplicitSelfExpr__is_sys]))(self); /* is_sys on <self:AImplicitSelfExpr>*/
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter___AImplicitSelfExpr___AExpr__expr]))(self, p0); /* expr on <self:AImplicitSelfExpr>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainobj]))(var_v); /* mainobj on <var_v:NaiveInterpreter>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AEscapeExpr#stmt for (self: AEscapeExpr, NaiveInterpreter) */
void nit__naive_interpreter___AEscapeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : nullable AExpr */;
val* var_ne /* var ne: nullable AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable EscapeMark */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AEscapeExpr__n_expr]))(self); /* n_expr on <self:AEscapeExpr>*/
}
var_ne = var;
if (var_ne == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_ne->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ne, ((val*)NULL)); /* != on <var_ne:nullable AExpr>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var_ne); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var3;
if (var_i == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapevalue_61d]))(var_v, var_i); /* escapevalue= on <var_v:NaiveInterpreter>*/
}
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AEscapeExpr__escapemark]))(self); /* escapemark on <self:AEscapeExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapemark_61d]))(var_v, var6); /* escapemark= on <var_v:NaiveInterpreter>*/
}
RET_LABEL:;
}
/* method naive_interpreter#AReturnExpr#stmt for (self: AReturnExpr, NaiveInterpreter) */
void nit__naive_interpreter___AReturnExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : nullable AExpr */;
val* var_ne /* var ne: nullable AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Frame */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AReturnExpr__n_expr]))(self); /* n_expr on <self:AReturnExpr>*/
}
var_ne = var;
if (var_ne == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_ne->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ne, ((val*)NULL)); /* != on <var_ne:nullable AExpr>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var_ne); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var3;
if (var_i == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__escapevalue_61d]))(var_v, var_i); /* escapevalue= on <var_v:NaiveInterpreter>*/
}
} else {
}
{
var6 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(var_v); /* frame on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__returnmark_61d]))(var_v, var6); /* returnmark= on <var_v:NaiveInterpreter>*/
}
RET_LABEL:;
}
/* method naive_interpreter#AAbortExpr#stmt for (self: AAbortExpr, NaiveInterpreter) */
void nit__naive_interpreter___AAbortExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : Sys */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Aborted";
var2 = standard___standard__NativeString___to_s_with_length(var1, 7l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var); /* fatal on <self:AAbortExpr>*/
}
var3 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var3,1l) on <var3:Sys> */
exit(1l);
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method naive_interpreter#AIfExpr#expr for (self: AIfExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AIfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_cond /* var cond: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable Instance */;
val* var8 /* : nullable AExpr */;
val* var9 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_expr]))(self); /* n_expr on <self:AIfExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_cond = var2;
if (var_cond == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_cond->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cond, ((val*)NULL)); /* == on <var_cond:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(var_cond->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_cond); /* is_true on <var_cond:nullable Instance(Instance)>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then]))(self); /* n_then on <self:AIfExpr>*/
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1386);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var6); /* expr on <var_v:NaiveInterpreter>*/
}
var = var7;
goto RET_LABEL;
} else {
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_else]))(self); /* n_else on <self:AIfExpr>*/
}
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1388);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var8); /* expr on <var_v:NaiveInterpreter>*/
}
var = var9;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method naive_interpreter#AIfExpr#stmt for (self: AIfExpr, NaiveInterpreter) */
void nit__naive_interpreter___AIfExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : AExpr */;
val* var1 /* : nullable Instance */;
val* var_cond /* var cond: nullable Instance */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_expr]))(self); /* n_expr on <self:AIfExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var); /* expr on <var_v:NaiveInterpreter>*/
}
var_cond = var1;
if (var_cond == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_cond->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cond, ((val*)NULL)); /* == on <var_cond:nullable Instance>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(var_cond->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_cond); /* is_true on <var_cond:nullable Instance(Instance)>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_then]))(self); /* n_then on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var5); /* stmt on <var_v:NaiveInterpreter>*/
}
} else {
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfExpr__n_else]))(self); /* n_else on <self:AIfExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var6); /* stmt on <var_v:NaiveInterpreter>*/
}
}
RET_LABEL:;
}
/* method naive_interpreter#AIfexprExpr#expr for (self: AIfexprExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AIfexprExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_cond /* var cond: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : AExpr */;
val* var7 /* : nullable Instance */;
val* var8 /* : AExpr */;
val* var9 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_expr]))(self); /* n_expr on <self:AIfexprExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_cond = var2;
if (var_cond == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_cond->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cond, ((val*)NULL)); /* == on <var_cond:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(var_cond->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_cond); /* is_true on <var_cond:nullable Instance(Instance)>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_then]))(self); /* n_then on <self:AIfexprExpr>*/
}
{
var7 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var6); /* expr on <var_v:NaiveInterpreter>*/
}
var = var7;
goto RET_LABEL;
} else {
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIfexprExpr__n_else]))(self); /* n_else on <self:AIfexprExpr>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var8); /* expr on <var_v:NaiveInterpreter>*/
}
var = var9;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method naive_interpreter#ADoExpr#stmt for (self: ADoExpr, NaiveInterpreter) */
void nit__naive_interpreter___ADoExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : nullable AExpr */;
val* var1 /* : nullable EscapeMark */;
short int var2 /* : Bool */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ADoExpr__n_block]))(self); /* n_block on <self:ADoExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var); /* stmt on <var_v:NaiveInterpreter>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ADoExpr__break_mark]))(self); /* break_mark on <self:ADoExpr>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escape]))(var_v, var1); /* is_escape on <var_v:NaiveInterpreter>*/
}
RET_LABEL:;
}
/* method naive_interpreter#AWhileExpr#stmt for (self: AWhileExpr, NaiveInterpreter) */
void nit__naive_interpreter___AWhileExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : AExpr */;
val* var1 /* : nullable Instance */;
val* var_cond /* var cond: nullable Instance */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable EscapeMark */;
short int var8 /* : Bool */;
val* var9 /* : nullable EscapeMark */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
var_v = p0;
for(;;) {
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_expr]))(self); /* n_expr on <self:AWhileExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var); /* expr on <var_v:NaiveInterpreter>*/
}
var_cond = var1;
if (var_cond == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_cond->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cond, ((val*)NULL)); /* == on <var_cond:nullable Instance>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(var_cond->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_cond); /* is_true on <var_cond:nullable Instance(Instance)>*/
}
var5 = !var4;
if (var5){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWhileExpr__n_block]))(self); /* n_block on <self:AWhileExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var6); /* stmt on <var_v:NaiveInterpreter>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AWhileExpr__break_mark]))(self); /* break_mark on <self:AWhileExpr>*/
}
{
var8 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escape]))(var_v, var7); /* is_escape on <var_v:NaiveInterpreter>*/
}
if (var8){
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AWhileExpr__continue_mark]))(self); /* continue_mark on <self:AWhileExpr>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escape]))(var_v, var9); /* is_escape on <var_v:NaiveInterpreter>*/
}
{
var11 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escaping]))(var_v); /* is_escaping on <var_v:NaiveInterpreter>*/
}
if (var11){
goto RET_LABEL;
} else {
}
}
RET_LABEL:;
}
/* method naive_interpreter#ALoopExpr#stmt for (self: ALoopExpr, NaiveInterpreter) */
void nit__naive_interpreter___ALoopExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : nullable AExpr */;
val* var1 /* : nullable EscapeMark */;
short int var2 /* : Bool */;
val* var3 /* : nullable EscapeMark */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_v = p0;
for(;;) {
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ALoopExpr__n_block]))(self); /* n_block on <self:ALoopExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var); /* stmt on <var_v:NaiveInterpreter>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ALoopExpr__break_mark]))(self); /* break_mark on <self:ALoopExpr>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escape]))(var_v, var1); /* is_escape on <var_v:NaiveInterpreter>*/
}
if (var2){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ALoopExpr__continue_mark]))(self); /* continue_mark on <self:ALoopExpr>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escape]))(var_v, var3); /* is_escape on <var_v:NaiveInterpreter>*/
}
{
var5 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escaping]))(var_v); /* is_escaping on <var_v:NaiveInterpreter>*/
}
if (var5){
goto RET_LABEL;
} else {
}
}
RET_LABEL:;
}
/* method naive_interpreter#AForExpr#stmt for (self: AForExpr, NaiveInterpreter) */
void nit__naive_interpreter___AForExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : AExpr */;
val* var1 /* : nullable Instance */;
val* var_col /* var col: nullable Instance */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : nullable CallSite */;
val* var10 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
val* var11 /* : nullable Instance */;
val* var_iter /* var iter: Instance */;
val* var12 /* : nullable CallSite */;
val* var13 /* : Array[Instance] */;
val* var_14 /* var : Array[Instance] */;
val* var15 /* : nullable Instance */;
val* var_isok /* var isok: Instance */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable Array[Variable] */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : nullable CallSite */;
val* var24 /* : Array[Instance] */;
val* var_25 /* var : Array[Instance] */;
val* var26 /* : nullable Instance */;
val* var_item /* var item: Instance */;
val* var27 /* : nullable Array[Variable] */;
val* var28 /* : nullable Object */;
val* var29 /* : nullable Array[Variable] */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : nullable CallSite */;
val* var35 /* : Array[Instance] */;
val* var_36 /* var : Array[Instance] */;
val* var37 /* : nullable Instance */;
val* var_key /* var key: Instance */;
val* var38 /* : nullable Array[Variable] */;
val* var39 /* : nullable Object */;
val* var40 /* : nullable CallSite */;
val* var41 /* : Array[Instance] */;
val* var_42 /* var : Array[Instance] */;
val* var43 /* : nullable Instance */;
val* var_item44 /* var item: Instance */;
val* var45 /* : nullable Array[Variable] */;
val* var46 /* : nullable Object */;
val* var47 /* : nullable AExpr */;
val* var48 /* : nullable EscapeMark */;
short int var49 /* : Bool */;
val* var50 /* : nullable EscapeMark */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable CallSite */;
val* var54 /* : Array[Instance] */;
val* var_55 /* var : Array[Instance] */;
val* var56 /* : nullable Instance */;
val* var57 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : Array[Instance] */;
val* var_61 /* var : Array[Instance] */;
val* var62 /* : nullable Instance */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_expr]))(self); /* n_expr on <self:AForExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var); /* expr on <var_v:NaiveInterpreter>*/
}
var_col = var1;
if (var_col == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_col->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_col, ((val*)NULL)); /* == on <var_col:nullable Instance>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_col->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_col); /* mtype on <var_col:nullable Instance(Instance)>*/
}
/* <var4:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype] == idtype;
}
if (var5){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Receiver is null";
var8 = standard___standard__NativeString___to_s_with_length(var7, 16l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var6); /* fatal on <self:AForExpr>*/
}
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AForExpr__method_iterator]))(self); /* method_iterator on <self:AForExpr>*/
}
var10 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_standard__array__Array__with_capacity]))(var10, 1l); /* with_capacity on <var10:Array[Instance]>*/
}
var_ = var10;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_col); /* push on <var_:Array[Instance]>*/
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var9, var_); /* callsite on <var_v:NaiveInterpreter>*/
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1460);
fatal_exit(1);
}
var_iter = var11;
for(;;) {
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AForExpr__method_is_ok]))(self); /* method_is_ok on <self:AForExpr>*/
}
var13 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var13->class->vft[COLOR_standard__array__Array__with_capacity]))(var13, 1l); /* with_capacity on <var13:Array[Instance]>*/
}
var_14 = var13;
{
((void(*)(val* self, val* p0))(var_14->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_14, var_iter); /* push on <var_14:Array[Instance]>*/
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var12, var_14); /* callsite on <var_v:NaiveInterpreter>*/
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1463);
fatal_exit(1);
}
var_isok = var15;
{
var16 = ((short int(*)(val* self))(var_isok->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_isok); /* is_true on <var_isok:Instance>*/
}
var17 = !var16;
if (var17){
goto BREAK_label;
} else {
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1465);
fatal_exit(1);
} else {
var19 = ((long(*)(val* self))(var18->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var18); /* length on <var18:nullable Array[Variable]>*/
}
{
{ /* Inline kernel#Int#== (var19,1l) on <var19:Int> */
var22 = var19 == 1l;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AForExpr__method_item]))(self); /* method_item on <self:AForExpr>*/
}
var24 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var24->class->vft[COLOR_standard__array__Array__with_capacity]))(var24, 1l); /* with_capacity on <var24:Array[Instance]>*/
}
var_25 = var24;
{
((void(*)(val* self, val* p0))(var_25->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_25, var_iter); /* push on <var_25:Array[Instance]>*/
}
{
var26 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var23, var_25); /* callsite on <var_v:NaiveInterpreter>*/
}
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1466);
fatal_exit(1);
}
var_item = var26;
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1468);
fatal_exit(1);
} else {
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var27); /* first on <var27:nullable Array[Variable]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_variable]))(var_v, var28, var_item); /* write_variable on <var_v:NaiveInterpreter>*/
}
} else {
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1469);
fatal_exit(1);
} else {
var30 = ((long(*)(val* self))(var29->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var29); /* length on <var29:nullable Array[Variable]>*/
}
{
{ /* Inline kernel#Int#== (var30,2l) on <var30:Int> */
var33 = var30 == 2l;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AForExpr__method_key]))(self); /* method_key on <self:AForExpr>*/
}
var35 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var35->class->vft[COLOR_standard__array__Array__with_capacity]))(var35, 1l); /* with_capacity on <var35:Array[Instance]>*/
}
var_36 = var35;
{
((void(*)(val* self, val* p0))(var_36->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_36, var_iter); /* push on <var_36:Array[Instance]>*/
}
{
var37 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var34, var_36); /* callsite on <var_v:NaiveInterpreter>*/
}
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1470);
fatal_exit(1);
}
var_key = var37;
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1471);
fatal_exit(1);
} else {
var39 = ((val*(*)(val* self, long p0))(var38->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var38, 0l); /* [] on <var38:nullable Array[Variable]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_variable]))(var_v, var39, var_key); /* write_variable on <var_v:NaiveInterpreter>*/
}
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AForExpr__method_item]))(self); /* method_item on <self:AForExpr>*/
}
var41 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var41->class->vft[COLOR_standard__array__Array__with_capacity]))(var41, 1l); /* with_capacity on <var41:Array[Instance]>*/
}
var_42 = var41;
{
((void(*)(val* self, val* p0))(var_42->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_42, var_iter); /* push on <var_42:Array[Instance]>*/
}
{
var43 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var40, var_42); /* callsite on <var_v:NaiveInterpreter>*/
}
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1472);
fatal_exit(1);
}
var_item44 = var43;
{
var45 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__variables]))(self); /* variables on <self:AForExpr>*/
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1473);
fatal_exit(1);
} else {
var46 = ((val*(*)(val* self, long p0))(var45->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var45, 1l); /* [] on <var45:nullable Array[Variable]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__write_variable]))(var_v, var46, var_item44); /* write_variable on <var_v:NaiveInterpreter>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1475);
fatal_exit(1);
}
}
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AForExpr__n_block]))(self); /* n_block on <self:AForExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var47); /* stmt on <var_v:NaiveInterpreter>*/
}
{
var48 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__break_mark]))(self); /* break_mark on <self:AForExpr>*/
}
{
var49 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escape]))(var_v, var48); /* is_escape on <var_v:NaiveInterpreter>*/
}
if (var49){
goto BREAK_label;
} else {
}
{
var50 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AForExpr__continue_mark]))(self); /* continue_mark on <self:AForExpr>*/
}
{
var51 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escape]))(var_v, var50); /* is_escape on <var_v:NaiveInterpreter>*/
}
{
var52 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escaping]))(var_v); /* is_escaping on <var_v:NaiveInterpreter>*/
}
if (var52){
goto BREAK_label;
} else {
}
{
var53 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AForExpr__method_next]))(self); /* method_next on <self:AForExpr>*/
}
var54 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var54->class->vft[COLOR_standard__array__Array__with_capacity]))(var54, 1l); /* with_capacity on <var54:Array[Instance]>*/
}
var_55 = var54;
{
((void(*)(val* self, val* p0))(var_55->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_55, var_iter); /* push on <var_55:Array[Instance]>*/
}
{
var56 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var53, var_55); /* callsite on <var_v:NaiveInterpreter>*/
}
}
BREAK_label: (void)0;
{
var57 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AForExpr__method_finish]))(self); /* method_finish on <self:AForExpr>*/
}
var_method_finish = var57;
if (var_method_finish == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
var59 = ((short int(*)(val* self, val* p0))(var_method_finish->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_method_finish, ((val*)NULL)); /* != on <var_method_finish:nullable CallSite>*/
var58 = var59;
}
if (var58){
var60 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var60->class->vft[COLOR_standard__array__Array__with_capacity]))(var60, 1l); /* with_capacity on <var60:Array[Instance]>*/
}
var_61 = var60;
{
((void(*)(val* self, val* p0))(var_61->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_61, var_iter); /* push on <var_61:Array[Instance]>*/
}
{
var62 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var_method_finish, var_61); /* callsite on <var_v:NaiveInterpreter>*/
}
} else {
}
RET_LABEL:;
}
/* method naive_interpreter#AWithExpr#stmt for (self: AWithExpr, NaiveInterpreter) */
void nit__naive_interpreter___AWithExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : AExpr */;
val* var1 /* : nullable Instance */;
val* var_expr /* var expr: nullable Instance */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable CallSite */;
val* var5 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
val* var6 /* : nullable Instance */;
val* var7 /* : nullable AExpr */;
val* var8 /* : nullable EscapeMark */;
short int var9 /* : Bool */;
val* var10 /* : nullable CallSite */;
val* var11 /* : Array[Instance] */;
val* var_12 /* var : Array[Instance] */;
val* var13 /* : nullable Instance */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_expr]))(self); /* n_expr on <self:AWithExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var); /* expr on <var_v:NaiveInterpreter>*/
}
var_expr = var1;
if (var_expr == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_expr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_expr, ((val*)NULL)); /* == on <var_expr:nullable Instance>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AWithExpr__method_start]))(self); /* method_start on <self:AWithExpr>*/
}
var5 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_standard__array__Array__with_capacity]))(var5, 1l); /* with_capacity on <var5:Array[Instance]>*/
}
var_ = var5;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_expr); /* push on <var_:Array[Instance]>*/
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var4, var_); /* callsite on <var_v:NaiveInterpreter>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AWithExpr__n_block]))(self); /* n_block on <self:AWithExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var7); /* stmt on <var_v:NaiveInterpreter>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__AWithExpr__break_mark]))(self); /* break_mark on <self:AWithExpr>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escape]))(var_v, var8); /* is_escape on <var_v:NaiveInterpreter>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AWithExpr__method_finish]))(self); /* method_finish on <self:AWithExpr>*/
}
var11 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var11->class->vft[COLOR_standard__array__Array__with_capacity]))(var11, 1l); /* with_capacity on <var11:Array[Instance]>*/
}
var_12 = var11;
{
((void(*)(val* self, val* p0))(var_12->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_12, var_expr); /* push on <var_12:Array[Instance]>*/
}
{
var13 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var10, var_12); /* callsite on <var_v:NaiveInterpreter>*/
}
RET_LABEL:;
}
/* method naive_interpreter#AAssertExpr#stmt for (self: AAssertExpr, NaiveInterpreter) */
void nit__naive_interpreter___AAssertExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: NaiveInterpreter */;
val* var /* : AExpr */;
val* var1 /* : nullable Instance */;
val* var_cond /* var cond: nullable Instance */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable AExpr */;
short int var7 /* : Bool */;
val* var8 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : Sys */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_expr]))(self); /* n_expr on <self:AAssertExpr>*/
}
{
var1 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var); /* expr on <var_v:NaiveInterpreter>*/
}
var_cond = var1;
if (var_cond == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_cond->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cond, ((val*)NULL)); /* == on <var_cond:nullable Instance>*/
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(var_cond->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_cond); /* is_true on <var_cond:nullable Instance(Instance)>*/
}
var5 = !var4;
if (var5){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_else]))(self); /* n_else on <self:AAssertExpr>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var6); /* stmt on <var_v:NaiveInterpreter>*/
}
{
var7 = ((short int(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_escaping]))(var_v); /* is_escaping on <var_v:NaiveInterpreter>*/
}
if (var7){
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAssertExpr__n_id]))(self); /* n_id on <self:AAssertExpr>*/
}
var_nid = var8;
if (var_nid == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_nid->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nid, ((val*)NULL)); /* != on <var_nid:nullable TId>*/
var9 = var10;
}
if (var9){
if (unlikely(varonce==NULL)) {
var11 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Assert \'";
var15 = standard___standard__NativeString___to_s_with_length(var14, 8l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "\' failed";
var19 = standard___standard__NativeString___to_s_with_length(var18, 8l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var11)->values[2]=var17;
} else {
var11 = varonce;
varonce = NULL;
}
{
var20 = ((val*(*)(val* self))(var_nid->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_nid); /* text on <var_nid:nullable TId(TId)>*/
}
((struct instance_standard__NativeArray*)var11)->values[1]=var20;
{
var21 = ((val*(*)(val* self))(var11->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var21); /* fatal on <self:AAssertExpr>*/
}
} else {
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "Assert failed";
var25 = standard___standard__NativeString___to_s_with_length(var24, 13l);
var23 = var25;
varonce22 = var23;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__ANode__fatal]))(self, var_v, var23); /* fatal on <self:AAssertExpr>*/
}
}
var26 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var26,1l) on <var26:Sys> */
exit(1l);
RET_LABEL27:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method naive_interpreter#AOrExpr#expr for (self: AOrExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AOrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_cond /* var cond: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : AExpr */;
val* var7 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AOrExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_cond = var2;
if (var_cond == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_cond->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cond, ((val*)NULL)); /* == on <var_cond:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(var_cond->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_cond); /* is_true on <var_cond:nullable Instance(Instance)>*/
}
if (var5){
var = var_cond;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AOrExpr>*/
}
{
var7 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var6); /* expr on <var_v:NaiveInterpreter>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AImpliesExpr#expr for (self: AImpliesExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AImpliesExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_cond /* var cond: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Instance */;
val* var8 /* : AExpr */;
val* var9 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AImpliesExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_cond = var2;
if (var_cond == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_cond->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cond, ((val*)NULL)); /* == on <var_cond:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(var_cond->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_cond); /* is_true on <var_cond:nullable Instance(Instance)>*/
}
var6 = !var5;
if (var6){
{
var7 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__true_instance]))(var_v); /* true_instance on <var_v:NaiveInterpreter>*/
}
var = var7;
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AImpliesExpr>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var8); /* expr on <var_v:NaiveInterpreter>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AAndExpr#expr for (self: AAndExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AAndExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_cond /* var cond: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : AExpr */;
val* var8 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AAndExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_cond = var2;
if (var_cond == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_cond->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cond, ((val*)NULL)); /* == on <var_cond:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(var_cond->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_cond); /* is_true on <var_cond:nullable Instance(Instance)>*/
}
var6 = !var5;
if (var6){
var = var_cond;
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AAndExpr>*/
}
{
var8 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var7); /* expr on <var_v:NaiveInterpreter>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ANotExpr#expr for (self: ANotExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ANotExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_cond /* var cond: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANotExpr__n_expr]))(self); /* n_expr on <self:ANotExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_cond = var2;
if (var_cond == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_cond->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cond, ((val*)NULL)); /* == on <var_cond:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(var_cond->class->vft[COLOR_nit__naive_interpreter__Instance__is_true]))(var_cond); /* is_true on <var_cond:nullable Instance(Instance)>*/
}
var6 = !var5;
{
var7 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var6); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AOrElseExpr#expr for (self: AOrElseExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AOrElseExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Instance */;
short int var6 /* : Bool */;
val* var7 /* : AExpr */;
val* var8 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr]))(self); /* n_expr on <self:AOrElseExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var2;
if (var_i == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__null_instance]))(var_v); /* null_instance on <var_v:NaiveInterpreter>*/
}
{
var6 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_i, var5); /* != on <var_i:nullable Instance(Instance)>*/
}
if (var6){
var = var_i;
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ABinBoolExpr__n_expr2]))(self); /* n_expr2 on <self:AOrElseExpr>*/
}
{
var8 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var7); /* expr on <var_v:NaiveInterpreter>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AIntExpr#expr for (self: AIntExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AIntExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : nullable Int */;
val* var2 /* : Instance */;
long var3 /* : Int */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__AIntExpr__value]))(self); /* value on <self:AIntExpr>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1574);
fatal_exit(1);
}
{
var3 = (long)(var1)>>2;
var2 = ((val*(*)(val* self, long p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__int_instance]))(var_v, var3); /* int_instance on <var_v:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AFloatExpr#expr for (self: AFloatExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AFloatExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : nullable Float */;
val* var2 /* : Instance */;
double var3 /* : Float */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__AFloatExpr__value]))(self); /* value on <self:AFloatExpr>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1581);
fatal_exit(1);
}
{
var3 = ((struct instance_standard__Float*)var1)->value; /* autounbox from nullable Float to Float */;
var2 = ((val*(*)(val* self, double p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__float_instance]))(var_v, var3); /* float_instance on <var_v:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ACharExpr#expr for (self: ACharExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ACharExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : nullable Char */;
val* var2 /* : Instance */;
char var3 /* : Char */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__ACharExpr__value]))(self); /* value on <self:ACharExpr>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1588);
fatal_exit(1);
}
{
var3 = (char)((long)(var1)>>2);
var2 = ((val*(*)(val* self, char p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__char_instance]))(var_v, var3); /* char_instance on <var_v:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AArrayExpr#expr for (self: AArrayExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AArrayExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : Array[Instance] */;
val* var_val /* var val: Array[Instance] */;
val* var2 /* : Frame */;
val* var3 /* : nullable Array[Instance] */;
val* var_old_comprehension /* var old_comprehension: nullable Array[Instance] */;
val* var4 /* : Frame */;
val* var5 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[AExpr] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Frame */;
val* var15 /* : nullable MType */;
val* var16 /* : MType */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var20 /* : Array[MType] */;
val* var21 /* : nullable Object */;
val* var_elttype /* var elttype: MType */;
val* var22 /* : Instance */;
var_v = p0;
var1 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Instance]>*/
}
var_val = var1;
{
var2 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(var_v); /* frame on <var_v:NaiveInterpreter>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__naive_interpreter__Frame__comprehension]))(var2); /* comprehension on <var2:Frame>*/
}
var_old_comprehension = var3;
{
var4 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(var_v); /* frame on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__naive_interpreter__Frame__comprehension_61d]))(var4, var_val); /* comprehension= on <var4:Frame>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AArrayExpr__n_exprs]))(self); /* n_exprs on <self:AArrayExpr>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AExpr]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[AExpr]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[AExpr]>*/
}
var_nexpr = var9;
/* <var_nexpr:AExpr> isa AForExpr */
cltype = type_nit__AForExpr.color;
idtype = type_nit__AForExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var10 = 0;
} else {
var10 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var10){
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__stmt]))(var_v, var_nexpr); /* stmt on <var_v:NaiveInterpreter>*/
}
} else {
{
var11 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var_nexpr); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var11;
if (var_i == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var12 = var13;
}
if (var12){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_val, var_i); /* add on <var_val:Array[Instance]>*/
}
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[AExpr]>*/
}
{
var14 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(var_v); /* frame on <var_v:NaiveInterpreter>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nit__naive_interpreter__Frame__comprehension_61d]))(var14, var_old_comprehension); /* comprehension= on <var14:Frame>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:AArrayExpr>*/
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1608);
fatal_exit(1);
}
{
var16 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__unanchor_type]))(var_v, var15); /* unanchor_type on <var_v:NaiveInterpreter>*/
}
/* <var16:MType> isa MClassType */
cltype18 = type_nit__MClassType.color;
idtype19 = type_nit__MClassType.id;
if(cltype18 >= var16->type->table_size) {
var17 = 0;
} else {
var17 = var16->type->type_table[cltype18] == idtype19;
}
if (unlikely(!var17)) {
var_class_name = var16 == NULL ? "null" : var16->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1608);
fatal_exit(1);
}
var_mtype = var16;
{
var20 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var20); /* first on <var20:Array[MType]>*/
}
var_elttype = var21;
{
var22 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__array_instance]))(var_v, var_val, var_elttype); /* array_instance on <var_v:NaiveInterpreter>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AStringFormExpr#expr for (self: AStringFormExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AStringFormExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : nullable String */;
val* var_txt /* var txt: String */;
val* var2 /* : Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__AStringFormExpr__value]))(self); /* value on <self:AStringFormExpr>*/
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1617);
fatal_exit(1);
}
var_txt = var1;
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__string_instance]))(var_v, var_txt); /* string_instance on <var_v:NaiveInterpreter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ASuperstringExpr#expr for (self: ASuperstringExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ASuperstringExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : Array[Instance] */;
val* var_array /* var array: Array[Instance] */;
val* var2 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[AExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var7 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var11 /* : MClassType */;
val* var12 /* : Instance */;
val* var_i13 /* var i: Instance */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : MType */;
val* var18 /* : MMethod */;
val* var19 /* : Array[Instance] */;
val* var_20 /* var : Array[Instance] */;
val* var21 /* : nullable Instance */;
val* var_res /* var res: nullable Instance */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
var_v = p0;
var1 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Instance]>*/
}
var_array = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASuperstringExpr__n_exprs]))(self); /* n_exprs on <self:ASuperstringExpr>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AExpr]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExpr]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExpr]>*/
}
var_nexpr = var6;
{
var7 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var_nexpr); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var7;
if (var_i == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var8 = var9;
}
if (var8){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_array->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_array, var_i); /* add on <var_array:Array[Instance]>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExpr]>*/
}
{
var10 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(var_v); /* mainmodule on <var_v:NaiveInterpreter>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model__MModule__object_type]))(var10); /* object_type on <var10:MModule>*/
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__array_instance]))(var_v, var_array, var11); /* array_instance on <var_v:NaiveInterpreter>*/
}
var_i13 = var12;
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "to_s";
var16 = standard___standard__NativeString___to_s_with_length(var15, 4l);
var14 = var16;
varonce = var14;
}
{
var17 = ((val*(*)(val* self))(var_i13->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_i13); /* mtype on <var_i13:Instance>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__force_get_primitive_method]))(var_v, var14, var17); /* force_get_primitive_method on <var_v:NaiveInterpreter>*/
}
var19 = NEW_standard__Array(&type_standard__Array__nit__Instance);
{
((void(*)(val* self, long p0))(var19->class->vft[COLOR_standard__array__Array__with_capacity]))(var19, 1l); /* with_capacity on <var19:Array[Instance]>*/
}
var_20 = var19;
{
((void(*)(val* self, val* p0))(var_20->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_20, var_i13); /* push on <var_20:Array[Instance]>*/
}
{
var21 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send]))(var_v, var18, var_20); /* send on <var_v:NaiveInterpreter>*/
}
var_res = var21;
if (var_res == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
var23 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable Instance>*/
var22 = var23;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1633);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ACrangeExpr#expr for (self: ACrangeExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ACrangeExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_e1 /* var e1: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : AExpr */;
val* var6 /* : nullable Instance */;
val* var_e2 /* var e2: nullable Instance */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var10 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var11 /* : MutableInstance */;
val* var_res /* var res: MutableInstance */;
val* var12 /* : nullable CallSite */;
val* var13 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
val* var14 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr]))(self); /* n_expr on <self:ACrangeExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_e1 = var2;
if (var_e1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_e1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e1, ((val*)NULL)); /* == on <var_e1:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr2]))(self); /* n_expr2 on <self:ACrangeExpr>*/
}
{
var6 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var5); /* expr on <var_v:NaiveInterpreter>*/
}
var_e2 = var6;
if (var_e2 == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_e2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e2, ((val*)NULL)); /* == on <var_e2:nullable Instance>*/
var7 = var8;
}
if (var7){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:ACrangeExpr>*/
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1645);
fatal_exit(1);
}
{
var10 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__unanchor_type]))(var_v, var9); /* unanchor_type on <var_v:NaiveInterpreter>*/
}
var_mtype = var10;
var11 = NEW_nit__MutableInstance(&type_nit__MutableInstance);
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var11, var_mtype); /* mtype= on <var11:MutableInstance>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:MutableInstance>*/
}
var_res = var11;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance]))(var_v, var_res); /* init_instance on <var_v:NaiveInterpreter>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ARangeExpr__init_callsite]))(self); /* init_callsite on <self:ACrangeExpr>*/
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
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_e1); /* push on <var_:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_e2); /* push on <var_:Array[Instance]>*/
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var12, var_); /* callsite on <var_v:NaiveInterpreter>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AOrangeExpr#expr for (self: AOrangeExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AOrangeExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_e1 /* var e1: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : AExpr */;
val* var6 /* : nullable Instance */;
val* var_e2 /* var e2: nullable Instance */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var10 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var11 /* : MutableInstance */;
val* var_res /* var res: MutableInstance */;
val* var12 /* : nullable CallSite */;
val* var13 /* : Array[Instance] */;
val* var_ /* var : Array[Instance] */;
val* var14 /* : nullable Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr]))(self); /* n_expr on <self:AOrangeExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_e1 = var2;
if (var_e1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_e1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e1, ((val*)NULL)); /* == on <var_e1:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ARangeExpr__n_expr2]))(self); /* n_expr2 on <self:AOrangeExpr>*/
}
{
var6 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var5); /* expr on <var_v:NaiveInterpreter>*/
}
var_e2 = var6;
if (var_e2 == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_e2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e2, ((val*)NULL)); /* == on <var_e2:nullable Instance>*/
var7 = var8;
}
if (var7){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:AOrangeExpr>*/
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1660);
fatal_exit(1);
}
{
var10 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__unanchor_type]))(var_v, var9); /* unanchor_type on <var_v:NaiveInterpreter>*/
}
var_mtype = var10;
var11 = NEW_nit__MutableInstance(&type_nit__MutableInstance);
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var11, var_mtype); /* mtype= on <var11:MutableInstance>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:MutableInstance>*/
}
var_res = var11;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__init_instance]))(var_v, var_res); /* init_instance on <var_v:NaiveInterpreter>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__ARangeExpr__init_callsite]))(self); /* init_callsite on <self:AOrangeExpr>*/
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
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_e1); /* push on <var_:Array[Instance]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_e2); /* push on <var_:Array[Instance]>*/
}
{
var14 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__callsite]))(var_v, var12, var_); /* callsite on <var_v:NaiveInterpreter>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ATrueExpr#expr for (self: ATrueExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ATrueExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, 1); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AFalseExpr#expr for (self: AFalseExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AFalseExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, 0); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#ANullExpr#expr for (self: ANullExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___ANullExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__null_instance]))(var_v); /* null_instance on <var_v:NaiveInterpreter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method naive_interpreter#AIsaExpr#expr for (self: AIsaExpr, NaiveInterpreter): nullable Instance */
val* nit__naive_interpreter___AIsaExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable Instance */;
val* var_v /* var v: NaiveInterpreter */;
val* var1 /* : AExpr */;
val* var2 /* : nullable Instance */;
val* var_i /* var i: nullable Instance */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable MType */;
val* var6 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
val* var9 /* : Instance */;
var_v = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AIsaExpr__n_expr]))(self); /* n_expr on <self:AIsaExpr>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__expr]))(var_v, var1); /* expr on <var_v:NaiveInterpreter>*/
}
var_i = var2;
if (var_i == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, ((val*)NULL)); /* == on <var_i:nullable Instance>*/
var3 = var4;
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AIsaExpr__cast_type]))(self); /* cast_type on <self:AIsaExpr>*/
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__naive_interpreter, 1694);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__unanchor_type]))(var_v, var5); /* unanchor_type on <var_v:NaiveInterpreter>*/
}
var_mtype = var6;
{
var7 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_i); /* mtype on <var_i:nullable Instance(Instance)>*/
}
{
var8 = ((short int(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_subtype]))(var_v, var7, var_mtype); /* is_subtype on <var_v:NaiveInterpreter>*/
}
{
var9 = ((val*(*)(val* self, short int p0))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__bool_instance]))(var_v, var8); /* bool_instance on <var_v:NaiveInterpreter>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
