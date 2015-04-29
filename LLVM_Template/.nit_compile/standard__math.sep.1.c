#include "standard__math.sep.0.h"
/* method math#Int#rand for (self: Int): Int */
long standard__math___Int___rand(long self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = kernel_Int_Int_rand_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#bin_and for (self: Int, Int): Int */
long standard__math___Int___bin_and(long self, long p0) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = kernel_Int_Int_binand_0(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#bin_or for (self: Int, Int): Int */
long standard__math___Int___bin_or(long self, long p0) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = kernel_Int_Int_binor_0(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#bin_xor for (self: Int, Int): Int */
long standard__math___Int___bin_xor(long self, long p0) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = kernel_Int_Int_binxor_0(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#bin_not for (self: Int): Int */
long standard__math___Int___bin_not(long self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = kernel_Int_Int_binnot_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#sqrt for (self: Int): Int */
long standard__math___Int___sqrt(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = math___Int_sqrt___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#gcd for (self: Int, Int): Int */
long standard__math___Int___gcd(long self, long p0) {
long var /* : Int */;
long var_o /* var o: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var57 /* : Int */;
long var58 /* : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
long var62 /* : Int */;
long var64 /* : Int */;
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
long var82 /* : Int */;
long var83 /* : Int */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
long var91 /* : Int */;
long var93 /* : Int */;
long var94 /* : Int */;
var_o = p0;
{
{ /* Inline kernel#Int#< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var4 = self < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var7 = -self;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var8 = standard__math___Int___gcd(var5, var_o);
{
{ /* Inline kernel#Int#unary - (var8) on <var8:Int> */
var11 = -var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_o,0l) on <var_o:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var18 = var_o < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline kernel#Int#unary - (var_o) on <var_o:Int> */
var21 = -var_o;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var22 = standard__math___Int___gcd(self, var19);
{
{ /* Inline kernel#Int#unary - (var22) on <var22:Int> */
var25 = -var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (self,0l) on <self:Int> */
var29 = self == 0l;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_ = var27;
if (var27){
var26 = var_;
} else {
{
{ /* Inline kernel#Int#== (var_o,self) on <var_o:Int> */
var32 = var_o == self;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var26 = var30;
}
if (var26){
var = var_o;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_o,0l) on <var_o:Int> */
var35 = var_o == 0l;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var = self;
goto RET_LABEL;
} else {
}
var36 = standard__math___Int___bin_and(self, 1l);
{
{ /* Inline kernel#Int#== (var36,0l) on <var36:Int> */
var39 = var36 == 0l;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
var40 = standard__math___Int___bin_and(var_o, 1l);
{
{ /* Inline kernel#Int#== (var40,1l) on <var40:Int> */
var43 = var40 == 1l;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#rshift (self,1l) on <self:Int> */
var46 = self >> 1l;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var47 = standard__math___Int___gcd(var44, var_o);
var = var47;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#rshift (self,1l) on <self:Int> */
var50 = self >> 1l;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel#Int#rshift (var_o,1l) on <var_o:Int> */
var53 = var_o >> 1l;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var54 = standard__math___Int___gcd(var48, var51);
{
{ /* Inline kernel#Int#lshift (var54,1l) on <var54:Int> */
var57 = var54 << 1l;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var = var55;
goto RET_LABEL;
}
} else {
}
var58 = standard__math___Int___bin_and(var_o, 1l);
{
{ /* Inline kernel#Int#== (var58,0l) on <var58:Int> */
var61 = var58 == 0l;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
{
{ /* Inline kernel#Int#rshift (var_o,1l) on <var_o:Int> */
var64 = var_o >> 1l;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var65 = standard__math___Int___gcd(self, var62);
var = var65;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#> (self,var_o) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_o:Int> isa OTHER */
/* <var_o:Int> isa OTHER */
var68 = 1; /* easy <var_o:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var72 = self > var_o;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
{ /* Inline kernel#Int#- (self,var_o) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_o:Int> isa OTHER */
/* <var_o:Int> isa OTHER */
var75 = 1; /* easy <var_o:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var79 = self - var_o;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline kernel#Int#rshift (var73,1l) on <var73:Int> */
var82 = var73 >> 1l;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var83 = standard__math___Int___gcd(var80, var_o);
var = var83;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#- (var_o,self) on <var_o:Int> */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var86 = 1; /* easy <self:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var90 = var_o - self;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Int#rshift (var84,1l) on <var84:Int> */
var93 = var84 >> 1l;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var94 = standard__math___Int___gcd(var91, self);
var = var94;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#is_even for (self: Int): Bool */
short int standard__math___Int___is_even(long self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Int#% (self,2l) on <self:Int> */
var3 = self % 2l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#is_odd for (self: Int): Bool */
short int standard__math___Int___is_odd(long self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var1 = standard__math___Int___is_even(self);
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#** for (self: Int, Int): Int */
long standard__math___Int____42d_42d(long self, long p0) {
long var /* : Int */;
long var_e /* var e: Int */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
double var6 /* : Float */;
double var7 /* : Float */;
long var8 /* : Int */;
long var10 /* : Int */;
var_e = p0;
{
{ /* Inline kernel#Int#to_f (self) on <self:Int> */
var3 = (double)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#to_f (var_e) on <var_e:Int> */
var6 = (double)var_e;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var7 = standard__math___Float___pow(var1, var4);
{
{ /* Inline kernel#Float#to_i (var7) on <var7:Float> */
var10 = (long)var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#factorial for (self: Int): Int */
long standard__math___Int___factorial(long self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var_res /* var res: Int */;
long var_n /* var n: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
{
{ /* Inline kernel#Int#>= (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 424);
fatal_exit(1);
}
var4 = self >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__math, 105);
fatal_exit(1);
}
var_res = 1l;
var_n = self;
for(;;) {
{
{ /* Inline kernel#Int#> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var11 = var_n > 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline kernel#Int#* (var_res,var_n) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var_n:Int> isa OTHER */
/* <var_n:Int> isa OTHER */
var14 = 1; /* easy <var_n:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 430);
fatal_exit(1);
}
var18 = var_res * var_n;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_res = var12;
{
{ /* Inline kernel#Int#- (var_n,1l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var25 = var_n - 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_n = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#sqrt for (self: Float): Float */
double standard__math___Float___sqrt(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_sqrt_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#cos for (self: Float): Float */
double standard__math___Float___cos(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_cos_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#sin for (self: Float): Float */
double standard__math___Float___sin(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_sin_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#tan for (self: Float): Float */
double standard__math___Float___tan(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_tan_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#acos for (self: Float): Float */
double standard__math___Float___acos(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_acos_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#asin for (self: Float): Float */
double standard__math___Float___asin(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_asin_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#atan for (self: Float): Float */
double standard__math___Float___atan(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_atan_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#abs for (self: Float): Float */
double standard__math___Float___abs(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = math___Float_abs___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#pow for (self: Float, Float): Float */
double standard__math___Float___pow(double self, double p0) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_pow_1(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#log for (self: Float): Float */
double standard__math___Float___log(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_log_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#log_base for (self: Float, Float): Float */
double standard__math___Float___log_base(double self, double p0) {
double var /* : Float */;
double var_base /* var base: Float */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var6 /* : Float */;
var_base = p0;
var1 = standard__math___Float___log(self);
var2 = standard__math___Float___log(var_base);
{
{ /* Inline kernel#Float#/ (var1,var2) on <var1:Float> */
/* Covariant cast for argument 0 (i) <var2:Float> isa OTHER */
/* <var2:Float> isa OTHER */
var5 = 1; /* easy <var2:Float> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 343);
fatal_exit(1);
}
var6 = var1 / var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#exp for (self: Float): Float */
double standard__math___Float___exp(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_exp_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#ceil for (self: Float): Float */
double standard__math___Float___ceil(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = math___Float_ceil___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#floor for (self: Float): Float */
double standard__math___Float___floor(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = math___Float_floor___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#round for (self: Float): Float */
double standard__math___Float___round(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = round(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#rand for (self: Float): Float */
double standard__math___Float___rand(double self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Float_Float_rand_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#hypot_with for (self: Float, Float): Float */
double standard__math___Float___hypot_with(double self, double p0) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = hypotf(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#is_nan for (self: Float): Bool */
short int standard__math___Float___is_nan(double self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
var1 = isnan(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf for (self: Float): Int */
long standard__math___Float___is_inf(double self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
var1 = standard__math___Float___is_inf_extern(self);
if (var1){
{
{ /* Inline kernel#Float#< (self,0.0) on <self:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var4 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 335);
fatal_exit(1);
}
var5 = self < 0.0;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var8 = -1l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
} else {
}
var = 1l;
goto RET_LABEL;
} else {
}
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf_extern for (self: Float): Bool */
short int standard__math___Float___is_inf_extern(double self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
var1 = isinf(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#lerp for (self: Float, Float, Float): Float */
double standard__math___Float___lerp(double self, double p0, double p1) {
double var /* : Float */;
double var_a /* var a: Float */;
double var_b /* var b: Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
double var19 /* : Float */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
double var25 /* : Float */;
var_a = p0;
var_b = p1;
{
{ /* Inline kernel#Float#- (1.0,self) on <1.0:Float> */
/* Covariant cast for argument 0 (i) <self:Float> isa OTHER */
/* <self:Float> isa OTHER */
var3 = 1; /* easy <self:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 341);
fatal_exit(1);
}
var4 = 1.0 - self;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var1,var_a) on <var1:Float> */
/* Covariant cast for argument 0 (i) <var_a:Float> isa OTHER */
/* <var_a:Float> isa OTHER */
var7 = 1; /* easy <var_a:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 342);
fatal_exit(1);
}
var11 = var1 * var_a;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Float#* (self,var_b) on <self:Float> */
/* Covariant cast for argument 0 (i) <var_b:Float> isa OTHER */
/* <var_b:Float> isa OTHER */
var14 = 1; /* easy <var_b:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 342);
fatal_exit(1);
}
var18 = self * var_b;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var5,var12) on <var5:Float> */
/* Covariant cast for argument 0 (i) <var12:Float> isa OTHER */
/* <var12:Float> isa OTHER */
var21 = 1; /* easy <var12:Float> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 339);
fatal_exit(1);
}
var25 = var5 + var12;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Collection#rand for (self: Collection[nullable Object]): nullable Object */
val* standard__math___Collection___rand(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_rand_index /* var rand_index: Int */;
val* var_ /* var : Collection[nullable Object] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Collection[nullable Object]>*/
}
if (var1){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__math, 246);
fatal_exit(1);
} else {
}
{
var2 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
var3 = standard__math___Int___rand(var2);
var_rand_index = var3;
var_ = self;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[nullable Object]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[nullable Object]>*/
}
var_e = var7;
{
{ /* Inline kernel#Int#== (var_rand_index,0l) on <var_rand_index:Int> */
var10 = var_rand_index == 0l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = var_e;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#- (var_rand_index,1l) on <var_rand_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var14 = var_rand_index - 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_rand_index = var11;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[nullable Object]>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__math, 253);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method math#SequenceRead#rand for (self: SequenceRead[nullable Object]): nullable Object */
val* standard__math___SequenceRead___Collection__rand(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:SequenceRead[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__math, 261);
fatal_exit(1);
}
{
var3 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
var4 = standard__math___Int___rand(var3);
{
var5 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, var4); /* [] on <self:SequenceRead[nullable Object]>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Sys#init for (self: Sys) */
void standard__math___Sys___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__math___Sys___standard__kernel__Object__init]))(self); /* init on <self:Sys>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__math__Sys__srand]))(self); /* srand on <self:Sys>*/
}
RET_LABEL:;
}
/* method math#Sys#atan2 for (self: Sys, Float, Float): Float */
double standard__math___Sys___atan2(val* self, double p0, double p1) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Any_Any_atan2_2(self, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Sys#pi for (self: Sys): Float */
double standard__math___Sys___pi(val* self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = kernel_Any_Any_pi_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Sys#srand_from for (self: Sys, Int) */
void standard__math___Sys___srand_from(val* self, long p0) {
kernel_Any_Any_srand_from_1(self, p0);
RET_LABEL:;
}
/* method math#Sys#srand for (self: Sys) */
void standard__math___Sys___srand(val* self) {
kernel_Any_Any_srand_0(self);
RET_LABEL:;
}
