#include "nit__toolcontext.sep.0.h"
/* method toolcontext#Message#location for (self: Message): nullable Location */
val* nit___nit__Message___location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_nit__toolcontext__Message___location].val; /* _location on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#location= for (self: Message, nullable Location) */
void nit___nit__Message___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__Message___location].val = p0; /* _location on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#tag for (self: Message): nullable String */
val* nit___nit__Message___tag(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__toolcontext__Message___tag].val; /* _tag on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#tag= for (self: Message, nullable String) */
void nit___nit__Message___tag_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__Message___tag].val = p0; /* _tag on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#text for (self: Message): String */
val* nit___nit__Message___text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 42);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#text= for (self: Message, String) */
void nit___nit__Message___text_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__Message___text].val = p0; /* _text on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#< for (self: Message, Message): Bool */
short int nit___nit__Message___standard__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Message */;
val* var2 /* : nullable Location */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Location */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Location */;
val* var9 /* : nullable Location */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Message> isa OTHER */
/* <p0:Message> isa OTHER */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 61);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__location]))(self); /* location on <self:Message>*/
}
if (var2 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, ((val*)NULL)); /* == on <var2:nullable Location>*/
var3 = var4;
}
if (var3){
var = 1;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__toolcontext__Message__location]))(var_other); /* location on <var_other:Message>*/
}
if (var5 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, ((val*)NULL)); /* == on <var5:nullable Location>*/
var6 = var7;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__location]))(self); /* location on <self:Message>*/
}
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 66);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__toolcontext__Message__location]))(var_other); /* location on <var_other:Message>*/
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 66);
fatal_exit(1);
}
{
var10 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Comparable___60d]))(var8, var9); /* < on <var8:nullable Location(Location)>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#== for (self: Message, nullable Object): Bool */
short int nit___nit__Message___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Location */;
val* var6 /* : nullable Location */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : nullable String */;
val* var10 /* : nullable String */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_13 /* var : Bool */;
val* var14 /* : String */;
val* var15 /* : String */;
short int var16 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Message */
cltype = type_nit__Message.color;
idtype = type_nit__Message.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__location]))(self); /* location on <self:Message>*/
}
{
var6 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__toolcontext__Message__location]))(var_other); /* location on <var_other:nullable Object(Message)>*/
}
if (var5 == NULL) {
var7 = (var6 == NULL);
} else {
var8 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var6); /* == on <var5:nullable Location>*/
var7 = var8;
}
var_ = var7;
if (var7){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__tag]))(self); /* tag on <self:Message>*/
}
{
var10 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__toolcontext__Message__tag]))(var_other); /* tag on <var_other:nullable Object(Message)>*/
}
if (var9 == NULL) {
var11 = (var10 == NULL);
} else {
var12 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var10); /* == on <var9:nullable String>*/
var11 = var12;
}
var4 = var11;
} else {
var4 = var_;
}
var_13 = var4;
if (var4){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__text]))(self); /* text on <self:Message>*/
}
{
var15 = ((val*(*)(val* self))(var_other->class->vft[COLOR_nit__toolcontext__Message__text]))(var_other); /* text on <var_other:nullable Object(Message)>*/
}
{
var16 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var14, var15); /* == on <var14:String>*/
}
var3 = var16;
} else {
var3 = var_13;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_s for (self: Message): String */
val* nit___nit__Message___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__location]))(self); /* location on <self:Message>*/
}
var_l = var1;
if (var_l == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_l, ((val*)NULL)); /* == on <var_l:nullable Location>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__text]))(self); /* text on <self:Message>*/
}
var = var4;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ": ";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(var_l->class->vft[COLOR_standard__string__Object__to_s]))(var_l); /* to_s on <var_l:nullable Location(Location)>*/
}
((struct instance_standard__NativeArray*)var5)->values[0]=var10;
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__text]))(self); /* text on <self:Message>*/
}
((struct instance_standard__NativeArray*)var5)->values[2]=var11;
{
var12 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var = var12;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_color_string for (self: Message): String */
val* nit___nit__Message___to_color_string(val* self) {
val* var /* : String */;
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
val* var_yellow /* var yellow: String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_def /* var def: String */;
val* var19 /* : nullable String */;
val* var_tag /* var tag: nullable String */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
val* var37 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : nullable SourceFile */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var57 /* : NativeArray[String] */;
static val* varonce56;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
val* var66 /* : String */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
val* var72 /* : String */;
val* var73 /* : String */;
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
var7 = "[0;33m";
var8 = standard___standard__NativeString___to_s_with_length(var7, 6l);
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
var_yellow = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "[0m";
var16 = standard___standard__NativeString___to_s_with_length(var15, 3l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[1]=var14;
} else {
var12 = varonce11;
varonce11 = NULL;
}
var17 = standard__string___Char___Object__to_s(var_esc);
((struct instance_standard__NativeArray*)var12)->values[0]=var17;
{
var18 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
var_def = var18;
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__tag]))(self); /* tag on <self:Message>*/
}
var_tag = var19;
if (var_tag == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var_tag->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tag, ((val*)NULL)); /* != on <var_tag:nullable String>*/
var20 = var21;
}
if (var20){
if (unlikely(varonce22==NULL)) {
var23 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " (";
var27 = standard___standard__NativeString___to_s_with_length(var26, 2l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ")";
var31 = standard___standard__NativeString___to_s_with_length(var30, 1l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce22;
varonce22 = NULL;
}
((struct instance_standard__NativeArray*)var23)->values[1]=var_tag;
{
var32 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
var_tag = var32;
} else {
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "";
var36 = standard___standard__NativeString___to_s_with_length(var35, 0l);
var34 = var36;
varonce33 = var34;
}
var_tag = var34;
}
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__location]))(self); /* location on <self:Message>*/
}
var_l = var37;
if (var_l == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
var39 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_l, ((val*)NULL)); /* == on <var_l:nullable Location>*/
var38 = var39;
}
if (var38){
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__text]))(self); /* text on <self:Message>*/
}
((struct instance_standard__NativeArray*)var41)->values[0]=var42;
((struct instance_standard__NativeArray*)var41)->values[1]=var_tag;
{
var43 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
var = var43;
goto RET_LABEL;
} else {
{
var44 = ((val*(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__file]))(var_l); /* file on <var_l:nullable Location(Location)>*/
}
if (var44 == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
var46 = ((short int(*)(val* self, val* p0))(var44->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var44, ((val*)NULL)); /* == on <var44:nullable SourceFile>*/
var45 = var46;
}
if (var45){
if (unlikely(varonce47==NULL)) {
var48 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = ": ";
var52 = standard___standard__NativeString___to_s_with_length(var51, 2l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var48)->values[3]=var50;
} else {
var48 = varonce47;
varonce47 = NULL;
}
((struct instance_standard__NativeArray*)var48)->values[0]=var_yellow;
{
var53 = ((val*(*)(val* self))(var_l->class->vft[COLOR_standard__string__Object__to_s]))(var_l); /* to_s on <var_l:nullable Location(Location)>*/
}
((struct instance_standard__NativeArray*)var48)->values[1]=var53;
((struct instance_standard__NativeArray*)var48)->values[2]=var_def;
{
var54 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__text]))(self); /* text on <self:Message>*/
}
((struct instance_standard__NativeArray*)var48)->values[4]=var54;
((struct instance_standard__NativeArray*)var48)->values[5]=var_tag;
{
var55 = ((val*(*)(val* self))(var48->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
var = var55;
goto RET_LABEL;
} else {
if (unlikely(varonce56==NULL)) {
var57 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = ": ";
var61 = standard___standard__NativeString___to_s_with_length(var60, 2l);
var59 = var61;
varonce58 = var59;
}
((struct instance_standard__NativeArray*)var57)->values[3]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "\n";
var65 = standard___standard__NativeString___to_s_with_length(var64, 1l);
var63 = var65;
varonce62 = var63;
}
((struct instance_standard__NativeArray*)var57)->values[6]=var63;
} else {
var57 = varonce56;
varonce56 = NULL;
}
((struct instance_standard__NativeArray*)var57)->values[0]=var_yellow;
{
var66 = ((val*(*)(val* self))(var_l->class->vft[COLOR_standard__string__Object__to_s]))(var_l); /* to_s on <var_l:nullable Location(Location)>*/
}
((struct instance_standard__NativeArray*)var57)->values[1]=var66;
((struct instance_standard__NativeArray*)var57)->values[2]=var_def;
{
var67 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Message__text]))(self); /* text on <self:Message>*/
}
((struct instance_standard__NativeArray*)var57)->values[4]=var67;
((struct instance_standard__NativeArray*)var57)->values[5]=var_tag;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "1;31";
var71 = standard___standard__NativeString___to_s_with_length(var70, 4l);
var69 = var71;
varonce68 = var69;
}
{
var72 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_nit__location__Location__colored_line]))(var_l, var69); /* colored_line on <var_l:nullable Location(Location)>*/
}
((struct instance_standard__NativeArray*)var57)->values[7]=var72;
{
var73 = ((val*(*)(val* self))(var57->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
var = var73;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#init for (self: Message) */
void nit___nit__Message___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Message___standard__kernel__Object__init]))(self); /* init on <self:Message>*/
}
RET_LABEL:;
}
/* method toolcontext#Location#messages for (self: Location): nullable Array[Message] */
val* nit__toolcontext___Location___messages(val* self) {
val* var /* : nullable Array[Message] */;
val* var1 /* : nullable Array[Message] */;
var1 = self->attrs[COLOR_nit__toolcontext__Location___messages].val; /* _messages on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Location#messages= for (self: Location, nullable Array[Message]) */
void nit__toolcontext___Location___messages_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__Location___messages].val = p0; /* _messages on <self:Location> */
RET_LABEL:;
}
/* method toolcontext#Location#add_message for (self: Location, Message) */
void nit__toolcontext___Location___add_message(val* self, val* p0) {
val* var_m /* var m: Message */;
val* var /* : nullable Array[Message] */;
val* var_ms /* var ms: nullable Array[Message] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[Message] */;
var_m = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__Location__messages]))(self); /* messages on <self:Location>*/
}
var_ms = var;
if (var_ms == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_ms->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ms, ((val*)NULL)); /* == on <var_ms:nullable Array[Message]>*/
var1 = var2;
}
if (var1){
var3 = NEW_standard__Array(&type_standard__Array__nit__Message);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Message]>*/
}
var_ms = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__toolcontext__Location__messages_61d]))(self, var_ms); /* messages= on <self:Location>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(var_ms->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_ms, var_m); /* add on <var_ms:nullable Array[Message](Array[Message])>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#error_count for (self: ToolContext): Int */
long nit___nit__ToolContext___error_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#error_count= for (self: ToolContext, Int) */
void nit___nit__ToolContext___error_count_61d(val* self, long p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l = p0; /* _error_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning_count for (self: ToolContext): Int */
long nit___nit__ToolContext___warning_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#warning_count= for (self: ToolContext, Int) */
void nit___nit__ToolContext___warning_count_61d(val* self, long p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l = p0; /* _warning_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#log_directory for (self: ToolContext): String */
val* nit___nit__ToolContext___log_directory(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 137);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#log_directory= for (self: ToolContext, String) */
void nit___nit__ToolContext___log_directory_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___log_directory].val = p0; /* _log_directory on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#log_info for (self: ToolContext): nullable Writer */
val* nit___nit__ToolContext___log_info(val* self) {
val* var /* : nullable Writer */;
val* var1 /* : nullable Writer */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___log_info].val; /* _log_info on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#log_info= for (self: ToolContext, nullable Writer) */
void nit___nit__ToolContext___log_info_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___log_info].val = p0; /* _log_info on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#messages for (self: ToolContext): Array[Message] */
val* nit___nit__ToolContext___messages(val* self) {
val* var /* : Array[Message] */;
val* var1 /* : Array[Message] */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 143);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#messages= for (self: ToolContext, Array[Message]) */
void nit___nit__ToolContext___messages_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val = p0; /* _messages on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#message_sorter for (self: ToolContext): Comparator */
val* nit___nit__ToolContext___message_sorter(val* self) {
val* var /* : Comparator */;
val* var1 /* : Comparator */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 145);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#message_sorter= for (self: ToolContext, Comparator) */
void nit___nit__ToolContext___message_sorter_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___message_sorter].val = p0; /* _message_sorter on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#keep_going for (self: ToolContext): Bool */
short int nit___nit__ToolContext___keep_going(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___keep_going].s; /* _keep_going on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#keep_going= for (self: ToolContext, Bool) */
void nit___nit__ToolContext___keep_going_61d(val* self, short int p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___keep_going].s = p0; /* _keep_going on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning_blacklist for (self: ToolContext): MultiHashMap[SourceFile, String] */
val* nit___nit__ToolContext___warning_blacklist(val* self) {
val* var /* : MultiHashMap[SourceFile, String] */;
val* var1 /* : MultiHashMap[SourceFile, String] */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 153);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#warning_blacklist= for (self: ToolContext, MultiHashMap[SourceFile, String]) */
void nit___nit__ToolContext___warning_blacklist_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_blacklist].val = p0; /* _warning_blacklist on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#is_warning_blacklisted for (self: ToolContext, nullable Location, String): Bool */
short int nit___nit__ToolContext___is_warning_blacklisted(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable SourceFile */;
val* var_f /* var f: nullable SourceFile */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MultiHashMap[SourceFile, String] */;
val* var7 /* : nullable Object */;
val* var_tags /* var tags: nullable Array[String] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
var_l = p0;
var_tag = p1;
if (var_l == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_l, ((val*)NULL)); /* == on <var_l:nullable Location>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_l->class->vft[COLOR_nit__location__Location__file]))(var_l); /* file on <var_l:nullable Location(Location)>*/
}
var_f = var3;
if (var_f == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_f->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_f, ((val*)NULL)); /* == on <var_f:nullable SourceFile>*/
var4 = var5;
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__warning_blacklist]))(self); /* warning_blacklist on <self:ToolContext>*/
}
{
var7 = ((val*(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var6, var_f); /* get_or_null on <var6:MultiHashMap[SourceFile, String]>*/
}
var_tags = var7;
if (var_tags == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_tags->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_tags, ((val*)NULL)); /* == on <var_tags:nullable Array[String]>*/
var8 = var9;
}
if (var8){
var = 0;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "all";
var13 = standard___standard__NativeString___to_s_with_length(var12, 3l);
var11 = var13;
varonce = var11;
}
{
var14 = ((short int(*)(val* self, val* p0))(var_tags->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_tags, var11); /* has on <var_tags:nullable Array[String](Array[String])>*/
}
var_ = var14;
if (var14){
var10 = var_;
} else {
{
var15 = ((short int(*)(val* self, val* p0))(var_tags->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_tags, var_tag); /* has on <var_tags:nullable Array[String](Array[String])>*/
}
var10 = var15;
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#check_errors for (self: ToolContext): Bool */
short int nit___nit__ToolContext___check_errors(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Message] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : Comparator */;
val* var8 /* : Array[Message] */;
val* var9 /* : Array[Message] */;
val* var_ /* var : Array[Message] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[Message] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_m /* var m: Message */;
val* var14 /* : OptionBool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var17 /* : Sys */;
val* var19 /* : Sys */;
val* var20 /* : Writer */;
val* var21 /* : NativeArray[String] */;
static val* varonce;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : Sys */;
val* var30 /* : Sys */;
val* var31 /* : Writer */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : Array[Message] */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : Sys */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var1); /* length on <var1:Array[Message]>*/
}
{
{ /* Inline kernel#Int#> (var2,0l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var6 = var2 > 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__message_sorter]))(self); /* message_sorter on <self:ToolContext>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__sorter__Comparator__sort]))(var7, var8); /* sort on <var7:Comparator>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
var_ = var9;
{
var10 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Message]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:ArrayIterator[Message]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:ArrayIterator[Message]>*/
}
var_m = var13;
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_no_color]))(self); /* opt_no_color on <self:ToolContext>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_opts__Option__value]))(var14); /* value on <var14:OptionBool>*/
}
var16 = (short int)((long)(var15)>>2);
if (var16){
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var19 = glob_sys;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
var20 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__file__Sys__stderr]))(var17); /* stderr on <var17:Sys>*/
}
if (unlikely(varonce==NULL)) {
var21 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "\n";
var25 = standard___standard__NativeString___to_s_with_length(var24, 1l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_m->class->vft[COLOR_standard__string__Object__to_s]))(var_m); /* to_s on <var_m:Message>*/
}
((struct instance_standard__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce = var21;
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__stream__Writer__write]))(var20, var27); /* write on <var20:Writer>*/
}
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var30 = glob_sys;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var31 = ((val*(*)(val* self))(var28->class->vft[COLOR_standard__file__Sys__stderr]))(var28); /* stderr on <var28:Sys>*/
}
if (unlikely(varonce32==NULL)) {
var33 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "\n";
var37 = standard___standard__NativeString___to_s_with_length(var36, 1l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[1]=var35;
} else {
var33 = varonce32;
varonce32 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__toolcontext__Message__to_color_string]))(var_m); /* to_color_string on <var_m:Message>*/
}
((struct instance_standard__NativeArray*)var33)->values[0]=var38;
{
var39 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_standard__stream__Writer__write]))(var31, var39); /* write on <var31:Writer>*/
}
}
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:ArrayIterator[Message]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:ArrayIterator[Message]>*/
}
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
{
((void(*)(val* self))(var40->class->vft[COLOR_standard__abstract_collection__RemovableCollection__clear]))(var40); /* clear on <var40:Array[Message]>*/
}
} else {
}
{
var41 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(self); /* error_count on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#> (var41,0l) on <var41:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var44 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var48 = var41 > 0l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
var49 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__keep_going]))(self); /* keep_going on <self:ToolContext>*/
}
var50 = !var49;
if (var50){
{
((void(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__errors_info]))(self); /* errors_info on <self:ToolContext>*/
}
var51 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var51,1l) on <var51:Sys> */
exit(1l);
RET_LABEL52:(void)0;
}
}
} else {
}
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#errors_info for (self: ToolContext) */
void nit___nit__ToolContext___errors_info(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : OptionBool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
val* var12 /* : Sys */;
val* var14 /* : Sys */;
val* var15 /* : Writer */;
val* var16 /* : NativeArray[String] */;
static val* varonce;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
long var29 /* : Int */;
val* var30 /* : String */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(self); /* error_count on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__warning_count]))(self); /* warning_count on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#== (var5,0l) on <var5:Int> */
var8 = var5 == 0l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
} else {
var = var_;
}
if (var){
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_no_color]))(self); /* opt_no_color on <self:ToolContext>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_opts__Option__value]))(var9); /* value on <var9:OptionBool>*/
}
var11 = (short int)((long)(var10)>>2);
if (var11){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var14 = glob_sys;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__file__Sys__stderr]))(var12); /* stderr on <var12:Sys>*/
}
if (unlikely(varonce==NULL)) {
var16 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Errors: ";
var20 = standard___standard__NativeString___to_s_with_length(var19, 8l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = ". Warnings: ";
var24 = standard___standard__NativeString___to_s_with_length(var23, 12l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var16)->values[2]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = ".\n";
var28 = standard___standard__NativeString___to_s_with_length(var27, 2l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var16)->values[4]=var26;
} else {
var16 = varonce;
varonce = NULL;
}
{
var29 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(self); /* error_count on <self:ToolContext>*/
}
var30 = standard__string___Int___Object__to_s(var29);
((struct instance_standard__NativeArray*)var16)->values[1]=var30;
{
var31 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__warning_count]))(self); /* warning_count on <self:ToolContext>*/
}
var32 = standard__string___Int___Object__to_s(var31);
((struct instance_standard__NativeArray*)var16)->values[3]=var32;
{
var33 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce = var16;
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__stream__Writer__write]))(var15, var33); /* write on <var15:Writer>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#error for (self: ToolContext, nullable Location, String): Message */
val* nit___nit__ToolContext___error(val* self, val* p0, val* p1) {
val* var /* : Message */;
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
val* var1 /* : Message */;
val* var_m /* var m: Message */;
val* var2 /* : Array[Message] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[Message] */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
val* var12 /* : OptionBool */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_l = p0;
var_s = p1;
var1 = NEW_nit__Message(&type_nit__Message);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__toolcontext__Message__location_61d]))(var1, var_l); /* location= on <var1:Message>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__toolcontext__Message__tag_61d]))(var1, ((val*)NULL)); /* tag= on <var1:Message>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__toolcontext__Message__text_61d]))(var1, var_s); /* text= on <var1:Message>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Message>*/
}
var_m = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var2, var_m); /* has on <var2:Array[Message]>*/
}
if (var3){
var = var_m;
goto RET_LABEL;
} else {
}
if (var_l == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_l, ((val*)NULL)); /* != on <var_l:nullable Location>*/
var4 = var5;
}
if (var4){
{
((void(*)(val* self, val* p0))(var_l->class->vft[COLOR_nit__toolcontext__Location__add_message]))(var_l, var_m); /* add_message on <var_l:nullable Location(Location)>*/
}
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var6, var_m); /* add on <var6:Array[Message]>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count]))(self); /* error_count on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var11 = var7 + 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error_count_61d]))(self, var8); /* error_count= on <self:ToolContext>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_stop_on_first_error]))(self); /* opt_stop_on_first_error on <self:ToolContext>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_opts__Option__value]))(var12); /* value on <var12:OptionBool>*/
}
var14 = (short int)((long)(var13)>>2);
if (var14){
{
var15 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
} else {
}
var = var_m;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#fatal_error for (self: ToolContext, nullable Location, String) */
void nit___nit__ToolContext___fatal_error(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
val* var /* : Message */;
short int var1 /* : Bool */;
var_l = p0;
var_s = p1;
{
var = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__error]))(self, var_l, var_s); /* error on <self:ToolContext>*/
}
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning for (self: ToolContext, nullable Location, String, String): nullable Message */
val* nit___nit__ToolContext___warning(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Message */;
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var1 /* : OptionArray */;
val* var2 /* : nullable Object */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : OptionArray */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : OptionCount */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
short int var21 /* : Bool */;
val* var22 /* : Message */;
val* var_m /* var m: Message */;
val* var23 /* : Array[Message] */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : Array[Message] */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var32 /* : Int */;
val* var33 /* : OptionBool */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warning]))(self); /* opt_warning on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_opts__Option__value]))(var1); /* value on <var1:OptionArray>*/
}
if (unlikely(varonce==NULL)) {
var3 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "no-";
var7 = standard___standard__NativeString___to_s_with_length(var6, 3l);
var5 = var7;
varonce4 = var5;
}
((struct instance_standard__NativeArray*)var3)->values[0]=var5;
} else {
var3 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var3)->values[1]=var_tag;
{
var8 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
var9 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var2, var8); /* has on <var2:nullable Object(Array[String])>*/
}
if (var9){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warning]))(self); /* opt_warning on <self:ToolContext>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_opts__Option__value]))(var11); /* value on <var11:OptionArray>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var12, var_tag); /* has on <var12:nullable Object(Array[String])>*/
}
var14 = !var13;
var_ = var14;
if (var14){
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warn]))(self); /* opt_warn on <self:ToolContext>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_opts__Option__value]))(var15); /* value on <var15:OptionCount>*/
}
{
{ /* Inline kernel#Int#== (var16,0l) on <var16:nullable Object(Int)> */
var20 = (long)(var16)>>2;
var19 = (var16 != NULL) && (var20 == 0l);
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var10 = var17;
} else {
var10 = var_;
}
if (var10){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var21 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__is_warning_blacklisted]))(self, var_l, var_tag); /* is_warning_blacklisted on <self:ToolContext>*/
}
if (var21){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var22 = NEW_nit__Message(&type_nit__Message);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__toolcontext__Message__location_61d]))(var22, var_l); /* location= on <var22:Message>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__toolcontext__Message__tag_61d]))(var22, var_tag); /* tag= on <var22:Message>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__toolcontext__Message__text_61d]))(var22, var_text); /* text= on <var22:Message>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:Message>*/
}
var_m = var22;
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
{
var24 = ((short int(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var23, var_m); /* has on <var23:Array[Message]>*/
}
if (var24){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_l == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
var26 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_l, ((val*)NULL)); /* != on <var_l:nullable Location>*/
var25 = var26;
}
if (var25){
{
((void(*)(val* self, val* p0))(var_l->class->vft[COLOR_nit__toolcontext__Location__add_message]))(var_l, var_m); /* add_message on <var_l:nullable Location(Location)>*/
}
} else {
}
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var27, var_m); /* add on <var27:Array[Message]>*/
}
{
var28 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__warning_count]))(self); /* warning_count on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#+ (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var32 = var28 + 1l;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__warning_count_61d]))(self, var29); /* warning_count= on <self:ToolContext>*/
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_stop_on_first_error]))(self); /* opt_stop_on_first_error on <self:ToolContext>*/
}
{
var34 = ((val*(*)(val* self))(var33->class->vft[COLOR_opts__Option__value]))(var33); /* value on <var33:OptionBool>*/
}
var35 = (short int)((long)(var34)>>2);
if (var35){
{
var36 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
} else {
}
var = var_m;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#advice for (self: ToolContext, nullable Location, String, String): nullable Message */
val* nit___nit__ToolContext___advice(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Message */;
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var1 /* : OptionArray */;
val* var2 /* : nullable Object */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : OptionArray */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : OptionCount */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : Message */;
val* var_m /* var m: Message */;
val* var24 /* : Array[Message] */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : Array[Message] */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
val* var37 /* : OptionBool */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warning]))(self); /* opt_warning on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_opts__Option__value]))(var1); /* value on <var1:OptionArray>*/
}
if (unlikely(varonce==NULL)) {
var3 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "no-";
var7 = standard___standard__NativeString___to_s_with_length(var6, 3l);
var5 = var7;
varonce4 = var5;
}
((struct instance_standard__NativeArray*)var3)->values[0]=var5;
} else {
var3 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var3)->values[1]=var_tag;
{
var8 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
var9 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var2, var8); /* has on <var2:nullable Object(Array[String])>*/
}
if (var9){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warning]))(self); /* opt_warning on <self:ToolContext>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_opts__Option__value]))(var11); /* value on <var11:OptionArray>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var12, var_tag); /* has on <var12:nullable Object(Array[String])>*/
}
var14 = !var13;
var_ = var14;
if (var14){
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warn]))(self); /* opt_warn on <self:ToolContext>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_opts__Option__value]))(var15); /* value on <var15:OptionCount>*/
}
{
{ /* Inline kernel#Int#<= (var16,1l) on <var16:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var20 = (long)(var16)>>2;
var21 = var20 <= 1l;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var10 = var17;
} else {
var10 = var_;
}
if (var10){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var22 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__is_warning_blacklisted]))(self, var_l, var_tag); /* is_warning_blacklisted on <self:ToolContext>*/
}
if (var22){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var23 = NEW_nit__Message(&type_nit__Message);
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__toolcontext__Message__location_61d]))(var23, var_l); /* location= on <var23:Message>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__toolcontext__Message__tag_61d]))(var23, var_tag); /* tag= on <var23:Message>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__toolcontext__Message__text_61d]))(var23, var_text); /* text= on <var23:Message>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:Message>*/
}
var_m = var23;
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
{
var25 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var24, var_m); /* has on <var24:Array[Message]>*/
}
if (var25){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_l == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_l, ((val*)NULL)); /* != on <var_l:nullable Location>*/
var26 = var27;
}
if (var26){
{
((void(*)(val* self, val* p0))(var_l->class->vft[COLOR_nit__toolcontext__Location__add_message]))(var_l, var_m); /* add_message on <var_l:nullable Location(Location)>*/
}
} else {
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__messages]))(self); /* messages on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var28, var_m); /* add on <var28:Array[Message]>*/
}
{
var29 = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__warning_count]))(self); /* warning_count on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#+ (var29,1l) on <var29:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var36 = var29 + 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__warning_count_61d]))(self, var30); /* warning_count= on <self:ToolContext>*/
}
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_stop_on_first_error]))(self); /* opt_stop_on_first_error on <self:ToolContext>*/
}
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_opts__Option__value]))(var37); /* value on <var37:OptionBool>*/
}
var39 = (short int)((long)(var38)>>2);
if (var39){
{
var40 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_errors]))(self); /* check_errors on <self:ToolContext>*/
}
} else {
}
var = var_m;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#info for (self: ToolContext, String, Int) */
void nit___nit__ToolContext___info(val* self, val* p0, long p1) {
val* var_s /* var s: String */;
long var_level /* var level: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : Sys */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
val* var7 /* : String */;
val* var8 /* : nullable Writer */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable Writer */;
val* var12 /* : nullable Writer */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
var_s = p0;
var_level = p1;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__verbose_level]))(self); /* verbose_level on <self:ToolContext>*/
}
{
{ /* Inline kernel#Int#<= (var_level,var) on <var_level:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 422);
fatal_exit(1);
}
var4 = var_level <= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var5 = glob_sys;
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var_s;
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__file__Sys__print]))(var5, var7); /* print on <var5:Sys>*/
}
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__log_info]))(self); /* log_info on <self:ToolContext>*/
}
if (var8 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var8, ((val*)NULL)); /* != on <var8:nullable Writer>*/
var9 = var10;
}
if (var9){
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__log_info]))(self); /* log_info on <self:ToolContext>*/
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 298);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__stream__Writer__write]))(var11, var_s); /* write on <var11:nullable Writer>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__log_info]))(self); /* log_info on <self:ToolContext>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\n";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 299);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__stream__Writer__write]))(var12, var14); /* write on <var12:nullable Writer>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#exec_and_check for (self: ToolContext, Array[String], String) */
void nit___nit__ToolContext___exec_and_check(val* self, val* p0, val* p1) {
val* var_args /* var args: Array[String] */;
val* var_error /* var error: String */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : nullable Object */;
val* var_prog /* var prog: String */;
val* var12 /* : ProcessReader */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var_proc_which /* var proc_which: ProcessReader */;
long var18 /* : Int */;
long var_res /* var res: Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : Sys */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : String */;
val* var35 /* : Sys */;
val* var37 /* : Process */;
val* var_proc /* var proc: Process */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : Sys */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : Sys */;
var_args = p0;
var_error = p1;
if (unlikely(varonce==NULL)) {
var = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "+ ";
var4 = standard___standard__NativeString___to_s_with_length(var3, 2l);
var2 = var4;
varonce1 = var2;
}
((struct instance_standard__NativeArray*)var)->values[0]=var2;
} else {
var = varonce;
varonce = NULL;
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " ";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce5 = var6;
}
{
var9 = ((val*(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__string__Collection__join]))(var_args, var6); /* join on <var_args:Array[String]>*/
}
((struct instance_standard__NativeArray*)var)->values[1]=var9;
{
var10 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
((void(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__info]))(self, var10, 2l); /* info on <self:ToolContext>*/
}
{
var11 = ((val*(*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_args); /* first on <var_args:Array[String]>*/
}
var_prog = var11;
{
((void(*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__Sequence__remove_at]))(var_args, 0l); /* remove_at on <var_args:Array[String]>*/
}
var12 = NEW_standard__ProcessReader(&type_standard__ProcessReader);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "which";
var16 = standard___standard__NativeString___to_s_with_length(var15, 5l);
var14 = var16;
varonce13 = var14;
}
var17 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self, long p0))(var17->class->vft[COLOR_standard__array__Array__with_capacity]))(var17, 1l); /* with_capacity on <var17:Array[String]>*/
}
var_ = var17;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var_, var_prog); /* push on <var_:Array[String]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var12->class->vft[COLOR_standard__exec__Process__from_a]))(var12, var14, var_); /* from_a on <var12:ProcessReader>*/
}
var_proc_which = var12;
{
((void(*)(val* self))(var_proc_which->class->vft[COLOR_standard__exec__Process__wait]))(var_proc_which); /* wait on <var_proc_which:ProcessReader>*/
}
{
var18 = ((long(*)(val* self))(var_proc_which->class->vft[COLOR_standard__exec__Process__status]))(var_proc_which); /* status on <var_proc_which:ProcessReader>*/
}
var_res = var18;
{
{ /* Inline kernel#Int#!= (var_res,0l) on <var_res:Int> */
var21 = var_res == 0l;
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var23 = glob_sys;
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = ": executable \"";
var29 = standard___standard__NativeString___to_s_with_length(var28, 14l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "\" not found";
var33 = standard___standard__NativeString___to_s_with_length(var32, 11l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[3]=var31;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var_error;
((struct instance_standard__NativeArray*)var25)->values[2]=var_prog;
{
var34 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__file__Sys__print]))(var23, var34); /* print on <var23:Sys>*/
}
var35 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var35,1l) on <var35:Sys> */
exit(1l);
RET_LABEL36:(void)0;
}
}
} else {
}
var37 = NEW_standard__Process(&type_standard__Process);
{
((void(*)(val* self, val* p0, val* p1))(var37->class->vft[COLOR_standard__exec__Process__from_a]))(var37, var_prog, var_args); /* from_a on <var37:Process>*/
}
var_proc = var37;
{
((void(*)(val* self))(var_proc->class->vft[COLOR_standard__exec__Process__wait]))(var_proc); /* wait on <var_proc:Process>*/
}
{
var38 = ((long(*)(val* self))(var_proc->class->vft[COLOR_standard__exec__Process__status]))(var_proc); /* status on <var_proc:Process>*/
}
var_res = var38;
{
{ /* Inline kernel#Int#!= (var_res,0l) on <var_res:Int> */
var41 = var_res == 0l;
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
var43 = glob_sys;
if (unlikely(varonce44==NULL)) {
var45 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = ": execution of \"";
var49 = standard___standard__NativeString___to_s_with_length(var48, 16l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var45)->values[1]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = " ";
var53 = standard___standard__NativeString___to_s_with_length(var52, 1l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var45)->values[3]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "\" failed";
var57 = standard___standard__NativeString___to_s_with_length(var56, 8l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var45)->values[5]=var55;
} else {
var45 = varonce44;
varonce44 = NULL;
}
((struct instance_standard__NativeArray*)var45)->values[0]=var_error;
((struct instance_standard__NativeArray*)var45)->values[2]=var_prog;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = " ";
var61 = standard___standard__NativeString___to_s_with_length(var60, 1l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((val*(*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__string__Collection__join]))(var_args, var59); /* join on <var_args:Array[String]>*/
}
((struct instance_standard__NativeArray*)var45)->values[4]=var62;
{
var63 = ((val*(*)(val* self))(var45->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
((void(*)(val* self, val* p0))(var43->class->vft[COLOR_standard__file__Sys__print]))(var43, var63); /* print on <var43:Sys>*/
}
var64 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var64,1l) on <var64:Sys> */
exit(1l);
RET_LABEL65:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#option_context for (self: ToolContext): OptionContext */
val* nit___nit__ToolContext___option_context(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionContext */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#option_context= for (self: ToolContext, OptionContext) */
void nit___nit__ToolContext___option_context_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val = p0; /* _option_context on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_warn for (self: ToolContext): OptionCount */
val* nit___nit__ToolContext___opt_warn(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 335);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warn= for (self: ToolContext, OptionCount) */
void nit___nit__ToolContext___opt_warn_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val = p0; /* _opt_warn on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_warning for (self: ToolContext): OptionArray */
val* nit___nit__ToolContext___opt_warning(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 338);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warning= for (self: ToolContext, OptionArray) */
void nit___nit__ToolContext___opt_warning_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val = p0; /* _opt_warning on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_quiet for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_quiet(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 341);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_quiet= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_quiet_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_quiet].val = p0; /* _opt_quiet on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_log for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_log(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 344);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_log_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log].val = p0; /* _opt_log on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_log_dir for (self: ToolContext): OptionString */
val* nit___nit__ToolContext___opt_log_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 347);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log_dir= for (self: ToolContext, OptionString) */
void nit___nit__ToolContext___opt_log_dir_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log_dir].val = p0; /* _opt_log_dir on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_nit_dir for (self: ToolContext): OptionString */
val* nit___nit__ToolContext___opt_nit_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 350);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_nit_dir= for (self: ToolContext, OptionString) */
void nit___nit__ToolContext___opt_nit_dir_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_nit_dir].val = p0; /* _opt_nit_dir on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_help for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_help(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 353);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_help= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_help_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_help].val = p0; /* _opt_help on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_version for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_version(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 356);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_version= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_version_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_version].val = p0; /* _opt_version on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_set_dummy_tool for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_set_dummy_tool(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 359);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_set_dummy_tool= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_set_dummy_tool_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_set_dummy_tool].val = p0; /* _opt_set_dummy_tool on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_verbose for (self: ToolContext): OptionCount */
val* nit___nit__ToolContext___opt_verbose(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 362);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_verbose= for (self: ToolContext, OptionCount) */
void nit___nit__ToolContext___opt_verbose_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_verbose].val = p0; /* _opt_verbose on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_stop_on_first_error(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 365);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_stop_on_first_error_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stop_on_first_error].val = p0; /* _opt_stop_on_first_error on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_keep_going for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_keep_going(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_keep_going].val; /* _opt_keep_going on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_keep_going");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 368);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_keep_going= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_keep_going_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_keep_going].val = p0; /* _opt_keep_going on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_no_color for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_no_color(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 371);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_no_color= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_no_color_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_no_color].val = p0; /* _opt_no_color on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_bash_completion for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_bash_completion(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 374);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_bash_completion= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_bash_completion_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_bash_completion].val = p0; /* _opt_bash_completion on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_stub_man for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_stub_man(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 377);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stub_man= for (self: ToolContext, OptionBool) */
void nit___nit__ToolContext___opt_stub_man_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stub_man].val = p0; /* _opt_stub_man on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#verbose_level for (self: ToolContext): Int */
long nit___nit__ToolContext___verbose_level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level= for (self: ToolContext, Int) */
void nit___nit__ToolContext___verbose_level_61d(val* self, long p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l = p0; /* _verbose_level on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#init for (self: ToolContext) */
void nit___nit__ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionCount */;
val* var2 /* : OptionArray */;
val* var3 /* : OptionBool */;
val* var4 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : OptionBool */;
val* var7 /* : OptionBool */;
val* var8 /* : OptionString */;
val* var9 /* : OptionString */;
val* var10 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var13 /* : OptionCount */;
val* var14 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var16 /* : Array[Option] */;
val* var17 /* : NativeArray[Option] */;
val* var18 /* : OptionBool */;
val* var19 /* : OptionBool */;
val* var20 /* : OptionBool */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warn]))(self); /* opt_warn on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warning]))(self); /* opt_warning on <self:ToolContext>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_quiet]))(self); /* opt_quiet on <self:ToolContext>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_stop_on_first_error]))(self); /* opt_stop_on_first_error on <self:ToolContext>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_keep_going]))(self); /* opt_keep_going on <self:ToolContext>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_no_color]))(self); /* opt_no_color on <self:ToolContext>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_log]))(self); /* opt_log on <self:ToolContext>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_log_dir]))(self); /* opt_log_dir on <self:ToolContext>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_nit_dir]))(self); /* opt_nit_dir on <self:ToolContext>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_help]))(self); /* opt_help on <self:ToolContext>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_version]))(self); /* opt_version on <self:ToolContext>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_set_dummy_tool]))(self); /* opt_set_dummy_tool on <self:ToolContext>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_verbose]))(self); /* opt_verbose on <self:ToolContext>*/
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_bash_completion]))(self); /* opt_bash_completion on <self:ToolContext>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_stub_man]))(self); /* opt_stub_man on <self:ToolContext>*/
}
var16 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var16 = array_instance Array[Option] */
var17 = NEW_standard__NativeArray(15l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var17)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var17)->values[1] = (val*) var2;
((struct instance_standard__NativeArray*)var17)->values[2] = (val*) var3;
((struct instance_standard__NativeArray*)var17)->values[3] = (val*) var4;
((struct instance_standard__NativeArray*)var17)->values[4] = (val*) var5;
((struct instance_standard__NativeArray*)var17)->values[5] = (val*) var6;
((struct instance_standard__NativeArray*)var17)->values[6] = (val*) var7;
((struct instance_standard__NativeArray*)var17)->values[7] = (val*) var8;
((struct instance_standard__NativeArray*)var17)->values[8] = (val*) var9;
((struct instance_standard__NativeArray*)var17)->values[9] = (val*) var10;
((struct instance_standard__NativeArray*)var17)->values[10] = (val*) var11;
((struct instance_standard__NativeArray*)var17)->values[11] = (val*) var12;
((struct instance_standard__NativeArray*)var17)->values[12] = (val*) var13;
((struct instance_standard__NativeArray*)var17)->values[13] = (val*) var14;
((struct instance_standard__NativeArray*)var17)->values[14] = (val*) var15;
{
((void(*)(val* self, val* p0, long p1))(var16->class->vft[COLOR_standard__array__Array__with_native]))(var16, var17, 15l); /* with_native on <var16:Array[Option]>*/
}
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var16); /* add_option on <var:OptionContext>*/
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_stub_man]))(self); /* opt_stub_man on <self:ToolContext>*/
}
{
((void(*)(val* self, short int p0))(var18->class->vft[COLOR_opts__Option__hidden_61d]))(var18, 1); /* hidden= on <var18:OptionBool>*/
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_bash_completion]))(self); /* opt_bash_completion on <self:ToolContext>*/
}
{
((void(*)(val* self, short int p0))(var19->class->vft[COLOR_opts__Option__hidden_61d]))(var19, 1); /* hidden= on <var19:OptionBool>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_set_dummy_tool]))(self); /* opt_set_dummy_tool on <self:ToolContext>*/
}
{
((void(*)(val* self, short int p0))(var20->class->vft[COLOR_opts__Option__hidden_61d]))(var20, 1); /* hidden= on <var20:OptionBool>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#tooldescription for (self: ToolContext): String */
val* nit___nit__ToolContext___tooldescription(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 393);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#tooldescription= for (self: ToolContext, String) */
void nit___nit__ToolContext___tooldescription_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val = p0; /* _tooldescription on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#accept_no_arguments for (self: ToolContext): Bool */
short int nit___nit__ToolContext___accept_no_arguments(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#accept_no_arguments= for (self: ToolContext, Bool) */
void nit___nit__ToolContext___accept_no_arguments_61d(val* self, short int p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___accept_no_arguments].s = p0; /* _accept_no_arguments on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#usage for (self: ToolContext) */
void nit___nit__ToolContext___usage(val* self) {
val* var /* : Sys */;
val* var1 /* : String */;
val* var2 /* : OptionContext */;
var = glob_sys;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__tooldescription]))(self); /* tooldescription on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__file__Sys__print]))(var, var1); /* print on <var:Sys>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_opts__OptionContext__usage]))(var2); /* usage on <var2:OptionContext>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nit___nit__ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionCount */;
val* var1 /* : nullable Object */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
val* var6 /* : Sys */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : Sys */;
val* var12 /* : String */;
val* var13 /* : Sys */;
val* var15 /* : OptionBool */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
val* var18 /* : BashCompletion */;
val* var_bash_completion /* var bash_completion: BashCompletion */;
val* var19 /* : Sys */;
val* var21 /* : Sys */;
val* var22 /* : Writer */;
val* var23 /* : Sys */;
val* var25 /* : OptionBool */;
val* var26 /* : nullable Object */;
short int var27 /* : Bool */;
val* var28 /* : Sys */;
val* var29 /* : NativeArray[String] */;
static val* varonce;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
val* var53 /* : Array[String] */;
val* var54 /* : nullable Object */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : OptionContext */;
val* var58 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var59 /* : Iterator[nullable Object] */;
val* var_60 /* var : ArrayIterator[Option] */;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_o /* var o: Option */;
short int var_first /* var first: Bool */;
val* var63 /* : Array[String] */;
val* var_64 /* var : Array[String] */;
val* var65 /* : Iterator[nullable Object] */;
val* var_66 /* var : ArrayIterator[String] */;
short int var67 /* : Bool */;
val* var68 /* : nullable Object */;
val* var_n /* var n: String */;
val* var69 /* : Sys */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : Array[Object] */;
val* var75 /* : NativeArray[Object] */;
val* var76 /* : Sys */;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
val* var87 /* : String */;
val* var88 /* : Array[Object] */;
val* var89 /* : NativeArray[Object] */;
val* var90 /* : Sys */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
val* var95 /* : Sys */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : FlatString */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : Sys */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
val* var110 /* : Sys */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
val* var115 /* : Sys */;
val* var117 /* : OptionContext */;
val* var118 /* : Array[String] */;
val* var_errors /* var errors: Array[String] */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
val* var_121 /* var : Array[String] */;
val* var122 /* : Iterator[nullable Object] */;
val* var_123 /* var : ArrayIterator[String] */;
short int var124 /* : Bool */;
val* var125 /* : nullable Object */;
val* var_e /* var e: String */;
val* var126 /* : Sys */;
val* var128 /* : NativeArray[String] */;
static val* varonce127;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
val* var133 /* : String */;
val* var135 /* : Sys */;
val* var136 /* : String */;
val* var137 /* : Sys */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
val* var142 /* : Sys */;
val* var144 /* : String */;
short int var145 /* : Bool */;
val* var146 /* : OptionContext */;
val* var147 /* : Array[String] */;
short int var148 /* : Bool */;
short int var_149 /* var : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
val* var152 /* : Sys */;
val* var153 /* : String */;
val* var154 /* : Sys */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : FlatString */;
val* var159 /* : Sys */;
val* var161 /* : OptionCount */;
val* var162 /* : nullable Object */;
long var163 /* : Int */;
val* var164 /* : OptionBool */;
val* var165 /* : nullable Object */;
short int var166 /* : Bool */;
val* var167 /* : OptionBool */;
val* var168 /* : nullable Object */;
short int var169 /* : Bool */;
val* var170 /* : OptionCount */;
val* var171 /* : nullable Object */;
val* var172 /* : OptionString */;
val* var173 /* : nullable Object */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
val* var176 /* : OptionString */;
val* var177 /* : nullable Object */;
val* var178 /* : OptionBool */;
val* var179 /* : nullable Object */;
short int var180 /* : Bool */;
val* var181 /* : String */;
val* var182 /* : nullable Error */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : FlatString */;
val* var188 /* : String */;
val* var189 /* : Path */;
val* var190 /* : FileWriter */;
var_args = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warn]))(self); /* opt_warn on <self:ToolContext>*/
}
{
var1 = (val*)(1l<<2|1);
((void(*)(val* self, val* p0))(var->class->vft[COLOR_opts__Option__value_61d]))(var, var1); /* value= on <var:OptionCount>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_opts__OptionContext__parse]))(var2, var_args); /* parse on <var2:OptionContext>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_help]))(self); /* opt_help on <self:ToolContext>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_opts__Option__value]))(var3); /* value on <var3:OptionBool>*/
}
var5 = (short int)((long)(var4)>>2);
if (var5){
{
((void(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__usage]))(self); /* usage on <self:ToolContext>*/
}
var6 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var6,0l) on <var6:Sys> */
exit(0l);
RET_LABEL7:(void)0;
}
}
} else {
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_version]))(self); /* opt_version on <self:ToolContext>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_opts__Option__value]))(var8); /* value on <var8:OptionBool>*/
}
var10 = (short int)((long)(var9)>>2);
if (var10){
var11 = glob_sys;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__version]))(self); /* version on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__file__Sys__print]))(var11, var12); /* print on <var11:Sys>*/
}
var13 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var13,0l) on <var13:Sys> */
exit(0l);
RET_LABEL14:(void)0;
}
}
} else {
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_bash_completion]))(self); /* opt_bash_completion on <self:ToolContext>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_opts__Option__value]))(var15); /* value on <var15:OptionBool>*/
}
var17 = (short int)((long)(var16)>>2);
if (var17){
var18 = NEW_nit__BashCompletion(&type_nit__BashCompletion);
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__toolcontext__BashCompletion__toolcontext_61d]))(var18, self); /* toolcontext= on <var18:BashCompletion>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:BashCompletion>*/
}
var_bash_completion = var18;
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var21 = glob_sys;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
var22 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__file__Sys__stdout]))(var19); /* stdout on <var19:Sys>*/
}
{
((void(*)(val* self, val* p0))(var_bash_completion->class->vft[COLOR_standard__stream__Writable__write_to]))(var_bash_completion, var22); /* write_to on <var_bash_completion:BashCompletion>*/
}
var23 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var23,0l) on <var23:Sys> */
exit(0l);
RET_LABEL24:(void)0;
}
}
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_stub_man]))(self); /* opt_stub_man on <self:ToolContext>*/
}
{
var26 = ((val*(*)(val* self))(var25->class->vft[COLOR_opts__Option__value]))(var25); /* value on <var25:OptionBool>*/
}
var27 = (short int)((long)(var26)>>2);
if (var27){
var28 = glob_sys;
if (unlikely(varonce==NULL)) {
var29 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "% ";
var33 = standard___standard__NativeString___to_s_with_length(var32, 2l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "(1)\n\n# NAME\n\n";
var37 = standard___standard__NativeString___to_s_with_length(var36, 13l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[2]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "\n\n# SYNOPSYS\n\n";
var41 = standard___standard__NativeString___to_s_with_length(var40, 14l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var29)->values[4]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = " [*options*]...\n\n# OPTIONS\n";
var45 = standard___standard__NativeString___to_s_with_length(var44, 27l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var29)->values[6]=var43;
} else {
var29 = varonce;
varonce = NULL;
}
{
var46 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__toolname]))(self); /* toolname on <self:ToolContext>*/
}
{
var47 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__string__String__to_upper]))(var46); /* to_upper on <var46:String>*/
}
((struct instance_standard__NativeArray*)var29)->values[1]=var47;
{
var48 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__tooldescription]))(self); /* tooldescription on <self:ToolContext>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "\n";
var52 = standard___standard__NativeString___to_s_with_length(var51, 1l);
var50 = var52;
varonce49 = var50;
}
{
var53 = ((val*(*)(val* self, val* p0))(var48->class->vft[COLOR_standard__string_search__Text__split]))(var48, var50); /* split on <var48:String>*/
}
{
var54 = ((val*(*)(val* self, long p0))(var53->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var53, 1l); /* [] on <var53:Array[String]>*/
}
((struct instance_standard__NativeArray*)var29)->values[3]=var54;
{
var55 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__toolname]))(self); /* toolname on <self:ToolContext>*/
}
((struct instance_standard__NativeArray*)var29)->values[5]=var55;
{
var56 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce = var29;
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__file__Sys__print]))(var28, var56); /* print on <var28:Sys>*/
}
{
var57 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var58 = ((val*(*)(val* self))(var57->class->vft[COLOR_opts__OptionContext__options]))(var57); /* options on <var57:OptionContext>*/
}
var_ = var58;
{
var59 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Option]>*/
}
var_60 = var59;
for(;;) {
{
var61 = ((short int(*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_60); /* is_ok on <var_60:ArrayIterator[Option]>*/
}
if (var61){
{
var62 = ((val*(*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_60); /* item on <var_60:ArrayIterator[Option]>*/
}
var_o = var62;
var_first = 1;
{
var63 = ((val*(*)(val* self))(var_o->class->vft[COLOR_opts__Option__names]))(var_o); /* names on <var_o:Option>*/
}
var_64 = var63;
{
var65 = ((val*(*)(val* self))(var_64->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_64); /* iterator on <var_64:Array[String]>*/
}
var_66 = var65;
for(;;) {
{
var67 = ((short int(*)(val* self))(var_66->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_66); /* is_ok on <var_66:ArrayIterator[String]>*/
}
if (var67){
{
var68 = ((val*(*)(val* self))(var_66->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_66); /* item on <var_66:ArrayIterator[String]>*/
}
var_n = var68;
if (var_first){
var_first = 0;
} else {
var69 = glob_sys;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ", ";
var73 = standard___standard__NativeString___to_s_with_length(var72, 2l);
var71 = var73;
varonce70 = var71;
}
var74 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var74 = array_instance Array[Object] */
var75 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var75)->values[0] = (val*) var71;
{
((void(*)(val* self, val* p0, long p1))(var74->class->vft[COLOR_standard__array__Array__with_native]))(var74, var75, 1l); /* with_native on <var74:Array[Object]>*/
}
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_standard__file__Sys__printn]))(var69, var74); /* printn on <var69:Sys>*/
}
}
var76 = glob_sys;
if (unlikely(varonce77==NULL)) {
var78 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "`";
var82 = standard___standard__NativeString___to_s_with_length(var81, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var78)->values[0]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "`";
var86 = standard___standard__NativeString___to_s_with_length(var85, 1l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var78)->values[2]=var84;
} else {
var78 = varonce77;
varonce77 = NULL;
}
((struct instance_standard__NativeArray*)var78)->values[1]=var_n;
{
var87 = ((val*(*)(val* self))(var78->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
var88 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var88 = array_instance Array[Object] */
var89 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var89)->values[0] = (val*) var87;
{
((void(*)(val* self, val* p0, long p1))(var88->class->vft[COLOR_standard__array__Array__with_native]))(var88, var89, 1l); /* with_native on <var88:Array[Object]>*/
}
}
{
((void(*)(val* self, val* p0))(var76->class->vft[COLOR_standard__file__Sys__printn]))(var76, var88); /* printn on <var76:Sys>*/
}
{
((void(*)(val* self))(var_66->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_66); /* next on <var_66:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_66->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_66); /* finish on <var_66:ArrayIterator[String]>*/
}
var90 = glob_sys;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "";
var94 = standard___standard__NativeString___to_s_with_length(var93, 0l);
var92 = var94;
varonce91 = var92;
}
{
((void(*)(val* self, val* p0))(var90->class->vft[COLOR_standard__file__Sys__print]))(var90, var92); /* print on <var90:Sys>*/
}
var95 = glob_sys;
if (unlikely(varonce96==NULL)) {
var97 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ":   ";
var101 = standard___standard__NativeString___to_s_with_length(var100, 4l);
var99 = var101;
varonce98 = var99;
}
((struct instance_standard__NativeArray*)var97)->values[0]=var99;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var102 = ((val*(*)(val* self))(var_o->class->vft[COLOR_opts__Option__helptext]))(var_o); /* helptext on <var_o:Option>*/
}
((struct instance_standard__NativeArray*)var97)->values[1]=var102;
{
var103 = ((val*(*)(val* self))(var97->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
((void(*)(val* self, val* p0))(var95->class->vft[COLOR_standard__file__Sys__print]))(var95, var103); /* print on <var95:Sys>*/
}
var104 = glob_sys;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "";
var108 = standard___standard__NativeString___to_s_with_length(var107, 0l);
var106 = var108;
varonce105 = var106;
}
{
((void(*)(val* self, val* p0))(var104->class->vft[COLOR_standard__file__Sys__print]))(var104, var106); /* print on <var104:Sys>*/
}
{
((void(*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_60); /* next on <var_60:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label109;
}
}
BREAK_label109: (void)0;
{
((void(*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_60); /* finish on <var_60:ArrayIterator[Option]>*/
}
var110 = glob_sys;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "# SEE ALSO\n\nThe Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>";
var114 = standard___standard__NativeString___to_s_with_length(var113, 137l);
var112 = var114;
varonce111 = var112;
}
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_standard__file__Sys__print]))(var110, var112); /* print on <var110:Sys>*/
}
var115 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var115,0l) on <var115:Sys> */
exit(0l);
RET_LABEL116:(void)0;
}
}
} else {
}
{
var117 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var118 = ((val*(*)(val* self))(var117->class->vft[COLOR_opts__OptionContext__get_errors]))(var117); /* get_errors on <var117:OptionContext>*/
}
var_errors = var118;
{
var119 = ((short int(*)(val* self))(var_errors->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_errors); /* is_empty on <var_errors:Array[String]>*/
}
var120 = !var119;
if (var120){
var_121 = var_errors;
{
var122 = ((val*(*)(val* self))(var_121->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_121); /* iterator on <var_121:Array[String]>*/
}
var_123 = var122;
for(;;) {
{
var124 = ((short int(*)(val* self))(var_123->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_123); /* is_ok on <var_123:ArrayIterator[String]>*/
}
if (var124){
{
var125 = ((val*(*)(val* self))(var_123->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_123); /* item on <var_123:ArrayIterator[String]>*/
}
var_e = var125;
var126 = glob_sys;
if (unlikely(varonce127==NULL)) {
var128 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "Error: ";
var132 = standard___standard__NativeString___to_s_with_length(var131, 7l);
var130 = var132;
varonce129 = var130;
}
((struct instance_standard__NativeArray*)var128)->values[0]=var130;
} else {
var128 = varonce127;
varonce127 = NULL;
}
((struct instance_standard__NativeArray*)var128)->values[1]=var_e;
{
var133 = ((val*(*)(val* self))(var128->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var128); /* native_to_s on <var128:NativeArray[String]>*/
}
varonce127 = var128;
{
((void(*)(val* self, val* p0))(var126->class->vft[COLOR_standard__file__Sys__print]))(var126, var133); /* print on <var126:Sys>*/
}
{
((void(*)(val* self))(var_123->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_123); /* next on <var_123:ArrayIterator[String]>*/
}
} else {
goto BREAK_label134;
}
}
BREAK_label134: (void)0;
{
((void(*)(val* self))(var_123->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_123); /* finish on <var_123:ArrayIterator[String]>*/
}
var135 = glob_sys;
{
var136 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__tooldescription]))(self); /* tooldescription on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var135->class->vft[COLOR_standard__file__Sys__print]))(var135, var136); /* print on <var135:Sys>*/
}
var137 = glob_sys;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "Use --help for help";
var141 = standard___standard__NativeString___to_s_with_length(var140, 19l);
var139 = var141;
varonce138 = var139;
}
{
((void(*)(val* self, val* p0))(var137->class->vft[COLOR_standard__file__Sys__print]))(var137, var139); /* print on <var137:Sys>*/
}
var142 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var142,1l) on <var142:Sys> */
exit(1l);
RET_LABEL143:(void)0;
}
}
} else {
}
{
var144 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__compute_nit_dir]))(self); /* compute_nit_dir on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__nit_dir_61d]))(self, var144); /* nit_dir= on <self:ToolContext>*/
}
{
var146 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var147 = ((val*(*)(val* self))(var146->class->vft[COLOR_opts__OptionContext__rest]))(var146); /* rest on <var146:OptionContext>*/
}
{
var148 = ((short int(*)(val* self))(var147->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var147); /* is_empty on <var147:Array[String]>*/
}
var_149 = var148;
if (var148){
{
var150 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__accept_no_arguments]))(self); /* accept_no_arguments on <self:ToolContext>*/
}
var151 = !var150;
var145 = var151;
} else {
var145 = var_149;
}
if (var145){
var152 = glob_sys;
{
var153 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__tooldescription]))(self); /* tooldescription on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var152->class->vft[COLOR_standard__file__Sys__print]))(var152, var153); /* print on <var152:Sys>*/
}
var154 = glob_sys;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "Use --help for help";
var158 = standard___standard__NativeString___to_s_with_length(var157, 19l);
var156 = var158;
varonce155 = var156;
}
{
((void(*)(val* self, val* p0))(var154->class->vft[COLOR_standard__file__Sys__print]))(var154, var156); /* print on <var154:Sys>*/
}
var159 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var159,1l) on <var159:Sys> */
exit(1l);
RET_LABEL160:(void)0;
}
}
} else {
}
{
var161 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_verbose]))(self); /* opt_verbose on <self:ToolContext>*/
}
{
var162 = ((val*(*)(val* self))(var161->class->vft[COLOR_opts__Option__value]))(var161); /* value on <var161:OptionCount>*/
}
{
var163 = (long)(var162)>>2;
((void(*)(val* self, long p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__verbose_level_61d]))(self, var163); /* verbose_level= on <self:ToolContext>*/
}
{
var164 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_keep_going]))(self); /* opt_keep_going on <self:ToolContext>*/
}
{
var165 = ((val*(*)(val* self))(var164->class->vft[COLOR_opts__Option__value]))(var164); /* value on <var164:OptionBool>*/
}
var166 = (short int)((long)(var165)>>2);
if (var166){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__keep_going_61d]))(self, 1); /* keep_going= on <self:ToolContext>*/
}
} else {
}
{
var167 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_quiet]))(self); /* opt_quiet on <self:ToolContext>*/
}
{
var168 = ((val*(*)(val* self))(var167->class->vft[COLOR_opts__Option__value]))(var167); /* value on <var167:OptionBool>*/
}
var169 = (short int)((long)(var168)>>2);
if (var169){
{
var170 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_warn]))(self); /* opt_warn on <self:ToolContext>*/
}
{
var171 = (val*)(0l<<2|1);
((void(*)(val* self, val* p0))(var170->class->vft[COLOR_opts__Option__value_61d]))(var170, var171); /* value= on <var170:OptionCount>*/
}
} else {
}
{
var172 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_log_dir]))(self); /* opt_log_dir on <self:ToolContext>*/
}
{
var173 = ((val*(*)(val* self))(var172->class->vft[COLOR_opts__Option__value]))(var172); /* value on <var172:OptionString>*/
}
if (var173 == NULL) {
var174 = 0; /* is null */
} else {
var174 = 1; /* arg is null and recv is not */
}
if (0) {
var175 = ((short int(*)(val* self, val* p0))(var173->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var173, ((val*)NULL)); /* != on <var173:nullable Object(nullable String)>*/
var174 = var175;
}
if (var174){
{
var176 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_log_dir]))(self); /* opt_log_dir on <self:ToolContext>*/
}
{
var177 = ((val*(*)(val* self))(var176->class->vft[COLOR_opts__Option__value]))(var176); /* value on <var176:OptionString>*/
}
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 495);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__log_directory_61d]))(self, var177); /* log_directory= on <self:ToolContext>*/
}
} else {
}
{
var178 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_log]))(self); /* opt_log on <self:ToolContext>*/
}
{
var179 = ((val*(*)(val* self))(var178->class->vft[COLOR_opts__Option__value]))(var178); /* value on <var178:OptionBool>*/
}
var180 = (short int)((long)(var179)>>2);
if (var180){
{
var181 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__log_directory]))(self); /* log_directory on <self:ToolContext>*/
}
{
var182 = ((val*(*)(val* self))(var181->class->vft[COLOR_standard__file__String__mkdir]))(var181); /* mkdir on <var181:String>*/
}
{
var183 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__log_directory]))(self); /* log_directory on <self:ToolContext>*/
}
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "info.txt";
var187 = standard___standard__NativeString___to_s_with_length(var186, 8l);
var185 = var187;
varonce184 = var185;
}
{
var188 = ((val*(*)(val* self, val* p0))(var183->class->vft[COLOR_standard__file__String___47d]))(var183, var185); /* / on <var183:String>*/
}
{
var189 = ((val*(*)(val* self))(var188->class->vft[COLOR_standard__file__Text__to_path]))(var188); /* to_path on <var188:String>*/
}
{
var190 = ((val*(*)(val* self))(var189->class->vft[COLOR_standard__file__Path__open_wo]))(var189); /* open_wo on <var189:Path>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__log_info_61d]))(self, var190); /* log_info= on <self:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#version for (self: ToolContext): String */
val* nit___nit__ToolContext___version(val* self) {
val* var /* : String */;
val* var1 /* : OptionBool */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : Sys */;
val* var8 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_set_dummy_tool]))(self); /* opt_set_dummy_tool on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_opts__Option__value]))(var1); /* value on <var1:OptionBool>*/
}
var3 = (short int)((long)(var2)>>2);
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "DUMMY_VERSION";
var6 = standard___standard__NativeString___to_s_with_length(var5, 13l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
var7 = glob_sys;
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__version__Sys__nit_version]))(var7); /* nit_version on <var7:Sys>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#toolname for (self: ToolContext): String */
val* nit___nit__ToolContext___toolname(val* self) {
val* var /* : String */;
val* var1 /* : OptionBool */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : Sys */;
val* var9 /* : Sys */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_set_dummy_tool]))(self); /* opt_set_dummy_tool on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_opts__Option__value]))(var1); /* value on <var1:OptionBool>*/
}
var3 = (short int)((long)(var2)>>2);
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "DUMMY_TOOL";
var6 = standard___standard__NativeString___to_s_with_length(var5, 10l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var9 = glob_sys;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self))(var7->class->vft[COLOR_standard__string__Sys__program_name]))(var7); /* program_name on <var7:Sys>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "";
var14 = standard___standard__NativeString___to_s_with_length(var13, 0l);
var12 = var14;
varonce11 = var12;
}
{
var15 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__file__String__basename]))(var10, var12); /* basename on <var10:String>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#nit_dir for (self: ToolContext): String */
val* nit___nit__ToolContext___nit_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 521);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#nit_dir= for (self: ToolContext, String) */
void nit___nit__ToolContext___nit_dir_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___nit_dir].val = p0; /* _nit_dir on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#compute_nit_dir for (self: ToolContext): String */
val* nit___nit__ToolContext___compute_nit_dir(val* self) {
val* var /* : String */;
val* var1 /* : OptionString */;
val* var2 /* : nullable Object */;
val* var_res /* var res: nullable String */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var27 /* : NativeArray[String] */;
static val* varonce26;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var43 /* : Sys */;
val* var45 /* : Sys */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
short int var49 /* : Bool */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var_exe /* var exe: String */;
short int var55 /* : Bool */;
val* var56 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
short int var63 /* : Bool */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : Array[String] */;
val* var_ps /* var ps: Array[String] */;
val* var_ /* var : Array[String] */;
val* var75 /* : Iterator[nullable Object] */;
val* var_76 /* var : ArrayIterator[String] */;
short int var77 /* : Bool */;
val* var78 /* : nullable Object */;
val* var_p /* var p: String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
val* var83 /* : String */;
short int var84 /* : Bool */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__opt_nit_dir]))(self); /* opt_nit_dir on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_opts__Option__value]))(var1); /* value on <var1:OptionString>*/
}
var_res = var2;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_res, ((val*)NULL)); /* != on <var_res:nullable String>*/
var3 = var4;
}
if (var3){
{
var5 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_nit_dir]))(self, var_res); /* check_nit_dir on <self:ToolContext>*/
}
var6 = !var5;
if (var6){
if (unlikely(varonce==NULL)) {
var7 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Fatal Error: the value of --nit-dir does not seem to be a valid base Nit directory: ";
var11 = standard___standard__NativeString___to_s_with_length(var10, 84l);
var9 = var11;
varonce8 = var9;
}
((struct instance_standard__NativeArray*)var7)->values[0]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = ".";
var15 = standard___standard__NativeString___to_s_with_length(var14, 1l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var7)->values[2]=var13;
} else {
var7 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var7)->values[1]=var_res;
{
var16 = ((val*(*)(val* self))(var7->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__fatal_error]))(self, ((val*)NULL), var16); /* fatal_error on <self:ToolContext>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "NIT_DIR";
var20 = standard___standard__NativeString___to_s_with_length(var19, 7l);
var18 = var20;
varonce17 = var18;
}
{
var21 = ((val*(*)(val* self))(var18->class->vft[COLOR_standard__environ__String__environ]))(var18); /* environ on <var18:String>*/
}
var_res = var21;
{
var22 = ((short int(*)(val* self))(var_res->class->vft[COLOR_standard__string__Text__is_empty]))(var_res); /* is_empty on <var_res:nullable String(String)>*/
}
var23 = !var22;
if (var23){
{
var24 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_nit_dir]))(self, var_res); /* check_nit_dir on <self:ToolContext>*/
}
var25 = !var24;
if (var25){
if (unlikely(varonce26==NULL)) {
var27 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Fatal Error: the value of NIT_DIR does not seem to be a valid base Nit directory: ";
var31 = standard___standard__NativeString___to_s_with_length(var30, 82l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ".";
var35 = standard___standard__NativeString___to_s_with_length(var34, 1l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce26;
varonce26 = NULL;
}
((struct instance_standard__NativeArray*)var27)->values[1]=var_res;
{
var36 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__fatal_error]))(self, ((val*)NULL), var36); /* fatal_error on <self:ToolContext>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce37==NULL)) {
var38 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "/..";
var42 = standard___standard__NativeString___to_s_with_length(var41, 3l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var38)->values[1]=var40;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var45 = glob_sys;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
var46 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__string__Sys__program_name]))(var43); /* program_name on <var43:Sys>*/
}
{
var47 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__file__String__dirname]))(var46); /* dirname on <var46:String>*/
}
((struct instance_standard__NativeArray*)var38)->values[0]=var47;
{
var48 = ((val*(*)(val* self))(var38->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
var_res = var48;
{
var49 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_nit_dir]))(self, var_res); /* check_nit_dir on <self:ToolContext>*/
}
if (var49){
{
var50 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__file__String__simplify_path]))(var_res); /* simplify_path on <var_res:nullable String(String)>*/
}
var = var50;
goto RET_LABEL;
} else {
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "/proc/self/exe";
var54 = standard___standard__NativeString___to_s_with_length(var53, 14l);
var52 = var54;
varonce51 = var52;
}
var_exe = var52;
{
var55 = ((short int(*)(val* self))(var_exe->class->vft[COLOR_standard__file__String__file_exists]))(var_exe); /* file_exists on <var_exe:String>*/
}
if (var55){
{
var56 = ((val*(*)(val* self))(var_exe->class->vft[COLOR_standard__file__String__realpath]))(var_exe); /* realpath on <var_exe:String>*/
}
var_res = var56;
{
var57 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__file__String__dirname]))(var_res); /* dirname on <var_res:nullable String(String)>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "..";
var61 = standard___standard__NativeString___to_s_with_length(var60, 2l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((val*(*)(val* self, val* p0))(var57->class->vft[COLOR_standard__file__String__join_path]))(var57, var59); /* join_path on <var57:String>*/
}
var_res = var62;
{
var63 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_nit_dir]))(self, var_res); /* check_nit_dir on <self:ToolContext>*/
}
if (var63){
{
var64 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__file__String__simplify_path]))(var_res); /* simplify_path on <var_res:nullable String(String)>*/
}
var = var64;
goto RET_LABEL;
} else {
}
} else {
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "PATH";
var68 = standard___standard__NativeString___to_s_with_length(var67, 4l);
var66 = var68;
varonce65 = var66;
}
{
var69 = ((val*(*)(val* self))(var66->class->vft[COLOR_standard__environ__String__environ]))(var66); /* environ on <var66:String>*/
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ":";
var73 = standard___standard__NativeString___to_s_with_length(var72, 1l);
var71 = var73;
varonce70 = var71;
}
{
var74 = ((val*(*)(val* self, val* p0))(var69->class->vft[COLOR_standard__string_search__Text__split]))(var69, var71); /* split on <var69:String>*/
}
var_ps = var74;
var_ = var_ps;
{
var75 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_76 = var75;
for(;;) {
{
var77 = ((short int(*)(val* self))(var_76->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_76); /* is_ok on <var_76:ArrayIterator[String]>*/
}
if (var77){
{
var78 = ((val*(*)(val* self))(var_76->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_76); /* item on <var_76:ArrayIterator[String]>*/
}
var_p = var78;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "..";
var82 = standard___standard__NativeString___to_s_with_length(var81, 2l);
var80 = var82;
varonce79 = var80;
}
{
var83 = ((val*(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__file__String___47d]))(var_p, var80); /* / on <var_p:String>*/
}
var_res = var83;
{
var84 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nit__toolcontext__ToolContext__check_nit_dir]))(self, var_res); /* check_nit_dir on <self:ToolContext>*/
}
if (var84){
{
var85 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__file__String__simplify_path]))(var_res); /* simplify_path on <var_res:nullable String(String)>*/
}
var = var85;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_76->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_76); /* next on <var_76:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_76->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_76); /* finish on <var_76:ArrayIterator[String]>*/
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "Fatal Error: cannot locate a valid base Nit directory. It is quite unexpected. Try to set the environment variable `NIT_DIR` or to use the `--nit-dir` option.";
var89 = standard___standard__NativeString___to_s_with_length(var88, 158l);
var87 = var89;
varonce86 = var87;
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__toolcontext__ToolContext__fatal_error]))(self, ((val*)NULL), var87); /* fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 564);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#check_nit_dir for (self: ToolContext, String): Bool */
short int nit___nit__ToolContext___check_nit_dir(val* self, val* p0) {
short int var /* : Bool */;
val* var_res /* var res: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
short int var9 /* : Bool */;
var_res = p0;
{
var2 = ((short int(*)(val* self))(var_res->class->vft[COLOR_standard__file__String__file_exists]))(var_res); /* file_exists on <var_res:String>*/
}
var_ = var2;
if (var2){
if (unlikely(varonce==NULL)) {
var3 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "/src/nit.nit";
var7 = standard___standard__NativeString___to_s_with_length(var6, 12l);
var5 = var7;
varonce4 = var5;
}
((struct instance_standard__NativeArray*)var3)->values[1]=var5;
} else {
var3 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var3)->values[0]=var_res;
{
var8 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
var9 = ((short int(*)(val* self))(var8->class->vft[COLOR_standard__file__String__file_exists]))(var8); /* file_exists on <var8:String>*/
}
var1 = var9;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#toolcontext for (self: BashCompletion): ToolContext */
val* nit___nit__BashCompletion___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 593);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#toolcontext= for (self: BashCompletion, ToolContext) */
void nit___nit__BashCompletion___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__BashCompletion___toolcontext].val = p0; /* _toolcontext on <self:BashCompletion> */
RET_LABEL:;
}
/* method toolcontext#BashCompletion#extract_options_names for (self: BashCompletion): Array[String] */
val* nit___nit__BashCompletion___extract_options_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_names /* var names: Array[String] */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionContext */;
val* var4 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[Option] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_option /* var option: Option */;
val* var9 /* : Array[String] */;
val* var_10 /* var : Array[String] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[String] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_name /* var name: String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_names = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__BashCompletion__toolcontext]))(self); /* toolcontext on <self:BashCompletion>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(var2); /* option_context on <var2:ToolContext>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_opts__OptionContext__options]))(var3); /* options on <var3:OptionContext>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Option]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:ArrayIterator[Option]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:ArrayIterator[Option]>*/
}
var_option = var8;
{
var9 = ((val*(*)(val* self))(var_option->class->vft[COLOR_opts__Option__names]))(var_option); /* names on <var_option:Option>*/
}
var_10 = var9;
{
var11 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_10); /* iterator on <var_10:Array[String]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:ArrayIterator[String]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:ArrayIterator[String]>*/
}
var_name = var14;
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "--";
var17 = standard___standard__NativeString___to_s_with_length(var16, 2l);
var15 = var17;
varonce = var15;
}
{
var18 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__string__Text__has_prefix]))(var_name, var15); /* has_prefix on <var_name:String>*/
}
if (var18){
{
((void(*)(val* self, val* p0))(var_names->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_names, var_name); /* add on <var_names:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:ArrayIterator[String]>*/
}
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label19;
}
}
BREAK_label19: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:ArrayIterator[Option]>*/
}
var = var_names;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#rendering for (self: BashCompletion) */
void nit___nit__BashCompletion___template__Template__rendering(val* self) {
val* var /* : ToolContext */;
val* var1 /* : String */;
val* var_name /* var name: String */;
val* var2 /* : Array[String] */;
val* var_option_names /* var option_names: Array[String] */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : ToolContext */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
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
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
val* var94 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__BashCompletion__toolcontext]))(self); /* toolcontext on <self:BashCompletion>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__toolcontext__ToolContext__toolname]))(var); /* toolname on <var:ToolContext>*/
}
var_name = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__BashCompletion__extract_options_names]))(self); /* extract_options_names on <self:BashCompletion>*/
}
var_option_names = var2;
if (unlikely(varonce==NULL)) {
var3 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "# generated bash completion file for ";
var7 = standard___standard__NativeString___to_s_with_length(var6, 37l);
var5 = var7;
varonce4 = var5;
}
((struct instance_standard__NativeArray*)var3)->values[0]=var5;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = " ";
var11 = standard___standard__NativeString___to_s_with_length(var10, 1l);
var9 = var11;
varonce8 = var9;
}
((struct instance_standard__NativeArray*)var3)->values[2]=var9;
} else {
var3 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var3)->values[1]=var_name;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__BashCompletion__toolcontext]))(self); /* toolcontext on <self:BashCompletion>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__toolcontext__ToolContext__version]))(var12); /* version on <var12:ToolContext>*/
}
((struct instance_standard__NativeArray*)var3)->values[3]=var13;
{
var14 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var14); /* addn on <self:BashCompletion>*/
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "_";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "()";
var24 = standard___standard__NativeString___to_s_with_length(var23, 2l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var16)->values[2]=var22;
} else {
var16 = varonce15;
varonce15 = NULL;
}
((struct instance_standard__NativeArray*)var16)->values[1]=var_name;
{
var25 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var25); /* addn on <self:BashCompletion>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "{";
var29 = standard___standard__NativeString___to_s_with_length(var28, 1l);
var27 = var29;
varonce26 = var27;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var27); /* addn on <self:BashCompletion>*/
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "\tlocal cur prev opts";
var33 = standard___standard__NativeString___to_s_with_length(var32, 20l);
var31 = var33;
varonce30 = var31;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var31); /* addn on <self:BashCompletion>*/
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "\tCOMPREPLY=()";
var37 = standard___standard__NativeString___to_s_with_length(var36, 13l);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var35); /* addn on <self:BashCompletion>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "\tcur=\"${COMP_WORDS[COMP_CWORD]}\"";
var41 = standard___standard__NativeString___to_s_with_length(var40, 32l);
var39 = var41;
varonce38 = var39;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var39); /* addn on <self:BashCompletion>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "\tprev=\"${COMP_WORDS[COMP_CWORD-1]}\"";
var45 = standard___standard__NativeString___to_s_with_length(var44, 35l);
var43 = var45;
varonce42 = var43;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var43); /* addn on <self:BashCompletion>*/
}
{
var46 = ((short int(*)(val* self))(var_option_names->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_option_names); /* is_empty on <var_option_names:Array[String]>*/
}
var47 = !var46;
if (var47){
if (unlikely(varonce48==NULL)) {
var49 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "\topts=\"";
var53 = standard___standard__NativeString___to_s_with_length(var52, 7l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "\"";
var57 = standard___standard__NativeString___to_s_with_length(var56, 1l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var49)->values[2]=var55;
} else {
var49 = varonce48;
varonce48 = NULL;
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = " ";
var61 = standard___standard__NativeString___to_s_with_length(var60, 1l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((val*(*)(val* self, val* p0))(var_option_names->class->vft[COLOR_standard__string__Collection__join]))(var_option_names, var59); /* join on <var_option_names:Array[String]>*/
}
((struct instance_standard__NativeArray*)var49)->values[1]=var62;
{
var63 = ((val*(*)(val* self))(var49->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var63); /* addn on <self:BashCompletion>*/
}
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "\tif [[ ${cur} == -* ]] ; then";
var67 = standard___standard__NativeString___to_s_with_length(var66, 29l);
var65 = var67;
varonce64 = var65;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var65); /* addn on <self:BashCompletion>*/
}
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "\t\tCOMPREPLY=( $(compgen -W \"${opts}\" -- ${cur}) )";
var71 = standard___standard__NativeString___to_s_with_length(var70, 49l);
var69 = var71;
varonce68 = var69;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var69); /* addn on <self:BashCompletion>*/
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "\t\treturn 0";
var75 = standard___standard__NativeString___to_s_with_length(var74, 10l);
var73 = var75;
varonce72 = var73;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var73); /* addn on <self:BashCompletion>*/
}
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "\tfi";
var79 = standard___standard__NativeString___to_s_with_length(var78, 3l);
var77 = var79;
varonce76 = var77;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var77); /* addn on <self:BashCompletion>*/
}
} else {
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "} &&";
var83 = standard___standard__NativeString___to_s_with_length(var82, 4l);
var81 = var83;
varonce80 = var81;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var81); /* addn on <self:BashCompletion>*/
}
if (unlikely(varonce84==NULL)) {
var85 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "complete -o default -F _";
var89 = standard___standard__NativeString___to_s_with_length(var88, 24l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var85)->values[0]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " ";
var93 = standard___standard__NativeString___to_s_with_length(var92, 1l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var85)->values[2]=var91;
} else {
var85 = varonce84;
varonce84 = NULL;
}
((struct instance_standard__NativeArray*)var85)->values[1]=var_name;
((struct instance_standard__NativeArray*)var85)->values[3]=var_name;
{
var94 = ((val*(*)(val* self))(var85->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__addn]))(self, var94); /* addn on <self:BashCompletion>*/
}
RET_LABEL:;
}
/* method toolcontext#BashCompletion#init for (self: BashCompletion) */
void nit___nit__BashCompletion___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__BashCompletion___standard__kernel__Object__init]))(self); /* init on <self:BashCompletion>*/
}
RET_LABEL:;
}
