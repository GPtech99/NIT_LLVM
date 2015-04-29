#include "standard__numeric.sep.0.h"
/* method numeric#Text#to_n for (self: Text): Numeric */
val* standard__numeric___Text___to_n(val* self) {
val* var /* : Numeric */;
val* var1 /* : SequenceRead[Char] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
double var4 /* : Float */;
val* var5 /* : Numeric */;
long var6 /* : Int */;
val* var7 /* : Numeric */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var3 = (val*)((long)('.')<<2|2);
var2 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var1, var3); /* has on <var1:SequenceRead[Char]>*/
}
if (var2){
{
var4 = ((double(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_f]))(self); /* to_f on <self:Text>*/
}
var5 = BOX_standard__Float(var4); /* autobox from Float to Numeric */
var = var5;
goto RET_LABEL;
} else {
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_i]))(self); /* to_i on <self:Text>*/
}
var7 = (val*)(var6<<2|1);
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method numeric#Numeric#add for (self: Numeric, Numeric): Numeric */
val* standard__numeric___Numeric___add(val* self, val* p0) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "add", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__numeric, 42);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric#Numeric#sub for (self: Numeric, Numeric): Numeric */
val* standard__numeric___Numeric___sub(val* self, val* p0) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "sub", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__numeric, 52);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric#Numeric#div for (self: Numeric, Numeric): Numeric */
val* standard__numeric___Numeric___div(val* self, val* p0) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "div", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__numeric, 62);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric#Numeric#mul for (self: Numeric, Numeric): Numeric */
val* standard__numeric___Numeric___mul(val* self, val* p0) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "mul", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__numeric, 72);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric#Int#add for (self: Int, Numeric): Numeric */
val* standard__numeric___Int___Numeric__add(long self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Numeric */;
short int var1 /* : Bool */;
int cltype;
int idtype;
double var2 /* : Float */;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
double var10 /* : Float */;
double var11 /* : Float */;
val* var12 /* : Numeric */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
val* var25 /* : Numeric */;
var_other = p0;
/* <var_other:Numeric> isa Float */
cltype = type_standard__Float.color;
idtype = type_standard__Float.id;
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
if (var1){
{
{ /* Inline kernel#Int#to_f (self) on <self:Int> */
var4 = (double)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var2,var_other) on <var2:Float> */
/* Covariant cast for argument 0 (i) <var_other:Numeric(Float)> isa OTHER */
/* <var_other:Numeric(Float)> isa OTHER */
var7 = 1; /* easy <var_other:Numeric(Float)> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 339);
fatal_exit(1);
}
var10 = ((struct instance_standard__Float*)var_other)->value; /* autounbox from Numeric to Float */;
var11 = var2 + var10;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var12 = BOX_standard__Float(var5); /* autobox from Float to Numeric */
var = var12;
goto RET_LABEL;
} else {
/* <var_other:Numeric> isa Int */
cltype14 = type_standard__Int.color;
idtype15 = type_standard__Int.id;
if(cltype14 >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
var_class_name16 = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__numeric, 89);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#+ (self,var_other) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_other:Numeric(Int)> isa OTHER */
/* <var_other:Numeric(Int)> isa OTHER */
var19 = 1; /* easy <var_other:Numeric(Int)> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var23 = (long)(var_other)>>2;
var24 = self + var23;
var17 = var24;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var25 = (val*)(var17<<2|1);
var = var25;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method numeric#Int#add for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard__numeric___Int___Numeric__add(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = standard__numeric___Int___Numeric__add(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric#Int#sub for (self: Int, Numeric): Numeric */
val* standard__numeric___Int___Numeric__sub(long self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Numeric */;
short int var1 /* : Bool */;
int cltype;
int idtype;
double var2 /* : Float */;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
double var10 /* : Float */;
double var11 /* : Float */;
val* var12 /* : Numeric */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
val* var25 /* : Numeric */;
var_other = p0;
/* <var_other:Numeric> isa Float */
cltype = type_standard__Float.color;
idtype = type_standard__Float.id;
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
if (var1){
{
{ /* Inline kernel#Int#to_f (self) on <self:Int> */
var4 = (double)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var2,var_other) on <var2:Float> */
/* Covariant cast for argument 0 (i) <var_other:Numeric(Float)> isa OTHER */
/* <var_other:Numeric(Float)> isa OTHER */
var7 = 1; /* easy <var_other:Numeric(Float)> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 341);
fatal_exit(1);
}
var10 = ((struct instance_standard__Float*)var_other)->value; /* autounbox from Numeric to Float */;
var11 = var2 - var10;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var12 = BOX_standard__Float(var5); /* autobox from Float to Numeric */
var = var12;
goto RET_LABEL;
} else {
/* <var_other:Numeric> isa Int */
cltype14 = type_standard__Int.color;
idtype15 = type_standard__Int.id;
if(cltype14 >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
var_class_name16 = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__numeric, 98);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#- (self,var_other) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_other:Numeric(Int)> isa OTHER */
/* <var_other:Numeric(Int)> isa OTHER */
var19 = 1; /* easy <var_other:Numeric(Int)> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var23 = (long)(var_other)>>2;
var24 = self - var23;
var17 = var24;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var25 = (val*)(var17<<2|1);
var = var25;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method numeric#Int#sub for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard__numeric___Int___Numeric__sub(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = standard__numeric___Int___Numeric__sub(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric#Int#mul for (self: Int, Numeric): Numeric */
val* standard__numeric___Int___Numeric__mul(long self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Numeric */;
short int var1 /* : Bool */;
int cltype;
int idtype;
double var2 /* : Float */;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
double var10 /* : Float */;
double var11 /* : Float */;
val* var12 /* : Numeric */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
val* var25 /* : Numeric */;
var_other = p0;
/* <var_other:Numeric> isa Float */
cltype = type_standard__Float.color;
idtype = type_standard__Float.id;
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
if (var1){
{
{ /* Inline kernel#Int#to_f (self) on <self:Int> */
var4 = (double)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var2,var_other) on <var2:Float> */
/* Covariant cast for argument 0 (i) <var_other:Numeric(Float)> isa OTHER */
/* <var_other:Numeric(Float)> isa OTHER */
var7 = 1; /* easy <var_other:Numeric(Float)> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 342);
fatal_exit(1);
}
var10 = ((struct instance_standard__Float*)var_other)->value; /* autounbox from Numeric to Float */;
var11 = var2 * var10;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var12 = BOX_standard__Float(var5); /* autobox from Float to Numeric */
var = var12;
goto RET_LABEL;
} else {
/* <var_other:Numeric> isa Int */
cltype14 = type_standard__Int.color;
idtype15 = type_standard__Int.id;
if(cltype14 >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
var_class_name16 = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__numeric, 107);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#* (self,var_other) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_other:Numeric(Int)> isa OTHER */
/* <var_other:Numeric(Int)> isa OTHER */
var19 = 1; /* easy <var_other:Numeric(Int)> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var23 = (long)(var_other)>>2;
var24 = self * var23;
var17 = var24;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var25 = (val*)(var17<<2|1);
var = var25;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method numeric#Int#mul for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard__numeric___Int___Numeric__mul(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = standard__numeric___Int___Numeric__mul(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric#Int#div for (self: Int, Numeric): Numeric */
val* standard__numeric___Int___Numeric__div(long self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Numeric */;
short int var1 /* : Bool */;
int cltype;
int idtype;
double var2 /* : Float */;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
double var10 /* : Float */;
double var11 /* : Float */;
val* var12 /* : Numeric */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
double var20 /* : Float */;
double var22 /* : Float */;
double var23 /* : Float */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
double var29 /* : Float */;
val* var30 /* : Numeric */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
long var38 /* : Int */;
val* var39 /* : Numeric */;
var_other = p0;
/* <var_other:Numeric> isa Float */
cltype = type_standard__Float.color;
idtype = type_standard__Float.id;
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
if (var1){
{
{ /* Inline kernel#Int#to_f (self) on <self:Int> */
var4 = (double)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var2,var_other) on <var2:Float> */
/* Covariant cast for argument 0 (i) <var_other:Numeric(Float)> isa OTHER */
/* <var_other:Numeric(Float)> isa OTHER */
var7 = 1; /* easy <var_other:Numeric(Float)> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 343);
fatal_exit(1);
}
var10 = ((struct instance_standard__Float*)var_other)->value; /* autounbox from Numeric to Float */;
var11 = var2 / var10;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var12 = BOX_standard__Float(var5); /* autobox from Float to Numeric */
var = var12;
goto RET_LABEL;
} else {
/* <var_other:Numeric> isa Int */
cltype14 = type_standard__Int.color;
idtype15 = type_standard__Int.id;
if(cltype14 >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype14] == idtype15;
}
if (var13){
{
{ /* Inline kernel#Int#== (var_other,0l) on <var_other:Numeric(Int)> */
var19 = (long)(var_other)>>2;
var18 = (var_other != NULL) && (var19 == 0l);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline kernel#Int#to_f (self) on <self:Int> */
var22 = (double)self;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var20,0.0) on <var20:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var25 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 343);
fatal_exit(1);
}
var29 = var20 / 0.0;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var30 = BOX_standard__Float(var23); /* autobox from Float to Numeric */
var = var30;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#/ (self,var_other) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_other:Numeric(Int)> isa OTHER */
/* <var_other:Numeric(Int)> isa OTHER */
var33 = 1; /* easy <var_other:Numeric(Int)> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = var_other == NULL ? "null" : (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 431);
fatal_exit(1);
}
var37 = (long)(var_other)>>2;
var38 = self / var37;
var31 = var38;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var39 = (val*)(var31<<2|1);
var = var39;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__numeric, 118);
fatal_exit(1);
}
}
RET_LABEL:;
return var;
}
/* method numeric#Int#div for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard__numeric___Int___Numeric__div(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = standard__numeric___Int___Numeric__div(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric#Float#add for (self: Float, Numeric): Numeric */
val* standard__numeric___Float___Numeric__add(double self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Numeric */;
double var1 /* : Float */;
double var2 /* : Float */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var5 /* : Float */;
val* var6 /* : Numeric */;
var_other = p0;
{
var1 = ((double(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__kernel__Numeric__to_f]))(var_other); /* to_f on <var_other:Numeric>*/
}
{
{ /* Inline kernel#Float#+ (self,var1) on <self:Float> */
/* Covariant cast for argument 0 (i) <var1:Float> isa OTHER */
/* <var1:Float> isa OTHER */
var4 = 1; /* easy <var1:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 339);
fatal_exit(1);
}
var5 = self + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var6 = BOX_standard__Float(var2); /* autobox from Float to Numeric */
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method numeric#Float#add for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard__numeric___Float___Numeric__add(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = standard__numeric___Float___Numeric__add(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric#Float#sub for (self: Float, Numeric): Numeric */
val* standard__numeric___Float___Numeric__sub(double self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Numeric */;
double var1 /* : Float */;
double var2 /* : Float */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var5 /* : Float */;
val* var6 /* : Numeric */;
var_other = p0;
{
var1 = ((double(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__kernel__Numeric__to_f]))(var_other); /* to_f on <var_other:Numeric>*/
}
{
{ /* Inline kernel#Float#- (self,var1) on <self:Float> */
/* Covariant cast for argument 0 (i) <var1:Float> isa OTHER */
/* <var1:Float> isa OTHER */
var4 = 1; /* easy <var1:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 341);
fatal_exit(1);
}
var5 = self - var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var6 = BOX_standard__Float(var2); /* autobox from Float to Numeric */
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method numeric#Float#sub for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard__numeric___Float___Numeric__sub(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = standard__numeric___Float___Numeric__sub(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric#Float#div for (self: Float, Numeric): Numeric */
val* standard__numeric___Float___Numeric__div(double self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Numeric */;
double var1 /* : Float */;
double var2 /* : Float */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var5 /* : Float */;
val* var6 /* : Numeric */;
var_other = p0;
{
var1 = ((double(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__kernel__Numeric__to_f]))(var_other); /* to_f on <var_other:Numeric>*/
}
{
{ /* Inline kernel#Float#/ (self,var1) on <self:Float> */
/* Covariant cast for argument 0 (i) <var1:Float> isa OTHER */
/* <var1:Float> isa OTHER */
var4 = 1; /* easy <var1:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 343);
fatal_exit(1);
}
var5 = self / var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var6 = BOX_standard__Float(var2); /* autobox from Float to Numeric */
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method numeric#Float#div for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard__numeric___Float___Numeric__div(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = standard__numeric___Float___Numeric__div(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric#Float#mul for (self: Float, Numeric): Numeric */
val* standard__numeric___Float___Numeric__mul(double self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Numeric */;
double var1 /* : Float */;
double var2 /* : Float */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var5 /* : Float */;
val* var6 /* : Numeric */;
var_other = p0;
{
var1 = ((double(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__kernel__Numeric__to_f]))(var_other); /* to_f on <var_other:Numeric>*/
}
{
{ /* Inline kernel#Float#* (self,var1) on <self:Float> */
/* Covariant cast for argument 0 (i) <var1:Float> isa OTHER */
/* <var1:Float> isa OTHER */
var4 = 1; /* easy <var1:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 342);
fatal_exit(1);
}
var5 = self * var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var6 = BOX_standard__Float(var2); /* autobox from Float to Numeric */
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method numeric#Float#mul for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_standard__numeric___Float___Numeric__mul(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = standard__numeric___Float___Numeric__mul(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
