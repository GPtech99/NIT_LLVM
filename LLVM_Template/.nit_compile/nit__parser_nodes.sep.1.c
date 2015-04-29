#include "nit__parser_nodes.sep.0.h"
/* method parser_nodes#ANode#location for (self: ANode): Location */
val* nit___nit__ANode___location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:ANode> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#location= for (self: ANode, Location) */
void nit___nit__ANode___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANode___location].val = p0; /* _location on <self:ANode> */
RET_LABEL:;
}
/* method parser_nodes#ANode#hot_location for (self: ANode): Location */
val* nit___nit__ANode___hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:ANode>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#debug for (self: ANode, String) */
void nit___nit__ANode___debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : Location */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : Location */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var30 /* : String */;
var_message = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:ANode> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__file__Sys__stderr]))(var); /* stderr on <var:Sys>*/
}
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " ";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[1]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ": ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[3]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\n";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var4)->values[5]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\n";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var4)->values[7]=var18;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(self); /* hot_location on <self:ANode>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__Object__to_s]))(var21); /* to_s on <var21:Location>*/
}
((struct instance_standard__NativeArray*)var4)->values[0]=var22;
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__class_name]))(self); /* class_name on <self:ANode>*/
}
((struct instance_standard__NativeArray*)var4)->values[2]=var23;
((struct instance_standard__NativeArray*)var4)->values[4]=var_message;
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(self); /* hot_location on <self:ANode>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "0;32";
var28 = standard___standard__NativeString___to_s_with_length(var27, 4l);
var26 = var28;
varonce25 = var26;
}
{
var29 = ((val*(*)(val* self, val* p0))(var24->class->vft[COLOR_nit__location__Location__colored_line]))(var24, var26); /* colored_line on <var24:Location>*/
}
((struct instance_standard__NativeArray*)var4)->values[6]=var29;
{
var30 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__stream__Writer__write]))(var3, var30); /* write on <var3:Writer>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANode#dump_tree for (self: ANode) */
void nit___nit__ANode___dump_tree(val* self) {
val* var /* : ASTDump */;
val* var_d /* var d: ASTDump */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : Writer */;
var = NEW_nit__ASTDump(&type_nit__ASTDump);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:ASTDump>*/
}
var_d = var;
{
((void(*)(val* self, val* p0))(var_d->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_d, self); /* enter_visit on <var_d:ASTDump>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:ANode> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__file__Sys__stdout]))(var1); /* stdout on <var1:Sys>*/
}
{
((void(*)(val* self, val* p0))(var_d->class->vft[COLOR_standard__stream__Writable__write_to]))(var_d, var4); /* write_to on <var_d:ASTDump>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANode#parent for (self: ANode): nullable ANode */
val* nit___nit__ANode___parent(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#parent= for (self: ANode, nullable ANode) */
void nit___nit__ANode___parent_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = p0; /* _parent on <self:ANode> */
RET_LABEL:;
}
/* method parser_nodes#ANode#root for (self: ANode): ANode */
val* nit___nit__ANode___root(val* self) {
val* var /* : ANode */;
val* var_res /* var res: ANode */;
val* var1 /* : nullable ANode */;
val* var_p /* var p: nullable ANode */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var_res = self;
for(;;) {
{
var1 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_res); /* parent on <var_res:ANode>*/
}
var_p = var1;
if (var_p == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable ANode>*/
var2 = var3;
}
if (var2){
var = var_res;
goto RET_LABEL;
} else {
}
var_res = var_p;
}
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#common_parent for (self: ANode, ANode): nullable ANode */
val* nit___nit__ANode___common_parent(val* self, val* p0) {
val* var /* : nullable ANode */;
val* var_other /* var other: ANode */;
val* var_s /* var s: nullable ANode */;
val* var_o /* var o: nullable ANode */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_d /* var d: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
val* var14 /* : nullable ANode */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
val* var29 /* : nullable ANode */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : nullable ANode */;
val* var46 /* : nullable ANode */;
var_other = p0;
var_s = self;
var_o = var_other;
if (var_s == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 68);
fatal_exit(1);
} else {
var1 = ((long(*)(val* self))(var_s->class->vft[COLOR_nit__parser_nodes__ANode__depth]))(var_s); /* depth on <var_s:nullable ANode>*/
}
if (var_o == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 68);
fatal_exit(1);
} else {
var2 = ((long(*)(val* self))(var_o->class->vft[COLOR_nit__parser_nodes__ANode__depth]))(var_o); /* depth on <var_o:nullable ANode>*/
}
{
{ /* Inline kernel#Int#- (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var6 = var1 - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_d = var3;
for(;;) {
{
{ /* Inline kernel#Int#> (var_d,0l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var13 = var_d > 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
if (var_s == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 70);
fatal_exit(1);
} else {
var14 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_s); /* parent on <var_s:nullable ANode>*/
}
var_s = var14;
{
{ /* Inline kernel#Int#- (var_d,1l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var21 = var_d - 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_d = var15;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
for(;;) {
{
{ /* Inline kernel#Int#< (var_d,0l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var24 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var28 = var_d < 0l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
if (var_o == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 74);
fatal_exit(1);
} else {
var29 = ((val*(*)(val* self))(var_o->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_o); /* parent on <var_o:nullable ANode>*/
}
var_o = var29;
{
{ /* Inline kernel#Int#+ (var_d,1l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var36 = var_d + 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_d = var30;
} else {
goto BREAK_label37;
}
}
BREAK_label37: (void)0;
if (var_o == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 77);
fatal_exit(1);
} else {
var38 = ((long(*)(val* self))(var_o->class->vft[COLOR_nit__parser_nodes__ANode__depth]))(var_o); /* depth on <var_o:nullable ANode>*/
}
if (var_s == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 77);
fatal_exit(1);
} else {
var39 = ((long(*)(val* self))(var_s->class->vft[COLOR_nit__parser_nodes__ANode__depth]))(var_s); /* depth on <var_s:nullable ANode>*/
}
{
{ /* Inline kernel#Int#== (var38,var39) on <var38:Int> */
var42 = var38 == var39;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (unlikely(!var40)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 77);
fatal_exit(1);
}
for(;;) {
if (var_s == NULL) {
var43 = (var_o != NULL);
} else {
var44 = ((short int(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_s, var_o); /* != on <var_s:nullable ANode>*/
var43 = var44;
}
if (var43){
if (var_s == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 80);
fatal_exit(1);
} else {
var45 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_s); /* parent on <var_s:nullable ANode>*/
}
var_s = var45;
if (var_o == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 81);
fatal_exit(1);
} else {
var46 = ((val*(*)(val* self))(var_o->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_o); /* parent on <var_o:nullable ANode>*/
}
var_o = var46;
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#depth for (self: ANode): Int */
long nit___nit__ANode___depth(val* self) {
long var /* : Int */;
val* var_n /* var n: ANode */;
long var_res /* var res: Int */;
val* var1 /* : nullable ANode */;
val* var_p /* var p: nullable ANode */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
var_n = self;
var_res = 0l;
for(;;) {
{
var1 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_n); /* parent on <var_n:ANode>*/
}
var_p = var1;
if (var_p == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable ANode>*/
var2 = var3;
}
if (var2){
var = var_res;
goto RET_LABEL;
} else {
}
var_n = var_p;
{
{ /* Inline kernel#Int#+ (var_res,1l) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var7 = var_res + 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_res = var4;
}
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#replace_child for (self: ANode, ANode, nullable ANode) */
void nit___nit__ANode___replace_child(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "replace_child", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 101);
fatal_exit(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#detach for (self: ANode) */
void nit___nit__ANode___detach(val* self) {
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable ANode */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(self); /* parent on <self:ANode>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable ANode>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 111);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(self); /* parent on <self:ANode>*/
}
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 112);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_nodes__ANode__replace_child]))(var3, self, ((val*)NULL)); /* replace_child on <var3:nullable ANode>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(self, ((val*)NULL)); /* parent= on <self:ANode>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_with for (self: ANode, ANode) */
void nit___nit__ANode___replace_with(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable ANode */;
var_node = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(self); /* parent on <self:ANode>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable ANode>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 122);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(self); /* parent on <self:ANode>*/
}
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 123);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0, val* p1))(var3->class->vft[COLOR_nit__parser_nodes__ANode__replace_child]))(var3, self, var_node); /* replace_child on <var3:nullable ANode>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(self, ((val*)NULL)); /* parent= on <self:ANode>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANode#visit_all for (self: ANode, Visitor) */
void nit___nit__ANode___visit_all(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "visit_all", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 127);
fatal_exit(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#collect_tokens_by_text for (self: ANode, String): Array[Token] */
val* nit___nit__ANode___collect_tokens_by_text(val* self, val* p0) {
val* var /* : Array[Token] */;
val* var_text /* var text: String */;
val* var1 /* : CollectTokensByTextVisitor */;
val* var_v /* var v: CollectTokensByTextVisitor */;
val* var2 /* : Array[Token] */;
var_text = p0;
var1 = NEW_nit__parser_nodes__CollectTokensByTextVisitor(&type_nit__parser_nodes__CollectTokensByTextVisitor);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__CollectTokensByTextVisitor__text_61d]))(var1, var_text); /* text= on <var1:CollectTokensByTextVisitor>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:CollectTokensByTextVisitor>*/
}
var_v = var1;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, self); /* enter_visit on <var_v:CollectTokensByTextVisitor>*/
}
{
var2 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__parser_nodes__CollectTokensByTextVisitor__result]))(var_v); /* result on <var_v:CollectTokensByTextVisitor>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#collect_annotations_by_name for (self: ANode, String): Array[AAnnotation] */
val* nit___nit__ANode___collect_annotations_by_name(val* self, val* p0) {
val* var /* : Array[AAnnotation] */;
val* var_name /* var name: String */;
val* var1 /* : CollectAnnotationsByNameVisitor */;
val* var_v /* var v: CollectAnnotationsByNameVisitor */;
val* var2 /* : Array[AAnnotation] */;
var_name = p0;
var1 = NEW_nit__parser_nodes__CollectAnnotationsByNameVisitor(&type_nit__parser_nodes__CollectAnnotationsByNameVisitor);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__parser_nodes__CollectAnnotationsByNameVisitor__name_61d]))(var1, var_name); /* name= on <var1:CollectAnnotationsByNameVisitor>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:CollectAnnotationsByNameVisitor>*/
}
var_v = var1;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, self); /* enter_visit on <var_v:CollectAnnotationsByNameVisitor>*/
}
{
var2 = ((val*(*)(val* self))(var_v->class->vft[COLOR_nit__parser_nodes__CollectAnnotationsByNameVisitor__result]))(var_v); /* result on <var_v:CollectAnnotationsByNameVisitor>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#CollectTokensByTextVisitor#text for (self: CollectTokensByTextVisitor): String */
val* nit__parser_nodes___nit__parser_nodes__CollectTokensByTextVisitor___text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__parser_nodes__CollectTokensByTextVisitor___text].val; /* _text on <self:CollectTokensByTextVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 151);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#CollectTokensByTextVisitor#text= for (self: CollectTokensByTextVisitor, String) */
void nit__parser_nodes___nit__parser_nodes__CollectTokensByTextVisitor___text_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__CollectTokensByTextVisitor___text].val = p0; /* _text on <self:CollectTokensByTextVisitor> */
RET_LABEL:;
}
/* method parser_nodes#CollectTokensByTextVisitor#result for (self: CollectTokensByTextVisitor): Array[Token] */
val* nit__parser_nodes___nit__parser_nodes__CollectTokensByTextVisitor___result(val* self) {
val* var /* : Array[Token] */;
val* var1 /* : Array[Token] */;
var1 = self->attrs[COLOR_nit__parser_nodes__CollectTokensByTextVisitor___result].val; /* _result on <self:CollectTokensByTextVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _result");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 152);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#CollectTokensByTextVisitor#result= for (self: CollectTokensByTextVisitor, Array[Token]) */
void nit__parser_nodes___nit__parser_nodes__CollectTokensByTextVisitor___result_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__CollectTokensByTextVisitor___result].val = p0; /* _result on <self:CollectTokensByTextVisitor> */
RET_LABEL:;
}
/* method parser_nodes#CollectTokensByTextVisitor#visit for (self: CollectTokensByTextVisitor, ANode) */
void nit__parser_nodes___nit__parser_nodes__CollectTokensByTextVisitor___Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var5 /* : Array[Token] */;
var_node = p0;
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_node, self); /* visit_all on <var_node:ANode>*/
}
/* <var_node:ANode> isa Token */
cltype = type_nit__Token.color;
idtype = type_nit__Token.id;
if(cltype >= var_node->type->table_size) {
var1 = 0;
} else {
var1 = var_node->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
{
var2 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_node); /* text on <var_node:ANode(Token)>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__CollectTokensByTextVisitor__text]))(self); /* text on <self:CollectTokensByTextVisitor>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var3); /* == on <var2:String>*/
}
var = var4;
} else {
var = var_;
}
if (var){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__CollectTokensByTextVisitor__result]))(self); /* result on <self:CollectTokensByTextVisitor>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var5, var_node); /* add on <var5:Array[Token]>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_nodes#CollectTokensByTextVisitor#init for (self: CollectTokensByTextVisitor) */
void nit__parser_nodes___nit__parser_nodes__CollectTokensByTextVisitor___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes___nit__parser_nodes__CollectTokensByTextVisitor___standard__kernel__Object__init]))(self); /* init on <self:CollectTokensByTextVisitor>*/
}
RET_LABEL:;
}
/* method parser_nodes#CollectAnnotationsByNameVisitor#name for (self: CollectAnnotationsByNameVisitor): String */
val* nit__parser_nodes___nit__parser_nodes__CollectAnnotationsByNameVisitor___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__parser_nodes__CollectAnnotationsByNameVisitor___name].val; /* _name on <self:CollectAnnotationsByNameVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 162);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#CollectAnnotationsByNameVisitor#name= for (self: CollectAnnotationsByNameVisitor, String) */
void nit__parser_nodes___nit__parser_nodes__CollectAnnotationsByNameVisitor___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__CollectAnnotationsByNameVisitor___name].val = p0; /* _name on <self:CollectAnnotationsByNameVisitor> */
RET_LABEL:;
}
/* method parser_nodes#CollectAnnotationsByNameVisitor#result for (self: CollectAnnotationsByNameVisitor): Array[AAnnotation] */
val* nit__parser_nodes___nit__parser_nodes__CollectAnnotationsByNameVisitor___result(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = self->attrs[COLOR_nit__parser_nodes__CollectAnnotationsByNameVisitor___result].val; /* _result on <self:CollectAnnotationsByNameVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _result");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 163);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#CollectAnnotationsByNameVisitor#result= for (self: CollectAnnotationsByNameVisitor, Array[AAnnotation]) */
void nit__parser_nodes___nit__parser_nodes__CollectAnnotationsByNameVisitor___result_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__CollectAnnotationsByNameVisitor___result].val = p0; /* _result on <self:CollectAnnotationsByNameVisitor> */
RET_LABEL:;
}
/* method parser_nodes#CollectAnnotationsByNameVisitor#visit for (self: CollectAnnotationsByNameVisitor, ANode) */
void nit__parser_nodes___nit__parser_nodes__CollectAnnotationsByNameVisitor___Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var2 /* : AAtid */;
val* var3 /* : Token */;
val* var4 /* : String */;
val* var5 /* : String */;
short int var6 /* : Bool */;
val* var7 /* : Array[AAnnotation] */;
var_node = p0;
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_node, self); /* visit_all on <var_node:ANode>*/
}
/* <var_node:ANode> isa AAnnotation */
cltype = type_nit__AAnnotation.color;
idtype = type_nit__AAnnotation.id;
if(cltype >= var_node->type->table_size) {
var1 = 0;
} else {
var1 = var_node->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
{
var2 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_atid]))(var_node); /* n_atid on <var_node:ANode(AAnnotation)>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__parser_nodes__AAtid__n_id]))(var2); /* n_id on <var2:AAtid>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__parser_nodes__Token__text]))(var3); /* text on <var3:Token>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__CollectAnnotationsByNameVisitor__name]))(self); /* name on <self:CollectAnnotationsByNameVisitor>*/
}
{
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var5); /* == on <var4:String>*/
}
var = var6;
} else {
var = var_;
}
if (var){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__CollectAnnotationsByNameVisitor__result]))(self); /* result on <self:CollectAnnotationsByNameVisitor>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var7, var_node); /* add on <var7:Array[AAnnotation]>*/
}
} else {
}
RET_LABEL:;
}
/* method parser_nodes#CollectAnnotationsByNameVisitor#init for (self: CollectAnnotationsByNameVisitor) */
void nit__parser_nodes___nit__parser_nodes__CollectAnnotationsByNameVisitor___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes___nit__parser_nodes__CollectAnnotationsByNameVisitor___standard__kernel__Object__init]))(self); /* init on <self:CollectAnnotationsByNameVisitor>*/
}
RET_LABEL:;
}
/* method parser_nodes#ASTDump#last_parent for (self: ASTDump): nullable ANode */
val* nit___nit__ASTDump___last_parent(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASTDump___last_parent].val; /* _last_parent on <self:ASTDump> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASTDump#last_parent= for (self: ASTDump, nullable ANode) */
void nit___nit__ASTDump___last_parent_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASTDump___last_parent].val = p0; /* _last_parent on <self:ASTDump> */
RET_LABEL:;
}
/* method parser_nodes#ASTDump#visit for (self: ASTDump, ANode) */
void nit___nit__ASTDump___Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
val* var /* : nullable ANode */;
val* var_p /* var p: nullable ANode */;
var_n = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ASTDump__last_parent]))(self); /* last_parent on <self:ASTDump>*/
}
var_p = var;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_ordered_tree__OrderedTree__add]))(self, var_p, var_n); /* add on <self:ASTDump>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASTDump__last_parent_61d]))(self, var_n); /* last_parent= on <self:ASTDump>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ASTDump__last_parent_61d]))(self, var_p); /* last_parent= on <self:ASTDump>*/
}
RET_LABEL:;
}
/* method parser_nodes#ASTDump#display for (self: ASTDump, ANode): String */
val* nit___nit__ASTDump___ordered_tree__OrderedTree__display(val* self, val* p0) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_n /* var n: ANode */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
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
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : Location */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var27 /* : Location */;
val* var28 /* : String */;
val* var29 /* : String */;
/* Covariant cast for argument 0 (n) <p0:ANode> isa ANode */
/* <p0:ANode> isa ANode */
var1 = 1; /* easy <p0:ANode> isa ANode*/
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ANode", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 189);
fatal_exit(1);
}
var_n = p0;
/* <var_n:ANode> isa Token */
cltype3 = type_nit__Token.color;
idtype4 = type_nit__Token.id;
if(cltype3 >= var_n->type->table_size) {
var2 = 0;
} else {
var2 = var_n->type->type_table[cltype3] == idtype4;
}
if (var2){
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " \"";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "\" @";
var13 = standard___standard__NativeString___to_s_with_length(var12, 3l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var5)->values[3]=var11;
} else {
var5 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(var_n->class->vft[COLOR_standard__string__Object__class_name]))(var_n); /* class_name on <var_n:ANode(Token)>*/
}
((struct instance_standard__NativeArray*)var5)->values[0]=var14;
{
var15 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__Token__text]))(var_n); /* text on <var_n:ANode(Token)>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__Text__escape_to_c]))(var15); /* escape_to_c on <var15:String>*/
}
((struct instance_standard__NativeArray*)var5)->values[2]=var16;
{
var17 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_n); /* location on <var_n:ANode(Token)>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__Object__to_s]))(var17); /* to_s on <var17:Location>*/
}
((struct instance_standard__NativeArray*)var5)->values[4]=var18;
{
var19 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var = var19;
goto RET_LABEL;
} else {
if (unlikely(varonce20==NULL)) {
var21 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " @";
var25 = standard___standard__NativeString___to_s_with_length(var24, 2l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_n->class->vft[COLOR_standard__string__Object__class_name]))(var_n); /* class_name on <var_n:ANode>*/
}
((struct instance_standard__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var_n); /* location on <var_n:ANode>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27); /* to_s on <var27:Location>*/
}
((struct instance_standard__NativeArray*)var21)->values[2]=var28;
{
var29 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
var = var29;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#parent for (self: ANodes[ANode]): ANode */
val* nit___nit__ANodes___parent(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 203);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#parent= for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___parent_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val = p0; /* _parent on <self:ANodes[ANode]> */
RET_LABEL:;
}
/* method parser_nodes#ANodes#items for (self: ANodes[ANode]): Array[ANode] */
val* nit___nit__ANodes___items(val* self) {
val* var /* : Array[ANode] */;
val* var1 /* : Array[ANode] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#items= for (self: ANodes[ANode], Array[ANode]) */
void nit___nit__ANodes___items_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (items) <p0:Array[ANode]> isa Array[E] */
/* <p0:Array[ANode]> isa Array[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Array__nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANodes___items].val = p0; /* _items on <self:ANodes[ANode]> */
RET_LABEL:;
}
/* method parser_nodes#ANodes#iterator for (self: ANodes[ANode]): Iterator[ANode] */
val* nit___nit__ANodes___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[ANode] */;
val* var1 /* : Array[ANode] */;
val* var2 /* : Iterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:Array[ANode]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#length for (self: ANodes[ANode]): Int */
long nit___nit__ANodes___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[ANode] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var1); /* length on <var1:Array[ANode]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#is_empty for (self: ANodes[ANode]): Bool */
short int nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[ANode] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var1); /* is_empty on <var1:Array[ANode]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#push for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___standard__abstract_collection__Sequence__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var1 /* : Array[ANode] */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 208);
fatal_exit(1);
}
var_e = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANodes__hook_add]))(self, var_e); /* hook_add on <self:ANodes[ANode]>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var1, var_e); /* push on <var1:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#pop for (self: ANodes[ANode]): ANode */
val* nit___nit__ANodes___standard__abstract_collection__Sequence__pop(val* self) {
val* var /* : ANode */;
val* var1 /* : Array[ANode] */;
val* var2 /* : nullable Object */;
val* var_res /* var res: ANode */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Sequence__pop]))(var1); /* pop on <var1:Array[ANode]>*/
}
var_res = var2;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANodes__hook_remove]))(self, var_res); /* hook_remove on <self:ANodes[ANode]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#unshift for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___standard__abstract_collection__Sequence__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var1 /* : Array[ANode] */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 219);
fatal_exit(1);
}
var_e = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANodes__hook_add]))(self, var_e); /* hook_add on <self:ANodes[ANode]>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Sequence__unshift]))(var1, var_e); /* unshift on <var1:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#shift for (self: ANodes[ANode]): ANode */
val* nit___nit__ANodes___standard__abstract_collection__Sequence__shift(val* self) {
val* var /* : ANode */;
val* var1 /* : Array[ANode] */;
val* var2 /* : nullable Object */;
val* var_res /* var res: ANode */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Sequence__shift]))(var1); /* shift on <var1:Array[ANode]>*/
}
var_res = var2;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANodes__hook_remove]))(self, var_res); /* hook_remove on <self:ANodes[ANode]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#has for (self: ANodes[ANode], ANode): Bool */
short int nit___nit__ANodes___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var2 /* : Array[ANode] */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 230);
fatal_exit(1);
}
var_e = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var2, var_e); /* has on <var2:Array[ANode]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#[] for (self: ANodes[ANode], Int): ANode */
val* nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : ANode */;
long var_index /* var index: Int */;
val* var1 /* : Array[ANode] */;
val* var2 /* : nullable Object */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
var2 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, var_index); /* [] on <var1:Array[ANode]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#[]= for (self: ANodes[ANode], Int, ANode) */
void nit___nit__ANodes___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_e /* var e: ANode */;
val* var1 /* : nullable Object */;
val* var2 /* : Array[ANode] */;
/* Covariant cast for argument 1 (e) <p1:ANode> isa E */
/* <p1:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 238);
fatal_exit(1);
}
var_index = p0;
var_e = p1;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, var_index); /* [] on <self:ANodes[ANode]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANodes__hook_remove]))(self, var1); /* hook_remove on <self:ANodes[ANode]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANodes__hook_add]))(self, var_e); /* hook_add on <self:ANodes[ANode]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var2->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var2, var_index, var_e); /* []= on <var2:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#remove_at for (self: ANodes[ANode], Int) */
void nit___nit__ANodes___standard__abstract_collection__Sequence__remove_at(val* self, long p0) {
long var_index /* var index: Int */;
val* var /* : Array[ANode] */;
val* var1 /* : nullable Object */;
val* var2 /* : Array[ANode] */;
var_index = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
var1 = ((val*(*)(val* self, long p0))(var->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var, var_index); /* [] on <var:Array[ANode]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANodes__hook_remove]))(self, var1); /* hook_remove on <self:ANodes[ANode]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__items]))(self); /* items on <self:ANodes[ANode]>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_standard__abstract_collection__Sequence__remove_at]))(var2, var_index); /* remove_at on <var2:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_add for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___hook_add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var1 /* : ANode */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 249);
fatal_exit(1);
}
var_e = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__parent]))(self); /* parent on <self:ANodes[ANode]>*/
}
{
((void(*)(val* self, val* p0))(var_e->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_e, var1); /* parent= on <var_e:ANode>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_remove for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___hook_remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var1 /* : nullable ANode */;
val* var2 /* : ANode */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 254);
fatal_exit(1);
}
var_e = p0;
{
var1 = ((val*(*)(val* self))(var_e->class->vft[COLOR_nit__parser_nodes__ANode__parent]))(var_e); /* parent on <var_e:ANode>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__parent]))(self); /* parent on <self:ANodes[ANode]>*/
}
if (var1 == NULL) {
var3 = 0; /* <var2:ANode> cannot be null */
} else {
var4 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:nullable ANode>*/
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 256);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_e->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_e, ((val*)NULL)); /* parent= on <var_e:ANode>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#unsafe_add_all for (self: ANodes[ANode], Collection[Object]) */
void nit___nit__ANodes___unsafe_add_all(val* self, val* p0) {
val* var_nodes /* var nodes: Collection[Object] */;
val* var /* : ANode */;
val* var_parent /* var parent: ANode */;
val* var_ /* var : Collection[Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
var_nodes = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__parent]))(self); /* parent on <self:ANodes[ANode]>*/
}
var_parent = var;
var_ = var_nodes;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Object]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[Object]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[Object]>*/
}
var_n = var4;
/* <var_n:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)var_n&3)?type_info[((long)var_n&3)]:var_n->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_n&3)?type_info[((long)var_n&3)]:var_n->type)->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 265);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(self, var_n); /* add on <self:ANodes[ANode]>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_n, var_parent); /* parent= on <var_n:Object(ANode)>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[Object]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#replace_child for (self: ANodes[ANode], ANode, nullable ANode): Bool */
short int nit___nit__ANodes___replace_child(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var1 /* : ANode */;
val* var_parent /* var parent: ANode */;
long var_i /* var i: Int */;
long var2 /* : Int */;
long var_ /* var : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const struct type* type_struct;
long var14 /* : Int */;
var_old_child = p0;
var_new_child = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANodes__parent]))(self); /* parent on <self:ANodes[ANode]>*/
}
var_parent = var1;
var_i = 0l;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:ANodes[ANode]>*/
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var5 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var6 = var_i < var_;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:ANodes[ANode]>*/
}
{
var8 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var7, var_old_child); /* == on <var7:nullable Object(ANode)>*/
}
if (var8){
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_new_child->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_new_child, ((val*)NULL)); /* != on <var_new_child:nullable ANode>*/
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode(ANode)> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype12 = type_struct->color;
idtype13 = type_struct->id;
if(cltype12 >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype12] == idtype13;
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 277);
fatal_exit(1);
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(self, var_i, var_new_child); /* []= on <self:ANodes[ANode]>*/
}
{
((void(*)(val* self, val* p0))(var_new_child->class->vft[COLOR_nit__parser_nodes__ANode__parent_61d]))(var_new_child, var_parent); /* parent= on <var_new_child:nullable ANode(ANode)>*/
}
} else {
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__Sequence__remove_at]))(self, var_i); /* remove_at on <self:ANodes[ANode]>*/
}
}
var = 1;
goto RET_LABEL;
} else {
}
var14 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var14;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#visit_all for (self: ANodes[ANode], Visitor) */
void nit___nit__ANodes___visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var_ /* var : ANodes[ANode] */;
val* var /* : Iterator[nullable Object] */;
val* var_1 /* var : Iterator[ANode] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_n /* var n: ANode */;
var_v = p0;
var_ = self;
{
var = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[ANode]>*/
}
var_1 = var;
for(;;) {
{
var2 = ((short int(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_1); /* is_ok on <var_1:Iterator[ANode]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_1); /* item on <var_1:Iterator[ANode]>*/
}
var_n = var3;
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__parser_nodes__Visitor__enter_visit]))(var_v, var_n); /* enter_visit on <var_v:Visitor>*/
}
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_1); /* next on <var_1:Iterator[ANode]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_1); /* finish on <var_1:Iterator[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#init for (self: ANodes[ANode]) */
void nit___nit__ANodes___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__ANodes___standard__kernel__Object__init]))(self); /* init on <self:ANodes[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#Token#text for (self: Token): String */
val* nit___nit__Token___text(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "text", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 300);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#text= for (self: Token, String) */
void nit___nit__Token___text_61d(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "text=", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 303);
fatal_exit(1);
RET_LABEL:;
}
/* method parser_nodes#Token#prev_token for (self: Token): nullable Token */
val* nit___nit__Token___prev_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val; /* _prev_token on <self:Token> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#prev_token= for (self: Token, nullable Token) */
void nit___nit__Token___prev_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = p0; /* _prev_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#next_token for (self: Token): nullable Token */
val* nit___nit__Token___next_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__Token___next_token].val; /* _next_token on <self:Token> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#next_token= for (self: Token, nullable Token) */
void nit___nit__Token___next_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = p0; /* _next_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#blank_before for (self: Token): String */
val* nit___nit__Token___blank_before(val* self) {
val* var /* : String */;
val* var1 /* : nullable Token */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : nullable Token */;
val* var8 /* : Location */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_from /* var from: Int */;
val* var14 /* : Location */;
long var15 /* : Int */;
long var_to /* var to: Int */;
val* var16 /* : Location */;
val* var17 /* : nullable SourceFile */;
val* var18 /* : String */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__prev_token]))(self); /* prev_token on <self:Token>*/
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable Token>*/
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__prev_token]))(self); /* prev_token on <self:Token>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 318);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var7); /* location on <var7:nullable Token>*/
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_nit__location__Location__pend]))(var8); /* pend on <var8:Location>*/
}
{
{ /* Inline kernel#Int#+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var13 = var9 + 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_from = var10;
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:Token>*/
}
{
var15 = ((long(*)(val* self))(var14->class->vft[COLOR_nit__location__Location__pstart]))(var14); /* pstart on <var14:Location>*/
}
var_to = var15;
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:Token>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__location__Location__file]))(var16); /* file on <var16:Location>*/
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 320);
fatal_exit(1);
} else {
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__location__SourceFile__string]))(var17); /* string on <var17:nullable SourceFile>*/
}
{
{ /* Inline kernel#Int#- (var_to,var_from) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var21 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var25 = var_to - var_from;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
var26 = ((val*(*)(val* self, long p0, long p1))(var18->class->vft[COLOR_standard__string__Text__substring]))(var18, var_from, var19); /* substring on <var18:String>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#to_s for (self: Token): String */
val* nit___nit__Token___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "\'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__text]))(self); /* text on <self:Token>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#visit_all for (self: Token, Visitor) */
void nit___nit__Token___ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_nodes#Token#replace_child for (self: Token, ANode, nullable ANode) */
void nit___nit__Token___ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_nodes#SourceFile#first_token for (self: SourceFile): nullable Token */
val* nit__parser_nodes___SourceFile___first_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__SourceFile___first_token].val; /* _first_token on <self:SourceFile> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#SourceFile#first_token= for (self: SourceFile, nullable Token) */
void nit__parser_nodes___SourceFile___first_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__SourceFile___first_token].val = p0; /* _first_token on <self:SourceFile> */
RET_LABEL:;
}
/* method parser_nodes#SourceFile#last_token for (self: SourceFile): nullable Token */
val* nit__parser_nodes___SourceFile___last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__SourceFile___last_token].val; /* _last_token on <self:SourceFile> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#SourceFile#last_token= for (self: SourceFile, nullable Token) */
void nit__parser_nodes___SourceFile___last_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__SourceFile___last_token].val = p0; /* _last_token on <self:SourceFile> */
RET_LABEL:;
}
/* method parser_nodes#Prod#n_annotations for (self: Prod): nullable AAnnotations */
val* nit___nit__Prod___n_annotations(val* self) {
val* var /* : nullable AAnnotations */;
val* var1 /* : nullable AAnnotations */;
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:Prod> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Prod#n_annotations= for (self: Prod, nullable AAnnotations) */
void nit___nit__Prod___n_annotations_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = p0; /* _n_annotations on <self:Prod> */
RET_LABEL:;
}
/* method parser_nodes#Prod#get_annotations for (self: Prod, String): Array[AAnnotation] */
val* nit___nit__Prod___get_annotations(val* self, val* p0) {
val* var /* : Array[AAnnotation] */;
val* var_name /* var name: String */;
val* var1 /* : Array[AAnnotation] */;
val* var_res /* var res: Array[AAnnotation] */;
val* var2 /* : nullable AAnnotations */;
val* var_nas /* var nas: nullable AAnnotations */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : ANodes[AAnnotation] */;
val* var_ /* var : ANodes[AAnnotation] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[AAnnotation] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var10 /* : String */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var14 /* : ANodes[APropdef] */;
val* var_15 /* var : ANodes[APropdef] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[APropdef] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_na20 /* var na: APropdef */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : String */;
short int var25 /* : Bool */;
var_name = p0;
var1 = NEW_standard__Array(&type_standard__Array__nit__AAnnotation);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[AAnnotation]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Prod__n_annotations]))(self); /* n_annotations on <self:Prod>*/
}
var_nas = var2;
if (var_nas == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_nas->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_nas, ((val*)NULL)); /* != on <var_nas:nullable AAnnotations>*/
var3 = var4;
}
if (var3){
{
var5 = ((val*(*)(val* self))(var_nas->class->vft[COLOR_nit__parser_nodes__AAnnotations__n_items]))(var_nas); /* n_items on <var_nas:nullable AAnnotations(AAnnotations)>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:ANodes[AAnnotation]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[AAnnotation]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[AAnnotation]>*/
}
var_na = var9;
{
var10 = ((val*(*)(val* self))(var_na->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(var_na); /* name on <var_na:AAnnotation>*/
}
{
var11 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var10, var_name); /* != on <var10:String>*/
}
if (var11){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_na); /* add on <var_res:Array[AAnnotation]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[AAnnotation]>*/
}
} else {
goto BREAK_label12;
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[AAnnotation]>*/
}
} else {
}
/* <self:Prod> isa AClassdef */
cltype = type_nit__AClassdef.color;
idtype = type_nit__AClassdef.id;
if(cltype >= self->type->table_size) {
var13 = 0;
} else {
var13 = self->type->type_table[cltype] == idtype;
}
if (var13){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:Prod(AClassdef)>*/
}
var_15 = var14;
{
var16 = ((val*(*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_15); /* iterator on <var_15:ANodes[APropdef]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[APropdef]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[APropdef]>*/
}
var_na20 = var19;
/* <var_na20:APropdef> isa AAnnotPropdef */
cltype22 = type_nit__AAnnotPropdef.color;
idtype23 = type_nit__AAnnotPropdef.id;
if(cltype22 >= var_na20->type->table_size) {
var21 = 0;
} else {
var21 = var_na20->type->type_table[cltype22] == idtype23;
}
if (var21){
{
var24 = ((val*(*)(val* self))(var_na20->class->vft[COLOR_nit__parser_nodes__AAnnotation__name]))(var_na20); /* name on <var_na20:APropdef(AAnnotPropdef)>*/
}
{
var25 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var24, var_name); /* != on <var24:String>*/
}
if (var25){
goto BREAK_label26;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_na20); /* add on <var_res:Array[AAnnotation]>*/
}
} else {
}
BREAK_label26: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[APropdef]>*/
}
} else {
goto BREAK_label27;
}
}
BREAK_label27: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[APropdef]>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Prod#replace_with for (self: Prod, ANode) */
void nit___nit__Prod___ANode__replace_with(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Location */;
var_n = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit___nit__Prod___ANode__replace_with]))(self, p0); /* replace_with on <self:Prod>*/
}
/* <var_n:ANode> isa Prod */
cltype = type_nit__Prod.color;
idtype = type_nit__Prod.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 372);
fatal_exit(1);
}
var2 = var_n->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <var_n:ANode(Prod)> */
var3 = !var2;
var_ = var3;
if (var3){
var4 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <self:Prod> */
var1 = var4;
} else {
var1 = var_;
}
if (var1){
var5 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:Prod> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 373);
fatal_exit(1);
}
var_n->attrs[COLOR_nit__parser_nodes__ANode___location].val = var5; /* _location on <var_n:ANode(Prod)> */
} else {
}
RET_LABEL:;
}
/* method parser_nodes#Visitor#visit for (self: Visitor, ANode) */
void nit___nit__Visitor___visit(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "visit", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 379);
fatal_exit(1);
RET_LABEL:;
}
/* method parser_nodes#Visitor#enter_visit for (self: Visitor, nullable ANode) */
void nit___nit__Visitor___enter_visit(val* self, val* p0) {
val* var_e /* var e: nullable ANode */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_e = p0;
if (var_e == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e, ((val*)NULL)); /* == on <var_e:nullable ANode>*/
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val; /* _current_node on <self:Visitor> */
var_old = var2;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var_e; /* _current_node on <self:Visitor> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Visitor__visit]))(self, var_e); /* visit on <self:Visitor>*/
}
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var_old; /* _current_node on <self:Visitor> */
RET_LABEL:;
}
/* method parser_nodes#Visitor#current_node for (self: Visitor): nullable ANode */
val* nit___nit__Visitor___current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val; /* _current_node on <self:Visitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Visitor#current_node= for (self: Visitor, nullable ANode) */
void nit___nit__Visitor___current_node_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = p0; /* _current_node on <self:Visitor> */
RET_LABEL:;
}
/* method parser_nodes#TEol#to_s for (self: TEol): String */
val* nit___nit__TEol___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "end of line";
var3 = standard___standard__NativeString___to_s_with_length(var2, 11l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenKeyword#to_s for (self: TokenKeyword): String */
val* nit___nit__TokenKeyword___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "keyword \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 9l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__text]))(self); /* text on <self:TokenKeyword>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenOperator#to_s for (self: TokenOperator): String */
val* nit___nit__TokenOperator___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "operator \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 10l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__text]))(self); /* text on <self:TokenOperator>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TClassid#to_s for (self: TClassid): String */
val* nit___nit__TClassid___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "type identifier \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 17l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__text]))(self); /* text on <self:TClassid>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TId#to_s for (self: TId): String */
val* nit___nit__TId___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "identifier \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 12l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__text]))(self); /* text on <self:TId>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TAttrid#to_s for (self: TAttrid): String */
val* nit___nit__TAttrid___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "attribute \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 11l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__text]))(self); /* text on <self:TAttrid>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenLiteral#to_s for (self: TokenLiteral): String */
val* nit___nit__TokenLiteral___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "literal value \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 15l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__text]))(self); /* text on <self:TokenLiteral>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadString#to_s for (self: TBadString): String */
val* nit___nit__TBadString___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "malformed string ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 17l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__text]))(self); /* text on <self:TBadString>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadChar#to_s for (self: TBadChar): String */
val* nit___nit__TBadChar___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "malformed character ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 20l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__Token__text]))(self); /* text on <self:TBadChar>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#EOF#to_s for (self: EOF): String */
val* nit___nit__EOF___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "end of file";
var3 = standard___standard__NativeString___to_s_with_length(var2, 11l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_moduledecl for (self: AModule): nullable AModuledecl */
val* nit___nit__AModule___n_moduledecl(val* self) {
val* var /* : nullable AModuledecl */;
val* var1 /* : nullable AModuledecl */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_moduledecl= for (self: AModule, nullable AModuledecl) */
void nit___nit__AModule___n_moduledecl_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val = p0; /* _n_moduledecl on <self:AModule> */
RET_LABEL:;
}
/* method parser_nodes#AModule#n_imports for (self: AModule): ANodes[AImport] */
val* nit___nit__AModule___n_imports(val* self) {
val* var /* : ANodes[AImport] */;
val* var1 /* : ANodes[AImport] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1026);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_imports= for (self: AModule, ANodes[AImport]) */
void nit___nit__AModule___n_imports_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val = p0; /* _n_imports on <self:AModule> */
RET_LABEL:;
}
/* method parser_nodes#AModule#n_extern_code_blocks for (self: AModule): ANodes[AExternCodeBlock] */
val* nit___nit__AModule___n_extern_code_blocks(val* self) {
val* var /* : ANodes[AExternCodeBlock] */;
val* var1 /* : ANodes[AExternCodeBlock] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1029);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_extern_code_blocks= for (self: AModule, ANodes[AExternCodeBlock]) */
void nit___nit__AModule___n_extern_code_blocks_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AModule___n_extern_code_blocks].val = p0; /* _n_extern_code_blocks on <self:AModule> */
RET_LABEL:;
}
/* method parser_nodes#AModule#n_classdefs for (self: AModule): ANodes[AClassdef] */
val* nit___nit__AModule___n_classdefs(val* self) {
val* var /* : ANodes[AClassdef] */;
val* var1 /* : ANodes[AClassdef] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1032);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_classdefs= for (self: AModule, ANodes[AClassdef]) */
void nit___nit__AModule___n_classdefs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val = p0; /* _n_classdefs on <self:AModule> */
RET_LABEL:;
}
/* method parser_nodes#ADefinition#n_doc for (self: ADefinition): nullable ADoc */
val* nit___nit__ADefinition___n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ADefinition> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADefinition#n_doc= for (self: ADefinition, nullable ADoc) */
void nit___nit__ADefinition___n_doc_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = p0; /* _n_doc on <self:ADefinition> */
RET_LABEL:;
}
/* method parser_nodes#ADefinition#n_kwredef for (self: ADefinition): nullable TKwredef */
val* nit___nit__ADefinition___n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ADefinition> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADefinition#n_kwredef= for (self: ADefinition, nullable TKwredef) */
void nit___nit__ADefinition___n_kwredef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = p0; /* _n_kwredef on <self:ADefinition> */
RET_LABEL:;
}
/* method parser_nodes#ADefinition#n_visibility for (self: ADefinition): nullable AVisibility */
val* nit___nit__ADefinition___n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ADefinition> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADefinition#n_visibility= for (self: ADefinition, nullable AVisibility) */
void nit___nit__ADefinition___n_visibility_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = p0; /* _n_visibility on <self:ADefinition> */
RET_LABEL:;
}
/* method parser_nodes#AModuledecl#n_kwmodule for (self: AModuledecl): TKwmodule */
val* nit___nit__AModuledecl___n_kwmodule(val* self) {
val* var /* : TKwmodule */;
val* var1 /* : TKwmodule */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1053);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_kwmodule= for (self: AModuledecl, TKwmodule) */
void nit___nit__AModuledecl___n_kwmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val = p0; /* _n_kwmodule on <self:AModuledecl> */
RET_LABEL:;
}
/* method parser_nodes#AModuledecl#n_name for (self: AModuledecl): AModuleName */
val* nit___nit__AModuledecl___n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1056);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_name= for (self: AModuledecl, AModuleName) */
void nit___nit__AModuledecl___n_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val = p0; /* _n_name on <self:AModuledecl> */
RET_LABEL:;
}
/* method parser_nodes#AImport#n_visibility for (self: AImport): AVisibility */
val* nit___nit__AImport___n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:AImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1064);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImport#n_visibility= for (self: AImport, AVisibility) */
void nit___nit__AImport___n_visibility_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val = p0; /* _n_visibility on <self:AImport> */
RET_LABEL:;
}
/* method parser_nodes#AImport#n_kwimport for (self: AImport): TKwimport */
val* nit___nit__AImport___n_kwimport(val* self) {
val* var /* : TKwimport */;
val* var1 /* : TKwimport */;
var1 = self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:AImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1067);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImport#n_kwimport= for (self: AImport, TKwimport) */
void nit___nit__AImport___n_kwimport_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val = p0; /* _n_kwimport on <self:AImport> */
RET_LABEL:;
}
/* method parser_nodes#AStdImport#n_name for (self: AStdImport): AModuleName */
val* nit___nit__AStdImport___n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1074);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_name= for (self: AStdImport, AModuleName) */
void nit___nit__AStdImport___n_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val = p0; /* _n_name on <self:AStdImport> */
RET_LABEL:;
}
/* method parser_nodes#ANoImport#n_kwend for (self: ANoImport): TKwend */
val* nit___nit__ANoImport___n_kwend(val* self) {
val* var /* : TKwend */;
val* var1 /* : TKwend */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1081);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANoImport#n_kwend= for (self: ANoImport, TKwend) */
void nit___nit__ANoImport___n_kwend_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val = p0; /* _n_kwend on <self:ANoImport> */
RET_LABEL:;
}
/* method parser_nodes#APublicVisibility#n_kwpublic for (self: APublicVisibility): nullable TKwpublic */
val* nit___nit__APublicVisibility___n_kwpublic(val* self) {
val* var /* : nullable TKwpublic */;
val* var1 /* : nullable TKwpublic */;
var1 = self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val; /* _n_kwpublic on <self:APublicVisibility> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APublicVisibility#n_kwpublic= for (self: APublicVisibility, nullable TKwpublic) */
void nit___nit__APublicVisibility___n_kwpublic_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val = p0; /* _n_kwpublic on <self:APublicVisibility> */
RET_LABEL:;
}
/* method parser_nodes#APublicVisibility#init for (self: APublicVisibility) */
void nit___nit__APublicVisibility___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__APublicVisibility___standard__kernel__Object__init]))(self); /* init on <self:APublicVisibility>*/
}
RET_LABEL:;
}
/* method parser_nodes#APrivateVisibility#n_kwprivate for (self: APrivateVisibility): TKwprivate */
val* nit___nit__APrivateVisibility___n_kwprivate(val* self) {
val* var /* : TKwprivate */;
val* var1 /* : TKwprivate */;
var1 = self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprivate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1104);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APrivateVisibility#n_kwprivate= for (self: APrivateVisibility, TKwprivate) */
void nit___nit__APrivateVisibility___n_kwprivate_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val = p0; /* _n_kwprivate on <self:APrivateVisibility> */
RET_LABEL:;
}
/* method parser_nodes#AProtectedVisibility#n_kwprotected for (self: AProtectedVisibility): TKwprotected */
val* nit___nit__AProtectedVisibility___n_kwprotected(val* self) {
val* var /* : TKwprotected */;
val* var1 /* : TKwprotected */;
var1 = self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprotected");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1110);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AProtectedVisibility#n_kwprotected= for (self: AProtectedVisibility, TKwprotected) */
void nit___nit__AProtectedVisibility___n_kwprotected_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val = p0; /* _n_kwprotected on <self:AProtectedVisibility> */
RET_LABEL:;
}
/* method parser_nodes#AIntrudeVisibility#n_kwintrude for (self: AIntrudeVisibility): TKwintrude */
val* nit___nit__AIntrudeVisibility___n_kwintrude(val* self) {
val* var /* : TKwintrude */;
val* var1 /* : TKwintrude */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwintrude");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1116);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIntrudeVisibility#n_kwintrude= for (self: AIntrudeVisibility, TKwintrude) */
void nit___nit__AIntrudeVisibility___n_kwintrude_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val = p0; /* _n_kwintrude on <self:AIntrudeVisibility> */
RET_LABEL:;
}
/* method parser_nodes#AClassdef#n_propdefs for (self: AClassdef): ANodes[APropdef] */
val* nit___nit__AClassdef___n_propdefs(val* self) {
val* var /* : ANodes[APropdef] */;
val* var1 /* : ANodes[APropdef] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1125);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AClassdef#n_propdefs= for (self: AClassdef, ANodes[APropdef]) */
void nit___nit__AClassdef___n_propdefs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val = p0; /* _n_propdefs on <self:AClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_classkind for (self: AStdClassdef): AClasskind */
val* nit___nit__AStdClassdef___n_classkind(val* self) {
val* var /* : AClasskind */;
val* var1 /* : AClasskind */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1134);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_classkind= for (self: AStdClassdef, AClasskind) */
void nit___nit__AStdClassdef___n_classkind_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val = p0; /* _n_classkind on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_id for (self: AStdClassdef): nullable TClassid */
val* nit___nit__AStdClassdef___n_id(val* self) {
val* var /* : nullable TClassid */;
val* var1 /* : nullable TClassid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_id= for (self: AStdClassdef, nullable TClassid) */
void nit___nit__AStdClassdef___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val = p0; /* _n_id on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_formaldefs for (self: AStdClassdef): ANodes[AFormaldef] */
val* nit___nit__AStdClassdef___n_formaldefs(val* self) {
val* var /* : ANodes[AFormaldef] */;
val* var1 /* : ANodes[AFormaldef] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1140);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_formaldefs= for (self: AStdClassdef, ANodes[AFormaldef]) */
void nit___nit__AStdClassdef___n_formaldefs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val = p0; /* _n_formaldefs on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_extern_code_block for (self: AStdClassdef): nullable AExternCodeBlock */
val* nit___nit__AStdClassdef___n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_extern_code_block= for (self: AStdClassdef, nullable AExternCodeBlock) */
void nit___nit__AStdClassdef___n_extern_code_block_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val = p0; /* _n_extern_code_block on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_kwend for (self: AStdClassdef): TKwend */
val* nit___nit__AStdClassdef___n_kwend(val* self) {
val* var /* : TKwend */;
val* var1 /* : TKwend */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1146);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_kwend= for (self: AStdClassdef, TKwend) */
void nit___nit__AStdClassdef___n_kwend_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val = p0; /* _n_kwend on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_superclasses for (self: AStdClassdef): Array[ASuperPropdef] */
val* nit___nit__AStdClassdef___n_superclasses(val* self) {
val* var /* : Array[ASuperPropdef] */;
val* var1 /* : Array[ASuperPropdef] */;
val* var_ /* var : Array[ASuperPropdef] */;
val* var2 /* : ANodes[APropdef] */;
val* var_3 /* var : ANodes[APropdef] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[APropdef] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_d /* var d: APropdef */;
short int var8 /* : Bool */;
int cltype;
int idtype;
var1 = NEW_standard__Array(&type_standard__Array__nit__ASuperPropdef);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_standard__array__Array__with_capacity]))(var1, 1l); /* with_capacity on <var1:Array[ASuperPropdef]>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AClassdef__n_propdefs]))(self); /* n_propdefs on <self:AStdClassdef>*/
}
var_3 = var2;
{
var4 = ((val*(*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_3); /* iterator on <var_3:ANodes[APropdef]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[APropdef]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[APropdef]>*/
}
var_d = var7;
/* <var_d:APropdef> isa ASuperPropdef */
cltype = type_nit__ASuperPropdef.color;
idtype = type_nit__ASuperPropdef.id;
if(cltype >= var_d->type->table_size) {
var8 = 0;
} else {
var8 = var_d->type->type_table[cltype] == idtype;
}
if (var8){
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_d); /* push on <var_:Array[ASuperPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[APropdef]>*/
}
var = var_;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#hot_location for (self: AStdClassdef): Location */
val* nit___nit__AStdClassdef___ANode__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable TClassid */;
val* var2 /* : Location */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AStdClassdef__n_id]))(self); /* n_id on <self:AStdClassdef>*/
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1153);
fatal_exit(1);
} else {
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var1); /* location on <var1:nullable TClassid>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteClasskind#n_kwclass for (self: AConcreteClasskind): TKwclass */
val* nit___nit__AConcreteClasskind___n_kwclass(val* self) {
val* var /* : TKwclass */;
val* var1 /* : TKwclass */;
var1 = self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1175);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteClasskind#n_kwclass= for (self: AConcreteClasskind, TKwclass) */
void nit___nit__AConcreteClasskind___n_kwclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val = p0; /* _n_kwclass on <self:AConcreteClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AAbstractClasskind#n_kwabstract for (self: AAbstractClasskind): TKwabstract */
val* nit___nit__AAbstractClasskind___n_kwabstract(val* self) {
val* var /* : TKwabstract */;
val* var1 /* : TKwabstract */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabstract");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1183);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAbstractClasskind#n_kwabstract= for (self: AAbstractClasskind, TKwabstract) */
void nit___nit__AAbstractClasskind___n_kwabstract_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val = p0; /* _n_kwabstract on <self:AAbstractClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AAbstractClasskind#n_kwclass for (self: AAbstractClasskind): TKwclass */
val* nit___nit__AAbstractClasskind___n_kwclass(val* self) {
val* var /* : TKwclass */;
val* var1 /* : TKwclass */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1186);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAbstractClasskind#n_kwclass= for (self: AAbstractClasskind, TKwclass) */
void nit___nit__AAbstractClasskind___n_kwclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val = p0; /* _n_kwclass on <self:AAbstractClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AInterfaceClasskind#n_kwinterface for (self: AInterfaceClasskind): TKwinterface */
val* nit___nit__AInterfaceClasskind___n_kwinterface(val* self) {
val* var /* : TKwinterface */;
val* var1 /* : TKwinterface */;
var1 = self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinterface");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1194);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInterfaceClasskind#n_kwinterface= for (self: AInterfaceClasskind, TKwinterface) */
void nit___nit__AInterfaceClasskind___n_kwinterface_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val = p0; /* _n_kwinterface on <self:AInterfaceClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AEnumClasskind#n_kwenum for (self: AEnumClasskind): TKwenum */
val* nit___nit__AEnumClasskind___n_kwenum(val* self) {
val* var /* : TKwenum */;
val* var1 /* : TKwenum */;
var1 = self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1202);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEnumClasskind#n_kwenum= for (self: AEnumClasskind, TKwenum) */
void nit___nit__AEnumClasskind___n_kwenum_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val = p0; /* _n_kwenum on <self:AEnumClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AExternClasskind#n_kwextern for (self: AExternClasskind): TKwextern */
val* nit___nit__AExternClasskind___n_kwextern(val* self) {
val* var /* : TKwextern */;
val* var1 /* : TKwextern */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwextern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1210);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternClasskind#n_kwextern= for (self: AExternClasskind, TKwextern) */
void nit___nit__AExternClasskind___n_kwextern_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val = p0; /* _n_kwextern on <self:AExternClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AExternClasskind#n_kwclass for (self: AExternClasskind): nullable TKwclass */
val* nit___nit__AExternClasskind___n_kwclass(val* self) {
val* var /* : nullable TKwclass */;
val* var1 /* : nullable TKwclass */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternClasskind#n_kwclass= for (self: AExternClasskind, nullable TKwclass) */
void nit___nit__AExternClasskind___n_kwclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val = p0; /* _n_kwclass on <self:AExternClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AFormaldef#n_id for (self: AFormaldef): TClassid */
val* nit___nit__AFormaldef___n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1221);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_id= for (self: AFormaldef, TClassid) */
void nit___nit__AFormaldef___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val = p0; /* _n_id on <self:AFormaldef> */
RET_LABEL:;
}
/* method parser_nodes#AFormaldef#n_type for (self: AFormaldef): nullable AType */
val* nit___nit__AFormaldef___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_type= for (self: AFormaldef, nullable AType) */
void nit___nit__AFormaldef___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val = p0; /* _n_type on <self:AFormaldef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_kwvar for (self: AAttrPropdef): TKwvar */
val* nit___nit__AAttrPropdef___n_kwvar(val* self) {
val* var /* : TKwvar */;
val* var1 /* : TKwvar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1238);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_kwvar= for (self: AAttrPropdef, TKwvar) */
void nit___nit__AAttrPropdef___n_kwvar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val = p0; /* _n_kwvar on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_id2 for (self: AAttrPropdef): TId */
val* nit___nit__AAttrPropdef___n_id2(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1241);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_id2= for (self: AAttrPropdef, TId) */
void nit___nit__AAttrPropdef___n_id2_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val = p0; /* _n_id2 on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_type for (self: AAttrPropdef): nullable AType */
val* nit___nit__AAttrPropdef___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_type= for (self: AAttrPropdef, nullable AType) */
void nit___nit__AAttrPropdef___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val = p0; /* _n_type on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_expr for (self: AAttrPropdef): nullable AExpr */
val* nit___nit__AAttrPropdef___n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_expr= for (self: AAttrPropdef, nullable AExpr) */
void nit___nit__AAttrPropdef___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val = p0; /* _n_expr on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_block for (self: AAttrPropdef): nullable AExpr */
val* nit___nit__AAttrPropdef___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_block= for (self: AAttrPropdef, nullable AExpr) */
void nit___nit__AAttrPropdef___n_block_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val = p0; /* _n_block on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#hot_location for (self: AAttrPropdef): Location */
val* nit___nit__AAttrPropdef___ANode__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : TId */;
val* var2 /* : Location */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAttrPropdef__n_id2]))(self); /* n_id2 on <self:AAttrPropdef>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var1); /* location on <var1:TId>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwmeth for (self: AMethPropdef): nullable TKwmeth */
val* nit___nit__AMethPropdef___n_kwmeth(val* self) {
val* var /* : nullable TKwmeth */;
val* var1 /* : nullable TKwmeth */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwmeth= for (self: AMethPropdef, nullable TKwmeth) */
void nit___nit__AMethPropdef___n_kwmeth_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val = p0; /* _n_kwmeth on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_kwinit for (self: AMethPropdef): nullable TKwinit */
val* nit___nit__AMethPropdef___n_kwinit(val* self) {
val* var /* : nullable TKwinit */;
val* var1 /* : nullable TKwinit */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwinit= for (self: AMethPropdef, nullable TKwinit) */
void nit___nit__AMethPropdef___n_kwinit_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val = p0; /* _n_kwinit on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_kwnew for (self: AMethPropdef): nullable TKwnew */
val* nit___nit__AMethPropdef___n_kwnew(val* self) {
val* var /* : nullable TKwnew */;
val* var1 /* : nullable TKwnew */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwnew= for (self: AMethPropdef, nullable TKwnew) */
void nit___nit__AMethPropdef___n_kwnew_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val = p0; /* _n_kwnew on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_methid for (self: AMethPropdef): nullable AMethid */
val* nit___nit__AMethPropdef___n_methid(val* self) {
val* var /* : nullable AMethid */;
val* var1 /* : nullable AMethid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_methid= for (self: AMethPropdef, nullable AMethid) */
void nit___nit__AMethPropdef___n_methid_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val = p0; /* _n_methid on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_signature for (self: AMethPropdef): nullable ASignature */
val* nit___nit__AMethPropdef___n_signature(val* self) {
val* var /* : nullable ASignature */;
val* var1 /* : nullable ASignature */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_signature= for (self: AMethPropdef, nullable ASignature) */
void nit___nit__AMethPropdef___n_signature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val = p0; /* _n_signature on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_block for (self: AMethPropdef): nullable AExpr */
val* nit___nit__AMethPropdef___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_block= for (self: AMethPropdef, nullable AExpr) */
void nit___nit__AMethPropdef___n_block_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = p0; /* _n_block on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_extern_calls for (self: AMethPropdef): nullable AExternCalls */
val* nit___nit__AMethPropdef___n_extern_calls(val* self) {
val* var /* : nullable AExternCalls */;
val* var1 /* : nullable AExternCalls */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_extern_calls= for (self: AMethPropdef, nullable AExternCalls) */
void nit___nit__AMethPropdef___n_extern_calls_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val = p0; /* _n_extern_calls on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_extern_code_block for (self: AMethPropdef): nullable AExternCodeBlock */
val* nit___nit__AMethPropdef___n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_extern_code_block= for (self: AMethPropdef, nullable AExternCodeBlock) */
void nit___nit__AMethPropdef___n_extern_code_block_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val = p0; /* _n_extern_code_block on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#hot_location for (self: AMethPropdef): Location */
val* nit___nit__AMethPropdef___ANode__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable AMethid */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable AMethid */;
val* var5 /* : Location */;
val* var6 /* : nullable TKwinit */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable TKwinit */;
val* var10 /* : Location */;
val* var11 /* : nullable TKwnew */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable TKwnew */;
val* var15 /* : Location */;
val* var16 /* : Location */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(self); /* n_methid on <self:AMethPropdef>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable AMethid>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_methid]))(self); /* n_methid on <self:AMethPropdef>*/
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1290);
fatal_exit(1);
} else {
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var4); /* location on <var4:nullable AMethid>*/
}
var = var5;
goto RET_LABEL;
} else {
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwinit]))(self); /* n_kwinit on <self:AMethPropdef>*/
}
if (var6 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var6, ((val*)NULL)); /* != on <var6:nullable TKwinit>*/
var7 = var8;
}
if (var7){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwinit]))(self); /* n_kwinit on <self:AMethPropdef>*/
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1292);
fatal_exit(1);
} else {
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var9); /* location on <var9:nullable TKwinit>*/
}
var = var10;
goto RET_LABEL;
} else {
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwnew]))(self); /* n_kwnew on <self:AMethPropdef>*/
}
if (var11 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var11, ((val*)NULL)); /* != on <var11:nullable TKwnew>*/
var12 = var13;
}
if (var12){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_kwnew]))(self); /* n_kwnew on <self:AMethPropdef>*/
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1294);
fatal_exit(1);
} else {
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__parser_nodes__ANode__location]))(var14); /* location on <var14:nullable TKwnew>*/
}
var = var15;
goto RET_LABEL;
} else {
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__location]))(self); /* location on <self:AMethPropdef>*/
}
var = var16;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperPropdef#n_kwsuper for (self: ASuperPropdef): TKwsuper */
val* nit___nit__ASuperPropdef___n_kwsuper(val* self) {
val* var /* : TKwsuper */;
val* var1 /* : TKwsuper */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_kwsuper].val; /* _n_kwsuper on <self:ASuperPropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1315);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperPropdef#n_kwsuper= for (self: ASuperPropdef, TKwsuper) */
void nit___nit__ASuperPropdef___n_kwsuper_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_kwsuper].val = p0; /* _n_kwsuper on <self:ASuperPropdef> */
RET_LABEL:;
}
/* method parser_nodes#ASuperPropdef#n_type for (self: ASuperPropdef): AType */
val* nit___nit__ASuperPropdef___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <self:ASuperPropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1318);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperPropdef#n_type= for (self: ASuperPropdef, AType) */
void nit___nit__ASuperPropdef___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val = p0; /* _n_type on <self:ASuperPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AExternCalls#n_kwimport for (self: AExternCalls): TKwimport */
val* nit___nit__AExternCalls___n_kwimport(val* self) {
val* var /* : TKwimport */;
val* var1 /* : TKwimport */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1327);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCalls#n_kwimport= for (self: AExternCalls, TKwimport) */
void nit___nit__AExternCalls___n_kwimport_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val = p0; /* _n_kwimport on <self:AExternCalls> */
RET_LABEL:;
}
/* method parser_nodes#AExternCalls#n_extern_calls for (self: AExternCalls): ANodes[AExternCall] */
val* nit___nit__AExternCalls___n_extern_calls(val* self) {
val* var /* : ANodes[AExternCall] */;
val* var1 /* : ANodes[AExternCall] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1330);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCalls#n_extern_calls= for (self: AExternCalls, ANodes[AExternCall]) */
void nit___nit__AExternCalls___n_extern_calls_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_extern_calls].val = p0; /* _n_extern_calls on <self:AExternCalls> */
RET_LABEL:;
}
/* method parser_nodes#ALocalPropExternCall#n_methid for (self: ALocalPropExternCall): AMethid */
val* nit___nit__ALocalPropExternCall___n_methid(val* self) {
val* var /* : AMethid */;
val* var1 /* : AMethid */;
var1 = self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1348);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALocalPropExternCall#n_methid= for (self: ALocalPropExternCall, AMethid) */
void nit___nit__ALocalPropExternCall___n_methid_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val = p0; /* _n_methid on <self:ALocalPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#n_type for (self: AFullPropExternCall): AType */
val* nit___nit__AFullPropExternCall___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1356);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFullPropExternCall#n_type= for (self: AFullPropExternCall, AType) */
void nit___nit__AFullPropExternCall___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val = p0; /* _n_type on <self:AFullPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#n_dot for (self: AFullPropExternCall): nullable TDot */
val* nit___nit__AFullPropExternCall___n_dot(val* self) {
val* var /* : nullable TDot */;
val* var1 /* : nullable TDot */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFullPropExternCall#n_dot= for (self: AFullPropExternCall, nullable TDot) */
void nit___nit__AFullPropExternCall___n_dot_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val = p0; /* _n_dot on <self:AFullPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#n_methid for (self: AFullPropExternCall): AMethid */
val* nit___nit__AFullPropExternCall___n_methid(val* self) {
val* var /* : AMethid */;
val* var1 /* : AMethid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1362);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFullPropExternCall#n_methid= for (self: AFullPropExternCall, AMethid) */
void nit___nit__AFullPropExternCall___n_methid_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val = p0; /* _n_methid on <self:AFullPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AInitPropExternCall#n_type for (self: AInitPropExternCall): AType */
val* nit___nit__AInitPropExternCall___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1370);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitPropExternCall#n_type= for (self: AInitPropExternCall, AType) */
void nit___nit__AInitPropExternCall___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val = p0; /* _n_type on <self:AInitPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ASuperExternCall#n_kwsuper for (self: ASuperExternCall): TKwsuper */
val* nit___nit__ASuperExternCall___n_kwsuper(val* self) {
val* var /* : TKwsuper */;
val* var1 /* : TKwsuper */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1378);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExternCall#n_kwsuper= for (self: ASuperExternCall, TKwsuper) */
void nit___nit__ASuperExternCall___n_kwsuper_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val = p0; /* _n_kwsuper on <self:ASuperExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_from_type for (self: ACastAsExternCall): AType */
val* nit___nit__ACastAsExternCall___n_from_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1391);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_from_type= for (self: ACastAsExternCall, AType) */
void nit___nit__ACastAsExternCall___n_from_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_from_type].val = p0; /* _n_from_type on <self:ACastAsExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_dot for (self: ACastAsExternCall): nullable TDot */
val* nit___nit__ACastAsExternCall___n_dot(val* self) {
val* var /* : nullable TDot */;
val* var1 /* : nullable TDot */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_dot= for (self: ACastAsExternCall, nullable TDot) */
void nit___nit__ACastAsExternCall___n_dot_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_dot].val = p0; /* _n_dot on <self:ACastAsExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_kwas for (self: ACastAsExternCall): TKwas */
val* nit___nit__ACastAsExternCall___n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1397);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_kwas= for (self: ACastAsExternCall, TKwas) */
void nit___nit__ACastAsExternCall___n_kwas_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_kwas].val = p0; /* _n_kwas on <self:ACastAsExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_to_type for (self: ACastAsExternCall): AType */
val* nit___nit__ACastAsExternCall___n_to_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1400);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_to_type= for (self: ACastAsExternCall, AType) */
void nit___nit__ACastAsExternCall___n_to_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_to_type].val = p0; /* _n_to_type on <self:ACastAsExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#n_type for (self: AAsNullableExternCall): AType */
val* nit___nit__AAsNullableExternCall___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1408);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNullableExternCall#n_type= for (self: AAsNullableExternCall, AType) */
void nit___nit__AAsNullableExternCall___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_type].val = p0; /* _n_type on <self:AAsNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#n_kwas for (self: AAsNullableExternCall): TKwas */
val* nit___nit__AAsNullableExternCall___n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1411);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNullableExternCall#n_kwas= for (self: AAsNullableExternCall, TKwas) */
void nit___nit__AAsNullableExternCall___n_kwas_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwas].val = p0; /* _n_kwas on <self:AAsNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#n_kwnullable for (self: AAsNullableExternCall): TKwnullable */
val* nit___nit__AAsNullableExternCall___n_kwnullable(val* self) {
val* var /* : TKwnullable */;
val* var1 /* : TKwnullable */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1414);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNullableExternCall#n_kwnullable= for (self: AAsNullableExternCall, TKwnullable) */
void nit___nit__AAsNullableExternCall___n_kwnullable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsNullableExternCall___n_kwnullable].val = p0; /* _n_kwnullable on <self:AAsNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_type for (self: AAsNotNullableExternCall): AType */
val* nit___nit__AAsNotNullableExternCall___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1422);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_type= for (self: AAsNotNullableExternCall, AType) */
void nit___nit__AAsNotNullableExternCall___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_type].val = p0; /* _n_type on <self:AAsNotNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwas for (self: AAsNotNullableExternCall): TKwas */
val* nit___nit__AAsNotNullableExternCall___n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1425);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwas= for (self: AAsNotNullableExternCall, TKwas) */
void nit___nit__AAsNotNullableExternCall___n_kwas_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwas].val = p0; /* _n_kwas on <self:AAsNotNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnot for (self: AAsNotNullableExternCall): TKwnot */
val* nit___nit__AAsNotNullableExternCall___n_kwnot(val* self) {
val* var /* : TKwnot */;
val* var1 /* : TKwnot */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1428);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnot= for (self: AAsNotNullableExternCall, TKwnot) */
void nit___nit__AAsNotNullableExternCall___n_kwnot_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnot].val = p0; /* _n_kwnot on <self:AAsNotNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnullable for (self: AAsNotNullableExternCall): TKwnullable */
val* nit___nit__AAsNotNullableExternCall___n_kwnullable(val* self) {
val* var /* : TKwnullable */;
val* var1 /* : TKwnullable */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1431);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnullable= for (self: AAsNotNullableExternCall, TKwnullable) */
void nit___nit__AAsNotNullableExternCall___n_kwnullable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = p0; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_kwtype for (self: ATypePropdef): TKwtype */
val* nit___nit__ATypePropdef___n_kwtype(val* self) {
val* var /* : TKwtype */;
val* var1 /* : TKwtype */;
var1 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1439);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_kwtype= for (self: ATypePropdef, TKwtype) */
void nit___nit__ATypePropdef___n_kwtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val = p0; /* _n_kwtype on <self:ATypePropdef> */
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_id for (self: ATypePropdef): TClassid */
val* nit___nit__ATypePropdef___n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1442);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_id= for (self: ATypePropdef, TClassid) */
void nit___nit__ATypePropdef___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val = p0; /* _n_id on <self:ATypePropdef> */
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_type for (self: ATypePropdef): AType */
val* nit___nit__ATypePropdef___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1445);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_type= for (self: ATypePropdef, AType) */
void nit___nit__ATypePropdef___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val = p0; /* _n_type on <self:ATypePropdef> */
RET_LABEL:;
}
/* method parser_nodes#AIdMethid#n_id for (self: AIdMethid): TId */
val* nit___nit__AIdMethid___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1459);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIdMethid#n_id= for (self: AIdMethid, TId) */
void nit___nit__AIdMethid___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val = p0; /* _n_id on <self:AIdMethid> */
RET_LABEL:;
}
/* method parser_nodes#AOperatorMethid#n_op for (self: AOperatorMethid): Token */
val* nit___nit__AOperatorMethid___n_op(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AOperatorMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1467);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOperatorMethid#n_op= for (self: AOperatorMethid, Token) */
void nit___nit__AOperatorMethid___n_op_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AOperatorMethid___n_op].val = p0; /* _n_op on <self:AOperatorMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraMethid#n_obra for (self: ABraMethid): TObra */
val* nit___nit__ABraMethid___n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1569);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraMethid#n_obra= for (self: ABraMethid, TObra) */
void nit___nit__ABraMethid___n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val = p0; /* _n_obra on <self:ABraMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraMethid#n_cbra for (self: ABraMethid): TCbra */
val* nit___nit__ABraMethid___n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1572);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraMethid#n_cbra= for (self: ABraMethid, TCbra) */
void nit___nit__ABraMethid___n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val = p0; /* _n_cbra on <self:ABraMethid> */
RET_LABEL:;
}
/* method parser_nodes#AAssignMethid#n_id for (self: AAssignMethid): TId */
val* nit___nit__AAssignMethid___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1580);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignMethid#n_id= for (self: AAssignMethid, TId) */
void nit___nit__AAssignMethid___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val = p0; /* _n_id on <self:AAssignMethid> */
RET_LABEL:;
}
/* method parser_nodes#AAssignMethid#n_assign for (self: AAssignMethid): TAssign */
val* nit___nit__AAssignMethid___n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1583);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignMethid#n_assign= for (self: AAssignMethid, TAssign) */
void nit___nit__AAssignMethid___n_assign_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val = p0; /* _n_assign on <self:AAssignMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#n_obra for (self: ABraassignMethid): TObra */
val* nit___nit__ABraassignMethid___n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1591);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraassignMethid#n_obra= for (self: ABraassignMethid, TObra) */
void nit___nit__ABraassignMethid___n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val = p0; /* _n_obra on <self:ABraassignMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#n_cbra for (self: ABraassignMethid): TCbra */
val* nit___nit__ABraassignMethid___n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1594);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraassignMethid#n_cbra= for (self: ABraassignMethid, TCbra) */
void nit___nit__ABraassignMethid___n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val = p0; /* _n_cbra on <self:ABraassignMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#n_assign for (self: ABraassignMethid): TAssign */
val* nit___nit__ABraassignMethid___n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1597);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraassignMethid#n_assign= for (self: ABraassignMethid, TAssign) */
void nit___nit__ABraassignMethid___n_assign_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val = p0; /* _n_assign on <self:ABraassignMethid> */
RET_LABEL:;
}
/* method parser_nodes#ASignature#n_opar for (self: ASignature): nullable TOpar */
val* nit___nit__ASignature___n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_opar= for (self: ASignature, nullable TOpar) */
void nit___nit__ASignature___n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val = p0; /* _n_opar on <self:ASignature> */
RET_LABEL:;
}
/* method parser_nodes#ASignature#n_params for (self: ASignature): ANodes[AParam] */
val* nit___nit__ASignature___n_params(val* self) {
val* var /* : ANodes[AParam] */;
val* var1 /* : ANodes[AParam] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1608);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_params= for (self: ASignature, ANodes[AParam]) */
void nit___nit__ASignature___n_params_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val = p0; /* _n_params on <self:ASignature> */
RET_LABEL:;
}
/* method parser_nodes#ASignature#n_cpar for (self: ASignature): nullable TCpar */
val* nit___nit__ASignature___n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_cpar= for (self: ASignature, nullable TCpar) */
void nit___nit__ASignature___n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val = p0; /* _n_cpar on <self:ASignature> */
RET_LABEL:;
}
/* method parser_nodes#ASignature#n_type for (self: ASignature): nullable AType */
val* nit___nit__ASignature___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_type= for (self: ASignature, nullable AType) */
void nit___nit__ASignature___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val = p0; /* _n_type on <self:ASignature> */
RET_LABEL:;
}
/* method parser_nodes#AParam#n_id for (self: AParam): TId */
val* nit___nit__AParam___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1622);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_id= for (self: AParam, TId) */
void nit___nit__AParam___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val = p0; /* _n_id on <self:AParam> */
RET_LABEL:;
}
/* method parser_nodes#AParam#n_type for (self: AParam): nullable AType */
val* nit___nit__AParam___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_type= for (self: AParam, nullable AType) */
void nit___nit__AParam___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val = p0; /* _n_type on <self:AParam> */
RET_LABEL:;
}
/* method parser_nodes#AParam#n_dotdotdot for (self: AParam): nullable TDotdotdot */
val* nit___nit__AParam___n_dotdotdot(val* self) {
val* var /* : nullable TDotdotdot */;
val* var1 /* : nullable TDotdotdot */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_dotdotdot= for (self: AParam, nullable TDotdotdot) */
void nit___nit__AParam___n_dotdotdot_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val = p0; /* _n_dotdotdot on <self:AParam> */
RET_LABEL:;
}
/* method parser_nodes#AType#n_kwnullable for (self: AType): nullable TKwnullable */
val* nit___nit__AType___n_kwnullable(val* self) {
val* var /* : nullable TKwnullable */;
val* var1 /* : nullable TKwnullable */;
var1 = self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_kwnullable= for (self: AType, nullable TKwnullable) */
void nit___nit__AType___n_kwnullable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val = p0; /* _n_kwnullable on <self:AType> */
RET_LABEL:;
}
/* method parser_nodes#AType#n_id for (self: AType): TClassid */
val* nit___nit__AType___n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1638);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_id= for (self: AType, TClassid) */
void nit___nit__AType___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AType___n_id].val = p0; /* _n_id on <self:AType> */
RET_LABEL:;
}
/* method parser_nodes#AType#n_types for (self: AType): ANodes[AType] */
val* nit___nit__AType___n_types(val* self) {
val* var /* : ANodes[AType] */;
val* var1 /* : ANodes[AType] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1641);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_types= for (self: AType, ANodes[AType]) */
void nit___nit__AType___n_types_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AType___n_types].val = p0; /* _n_types on <self:AType> */
RET_LABEL:;
}
/* method parser_nodes#ALabel#n_kwlabel for (self: ALabel): TKwlabel */
val* nit___nit__ALabel___n_kwlabel(val* self) {
val* var /* : TKwlabel */;
val* var1 /* : TKwlabel */;
var1 = self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1649);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_kwlabel= for (self: ALabel, TKwlabel) */
void nit___nit__ALabel___n_kwlabel_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val = p0; /* _n_kwlabel on <self:ALabel> */
RET_LABEL:;
}
/* method parser_nodes#ALabel#n_id for (self: ALabel): nullable TId */
val* nit___nit__ALabel___n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_id= for (self: ALabel, nullable TId) */
void nit___nit__ALabel___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val = p0; /* _n_id on <self:ALabel> */
RET_LABEL:;
}
/* method parser_nodes#ABlockExpr#n_expr for (self: ABlockExpr): ANodes[AExpr] */
val* nit___nit__ABlockExpr___n_expr(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1667);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABlockExpr#n_expr= for (self: ABlockExpr, ANodes[AExpr]) */
void nit___nit__ABlockExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val = p0; /* _n_expr on <self:ABlockExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABlockExpr#n_kwend for (self: ABlockExpr): nullable TKwend */
val* nit___nit__ABlockExpr___n_kwend(val* self) {
val* var /* : nullable TKwend */;
val* var1 /* : nullable TKwend */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABlockExpr#n_kwend= for (self: ABlockExpr, nullable TKwend) */
void nit___nit__ABlockExpr___n_kwend_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val = p0; /* _n_kwend on <self:ABlockExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_kwvar for (self: AVardeclExpr): nullable TKwvar */
val* nit___nit__AVardeclExpr___n_kwvar(val* self) {
val* var /* : nullable TKwvar */;
val* var1 /* : nullable TKwvar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_kwvar= for (self: AVardeclExpr, nullable TKwvar) */
void nit___nit__AVardeclExpr___n_kwvar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val = p0; /* _n_kwvar on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_id for (self: AVardeclExpr): TId */
val* nit___nit__AVardeclExpr___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1682);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_id= for (self: AVardeclExpr, TId) */
void nit___nit__AVardeclExpr___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val = p0; /* _n_id on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_type for (self: AVardeclExpr): nullable AType */
val* nit___nit__AVardeclExpr___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_type= for (self: AVardeclExpr, nullable AType) */
void nit___nit__AVardeclExpr___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val = p0; /* _n_type on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_assign for (self: AVardeclExpr): nullable TAssign */
val* nit___nit__AVardeclExpr___n_assign(val* self) {
val* var /* : nullable TAssign */;
val* var1 /* : nullable TAssign */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_assign= for (self: AVardeclExpr, nullable TAssign) */
void nit___nit__AVardeclExpr___n_assign_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val = p0; /* _n_assign on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_expr for (self: AVardeclExpr): nullable AExpr */
val* nit___nit__AVardeclExpr___n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_expr= for (self: AVardeclExpr, nullable AExpr) */
void nit___nit__AVardeclExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val = p0; /* _n_expr on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AReturnExpr#n_kwreturn for (self: AReturnExpr): nullable TKwreturn */
val* nit___nit__AReturnExpr___n_kwreturn(val* self) {
val* var /* : nullable TKwreturn */;
val* var1 /* : nullable TKwreturn */;
var1 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReturnExpr#n_kwreturn= for (self: AReturnExpr, nullable TKwreturn) */
void nit___nit__AReturnExpr___n_kwreturn_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val = p0; /* _n_kwreturn on <self:AReturnExpr> */
RET_LABEL:;
}
/* method parser_nodes#AReturnExpr#n_expr for (self: AReturnExpr): nullable AExpr */
val* nit___nit__AReturnExpr___n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReturnExpr#n_expr= for (self: AReturnExpr, nullable AExpr) */
void nit___nit__AReturnExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val = p0; /* _n_expr on <self:AReturnExpr> */
RET_LABEL:;
}
/* method parser_nodes#ALabelable#n_label for (self: ALabelable): nullable ALabel */
val* nit___nit__ALabelable___n_label(val* self) {
val* var /* : nullable ALabel */;
val* var1 /* : nullable ALabel */;
var1 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALabelable> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabelable#n_label= for (self: ALabelable, nullable ALabel) */
void nit___nit__ALabelable___n_label_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = p0; /* _n_label on <self:ALabelable> */
RET_LABEL:;
}
/* method parser_nodes#AEscapeExpr#n_expr for (self: AEscapeExpr): nullable AExpr */
val* nit___nit__AEscapeExpr___n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AEscapeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEscapeExpr#n_expr= for (self: AEscapeExpr, nullable AExpr) */
void nit___nit__AEscapeExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AEscapeExpr___n_expr].val = p0; /* _n_expr on <self:AEscapeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABreakExpr#n_kwbreak for (self: ABreakExpr): TKwbreak */
val* nit___nit__ABreakExpr___n_kwbreak(val* self) {
val* var /* : TKwbreak */;
val* var1 /* : TKwbreak */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1727);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABreakExpr#n_kwbreak= for (self: ABreakExpr, TKwbreak) */
void nit___nit__ABreakExpr___n_kwbreak_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val = p0; /* _n_kwbreak on <self:ABreakExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAbortExpr#n_kwabort for (self: AAbortExpr): TKwabort */
val* nit___nit__AAbortExpr___n_kwabort(val* self) {
val* var /* : TKwabort */;
val* var1 /* : TKwabort */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1735);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAbortExpr#n_kwabort= for (self: AAbortExpr, TKwabort) */
void nit___nit__AAbortExpr___n_kwabort_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val = p0; /* _n_kwabort on <self:AAbortExpr> */
RET_LABEL:;
}
/* method parser_nodes#AContinueExpr#n_kwcontinue for (self: AContinueExpr): nullable TKwcontinue */
val* nit___nit__AContinueExpr___n_kwcontinue(val* self) {
val* var /* : nullable TKwcontinue */;
val* var1 /* : nullable TKwcontinue */;
var1 = self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AContinueExpr#n_kwcontinue= for (self: AContinueExpr, nullable TKwcontinue) */
void nit___nit__AContinueExpr___n_kwcontinue_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val = p0; /* _n_kwcontinue on <self:AContinueExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADoExpr#n_kwdo for (self: ADoExpr): TKwdo */
val* nit___nit__ADoExpr___n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1752);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoExpr#n_kwdo= for (self: ADoExpr, TKwdo) */
void nit___nit__ADoExpr___n_kwdo_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val = p0; /* _n_kwdo on <self:ADoExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADoExpr#n_block for (self: ADoExpr): nullable AExpr */
val* nit___nit__ADoExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoExpr#n_block= for (self: ADoExpr, nullable AExpr) */
void nit___nit__ADoExpr___n_block_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val = p0; /* _n_block on <self:ADoExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_kwif for (self: AIfExpr): TKwif */
val* nit___nit__AIfExpr___n_kwif(val* self) {
val* var /* : TKwif */;
val* var1 /* : TKwif */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1763);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_kwif= for (self: AIfExpr, TKwif) */
void nit___nit__AIfExpr___n_kwif_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val = p0; /* _n_kwif on <self:AIfExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_expr for (self: AIfExpr): AExpr */
val* nit___nit__AIfExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1766);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_expr= for (self: AIfExpr, AExpr) */
void nit___nit__AIfExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val = p0; /* _n_expr on <self:AIfExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_then for (self: AIfExpr): nullable AExpr */
val* nit___nit__AIfExpr___n_then(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_then= for (self: AIfExpr, nullable AExpr) */
void nit___nit__AIfExpr___n_then_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val = p0; /* _n_then on <self:AIfExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_else for (self: AIfExpr): nullable AExpr */
val* nit___nit__AIfExpr___n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_else= for (self: AIfExpr, nullable AExpr) */
void nit___nit__AIfExpr___n_else_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val = p0; /* _n_else on <self:AIfExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_kwif for (self: AIfexprExpr): TKwif */
val* nit___nit__AIfexprExpr___n_kwif(val* self) {
val* var /* : TKwif */;
val* var1 /* : TKwif */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1780);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_kwif= for (self: AIfexprExpr, TKwif) */
void nit___nit__AIfexprExpr___n_kwif_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val = p0; /* _n_kwif on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_expr for (self: AIfexprExpr): AExpr */
val* nit___nit__AIfexprExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_expr= for (self: AIfexprExpr, AExpr) */
void nit___nit__AIfexprExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val = p0; /* _n_expr on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_kwthen for (self: AIfexprExpr): TKwthen */
val* nit___nit__AIfexprExpr___n_kwthen(val* self) {
val* var /* : TKwthen */;
val* var1 /* : TKwthen */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1786);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_kwthen= for (self: AIfexprExpr, TKwthen) */
void nit___nit__AIfexprExpr___n_kwthen_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val = p0; /* _n_kwthen on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_then for (self: AIfexprExpr): AExpr */
val* nit___nit__AIfexprExpr___n_then(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1789);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_then= for (self: AIfexprExpr, AExpr) */
void nit___nit__AIfexprExpr___n_then_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val = p0; /* _n_then on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_kwelse for (self: AIfexprExpr): TKwelse */
val* nit___nit__AIfexprExpr___n_kwelse(val* self) {
val* var /* : TKwelse */;
val* var1 /* : TKwelse */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1792);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_kwelse= for (self: AIfexprExpr, TKwelse) */
void nit___nit__AIfexprExpr___n_kwelse_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val = p0; /* _n_kwelse on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_else for (self: AIfexprExpr): AExpr */
val* nit___nit__AIfexprExpr___n_else(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1795);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_else= for (self: AIfexprExpr, AExpr) */
void nit___nit__AIfexprExpr___n_else_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val = p0; /* _n_else on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_kwwhile for (self: AWhileExpr): TKwwhile */
val* nit___nit__AWhileExpr___n_kwwhile(val* self) {
val* var /* : TKwwhile */;
val* var1 /* : TKwwhile */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1804);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_kwwhile= for (self: AWhileExpr, TKwwhile) */
void nit___nit__AWhileExpr___n_kwwhile_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val = p0; /* _n_kwwhile on <self:AWhileExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_expr for (self: AWhileExpr): AExpr */
val* nit___nit__AWhileExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1807);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_expr= for (self: AWhileExpr, AExpr) */
void nit___nit__AWhileExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val = p0; /* _n_expr on <self:AWhileExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_kwdo for (self: AWhileExpr): TKwdo */
val* nit___nit__AWhileExpr___n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1810);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_kwdo= for (self: AWhileExpr, TKwdo) */
void nit___nit__AWhileExpr___n_kwdo_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val = p0; /* _n_kwdo on <self:AWhileExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_block for (self: AWhileExpr): nullable AExpr */
val* nit___nit__AWhileExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_block= for (self: AWhileExpr, nullable AExpr) */
void nit___nit__AWhileExpr___n_block_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val = p0; /* _n_block on <self:AWhileExpr> */
RET_LABEL:;
}
/* method parser_nodes#ALoopExpr#n_kwloop for (self: ALoopExpr): TKwloop */
val* nit___nit__ALoopExpr___n_kwloop(val* self) {
val* var /* : TKwloop */;
val* var1 /* : TKwloop */;
var1 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1822);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALoopExpr#n_kwloop= for (self: ALoopExpr, TKwloop) */
void nit___nit__ALoopExpr___n_kwloop_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val = p0; /* _n_kwloop on <self:ALoopExpr> */
RET_LABEL:;
}
/* method parser_nodes#ALoopExpr#n_block for (self: ALoopExpr): nullable AExpr */
val* nit___nit__ALoopExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALoopExpr#n_block= for (self: ALoopExpr, nullable AExpr) */
void nit___nit__ALoopExpr___n_block_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val = p0; /* _n_block on <self:ALoopExpr> */
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_kwfor for (self: AForExpr): TKwfor */
val* nit___nit__AForExpr___n_kwfor(val* self) {
val* var /* : TKwfor */;
val* var1 /* : TKwfor */;
var1 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1834);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_kwfor= for (self: AForExpr, TKwfor) */
void nit___nit__AForExpr___n_kwfor_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val = p0; /* _n_kwfor on <self:AForExpr> */
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_ids for (self: AForExpr): ANodes[TId] */
val* nit___nit__AForExpr___n_ids(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1837);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_ids= for (self: AForExpr, ANodes[TId]) */
void nit___nit__AForExpr___n_ids_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_ids].val = p0; /* _n_ids on <self:AForExpr> */
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_expr for (self: AForExpr): AExpr */
val* nit___nit__AForExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1840);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_expr= for (self: AForExpr, AExpr) */
void nit___nit__AForExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val = p0; /* _n_expr on <self:AForExpr> */
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_kwdo for (self: AForExpr): TKwdo */
val* nit___nit__AForExpr___n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1843);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_kwdo= for (self: AForExpr, TKwdo) */
void nit___nit__AForExpr___n_kwdo_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val = p0; /* _n_kwdo on <self:AForExpr> */
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_block for (self: AForExpr): nullable AExpr */
val* nit___nit__AForExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_block= for (self: AForExpr, nullable AExpr) */
void nit___nit__AForExpr___n_block_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val = p0; /* _n_block on <self:AForExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWithExpr#n_kwwith for (self: AWithExpr): TKwwith */
val* nit___nit__AWithExpr___n_kwwith(val* self) {
val* var /* : TKwwith */;
val* var1 /* : TKwwith */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwwith].val; /* _n_kwwith on <self:AWithExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwith");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1855);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWithExpr#n_kwwith= for (self: AWithExpr, TKwwith) */
void nit___nit__AWithExpr___n_kwwith_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwwith].val = p0; /* _n_kwwith on <self:AWithExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWithExpr#n_expr for (self: AWithExpr): AExpr */
val* nit___nit__AWithExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1858);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWithExpr#n_expr= for (self: AWithExpr, AExpr) */
void nit___nit__AWithExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_expr].val = p0; /* _n_expr on <self:AWithExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWithExpr#n_kwdo for (self: AWithExpr): TKwdo */
val* nit___nit__AWithExpr___n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwdo].val; /* _n_kwdo on <self:AWithExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1861);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWithExpr#n_kwdo= for (self: AWithExpr, TKwdo) */
void nit___nit__AWithExpr___n_kwdo_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_kwdo].val = p0; /* _n_kwdo on <self:AWithExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWithExpr#n_block for (self: AWithExpr): nullable AExpr */
val* nit___nit__AWithExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWithExpr#n_block= for (self: AWithExpr, nullable AExpr) */
void nit___nit__AWithExpr___n_block_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_block].val = p0; /* _n_block on <self:AWithExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_kwassert for (self: AAssertExpr): TKwassert */
val* nit___nit__AAssertExpr___n_kwassert(val* self) {
val* var /* : TKwassert */;
val* var1 /* : TKwassert */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1872);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_kwassert= for (self: AAssertExpr, TKwassert) */
void nit___nit__AAssertExpr___n_kwassert_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val = p0; /* _n_kwassert on <self:AAssertExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_id for (self: AAssertExpr): nullable TId */
val* nit___nit__AAssertExpr___n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_id= for (self: AAssertExpr, nullable TId) */
void nit___nit__AAssertExpr___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val = p0; /* _n_id on <self:AAssertExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_expr for (self: AAssertExpr): AExpr */
val* nit___nit__AAssertExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1878);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_expr= for (self: AAssertExpr, AExpr) */
void nit___nit__AAssertExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val = p0; /* _n_expr on <self:AAssertExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_else for (self: AAssertExpr): nullable AExpr */
val* nit___nit__AAssertExpr___n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_else= for (self: AAssertExpr, nullable AExpr) */
void nit___nit__AAssertExpr___n_else_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val = p0; /* _n_else on <self:AAssertExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssignFormExpr#n_assign for (self: AAssignFormExpr): TAssign */
val* nit___nit__AAssignFormExpr___n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAssignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1889);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_assign= for (self: AAssignFormExpr, TAssign) */
void nit___nit__AAssignFormExpr___n_assign_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = p0; /* _n_assign on <self:AAssignFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssignFormExpr#n_value for (self: AAssignFormExpr): AExpr */
val* nit___nit__AAssignFormExpr___n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAssignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1892);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_value= for (self: AAssignFormExpr, AExpr) */
void nit___nit__AAssignFormExpr___n_value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = p0; /* _n_value on <self:AAssignFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AReassignFormExpr#n_assign_op for (self: AReassignFormExpr): AAssignOp */
val* nit___nit__AReassignFormExpr___n_assign_op(val* self) {
val* var /* : AAssignOp */;
val* var1 /* : AAssignOp */;
var1 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1900);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_assign_op= for (self: AReassignFormExpr, AAssignOp) */
void nit___nit__AReassignFormExpr___n_assign_op_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = p0; /* _n_assign_op on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AReassignFormExpr#n_value for (self: AReassignFormExpr): AExpr */
val* nit___nit__AReassignFormExpr___n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AReassignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1903);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_value= for (self: AReassignFormExpr, AExpr) */
void nit___nit__AReassignFormExpr___n_value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = p0; /* _n_value on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOnceExpr#n_kwonce for (self: AOnceExpr): TKwonce */
val* nit___nit__AOnceExpr___n_kwonce(val* self) {
val* var /* : TKwonce */;
val* var1 /* : TKwonce */;
var1 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1911);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOnceExpr#n_kwonce= for (self: AOnceExpr, TKwonce) */
void nit___nit__AOnceExpr___n_kwonce_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val = p0; /* _n_kwonce on <self:AOnceExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOnceExpr#n_expr for (self: AOnceExpr): AExpr */
val* nit___nit__AOnceExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1914);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOnceExpr#n_expr= for (self: AOnceExpr, AExpr) */
void nit___nit__AOnceExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val = p0; /* _n_expr on <self:AOnceExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASendExpr#n_expr for (self: ASendExpr): AExpr */
val* nit___nit__ASendExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1922);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASendExpr#n_expr= for (self: ASendExpr, AExpr) */
void nit___nit__ASendExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = p0; /* _n_expr on <self:ASendExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABinopExpr#n_op for (self: ABinopExpr): Token */
val* nit___nit__ABinopExpr___n_op(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ABinopExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1930);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinopExpr#n_op= for (self: ABinopExpr, Token) */
void nit___nit__ABinopExpr___n_op_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = p0; /* _n_op on <self:ABinopExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABinopExpr#n_expr2 for (self: ABinopExpr): AExpr */
val* nit___nit__ABinopExpr___n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1933);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinopExpr#n_expr2= for (self: ABinopExpr, AExpr) */
void nit___nit__ABinopExpr___n_expr2_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = p0; /* _n_expr2 on <self:ABinopExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABinopExpr#operator for (self: ABinopExpr): String */
val* nit___nit__ABinopExpr___operator(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "operator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1937);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinBoolExpr#n_expr for (self: ABinBoolExpr): AExpr */
val* nit___nit__ABinBoolExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:ABinBoolExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1950);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinBoolExpr#n_expr= for (self: ABinBoolExpr, AExpr) */
void nit___nit__ABinBoolExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = p0; /* _n_expr on <self:ABinBoolExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABinBoolExpr#n_op for (self: ABinBoolExpr): Token */
val* nit___nit__ABinBoolExpr___n_op(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:ABinBoolExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1953);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinBoolExpr#n_op= for (self: ABinBoolExpr, Token) */
void nit___nit__ABinBoolExpr___n_op_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_op].val = p0; /* _n_op on <self:ABinBoolExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABinBoolExpr#n_expr2 for (self: ABinBoolExpr): AExpr */
val* nit___nit__ABinBoolExpr___n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:ABinBoolExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1956);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinBoolExpr#n_expr2= for (self: ABinBoolExpr, AExpr) */
void nit___nit__ABinBoolExpr___n_expr2_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = p0; /* _n_expr2 on <self:ABinBoolExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOrElseExpr#n_kwelse for (self: AOrElseExpr): TKwelse */
val* nit___nit__AOrElseExpr___n_kwelse(val* self) {
val* var /* : TKwelse */;
val* var1 /* : TKwelse */;
var1 = self->attrs[COLOR_nit__parser_nodes__AOrElseExpr___n_kwelse].val; /* _n_kwelse on <self:AOrElseExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1974);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrElseExpr#n_kwelse= for (self: AOrElseExpr, TKwelse) */
void nit___nit__AOrElseExpr___n_kwelse_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AOrElseExpr___n_kwelse].val = p0; /* _n_kwelse on <self:AOrElseExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANotExpr#n_kwnot for (self: ANotExpr): TKwnot */
val* nit___nit__ANotExpr___n_kwnot(val* self) {
val* var /* : TKwnot */;
val* var1 /* : TKwnot */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1987);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANotExpr#n_kwnot= for (self: ANotExpr, TKwnot) */
void nit___nit__ANotExpr___n_kwnot_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val = p0; /* _n_kwnot on <self:ANotExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANotExpr#n_expr for (self: ANotExpr): AExpr */
val* nit___nit__ANotExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1990);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANotExpr#n_expr= for (self: ANotExpr, AExpr) */
void nit___nit__ANotExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val = p0; /* _n_expr on <self:ANotExpr> */
RET_LABEL:;
}
/* method parser_nodes#AEqExpr#operator for (self: AEqExpr): String */
val* nit___nit__AEqExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "==";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANeExpr#operator for (self: ANeExpr): String */
val* nit___nit__ANeExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "!=";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALtExpr#operator for (self: ALtExpr): String */
val* nit___nit__ALtExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALeExpr#operator for (self: ALeExpr): String */
val* nit___nit__ALeExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<=";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALlExpr#operator for (self: ALlExpr): String */
val* nit___nit__ALlExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<<";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGtExpr#operator for (self: AGtExpr): String */
val* nit___nit__AGtExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ">";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGeExpr#operator for (self: AGeExpr): String */
val* nit___nit__AGeExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ">=";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGgExpr#operator for (self: AGgExpr): String */
val* nit___nit__AGgExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ">>";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_expr for (self: AIsaExpr): AExpr */
val* nit___nit__AIsaExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2046);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_expr= for (self: AIsaExpr, AExpr) */
void nit___nit__AIsaExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val = p0; /* _n_expr on <self:AIsaExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIsaExpr#n_kwisa for (self: AIsaExpr): TKwisa */
val* nit___nit__AIsaExpr___n_kwisa(val* self) {
val* var /* : TKwisa */;
val* var1 /* : TKwisa */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_kwisa].val; /* _n_kwisa on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisa");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2049);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_kwisa= for (self: AIsaExpr, TKwisa) */
void nit___nit__AIsaExpr___n_kwisa_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_kwisa].val = p0; /* _n_kwisa on <self:AIsaExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIsaExpr#n_type for (self: AIsaExpr): AType */
val* nit___nit__AIsaExpr___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2052);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_type= for (self: AIsaExpr, AType) */
void nit___nit__AIsaExpr___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val = p0; /* _n_type on <self:AIsaExpr> */
RET_LABEL:;
}
/* method parser_nodes#APlusExpr#operator for (self: APlusExpr): String */
val* nit___nit__APlusExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "+";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMinusExpr#operator for (self: AMinusExpr): String */
val* nit___nit__AMinusExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "-";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarshipExpr#operator for (self: AStarshipExpr): String */
val* nit___nit__AStarshipExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<=>";
var3 = standard___standard__NativeString___to_s_with_length(var2, 3l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarExpr#operator for (self: AStarExpr): String */
val* nit___nit__AStarExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "*";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarstarExpr#operator for (self: AStarstarExpr): String */
val* nit___nit__AStarstarExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "**";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASlashExpr#operator for (self: ASlashExpr): String */
val* nit___nit__ASlashExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APercentExpr#operator for (self: APercentExpr): String */
val* nit___nit__APercentExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "%";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APipeExpr#operator for (self: APipeExpr): String */
val* nit___nit__APipeExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "|";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACaretExpr#operator for (self: ACaretExpr): String */
val* nit___nit__ACaretExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "^";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAmpExpr#operator for (self: AAmpExpr): String */
val* nit___nit__AAmpExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "&";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AUnaryopExpr#n_op for (self: AUnaryopExpr): Token */
val* nit___nit__AUnaryopExpr___n_op(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUnaryopExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2120);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AUnaryopExpr#n_op= for (self: AUnaryopExpr, Token) */
void nit___nit__AUnaryopExpr___n_op_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = p0; /* _n_op on <self:AUnaryopExpr> */
RET_LABEL:;
}
/* method parser_nodes#AUnaryopExpr#operator for (self: AUnaryopExpr): String */
val* nit___nit__AUnaryopExpr___operator(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "operator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2123);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method parser_nodes#AUminusExpr#operator for (self: AUminusExpr): String */
val* nit___nit__AUminusExpr___AUnaryopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "-";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AUplusExpr#operator for (self: AUplusExpr): String */
val* nit___nit__AUplusExpr___AUnaryopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "+";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AUtildeExpr#operator for (self: AUtildeExpr): String */
val* nit___nit__AUtildeExpr___AUnaryopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "~";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_kwnew for (self: ANewExpr): TKwnew */
val* nit___nit__ANewExpr___n_kwnew(val* self) {
val* var /* : TKwnew */;
val* var1 /* : TKwnew */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2149);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_kwnew= for (self: ANewExpr, TKwnew) */
void nit___nit__ANewExpr___n_kwnew_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val = p0; /* _n_kwnew on <self:ANewExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_type for (self: ANewExpr): AType */
val* nit___nit__ANewExpr___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2152);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_type= for (self: ANewExpr, AType) */
void nit___nit__ANewExpr___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val = p0; /* _n_type on <self:ANewExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_id for (self: ANewExpr): nullable TId */
val* nit___nit__ANewExpr___n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_id= for (self: ANewExpr, nullable TId) */
void nit___nit__ANewExpr___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val = p0; /* _n_id on <self:ANewExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_args for (self: ANewExpr): AExprs */
val* nit___nit__ANewExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2158);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_args= for (self: ANewExpr, AExprs) */
void nit___nit__ANewExpr___n_args_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val = p0; /* _n_args on <self:ANewExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAttrFormExpr#n_expr for (self: AAttrFormExpr): AExpr */
val* nit___nit__AAttrFormExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2166);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_expr= for (self: AAttrFormExpr, AExpr) */
void nit___nit__AAttrFormExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = p0; /* _n_expr on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAttrFormExpr#n_id for (self: AAttrFormExpr): TAttrid */
val* nit___nit__AAttrFormExpr___n_id(val* self) {
val* var /* : TAttrid */;
val* var1 /* : TAttrid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2169);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_id= for (self: AAttrFormExpr, TAttrid) */
void nit___nit__AAttrFormExpr___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = p0; /* _n_id on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#ACallFormExpr#n_id for (self: ACallFormExpr): TId */
val* nit___nit__ACallFormExpr___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2189);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_id= for (self: ACallFormExpr, TId) */
void nit___nit__ACallFormExpr___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = p0; /* _n_id on <self:ACallFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#ACallFormExpr#n_args for (self: ACallFormExpr): AExprs */
val* nit___nit__ACallFormExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2192);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_args= for (self: ACallFormExpr, AExprs) */
void nit___nit__ACallFormExpr___n_args_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = p0; /* _n_args on <self:ACallFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#n_qualified for (self: ASuperExpr): nullable AQualified */
val* nit___nit__ASuperExpr___n_qualified(val* self) {
val* var /* : nullable AQualified */;
val* var1 /* : nullable AQualified */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_qualified= for (self: ASuperExpr, nullable AQualified) */
void nit___nit__ASuperExpr___n_qualified_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val = p0; /* _n_qualified on <self:ASuperExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#n_kwsuper for (self: ASuperExpr): TKwsuper */
val* nit___nit__ASuperExpr___n_kwsuper(val* self) {
val* var /* : TKwsuper */;
val* var1 /* : TKwsuper */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2238);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_kwsuper= for (self: ASuperExpr, TKwsuper) */
void nit___nit__ASuperExpr___n_kwsuper_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val = p0; /* _n_kwsuper on <self:ASuperExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#n_args for (self: ASuperExpr): AExprs */
val* nit___nit__ASuperExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2241);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_args= for (self: ASuperExpr, AExprs) */
void nit___nit__ASuperExpr___n_args_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val = p0; /* _n_args on <self:ASuperExpr> */
RET_LABEL:;
}
/* method parser_nodes#AInitExpr#n_kwinit for (self: AInitExpr): TKwinit */
val* nit___nit__AInitExpr___n_kwinit(val* self) {
val* var /* : TKwinit */;
val* var1 /* : TKwinit */;
var1 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2250);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_kwinit= for (self: AInitExpr, TKwinit) */
void nit___nit__AInitExpr___n_kwinit_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val = p0; /* _n_kwinit on <self:AInitExpr> */
RET_LABEL:;
}
/* method parser_nodes#AInitExpr#n_args for (self: AInitExpr): AExprs */
val* nit___nit__AInitExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2253);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_args= for (self: AInitExpr, AExprs) */
void nit___nit__AInitExpr___n_args_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val = p0; /* _n_args on <self:AInitExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABraFormExpr#n_args for (self: ABraFormExpr): AExprs */
val* nit___nit__ABraFormExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2261);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraFormExpr#n_args= for (self: ABraFormExpr, AExprs) */
void nit___nit__ABraFormExpr___n_args_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = p0; /* _n_args on <self:ABraFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVarFormExpr#n_id for (self: AVarFormExpr): TId */
val* nit___nit__AVarFormExpr___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2280);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVarFormExpr#n_id= for (self: AVarFormExpr, TId) */
void nit___nit__AVarFormExpr___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = p0; /* _n_id on <self:AVarFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#ARangeExpr#n_expr for (self: ARangeExpr): AExpr */
val* nit___nit__ARangeExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2314);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr= for (self: ARangeExpr, AExpr) */
void nit___nit__ARangeExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = p0; /* _n_expr on <self:ARangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ARangeExpr#n_expr2 for (self: ARangeExpr): AExpr */
val* nit___nit__ARangeExpr___n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2317);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr2= for (self: ARangeExpr, AExpr) */
void nit___nit__ARangeExpr___n_expr2_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = p0; /* _n_expr2 on <self:ARangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ACrangeExpr#n_obra for (self: ACrangeExpr): TObra */
val* nit___nit__ACrangeExpr___n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2325);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACrangeExpr#n_obra= for (self: ACrangeExpr, TObra) */
void nit___nit__ACrangeExpr___n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val = p0; /* _n_obra on <self:ACrangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ACrangeExpr#n_cbra for (self: ACrangeExpr): TCbra */
val* nit___nit__ACrangeExpr___n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2328);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACrangeExpr#n_cbra= for (self: ACrangeExpr, TCbra) */
void nit___nit__ACrangeExpr___n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val = p0; /* _n_cbra on <self:ACrangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOrangeExpr#n_obra for (self: AOrangeExpr): TObra */
val* nit___nit__AOrangeExpr___n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2336);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrangeExpr#n_obra= for (self: AOrangeExpr, TObra) */
void nit___nit__AOrangeExpr___n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val = p0; /* _n_obra on <self:AOrangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOrangeExpr#n_cbra for (self: AOrangeExpr): TObra */
val* nit___nit__AOrangeExpr___n_cbra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2339);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrangeExpr#n_cbra= for (self: AOrangeExpr, TObra) */
void nit___nit__AOrangeExpr___n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val = p0; /* _n_cbra on <self:AOrangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#AArrayExpr#n_obra for (self: AArrayExpr): TObra */
val* nit___nit__AArrayExpr___n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val; /* _n_obra on <self:AArrayExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2347);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_obra= for (self: AArrayExpr, TObra) */
void nit___nit__AArrayExpr___n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val = p0; /* _n_obra on <self:AArrayExpr> */
RET_LABEL:;
}
/* method parser_nodes#AArrayExpr#n_exprs for (self: AArrayExpr): ANodes[AExpr] */
val* nit___nit__AArrayExpr___n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2350);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_exprs= for (self: AArrayExpr, ANodes[AExpr]) */
void nit___nit__AArrayExpr___n_exprs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val = p0; /* _n_exprs on <self:AArrayExpr> */
RET_LABEL:;
}
/* method parser_nodes#AArrayExpr#n_type for (self: AArrayExpr): nullable AType */
val* nit___nit__AArrayExpr___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_type= for (self: AArrayExpr, nullable AType) */
void nit___nit__AArrayExpr___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val = p0; /* _n_type on <self:AArrayExpr> */
RET_LABEL:;
}
/* method parser_nodes#AArrayExpr#n_cbra for (self: AArrayExpr): TCbra */
val* nit___nit__AArrayExpr___n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val; /* _n_cbra on <self:AArrayExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2356);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_cbra= for (self: AArrayExpr, TCbra) */
void nit___nit__AArrayExpr___n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val = p0; /* _n_cbra on <self:AArrayExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASelfExpr#n_kwself for (self: ASelfExpr): nullable TKwself */
val* nit___nit__ASelfExpr___n_kwself(val* self) {
val* var /* : nullable TKwself */;
val* var1 /* : nullable TKwself */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASelfExpr#n_kwself= for (self: ASelfExpr, nullable TKwself) */
void nit___nit__ASelfExpr___n_kwself_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val = p0; /* _n_kwself on <self:ASelfExpr> */
RET_LABEL:;
}
/* method parser_nodes#ATrueExpr#n_kwtrue for (self: ATrueExpr): TKwtrue */
val* nit___nit__ATrueExpr___n_kwtrue(val* self) {
val* var /* : TKwtrue */;
val* var1 /* : TKwtrue */;
var1 = self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2377);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATrueExpr#n_kwtrue= for (self: ATrueExpr, TKwtrue) */
void nit___nit__ATrueExpr___n_kwtrue_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val = p0; /* _n_kwtrue on <self:ATrueExpr> */
RET_LABEL:;
}
/* method parser_nodes#AFalseExpr#n_kwfalse for (self: AFalseExpr): TKwfalse */
val* nit___nit__AFalseExpr___n_kwfalse(val* self) {
val* var /* : TKwfalse */;
val* var1 /* : TKwfalse */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2385);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFalseExpr#n_kwfalse= for (self: AFalseExpr, TKwfalse) */
void nit___nit__AFalseExpr___n_kwfalse_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val = p0; /* _n_kwfalse on <self:AFalseExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANullExpr#n_kwnull for (self: ANullExpr): TKwnull */
val* nit___nit__ANullExpr___n_kwnull(val* self) {
val* var /* : TKwnull */;
val* var1 /* : TKwnull */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2393);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANullExpr#n_kwnull= for (self: ANullExpr, TKwnull) */
void nit___nit__ANullExpr___n_kwnull_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val = p0; /* _n_kwnull on <self:ANullExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADecIntExpr#n_number for (self: ADecIntExpr): TNumber */
val* nit___nit__ADecIntExpr___n_number(val* self) {
val* var /* : TNumber */;
val* var1 /* : TNumber */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2406);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADecIntExpr#n_number= for (self: ADecIntExpr, TNumber) */
void nit___nit__ADecIntExpr___n_number_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val = p0; /* _n_number on <self:ADecIntExpr> */
RET_LABEL:;
}
/* method parser_nodes#AHexIntExpr#n_hex_number for (self: AHexIntExpr): THexNumber */
val* nit___nit__AHexIntExpr___n_hex_number(val* self) {
val* var /* : THexNumber */;
val* var1 /* : THexNumber */;
var1 = self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2414);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AHexIntExpr#n_hex_number= for (self: AHexIntExpr, THexNumber) */
void nit___nit__AHexIntExpr___n_hex_number_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val = p0; /* _n_hex_number on <self:AHexIntExpr> */
RET_LABEL:;
}
/* method parser_nodes#AFloatExpr#n_float for (self: AFloatExpr): TFloat */
val* nit___nit__AFloatExpr___n_float(val* self) {
val* var /* : TFloat */;
val* var1 /* : TFloat */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2422);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFloatExpr#n_float= for (self: AFloatExpr, TFloat) */
void nit___nit__AFloatExpr___n_float_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val = p0; /* _n_float on <self:AFloatExpr> */
RET_LABEL:;
}
/* method parser_nodes#ACharExpr#n_char for (self: ACharExpr): TChar */
val* nit___nit__ACharExpr___n_char(val* self) {
val* var /* : TChar */;
val* var1 /* : TChar */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2430);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACharExpr#n_char= for (self: ACharExpr, TChar) */
void nit___nit__ACharExpr___n_char_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val = p0; /* _n_char on <self:ACharExpr> */
RET_LABEL:;
}
/* method parser_nodes#AStringFormExpr#n_string for (self: AStringFormExpr): Token */
val* nit___nit__AStringFormExpr___n_string(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2438);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStringFormExpr#n_string= for (self: AStringFormExpr, Token) */
void nit___nit__AStringFormExpr___n_string_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = p0; /* _n_string on <self:AStringFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASuperstringExpr#n_exprs for (self: ASuperstringExpr): ANodes[AExpr] */
val* nit___nit__ASuperstringExpr___n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2467);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperstringExpr#n_exprs= for (self: ASuperstringExpr, ANodes[AExpr]) */
void nit___nit__ASuperstringExpr___n_exprs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val = p0; /* _n_exprs on <self:ASuperstringExpr> */
RET_LABEL:;
}
/* method parser_nodes#AParExpr#n_opar for (self: AParExpr): TOpar */
val* nit___nit__AParExpr___n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2475);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_opar= for (self: AParExpr, TOpar) */
void nit___nit__AParExpr___n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val = p0; /* _n_opar on <self:AParExpr> */
RET_LABEL:;
}
/* method parser_nodes#AParExpr#n_expr for (self: AParExpr): AExpr */
val* nit___nit__AParExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2478);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_expr= for (self: AParExpr, AExpr) */
void nit___nit__AParExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val = p0; /* _n_expr on <self:AParExpr> */
RET_LABEL:;
}
/* method parser_nodes#AParExpr#n_cpar for (self: AParExpr): TCpar */
val* nit___nit__AParExpr___n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2481);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_cpar= for (self: AParExpr, TCpar) */
void nit___nit__AParExpr___n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val = p0; /* _n_cpar on <self:AParExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastForm#n_expr for (self: AAsCastForm): AExpr */
val* nit___nit__AAsCastForm___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastForm> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2489);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastForm#n_expr= for (self: AAsCastForm, AExpr) */
void nit___nit__AAsCastForm___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = p0; /* _n_expr on <self:AAsCastForm> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastForm#n_kwas for (self: AAsCastForm): TKwas */
val* nit___nit__AAsCastForm___n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastForm> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2492);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastForm#n_kwas= for (self: AAsCastForm, TKwas) */
void nit___nit__AAsCastForm___n_kwas_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = p0; /* _n_kwas on <self:AAsCastForm> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastForm#n_opar for (self: AAsCastForm): nullable TOpar */
val* nit___nit__AAsCastForm___n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsCastForm> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastForm#n_opar= for (self: AAsCastForm, nullable TOpar) */
void nit___nit__AAsCastForm___n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = p0; /* _n_opar on <self:AAsCastForm> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastForm#n_cpar for (self: AAsCastForm): nullable TCpar */
val* nit___nit__AAsCastForm___n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsCastForm> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastForm#n_cpar= for (self: AAsCastForm, nullable TCpar) */
void nit___nit__AAsCastForm___n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = p0; /* _n_cpar on <self:AAsCastForm> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_type for (self: AAsCastExpr): AType */
val* nit___nit__AAsCastExpr___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2506);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_type= for (self: AAsCastExpr, AType) */
void nit___nit__AAsCastExpr___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val = p0; /* _n_type on <self:AAsCastExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnot for (self: AAsNotnullExpr): TKwnot */
val* nit___nit__AAsNotnullExpr___n_kwnot(val* self) {
val* var /* : TKwnot */;
val* var1 /* : TKwnot */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2514);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnot= for (self: AAsNotnullExpr, TKwnot) */
void nit___nit__AAsNotnullExpr___n_kwnot_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val = p0; /* _n_kwnot on <self:AAsNotnullExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnull for (self: AAsNotnullExpr): TKwnull */
val* nit___nit__AAsNotnullExpr___n_kwnull(val* self) {
val* var /* : TKwnull */;
val* var1 /* : TKwnull */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2517);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnull= for (self: AAsNotnullExpr, TKwnull) */
void nit___nit__AAsNotnullExpr___n_kwnull_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val = p0; /* _n_kwnull on <self:AAsNotnullExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIssetAttrExpr#n_kwisset for (self: AIssetAttrExpr): TKwisset */
val* nit___nit__AIssetAttrExpr___n_kwisset(val* self) {
val* var /* : TKwisset */;
val* var1 /* : TKwisset */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2525);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIssetAttrExpr#n_kwisset= for (self: AIssetAttrExpr, TKwisset) */
void nit___nit__AIssetAttrExpr___n_kwisset_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val = p0; /* _n_kwisset on <self:AIssetAttrExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVarargExpr#n_expr for (self: AVarargExpr): AExpr */
val* nit___nit__AVarargExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2533);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVarargExpr#n_expr= for (self: AVarargExpr, AExpr) */
void nit___nit__AVarargExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val = p0; /* _n_expr on <self:AVarargExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVarargExpr#n_dotdotdot for (self: AVarargExpr): TDotdotdot */
val* nit___nit__AVarargExpr___n_dotdotdot(val* self) {
val* var /* : TDotdotdot */;
val* var1 /* : TDotdotdot */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2536);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVarargExpr#n_dotdotdot= for (self: AVarargExpr, TDotdotdot) */
void nit___nit__AVarargExpr___n_dotdotdot_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val = p0; /* _n_dotdotdot on <self:AVarargExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANamedargExpr#n_id for (self: ANamedargExpr): TId */
val* nit___nit__ANamedargExpr___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <self:ANamedargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2544);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANamedargExpr#n_id= for (self: ANamedargExpr, TId) */
void nit___nit__ANamedargExpr___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val = p0; /* _n_id on <self:ANamedargExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANamedargExpr#n_assign for (self: ANamedargExpr): TAssign */
val* nit___nit__ANamedargExpr___n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val; /* _n_assign on <self:ANamedargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2547);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANamedargExpr#n_assign= for (self: ANamedargExpr, TAssign) */
void nit___nit__ANamedargExpr___n_assign_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val = p0; /* _n_assign on <self:ANamedargExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANamedargExpr#n_expr for (self: ANamedargExpr): AExpr */
val* nit___nit__ANamedargExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2550);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANamedargExpr#n_expr= for (self: ANamedargExpr, AExpr) */
void nit___nit__ANamedargExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val = p0; /* _n_expr on <self:ANamedargExpr> */
RET_LABEL:;
}
/* method parser_nodes#AManyExpr#n_exprs for (self: AManyExpr): ANodes[AExpr] */
val* nit___nit__AManyExpr___n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2558);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AManyExpr#n_exprs= for (self: AManyExpr, ANodes[AExpr]) */
void nit___nit__AManyExpr___n_exprs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AManyExpr___n_exprs].val = p0; /* _n_exprs on <self:AManyExpr> */
RET_LABEL:;
}
/* method parser_nodes#ATypeExpr#n_type for (self: ATypeExpr): AType */
val* nit___nit__ATypeExpr___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val; /* _n_type on <self:ATypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2567);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypeExpr#n_type= for (self: ATypeExpr, AType) */
void nit___nit__ATypeExpr___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val = p0; /* _n_type on <self:ATypeExpr> */
RET_LABEL:;
}
/* method parser_nodes#AMethidExpr#n_expr for (self: AMethidExpr): AExpr */
val* nit___nit__AMethidExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val; /* _n_expr on <self:AMethidExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2576);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethidExpr#n_expr= for (self: AMethidExpr, AExpr) */
void nit___nit__AMethidExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val = p0; /* _n_expr on <self:AMethidExpr> */
RET_LABEL:;
}
/* method parser_nodes#AMethidExpr#n_id for (self: AMethidExpr): AMethid */
val* nit___nit__AMethidExpr___n_id(val* self) {
val* var /* : AMethid */;
val* var1 /* : AMethid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2579);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethidExpr#n_id= for (self: AMethidExpr, AMethid) */
void nit___nit__AMethidExpr___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val = p0; /* _n_id on <self:AMethidExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_kwdebug for (self: ADebugTypeExpr): TKwdebug */
val* nit___nit__ADebugTypeExpr___n_kwdebug(val* self) {
val* var /* : TKwdebug */;
val* var1 /* : TKwdebug */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2595);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_kwdebug= for (self: ADebugTypeExpr, TKwdebug) */
void nit___nit__ADebugTypeExpr___n_kwdebug_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val = p0; /* _n_kwdebug on <self:ADebugTypeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_kwtype for (self: ADebugTypeExpr): TKwtype */
val* nit___nit__ADebugTypeExpr___n_kwtype(val* self) {
val* var /* : TKwtype */;
val* var1 /* : TKwtype */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2598);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_kwtype= for (self: ADebugTypeExpr, TKwtype) */
void nit___nit__ADebugTypeExpr___n_kwtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val = p0; /* _n_kwtype on <self:ADebugTypeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_expr for (self: ADebugTypeExpr): AExpr */
val* nit___nit__ADebugTypeExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2601);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_expr= for (self: ADebugTypeExpr, AExpr) */
void nit___nit__ADebugTypeExpr___n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val = p0; /* _n_expr on <self:ADebugTypeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_type for (self: ADebugTypeExpr): AType */
val* nit___nit__ADebugTypeExpr___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2604);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_type= for (self: ADebugTypeExpr, AType) */
void nit___nit__ADebugTypeExpr___n_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val = p0; /* _n_type on <self:ADebugTypeExpr> */
RET_LABEL:;
}
/* method parser_nodes#AExprs#n_exprs for (self: AExprs): ANodes[AExpr] */
val* nit___nit__AExprs___n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AExprs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2612);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprs#n_exprs= for (self: AExprs, ANodes[AExpr]) */
void nit___nit__AExprs___n_exprs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val = p0; /* _n_exprs on <self:AExprs> */
RET_LABEL:;
}
/* method parser_nodes#AParExprs#n_opar for (self: AParExprs): TOpar */
val* nit___nit__AParExprs___n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2625);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExprs#n_opar= for (self: AParExprs, TOpar) */
void nit___nit__AParExprs___n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val = p0; /* _n_opar on <self:AParExprs> */
RET_LABEL:;
}
/* method parser_nodes#AParExprs#n_cpar for (self: AParExprs): TCpar */
val* nit___nit__AParExprs___n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2628);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExprs#n_cpar= for (self: AParExprs, TCpar) */
void nit___nit__AParExprs___n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val = p0; /* _n_cpar on <self:AParExprs> */
RET_LABEL:;
}
/* method parser_nodes#ABraExprs#n_obra for (self: ABraExprs): TObra */
val* nit___nit__ABraExprs___n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2636);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraExprs#n_obra= for (self: ABraExprs, TObra) */
void nit___nit__ABraExprs___n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val = p0; /* _n_obra on <self:ABraExprs> */
RET_LABEL:;
}
/* method parser_nodes#ABraExprs#n_cbra for (self: ABraExprs): TCbra */
val* nit___nit__ABraExprs___n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2639);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraExprs#n_cbra= for (self: ABraExprs, TCbra) */
void nit___nit__ABraExprs___n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val = p0; /* _n_cbra on <self:ABraExprs> */
RET_LABEL:;
}
/* method parser_nodes#AAssignOp#n_op for (self: AAssignOp): Token */
val* nit___nit__AAssignOp___n_op(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AAssignOp> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2647);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignOp#n_op= for (self: AAssignOp, Token) */
void nit___nit__AAssignOp___n_op_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = p0; /* _n_op on <self:AAssignOp> */
RET_LABEL:;
}
/* method parser_nodes#AAssignOp#operator for (self: AAssignOp): String */
val* nit___nit__AAssignOp___operator(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "operator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2650);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method parser_nodes#APlusAssignOp#operator for (self: APlusAssignOp): String */
val* nit___nit__APlusAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "+";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMinusAssignOp#operator for (self: AMinusAssignOp): String */
val* nit___nit__AMinusAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "-";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarAssignOp#operator for (self: AStarAssignOp): String */
val* nit___nit__AStarAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "*";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASlashAssignOp#operator for (self: ASlashAssignOp): String */
val* nit___nit__ASlashAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APercentAssignOp#operator for (self: APercentAssignOp): String */
val* nit___nit__APercentAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "%";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarstarAssignOp#operator for (self: AStarstarAssignOp): String */
val* nit___nit__AStarstarAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "**";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APipeAssignOp#operator for (self: APipeAssignOp): String */
val* nit___nit__APipeAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "|";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACaretAssignOp#operator for (self: ACaretAssignOp): String */
val* nit___nit__ACaretAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "^";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAmpAssignOp#operator for (self: AAmpAssignOp): String */
val* nit___nit__AAmpAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "&";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALlAssignOp#operator for (self: ALlAssignOp): String */
val* nit___nit__ALlAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<<";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGgAssignOp#operator for (self: AGgAssignOp): String */
val* nit___nit__AGgAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ">>";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_quad for (self: AModuleName): nullable TQuad */
val* nit___nit__AModuleName___n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_quad= for (self: AModuleName, nullable TQuad) */
void nit___nit__AModuleName___n_quad_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val = p0; /* _n_quad on <self:AModuleName> */
RET_LABEL:;
}
/* method parser_nodes#AModuleName#n_path for (self: AModuleName): ANodes[TId] */
val* nit___nit__AModuleName___n_path(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2738);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_path= for (self: AModuleName, ANodes[TId]) */
void nit___nit__AModuleName___n_path_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_path].val = p0; /* _n_path on <self:AModuleName> */
RET_LABEL:;
}
/* method parser_nodes#AModuleName#n_id for (self: AModuleName): TId */
val* nit___nit__AModuleName___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2741);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_id= for (self: AModuleName, TId) */
void nit___nit__AModuleName___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val = p0; /* _n_id on <self:AModuleName> */
RET_LABEL:;
}
/* method parser_nodes#AInLanguage#n_kwin for (self: AInLanguage): TKwin */
val* nit___nit__AInLanguage___n_kwin(val* self) {
val* var /* : TKwin */;
val* var1 /* : TKwin */;
var1 = self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2749);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInLanguage#n_kwin= for (self: AInLanguage, TKwin) */
void nit___nit__AInLanguage___n_kwin_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_kwin].val = p0; /* _n_kwin on <self:AInLanguage> */
RET_LABEL:;
}
/* method parser_nodes#AInLanguage#n_string for (self: AInLanguage): TString */
val* nit___nit__AInLanguage___n_string(val* self) {
val* var /* : TString */;
val* var1 /* : TString */;
var1 = self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2752);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInLanguage#n_string= for (self: AInLanguage, TString) */
void nit___nit__AInLanguage___n_string_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_string].val = p0; /* _n_string on <self:AInLanguage> */
RET_LABEL:;
}
/* method parser_nodes#AExternCodeBlock#n_in_language for (self: AExternCodeBlock): nullable AInLanguage */
val* nit___nit__AExternCodeBlock___n_in_language(val* self) {
val* var /* : nullable AInLanguage */;
val* var1 /* : nullable AInLanguage */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCodeBlock#n_in_language= for (self: AExternCodeBlock, nullable AInLanguage) */
void nit___nit__AExternCodeBlock___n_in_language_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val = p0; /* _n_in_language on <self:AExternCodeBlock> */
RET_LABEL:;
}
/* method parser_nodes#AExternCodeBlock#n_extern_code_segment for (self: AExternCodeBlock): TExternCodeSegment */
val* nit___nit__AExternCodeBlock___n_extern_code_segment(val* self) {
val* var /* : TExternCodeSegment */;
val* var1 /* : TExternCodeSegment */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2763);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCodeBlock#n_extern_code_segment= for (self: AExternCodeBlock, TExternCodeSegment) */
void nit___nit__AExternCodeBlock___n_extern_code_segment_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_extern_code_segment].val = p0; /* _n_extern_code_segment on <self:AExternCodeBlock> */
RET_LABEL:;
}
/* method parser_nodes#AQualified#n_quad for (self: AQualified): nullable TQuad */
val* nit___nit__AQualified___n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
var1 = self->attrs[COLOR_nit__parser_nodes__AQualified___n_quad].val; /* _n_quad on <self:AQualified> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_quad= for (self: AQualified, nullable TQuad) */
void nit___nit__AQualified___n_quad_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AQualified___n_quad].val = p0; /* _n_quad on <self:AQualified> */
RET_LABEL:;
}
/* method parser_nodes#AQualified#n_id for (self: AQualified): ANodes[TId] */
val* nit___nit__AQualified___n_id(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2774);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_id= for (self: AQualified, ANodes[TId]) */
void nit___nit__AQualified___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AQualified___n_id].val = p0; /* _n_id on <self:AQualified> */
RET_LABEL:;
}
/* method parser_nodes#AQualified#n_classid for (self: AQualified): nullable TClassid */
val* nit___nit__AQualified___n_classid(val* self) {
val* var /* : nullable TClassid */;
val* var1 /* : nullable TClassid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_classid= for (self: AQualified, nullable TClassid) */
void nit___nit__AQualified___n_classid_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AQualified___n_classid].val = p0; /* _n_classid on <self:AQualified> */
RET_LABEL:;
}
/* method parser_nodes#ADoc#n_comment for (self: ADoc): ANodes[TComment] */
val* nit___nit__ADoc___n_comment(val* self) {
val* var /* : ANodes[TComment] */;
val* var1 /* : ANodes[TComment] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2786);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoc#n_comment= for (self: ADoc, ANodes[TComment]) */
void nit___nit__ADoc___n_comment_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ADoc___n_comment].val = p0; /* _n_comment on <self:ADoc> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_at for (self: AAnnotations): nullable TAt */
val* nit___nit__AAnnotations___n_at(val* self) {
val* var /* : nullable TAt */;
val* var1 /* : nullable TAt */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_at= for (self: AAnnotations, nullable TAt) */
void nit___nit__AAnnotations___n_at_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_at].val = p0; /* _n_at on <self:AAnnotations> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_opar for (self: AAnnotations): nullable TOpar */
val* nit___nit__AAnnotations___n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_opar= for (self: AAnnotations, nullable TOpar) */
void nit___nit__AAnnotations___n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_opar].val = p0; /* _n_opar on <self:AAnnotations> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_items for (self: AAnnotations): ANodes[AAnnotation] */
val* nit___nit__AAnnotations___n_items(val* self) {
val* var /* : ANodes[AAnnotation] */;
val* var1 /* : ANodes[AAnnotation] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2806);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_items= for (self: AAnnotations, ANodes[AAnnotation]) */
void nit___nit__AAnnotations___n_items_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_items].val = p0; /* _n_items on <self:AAnnotations> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_cpar for (self: AAnnotations): nullable TCpar */
val* nit___nit__AAnnotations___n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_cpar= for (self: AAnnotations, nullable TCpar) */
void nit___nit__AAnnotations___n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_cpar].val = p0; /* _n_cpar on <self:AAnnotations> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_atid for (self: AAnnotation): AAtid */
val* nit___nit__AAnnotation___n_atid(val* self) {
val* var /* : AAtid */;
val* var1 /* : AAtid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2817);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_atid= for (self: AAnnotation, AAtid) */
void nit___nit__AAnnotation___n_atid_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val = p0; /* _n_atid on <self:AAnnotation> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_opar for (self: AAnnotation): nullable TOpar */
val* nit___nit__AAnnotation___n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_opar= for (self: AAnnotation, nullable TOpar) */
void nit___nit__AAnnotation___n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val = p0; /* _n_opar on <self:AAnnotation> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_args for (self: AAnnotation): ANodes[AExpr] */
val* nit___nit__AAnnotation___n_args(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2823);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_args= for (self: AAnnotation, ANodes[AExpr]) */
void nit___nit__AAnnotation___n_args_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val = p0; /* _n_args on <self:AAnnotation> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_cpar for (self: AAnnotation): nullable TCpar */
val* nit___nit__AAnnotation___n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_cpar= for (self: AAnnotation, nullable TCpar) */
void nit___nit__AAnnotation___n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val = p0; /* _n_cpar on <self:AAnnotation> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#name for (self: AAnnotation): String */
val* nit___nit__AAnnotation___name(val* self) {
val* var /* : String */;
val* var1 /* : AAtid */;
val* var2 /* : Token */;
val* var3 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__AAnnotation__n_atid]))(self); /* n_atid on <self:AAnnotation>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__AAtid__n_id]))(var1); /* n_id on <var1:AAtid>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__parser_nodes__Token__text]))(var2); /* text on <var2:Token>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAtid#n_id for (self: AAtid): Token */
val* nit___nit__AAtid___n_id(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AAtid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2840);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAtid#n_id= for (self: AAtid, Token) */
void nit___nit__AAtid___n_id_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val = p0; /* _n_id on <self:AAtid> */
RET_LABEL:;
}
/* method parser_nodes#Start#n_base for (self: Start): nullable AModule */
val* nit___nit__Start___n_base(val* self) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = self->attrs[COLOR_nit__parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_base= for (self: Start, nullable AModule) */
void nit___nit__Start___n_base_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Start___n_base].val = p0; /* _n_base on <self:Start> */
RET_LABEL:;
}
/* method parser_nodes#Start#n_eof for (self: Start): EOF */
val* nit___nit__Start___n_eof(val* self) {
val* var /* : EOF */;
val* var1 /* : EOF */;
var1 = self->attrs[COLOR_nit__parser_nodes__Start___n_eof].val; /* _n_eof on <self:Start> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2872);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_eof= for (self: Start, EOF) */
void nit___nit__Start___n_eof_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Start___n_eof].val = p0; /* _n_eof on <self:Start> */
RET_LABEL:;
}
/* method parser_nodes#Start#init for (self: Start) */
void nit___nit__Start___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Start___standard__kernel__Object__init]))(self); /* init on <self:Start>*/
}
RET_LABEL:;
}
