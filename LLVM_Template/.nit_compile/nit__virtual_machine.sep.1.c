#include "nit__virtual_machine.sep.0.h"
/* method virtual_machine#ModelBuilder#run_virtual_machine for (self: ModelBuilder, MModule, Array[String]) */
void nit__virtual_machine___ModelBuilder___run_virtual_machine(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
long var_time0 /* var time0: Int */;
val* var1 /* : ToolContext */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : VirtualMachine */;
val* var_interpreter /* var interpreter: VirtualMachine */;
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
var3 = "*** NITVM STARTING ***";
var4 = standard___standard__NativeString___to_s_with_length(var3, 22l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(var1, var2, 1l); /* info on <var1:ToolContext>*/
}
var5 = NEW_nit__VirtualMachine(&type_nit__VirtualMachine);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__modelbuilder_61d]))(var5, self); /* modelbuilder= on <var5:VirtualMachine>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule_61d]))(var5, var_mainmodule); /* mainmodule= on <var5:VirtualMachine>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__arguments_61d]))(var5, var_arguments); /* arguments= on <var5:VirtualMachine>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:VirtualMachine>*/
}
var_interpreter = var5;
{
((void(*)(val* self, val* p0))(var_interpreter->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__start]))(var_interpreter, var_mainmodule); /* start on <var_interpreter:VirtualMachine>*/
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
var12 = "*** NITVM STOPPING : ";
var13 = standard___standard__NativeString___to_s_with_length(var12, 21l);
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
/* method virtual_machine#VirtualMachine#ph for (self: VirtualMachine): Perfecthashing */
val* nit___nit__VirtualMachine___ph(val* self) {
val* var /* : Perfecthashing */;
val* var1 /* : Perfecthashing */;
var1 = self->attrs[COLOR_nit__virtual_machine__VirtualMachine___ph].val; /* _ph on <self:VirtualMachine> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#ph= for (self: VirtualMachine, Perfecthashing) */
void nit___nit__VirtualMachine___ph_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__VirtualMachine___ph].val = p0; /* _ph on <self:VirtualMachine> */
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#memory_manager for (self: VirtualMachine): MemoryManager */
val* nit___nit__VirtualMachine___memory_manager(val* self) {
val* var /* : MemoryManager */;
val* var1 /* : MemoryManager */;
var1 = self->attrs[COLOR_nit__virtual_machine__VirtualMachine___memory_manager].val; /* _memory_manager on <self:VirtualMachine> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _memory_manager");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 43);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#memory_manager= for (self: VirtualMachine, MemoryManager) */
void nit___nit__VirtualMachine___memory_manager_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__VirtualMachine___memory_manager].val = p0; /* _memory_manager on <self:VirtualMachine> */
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#initialization_value for (self: VirtualMachine): Instance */
val* nit___nit__VirtualMachine___initialization_value(val* self) {
val* var /* : Instance */;
val* var1 /* : Instance */;
var1 = self->attrs[COLOR_nit__virtual_machine__VirtualMachine___initialization_value].val; /* _initialization_value on <self:VirtualMachine> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initialization_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#initialization_value= for (self: VirtualMachine, Instance) */
void nit___nit__VirtualMachine___initialization_value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__VirtualMachine___initialization_value].val = p0; /* _initialization_value on <self:VirtualMachine> */
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#init for (self: VirtualMachine) */
void nit___nit__VirtualMachine___standard__kernel__Object__init(val* self) {
val* var /* : MInitType */;
val* var1 /* : MModule */;
val* var2 /* : Model */;
val* var_init_type /* var init_type: MInitType */;
val* var3 /* : MutableInstance */;
var = NEW_nit__MInitType(&type_nit__MInitType);
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:VirtualMachine>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1); /* model on <var1:MModule>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__virtual_machine__MInitType__model_61d]))(var, var2); /* model= on <var:MInitType>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:MInitType>*/
}
var_init_type = var;
var3 = NEW_nit__MutableInstance(&type_nit__MutableInstance);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__naive_interpreter__Instance__mtype_61d]))(var3, var_init_type); /* mtype= on <var3:MutableInstance>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:MutableInstance>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__initialization_value_61d]))(self, var3); /* initialization_value= on <self:VirtualMachine>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__VirtualMachine___standard__kernel__Object__init]))(self); /* init on <self:VirtualMachine>*/
}
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#is_subtype for (self: VirtualMachine, MType, MType): Bool */
short int nit___nit__VirtualMachine___nit__naive_interpreter__NaiveInterpreter__is_subtype(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var1 /* : Bool */;
val* var2 /* : Frame */;
val* var3 /* : Array[Instance] */;
val* var4 /* : nullable Object */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_anchor /* var anchor: MClassType */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var12 /* : MModule */;
val* var13 /* : MType */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : MClass */;
val* var18 /* : MClassType */;
val* var19 /* : MModule */;
val* var20 /* : MType */;
short int var_sup_accept_null /* var sup_accept_null: Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : MType */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
short int var31 /* : Bool */;
val* var32 /* : MType */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : MModule */;
val* var40 /* : MType */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var44 /* : Bool */;
val* var45 /* : MType */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
val* var58 /* : MClass */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : MClass */;
val* var62 /* : MClass */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : MClass */;
val* var66 /* : MClass */;
val* var67 /* : nullable VTable */;
long var68 /* : Int */;
long var_super_id /* var super_id: Int */;
val* var69 /* : MClass */;
val* var70 /* : nullable VTable */;
long var71 /* : Int */;
long var_mask /* var mask: Int */;
val* var72 /* : MClass */;
val* var73 /* : nullable VTable */;
val* var74 /* : Pointer */;
short int var75 /* : Bool */;
short int var_res /* var res: Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
short int var82 /* : Bool */;
val* var83 /* : MModule */;
val* var84 /* : MClass */;
val* var85 /* : MClassType */;
val* var_sub2 /* var sub2: MClassType */;
long var_i /* var i: Int */;
val* var86 /* : MClass */;
long var87 /* : Int */;
long var_ /* var : Int */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
short int var94 /* : Bool */;
val* var95 /* : Array[MType] */;
val* var96 /* : nullable Object */;
val* var_sub_arg /* var sub_arg: MType */;
val* var97 /* : Array[MType] */;
val* var98 /* : nullable Object */;
val* var_sup_arg /* var sup_arg: MType */;
short int var99 /* : Bool */;
short int var_res2 /* var res2: Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
long var103 /* : Int */;
var_sub = p0;
var_sup = p1;
{
var1 = ((short int(*)(val* self, val* p0))(var_sub->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sub, var_sup); /* == on <var_sub:MType>*/
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__frame]))(self); /* frame on <self:VirtualMachine>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__naive_interpreter__Frame__arguments]))(var2); /* arguments on <var2:Frame>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 61);
fatal_exit(1);
}
var_anchor = var5;
/* <var_sub:MType> isa MFormalType */
cltype8 = type_nit__MFormalType.color;
idtype9 = type_nit__MFormalType.id;
if(cltype8 >= var_sub->type->table_size) {
var7 = 0;
} else {
var7 = var_sub->type->type_table[cltype8] == idtype9;
}
if (var7){
{
var10 = ((val*(*)(val* self))(var_anchor->class->vft[COLOR_nit__model__MClassType__mclass]))(var_anchor); /* mclass on <var_anchor:MClassType>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model__MClass__mclass_type]))(var10); /* mclass_type on <var10:MClass>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:VirtualMachine>*/
}
{
var13 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_sub->class->vft[COLOR_nit__model__MType__resolve_for]))(var_sub, var11, var_anchor, var12, 0); /* resolve_for on <var_sub:MType(MFormalType)>*/
}
var_sub = var13;
} else {
}
/* <var_sup:MType> isa MFormalType */
cltype15 = type_nit__MFormalType.color;
idtype16 = type_nit__MFormalType.id;
if(cltype15 >= var_sup->type->table_size) {
var14 = 0;
} else {
var14 = var_sup->type->type_table[cltype15] == idtype16;
}
if (var14){
{
var17 = ((val*(*)(val* self))(var_anchor->class->vft[COLOR_nit__model__MClassType__mclass]))(var_anchor); /* mclass on <var_anchor:MClassType>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__model__MClass__mclass_type]))(var17); /* mclass_type on <var17:MClass>*/
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:VirtualMachine>*/
}
{
var20 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_sup->class->vft[COLOR_nit__model__MType__resolve_for]))(var_sup, var18, var_anchor, var19, 0); /* resolve_for on <var_sup:MType(MFormalType)>*/
}
var_sup = var20;
} else {
}
var_sup_accept_null = 0;
/* <var_sup:MType> isa MNullableType */
cltype22 = type_nit__MNullableType.color;
idtype23 = type_nit__MNullableType.id;
if(cltype22 >= var_sup->type->table_size) {
var21 = 0;
} else {
var21 = var_sup->type->type_table[cltype22] == idtype23;
}
if (var21){
var_sup_accept_null = 1;
{
var24 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_sup); /* mtype on <var_sup:MType(MNullableType)>*/
}
var_sup = var24;
} else {
/* <var_sup:MType> isa MNullType */
cltype26 = type_nit__MNullType.color;
idtype27 = type_nit__MNullType.id;
if(cltype26 >= var_sup->type->table_size) {
var25 = 0;
} else {
var25 = var_sup->type->type_table[cltype26] == idtype27;
}
if (var25){
var_sup_accept_null = 1;
} else {
}
}
/* <var_sub:MType> isa MNullableType */
cltype29 = type_nit__MNullableType.color;
idtype30 = type_nit__MNullableType.id;
if(cltype29 >= var_sub->type->table_size) {
var28 = 0;
} else {
var28 = var_sub->type->type_table[cltype29] == idtype30;
}
if (var28){
var31 = !var_sup_accept_null;
if (var31){
var = 0;
goto RET_LABEL;
} else {
}
{
var32 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_sub); /* mtype on <var_sub:MType(MNullableType)>*/
}
var_sub = var32;
} else {
/* <var_sub:MType> isa MNullType */
cltype34 = type_nit__MNullType.color;
idtype35 = type_nit__MNullType.id;
if(cltype34 >= var_sub->type->table_size) {
var33 = 0;
} else {
var33 = var_sub->type->type_table[cltype34] == idtype35;
}
if (var33){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
/* <var_sub:MType> isa MFormalType */
cltype37 = type_nit__MFormalType.color;
idtype38 = type_nit__MFormalType.id;
if(cltype37 >= var_sub->type->table_size) {
var36 = 0;
} else {
var36 = var_sub->type->type_table[cltype37] == idtype38;
}
if (var36){
{
var39 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:VirtualMachine>*/
}
{
var40 = ((val*(*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nit__model__MType__anchor_to]))(var_sub, var39, var_anchor); /* anchor_to on <var_sub:MType(MFormalType)>*/
}
var_sub = var40;
/* <var_sub:MType> isa MNullableType */
cltype42 = type_nit__MNullableType.color;
idtype43 = type_nit__MNullableType.id;
if(cltype42 >= var_sub->type->table_size) {
var41 = 0;
} else {
var41 = var_sub->type->type_table[cltype42] == idtype43;
}
if (var41){
var44 = !var_sup_accept_null;
if (var44){
var = 0;
goto RET_LABEL;
} else {
}
{
var45 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MProxyType__mtype]))(var_sub); /* mtype on <var_sub:MType(MNullableType)>*/
}
var_sub = var45;
} else {
/* <var_sub:MType> isa MNullType */
cltype47 = type_nit__MNullType.color;
idtype48 = type_nit__MNullType.id;
if(cltype47 >= var_sub->type->table_size) {
var46 = 0;
} else {
var46 = var_sub->type->type_table[cltype47] == idtype48;
}
if (var46){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_sub:MType> isa MClassType */
cltype50 = type_nit__MClassType.color;
idtype51 = type_nit__MClassType.id;
if(cltype50 >= var_sub->type->table_size) {
var49 = 0;
} else {
var49 = var_sub->type->type_table[cltype50] == idtype51;
}
if (unlikely(!var49)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 101);
fatal_exit(1);
}
/* <var_sup:MType> isa MNullType */
cltype53 = type_nit__MNullType.color;
idtype54 = type_nit__MNullType.id;
if(cltype53 >= var_sup->type->table_size) {
var52 = 0;
} else {
var52 = var_sup->type->type_table[cltype53] == idtype54;
}
if (var52){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType> isa MClassType */
cltype56 = type_nit__MClassType.color;
idtype57 = type_nit__MClassType.id;
if(cltype56 >= var_sup->type->table_size) {
var55 = 0;
} else {
var55 = var_sup->type->type_table[cltype56] == idtype57;
}
if (unlikely(!var55)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 106);
fatal_exit(1);
}
{
var58 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sup); /* mclass on <var_sup:MType(MClassType)>*/
}
{
var59 = ((short int(*)(val* self))(var58->class->vft[COLOR_nit__virtual_machine__MClass__loaded]))(var58); /* loaded on <var58:MClass>*/
}
var60 = !var59;
if (var60){
{
var61 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sup); /* mclass on <var_sup:MType(MClassType)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__create_class]))(self, var61); /* create_class on <self:VirtualMachine>*/
}
} else {
}
{
var62 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sub); /* mclass on <var_sub:MType(MClassType)>*/
}
{
var63 = ((short int(*)(val* self))(var62->class->vft[COLOR_nit__virtual_machine__MClass__loaded]))(var62); /* loaded on <var62:MClass>*/
}
var64 = !var63;
if (var64){
{
var65 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sub); /* mclass on <var_sub:MType(MClassType)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__create_class]))(self, var65); /* create_class on <self:VirtualMachine>*/
}
} else {
}
{
var66 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sup); /* mclass on <var_sup:MType(MClassType)>*/
}
{
var67 = ((val*(*)(val* self))(var66->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var66); /* vtable on <var66:MClass>*/
}
if (var67 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 113);
fatal_exit(1);
} else {
var68 = ((long(*)(val* self))(var67->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var67); /* id on <var67:nullable VTable>*/
}
var_super_id = var68;
{
var69 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sub); /* mclass on <var_sub:MType(MClassType)>*/
}
{
var70 = ((val*(*)(val* self))(var69->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var69); /* vtable on <var69:MClass>*/
}
if (var70 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 114);
fatal_exit(1);
} else {
var71 = ((long(*)(val* self))(var70->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var70); /* mask on <var70:nullable VTable>*/
}
var_mask = var71;
{
var72 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sub); /* mclass on <var_sub:MType(MClassType)>*/
}
{
var73 = ((val*(*)(val* self))(var72->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var72); /* vtable on <var72:MClass>*/
}
if (var73 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 116);
fatal_exit(1);
} else {
var74 = ((val*(*)(val* self))(var73->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var73); /* internal_vtable on <var73:nullable VTable>*/
}
{
var75 = ((short int(*)(val* self, long p0, long p1, val* p2))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__inter_is_subtype_ph]))(self, var_super_id, var_mask, var74); /* inter_is_subtype_ph on <self:VirtualMachine>*/
}
var_res = var75;
{
{ /* Inline kernel#Bool#== (var_res,0) on <var_res:Bool> */
var78 = var_res == 0;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType(MClassType)> isa MGenericType */
cltype80 = type_nit__MGenericType.color;
idtype81 = type_nit__MGenericType.id;
if(cltype80 >= var_sup->type->table_size) {
var79 = 0;
} else {
var79 = var_sup->type->type_table[cltype80] == idtype81;
}
var82 = !var79;
if (var82){
var = 1;
goto RET_LABEL;
} else {
}
{
var83 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(self); /* mainmodule on <self:VirtualMachine>*/
}
{
var84 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sup); /* mclass on <var_sup:MType(MGenericType)>*/
}
{
var85 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__supertype_to]))(var_sub, var83, var_anchor, var84); /* supertype_to on <var_sub:MType(MClassType)>*/
}
var_sub2 = var85;
var_i = 0l;
{
var86 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__mclass]))(var_sup); /* mclass on <var_sup:MType(MGenericType)>*/
}
{
var87 = ((long(*)(val* self))(var86->class->vft[COLOR_nit__model__MClass__arity]))(var86); /* arity on <var86:MClass>*/
}
var_ = var87;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var90 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var94 = var_i < var_;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
var95 = ((val*(*)(val* self))(var_sub2->class->vft[COLOR_nit__model__MClassType__arguments]))(var_sub2); /* arguments on <var_sub2:MClassType>*/
}
{
var96 = ((val*(*)(val* self, long p0))(var95->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var95, var_i); /* [] on <var95:Array[MType]>*/
}
var_sub_arg = var96;
{
var97 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MClassType__arguments]))(var_sup); /* arguments on <var_sup:MType(MGenericType)>*/
}
{
var98 = ((val*(*)(val* self, long p0))(var97->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var97, var_i); /* [] on <var97:Array[MType]>*/
}
var_sup_arg = var98;
{
var99 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__is_subtype]))(self, var_sub_arg, var_sup_arg); /* is_subtype on <self:VirtualMachine>*/
}
var_res2 = var99;
{
{ /* Inline kernel#Bool#== (var_res2,0) on <var_res2:Bool> */
var102 = var_res2 == 0;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
if (var100){
var = 0;
goto RET_LABEL;
} else {
}
var103 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var103;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#inter_is_subtype_ph for (self: VirtualMachine, Int, Int, Pointer): Bool */
short int nit___nit__VirtualMachine___inter_is_subtype_ph(val* self, long p0, long p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : Pointer for extern */;
var2 = ((struct instance_standard__Pointer*)p2)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = virtual_machine___VirtualMachine_inter_is_subtype_ph___impl(var_for_c_0, p0, p1, var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#inter_is_subtype_sst for (self: VirtualMachine, Int, Int, Pointer): Bool */
short int nit___nit__VirtualMachine___inter_is_subtype_sst(val* self, long p0, long p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : Pointer for extern */;
var2 = ((struct instance_standard__Pointer*)p2)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = virtual_machine___VirtualMachine_inter_is_subtype_sst___impl(var_for_c_0, p0, p1, var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#init_instance for (self: VirtualMachine, Instance) */
void nit___nit__VirtualMachine___nit__naive_interpreter__NaiveInterpreter__init_instance(val* self, val* p0) {
val* var_recv /* var recv: Instance */;
val* var /* : MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var2 /* : MClass */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : MClass */;
val* var11 /* : MType */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
val* var16 /* : MClass */;
val* var17 /* : nullable VTable */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Instance */;
val* var22 /* : MType */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : MClass */;
val* var28 /* : Array[MAttribute] */;
long var29 /* : Int */;
val* var30 /* : Pointer */;
var_recv = p0;
{
var = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 162);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model__MClassType__mclass]))(var); /* mclass on <var:MType(MClassType)>*/
}
{
var3 = ((short int(*)(val* self))(var2->class->vft[COLOR_nit__virtual_machine__MClass__loaded]))(var2); /* loaded on <var2:MClass>*/
}
var4 = !var3;
if (var4){
{
var5 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var5:MType> isa MClassType */
cltype7 = type_nit__MClassType.color;
idtype8 = type_nit__MClassType.id;
if(cltype7 >= var5->type->table_size) {
var6 = 0;
} else {
var6 = var5->type->type_table[cltype7] == idtype8;
}
if (unlikely(!var6)) {
var_class_name9 = var5 == NULL ? "null" : var5->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 162);
fatal_exit(1);
}
{
var10 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model__MClassType__mclass]))(var5); /* mclass on <var5:MType(MClassType)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__create_class]))(self, var10); /* create_class on <self:VirtualMachine>*/
}
} else {
}
{
var11 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var11:MType> isa MClassType */
cltype13 = type_nit__MClassType.color;
idtype14 = type_nit__MClassType.id;
if(cltype13 >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype13] == idtype14;
}
if (unlikely(!var12)) {
var_class_name15 = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 164);
fatal_exit(1);
}
{
var16 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__MClassType__mclass]))(var11); /* mclass on <var11:MType(MClassType)>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var16); /* vtable on <var16:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable_61d]))(var_recv, var17); /* vtable= on <var_recv:Instance>*/
}
/* <var_recv:Instance> isa MutableInstance */
cltype19 = type_nit__MutableInstance.color;
idtype20 = type_nit__MutableInstance.id;
if(cltype19 >= var_recv->type->table_size) {
var18 = 0;
} else {
var18 = var_recv->type->type_table[cltype19] == idtype20;
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 166);
fatal_exit(1);
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__initialization_value]))(self); /* initialization_value on <self:VirtualMachine>*/
}
{
var22 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance(MutableInstance)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 168);
fatal_exit(1);
}
{
var27 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__model__MClassType__mclass]))(var22); /* mclass on <var22:MType(MClassType)>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__virtual_machine__MClass__mattributes]))(var27); /* mattributes on <var27:MClass>*/
}
{
var29 = ((long(*)(val* self))(var28->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var28); /* length on <var28:Array[MAttribute]>*/
}
{
var30 = ((val*(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__init_internal_attributes]))(self, var21, var29); /* init_internal_attributes on <self:VirtualMachine>*/
}
{
((void(*)(val* self, val* p0))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes_61d]))(var_recv, var30); /* internal_attributes= on <var_recv:Instance(MutableInstance)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit___nit__VirtualMachine___nit__naive_interpreter__NaiveInterpreter__init_instance]))(self, p0); /* init_instance on <self:VirtualMachine>*/
}
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#init_instance_primitive for (self: VirtualMachine, Instance) */
void nit___nit__VirtualMachine___nit__naive_interpreter__NaiveInterpreter__init_instance_primitive(val* self, val* p0) {
val* var_recv /* var recv: Instance */;
val* var /* : MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var2 /* : MClass */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : MClass */;
val* var11 /* : MType */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
val* var16 /* : MClass */;
val* var17 /* : nullable VTable */;
var_recv = p0;
{
var = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 175);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__model__MClassType__mclass]))(var); /* mclass on <var:MType(MClassType)>*/
}
{
var3 = ((short int(*)(val* self))(var2->class->vft[COLOR_nit__virtual_machine__MClass__loaded]))(var2); /* loaded on <var2:MClass>*/
}
var4 = !var3;
if (var4){
{
var5 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var5:MType> isa MClassType */
cltype7 = type_nit__MClassType.color;
idtype8 = type_nit__MClassType.id;
if(cltype7 >= var5->type->table_size) {
var6 = 0;
} else {
var6 = var5->type->type_table[cltype7] == idtype8;
}
if (unlikely(!var6)) {
var_class_name9 = var5 == NULL ? "null" : var5->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 175);
fatal_exit(1);
}
{
var10 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model__MClassType__mclass]))(var5); /* mclass on <var5:MType(MClassType)>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__create_class]))(self, var10); /* create_class on <self:VirtualMachine>*/
}
} else {
}
{
var11 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var11:MType> isa MClassType */
cltype13 = type_nit__MClassType.color;
idtype14 = type_nit__MClassType.id;
if(cltype13 >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype13] == idtype14;
}
if (unlikely(!var12)) {
var_class_name15 = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 177);
fatal_exit(1);
}
{
var16 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__model__MClassType__mclass]))(var11); /* mclass on <var11:MType(MClassType)>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var16); /* vtable on <var16:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable_61d]))(var_recv, var17); /* vtable= on <var_recv:Instance>*/
}
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#init_internal_attributes for (self: VirtualMachine, Instance, Int): Pointer */
val* nit___nit__VirtualMachine___init_internal_attributes(val* self, val* p0, long p1) {
val* var /* : Pointer */;
val* var1 /* : Pointer */;
val* var2 /* : Pointer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
var1 = virtual_machine___VirtualMachine_init_internal_attributes___impl(var_for_c_0, var_for_c_1, p1);
var2 = BOX_standard__Pointer(var1); /* boxing Pointer */
var2->type = &type_standard__Pointer;
var2->class = &class_standard__Pointer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::Collection::length */
long virtual_machine___Array_of_Instance_length( struct nitni_instance * recv ) {
long var /* : Int */;
{
var = ((long(*)(val* self))(recv->value->class->vft[COLOR_standard__abstract_collection__Collection__length]))(recv->value); /* length on <recv->value:Array[Instance]>*/
}
return var;
}
/* nitni callback for standard::SequenceRead::[] */
struct nitni_instance * virtual_machine___Array_of_Instance__index( struct nitni_instance * recv, long index ) {
val* var /* : nullable Object */;
{
var = ((val*(*)(val* self, long p0))(recv->value->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(recv->value, index); /* [] on <recv->value:Array[Instance]>*/
}
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* method virtual_machine#VirtualMachine#create_class for (self: VirtualMachine, MClass) */
void nit___nit__VirtualMachine___create_class(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
var_mclass = p0;
{
((void(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_nit__virtual_machine__MClass__make_vt]))(var_mclass, self); /* make_vt on <var_mclass:MClass>*/
}
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#send for (self: VirtualMachine, MMethod, Array[Instance]): nullable Instance */
val* nit___nit__VirtualMachine___nit__naive_interpreter__NaiveInterpreter__send(val* self, val* p0, val* p1) {
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
val* var6 /* : nullable VTable */;
val* var7 /* : MMethodDef */;
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
var3 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__send_commons]))(self, var_mproperty, var_args, var_mtype); /* send_commons on <self:VirtualMachine>*/
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
var6 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance>*/
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 206);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__method_dispatch]))(self, var_mproperty, var6, var_recv); /* method_dispatch on <self:VirtualMachine>*/
}
var_propdef = var7;
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__call]))(self, var_propdef, var_args); /* call on <self:VirtualMachine>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#method_dispatch for (self: VirtualMachine, MMethod, VTable, Instance): MMethodDef */
val* nit___nit__VirtualMachine___method_dispatch(val* self, val* p0, val* p1, val* p2) {
val* var /* : MMethodDef */;
val* var_mproperty /* var mproperty: MMethod */;
val* var_vtable /* var vtable: VTable */;
val* var_recv /* var recv: Instance */;
val* var1 /* : MClassDef */;
val* var2 /* : MClass */;
val* var3 /* : HashMap[MClass, Int] */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var6 /* : MClass */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var15 /* : Bool */;
val* var16 /* : Pointer */;
long var17 /* : Int */;
val* var18 /* : MMethodDef */;
val* var19 /* : Pointer */;
long var20 /* : Int */;
val* var21 /* : MClassDef */;
val* var22 /* : MClass */;
val* var23 /* : nullable VTable */;
long var24 /* : Int */;
long var25 /* : Int */;
val* var26 /* : MMethodDef */;
var_mproperty = p0;
var_vtable = p1;
var_recv = p2;
{
var1 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MMethod>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MClassDef__mclass]))(var1); /* mclass on <var1:MClassDef>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__virtual_machine__MClass__positions_methods]))(var2); /* positions_methods on <var2:MClass>*/
}
{
var4 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance>*/
}
/* <var4:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = var4 == NULL ? "null" : var4->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 215);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__model__MClassType__mclass]))(var4); /* mclass on <var4:MType(MClassType)>*/
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var3, var6); /* [] on <var3:HashMap[MClass, Int]>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var10 = -1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var7,var8) on <var7:nullable Object(Int)> */
var14 = (long)(var7)>>2;
var13 = (var7 != NULL) && (var14 == var8);
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
var16 = ((val*(*)(val* self))(var_vtable->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var_vtable); /* internal_vtable on <var_vtable:VTable>*/
}
{
var17 = ((long(*)(val* self))(var_mproperty->class->vft[COLOR_nit__virtual_machine__MMethod__absolute_offset]))(var_mproperty); /* absolute_offset on <var_mproperty:MMethod>*/
}
{
var18 = ((val*(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__method_dispatch_sst]))(self, var16, var17); /* method_dispatch_sst on <self:VirtualMachine>*/
}
var = var18;
goto RET_LABEL;
} else {
{
var19 = ((val*(*)(val* self))(var_vtable->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var_vtable); /* internal_vtable on <var_vtable:VTable>*/
}
{
var20 = ((long(*)(val* self))(var_vtable->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var_vtable); /* mask on <var_vtable:VTable>*/
}
{
var21 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MMethod>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__model__MClassDef__mclass]))(var21); /* mclass on <var21:MClassDef>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var22); /* vtable on <var22:MClass>*/
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 219);
fatal_exit(1);
} else {
var24 = ((long(*)(val* self))(var23->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var23); /* id on <var23:nullable VTable>*/
}
{
var25 = ((long(*)(val* self))(var_mproperty->class->vft[COLOR_nit__virtual_machine__MMethod__offset]))(var_mproperty); /* offset on <var_mproperty:MMethod>*/
}
{
var26 = ((val*(*)(val* self, val* p0, long p1, long p2, long p3))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__method_dispatch_ph]))(self, var19, var20, var24, var25); /* method_dispatch_ph on <self:VirtualMachine>*/
}
var = var26;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#method_dispatch_ph for (self: VirtualMachine, Pointer, Int, Int, Int): MMethodDef */
val* nit___nit__VirtualMachine___method_dispatch_ph(val* self, val* p0, long p1, long p2, long p3) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
void* var2 /* : Pointer for extern */;
var2 = ((struct instance_standard__Pointer*)p0)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* ret_var;
ret_var = virtual_machine___VirtualMachine_method_dispatch_ph___impl(var_for_c_0, var2, p1, p2, p3);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#method_dispatch_sst for (self: VirtualMachine, Pointer, Int): MMethodDef */
val* nit___nit__VirtualMachine___method_dispatch_sst(val* self, val* p0, long p1) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
void* var2 /* : Pointer for extern */;
var2 = ((struct instance_standard__Pointer*)p0)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* ret_var;
ret_var = virtual_machine___VirtualMachine_method_dispatch_sst___impl(var_for_c_0, var2, p1);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#read_attribute for (self: VirtualMachine, MAttribute, Instance): Instance */
val* nit___nit__VirtualMachine___nit__naive_interpreter__NaiveInterpreter__read_attribute(val* self, val* p0, val* p1) {
val* var /* : Instance */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var_recv /* var recv: Instance */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : MClassDef */;
val* var3 /* : MClass */;
val* var4 /* : HashMap[MClass, Int] */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name;
val* var9 /* : MClass */;
val* var10 /* : nullable Object */;
long var11 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
val* var19 /* : Pointer */;
long var20 /* : Int */;
val* var21 /* : Instance */;
val* var_i /* var i: Instance */;
val* var22 /* : MClassDef */;
val* var23 /* : MClass */;
val* var24 /* : nullable VTable */;
long var25 /* : Int */;
long var_id /* var id: Int */;
val* var26 /* : Pointer */;
val* var27 /* : nullable VTable */;
val* var28 /* : Pointer */;
val* var29 /* : nullable VTable */;
long var30 /* : Int */;
long var31 /* : Int */;
val* var32 /* : Instance */;
val* var33 /* : Instance */;
short int var34 /* : Bool */;
val* var35 /* : NativeArray[String] */;
static val* varonce;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
val* var41 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 254);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MAttribute>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MClassDef__mclass]))(var2); /* mclass on <var2:MClassDef>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__virtual_machine__MClass__positions_attributes]))(var3); /* positions_attributes on <var3:MClass>*/
}
{
var5 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance(MutableInstance)>*/
}
/* <var5:MType> isa MClassType */
cltype7 = type_nit__MClassType.color;
idtype8 = type_nit__MClassType.id;
if(cltype7 >= var5->type->table_size) {
var6 = 0;
} else {
var6 = var5->type->type_table[cltype7] == idtype8;
}
if (unlikely(!var6)) {
var_class_name = var5 == NULL ? "null" : var5->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 258);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self))(var5->class->vft[COLOR_nit__model__MClassType__mclass]))(var5); /* mclass on <var5:MType(MClassType)>*/
}
{
var10 = ((val*(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var4, var9); /* [] on <var4:HashMap[MClass, Int]>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var13 = -1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var10,var11) on <var10:nullable Object(Int)> */
var17 = (long)(var10)>>2;
var16 = (var10 != NULL) && (var17 == var11);
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
var19 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes]))(var_recv); /* internal_attributes on <var_recv:Instance(MutableInstance)>*/
}
{
var20 = ((long(*)(val* self))(var_mproperty->class->vft[COLOR_nit__virtual_machine__MAttribute__absolute_offset]))(var_mproperty); /* absolute_offset on <var_mproperty:MAttribute>*/
}
{
var21 = ((val*(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__read_attribute_sst]))(self, var19, var20); /* read_attribute_sst on <self:VirtualMachine>*/
}
var_i = var21;
} else {
{
var22 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MAttribute>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__model__MClassDef__mclass]))(var22); /* mclass on <var22:MClassDef>*/
}
{
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var23); /* vtable on <var23:MClass>*/
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 263);
fatal_exit(1);
} else {
var25 = ((long(*)(val* self))(var24->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var24); /* id on <var24:nullable VTable>*/
}
var_id = var25;
{
var26 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes]))(var_recv); /* internal_attributes on <var_recv:Instance(MutableInstance)>*/
}
{
var27 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance(MutableInstance)>*/
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 265);
fatal_exit(1);
} else {
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var27); /* internal_vtable on <var27:nullable VTable>*/
}
{
var29 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance(MutableInstance)>*/
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 266);
fatal_exit(1);
} else {
var30 = ((long(*)(val* self))(var29->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var29); /* mask on <var29:nullable VTable>*/
}
{
var31 = ((long(*)(val* self))(var_mproperty->class->vft[COLOR_nit__virtual_machine__MAttribute__offset]))(var_mproperty); /* offset on <var_mproperty:MAttribute>*/
}
{
var32 = ((val*(*)(val* self, val* p0, val* p1, long p2, long p3, long p4))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__read_attribute_ph]))(self, var26, var28, var30, var_id, var31); /* read_attribute_ph on <self:VirtualMachine>*/
}
var_i = var32;
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__initialization_value]))(self); /* initialization_value on <self:VirtualMachine>*/
}
{
var34 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, var33); /* == on <var_i:Instance>*/
}
if (var34){
if (unlikely(varonce==NULL)) {
var35 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Uninitialized attribute ";
var39 = standard___standard__NativeString___to_s_with_length(var38, 24l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var35)->values[0]=var37;
} else {
var35 = varonce;
varonce = NULL;
}
{
var40 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mproperty); /* name on <var_mproperty:MAttribute>*/
}
((struct instance_standard__NativeArray*)var35)->values[1]=var40;
{
var41 = ((val*(*)(val* self))(var35->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce = var35;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__fatal]))(self, var41); /* fatal on <self:VirtualMachine>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 272);
fatal_exit(1);
} else {
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#read_attribute_ph for (self: VirtualMachine, Pointer, Pointer, Int, Int, Int): Instance */
val* nit___nit__VirtualMachine___read_attribute_ph(val* self, val* p0, val* p1, long p2, long p3, long p4) {
val* var /* : Instance */;
val* var1 /* : Instance */;
void* var2 /* : Pointer for extern */;
void* var3 /* : Pointer for extern */;
var2 = ((struct instance_standard__Pointer*)p0)->value; /* unboxing Pointer */
var3 = ((struct instance_standard__Pointer*)p1)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* ret_var;
ret_var = virtual_machine___VirtualMachine_read_attribute_ph___impl(var_for_c_0, var2, var3, p2, p3, p4);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#read_attribute_sst for (self: VirtualMachine, Pointer, Int): Instance */
val* nit___nit__VirtualMachine___read_attribute_sst(val* self, val* p0, long p1) {
val* var /* : Instance */;
val* var1 /* : Instance */;
void* var2 /* : Pointer for extern */;
var2 = ((struct instance_standard__Pointer*)p0)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* ret_var;
ret_var = virtual_machine___VirtualMachine_read_attribute_sst___impl(var_for_c_0, var2, p1);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#VirtualMachine#write_attribute for (self: VirtualMachine, MAttribute, Instance, Instance) */
void nit___nit__VirtualMachine___nit__naive_interpreter__NaiveInterpreter__write_attribute(val* self, val* p0, val* p1, val* p2) {
val* var_mproperty /* var mproperty: MAttribute */;
val* var_recv /* var recv: Instance */;
val* var_value /* var value: Instance */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : MClassDef */;
val* var2 /* : MClass */;
val* var3 /* : HashMap[MClass, Int] */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name;
val* var8 /* : MClass */;
val* var9 /* : nullable Object */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var17 /* : Bool */;
val* var18 /* : Pointer */;
long var19 /* : Int */;
val* var20 /* : MClassDef */;
val* var21 /* : MClass */;
val* var22 /* : nullable VTable */;
long var23 /* : Int */;
long var_id /* var id: Int */;
val* var24 /* : Pointer */;
val* var25 /* : nullable VTable */;
val* var26 /* : Pointer */;
val* var27 /* : nullable VTable */;
long var28 /* : Int */;
long var29 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 312);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MAttribute>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MClassDef__mclass]))(var1); /* mclass on <var1:MClassDef>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__virtual_machine__MClass__positions_attributes]))(var2); /* positions_attributes on <var2:MClass>*/
}
{
var4 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__naive_interpreter__Instance__mtype]))(var_recv); /* mtype on <var_recv:Instance(MutableInstance)>*/
}
/* <var4:MType> isa MClassType */
cltype6 = type_nit__MClassType.color;
idtype7 = type_nit__MClassType.id;
if(cltype6 >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype6] == idtype7;
}
if (unlikely(!var5)) {
var_class_name = var4 == NULL ? "null" : var4->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 315);
fatal_exit(1);
}
{
var8 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__model__MClassType__mclass]))(var4); /* mclass on <var4:MType(MClassType)>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var3, var8); /* [] on <var3:HashMap[MClass, Int]>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var12 = -1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var9,var10) on <var9:nullable Object(Int)> */
var16 = (long)(var9)>>2;
var15 = (var9 != NULL) && (var16 == var10);
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
var18 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes]))(var_recv); /* internal_attributes on <var_recv:Instance(MutableInstance)>*/
}
{
var19 = ((long(*)(val* self))(var_mproperty->class->vft[COLOR_nit__virtual_machine__MAttribute__absolute_offset]))(var_mproperty); /* absolute_offset on <var_mproperty:MAttribute>*/
}
{
((void(*)(val* self, val* p0, long p1, val* p2))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__write_attribute_sst]))(self, var18, var19, var_value); /* write_attribute_sst on <self:VirtualMachine>*/
}
} else {
{
var20 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MAttribute>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nit__model__MClassDef__mclass]))(var20); /* mclass on <var20:MClassDef>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var21); /* vtable on <var21:MClass>*/
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 320);
fatal_exit(1);
} else {
var23 = ((long(*)(val* self))(var22->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var22); /* id on <var22:nullable VTable>*/
}
var_id = var23;
{
var24 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes]))(var_recv); /* internal_attributes on <var_recv:Instance(MutableInstance)>*/
}
{
var25 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance(MutableInstance)>*/
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 322);
fatal_exit(1);
} else {
var26 = ((val*(*)(val* self))(var25->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var25); /* internal_vtable on <var25:nullable VTable>*/
}
{
var27 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance(MutableInstance)>*/
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 323);
fatal_exit(1);
} else {
var28 = ((long(*)(val* self))(var27->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var27); /* mask on <var27:nullable VTable>*/
}
{
var29 = ((long(*)(val* self))(var_mproperty->class->vft[COLOR_nit__virtual_machine__MAttribute__offset]))(var_mproperty); /* offset on <var_mproperty:MAttribute>*/
}
{
((void(*)(val* self, val* p0, val* p1, long p2, long p3, long p4, val* p5))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__write_attribute_ph]))(self, var24, var26, var28, var_id, var29, var_value); /* write_attribute_ph on <self:VirtualMachine>*/
}
}
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#write_attribute_ph for (self: VirtualMachine, Pointer, Pointer, Int, Int, Int, Instance) */
void nit___nit__VirtualMachine___write_attribute_ph(val* self, val* p0, val* p1, long p2, long p3, long p4, val* p5) {
void* var /* : Pointer for extern */;
void* var1 /* : Pointer for extern */;
var = ((struct instance_standard__Pointer*)p0)->value; /* unboxing Pointer */
var1 = ((struct instance_standard__Pointer*)p1)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_6;
var_for_c_6 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_6->value = p5;
virtual_machine___VirtualMachine_write_attribute_ph___impl(var_for_c_0, var, var1, p2, p3, p4, var_for_c_6);
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#write_attribute_sst for (self: VirtualMachine, Pointer, Int, Instance) */
void nit___nit__VirtualMachine___write_attribute_sst(val* self, val* p0, long p1, val* p2) {
void* var /* : Pointer for extern */;
var = ((struct instance_standard__Pointer*)p0)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_3;
var_for_c_3 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_3->value = p2;
virtual_machine___VirtualMachine_write_attribute_sst___impl(var_for_c_0, var, p1, var_for_c_3);
RET_LABEL:;
}
/* method virtual_machine#VirtualMachine#isset_attribute for (self: VirtualMachine, MAttribute, Instance): Bool */
short int nit___nit__VirtualMachine___nit__naive_interpreter__NaiveInterpreter__isset_attribute(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var_recv /* var recv: Instance */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : MClassDef */;
val* var3 /* : MClass */;
val* var4 /* : nullable VTable */;
long var5 /* : Int */;
long var_id /* var id: Int */;
val* var6 /* : Pointer */;
val* var7 /* : nullable VTable */;
val* var8 /* : Pointer */;
val* var9 /* : nullable VTable */;
long var10 /* : Int */;
long var11 /* : Int */;
val* var12 /* : Instance */;
val* var_i /* var i: Instance */;
val* var13 /* : Instance */;
short int var14 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 359);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var_mproperty); /* intro_mclassdef on <var_mproperty:MAttribute>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__MClassDef__mclass]))(var2); /* mclass on <var2:MClassDef>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var3); /* vtable on <var3:MClass>*/
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 363);
fatal_exit(1);
} else {
var5 = ((long(*)(val* self))(var4->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var4); /* id on <var4:nullable VTable>*/
}
var_id = var5;
{
var6 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__MutableInstance__internal_attributes]))(var_recv); /* internal_attributes on <var_recv:Instance(MutableInstance)>*/
}
{
var7 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance(MutableInstance)>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 365);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var7); /* internal_vtable on <var7:nullable VTable>*/
}
{
var9 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nit__virtual_machine__Instance__vtable]))(var_recv); /* vtable on <var_recv:Instance(MutableInstance)>*/
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 366);
fatal_exit(1);
} else {
var10 = ((long(*)(val* self))(var9->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var9); /* mask on <var9:nullable VTable>*/
}
{
var11 = ((long(*)(val* self))(var_mproperty->class->vft[COLOR_nit__virtual_machine__MAttribute__offset]))(var_mproperty); /* offset on <var_mproperty:MAttribute>*/
}
{
var12 = ((val*(*)(val* self, val* p0, val* p1, long p2, long p3, long p4))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__read_attribute_ph]))(self, var6, var8, var10, var_id, var11); /* read_attribute_ph on <self:VirtualMachine>*/
}
var_i = var12;
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__VirtualMachine__initialization_value]))(self); /* initialization_value on <self:VirtualMachine>*/
}
{
var14 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_i, var13); /* != on <var_i:Instance>*/
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#vtable for (self: MClass): nullable VTable */
val* nit__virtual_machine___MClass___vtable(val* self) {
val* var /* : nullable VTable */;
val* var1 /* : nullable VTable */;
var1 = self->attrs[COLOR_nit__virtual_machine__MClass___vtable].val; /* _vtable on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#vtable= for (self: MClass, nullable VTable) */
void nit__virtual_machine___MClass___vtable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__MClass___vtable].val = p0; /* _vtable on <self:MClass> */
RET_LABEL:;
}
/* method virtual_machine#MClass#loaded for (self: MClass): Bool */
short int nit__virtual_machine___MClass___loaded(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__virtual_machine__MClass___loaded].s; /* _loaded on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#loaded= for (self: MClass, Bool) */
void nit__virtual_machine___MClass___loaded_61d(val* self, short int p0) {
self->attrs[COLOR_nit__virtual_machine__MClass___loaded].s = p0; /* _loaded on <self:MClass> */
RET_LABEL:;
}
/* method virtual_machine#MClass#color for (self: MClass): Int */
long nit__virtual_machine___MClass___color(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__virtual_machine__MClass___color].l; /* _color on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#color= for (self: MClass, Int) */
void nit__virtual_machine___MClass___color_61d(val* self, long p0) {
self->attrs[COLOR_nit__virtual_machine__MClass___color].l = p0; /* _color on <self:MClass> */
RET_LABEL:;
}
/* method virtual_machine#MClass#positions_attributes for (self: MClass): HashMap[MClass, Int] */
val* nit__virtual_machine___MClass___positions_attributes(val* self) {
val* var /* : HashMap[MClass, Int] */;
val* var1 /* : HashMap[MClass, Int] */;
var1 = self->attrs[COLOR_nit__virtual_machine__MClass___positions_attributes].val; /* _positions_attributes on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _positions_attributes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 383);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#positions_attributes= for (self: MClass, HashMap[MClass, Int]) */
void nit__virtual_machine___MClass___positions_attributes_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__MClass___positions_attributes].val = p0; /* _positions_attributes on <self:MClass> */
RET_LABEL:;
}
/* method virtual_machine#MClass#positions_methods for (self: MClass): HashMap[MClass, Int] */
val* nit__virtual_machine___MClass___positions_methods(val* self) {
val* var /* : HashMap[MClass, Int] */;
val* var1 /* : HashMap[MClass, Int] */;
var1 = self->attrs[COLOR_nit__virtual_machine__MClass___positions_methods].val; /* _positions_methods on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _positions_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 387);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#positions_methods= for (self: MClass, HashMap[MClass, Int]) */
void nit__virtual_machine___MClass___positions_methods_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__MClass___positions_methods].val = p0; /* _positions_methods on <self:MClass> */
RET_LABEL:;
}
/* method virtual_machine#MClass#intro_mattributes for (self: MClass): Array[MAttribute] */
val* nit__virtual_machine___MClass___intro_mattributes(val* self) {
val* var /* : Array[MAttribute] */;
val* var1 /* : Array[MAttribute] */;
var1 = self->attrs[COLOR_nit__virtual_machine__MClass___intro_mattributes].val; /* _intro_mattributes on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mattributes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 391);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#intro_mattributes= for (self: MClass, Array[MAttribute]) */
void nit__virtual_machine___MClass___intro_mattributes_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__MClass___intro_mattributes].val = p0; /* _intro_mattributes on <self:MClass> */
RET_LABEL:;
}
/* method virtual_machine#MClass#intro_mmethods for (self: MClass): Array[MMethod] */
val* nit__virtual_machine___MClass___intro_mmethods(val* self) {
val* var /* : Array[MMethod] */;
val* var1 /* : Array[MMethod] */;
var1 = self->attrs[COLOR_nit__virtual_machine__MClass___intro_mmethods].val; /* _intro_mmethods on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmethods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 394);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#intro_mmethods= for (self: MClass, Array[MMethod]) */
void nit__virtual_machine___MClass___intro_mmethods_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__MClass___intro_mmethods].val = p0; /* _intro_mmethods on <self:MClass> */
RET_LABEL:;
}
/* method virtual_machine#MClass#mattributes for (self: MClass): Array[MAttribute] */
val* nit__virtual_machine___MClass___mattributes(val* self) {
val* var /* : Array[MAttribute] */;
val* var1 /* : Array[MAttribute] */;
var1 = self->attrs[COLOR_nit__virtual_machine__MClass___mattributes].val; /* _mattributes on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mattributes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 397);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#mattributes= for (self: MClass, Array[MAttribute]) */
void nit__virtual_machine___MClass___mattributes_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__MClass___mattributes].val = p0; /* _mattributes on <self:MClass> */
RET_LABEL:;
}
/* method virtual_machine#MClass#mmethods for (self: MClass): Array[MMethod] */
val* nit__virtual_machine___MClass___mmethods(val* self) {
val* var /* : Array[MMethod] */;
val* var1 /* : Array[MMethod] */;
var1 = self->attrs[COLOR_nit__virtual_machine__MClass___mmethods].val; /* _mmethods on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 400);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#mmethods= for (self: MClass, Array[MMethod]) */
void nit__virtual_machine___MClass___mmethods_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__MClass___mmethods].val = p0; /* _mmethods on <self:MClass> */
RET_LABEL:;
}
/* method virtual_machine#MClass#make_vt for (self: MClass, VirtualMachine) */
void nit__virtual_machine___MClass___make_vt(val* self, val* p0) {
val* var_v /* var v: VirtualMachine */;
short int var /* : Bool */;
val* var1 /* : Array[MClass] */;
val* var_superclasses /* var superclasses: Array[MClass] */;
val* var2 /* : Array[Int] */;
val* var_ids /* var ids: Array[Int] */;
val* var3 /* : Array[Int] */;
val* var_nb_methods /* var nb_methods: Array[Int] */;
val* var4 /* : Array[Int] */;
val* var_nb_attributes /* var nb_attributes: Array[Int] */;
long var_offset_attributes /* var offset_attributes: Int */;
long var_offset_methods /* var offset_methods: Int */;
val* var_previous_parent /* var previous_parent: nullable MClass */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_ /* var : Array[MClass] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[MClass] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : Array[MMethod] */;
long var18 /* : Int */;
long var_methods /* var methods: Int */;
val* var19 /* : Array[MAttribute] */;
long var20 /* : Int */;
long var_attributes /* var attributes: Int */;
val* var21 /* : Array[MMethod] */;
val* var22 /* : Array[MMethod] */;
val* var23 /* : Array[MAttribute] */;
val* var24 /* : Array[MAttribute] */;
val* var25 /* : nullable VTable */;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
val* var28 /* : nullable Object */;
val* var29 /* : nullable Object */;
long var30 /* : Int */;
long var32 /* : Int */;
long var_pos_attr /* var pos_attr: Int */;
long var33 /* : Int */;
long var35 /* : Int */;
long var_pos_meth /* var pos_meth: Int */;
val* var36 /* : HashMap[MClass, Int] */;
val* var37 /* : nullable Object */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
val* var42 /* : HashMap[MClass, Int] */;
val* var43 /* : nullable Object */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
val* var_76 /* var : Array[MClass] */;
val* var77 /* : Iterator[nullable Object] */;
val* var_78 /* var : ArrayIterator[MClass] */;
short int var79 /* : Bool */;
val* var80 /* : nullable Object */;
val* var_cl /* var cl: MClass */;
val* var81 /* : nullable VTable */;
var_v = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__loaded]))(self); /* loaded on <self:MClass>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__virtual_machine__MClass__superclasses_ordering]))(self, var_v); /* superclasses_ordering on <self:MClass>*/
}
var_superclasses = var1;
{
((void(*)(val* self, val* p0))(var_superclasses->class->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var_superclasses, self); /* remove on <var_superclasses:Array[MClass]>*/
}
var2 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[Int]>*/
}
var_ids = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Int]>*/
}
var_nb_methods = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Int]>*/
}
var_nb_attributes = var4;
var_offset_attributes = 0l;
var_offset_methods = 3l;
var_previous_parent = ((val*)NULL);
{
var5 = ((long(*)(val* self))(var_superclasses->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_superclasses); /* length on <var_superclasses:Array[MClass]>*/
}
{
{ /* Inline kernel#Int#> (var5,0l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var9 = var5 > 0l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var10 = ((val*(*)(val* self, long p0))(var_superclasses->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_superclasses, 0l); /* [] on <var_superclasses:Array[MClass]>*/
}
var_previous_parent = var10;
} else {
}
var_ = var_superclasses;
{
var11 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClass]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:ArrayIterator[MClass]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:ArrayIterator[MClass]>*/
}
var_parent = var14;
{
var15 = ((short int(*)(val* self))(var_parent->class->vft[COLOR_nit__virtual_machine__MClass__loaded]))(var_parent); /* loaded on <var_parent:MClass>*/
}
var16 = !var15;
if (var16){
{
((void(*)(val* self, val* p0))(var_parent->class->vft[COLOR_nit__virtual_machine__MClass__make_vt]))(var_parent, var_v); /* make_vt on <var_parent:MClass>*/
}
} else {
}
{
var17 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_nit__virtual_machine__MClass__intro_mmethods]))(var_parent); /* intro_mmethods on <var_parent:MClass>*/
}
{
var18 = ((long(*)(val* self))(var17->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var17); /* length on <var17:Array[MMethod]>*/
}
var_methods = var18;
{
var19 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_nit__virtual_machine__MClass__intro_mattributes]))(var_parent); /* intro_mattributes on <var_parent:MClass>*/
}
{
var20 = ((long(*)(val* self))(var19->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var19); /* length on <var19:Array[MAttribute]>*/
}
var_attributes = var20;
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__mmethods]))(self); /* mmethods on <self:MClass>*/
}
{
var22 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_nit__virtual_machine__MClass__intro_mmethods]))(var_parent); /* intro_mmethods on <var_parent:MClass>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var21, var22); /* add_all on <var21:Array[MMethod]>*/
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__mattributes]))(self); /* mattributes on <self:MClass>*/
}
{
var24 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_nit__virtual_machine__MClass__intro_mattributes]))(var_parent); /* intro_mattributes on <var_parent:MClass>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var23, var24); /* add_all on <var23:Array[MAttribute]>*/
}
{
var25 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var_parent); /* vtable on <var_parent:MClass>*/
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 439);
fatal_exit(1);
} else {
var26 = ((long(*)(val* self))(var25->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var25); /* id on <var25:nullable VTable>*/
}
{
var27 = (val*)(var26<<2|1);
((void(*)(val* self, val* p0))(var_ids->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_ids, var27); /* push on <var_ids:Array[Int]>*/
}
{
var28 = (val*)(var_methods<<2|1);
((void(*)(val* self, val* p0))(var_nb_methods->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_nb_methods, var28); /* push on <var_nb_methods:Array[Int]>*/
}
{
var29 = (val*)(var_attributes<<2|1);
((void(*)(val* self, val* p0))(var_nb_attributes->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_nb_attributes, var29); /* push on <var_nb_attributes:Array[Int]>*/
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var32 = -1l;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_pos_attr = var30;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var35 = -1l;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_pos_meth = var33;
if (unlikely(var_previous_parent == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 449);
fatal_exit(1);
}
{
var36 = ((val*(*)(val* self))(var_previous_parent->class->vft[COLOR_nit__virtual_machine__MClass__positions_attributes]))(var_previous_parent); /* positions_attributes on <var_previous_parent:nullable MClass(MClass)>*/
}
{
var37 = ((val*(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var36, var_parent); /* [] on <var36:HashMap[MClass, Int]>*/
}
{
{ /* Inline kernel#Int#== (var37,var_offset_attributes) on <var37:nullable Object(Int)> */
var41 = (long)(var37)>>2;
var40 = (var37 != NULL) && (var41 == var_offset_attributes);
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
var_pos_attr = var_offset_attributes;
} else {
}
if (unlikely(var_previous_parent == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 450);
fatal_exit(1);
}
{
var42 = ((val*(*)(val* self))(var_previous_parent->class->vft[COLOR_nit__virtual_machine__MClass__positions_methods]))(var_previous_parent); /* positions_methods on <var_previous_parent:nullable MClass(MClass)>*/
}
{
var43 = ((val*(*)(val* self, val* p0))(var42->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var42, var_parent); /* [] on <var42:HashMap[MClass, Int]>*/
}
{
{ /* Inline kernel#Int#== (var43,var_offset_methods) on <var43:nullable Object(Int)> */
var47 = (long)(var43)>>2;
var46 = (var43 != NULL) && (var47 == var_offset_methods);
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
var_pos_meth = var_offset_methods;
} else {
}
{
((void(*)(val* self, long p0, long p1, val* p2))(var_parent->class->vft[COLOR_nit__virtual_machine__MClass__update_positions]))(var_parent, var_pos_attr, var_pos_meth, self); /* update_positions on <var_parent:MClass>*/
}
{
{ /* Inline kernel#Int#+ (var_offset_attributes,var_attributes) on <var_offset_attributes:Int> */
/* Covariant cast for argument 0 (i) <var_attributes:Int> isa OTHER */
/* <var_attributes:Int> isa OTHER */
var50 = 1; /* easy <var_attributes:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var54 = var_offset_attributes + var_attributes;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_offset_attributes = var48;
{
{ /* Inline kernel#Int#+ (var_offset_methods,var_methods) on <var_offset_methods:Int> */
/* Covariant cast for argument 0 (i) <var_methods:Int> isa OTHER */
/* <var_methods:Int> isa OTHER */
var57 = 1; /* easy <var_methods:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var61 = var_offset_methods + var_methods;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_offset_methods = var55;
{
{ /* Inline kernel#Int#+ (var_offset_methods,2l) on <var_offset_methods:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var64 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var68 = var_offset_methods + 2l;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_offset_methods = var62;
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:ArrayIterator[MClass]>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3, long p4, long p5))(self->class->vft[COLOR_nit__virtual_machine__MClass__allocate_vtable]))(self, var_v, var_ids, var_nb_methods, var_nb_attributes, var_offset_attributes, var_offset_methods); /* allocate_vtable on <self:MClass>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__virtual_machine__MClass__loaded_61d]))(self, 1); /* loaded= on <self:MClass>*/
}
{
{ /* Inline kernel#Int#- (var_offset_methods,2l) on <var_offset_methods:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var71 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var75 = var_offset_methods - 2l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__virtual_machine__MClass__color_61d]))(self, var69); /* color= on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_superclasses->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_superclasses, self); /* add on <var_superclasses:Array[MClass]>*/
}
var_76 = var_superclasses;
{
var77 = ((val*(*)(val* self))(var_76->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_76); /* iterator on <var_76:Array[MClass]>*/
}
var_78 = var77;
for(;;) {
{
var79 = ((short int(*)(val* self))(var_78->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_78); /* is_ok on <var_78:ArrayIterator[MClass]>*/
}
if (var79){
{
var80 = ((val*(*)(val* self))(var_78->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_78); /* item on <var_78:ArrayIterator[MClass]>*/
}
var_cl = var80;
{
var81 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(self); /* vtable on <self:MClass>*/
}
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 469);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__virtual_machine__MClass__fill_vtable]))(self, var_v, var81, var_cl); /* fill_vtable on <self:MClass>*/
}
{
((void(*)(val* self))(var_78->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_78); /* next on <var_78:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label82;
}
}
BREAK_label82: (void)0;
{
((void(*)(val* self))(var_78->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_78); /* finish on <var_78:ArrayIterator[MClass]>*/
}
RET_LABEL:;
}
/* method virtual_machine#MClass#allocate_vtable for (self: MClass, VirtualMachine, Array[Int], Array[Int], Array[Int], Int, Int) */
void nit__virtual_machine___MClass___allocate_vtable(val* self, val* p0, val* p1, val* p2, val* p3, long p4, long p5) {
val* var_v /* var v: VirtualMachine */;
val* var_ids /* var ids: Array[Int] */;
val* var_nb_methods /* var nb_methods: Array[Int] */;
val* var_nb_attributes /* var nb_attributes: Array[Int] */;
long var_offset_attributes /* var offset_attributes: Int */;
long var_offset_methods /* var offset_methods: Int */;
val* var /* : VTable */;
val* var1 /* : Array[Int] */;
val* var_idc /* var idc: Array[Int] */;
val* var2 /* : nullable VTable */;
val* var3 /* : Perfecthashing */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : nullable VTable */;
val* var10 /* : nullable Object */;
long var11 /* : Int */;
val* var12 /* : nullable VTable */;
val* var13 /* : String */;
val* var14 /* : Array[Int] */;
val* var_ids_total /* var ids_total: Array[Int] */;
val* var15 /* : nullable VTable */;
long var16 /* : Int */;
val* var17 /* : nullable Object */;
val* var18 /* : Array[Int] */;
val* var_nb_methods_total /* var nb_methods_total: Array[Int] */;
val* var19 /* : Array[Int] */;
val* var_nb_attributes_total /* var nb_attributes_total: Array[Int] */;
long var_self_methods /* var self_methods: Int */;
long var_nb_introduced_attributes /* var nb_introduced_attributes: Int */;
long var_relative_offset_attr /* var relative_offset_attr: Int */;
long var_relative_offset_meth /* var relative_offset_meth: Int */;
val* var20 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : ArrayIterator[MClassDef] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_classdef /* var classdef: MClassDef */;
val* var25 /* : Array[MProperty] */;
val* var_26 /* var : Array[MProperty] */;
val* var27 /* : Iterator[nullable Object] */;
val* var_28 /* var : ArrayIterator[MProperty] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
val* var55 /* : Array[MMethod] */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
val* var80 /* : Array[MAttribute] */;
val* var82 /* : Array[MAttribute] */;
val* var83 /* : Array[MAttribute] */;
val* var84 /* : Array[MMethod] */;
val* var85 /* : Array[MMethod] */;
val* var86 /* : nullable Object */;
val* var87 /* : nullable Object */;
val* var88 /* : Array[Int] */;
val* var_deltas /* var deltas: Array[Int] */;
val* var89 /* : nullable VTable */;
val* var90 /* : MemoryManager */;
val* var91 /* : nullable VTable */;
long var92 /* : Int */;
val* var93 /* : Pointer */;
var_v = p0;
var_ids = p1;
var_nb_methods = p2;
var_nb_attributes = p3;
var_offset_attributes = p4;
var_offset_methods = p5;
var = NEW_nit__VTable(&type_nit__VTable);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:VTable>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable_61d]))(self, var); /* vtable= on <self:MClass>*/
}
var1 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Int]>*/
}
var_idc = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(self); /* vtable on <self:MClass>*/
}
{
var3 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__ph]))(var_v); /* ph on <var_v:VirtualMachine>*/
}
{
var4 = ((long(*)(val* self, val* p0, long p1, val* p2))(var3->class->vft[COLOR_perfect_hashing__Perfecthashing__pnand]))(var3, var_ids, 1l, var_idc); /* pnand on <var3:Perfecthashing>*/
}
{
{ /* Inline kernel#Int#- (var4,1l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var8 = var4 - 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 485);
fatal_exit(1);
} else {
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__virtual_machine__VTable__mask_61d]))(var2, var5); /* mask= on <var2:nullable VTable>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(self); /* vtable on <self:MClass>*/
}
{
var10 = ((val*(*)(val* self, long p0))(var_idc->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_idc, 0l); /* [] on <var_idc:Array[Int]>*/
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 486);
fatal_exit(1);
} else {
var11 = (long)(var10)>>2;
((void(*)(val* self, long p0))(var9->class->vft[COLOR_nit__virtual_machine__VTable__id_61d]))(var9, var11); /* id= on <var9:nullable VTable>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(self); /* vtable on <self:MClass>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__name]))(self); /* name on <self:MClass>*/
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 487);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_nit__virtual_machine__VTable__classname_61d]))(var12, var13); /* classname= on <var12:nullable VTable>*/
}
var14 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__init]))(var14); /* init on <var14:Array[Int]>*/
}
var_ids_total = var14;
{
((void(*)(val* self, val* p0))(var_ids_total->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_ids_total, var_ids); /* add_all on <var_ids_total:Array[Int]>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(self); /* vtable on <self:MClass>*/
}
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 492);
fatal_exit(1);
} else {
var16 = ((long(*)(val* self))(var15->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var15); /* id on <var15:nullable VTable>*/
}
{
var17 = (val*)(var16<<2|1);
((void(*)(val* self, val* p0))(var_ids_total->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_ids_total, var17); /* push on <var_ids_total:Array[Int]>*/
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:Array[Int]>*/
}
var_nb_methods_total = var18;
var19 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var19->class->vft[COLOR_standard__kernel__Object__init]))(var19); /* init on <var19:Array[Int]>*/
}
var_nb_attributes_total = var19;
var_self_methods = 0l;
var_nb_introduced_attributes = 0l;
var_relative_offset_attr = 0l;
var_relative_offset_meth = 0l;
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var20;
{
var21 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:ArrayIterator[MClassDef]>*/
}
if (var23){
{
var24 = ((val*(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:ArrayIterator[MClassDef]>*/
}
var_classdef = var24;
{
var25 = ((val*(*)(val* self))(var_classdef->class->vft[COLOR_nit__model__MClassDef__intro_mproperties]))(var_classdef); /* intro_mproperties on <var_classdef:MClassDef>*/
}
var_26 = var25;
{
var27 = ((val*(*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_26); /* iterator on <var_26:Array[MProperty]>*/
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))(var_28->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:ArrayIterator[MProperty]>*/
}
if (var29){
{
var30 = ((val*(*)(val* self))(var_28->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:ArrayIterator[MProperty]>*/
}
var_p = var30;
/* <var_p:MProperty> isa MMethod */
cltype32 = type_nit__MMethod.color;
idtype33 = type_nit__MMethod.id;
if(cltype32 >= var_p->type->table_size) {
var31 = 0;
} else {
var31 = var_p->type->type_table[cltype32] == idtype33;
}
if (var31){
{
{ /* Inline kernel#Int#+ (var_self_methods,1l) on <var_self_methods:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var40 = var_self_methods + 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_self_methods = var34;
{
((void(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__virtual_machine__MMethod__offset_61d]))(var_p, var_relative_offset_meth); /* offset= on <var_p:MProperty(MMethod)>*/
}
{
{ /* Inline kernel#Int#+ (var_offset_methods,var_relative_offset_meth) on <var_offset_methods:Int> */
/* Covariant cast for argument 0 (i) <var_relative_offset_meth:Int> isa OTHER */
/* <var_relative_offset_meth:Int> isa OTHER */
var43 = 1; /* easy <var_relative_offset_meth:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var47 = var_offset_methods + var_relative_offset_meth;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__virtual_machine__MMethod__absolute_offset_61d]))(var_p, var41); /* absolute_offset= on <var_p:MProperty(MMethod)>*/
}
{
{ /* Inline kernel#Int#+ (var_relative_offset_meth,1l) on <var_relative_offset_meth:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var50 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var54 = var_relative_offset_meth + 1l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_relative_offset_meth = var48;
{
var55 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__intro_mmethods]))(self); /* intro_mmethods on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var55, var_p); /* add on <var55:Array[MMethod]>*/
}
} else {
}
/* <var_p:MProperty> isa MAttribute */
cltype57 = type_nit__MAttribute.color;
idtype58 = type_nit__MAttribute.id;
if(cltype57 >= var_p->type->table_size) {
var56 = 0;
} else {
var56 = var_p->type->type_table[cltype57] == idtype58;
}
if (var56){
{
{ /* Inline kernel#Int#+ (var_nb_introduced_attributes,1l) on <var_nb_introduced_attributes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var61 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var65 = var_nb_introduced_attributes + 1l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_nb_introduced_attributes = var59;
{
((void(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__virtual_machine__MAttribute__offset_61d]))(var_p, var_relative_offset_attr); /* offset= on <var_p:MProperty(MAttribute)>*/
}
{
{ /* Inline kernel#Int#+ (var_offset_attributes,var_relative_offset_attr) on <var_offset_attributes:Int> */
/* Covariant cast for argument 0 (i) <var_relative_offset_attr:Int> isa OTHER */
/* <var_relative_offset_attr:Int> isa OTHER */
var68 = 1; /* easy <var_relative_offset_attr:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var72 = var_offset_attributes + var_relative_offset_attr;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__virtual_machine__MAttribute__absolute_offset_61d]))(var_p, var66); /* absolute_offset= on <var_p:MProperty(MAttribute)>*/
}
{
{ /* Inline kernel#Int#+ (var_relative_offset_attr,1l) on <var_relative_offset_attr:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var75 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var79 = var_relative_offset_attr + 1l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_relative_offset_attr = var73;
{
var80 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__intro_mattributes]))(self); /* intro_mattributes on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var80, var_p); /* add on <var80:Array[MAttribute]>*/
}
} else {
}
{
((void(*)(val* self))(var_28->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_28->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:ArrayIterator[MProperty]>*/
}
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label81;
}
}
BREAK_label81: (void)0;
{
((void(*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:ArrayIterator[MClassDef]>*/
}
{
var82 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__mattributes]))(self); /* mattributes on <self:MClass>*/
}
{
var83 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__intro_mattributes]))(self); /* intro_mattributes on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var82->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var82, var83); /* add_all on <var82:Array[MAttribute]>*/
}
{
var84 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__mmethods]))(self); /* mmethods on <self:MClass>*/
}
{
var85 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__intro_mmethods]))(self); /* intro_mmethods on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var84->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var84, var85); /* add_all on <var84:Array[MMethod]>*/
}
{
((void(*)(val* self, val* p0))(var_nb_methods_total->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_nb_methods_total, var_nb_methods); /* add_all on <var_nb_methods_total:Array[Int]>*/
}
{
var86 = (val*)(var_self_methods<<2|1);
((void(*)(val* self, val* p0))(var_nb_methods_total->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_nb_methods_total, var86); /* push on <var_nb_methods_total:Array[Int]>*/
}
{
((void(*)(val* self, val* p0))(var_nb_attributes_total->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_nb_attributes_total, var_nb_attributes); /* add_all on <var_nb_attributes_total:Array[Int]>*/
}
{
var87 = (val*)(var_nb_introduced_attributes<<2|1);
((void(*)(val* self, val* p0))(var_nb_attributes_total->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_nb_attributes_total, var87); /* push on <var_nb_attributes_total:Array[Int]>*/
}
{
((void(*)(val* self, long p0, long p1, val* p2))(self->class->vft[COLOR_nit__virtual_machine__MClass__update_positions]))(self, var_offset_attributes, var_offset_methods, self); /* update_positions on <self:MClass>*/
}
{
var88 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__virtual_machine__MClass__calculate_delta]))(self, var_nb_attributes_total); /* calculate_delta on <self:MClass>*/
}
var_deltas = var88;
{
var89 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(self); /* vtable on <self:MClass>*/
}
{
var90 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__memory_manager]))(var_v); /* memory_manager on <var_v:VirtualMachine>*/
}
{
var91 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(self); /* vtable on <self:MClass>*/
}
if (var91 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 544);
fatal_exit(1);
} else {
var92 = ((long(*)(val* self))(var91->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var91); /* mask on <var91:nullable VTable>*/
}
{
var93 = ((val*(*)(val* self, val* p0, val* p1, val* p2, long p3))(var90->class->vft[COLOR_nit__virtual_machine__MemoryManager__init_vtable]))(var90, var_ids_total, var_nb_methods_total, var_deltas, var92); /* init_vtable on <var90:MemoryManager>*/
}
if (var89 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 544);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var89->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable_61d]))(var89, var93); /* internal_vtable= on <var89:nullable VTable>*/
}
RET_LABEL:;
}
/* method virtual_machine#MClass#fill_vtable for (self: MClass, VirtualMachine, VTable, MClass) */
void nit__virtual_machine___MClass___fill_vtable(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: VirtualMachine */;
val* var_table /* var table: VTable */;
val* var_cl /* var cl: MClass */;
val* var /* : Array[MMethodDef] */;
val* var_methods /* var methods: Array[MMethodDef] */;
val* var1 /* : Array[MMethod] */;
val* var_ /* var : Array[MMethod] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ArrayIterator[MMethod] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_m /* var m: MMethod */;
val* var6 /* : MModule */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var9 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var10 /* : MemoryManager */;
val* var11 /* : nullable VTable */;
val* var12 /* : Pointer */;
val* var13 /* : nullable VTable */;
long var14 /* : Int */;
val* var15 /* : nullable VTable */;
long var16 /* : Int */;
var_v = p0;
var_table = p1;
var_cl = p2;
var = NEW_standard__Array(&type_standard__Array__nit__MMethodDef);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[MMethodDef]>*/
}
var_methods = var;
{
var1 = ((val*(*)(val* self))(var_cl->class->vft[COLOR_nit__virtual_machine__MClass__intro_mmethods]))(var_cl); /* intro_mmethods on <var_cl:MClass>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MMethod]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ArrayIterator[MMethod]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ArrayIterator[MMethod]>*/
}
var_m = var5;
{
var6 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(var_v); /* mainmodule on <var_v:VirtualMachine>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__intro]))(self); /* intro on <self:MClass>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__model__MClassDef__bound_mtype]))(var7); /* bound_mtype on <var7:MClassDef>*/
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(var_m->class->vft[COLOR_nit__model__MProperty__lookup_first_definition]))(var_m, var6, var8); /* lookup_first_definition on <var_m:MMethod>*/
}
var_propdef = var9;
{
((void(*)(val* self, val* p0))(var_methods->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_methods, var_propdef); /* push on <var_methods:Array[MMethodDef]>*/
}
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ArrayIterator[MMethod]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ArrayIterator[MMethod]>*/
}
{
var10 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__virtual_machine__VirtualMachine__memory_manager]))(var_v); /* memory_manager on <var_v:VirtualMachine>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(self); /* vtable on <self:MClass>*/
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 560);
fatal_exit(1);
} else {
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nit__virtual_machine__VTable__internal_vtable]))(var11); /* internal_vtable on <var11:nullable VTable>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(self); /* vtable on <self:MClass>*/
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 560);
fatal_exit(1);
} else {
var14 = ((long(*)(val* self))(var13->class->vft[COLOR_nit__virtual_machine__VTable__mask]))(var13); /* mask on <var13:nullable VTable>*/
}
{
var15 = ((val*(*)(val* self))(var_cl->class->vft[COLOR_nit__virtual_machine__MClass__vtable]))(var_cl); /* vtable on <var_cl:MClass>*/
}
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 560);
fatal_exit(1);
} else {
var16 = ((long(*)(val* self))(var15->class->vft[COLOR_nit__virtual_machine__VTable__id]))(var15); /* id on <var15:nullable VTable>*/
}
{
((void(*)(val* self, val* p0, long p1, long p2, val* p3))(var10->class->vft[COLOR_nit__virtual_machine__MemoryManager__put_methods]))(var10, var12, var14, var16, var_methods); /* put_methods on <var10:MemoryManager>*/
}
RET_LABEL:;
}
/* method virtual_machine#MClass#calculate_delta for (self: MClass, Array[Int]): Array[Int] */
val* nit__virtual_machine___MClass___calculate_delta(val* self, val* p0) {
val* var /* : Array[Int] */;
val* var_nb_attributes /* var nb_attributes: Array[Int] */;
val* var1 /* : Array[Int] */;
val* var_deltas /* var deltas: Array[Int] */;
long var_total /* var total: Int */;
val* var_ /* var : Array[Int] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : ArrayIterator[Int] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
long var6 /* : Int */;
long var_nb /* var nb: Int */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
var_nb_attributes = p0;
var1 = NEW_standard__Array(&type_standard__Array__standard__Int);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Int]>*/
}
var_deltas = var1;
var_total = 0l;
var_ = var_nb_attributes;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Int]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:ArrayIterator[Int]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:ArrayIterator[Int]>*/
}
var6 = (long)(var5)>>2;
var_nb = var6;
{
var7 = (val*)(var_total<<2|1);
((void(*)(val* self, val* p0))(var_deltas->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_deltas, var7); /* push on <var_deltas:Array[Int]>*/
}
{
{ /* Inline kernel#Int#+ (var_total,var_nb) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var_nb:Int> isa OTHER */
/* <var_nb:Int> isa OTHER */
var10 = 1; /* easy <var_nb:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var11 = var_total + var_nb;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_total = var8;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:ArrayIterator[Int]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:ArrayIterator[Int]>*/
}
var = var_deltas;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#superclasses_ordering for (self: MClass, VirtualMachine): Array[MClass] */
val* nit__virtual_machine___MClass___superclasses_ordering(val* self, val* p0) {
val* var /* : Array[MClass] */;
val* var_v /* var v: VirtualMachine */;
val* var1 /* : Array[MClass] */;
val* var_superclasses /* var superclasses: Array[MClass] */;
val* var2 /* : MModule */;
val* var3 /* : POSetElement[MClass] */;
val* var4 /* : Collection[nullable Object] */;
val* var5 /* : Array[MClass] */;
val* var_res /* var res: Array[MClass] */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : Array[MClass] */;
val* var_ordering /* var ordering: Array[MClass] */;
var_v = p0;
var1 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[MClass]>*/
}
var_superclasses = var1;
{
var2 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(var_v); /* mainmodule on <var_v:VirtualMachine>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClass__in_hierarchy]))(self, var2); /* in_hierarchy on <self:MClass>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_poset__POSetElement__greaters]))(var3); /* greaters on <var3:POSetElement[MClass]>*/
}
{
((void(*)(val* self, val* p0))(var_superclasses->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_superclasses, var4); /* add_all on <var_superclasses:Array[MClass]>*/
}
var5 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Array[MClass]>*/
}
var_res = var5;
{
var6 = ((long(*)(val* self))(var_superclasses->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_superclasses); /* length on <var_superclasses:Array[MClass]>*/
}
{
{ /* Inline kernel#Int#> (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var10 = var6 > 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__virtual_machine__MClass__dfs]))(self, var_v, var_res); /* dfs on <self:MClass>*/
}
var_ordering = var11;
var = var_ordering;
goto RET_LABEL;
} else {
var = var_superclasses;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#dfs for (self: MClass, VirtualMachine, Array[MClass]): Array[MClass] */
val* nit__virtual_machine___MClass___dfs(val* self, val* p0, val* p1) {
val* var /* : Array[MClass] */;
val* var_v /* var v: VirtualMachine */;
val* var_res /* var res: Array[MClass] */;
val* var1 /* : MModule */;
val* var2 /* : POSetElement[MClass] */;
val* var3 /* : Collection[nullable Object] */;
val* var4 /* : Array[nullable Object] */;
val* var_direct_parents /* var direct_parents: Array[MClass] */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var_prefix /* var prefix: nullable Object */;
long var10 /* : Int */;
long var12 /* : Int */;
long var_max /* var max: Int */;
val* var_ /* var : Array[MClass] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[MClass] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_cl /* var cl: MClass */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[MMethod] */;
long var20 /* : Int */;
val* var21 /* : Array[MAttribute] */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var_properties_length /* var properties_length: Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : Array[MClass] */;
val* var_prefix_res /* var prefix_res: Array[MClass] */;
val* var40 /* : Array[MClass] */;
val* var_41 /* var : Array[MClass] */;
val* var42 /* : Iterator[nullable Object] */;
val* var_43 /* var : ArrayIterator[MClass] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_cl46 /* var cl: MClass */;
short int var47 /* : Bool */;
val* var48 /* : Array[MClass] */;
val* var49 /* : Array[MClass] */;
val* var_50 /* var : Array[MClass] */;
val* var51 /* : Iterator[nullable Object] */;
val* var_52 /* var : ArrayIterator[MClass] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_cl_res /* var cl_res: MClass */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
val* var68 /* : Array[MClass] */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
var_v = p0;
var_res = p1;
{
((void(*)(val* self, val* p0, long p1))(var_res->class->vft[COLOR_standard__abstract_collection__Sequence__insert]))(var_res, self, 0l); /* insert on <var_res:Array[MClass]>*/
}
{
var1 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__naive_interpreter__NaiveInterpreter__mainmodule]))(var_v); /* mainmodule on <var_v:VirtualMachine>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClass__in_hierarchy]))(self, var1); /* in_hierarchy on <self:MClass>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var2); /* direct_greaters on <var2:POSetElement[MClass]>*/
}
{
var4 = ((val*(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__array__Collection__to_a]))(var3); /* to_a on <var3:Collection[nullable Object](Collection[MClass])>*/
}
var_direct_parents = var4;
{
var5 = ((long(*)(val* self))(var_direct_parents->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_direct_parents); /* length on <var_direct_parents:Array[MClass]>*/
}
{
{ /* Inline kernel#Int#> (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var9 = var5 > 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var_prefix = ((val*)NULL);
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var12 = -1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_max = var10;
var_ = var_direct_parents;
{
var13 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClass]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:ArrayIterator[MClass]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:ArrayIterator[MClass]>*/
}
var_cl = var16;
{
var17 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_res, var_cl); /* has on <var_res:Array[MClass]>*/
}
var18 = !var17;
if (var18){
{
var19 = ((val*(*)(val* self))(var_cl->class->vft[COLOR_nit__virtual_machine__MClass__mmethods]))(var_cl); /* mmethods on <var_cl:MClass>*/
}
{
var20 = ((long(*)(val* self))(var19->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var19); /* length on <var19:Array[MMethod]>*/
}
{
var21 = ((val*(*)(val* self))(var_cl->class->vft[COLOR_nit__virtual_machine__MClass__mattributes]))(var_cl); /* mattributes on <var_cl:MClass>*/
}
{
var22 = ((long(*)(val* self))(var21->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var21); /* length on <var21:Array[MAttribute]>*/
}
{
{ /* Inline kernel#Int#+ (var20,var22) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var29 = var20 + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_properties_length = var23;
{
{ /* Inline kernel#Int#> (var_properties_length,var_max) on <var_properties_length:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var32 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var36 = var_properties_length > var_max;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
var_max = var_properties_length;
var_prefix = var_cl;
} else {
}
} else {
}
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:ArrayIterator[MClass]>*/
}
if (var_prefix == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
var38 = ((short int(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_prefix, ((val*)NULL)); /* != on <var_prefix:nullable Object(nullable MClass)>*/
var37 = var38;
}
if (var37){
var39 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
((void(*)(val* self))(var39->class->vft[COLOR_standard__kernel__Object__init]))(var39); /* init on <var39:Array[MClass]>*/
}
var_prefix_res = var39;
{
var40 = ((val*(*)(val* self, val* p0, val* p1))(var_prefix->class->vft[COLOR_nit__virtual_machine__MClass__dfs]))(var_prefix, var_v, var_prefix_res); /* dfs on <var_prefix:nullable Object(MClass)>*/
}
var_prefix_res = var40;
var_41 = var_direct_parents;
{
var42 = ((val*(*)(val* self))(var_41->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_41); /* iterator on <var_41:Array[MClass]>*/
}
var_43 = var42;
for(;;) {
{
var44 = ((short int(*)(val* self))(var_43->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_43); /* is_ok on <var_43:ArrayIterator[MClass]>*/
}
if (var44){
{
var45 = ((val*(*)(val* self))(var_43->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_43); /* item on <var_43:ArrayIterator[MClass]>*/
}
var_cl46 = var45;
{
var47 = ((short int(*)(val* self, val* p0))(var_cl46->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_cl46, var_prefix); /* != on <var_cl46:MClass>*/
}
if (var47){
var48 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
((void(*)(val* self))(var48->class->vft[COLOR_standard__kernel__Object__init]))(var48); /* init on <var48:Array[MClass]>*/
}
var_res = var48;
{
var49 = ((val*(*)(val* self, val* p0, val* p1))(var_cl46->class->vft[COLOR_nit__virtual_machine__MClass__dfs]))(var_cl46, var_v, var_res); /* dfs on <var_cl46:MClass>*/
}
var_res = var49;
var_50 = var_res;
{
var51 = ((val*(*)(val* self))(var_50->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_50); /* iterator on <var_50:Array[MClass]>*/
}
var_52 = var51;
for(;;) {
{
var53 = ((short int(*)(val* self))(var_52->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_52); /* is_ok on <var_52:ArrayIterator[MClass]>*/
}
if (var53){
{
var54 = ((val*(*)(val* self))(var_52->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_52); /* item on <var_52:ArrayIterator[MClass]>*/
}
var_cl_res = var54;
{
var55 = ((short int(*)(val* self, val* p0))(var_prefix_res->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_prefix_res, var_cl_res); /* has on <var_prefix_res:Array[MClass]>*/
}
var56 = !var55;
if (var56){
{
((void(*)(val* self, val* p0))(var_prefix_res->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_prefix_res, var_cl_res); /* push on <var_prefix_res:Array[MClass]>*/
}
} else {
}
{
((void(*)(val* self))(var_52->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_52); /* next on <var_52:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label57;
}
}
BREAK_label57: (void)0;
{
((void(*)(val* self))(var_52->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_52); /* finish on <var_52:ArrayIterator[MClass]>*/
}
} else {
}
{
((void(*)(val* self))(var_43->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_43); /* next on <var_43:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label58;
}
}
BREAK_label58: (void)0;
{
((void(*)(val* self))(var_43->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_43); /* finish on <var_43:ArrayIterator[MClass]>*/
}
var_res = var_prefix_res;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_res, self); /* push on <var_res:Array[MClass]>*/
}
} else {
{
var59 = ((long(*)(val* self))(var_direct_parents->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_direct_parents); /* length on <var_direct_parents:Array[MClass]>*/
}
{
{ /* Inline kernel#Int#> (var59,0l) on <var59:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var62 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var66 = var59 > 0l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
{
var67 = ((val*(*)(val* self))(var_direct_parents->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_direct_parents); /* first on <var_direct_parents:Array[MClass]>*/
}
{
var68 = ((val*(*)(val* self, val* p0, val* p1))(var67->class->vft[COLOR_nit__virtual_machine__MClass__dfs]))(var67, var_v, var_res); /* dfs on <var67:nullable Object(MClass)>*/
}
var_res = var68;
} else {
}
}
{
var69 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_res, self); /* has on <var_res:Array[MClass]>*/
}
var70 = !var69;
if (var70){
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_res, self); /* push on <var_res:Array[MClass]>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MClass#update_positions for (self: MClass, Int, Int, MClass) */
void nit__virtual_machine___MClass___update_positions(val* self, long p0, long p1, val* p2) {
long var_attributes_offsets /* var attributes_offsets: Int */;
long var_methods_offset /* var methods_offset: Int */;
val* var_cl /* var cl: MClass */;
val* var /* : HashMap[MClass, Int] */;
val* var1 /* : nullable Object */;
val* var2 /* : HashMap[MClass, Int] */;
val* var3 /* : nullable Object */;
var_attributes_offsets = p0;
var_methods_offset = p1;
var_cl = p2;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__positions_attributes]))(self); /* positions_attributes on <self:MClass>*/
}
{
var1 = (val*)(var_attributes_offsets<<2|1);
((void(*)(val* self, val* p0, val* p1))(var->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var, var_cl, var1); /* []= on <var:HashMap[MClass, Int]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__virtual_machine__MClass__positions_methods]))(self); /* positions_methods on <self:MClass>*/
}
{
var3 = (val*)(var_methods_offset<<2|1);
((void(*)(val* self, val* p0, val* p1))(var2->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var2, var_cl, var3); /* []= on <var2:HashMap[MClass, Int]>*/
}
RET_LABEL:;
}
/* method virtual_machine#MAttribute#offset for (self: MAttribute): Int */
long nit__virtual_machine___MAttribute___offset(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__virtual_machine__MAttribute___offset].l; /* _offset on <self:MAttribute> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MAttribute#offset= for (self: MAttribute, Int) */
void nit__virtual_machine___MAttribute___offset_61d(val* self, long p0) {
self->attrs[COLOR_nit__virtual_machine__MAttribute___offset].l = p0; /* _offset on <self:MAttribute> */
RET_LABEL:;
}
/* method virtual_machine#MAttribute#absolute_offset for (self: MAttribute): Int */
long nit__virtual_machine___MAttribute___absolute_offset(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__virtual_machine__MAttribute___absolute_offset].l; /* _absolute_offset on <self:MAttribute> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MAttribute#absolute_offset= for (self: MAttribute, Int) */
void nit__virtual_machine___MAttribute___absolute_offset_61d(val* self, long p0) {
self->attrs[COLOR_nit__virtual_machine__MAttribute___absolute_offset].l = p0; /* _absolute_offset on <self:MAttribute> */
RET_LABEL:;
}
/* method virtual_machine#MMethod#offset for (self: MMethod): Int */
long nit__virtual_machine___MMethod___offset(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__virtual_machine__MMethod___offset].l; /* _offset on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MMethod#offset= for (self: MMethod, Int) */
void nit__virtual_machine___MMethod___offset_61d(val* self, long p0) {
self->attrs[COLOR_nit__virtual_machine__MMethod___offset].l = p0; /* _offset on <self:MMethod> */
RET_LABEL:;
}
/* method virtual_machine#MMethod#absolute_offset for (self: MMethod): Int */
long nit__virtual_machine___MMethod___absolute_offset(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__virtual_machine__MMethod___absolute_offset].l; /* _absolute_offset on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MMethod#absolute_offset= for (self: MMethod, Int) */
void nit__virtual_machine___MMethod___absolute_offset_61d(val* self, long p0) {
self->attrs[COLOR_nit__virtual_machine__MMethod___absolute_offset].l = p0; /* _absolute_offset on <self:MMethod> */
RET_LABEL:;
}
/* method virtual_machine#MutableInstance#internal_attributes for (self: MutableInstance): Pointer */
val* nit__virtual_machine___MutableInstance___internal_attributes(val* self) {
val* var /* : Pointer */;
val* var1 /* : Pointer */;
var1 = self->attrs[COLOR_nit__virtual_machine__MutableInstance___internal_attributes].val; /* _internal_attributes on <self:MutableInstance> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _internal_attributes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 688);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MutableInstance#internal_attributes= for (self: MutableInstance, Pointer) */
void nit__virtual_machine___MutableInstance___internal_attributes_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__MutableInstance___internal_attributes].val = p0; /* _internal_attributes on <self:MutableInstance> */
RET_LABEL:;
}
/* method virtual_machine#Instance#vtable for (self: Instance): nullable VTable */
val* nit__virtual_machine___Instance___vtable(val* self) {
val* var /* : nullable VTable */;
val* var1 /* : nullable VTable */;
var1 = self->attrs[COLOR_nit__virtual_machine__Instance___vtable].val; /* _vtable on <self:Instance> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#Instance#vtable= for (self: Instance, nullable VTable) */
void nit__virtual_machine___Instance___vtable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__Instance___vtable].val = p0; /* _vtable on <self:Instance> */
RET_LABEL:;
}
/* method virtual_machine#MInitType#model for (self: MInitType): Model */
val* nit___nit__MInitType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__virtual_machine__MInitType___model].val; /* _model on <self:MInitType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 703);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#MInitType#model= for (self: MInitType, Model) */
void nit___nit__MInitType___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__MInitType___model].val = p0; /* _model on <self:MInitType> */
RET_LABEL:;
}
/* method virtual_machine#MInitType#to_s for (self: MInitType): String */
val* nit___nit__MInitType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "InitType";
var3 = standard___standard__NativeString___to_s_with_length(var2, 8l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MInitType#as_nullable for (self: MInitType): MType */
val* nit___nit__MInitType___nit__model__MType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MInitType#need_anchor for (self: MInitType): Bool */
short int nit___nit__MInitType___nit__model__MType__need_anchor(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MInitType#resolve_for for (self: MInitType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MInitType___nit__model__MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MInitType#can_resolve_for for (self: MInitType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MInitType___nit__model__MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MInitType#collect_mclassdefs for (self: MInitType, MModule): Set[MClassDef] */
val* nit___nit__MInitType___nit__model__MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassDef] */;
var_mmodule = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClassDef]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MInitType#collect_mclasses for (self: MInitType, MModule): Set[MClass] */
val* nit___nit__MInitType___nit__model__MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClass] */;
var_mmodule = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MInitType#collect_mtypes for (self: MInitType, MModule): Set[MClassType] */
val* nit___nit__MInitType___nit__model__MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassType] */;
var_mmodule = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassType);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClassType]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MInitType#init for (self: MInitType) */
void nit___nit__MInitType___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MInitType___standard__kernel__Object__init]))(self); /* init on <self:MInitType>*/
}
RET_LABEL:;
}
/* method virtual_machine#VTable#mask for (self: VTable): Int */
long nit___nit__VTable___mask(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__virtual_machine__VTable___mask].l; /* _mask on <self:VTable> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#VTable#mask= for (self: VTable, Int) */
void nit___nit__VTable___mask_61d(val* self, long p0) {
self->attrs[COLOR_nit__virtual_machine__VTable___mask].l = p0; /* _mask on <self:VTable> */
RET_LABEL:;
}
/* method virtual_machine#VTable#id for (self: VTable): Int */
long nit___nit__VTable___id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__virtual_machine__VTable___id].l; /* _id on <self:VTable> */
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#VTable#id= for (self: VTable, Int) */
void nit___nit__VTable___id_61d(val* self, long p0) {
self->attrs[COLOR_nit__virtual_machine__VTable___id].l = p0; /* _id on <self:VTable> */
RET_LABEL:;
}
/* method virtual_machine#VTable#internal_vtable for (self: VTable): Pointer */
val* nit___nit__VTable___internal_vtable(val* self) {
val* var /* : Pointer */;
val* var1 /* : Pointer */;
var1 = self->attrs[COLOR_nit__virtual_machine__VTable___internal_vtable].val; /* _internal_vtable on <self:VTable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _internal_vtable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 727);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#VTable#internal_vtable= for (self: VTable, Pointer) */
void nit___nit__VTable___internal_vtable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__VTable___internal_vtable].val = p0; /* _internal_vtable on <self:VTable> */
RET_LABEL:;
}
/* method virtual_machine#VTable#classname for (self: VTable): String */
val* nit___nit__VTable___classname(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__virtual_machine__VTable___classname].val; /* _classname on <self:VTable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _classname");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__virtual_machine, 730);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method virtual_machine#VTable#classname= for (self: VTable, String) */
void nit___nit__VTable___classname_61d(val* self, val* p0) {
self->attrs[COLOR_nit__virtual_machine__VTable___classname].val = p0; /* _classname on <self:VTable> */
RET_LABEL:;
}
/* method virtual_machine#MemoryManager#init_vtable for (self: MemoryManager, Array[Int], Array[Int], Array[Int], Int): Pointer */
val* nit___nit__MemoryManager___init_vtable(val* self, val* p0, val* p1, val* p2, long p3) {
val* var /* : Pointer */;
val* var_ids /* var ids: Array[Int] */;
val* var_nb_methods /* var nb_methods: Array[Int] */;
val* var_nb_attributes /* var nb_attributes: Array[Int] */;
long var_mask /* var mask: Int */;
val* var1 /* : Pointer */;
val* var_res /* var res: Pointer */;
var_ids = p0;
var_nb_methods = p1;
var_nb_attributes = p2;
var_mask = p3;
{
var1 = ((val*(*)(val* self, val* p0, val* p1, val* p2, long p3))(self->class->vft[COLOR_nit__virtual_machine__MemoryManager__intern_init_vtable]))(self, var_ids, var_nb_methods, var_nb_attributes, var_mask); /* intern_init_vtable on <self:MemoryManager>*/
}
var_res = var1;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method virtual_machine#MemoryManager#intern_init_vtable for (self: MemoryManager, Array[Int], Array[Int], Array[Int], Int): Pointer */
val* nit___nit__MemoryManager___intern_init_vtable(val* self, val* p0, val* p1, val* p2, long p3) {
val* var /* : Pointer */;
val* var1 /* : Pointer */;
val* var2 /* : Pointer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
struct nitni_instance* var_for_c_2;
var_for_c_2 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_2->value = p1;
struct nitni_instance* var_for_c_3;
var_for_c_3 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_3->value = p2;
var1 = virtual_machine___MemoryManager_intern_init_vtable___impl(var_for_c_0, var_for_c_1, var_for_c_2, var_for_c_3, p3);
var2 = BOX_standard__Pointer(var1); /* boxing Pointer */
var2->type = &type_standard__Pointer;
var2->class = &class_standard__Pointer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::Collection::length */
long virtual_machine___Array_of_Int_length( struct nitni_instance * recv ) {
long var /* : Int */;
{
var = ((long(*)(val* self))(recv->value->class->vft[COLOR_standard__abstract_collection__Collection__length]))(recv->value); /* length on <recv->value:Array[Int]>*/
}
return var;
}
/* nitni callback for standard::SequenceRead::[] */
long virtual_machine___Array_of_Int__index( struct nitni_instance * recv, long index ) {
val* var /* : nullable Object */;
long var1 /* : Int */;
{
var = ((val*(*)(val* self, long p0))(recv->value->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(recv->value, index); /* [] on <recv->value:Array[Int]>*/
}
var1 = (long)(var)>>2;
return var1;
}
/* method virtual_machine#MemoryManager#put_methods for (self: MemoryManager, Pointer, Int, Int, Array[MMethodDef]) */
void nit___nit__MemoryManager___put_methods(val* self, val* p0, long p1, long p2, val* p3) {
void* var /* : Pointer for extern */;
var = ((struct instance_standard__Pointer*)p0)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_4;
var_for_c_4 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_4->value = p3;
virtual_machine___MemoryManager_put_methods___impl(var_for_c_0, var, p1, p2, var_for_c_4);
RET_LABEL:;
}
/* nitni callback for standard::Collection::length */
long virtual_machine___Array_of_MMethodDef_length( struct nitni_instance * recv ) {
long var /* : Int */;
{
var = ((long(*)(val* self))(recv->value->class->vft[COLOR_standard__abstract_collection__Collection__length]))(recv->value); /* length on <recv->value:Array[MMethodDef]>*/
}
return var;
}
/* nitni callback for standard::SequenceRead::[] */
struct nitni_instance * virtual_machine___Array_of_MMethodDef__index( struct nitni_instance * recv, long index ) {
val* var /* : nullable Object */;
{
var = ((val*(*)(val* self, long p0))(recv->value->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(recv->value, index); /* [] on <recv->value:Array[MMethodDef]>*/
}
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
