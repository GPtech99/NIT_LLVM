#include "nit__parser_work.sep.0.h"
/* method parser_work#State#state for (self: State): Int */
long nit__parser_work___nit__parser_work__State___state(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__parser_work__State___state].l; /* _state on <self:State> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#State#state= for (self: State, Int) */
void nit__parser_work___nit__parser_work__State___state_61d(val* self, long p0) {
self->attrs[COLOR_nit__parser_work__State___state].l = p0; /* _state on <self:State> */
RET_LABEL:;
}
/* method parser_work#State#nodes for (self: State): nullable Object */
val* nit__parser_work___nit__parser_work__State___nodes(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_nit__parser_work__State___nodes].val; /* _nodes on <self:State> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#State#nodes= for (self: State, nullable Object) */
void nit__parser_work___nit__parser_work__State___nodes_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_work__State___nodes].val = p0; /* _nodes on <self:State> */
RET_LABEL:;
}
/* method parser_work#State#init for (self: State) */
void nit__parser_work___nit__parser_work__State___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__parser_work___nit__parser_work__State___standard__kernel__Object__init]))(self); /* init on <self:State>*/
}
RET_LABEL:;
}
/* method parser_work#Parser#lexer for (self: Parser): Lexer */
val* nit___nit__Parser___lexer(val* self) {
val* var /* : Lexer */;
val* var1 /* : Lexer */;
var1 = self->attrs[COLOR_nit__parser_work__Parser___lexer].val; /* _lexer on <self:Parser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lexer");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 32);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#lexer= for (self: Parser, Lexer) */
void nit___nit__Parser___lexer_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_work__Parser___lexer].val = p0; /* _lexer on <self:Parser> */
RET_LABEL:;
}
/* method parser_work#Parser#stack for (self: Parser): Array[State] */
val* nit___nit__Parser___stack(val* self) {
val* var /* : Array[State] */;
val* var1 /* : Array[State] */;
var1 = self->attrs[COLOR_nit__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 35);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#stack= for (self: Parser, Array[State]) */
void nit___nit__Parser___stack_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_work__Parser___stack].val = p0; /* _stack on <self:Parser> */
RET_LABEL:;
}
/* method parser_work#Parser#stack_pos for (self: Parser): Int */
long nit___nit__Parser___stack_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#stack_pos= for (self: Parser, Int) */
void nit___nit__Parser___stack_pos_61d(val* self, long p0) {
self->attrs[COLOR_nit__parser_work__Parser___stack_pos].l = p0; /* _stack_pos on <self:Parser> */
RET_LABEL:;
}
/* method parser_work#Parser#init for (self: Parser) */
void nit___nit__Parser___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__parser_work__Parser__build_reduce_table]))(self); /* build_reduce_table on <self:Parser>*/
}
RET_LABEL:;
}
/* method parser_work#Parser#go_to for (self: Parser, Int): Int */
long nit___nit__Parser___go_to(val* self, long p0) {
long var /* : Int */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_state /* var state: Int */;
long var_low /* var low: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_high /* var high: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var_middle /* var middle: Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var_subindex /* var subindex: Int */;
long var42 /* : Int */;
long var_goal /* var goal: Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
var_index = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_nit__parser_work__Parser__state]))(self); /* state on <self:Parser>*/
}
var_state = var1;
var_low = 1l;
{
var2 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_goto]))(self, var_index, 0l); /* parser_goto on <self:Parser>*/
}
{
{ /* Inline kernel#Int#- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_high = var3;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var9 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var13 = var_low <= var_high;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline kernel#Int#+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var16 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var20 = var_low + var_high;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var14,2l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var23 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var27 = var14 / 2l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_middle = var21;
{
{ /* Inline kernel#Int#* (var_middle,2l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var30 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var34 = var_middle * 2l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var37 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var41 = var28 + 1l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_subindex = var35;
{
var42 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_goto]))(self, var_index, var_subindex); /* parser_goto on <self:Parser>*/
}
var_goal = var42;
{
{ /* Inline kernel#Int#< (var_state,var_goal) on <var_state:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var45 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var49 = var_state < var_goal;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline kernel#Int#- (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var56 = var_middle - 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_high = var50;
} else {
{
{ /* Inline kernel#Int#> (var_state,var_goal) on <var_state:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var59 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var63 = var_state > var_goal;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline kernel#Int#+ (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var66 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var70 = var_middle + 1l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var_low = var64;
} else {
{
{ /* Inline kernel#Int#+ (var_subindex,1l) on <var_subindex:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var73 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var77 = var_subindex + 1l;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
var78 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_goto]))(self, var_index, var71); /* parser_goto on <self:Parser>*/
}
var = var78;
goto RET_LABEL;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var79 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_goto]))(self, var_index, 2l); /* parser_goto on <self:Parser>*/
}
var = var79;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#push for (self: Parser, Int, nullable Object) */
void nit___nit__Parser___push(val* self, long p0, val* p1) {
long var_numstate /* var numstate: Int */;
val* var_list_node /* var list_node: nullable Object */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var_pos /* var pos: Int */;
val* var5 /* : Array[State] */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
val* var14 /* : Array[State] */;
val* var15 /* : nullable Object */;
val* var_state /* var state: State */;
val* var16 /* : Array[State] */;
val* var17 /* : State */;
var_numstate = p0;
var_list_node = p1;
var = self->attrs[COLOR_nit__parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
{ /* Inline kernel#Int#+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_pos = var1;
self->attrs[COLOR_nit__parser_work__Parser___stack_pos].l = var_pos; /* _stack_pos on <self:Parser> */
var5 = self->attrs[COLOR_nit__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 75);
fatal_exit(1);
}
{
var6 = ((long(*)(val* self))(var5->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var5); /* length on <var5:Array[State]>*/
}
{
{ /* Inline kernel#Int#< (var_pos,var6) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var13 = var_pos < var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var14 = self->attrs[COLOR_nit__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 76);
fatal_exit(1);
}
{
var15 = ((val*(*)(val* self, long p0))(var14->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var14, var_pos); /* [] on <var14:Array[State]>*/
}
var_state = var15;
var_state->attrs[COLOR_nit__parser_work__State___state].l = var_numstate; /* _state on <var_state:State> */
var_state->attrs[COLOR_nit__parser_work__State___nodes].val = var_list_node; /* _nodes on <var_state:State> */
} else {
var16 = self->attrs[COLOR_nit__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 80);
fatal_exit(1);
}
var17 = NEW_nit__parser_work__State(&type_nit__parser_work__State);
{
((void(*)(val* self, long p0))(var17->class->vft[COLOR_nit__parser_work__State__state_61d]))(var17, var_numstate); /* state= on <var17:State>*/
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_nit__parser_work__State__nodes_61d]))(var17, var_list_node); /* nodes= on <var17:State>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_standard__kernel__Object__init]))(var17); /* init on <var17:State>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var16, var17); /* push on <var16:Array[State]>*/
}
}
RET_LABEL:;
}
/* method parser_work#Parser#state for (self: Parser): Int */
long nit___nit__Parser___state(val* self) {
long var /* : Int */;
val* var1 /* : Array[State] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_nit__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 87);
fatal_exit(1);
}
var2 = self->attrs[COLOR_nit__parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
var3 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, var2); /* [] on <var1:Array[State]>*/
}
var4 = var3->attrs[COLOR_nit__parser_work__State___state].l; /* _state on <var3:nullable Object(State)> */
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#pop for (self: Parser): nullable Object */
val* nit___nit__Parser___pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Array[State] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
var1 = self->attrs[COLOR_nit__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 93);
fatal_exit(1);
}
var2 = self->attrs[COLOR_nit__parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
var3 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, var2); /* [] on <var1:Array[State]>*/
}
var4 = var3->attrs[COLOR_nit__parser_work__State___nodes].val; /* _nodes on <var3:nullable Object(State)> */
var_res = var4;
var5 = self->attrs[COLOR_nit__parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
{ /* Inline kernel#Int#- (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var9 = var5 - 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
self->attrs[COLOR_nit__parser_work__Parser___stack_pos].l = var6; /* _stack_pos on <self:Parser> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#parse for (self: Parser): Start */
val* nit___nit__Parser___parse(val* self) {
val* var /* : Start */;
val* var1 /* : Lexer */;
val* var_lexer /* var lexer: Lexer */;
val* var2 /* : Token */;
val* var_token /* var token: Token */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Start */;
long var5 /* : Int */;
long var_state /* var state: Int */;
long var6 /* : Int */;
long var_index /* var index: Int */;
long var7 /* : Int */;
long var_action_type /* var action_type: Int */;
long var8 /* : Int */;
long var_action_value /* var action_value: Int */;
long var_low /* var low: Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name;
long var15 /* : Int */;
long var_high /* var high: Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var_middle /* var middle: Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
long var_subindex /* var subindex: Int */;
long var51 /* : Int */;
long var_goal /* var goal: Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
short int var72 /* : Bool */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
long var80 /* : Int */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
long var86 /* : Int */;
long var87 /* : Int */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
long var95 /* : Int */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : Token */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
val* var103 /* : Array[ReduceAction] */;
val* var104 /* : nullable Object */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : Token */;
val* var_node2 /* var node2: Token */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
val* var112 /* : nullable Object */;
val* var_node1 /* var node1: nullable Object */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
val* var116 /* : Start */;
val* var_node /* var node: Start */;
val* var117 /* : ComputeProdLocationVisitor */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : Token */;
val* var125 /* : AParserError */;
val* var126 /* : NativeArray[String] */;
static val* varonce;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var137 /* : Location */;
val* var_node2138 /* var node2: AParserError */;
val* var139 /* : Start */;
val* var_node140 /* var node: Start */;
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_nit__parser_work__Parser__push]))(self, 0l, ((val*)NULL)); /* push on <self:Parser>*/
}
var1 = self->attrs[COLOR_nit__parser_work__Parser___lexer].val; /* _lexer on <self:Parser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lexer");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 103);
fatal_exit(1);
}
var_lexer = var1;
for(;;) {
{
var2 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__lexer_work__Lexer__peek]))(var_lexer); /* peek on <var_lexer:Lexer>*/
}
var_token = var2;
/* <var_token:Token> isa AError */
cltype = type_nit__AError.color;
idtype = type_nit__AError.id;
if(cltype >= var_token->type->table_size) {
var3 = 0;
} else {
var3 = var_token->type->type_table[cltype] == idtype;
}
if (var3){
var4 = NEW_nit__Start(&type_nit__Start);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__parser_nodes__Start__n_base_61d]))(var4, ((val*)NULL)); /* n_base= on <var4:Start>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__parser_nodes__Start__n_eof_61d]))(var4, var_token); /* n_eof= on <var4:Start>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Start>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_nit__parser_work__Parser__state]))(self); /* state on <self:Parser>*/
}
var_state = var5;
{
var6 = ((long(*)(val* self))(var_token->class->vft[COLOR_nit__lexer_work__Token__parser_index]))(var_token); /* parser_index on <var_token:Token>*/
}
var_index = var6;
{
var7 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_action]))(self, var_state, 2l); /* parser_action on <self:Parser>*/
}
var_action_type = var7;
{
var8 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_action]))(self, var_state, 3l); /* parser_action on <self:Parser>*/
}
var_action_value = var8;
var_low = 1l;
{
var9 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_action]))(self, var_state, 0l); /* parser_action on <self:Parser>*/
}
{
{ /* Inline kernel#Int#- (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var15 = var9 - 1l;
var10 = var15;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_high = var10;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var18 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var22 = var_low <= var_high;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline kernel#Int#+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var25 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var29 = var_low + var_high;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var23,2l) on <var23:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var32 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var36 = var23 / 2l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_middle = var30;
{
{ /* Inline kernel#Int#* (var_middle,3l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var39 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var43 = var_middle * 3l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var37,1l) on <var37:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var50 = var37 + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_subindex = var44;
{
var51 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_action]))(self, var_state, var_subindex); /* parser_action on <self:Parser>*/
}
var_goal = var51;
{
{ /* Inline kernel#Int#< (var_index,var_goal) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var54 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var58 = var_index < var_goal;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
{
{ /* Inline kernel#Int#- (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var61 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var65 = var_middle - 1l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_high = var59;
} else {
{
{ /* Inline kernel#Int#> (var_index,var_goal) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var68 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var72 = var_index > var_goal;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
{ /* Inline kernel#Int#+ (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var75 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var79 = var_middle + 1l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_low = var73;
} else {
{
{ /* Inline kernel#Int#+ (var_subindex,1l) on <var_subindex:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var82 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var86 = var_subindex + 1l;
var80 = var86;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
{
var87 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_action]))(self, var_state, var80); /* parser_action on <self:Parser>*/
}
var_action_type = var87;
{
{ /* Inline kernel#Int#+ (var_subindex,2l) on <var_subindex:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var90 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var94 = var_subindex + 2l;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
var95 = ((long(*)(val* self, long p0, long p1))(self->class->vft[COLOR_nit__tables__TablesCapable__parser_action]))(self, var_state, var88); /* parser_action on <self:Parser>*/
}
var_action_value = var95;
goto BREAK_label;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_action_type,0l) on <var_action_type:Int> */
var98 = var_action_type == 0l;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
if (var96){
{
var99 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__lexer_work__Lexer__next]))(var_lexer); /* next on <var_lexer:Lexer>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_nit__parser_work__Parser__push]))(self, var_action_value, var99); /* push on <self:Parser>*/
}
} else {
{
{ /* Inline kernel#Int#== (var_action_type,1l) on <var_action_type:Int> */
var102 = var_action_type == 1l;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
if (var100){
var103 = self->attrs[COLOR_nit__parser_work__Parser___reduce_table].val; /* _reduce_table on <self:Parser> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _reduce_table");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 137);
fatal_exit(1);
}
{
var104 = ((val*(*)(val* self, long p0))(var103->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var103, var_action_value); /* [] on <var103:Array[ReduceAction]>*/
}
{
((void(*)(val* self, val* p0))(var104->class->vft[COLOR_nit__parser_work__ReduceAction__action]))(var104, self); /* action on <var104:nullable Object(ReduceAction)>*/
}
} else {
{
{ /* Inline kernel#Int#== (var_action_type,2l) on <var_action_type:Int> */
var107 = var_action_type == 2l;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
if (var105){
{
var108 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__lexer_work__Lexer__next]))(var_lexer); /* next on <var_lexer:Lexer>*/
}
var_node2 = var108;
/* <var_node2:Token> isa EOF */
cltype110 = type_nit__EOF.color;
idtype111 = type_nit__EOF.id;
if(cltype110 >= var_node2->type->table_size) {
var109 = 0;
} else {
var109 = var_node2->type->type_table[cltype110] == idtype111;
}
if (unlikely(!var109)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 140);
fatal_exit(1);
}
{
var112 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_work__Parser__pop]))(self); /* pop on <self:Parser>*/
}
var_node1 = var112;
/* <var_node1:nullable Object> isa AModule */
cltype114 = type_nit__AModule.color;
idtype115 = type_nit__AModule.id;
if(var_node1 == NULL) {
var113 = 0;
} else {
if(cltype114 >= (((long)var_node1&3)?type_info[((long)var_node1&3)]:var_node1->type)->table_size) {
var113 = 0;
} else {
var113 = (((long)var_node1&3)?type_info[((long)var_node1&3)]:var_node1->type)->type_table[cltype114] == idtype115;
}
}
if (unlikely(!var113)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 142);
fatal_exit(1);
}
var116 = NEW_nit__Start(&type_nit__Start);
{
((void(*)(val* self, val* p0))(var116->class->vft[COLOR_nit__parser_nodes__Start__n_base_61d]))(var116, var_node1); /* n_base= on <var116:Start>*/
}
{
((void(*)(val* self, val* p0))(var116->class->vft[COLOR_nit__parser_nodes__Start__n_eof_61d]))(var116, var_node2); /* n_eof= on <var116:Start>*/
}
{
((void(*)(val* self))(var116->class->vft[COLOR_standard__kernel__Object__init]))(var116); /* init on <var116:Start>*/
}
var_node = var116;
var117 = NEW_nit__parser_work__ComputeProdLocationVisitor(&type_nit__parser_work__ComputeProdLocationVisitor);
{
((void(*)(val* self))(var117->class->vft[COLOR_standard__kernel__Object__init]))(var117); /* init on <var117:ComputeProdLocationVisitor>*/
}
{
((void(*)(val* self, val* p0))(var117->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var117, var_node); /* enter_visit on <var117:ComputeProdLocationVisitor>*/
}
var = var_node;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#== (var_action_type,3l) on <var_action_type:Int> */
var120 = var_action_type == 3l;
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
if (var118){
for(;;) {
var121 = var_token->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <var_token:Token> */
var122 = !var121;
if (var122){
{
var123 = ((val*(*)(val* self))(var_lexer->class->vft[COLOR_nit__lexer_work__Lexer__next]))(var_lexer); /* next on <var_lexer:Lexer>*/
}
var_token = var123;
} else {
goto BREAK_label124;
}
}
BREAK_label124: (void)0;
var125 = NEW_nit__AParserError(&type_nit__AParserError);
if (unlikely(varonce==NULL)) {
var126 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "Syntax Error: unexpected ";
var130 = standard___standard__NativeString___to_s_with_length(var129, 25l);
var128 = var130;
varonce127 = var128;
}
((struct instance_standard__NativeArray*)var126)->values[0]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ".";
var134 = standard___standard__NativeString___to_s_with_length(var133, 1l);
var132 = var134;
varonce131 = var132;
}
((struct instance_standard__NativeArray*)var126)->values[2]=var132;
} else {
var126 = varonce;
varonce = NULL;
}
{
var135 = ((val*(*)(val* self))(var_token->class->vft[COLOR_standard__string__Object__to_s]))(var_token); /* to_s on <var_token:Token>*/
}
((struct instance_standard__NativeArray*)var126)->values[1]=var135;
{
var136 = ((val*(*)(val* self))(var126->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce = var126;
{
var137 = ((val*(*)(val* self))(var_token->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_token); /* location on <var_token:Token>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var125->class->vft[COLOR_nit__lexer_work__AParserError__init_parser_error]))(var125, var136, var137, var_token); /* init_parser_error on <var125:AParserError>*/
}
var_node2138 = var125;
var139 = NEW_nit__Start(&type_nit__Start);
{
((void(*)(val* self, val* p0))(var139->class->vft[COLOR_nit__parser_nodes__Start__n_base_61d]))(var139, ((val*)NULL)); /* n_base= on <var139:Start>*/
}
{
((void(*)(val* self, val* p0))(var139->class->vft[COLOR_nit__parser_nodes__Start__n_eof_61d]))(var139, var_node2138); /* n_eof= on <var139:Start>*/
}
{
((void(*)(val* self))(var139->class->vft[COLOR_standard__kernel__Object__init]))(var139); /* init on <var139:Start>*/
}
var_node140 = var139;
var = var_node140;
goto RET_LABEL;
} else {
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method parser_work#Parser#reduce_table for (self: Parser): Array[ReduceAction] */
val* nit___nit__Parser___reduce_table(val* self) {
val* var /* : Array[ReduceAction] */;
val* var1 /* : Array[ReduceAction] */;
var1 = self->attrs[COLOR_nit__parser_work__Parser___reduce_table].val; /* _reduce_table on <self:Parser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _reduce_table");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 156);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#reduce_table= for (self: Parser, Array[ReduceAction]) */
void nit___nit__Parser___reduce_table_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_work__Parser___reduce_table].val = p0; /* _reduce_table on <self:Parser> */
RET_LABEL:;
}
/* method parser_work#Parser#build_reduce_table for (self: Parser) */
void nit___nit__Parser___build_reduce_table(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "build_reduce_table", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 157);
fatal_exit(1);
RET_LABEL:;
}
/* method parser_work#Prod#first_location for (self: Prod): nullable Location */
val* nit__parser_work___Prod___first_location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_nit__parser_work__Prod___first_location].val; /* _first_location on <self:Prod> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#Prod#first_location= for (self: Prod, nullable Location) */
void nit__parser_work___Prod___first_location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_work__Prod___first_location].val = p0; /* _first_location on <self:Prod> */
RET_LABEL:;
}
/* method parser_work#Prod#collect_text for (self: Prod): String */
val* nit__parser_work___Prod___collect_text(val* self) {
val* var /* : String */;
val* var1 /* : TextCollectorVisitor */;
val* var_v /* var v: TextCollectorVisitor */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
short int var6 /* : Bool */;
val* var7 /* : String */;
var1 = NEW_nit__parser_work__TextCollectorVisitor(&type_nit__parser_work__TextCollectorVisitor);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:TextCollectorVisitor>*/
}
var_v = var1;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, self); /* enter_visit on <var_v:TextCollectorVisitor>*/
}
{
var2 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__parser_work__TextCollectorVisitor__text]))(var_v); /* text on <var_v:TextCollectorVisitor>*/
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "";
var5 = standard___standard__NativeString___to_s_with_length(var4, 0l);
var3 = var5;
varonce = var3;
}
{
var6 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var2, var3); /* != on <var2:String>*/
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 170);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__parser_work__TextCollectorVisitor__text]))(var_v); /* text on <var_v:TextCollectorVisitor>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#ComputeProdLocationVisitor#need_first_prods for (self: ComputeProdLocationVisitor): Array[Prod] */
val* nit__parser_work___nit__parser_work__ComputeProdLocationVisitor___need_first_prods(val* self) {
val* var /* : Array[Prod] */;
val* var1 /* : Array[Prod] */;
var1 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 179);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#ComputeProdLocationVisitor#need_first_prods= for (self: ComputeProdLocationVisitor, Array[Prod]) */
void nit__parser_work___nit__parser_work__ComputeProdLocationVisitor___need_first_prods_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_first_prods].val = p0; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
RET_LABEL:;
}
/* method parser_work#ComputeProdLocationVisitor#need_after_epsilons for (self: ComputeProdLocationVisitor): Array[Prod] */
val* nit__parser_work___nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons(val* self) {
val* var /* : Array[Prod] */;
val* var1 /* : Array[Prod] */;
var1 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 182);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#ComputeProdLocationVisitor#need_after_epsilons= for (self: ComputeProdLocationVisitor, Array[Prod]) */
void nit__parser_work___nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val = p0; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
RET_LABEL:;
}
/* method parser_work#ComputeProdLocationVisitor#last_location for (self: ComputeProdLocationVisitor): nullable Location */
val* nit__parser_work___nit__parser_work__ComputeProdLocationVisitor___last_location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___last_location].val; /* _last_location on <self:ComputeProdLocationVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#ComputeProdLocationVisitor#last_location= for (self: ComputeProdLocationVisitor, nullable Location) */
void nit__parser_work___nit__parser_work__ComputeProdLocationVisitor___last_location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___last_location].val = p0; /* _last_location on <self:ComputeProdLocationVisitor> */
RET_LABEL:;
}
/* method parser_work#ComputeProdLocationVisitor#visit for (self: ComputeProdLocationVisitor, ANode) */
void nit__parser_work___nit__parser_work__ComputeProdLocationVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Location */;
val* var_loc /* var loc: Location */;
val* var4 /* : Array[Prod] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[Prod] */;
val* var_ /* var : Array[Prod] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : ArrayIterator[Prod] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_no /* var no: Prod */;
val* var12 /* : Array[Prod] */;
val* var13 /* : Array[Prod] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Location */;
val* var17 /* : nullable SourceFile */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
val* var_loco /* var loco: Location */;
val* var22 /* : Array[Prod] */;
val* var_23 /* var : Array[Prod] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : ArrayIterator[Prod] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_no28 /* var no: Prod */;
val* var30 /* : Array[Prod] */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Prod] */;
val* var35 /* : nullable Location */;
val* var_startl /* var startl: nullable Location */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : nullable Location */;
val* var_endl /* var endl: nullable Location */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : Location */;
val* var43 /* : nullable SourceFile */;
long var44 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
val* var48 /* : Array[Prod] */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : Location */;
val* var52 /* : nullable SourceFile */;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
val* var_loc57 /* var loc: Location */;
val* var58 /* : Array[Prod] */;
val* var_59 /* var : Array[Prod] */;
val* var60 /* : Iterator[nullable Object] */;
val* var_61 /* var : ArrayIterator[Prod] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_no64 /* var no: Prod */;
val* var66 /* : Array[Prod] */;
val* var67 /* : Array[Prod] */;
var_n = p0;
/* <var_n:ANode> isa Token */
cltype = type_nit__Token.color;
idtype = type_nit__Token.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var1 = var_n->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <var_n:ANode(Token)> */
var2 = !var1;
if (var2){
goto RET_LABEL;
} else {
}
var3 = var_n->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_n:ANode(Token)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 192);
fatal_exit(1);
}
var_loc = var3;
self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___last_location].val = var_loc; /* _last_location on <self:ComputeProdLocationVisitor> */
var4 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 196);
fatal_exit(1);
}
{
var5 = ((short int(*)(val* self))(var4->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var4); /* is_empty on <var4:Array[Prod]>*/
}
var6 = !var5;
if (var6){
var7 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 197);
fatal_exit(1);
}
var_ = var7;
{
var8 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Prod]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:ArrayIterator[Prod]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:ArrayIterator[Prod]>*/
}
var_no = var11;
var_no->attrs[COLOR_nit__parser_work__Prod___first_location].val = var_loc; /* _first_location on <var_no:Prod> */
{
((void(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:ArrayIterator[Prod]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:ArrayIterator[Prod]>*/
}
var12 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 200);
fatal_exit(1);
}
{
((void(*)(val* self))(var12->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var12); /* clear on <var12:Array[Prod]>*/
}
} else {
}
var13 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 204);
fatal_exit(1);
}
{
var14 = ((short int(*)(val* self))(var13->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var13); /* is_empty on <var13:Array[Prod]>*/
}
var15 = !var14;
if (var15){
var16 = NEW_nit__Location(&type_nit__Location);
{
var17 = ((val*(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__file]))(var_loc); /* file on <var_loc:Location>*/
}
{
var18 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__line_start]))(var_loc); /* line_start on <var_loc:Location>*/
}
{
var19 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__line_start]))(var_loc); /* line_start on <var_loc:Location>*/
}
{
var20 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__column_start]))(var_loc); /* column_start on <var_loc:Location>*/
}
{
var21 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__column_start]))(var_loc); /* column_start on <var_loc:Location>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_nit__location__Location__file_61d]))(var16, var17); /* file= on <var16:Location>*/
}
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_nit__location__Location__line_start_61d]))(var16, var18); /* line_start= on <var16:Location>*/
}
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_nit__location__Location__line_end_61d]))(var16, var19); /* line_end= on <var16:Location>*/
}
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_nit__location__Location__column_start_61d]))(var16, var20); /* column_start= on <var16:Location>*/
}
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_nit__location__Location__column_end_61d]))(var16, var21); /* column_end= on <var16:Location>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_standard__kernel__Object__init]))(var16); /* init on <var16:Location>*/
}
var_loco = var16;
var22 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 206);
fatal_exit(1);
}
var_23 = var22;
{
var24 = ((val*(*)(val* self))(var_23->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_23); /* iterator on <var_23:Array[Prod]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:ArrayIterator[Prod]>*/
}
if (var26){
{
var27 = ((val*(*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:ArrayIterator[Prod]>*/
}
var_no28 = var27;
{
((void(*)(val* self, val* p0))(var_no28->class->vft[COLOR_nit__parser_nodes__ANode__location_61d]))(var_no28, var_loco); /* location= on <var_no28:Prod>*/
}
{
((void(*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:ArrayIterator[Prod]>*/
}
} else {
goto BREAK_label29;
}
}
BREAK_label29: (void)0;
{
((void(*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:ArrayIterator[Prod]>*/
}
var30 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 209);
fatal_exit(1);
}
{
((void(*)(val* self))(var30->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var30); /* clear on <var30:Array[Prod]>*/
}
} else {
}
} else {
/* <var_n:ANode> isa Prod */
cltype32 = type_nit__Prod.color;
idtype33 = type_nit__Prod.id;
if(cltype32 >= var_n->type->table_size) {
var31 = 0;
} else {
var31 = var_n->type->type_table[cltype32] == idtype33;
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 212);
fatal_exit(1);
}
var34 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 213);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var34, var_n); /* add on <var34:Array[Prod]>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode(Prod)>*/
}
var35 = var_n->attrs[COLOR_nit__parser_work__Prod___first_location].val; /* _first_location on <var_n:ANode(Prod)> */
var_startl = var35;
if (var_startl == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
var37 = ((short int(*)(val* self, val* p0))(var_startl->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_startl, ((val*)NULL)); /* != on <var_startl:nullable Location>*/
var36 = var37;
}
if (var36){
var38 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___last_location].val; /* _last_location on <self:ComputeProdLocationVisitor> */
var_endl = var38;
if (var_endl == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
var40 = ((short int(*)(val* self, val* p0))(var_endl->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_endl, ((val*)NULL)); /* != on <var_endl:nullable Location>*/
var39 = var40;
}
if (unlikely(!var39)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 221);
fatal_exit(1);
}
{
var41 = ((short int(*)(val* self, val* p0))(var_startl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_startl, var_endl); /* == on <var_startl:nullable Location(Location)>*/
}
if (var41){
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__location_61d]))(var_n, var_startl); /* location= on <var_n:ANode(Prod)>*/
}
} else {
var42 = NEW_nit__Location(&type_nit__Location);
{
var43 = ((val*(*)(val* self))(var_startl->class->vft[COLOR_nit__location__Location__file]))(var_startl); /* file on <var_startl:nullable Location(Location)>*/
}
{
var44 = ((long(*)(val* self))(var_startl->class->vft[COLOR_nit__location__Location__line_start]))(var_startl); /* line_start on <var_startl:nullable Location(Location)>*/
}
{
var45 = ((long(*)(val* self))(var_endl->class->vft[COLOR_nit__location__Location__line_end]))(var_endl); /* line_end on <var_endl:nullable Location(Location)>*/
}
{
var46 = ((long(*)(val* self))(var_startl->class->vft[COLOR_nit__location__Location__column_start]))(var_startl); /* column_start on <var_startl:nullable Location(Location)>*/
}
{
var47 = ((long(*)(val* self))(var_endl->class->vft[COLOR_nit__location__Location__column_end]))(var_endl); /* column_end on <var_endl:nullable Location(Location)>*/
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_nit__location__Location__file_61d]))(var42, var43); /* file= on <var42:Location>*/
}
{
((void(*)(val* self, long p0))(var42->class->vft[COLOR_nit__location__Location__line_start_61d]))(var42, var44); /* line_start= on <var42:Location>*/
}
{
((void(*)(val* self, long p0))(var42->class->vft[COLOR_nit__location__Location__line_end_61d]))(var42, var45); /* line_end= on <var42:Location>*/
}
{
((void(*)(val* self, long p0))(var42->class->vft[COLOR_nit__location__Location__column_start_61d]))(var42, var46); /* column_start= on <var42:Location>*/
}
{
((void(*)(val* self, long p0))(var42->class->vft[COLOR_nit__location__Location__column_end_61d]))(var42, var47); /* column_end= on <var42:Location>*/
}
{
((void(*)(val* self))(var42->class->vft[COLOR_standard__kernel__Object__init]))(var42); /* init on <var42:Location>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__location_61d]))(var_n, var42); /* location= on <var_n:ANode(Prod)>*/
}
}
var48 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 229);
fatal_exit(1);
}
{
var49 = ((short int(*)(val* self))(var48->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var48); /* is_empty on <var48:Array[Prod]>*/
}
var50 = !var49;
if (var50){
var51 = NEW_nit__Location(&type_nit__Location);
{
var52 = ((val*(*)(val* self))(var_endl->class->vft[COLOR_nit__location__Location__file]))(var_endl); /* file on <var_endl:nullable Location(Location)>*/
}
{
var53 = ((long(*)(val* self))(var_endl->class->vft[COLOR_nit__location__Location__line_end]))(var_endl); /* line_end on <var_endl:nullable Location(Location)>*/
}
{
var54 = ((long(*)(val* self))(var_endl->class->vft[COLOR_nit__location__Location__line_end]))(var_endl); /* line_end on <var_endl:nullable Location(Location)>*/
}
{
var55 = ((long(*)(val* self))(var_endl->class->vft[COLOR_nit__location__Location__column_end]))(var_endl); /* column_end on <var_endl:nullable Location(Location)>*/
}
{
var56 = ((long(*)(val* self))(var_endl->class->vft[COLOR_nit__location__Location__column_end]))(var_endl); /* column_end on <var_endl:nullable Location(Location)>*/
}
{
((void(*)(val* self, val* p0))(var51->class->vft[COLOR_nit__location__Location__file_61d]))(var51, var52); /* file= on <var51:Location>*/
}
{
((void(*)(val* self, long p0))(var51->class->vft[COLOR_nit__location__Location__line_start_61d]))(var51, var53); /* line_start= on <var51:Location>*/
}
{
((void(*)(val* self, long p0))(var51->class->vft[COLOR_nit__location__Location__line_end_61d]))(var51, var54); /* line_end= on <var51:Location>*/
}
{
((void(*)(val* self, long p0))(var51->class->vft[COLOR_nit__location__Location__column_start_61d]))(var51, var55); /* column_start= on <var51:Location>*/
}
{
((void(*)(val* self, long p0))(var51->class->vft[COLOR_nit__location__Location__column_end_61d]))(var51, var56); /* column_end= on <var51:Location>*/
}
{
((void(*)(val* self))(var51->class->vft[COLOR_standard__kernel__Object__init]))(var51); /* init on <var51:Location>*/
}
var_loc57 = var51;
var58 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 231);
fatal_exit(1);
}
var_59 = var58;
{
var60 = ((val*(*)(val* self))(var_59->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_59); /* iterator on <var_59:Array[Prod]>*/
}
var_61 = var60;
for(;;) {
{
var62 = ((short int(*)(val* self))(var_61->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_61); /* is_ok on <var_61:ArrayIterator[Prod]>*/
}
if (var62){
{
var63 = ((val*(*)(val* self))(var_61->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_61); /* item on <var_61:ArrayIterator[Prod]>*/
}
var_no64 = var63;
{
((void(*)(val* self, val* p0))(var_no64->class->vft[COLOR_nit__parser_nodes__ANode__location_61d]))(var_no64, var_loc57); /* location= on <var_no64:Prod>*/
}
{
((void(*)(val* self))(var_61->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_61); /* next on <var_61:ArrayIterator[Prod]>*/
}
} else {
goto BREAK_label65;
}
}
BREAK_label65: (void)0;
{
((void(*)(val* self))(var_61->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_61); /* finish on <var_61:ArrayIterator[Prod]>*/
}
var66 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 235);
fatal_exit(1);
}
{
((void(*)(val* self))(var66->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var66); /* clear on <var66:Array[Prod]>*/
}
} else {
}
} else {
var67 = self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 239);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var67, var_n); /* add on <var67:Array[Prod]>*/
}
}
}
RET_LABEL:;
}
/* method parser_work#TextCollectorVisitor#text for (self: TextCollectorVisitor): String */
val* nit__parser_work___nit__parser_work__TextCollectorVisitor___text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__parser_work__TextCollectorVisitor___text].val; /* _text on <self:TextCollectorVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 247);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#TextCollectorVisitor#text= for (self: TextCollectorVisitor, String) */
void nit__parser_work___nit__parser_work__TextCollectorVisitor___text_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_work__TextCollectorVisitor___text].val = p0; /* _text on <self:TextCollectorVisitor> */
RET_LABEL:;
}
/* method parser_work#TextCollectorVisitor#visit for (self: TextCollectorVisitor, ANode) */
void nit__parser_work___nit__parser_work__TextCollectorVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var_ /* var : TextCollectorVisitor */;
val* var1 /* : String */;
val* var2 /* : String */;
val* var3 /* : String */;
var_n = p0;
/* <var_n:ANode> isa Token */
cltype = type_nit__Token.color;
idtype = type_nit__Token.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var_ = self;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_nit__parser_work__TextCollectorVisitor__text]))(var_); /* text on <var_:TextCollectorVisitor>*/
}
{
var2 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_n); /* text on <var_n:ANode(Token)>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__String___43d]))(var1, var2); /* + on <var1:String>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_nit__parser_work__TextCollectorVisitor__text_61d]))(var_, var3); /* text= on <var_:TextCollectorVisitor>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method parser_work#ReduceAction#action for (self: ReduceAction, Parser) */
void nit__parser_work___nit__parser_work__ReduceAction___action(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "action", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_work, 258);
fatal_exit(1);
RET_LABEL:;
}
/* method parser_work#ReduceAction#concat for (self: ReduceAction, Array[Object], Array[Object]): Array[Object] */
val* nit__parser_work___nit__parser_work__ReduceAction___concat(val* self, val* p0, val* p1) {
val* var /* : Array[Object] */;
val* var_l1 /* var l1: Array[Object] */;
val* var_l2 /* var l2: Array[Object] */;
short int var1 /* : Bool */;
var_l1 = p0;
var_l2 = p1;
{
var1 = ((short int(*)(val* self))(var_l1->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_l1); /* is_empty on <var_l1:Array[Object]>*/
}
if (var1){
var = var_l2;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_l1->class->vft[COLOR_standard__abstract_collection__Sequence__append]))(var_l1, var_l2); /* append on <var_l1:Array[Object]>*/
}
var = var_l1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#ReduceAction#goto for (self: ReduceAction): Int */
long nit__parser_work___nit__parser_work__ReduceAction___goto(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#ReduceAction#goto= for (self: ReduceAction, Int) */
void nit__parser_work___nit__parser_work__ReduceAction___goto_61d(val* self, long p0) {
self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l = p0; /* _goto on <self:ReduceAction> */
RET_LABEL:;
}
/* method parser_work#ReduceAction#init for (self: ReduceAction) */
void nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init]))(self); /* init on <self:ReduceAction>*/
}
RET_LABEL:;
}
