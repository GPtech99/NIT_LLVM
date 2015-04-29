#include "nit__location.sep.0.h"
/* method location#SourceFile#filename for (self: SourceFile): String */
val* nit___nit__SourceFile___filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#filename= for (self: SourceFile, String) */
void nit___nit__SourceFile___filename_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__SourceFile___filename].val = p0; /* _filename on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#string for (self: SourceFile): String */
val* nit___nit__SourceFile___string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__location__SourceFile___string].val; /* _string on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#string= for (self: SourceFile, String) */
void nit___nit__SourceFile___string_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__SourceFile___string].val = p0; /* _string on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#stream for (self: SourceFile): Reader */
val* nit___nit__SourceFile___stream(val* self) {
val* var /* : Reader */;
val* var1 /* : Reader */;
var1 = self->attrs[COLOR_nit__location__SourceFile___stream].val; /* _stream on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#stream= for (self: SourceFile, Reader) */
void nit___nit__SourceFile___stream_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__SourceFile___stream].val = p0; /* _stream on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#init for (self: SourceFile) */
void nit___nit__SourceFile___standard__kernel__Object__init(val* self) {
val* var /* : Reader */;
val* var1 /* : String */;
val* var2 /* : Array[Int] */;
val* var3 /* : nullable Object */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__SourceFile__stream]))(self); /* stream on <self:SourceFile>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__stream__Reader__read_all]))(var); /* read_all on <var:Reader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__location__SourceFile__string_61d]))(self, var1); /* string= on <self:SourceFile>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__SourceFile__line_starts]))(self); /* line_starts on <self:SourceFile>*/
}
{
var3 = (val*)(0l<<2|1);
((void(*)(val* self, long p0, val* p1))(var2->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var2, 0l, var3); /* []= on <var2:Array[Int]>*/
}
RET_LABEL:;
}
/* method location#SourceFile#from_string for (self: SourceFile, String, String) */
void nit___nit__SourceFile___from_string(val* self, val* p0, val* p1) {
val* var_filename /* var filename: String */;
val* var_string /* var string: String */;
val* var /* : Array[Int] */;
val* var1 /* : nullable Object */;
var_filename = p0;
var_string = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__location__SourceFile__filename_61d]))(self, var_filename); /* filename= on <self:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__location__SourceFile__string_61d]))(self, var_string); /* string= on <self:SourceFile>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__SourceFile__line_starts]))(self); /* line_starts on <self:SourceFile>*/
}
{
var1 = (val*)(0l<<2|1);
((void(*)(val* self, long p0, val* p1))(var->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var, 0l, var1); /* []= on <var:Array[Int]>*/
}
RET_LABEL:;
}
/* method location#SourceFile#line_starts for (self: SourceFile): Array[Int] */
val* nit___nit__SourceFile___line_starts(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
var1 = self->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#line_starts= for (self: SourceFile, Array[Int]) */
void nit___nit__SourceFile___line_starts_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__SourceFile___line_starts].val = p0; /* _line_starts on <self:SourceFile> */
RET_LABEL:;
}
/* method location#Location#file for (self: Location): nullable SourceFile */
val* nit___nit__Location___file(val* self) {
val* var /* : nullable SourceFile */;
val* var1 /* : nullable SourceFile */;
var1 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#file= for (self: Location, nullable SourceFile) */
void nit___nit__Location___file_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__Location___file].val = p0; /* _file on <self:Location> */
RET_LABEL:;
}
/* method location#Location#line_start for (self: Location): Int */
long nit___nit__Location___line_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_start= for (self: Location, Int) */
void nit___nit__Location___line_start_61d(val* self, long p0) {
self->attrs[COLOR_nit__location__Location___line_start].l = p0; /* _line_start on <self:Location> */
RET_LABEL:;
}
/* method location#Location#line_end for (self: Location): Int */
long nit___nit__Location___line_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_end= for (self: Location, Int) */
void nit___nit__Location___line_end_61d(val* self, long p0) {
self->attrs[COLOR_nit__location__Location___line_end].l = p0; /* _line_end on <self:Location> */
RET_LABEL:;
}
/* method location#Location#column_start for (self: Location): Int */
long nit___nit__Location___column_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_start= for (self: Location, Int) */
void nit___nit__Location___column_start_61d(val* self, long p0) {
self->attrs[COLOR_nit__location__Location___column_start].l = p0; /* _column_start on <self:Location> */
RET_LABEL:;
}
/* method location#Location#column_end for (self: Location): Int */
long nit___nit__Location___column_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_end= for (self: Location, Int) */
void nit___nit__Location___column_end_61d(val* self, long p0) {
self->attrs[COLOR_nit__location__Location___column_end].l = p0; /* _column_end on <self:Location> */
RET_LABEL:;
}
/* method location#Location#pstart for (self: Location): Int */
long nit___nit__Location___pstart(val* self) {
long var /* : Int */;
val* var1 /* : nullable SourceFile */;
val* var2 /* : Array[Int] */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__file]))(self); /* file on <self:Location>*/
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 78);
fatal_exit(1);
} else {
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__location__SourceFile__line_starts]))(var1); /* line_starts on <var1:nullable SourceFile>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((val*(*)(val* self, long p0))(var2->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var2, var4); /* [] on <var2:Array[Int]>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
{
{ /* Inline kernel#Int#+ (var8,var9) on <var8:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var16 = (long)(var8)>>2;
var17 = var16 + var9;
var10 = var17;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var10,1l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var24 = var10 - 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#pend for (self: Location): Int */
long nit___nit__Location___pend(val* self) {
long var /* : Int */;
val* var1 /* : nullable SourceFile */;
val* var2 /* : Array[Int] */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__file]))(self); /* file on <self:Location>*/
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 81);
fatal_exit(1);
} else {
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__location__SourceFile__line_starts]))(var1); /* line_starts on <var1:nullable SourceFile>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((val*(*)(val* self, long p0))(var2->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var2, var4); /* [] on <var2:Array[Int]>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_end]))(self); /* column_end on <self:Location>*/
}
{
{ /* Inline kernel#Int#+ (var8,var9) on <var8:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var16 = (long)(var8)>>2;
var17 = var16 + var9;
var10 = var17;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var10,1l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var24 = var10 - 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#text for (self: Location): String */
val* nit___nit__Location___text(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_l /* var l: Location */;
long var4 /* : Int */;
long var_pstart /* var pstart: Int */;
long var5 /* : Int */;
long var_pend /* var pend: Int */;
val* var6 /* : nullable SourceFile */;
val* var7 /* : String */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__text_cache]))(self); /* text_cache on <self:Location>*/
}
var_res = var1;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable String>*/
var2 = var3;
}
if (var2){
var = var_res;
goto RET_LABEL;
} else {
}
var_l = self;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__pstart]))(self); /* pstart on <self:Location>*/
}
var_pstart = var4;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__pend]))(self); /* pend on <self:Location>*/
}
var_pend = var5;
{
var6 = ((val*(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__file]))(var_l); /* file on <var_l:Location>*/
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 91);
fatal_exit(1);
} else {
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_nit__location__SourceFile__string]))(var6); /* string on <var6:nullable SourceFile>*/
}
{
{ /* Inline kernel#Int#- (var_pend,var_pstart) on <var_pend:Int> */
/* Covariant cast for argument 0 (i) <var_pstart:Int> isa OTHER */
/* <var_pstart:Int> isa OTHER */
var10 = 1; /* easy <var_pstart:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var11 = var_pend - var_pstart;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var18 = var8 + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((val*(*)(val* self, long p0, long p1))(var7->class->vft[COLOR_standard__string__Text__substring]))(var7, var_pstart, var12); /* substring on <var7:String>*/
}
var_res = var19;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__location__Location__text_cache_61d]))(self, var_res); /* text_cache= on <self:Location>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#text_cache for (self: Location): nullable String */
val* nit___nit__Location___text_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__location__Location___text_cache].val; /* _text_cache on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#text_cache= for (self: Location, nullable String) */
void nit___nit__Location___text_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__Location___text_cache].val = p0; /* _text_cache on <self:Location> */
RET_LABEL:;
}
/* method location#Location#== for (self: Location, nullable Object): Bool */
short int nit___nit__Location___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
val* var5 /* : nullable SourceFile */;
val* var6 /* : nullable SourceFile */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
var_other = p0;
if (var_other == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other, ((val*)NULL)); /* == on <var_other:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Object)> isa Location */
cltype = type_nit__Location.color;
idtype = type_nit__Location.id;
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
var4 = !var3;
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__file]))(var_other); /* file on <var_other:nullable Object(Location)>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__file]))(self); /* file on <self:Location>*/
}
if (var5 == NULL) {
var7 = (var6 != NULL);
} else {
var8 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var5, var6); /* != on <var5:nullable SourceFile>*/
var7 = var8;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
var9 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__line_start]))(var_other); /* line_start on <var_other:nullable Object(Location)>*/
}
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
{ /* Inline kernel#Int#!= (var9,var10) on <var9:Int> */
var13 = var9 == var10;
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
{
var15 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__line_end]))(var_other); /* line_end on <var_other:nullable Object(Location)>*/
}
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
{
{ /* Inline kernel#Int#!= (var15,var16) on <var15:Int> */
var19 = var15 == var16;
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
var = 0;
goto RET_LABEL;
} else {
}
{
var21 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__column_start]))(var_other); /* column_start on <var_other:nullable Object(Location)>*/
}
{
var22 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
{
{ /* Inline kernel#Int#!= (var21,var22) on <var21:Int> */
var25 = var21 == var22;
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
var = 0;
goto RET_LABEL;
} else {
}
{
var27 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__column_end]))(var_other); /* column_end on <var_other:nullable Object(Location)>*/
}
{
var28 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_end]))(self); /* column_end on <self:Location>*/
}
{
{ /* Inline kernel#Int#!= (var27,var28) on <var27:Int> */
var31 = var27 == var28;
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#located_in for (self: Location, nullable Location): Bool */
short int nit___nit__Location___located_in(val* self, val* p0) {
short int var /* : Bool */;
val* var_loc /* var loc: nullable Location */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var_ /* var : Bool */;
long var56 /* : Int */;
long var57 /* : Int */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
short int var64 /* : Bool */;
var_loc = p0;
if (var_loc == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_loc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_loc, ((val*)NULL)); /* == on <var_loc:nullable Location>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
var4 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__line_start]))(var_loc); /* line_start on <var_loc:nullable Location(Location)>*/
}
{
{ /* Inline kernel#Int#< (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var8 = var3 < var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
var10 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__line_end]))(var_loc); /* line_end on <var_loc:nullable Location(Location)>*/
}
{
{ /* Inline kernel#Int#> (var9,var10) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var17 = var9 > var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
{
var18 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
{
var19 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__line_end]))(var_loc); /* line_end on <var_loc:nullable Location(Location)>*/
}
{
{ /* Inline kernel#Int#> (var18,var19) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var26 = var18 > var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var = 0;
goto RET_LABEL;
} else {
}
{
var27 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
var28 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__line_start]))(var_loc); /* line_start on <var_loc:nullable Location(Location)>*/
}
{
{ /* Inline kernel#Int#== (var27,var28) on <var27:Int> */
var31 = var27 == var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
var32 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
{
var33 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__column_start]))(var_loc); /* column_start on <var_loc:nullable Location(Location)>*/
}
{
{ /* Inline kernel#Int#< (var32,var33) on <var32:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var40 = var32 < var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var = 0;
goto RET_LABEL;
} else {
}
{
var41 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
{
var42 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__column_end]))(var_loc); /* column_end on <var_loc:nullable Location(Location)>*/
}
{
{ /* Inline kernel#Int#> (var41,var42) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var49 = var41 > var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
var51 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
{
var52 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__line_end]))(var_loc); /* line_end on <var_loc:nullable Location(Location)>*/
}
{
{ /* Inline kernel#Int#== (var51,var52) on <var51:Int> */
var55 = var51 == var52;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_ = var53;
if (var53){
{
var56 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_end]))(self); /* column_end on <self:Location>*/
}
{
var57 = ((long(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__column_end]))(var_loc); /* column_end on <var_loc:nullable Location(Location)>*/
}
{
{ /* Inline kernel#Int#> (var56,var57) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var57:Int> isa OTHER */
/* <var57:Int> isa OTHER */
var60 = 1; /* easy <var57:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var64 = var56 > var57;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var50 = var58;
} else {
var50 = var_;
}
if (var50){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#to_s for (self: Location): String */
val* nit___nit__Location___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var_file_part /* var file_part: String */;
val* var4 /* : nullable SourceFile */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable SourceFile */;
val* var8 /* : String */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable SourceFile */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : nullable SourceFile */;
val* var19 /* : String */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
long var49 /* : Int */;
val* var50 /* : String */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
long var64 /* : Int */;
val* var65 /* : String */;
long var66 /* : Int */;
val* var67 /* : String */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
long var85 /* : Int */;
val* var86 /* : String */;
long var87 /* : Int */;
val* var88 /* : String */;
long var89 /* : Int */;
val* var90 /* : String */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = standard___standard__NativeString___to_s_with_length(var2, 0l);
var1 = var3;
varonce = var1;
}
var_file_part = var1;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__file]))(self); /* file on <self:Location>*/
}
if (var4 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var4, ((val*)NULL)); /* != on <var4:nullable SourceFile>*/
var5 = var6;
}
if (var5){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__file]))(self); /* file on <self:Location>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 133);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__location__SourceFile__filename]))(var7); /* filename on <var7:nullable SourceFile>*/
}
var_file_part = var8;
} else {
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
{ /* Inline kernel#Int#<= (var9,0l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var12 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var13 = var9 <= 0l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = var_file_part;
goto RET_LABEL;
} else {
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__file]))(self); /* file on <self:Location>*/
}
if (var15 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var15, ((val*)NULL)); /* != on <var15:nullable SourceFile>*/
var16 = var17;
}
var_ = var16;
if (var16){
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__file]))(self); /* file on <self:Location>*/
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 138);
fatal_exit(1);
} else {
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nit__location__SourceFile__filename]))(var18); /* filename on <var18:nullable SourceFile>*/
}
{
var20 = ((long(*)(val* self))(var19->class->vft[COLOR_standard__string__Text__length]))(var19); /* length on <var19:String>*/
}
{
{ /* Inline kernel#Int#> (var20,0l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var23 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var27 = var20 > 0l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var14 = var21;
} else {
var14 = var_;
}
if (var14){
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ":";
var31 = standard___standard__NativeString___to_s_with_length(var30, 1l);
var29 = var31;
varonce28 = var29;
}
{
var32 = ((val*(*)(val* self, val* p0))(var_file_part->class->vft[COLOR_standard__string__String___43d]))(var_file_part, var29); /* + on <var_file_part:String>*/
}
var_file_part = var32;
} else {
}
{
var33 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
var34 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
{
{ /* Inline kernel#Int#== (var33,var34) on <var33:Int> */
var37 = var33 == var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
{
var38 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
{
var39 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_end]))(self); /* column_end on <self:Location>*/
}
{
{ /* Inline kernel#Int#== (var38,var39) on <var38:Int> */
var42 = var38 == var39;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
if (unlikely(varonce43==NULL)) {
var44 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = ",";
var48 = standard___standard__NativeString___to_s_with_length(var47, 1l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var44)->values[2]=var46;
} else {
var44 = varonce43;
varonce43 = NULL;
}
((struct instance_standard__NativeArray*)var44)->values[0]=var_file_part;
{
var49 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
var50 = standard__string___Int___Object__to_s(var49);
((struct instance_standard__NativeArray*)var44)->values[1]=var50;
{
var51 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
var52 = standard__string___Int___Object__to_s(var51);
((struct instance_standard__NativeArray*)var44)->values[3]=var52;
{
var53 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
var = var53;
goto RET_LABEL;
} else {
if (unlikely(varonce54==NULL)) {
var55 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = ",";
var59 = standard___standard__NativeString___to_s_with_length(var58, 1l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var55)->values[2]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "--";
var63 = standard___standard__NativeString___to_s_with_length(var62, 2l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var55)->values[4]=var61;
} else {
var55 = varonce54;
varonce54 = NULL;
}
((struct instance_standard__NativeArray*)var55)->values[0]=var_file_part;
{
var64 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
var65 = standard__string___Int___Object__to_s(var64);
((struct instance_standard__NativeArray*)var55)->values[1]=var65;
{
var66 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
var67 = standard__string___Int___Object__to_s(var66);
((struct instance_standard__NativeArray*)var55)->values[3]=var67;
{
var68 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_end]))(self); /* column_end on <self:Location>*/
}
var69 = standard__string___Int___Object__to_s(var68);
((struct instance_standard__NativeArray*)var55)->values[5]=var69;
{
var70 = ((val*(*)(val* self))(var55->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
var = var70;
goto RET_LABEL;
}
} else {
if (unlikely(varonce71==NULL)) {
var72 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = ",";
var76 = standard___standard__NativeString___to_s_with_length(var75, 1l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var72)->values[2]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "--";
var80 = standard___standard__NativeString___to_s_with_length(var79, 2l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var72)->values[4]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = ",";
var84 = standard___standard__NativeString___to_s_with_length(var83, 1l);
var82 = var84;
varonce81 = var82;
}
((struct instance_standard__NativeArray*)var72)->values[6]=var82;
} else {
var72 = varonce71;
varonce71 = NULL;
}
((struct instance_standard__NativeArray*)var72)->values[0]=var_file_part;
{
var85 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
var86 = standard__string___Int___Object__to_s(var85);
((struct instance_standard__NativeArray*)var72)->values[1]=var86;
{
var87 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
var88 = standard__string___Int___Object__to_s(var87);
((struct instance_standard__NativeArray*)var72)->values[3]=var88;
{
var89 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
var90 = standard__string___Int___Object__to_s(var89);
((struct instance_standard__NativeArray*)var72)->values[5]=var90;
{
var91 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_end]))(self); /* column_end on <self:Location>*/
}
var92 = standard__string___Int___Object__to_s(var91);
((struct instance_standard__NativeArray*)var72)->values[7]=var92;
{
var93 = ((val*(*)(val* self))(var72->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
var = var93;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method location#Location#relative_to for (self: Location, nullable Location): String */
val* nit___nit__Location___relative_to(val* self, val* p0) {
val* var /* : String */;
val* var_loc /* var loc: nullable Location */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : nullable SourceFile */;
val* var5 /* : nullable SourceFile */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Location */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
val* var_relative /* var relative: Location */;
val* var13 /* : Location */;
val* var14 /* : nullable SourceFile */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
val* var19 /* : String */;
var_loc = p0;
if (var_loc == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_loc->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_loc, ((val*)NULL)); /* != on <var_loc:nullable Location>*/
var2 = var3;
}
var_ = var2;
if (var2){
{
var4 = ((val*(*)(val* self))(var_loc->class->vft[COLOR_nit__location__Location__file]))(var_loc); /* file on <var_loc:nullable Location(Location)>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__file]))(self); /* file on <self:Location>*/
}
if (var4 == NULL) {
var6 = (var5 == NULL);
} else {
var7 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var5); /* == on <var4:nullable SourceFile>*/
var6 = var7;
}
var1 = var6;
} else {
var1 = var_;
}
if (var1){
var8 = NEW_nit__Location(&type_nit__Location);
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
{
var12 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_end]))(self); /* column_end on <self:Location>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__location__Location__file_61d]))(var8, ((val*)NULL)); /* file= on <var8:Location>*/
}
{
((void(*)(val* self, long p0))(var8->class->vft[COLOR_nit__location__Location__line_start_61d]))(var8, var9); /* line_start= on <var8:Location>*/
}
{
((void(*)(val* self, long p0))(var8->class->vft[COLOR_nit__location__Location__line_end_61d]))(var8, var10); /* line_end= on <var8:Location>*/
}
{
((void(*)(val* self, long p0))(var8->class->vft[COLOR_nit__location__Location__column_start_61d]))(var8, var11); /* column_start= on <var8:Location>*/
}
{
((void(*)(val* self, long p0))(var8->class->vft[COLOR_nit__location__Location__column_end_61d]))(var8, var12); /* column_end= on <var8:Location>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:Location>*/
}
var_relative = var8;
} else {
var13 = NEW_nit__Location(&type_nit__Location);
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__location__Location__file]))(self); /* file on <self:Location>*/
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
{
var18 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_end]))(self); /* column_end on <self:Location>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__location__Location__file_61d]))(var13, var14); /* file= on <var13:Location>*/
}
{
((void(*)(val* self, long p0))(var13->class->vft[COLOR_nit__location__Location__line_start_61d]))(var13, var15); /* line_start= on <var13:Location>*/
}
{
((void(*)(val* self, long p0))(var13->class->vft[COLOR_nit__location__Location__line_end_61d]))(var13, var16); /* line_end= on <var13:Location>*/
}
{
((void(*)(val* self, long p0))(var13->class->vft[COLOR_nit__location__Location__column_start_61d]))(var13, var17); /* column_start= on <var13:Location>*/
}
{
((void(*)(val* self, long p0))(var13->class->vft[COLOR_nit__location__Location__column_end_61d]))(var13, var18); /* column_end= on <var13:Location>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13); /* init on <var13:Location>*/
}
var_relative = var13;
}
{
var19 = ((val*(*)(val* self))(var_relative->class->vft[COLOR_standard__string__Object__to_s]))(var_relative); /* to_s on <var_relative:Location>*/
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#< for (self: Location, Location): Bool */
short int nit___nit__Location___standard__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Location */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Location> isa OTHER */
/* <p0:Location> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 164);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__kernel__Object___61d_61d]))(self, var_other); /* == on <self:Location>*/
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nit__location__Location__located_in]))(self, var_other); /* located_in on <self:Location>*/
}
if (var3){
var = 1;
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self, val* p0))(var_other->class->vft[COLOR_nit__location__Location__located_in]))(var_other, self); /* located_in on <var_other:Location>*/
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
var6 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__line_start]))(var_other); /* line_start on <var_other:Location>*/
}
{
{ /* Inline kernel#Int#!= (var5,var6) on <var5:Int> */
var9 = var5 == var6;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_start]))(self); /* line_start on <self:Location>*/
}
{
var12 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__line_start]))(var_other); /* line_start on <var_other:Location>*/
}
{
{ /* Inline kernel#Int#< (var11,var12) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var19 = var11 < var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var = var13;
goto RET_LABEL;
} else {
}
{
var20 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
{
var21 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__column_start]))(var_other); /* column_start on <var_other:Location>*/
}
{
{ /* Inline kernel#Int#!= (var20,var21) on <var20:Int> */
var24 = var20 == var21;
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
var26 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_start]))(self); /* column_start on <self:Location>*/
}
{
var27 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__column_start]))(var_other); /* column_start on <var_other:Location>*/
}
{
{ /* Inline kernel#Int#< (var26,var27) on <var26:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var34 = var26 < var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var = var28;
goto RET_LABEL;
} else {
}
{
var35 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
{
var36 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__line_end]))(var_other); /* line_end on <var_other:Location>*/
}
{
{ /* Inline kernel#Int#!= (var35,var36) on <var35:Int> */
var39 = var35 == var36;
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var41 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__line_end]))(self); /* line_end on <self:Location>*/
}
{
var42 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__line_end]))(var_other); /* line_end on <var_other:Location>*/
}
{
{ /* Inline kernel#Int#< (var41,var42) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var49 = var41 < var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var = var43;
goto RET_LABEL;
} else {
}
{
var50 = ((long(*)(val* self))(self->class->vft[COLOR_nit__location__Location__column_end]))(self); /* column_end on <self:Location>*/
}
{
var51 = ((long(*)(val* self))(var_other->class->vft[COLOR_nit__location__Location__column_end]))(var_other); /* column_end on <var_other:Location>*/
}
{
{ /* Inline kernel#Int#< (var50,var51) on <var50:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var54 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var58 = var50 < var51;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var = var52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#colored_line for (self: Location, String): String */
val* nit___nit__Location___colored_line(val* self, val* p0) {
val* var /* : String */;
val* var_color /* var color: String */;
char var1 /* : Char */;
char var3 /* : Char */;
char var_esc /* var esc: Char */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_def /* var def: String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_col /* var col: String */;
val* var_l /* var l: Location */;
long var23 /* : Int */;
long var_i /* var i: Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var27 /* : Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : nullable SourceFile */;
val* var33 /* : Array[Int] */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
val* var41 /* : nullable Object */;
long var42 /* : Int */;
long var_line_start /* var line_start: Int */;
long var_line_end /* var line_end: Int */;
val* var43 /* : nullable SourceFile */;
val* var44 /* : String */;
val* var_string /* var string: String */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
short int var_ /* var : Bool */;
val* var62 /* : SequenceRead[Char] */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
val* var70 /* : nullable Object */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
char var74 /* : Char */;
short int var75 /* : Bool */;
short int var_76 /* var : Bool */;
val* var77 /* : SequenceRead[Char] */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
val* var85 /* : nullable Object */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
char var89 /* : Char */;
short int var90 /* : Bool */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
long var98 /* : Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
short int var105 /* : Bool */;
long var106 /* : Int */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
val* var114 /* : Text */;
val* var_lstart /* var lstart: nullable Object */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
long var119 /* : Int */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
long var124 /* : Int */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
long var130 /* : Int */;
long var131 /* : Int */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
long var137 /* : Int */;
val* var138 /* : nullable Object */;
val* var_cend /* var cend: nullable Object */;
long var139 /* : Int */;
val* var140 /* : nullable Object */;
long var141 /* : Int */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
const char* var_class_name146;
long var147 /* : Int */;
long var148 /* : Int */;
long var149 /* : Int */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
const char* var_class_name155;
short int var156 /* : Bool */;
long var157 /* : Int */;
long var158 /* : Int */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
const char* var_class_name163;
long var164 /* : Int */;
long var165 /* : Int */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
const char* var_class_name170;
long var171 /* : Int */;
long var172 /* : Int */;
long var173 /* : Int */;
short int var175 /* : Bool */;
int cltype176;
int idtype177;
const char* var_class_name178;
long var179 /* : Int */;
long var180 /* : Int */;
long var181 /* : Int */;
short int var183 /* : Bool */;
int cltype184;
int idtype185;
const char* var_class_name186;
long var187 /* : Int */;
val* var188 /* : Text */;
val* var_lmid /* var lmid: nullable Object */;
long var189 /* : Int */;
short int var191 /* : Bool */;
int cltype192;
int idtype193;
const char* var_class_name194;
long var195 /* : Int */;
long var196 /* : Int */;
long var197 /* : Int */;
short int var199 /* : Bool */;
int cltype200;
int idtype201;
const char* var_class_name202;
long var203 /* : Int */;
long var204 /* : Int */;
short int var206 /* : Bool */;
int cltype207;
int idtype208;
const char* var_class_name209;
long var210 /* : Int */;
long var211 /* : Int */;
long var212 /* : Int */;
short int var214 /* : Bool */;
int cltype215;
int idtype216;
const char* var_class_name217;
long var218 /* : Int */;
val* var219 /* : Text */;
val* var_lend /* var lend: nullable Object */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
val* var223 /* : FlatString */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
val* var227 /* : FlatString */;
val* var228 /* : FlatBuffer */;
val* var_indent /* var indent: FlatBuffer */;
long var_j /* var j: Int */;
long var229 /* : Int */;
long var230 /* : Int */;
short int var232 /* : Bool */;
int cltype233;
int idtype234;
const char* var_class_name235;
long var236 /* : Int */;
long var237 /* : Int */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
long var243 /* : Int */;
long var_244 /* var : Int */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
int cltype248;
int idtype249;
const char* var_class_name250;
short int var251 /* : Bool */;
val* var252 /* : SequenceRead[Char] */;
val* var253 /* : nullable Object */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
char var257 /* : Char */;
long var258 /* : Int */;
val* var261 /* : NativeArray[String] */;
static val* varonce260;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
val* var265 /* : FlatString */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
val* var269 /* : FlatString */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
val* var273 /* : FlatString */;
val* var274 /* : String */;
val* var275 /* : String */;
var_color = p0;
{
{ /* Inline kernel#Int#ascii (27l) on <27l:Int> */
var3 = 27l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_esc = var1;
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "[0m";
var8 = standard___standard__NativeString___to_s_with_length(var7, 3l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
var9 = standard__string___Char___Object__to_s(var_esc);
((struct instance_standard__NativeArray*)var4)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var_def = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "[";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[1]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "m";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var12)->values[3]=var18;
} else {
var12 = varonce11;
varonce11 = NULL;
}
var21 = standard__string___Char___Object__to_s(var_esc);
((struct instance_standard__NativeArray*)var12)->values[0]=var21;
((struct instance_standard__NativeArray*)var12)->values[2]=var_color;
{
var22 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
var_col = var22;
var_l = self;
{
var23 = ((long(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__line_start]))(var_l); /* line_start on <var_l:Location>*/
}
var_i = var23;
{
{ /* Inline kernel#Int#<= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var26 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var27 = var_i <= 0l;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "";
var31 = standard___standard__NativeString___to_s_with_length(var30, 0l);
var29 = var31;
varonce28 = var29;
}
var = var29;
goto RET_LABEL;
} else {
}
{
var32 = ((val*(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__file]))(var_l); /* file on <var_l:Location>*/
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 191);
fatal_exit(1);
} else {
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_nit__location__SourceFile__line_starts]))(var32); /* line_starts on <var32:nullable SourceFile>*/
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var40 = var_i - 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = ((val*(*)(val* self, long p0))(var33->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var33, var34); /* [] on <var33:Array[Int]>*/
}
var42 = (long)(var41)>>2;
var_line_start = var42;
var_line_end = var_line_start;
{
var43 = ((val*(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__file]))(var_l); /* file on <var_l:Location>*/
}
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 193);
fatal_exit(1);
} else {
var44 = ((val*(*)(val* self))(var43->class->vft[COLOR_nit__location__SourceFile__string]))(var43); /* string on <var43:nullable SourceFile>*/
}
var_string = var44;
for(;;) {
{
{ /* Inline kernel#Int#+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var53 = var_line_end + 1l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
var54 = ((long(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string); /* length on <var_string:String>*/
}
{
{ /* Inline kernel#Int#< (var47,var54) on <var47:Int> */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var57 = 1; /* easy <var54:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var61 = var47 < var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_ = var55;
if (var55){
{
var62 = ((val*(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__chars]))(var_string); /* chars on <var_string:String>*/
}
{
{ /* Inline kernel#Int#+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var69 = var_line_end + 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
var70 = ((val*(*)(val* self, long p0))((((long)var62&3)?class_info[((long)var62&3)]:var62->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var62, var63); /* [] on <var62:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var70,'\n') on <var70:nullable Object(Char)> */
var74 = (char)((long)(var70)>>2);
var73 = (var70 != NULL) && (var74 == '\n');
var75 = !var73;
var71 = var75;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var46 = var71;
} else {
var46 = var_;
}
var_76 = var46;
if (var46){
{
var77 = ((val*(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__chars]))(var_string); /* chars on <var_string:String>*/
}
{
{ /* Inline kernel#Int#+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var80 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var84 = var_line_end + 1l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
var85 = ((val*(*)(val* self, long p0))((((long)var77&3)?class_info[((long)var77&3)]:var77->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var77, var78); /* [] on <var77:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var85,'\015') on <var85:nullable Object(Char)> */
var89 = (char)((long)(var85)>>2);
var88 = (var85 != NULL) && (var89 == '\015');
var90 = !var88;
var86 = var90;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var45 = var86;
} else {
var45 = var_76;
}
if (var45){
{
{ /* Inline kernel#Int#+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var93 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var97 = var_line_end + 1l;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var_line_end = var91;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var98 = ((long(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__column_start]))(var_l); /* column_start on <var_l:Location>*/
}
{
{ /* Inline kernel#Int#> (var98,0l) on <var98:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var101 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var105 = var98 > 0l;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
{
var106 = ((long(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__column_start]))(var_l); /* column_start on <var_l:Location>*/
}
{
{ /* Inline kernel#Int#- (var106,1l) on <var106:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var109 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var113 = var106 - 1l;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
{
var114 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var_line_start, var107); /* substring on <var_string:String>*/
}
var_lstart = var114;
} else {
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "";
var118 = standard___standard__NativeString___to_s_with_length(var117, 0l);
var116 = var118;
varonce115 = var116;
}
var_lstart = var116;
}
{
var119 = ((long(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__line_end]))(var_l); /* line_end on <var_l:Location>*/
}
{
{ /* Inline kernel#Int#!= (var_i,var119) on <var_i:Int> */
var122 = var_i == var119;
var123 = !var122;
var120 = var123;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
if (var120){
{
{ /* Inline kernel#Int#- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var126 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var130 = var_line_end - var_line_start;
var124 = var130;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var124,1l) on <var124:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var133 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var137 = var124 + 1l;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var138 = (val*)(var131<<2|1);
var_cend = var138;
} else {
{
var139 = ((long(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__column_end]))(var_l); /* column_end on <var_l:Location>*/
}
var140 = (val*)(var139<<2|1);
var_cend = var140;
}
{
{ /* Inline kernel#Int#+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var143 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var143)) {
var_class_name146 = var_cend == NULL ? "null" : (((long)var_cend&3)?type_info[((long)var_cend&3)]:var_cend->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name146);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var147 = (long)(var_cend)>>2;
var148 = var_line_start + var147;
var141 = var148;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
var149 = ((long(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string); /* length on <var_string:String>*/
}
{
{ /* Inline kernel#Int#<= (var141,var149) on <var141:Int> */
/* Covariant cast for argument 0 (i) <var149:Int> isa OTHER */
/* <var149:Int> isa OTHER */
var152 = 1; /* easy <var149:Int> isa OTHER*/
if (unlikely(!var152)) {
var_class_name155 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name155);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var156 = var141 <= var149;
var150 = var156;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
if (var150){
{
var157 = ((long(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__column_start]))(var_l); /* column_start on <var_l:Location>*/
}
{
{ /* Inline kernel#Int#+ (var_line_start,var157) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var157:Int> isa OTHER */
/* <var157:Int> isa OTHER */
var160 = 1; /* easy <var157:Int> isa OTHER*/
if (unlikely(!var160)) {
var_class_name163 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name163);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var164 = var_line_start + var157;
var158 = var164;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var158,1l) on <var158:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var167 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var167)) {
var_class_name170 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name170);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var171 = var158 - 1l;
var165 = var171;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
{
var172 = ((long(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__column_start]))(var_l); /* column_start on <var_l:Location>*/
}
{
{ /* Inline kernel#Int#- (var_cend,var172) on <var_cend:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var172:Int> isa OTHER */
/* <var172:Int> isa OTHER */
var175 = 1; /* easy <var172:Int> isa OTHER*/
if (unlikely(!var175)) {
var_class_name178 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name178);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var179 = (long)(var_cend)>>2;
var180 = var179 - var172;
var173 = var180;
goto RET_LABEL174;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var173,1l) on <var173:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var183 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var183)) {
var_class_name186 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name186);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var187 = var173 + 1l;
var181 = var187;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
}
{
var188 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var165, var181); /* substring on <var_string:String>*/
}
var_lmid = var188;
{
{ /* Inline kernel#Int#+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var191 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var191)) {
var_class_name194 = var_cend == NULL ? "null" : (((long)var_cend&3)?type_info[((long)var_cend&3)]:var_cend->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name194);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var195 = (long)(var_cend)>>2;
var196 = var_line_start + var195;
var189 = var196;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var199 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var199)) {
var_class_name202 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name202);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var203 = var_line_end - var_line_start;
var197 = var203;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var197,var_cend) on <var197:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var206 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var206)) {
var_class_name209 = var_cend == NULL ? "null" : (((long)var_cend&3)?type_info[((long)var_cend&3)]:var_cend->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name209);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var210 = (long)(var_cend)>>2;
var211 = var197 - var210;
var204 = var211;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var204,1l) on <var204:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var214 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var214)) {
var_class_name217 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name217);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var218 = var204 + 1l;
var212 = var218;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
{
var219 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var189, var212); /* substring on <var_string:String>*/
}
var_lend = var219;
} else {
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "";
var223 = standard___standard__NativeString___to_s_with_length(var222, 0l);
var221 = var223;
varonce220 = var221;
}
var_lmid = var221;
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = "";
var227 = standard___standard__NativeString___to_s_with_length(var226, 0l);
var225 = var227;
varonce224 = var225;
}
var_lend = var225;
}
var228 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
((void(*)(val* self))(var228->class->vft[COLOR_standard__kernel__Object__init]))(var228); /* init on <var228:FlatBuffer>*/
}
var_indent = var228;
var_j = var_line_start;
{
var229 = ((long(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__column_start]))(var_l); /* column_start on <var_l:Location>*/
}
{
{ /* Inline kernel#Int#+ (var_line_start,var229) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var229:Int> isa OTHER */
/* <var229:Int> isa OTHER */
var232 = 1; /* easy <var229:Int> isa OTHER*/
if (unlikely(!var232)) {
var_class_name235 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name235);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var236 = var_line_start + var229;
var230 = var236;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var230,1l) on <var230:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var239 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var239)) {
var_class_name242 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var243 = var230 - 1l;
var237 = var243;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var_244 = var237;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_244) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_244:Int> isa OTHER */
/* <var_244:Int> isa OTHER */
var247 = 1; /* easy <var_244:Int> isa OTHER*/
if (unlikely(!var247)) {
var_class_name250 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name250);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var251 = var_j < var_244;
var245 = var251;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
if (var245){
{
var252 = ((val*(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__chars]))(var_string); /* chars on <var_string:String>*/
}
{
var253 = ((val*(*)(val* self, long p0))((((long)var252&3)?class_info[((long)var252&3)]:var252->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var252, var_j); /* [] on <var252:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var253,'\t') on <var253:nullable Object(Char)> */
var257 = (char)((long)(var253)>>2);
var256 = (var253 != NULL) && (var257 == '\t');
var254 = var256;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
}
if (var254){
{
((void(*)(val* self, char p0))(var_indent->class->vft[COLOR_standard__string__Buffer__add]))(var_indent, '\t'); /* add on <var_indent:FlatBuffer>*/
}
} else {
{
((void(*)(val* self, char p0))(var_indent->class->vft[COLOR_standard__string__Buffer__add]))(var_indent, ' '); /* add on <var_indent:FlatBuffer>*/
}
}
var258 = standard___standard__Int___Discrete__successor(var_j, 1l);
var_j = var258;
} else {
goto BREAK_label259;
}
}
BREAK_label259: (void)0;
if (unlikely(varonce260==NULL)) {
var261 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "\t";
var265 = standard___standard__NativeString___to_s_with_length(var264, 1l);
var263 = var265;
varonce262 = var263;
}
((struct instance_standard__NativeArray*)var261)->values[0]=var263;
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "\n\t";
var269 = standard___standard__NativeString___to_s_with_length(var268, 2l);
var267 = var269;
varonce266 = var267;
}
((struct instance_standard__NativeArray*)var261)->values[6]=var267;
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = "^";
var273 = standard___standard__NativeString___to_s_with_length(var272, 1l);
var271 = var273;
varonce270 = var271;
}
((struct instance_standard__NativeArray*)var261)->values[8]=var271;
} else {
var261 = varonce260;
varonce260 = NULL;
}
((struct instance_standard__NativeArray*)var261)->values[1]=var_lstart;
((struct instance_standard__NativeArray*)var261)->values[2]=var_col;
((struct instance_standard__NativeArray*)var261)->values[3]=var_lmid;
((struct instance_standard__NativeArray*)var261)->values[4]=var_def;
((struct instance_standard__NativeArray*)var261)->values[5]=var_lend;
{
var274 = ((val*(*)(val* self))(var_indent->class->vft[COLOR_standard__string__Object__to_s]))(var_indent); /* to_s on <var_indent:FlatBuffer>*/
}
((struct instance_standard__NativeArray*)var261)->values[7]=var274;
{
var275 = ((val*(*)(val* self))(var261->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var261); /* native_to_s on <var261:NativeArray[String]>*/
}
varonce260 = var261;
var = var275;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#init for (self: Location) */
void nit___nit__Location___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Location___standard__kernel__Object__init]))(self); /* init on <self:Location>*/
}
RET_LABEL:;
}
