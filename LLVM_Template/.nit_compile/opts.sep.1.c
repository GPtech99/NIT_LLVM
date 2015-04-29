#include "opts.sep.0.h"
/* method opts#Option#names for (self: Option): Array[String] */
val* opts___opts__Option___names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#names= for (self: Option, Array[String]) */
void opts___opts__Option___names_61d(val* self, val* p0) {
self->attrs[COLOR_opts__Option___names].val = p0; /* _names on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#helptext for (self: Option): String */
val* opts___opts__Option___helptext(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#helptext= for (self: Option, String) */
void opts___opts__Option___helptext_61d(val* self, val* p0) {
self->attrs[COLOR_opts__Option___helptext].val = p0; /* _helptext on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#errors for (self: Option): Array[String] */
val* opts___opts__Option___errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#errors= for (self: Option, Array[String]) */
void opts___opts__Option___errors_61d(val* self, val* p0) {
self->attrs[COLOR_opts__Option___errors].val = p0; /* _errors on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#mandatory for (self: Option): Bool */
short int opts___opts__Option___mandatory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#mandatory= for (self: Option, Bool) */
void opts___opts__Option___mandatory_61d(val* self, short int p0) {
self->attrs[COLOR_opts__Option___mandatory].s = p0; /* _mandatory on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#hidden for (self: Option): Bool */
short int opts___opts__Option___hidden(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__Option___hidden].s; /* _hidden on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#hidden= for (self: Option, Bool) */
void opts___opts__Option___hidden_61d(val* self, short int p0) {
self->attrs[COLOR_opts__Option___hidden].s = p0; /* _hidden on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#read for (self: Option): Bool */
short int opts___opts__Option___read(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__Option___read].s; /* _read on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#read= for (self: Option, Bool) */
void opts___opts__Option___read_61d(val* self, short int p0) {
self->attrs[COLOR_opts__Option___read].s = p0; /* _read on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#value for (self: Option): nullable Object */
val* opts___opts__Option___value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_opts__Option___value].val; /* _value on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#value= for (self: Option, nullable Object) */
void opts___opts__Option___value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa VALUE */
/* <p0:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
self->attrs[COLOR_opts__Option___value].val = p0; /* _value on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#default_value for (self: Option): nullable Object */
val* opts___opts__Option___default_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_opts__Option___default_value].val; /* _default_value on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#default_value= for (self: Option, nullable Object) */
void opts___opts__Option___default_value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (default_value) <p0:nullable Object> isa VALUE */
/* <p0:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 43);
fatal_exit(1);
}
self->attrs[COLOR_opts__Option___default_value].val = p0; /* _default_value on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#init for (self: Option, String, nullable Object, nullable Array[String]) */
void opts___opts__Option___init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_help /* var help: String */;
val* var_default /* var default: nullable Object */;
val* var_names /* var names: nullable Array[String] */;
/* Covariant cast for argument 1 (default) <p1:nullable Object> isa VALUE */
/* <p1:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 46);
fatal_exit(1);
}
var_help = p0;
var_default = p1;
var_names = p2;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_opts__Option__init_opt]))(self, var_help, var_default, var_names); /* init_opt on <self:Option>*/
}
RET_LABEL:;
}
/* method opts#Option#init_opt for (self: Option, String, nullable Object, nullable Array[String]) */
void opts___opts__Option___init_opt(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_help /* var help: String */;
val* var_default /* var default: nullable Object */;
val* var_names /* var names: nullable Array[String] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[String] */;
val* var4 /* : Array[nullable Object] */;
/* Covariant cast for argument 1 (default) <p1:nullable Object> isa VALUE */
/* <p1:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 51);
fatal_exit(1);
}
var_help = p0;
var_default = p1;
var_names = p2;
if (var_names == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_names->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_names, ((val*)NULL)); /* == on <var_names:nullable Array[String]>*/
var1 = var2;
}
if (var1){
var3 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__Option__names_61d]))(self, var3); /* names= on <self:Option>*/
}
} else {
{
var4 = ((val*(*)(val* self))(var_names->class->vft[COLOR_standard__array__Collection__to_a]))(var_names); /* to_a on <var_names:nullable Array[String](Array[String])>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__Option__names_61d]))(self, var4); /* names= on <self:Option>*/
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__Option__helptext_61d]))(self, var_help); /* helptext= on <self:Option>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__Option__default_value_61d]))(self, var_default); /* default_value= on <self:Option>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__Option__value_61d]))(self, var_default); /* value= on <self:Option>*/
}
RET_LABEL:;
}
/* method opts#Option#add_aliases for (self: Option, Array[String]) */
void opts___opts__Option___add_aliases(val* self, val* p0) {
val* var_names /* var names: Array[String] */;
var_names = p0;
{
((void(*)(val* self, val* p0))(var_names->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_names, var_names); /* add_all on <var_names:Array[String]>*/
}
RET_LABEL:;
}
/* method opts#Option#to_s for (self: Option): String */
val* opts___opts__Option___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_opts__Option__pretty]))(self, 2l); /* pretty on <self:Option>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#pretty for (self: Option, Int): String */
val* opts___opts__Option___pretty(val* self, long p0) {
val* var /* : String */;
long var_off /* var off: Int */;
val* var1 /* : FlatBuffer */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var_text /* var text: FlatBuffer */;
val* var5 /* : Array[String] */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
long var_rest /* var rest: Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
var_off = p0;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "  ";
var4 = standard___standard__NativeString___to_s_with_length(var3, 2l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__FlatBuffer__from]))(var1, var2); /* from on <var1:FlatBuffer>*/
}
var_text = var1;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__names]))(self); /* names on <self:Option>*/
}
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ", ";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
{
var10 = ((val*(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__string__Collection__join]))(var5, var7); /* join on <var5:Array[String]>*/
}
{
((void(*)(val* self, val* p0))(var_text->class->vft[COLOR_standard__string__Buffer__append]))(var_text, var10); /* append on <var_text:FlatBuffer>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "  ";
var14 = standard___standard__NativeString___to_s_with_length(var13, 2l);
var12 = var14;
varonce11 = var12;
}
{
((void(*)(val* self, val* p0))(var_text->class->vft[COLOR_standard__string__Buffer__append]))(var_text, var12); /* append on <var_text:FlatBuffer>*/
}
{
var15 = ((long(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__length]))(var_text); /* length on <var_text:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_off,var15) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var19 = var_off - var15;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_rest = var16;
{
{ /* Inline kernel#Int#> (var_rest,0l) on <var_rest:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var26 = var_rest > 0l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " ";
var30 = standard___standard__NativeString___to_s_with_length(var29, 1l);
var28 = var30;
varonce27 = var28;
}
{
var31 = ((val*(*)(val* self, long p0))(var28->class->vft[COLOR_standard__string__String___42d]))(var28, var_rest); /* * on <var28:String>*/
}
{
((void(*)(val* self, val* p0))(var_text->class->vft[COLOR_standard__string__Buffer__append]))(var_text, var31); /* append on <var_text:FlatBuffer>*/
}
} else {
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__helptext]))(self); /* helptext on <self:Option>*/
}
{
((void(*)(val* self, val* p0))(var_text->class->vft[COLOR_standard__string__Buffer__append]))(var_text, var32); /* append on <var_text:FlatBuffer>*/
}
{
var33 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Object__to_s]))(var_text); /* to_s on <var_text:FlatBuffer>*/
}
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#pretty_default for (self: Option): String */
val* opts___opts__Option___pretty_default(val* self) {
val* var /* : String */;
val* var1 /* : nullable Object */;
val* var_dv /* var dv: nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
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
val* var13 /* : String */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__default_value]))(self); /* default_value on <self:Option>*/
}
var_dv = var1;
if (var_dv == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_dv&3)?class_info[((long)var_dv&3)]:var_dv->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_dv, ((val*)NULL)); /* != on <var_dv:nullable Object>*/
var2 = var3;
}
if (var2){
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " (";
var8 = standard___standard__NativeString___to_s_with_length(var7, 2l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = standard___standard__NativeString___to_s_with_length(var11, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))((((long)var_dv&3)?class_info[((long)var_dv&3)]:var_dv->class)->vft[COLOR_standard__string__Object__to_s]))(var_dv); /* to_s on <var_dv:nullable Object(Object)>*/
}
((struct instance_standard__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var = var14;
goto RET_LABEL;
} else {
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "";
var18 = standard___standard__NativeString___to_s_with_length(var17, 0l);
var16 = var18;
varonce15 = var16;
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#read_param for (self: Option, Iterator[String]) */
void opts___opts__Option___read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
var_it = p0;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_opts__Option__read_61d]))(self, 1); /* read= on <self:Option>*/
}
RET_LABEL:;
}
/* method opts#OptionText#init for (self: OptionText, String) */
void opts___opts__OptionText___init(val* self, val* p0) {
val* var_text /* var text: String */;
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
var_text = p0;
/* <((val*)NULL):null> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(((val*)NULL) == NULL) {
var = is_nullable;
} else {
if(cltype >= ((val*)NULL)->type->table_size) {
var = 0;
} else {
var = ((val*)NULL)->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 105);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_opts__Option__init]))(self, var_text, ((val*)NULL), ((val*)NULL)); /* init on <self:OptionText>*/
}
RET_LABEL:;
}
/* method opts#OptionText#pretty for (self: OptionText, Int): String */
val* opts___opts__OptionText___Option__pretty(val* self, long p0) {
val* var /* : String */;
long var_off /* var off: Int */;
val* var1 /* : String */;
var_off = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:OptionText>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionText#to_s for (self: OptionText): String */
val* opts___opts__OptionText___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__helptext]))(self); /* helptext on <self:OptionText>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionBool#init for (self: OptionBool, String, Array[String]) */
void opts___opts__OptionBool___init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
val* var /* : nullable Object */;
var_help = p0;
var_names = p1;
{
var = (val*)((long)(0)<<2|3);
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_opts__Option__init]))(self, var_help, var, var_names); /* init on <self:OptionBool>*/
}
RET_LABEL:;
}
/* method opts#OptionBool#read_param for (self: OptionBool, Iterator[String]) */
void opts___opts__OptionBool___Option__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
val* var /* : nullable Object */;
var_it = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts___opts__OptionBool___Option__read_param]))(self, p0); /* read_param on <self:OptionBool>*/
}
{
var = (val*)((long)(1)<<2|3);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__Option__value_61d]))(self, var); /* value= on <self:OptionBool>*/
}
RET_LABEL:;
}
/* method opts#OptionCount#init for (self: OptionCount, String, Array[String]) */
void opts___opts__OptionCount___init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
val* var /* : nullable Object */;
var_help = p0;
var_names = p1;
{
var = (val*)(0l<<2|1);
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_opts__Option__init]))(self, var_help, var, var_names); /* init on <self:OptionCount>*/
}
RET_LABEL:;
}
/* method opts#OptionCount#read_param for (self: OptionCount, Iterator[String]) */
void opts___opts__OptionCount___Option__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
val* var_ /* var : OptionCount */;
val* var /* : nullable Object */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
val* var6 /* : nullable Object */;
var_it = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts___opts__OptionCount___Option__read_param]))(self, p0); /* read_param on <self:OptionCount>*/
}
var_ = self;
{
var = ((val*(*)(val* self))(var_->class->vft[COLOR_opts__Option__value]))(var_); /* value on <var_:OptionCount>*/
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var4 = (long)(var)>>2;
var5 = var4 + 1l;
var1 = var5;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var6 = (val*)(var1<<2|1);
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_opts__Option__value_61d]))(var_, var6); /* value= on <var_:OptionCount>*/
}
RET_LABEL:;
}
/* method opts#OptionParameter#convert for (self: OptionParameter, String): nullable Object */
val* opts___opts__OptionParameter___convert(val* self, val* p0) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "convert", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 146);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method opts#OptionParameter#parameter_mandatory for (self: OptionParameter): Bool */
short int opts___opts__OptionParameter___parameter_mandatory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:OptionParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionParameter#parameter_mandatory= for (self: OptionParameter, Bool) */
void opts___opts__OptionParameter___parameter_mandatory_61d(val* self, short int p0) {
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = p0; /* _parameter_mandatory on <self:OptionParameter> */
RET_LABEL:;
}
/* method opts#OptionParameter#read_param for (self: OptionParameter, Iterator[String]) */
void opts___opts__OptionParameter___Option__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var_ /* var : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
short int var_5 /* var : Bool */;
val* var6 /* : nullable Object */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
char var12 /* : Char */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var17 /* : Array[String] */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : Array[String] */;
val* var28 /* : nullable Object */;
val* var29 /* : String */;
var_it = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts___opts__OptionParameter___Option__read_param]))(self, p0); /* read_param on <self:OptionParameter>*/
}
{
var1 = ((short int(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_it); /* is_ok on <var_it:Iterator[String]>*/
}
var_ = var1;
if (var1){
{
var3 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_standard__string__Text__is_empty]))(var3); /* is_empty on <var3:nullable Object(String)>*/
}
var_5 = var4;
if (var4){
var2 = var_5;
} else {
{
var6 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__Text__chars]))(var6); /* chars on <var6:nullable Object(String)>*/
}
{
var8 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var7); /* first on <var7:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var8,'-') on <var8:nullable Object(Char)> */
var12 = (char)((long)(var8)>>2);
var11 = (var8 != NULL) && (var12 == '-');
var13 = !var11;
var9 = var13;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var2 = var9;
}
var = var2;
} else {
var = var_;
}
if (var){
{
var14 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var15 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_opts__OptionParameter__convert]))(self, var14); /* convert on <self:OptionParameter>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__Option__value_61d]))(self, var15); /* value= on <self:OptionParameter>*/
}
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
} else {
{
var16 = ((short int(*)(val* self))(self->class->vft[COLOR_opts__OptionParameter__parameter_mandatory]))(self); /* parameter_mandatory on <self:OptionParameter>*/
}
if (var16){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__errors]))(self); /* errors on <self:OptionParameter>*/
}
if (unlikely(varonce==NULL)) {
var18 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "Parameter expected for option ";
var22 = standard___standard__NativeString___to_s_with_length(var21, 30l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ".";
var26 = standard___standard__NativeString___to_s_with_length(var25, 1l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var18)->values[2]=var24;
} else {
var18 = varonce;
varonce = NULL;
}
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__names]))(self); /* names on <self:OptionParameter>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var27); /* first on <var27:Array[String]>*/
}
((struct instance_standard__NativeArray*)var18)->values[1]=var28;
{
var29 = ((val*(*)(val* self))(var18->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var17, var29); /* add on <var17:Array[String]>*/
}
} else {
}
}
RET_LABEL:;
}
/* method opts#OptionString#init for (self: OptionString, String, Array[String]) */
void opts___opts__OptionString___init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
var_help = p0;
var_names = p1;
/* <((val*)NULL):null> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(((val*)NULL) == NULL) {
var = is_nullable;
} else {
if(cltype >= ((val*)NULL)->type->table_size) {
var = 0;
} else {
var = ((val*)NULL)->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 172);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_opts__Option__init]))(self, var_help, ((val*)NULL), var_names); /* init on <self:OptionString>*/
}
RET_LABEL:;
}
/* method opts#OptionString#convert for (self: OptionString, String): nullable String */
val* opts___opts__OptionString___OptionParameter__convert(val* self, val* p0) {
val* var /* : nullable String */;
val* var_str /* var str: String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_str = p0;
/* <var_str:String> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_str->type->table_size) {
var1 = 0;
} else {
var1 = var_str->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = var_str == NULL ? "null" : var_str->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 174);
fatal_exit(1);
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#values for (self: OptionEnum): Array[String] */
val* opts___opts__OptionEnum___values(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionEnum___values].val; /* _values on <self:OptionEnum> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 184);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#values= for (self: OptionEnum, Array[String]) */
void opts___opts__OptionEnum___values_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionEnum___values].val = p0; /* _values on <self:OptionEnum> */
RET_LABEL:;
}
/* method opts#OptionEnum#init for (self: OptionEnum, Array[String], String, Int, Array[String]) */
void opts___opts__OptionEnum___init(val* self, val* p0, val* p1, long p2, val* p3) {
val* var_values /* var values: Array[String] */;
val* var_help /* var help: String */;
long var_default /* var default: Int */;
val* var_names /* var names: Array[String] */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : Array[nullable Object] */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : nullable Object */;
var_values = p0;
var_help = p1;
var_default = p2;
var_names = p3;
{
var = ((long(*)(val* self))(var_values->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_values); /* length on <var_values:Array[String]>*/
}
{
{ /* Inline kernel#Int#> (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var4 = var > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 191);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var_values->class->vft[COLOR_standard__array__Collection__to_a]))(var_values); /* to_a on <var_values:Array[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__OptionEnum__values_61d]))(self, var5); /* values= on <self:OptionEnum>*/
}
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = " <";
var10 = standard___standard__NativeString___to_s_with_length(var9, 2l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ">";
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[3]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var_help;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ", ";
var18 = standard___standard__NativeString___to_s_with_length(var17, 2l);
var16 = var18;
varonce15 = var16;
}
{
var19 = ((val*(*)(val* self, val* p0))(var_values->class->vft[COLOR_standard__string__Collection__join]))(var_values, var16); /* join on <var_values:Array[String]>*/
}
((struct instance_standard__NativeArray*)var6)->values[2]=var19;
{
var20 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
var21 = (val*)(var_default<<2|1);
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_opts__Option__init]))(self, var20, var21, var_names); /* init on <self:OptionEnum>*/
}
RET_LABEL:;
}
/* method opts#OptionEnum#convert for (self: OptionEnum, String): Int */
long opts___opts__OptionEnum___OptionParameter__convert(val* self, val* p0) {
long var /* : Int */;
val* var_str /* var str: String */;
val* var1 /* : Array[String] */;
long var2 /* : Int */;
long var_id /* var id: Int */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : Array[String] */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var_e /* var e: String */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : Array[String] */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : Array[String] */;
var_str = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionEnum__values]))(self); /* values on <self:OptionEnum>*/
}
{
var2 = ((long(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__SequenceRead__index_of]))(var1, var_str); /* index_of on <var1:Array[String]>*/
}
var_id = var2;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var5 = -1l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_id,var3) on <var_id:Int> */
var8 = var_id == var3;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Unrecognized value for option ";
var13 = standard___standard__NativeString___to_s_with_length(var12, 30l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ".\n";
var17 = standard___standard__NativeString___to_s_with_length(var16, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__names]))(self); /* names on <self:OptionEnum>*/
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ", ";
var22 = standard___standard__NativeString___to_s_with_length(var21, 2l);
var20 = var22;
varonce19 = var20;
}
{
var23 = ((val*(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__string__Collection__join]))(var18, var20); /* join on <var18:Array[String]>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var23;
{
var24 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
var_e = var24;
if (unlikely(varonce25==NULL)) {
var26 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "Expected values are: ";
var30 = standard___standard__NativeString___to_s_with_length(var29, 21l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = ".";
var34 = standard___standard__NativeString___to_s_with_length(var33, 1l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var26)->values[2]=var32;
} else {
var26 = varonce25;
varonce25 = NULL;
}
{
var35 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionEnum__values]))(self); /* values on <self:OptionEnum>*/
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ", ";
var39 = standard___standard__NativeString___to_s_with_length(var38, 2l);
var37 = var39;
varonce36 = var37;
}
{
var40 = ((val*(*)(val* self, val* p0))(var35->class->vft[COLOR_standard__string__Collection__join]))(var35, var37); /* join on <var35:Array[String]>*/
}
((struct instance_standard__NativeArray*)var26)->values[1]=var40;
{
var41 = ((val*(*)(val* self))(var26->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
{
var42 = ((val*(*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__string__String___43d]))(var_e, var41); /* + on <var_e:String>*/
}
var_e = var42;
{
var43 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__errors]))(self); /* errors on <self:OptionEnum>*/
}
{
((void(*)(val* self, val* p0))(var43->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var43, var_e); /* add on <var43:Array[String]>*/
}
} else {
}
var = var_id;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#convert for (self: OptionParameter, String): nullable Object */
val* VIRTUAL_opts___opts__OptionEnum___OptionParameter__convert(val* self, val* p0) {
val* var /* : nullable Object */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
var1 = opts___opts__OptionEnum___OptionParameter__convert(self, p0);
var2 = (val*)(var1<<2|1);
var = var2;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#value_name for (self: OptionEnum): String */
val* opts___opts__OptionEnum___value_name(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
long var4 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionEnum__values]))(self); /* values on <self:OptionEnum>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__value]))(self); /* value on <self:OptionEnum>*/
}
{
var4 = (long)(var2)>>2;
var3 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, var4); /* [] on <var1:Array[String]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#pretty_default for (self: OptionEnum): String */
val* opts___opts__OptionEnum___Option__pretty_default(val* self) {
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
val* var10 /* : Array[String] */;
val* var11 /* : nullable Object */;
val* var12 /* : nullable Object */;
long var13 /* : Int */;
val* var14 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = " (";
var5 = standard___standard__NativeString___to_s_with_length(var4, 2l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ")";
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
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionEnum__values]))(self); /* values on <self:OptionEnum>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__Option__default_value]))(self); /* default_value on <self:OptionEnum>*/
}
{
var13 = (long)(var11)>>2;
var12 = ((val*(*)(val* self, long p0))(var10->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var10, var13); /* [] on <var10:Array[String]>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var12;
{
var14 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionInt#init for (self: OptionInt, String, Int, Array[String]) */
void opts___opts__OptionInt___init(val* self, val* p0, long p1, val* p2) {
val* var_help /* var help: String */;
long var_default /* var default: Int */;
val* var_names /* var names: Array[String] */;
val* var /* : nullable Object */;
var_help = p0;
var_default = p1;
var_names = p2;
{
var = (val*)(var_default<<2|1);
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_opts__Option__init]))(self, var_help, var, var_names); /* init on <self:OptionInt>*/
}
RET_LABEL:;
}
/* method opts#OptionInt#convert for (self: OptionInt, String): Int */
long opts___opts__OptionInt___OptionParameter__convert(val* self, val* p0) {
long var /* : Int */;
val* var_str /* var str: String */;
long var1 /* : Int */;
var_str = p0;
{
var1 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__to_i]))(var_str); /* to_i on <var_str:String>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionInt#convert for (self: OptionParameter, String): nullable Object */
val* VIRTUAL_opts___opts__OptionInt___OptionParameter__convert(val* self, val* p0) {
val* var /* : nullable Object */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
var1 = opts___opts__OptionInt___OptionParameter__convert(self, p0);
var2 = (val*)(var1<<2|1);
var = var2;
RET_LABEL:;
return var;
}
/* method opts#OptionFloat#init for (self: OptionFloat, String, Float, Array[String]) */
void opts___opts__OptionFloat___init(val* self, val* p0, double p1, val* p2) {
val* var_help /* var help: String */;
double var_default /* var default: Float */;
val* var_names /* var names: Array[String] */;
val* var /* : nullable Object */;
var_help = p0;
var_default = p1;
var_names = p2;
{
var = BOX_standard__Float(var_default); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_opts__Option__init]))(self, var_help, var, var_names); /* init on <self:OptionFloat>*/
}
RET_LABEL:;
}
/* method opts#OptionFloat#convert for (self: OptionFloat, String): Float */
double opts___opts__OptionFloat___OptionParameter__convert(val* self, val* p0) {
double var /* : Float */;
val* var_str /* var str: String */;
double var1 /* : Float */;
var_str = p0;
{
var1 = ((double(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__to_f]))(var_str); /* to_f on <var_str:String>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionFloat#convert for (self: OptionParameter, String): nullable Object */
val* VIRTUAL_opts___opts__OptionFloat___OptionParameter__convert(val* self, val* p0) {
val* var /* : nullable Object */;
double var1 /* : Float */;
val* var2 /* : nullable Object */;
var1 = opts___opts__OptionFloat___OptionParameter__convert(self, p0);
var2 = BOX_standard__Float(var1); /* autobox from Float to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method opts#OptionArray#init for (self: OptionArray, String, Array[String]) */
void opts___opts__OptionArray___init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_help = p0;
var_names = p1;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Array[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__OptionArray__values_61d]))(self, var); /* values= on <self:OptionArray>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionArray__values]))(self); /* values on <self:OptionArray>*/
}
/* <var1:Array[String]> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 251);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_opts__Option__init]))(self, var_help, var1, var_names); /* init on <self:OptionArray>*/
}
RET_LABEL:;
}
/* method opts#OptionArray#values for (self: OptionArray): Array[String] */
val* opts___opts__OptionArray___values(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 254);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionArray#values= for (self: OptionArray, Array[String]) */
void opts___opts__OptionArray___values_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionArray___values].val = p0; /* _values on <self:OptionArray> */
RET_LABEL:;
}
/* method opts#OptionArray#convert for (self: OptionArray, String): Array[String] */
val* opts___opts__OptionArray___OptionParameter__convert(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_str /* var str: String */;
val* var1 /* : Array[String] */;
val* var2 /* : Array[String] */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_str = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionArray__values]))(self); /* values on <self:OptionArray>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var1, var_str); /* add on <var1:Array[String]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionArray__values]))(self); /* values on <self:OptionArray>*/
}
/* <var2:Array[String]> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 258);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#options for (self: OptionContext): Array[Option] */
val* opts___opts__OptionContext___options(val* self) {
val* var /* : Array[Option] */;
val* var1 /* : Array[Option] */;
var1 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#options= for (self: OptionContext, Array[Option]) */
void opts___opts__OptionContext___options_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionContext___options].val = p0; /* _options on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#rest for (self: OptionContext): Array[String] */
val* opts___opts__OptionContext___rest(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#rest= for (self: OptionContext, Array[String]) */
void opts___opts__OptionContext___rest_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionContext___rest].val = p0; /* _rest on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#errors for (self: OptionContext): Array[String] */
val* opts___opts__OptionContext___errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 270);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#errors= for (self: OptionContext, Array[String]) */
void opts___opts__OptionContext___errors_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionContext___errors].val = p0; /* _errors on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#optmap for (self: OptionContext): HashMap[String, Option] */
val* opts___opts__OptionContext___optmap(val* self) {
val* var /* : HashMap[String, Option] */;
val* var1 /* : HashMap[String, Option] */;
var1 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#optmap= for (self: OptionContext, HashMap[String, Option]) */
void opts___opts__OptionContext___optmap_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionContext___optmap].val = p0; /* _optmap on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#add_option for (self: OptionContext, Array[Option]) */
void opts___opts__OptionContext___add_option(val* self, val* p0) {
val* var_opts /* var opts: Array[Option] */;
val* var /* : Array[Option] */;
var_opts = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__options]))(self); /* options on <self:OptionContext>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var, var_opts); /* add_all on <var:Array[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#usage for (self: OptionContext) */
void opts___opts__OptionContext___usage(val* self) {
long var_lmax /* var lmax: Int */;
val* var /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : ArrayIterator[Option] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: Option */;
long var_l /* var l: Int */;
val* var5 /* : Array[String] */;
val* var_6 /* var : Array[String] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_n /* var n: String */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var31 /* : Array[Option] */;
val* var_32 /* var : Array[Option] */;
val* var33 /* : Iterator[nullable Object] */;
val* var_34 /* var : ArrayIterator[Option] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_i37 /* var i: Option */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Sys */;
val* var41 /* : String */;
var_lmax = 1l;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__options]))(self); /* options on <self:OptionContext>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Option]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:ArrayIterator[Option]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:ArrayIterator[Option]>*/
}
var_i = var4;
var_l = 3l;
{
var5 = ((val*(*)(val* self))(var_i->class->vft[COLOR_opts__Option__names]))(var_i); /* names on <var_i:Option>*/
}
var_6 = var5;
{
var7 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_6); /* iterator on <var_6:Array[String]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:ArrayIterator[String]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:ArrayIterator[String]>*/
}
var_n = var10;
{
var11 = ((long(*)(val* self))(var_n->class->vft[COLOR_standard__string__Text__length]))(var_n); /* length on <var_n:String>*/
}
{
{ /* Inline kernel#Int#+ (var11,2l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var14 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var15 = var11 + 2l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_l,var12) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var18 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var_l + var12;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_l = var16;
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:ArrayIterator[String]>*/
}
{
{ /* Inline kernel#Int#< (var_lmax,var_l) on <var_lmax:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var25 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var29 = var_lmax < var_l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
var_lmax = var_l;
} else {
}
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label30;
}
}
BREAK_label30: (void)0;
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:ArrayIterator[Option]>*/
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__options]))(self); /* options on <self:OptionContext>*/
}
var_32 = var31;
{
var33 = ((val*(*)(val* self))(var_32->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_32); /* iterator on <var_32:Array[Option]>*/
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:ArrayIterator[Option]>*/
}
if (var35){
{
var36 = ((val*(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:ArrayIterator[Option]>*/
}
var_i37 = var36;
{
var38 = ((short int(*)(val* self))(var_i37->class->vft[COLOR_opts__Option__hidden]))(var_i37); /* hidden on <var_i37:Option>*/
}
var39 = !var38;
if (var39){
var40 = glob_sys;
{
var41 = ((val*(*)(val* self, long p0))(var_i37->class->vft[COLOR_opts__Option__pretty]))(var_i37, var_lmax); /* pretty on <var_i37:Option>*/
}
{
((void(*)(val* self, val* p0))(var40->class->vft[COLOR_standard__file__Sys__print]))(var40, var41); /* print on <var40:Sys>*/
}
} else {
}
{
((void(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))(var_34->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:ArrayIterator[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#parse for (self: OptionContext, Collection[String]) */
void opts___opts__OptionContext___parse(val* self, val* p0) {
val* var_argv /* var argv: Collection[String] */;
val* var /* : Iterator[nullable Object] */;
val* var_it /* var it: Iterator[String] */;
var_argv = p0;
{
var = ((val*(*)(val* self))((((long)var_argv&3)?class_info[((long)var_argv&3)]:var_argv->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_argv); /* iterator on <var_argv:Collection[String]>*/
}
var_it = var;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts__OptionContext__parse_intern]))(self, var_it); /* parse_intern on <self:OptionContext>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#options_before_rest for (self: OptionContext): Bool */
short int opts___opts__OptionContext___options_before_rest(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__OptionContext___options_before_rest].s; /* _options_before_rest on <self:OptionContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#options_before_rest= for (self: OptionContext, Bool) */
void opts___opts__OptionContext___options_before_rest_61d(val* self, short int p0) {
self->attrs[COLOR_opts__OptionContext___options_before_rest].s = p0; /* _options_before_rest on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#parse_intern for (self: OptionContext, Iterator[String]) */
void opts___opts__OptionContext___parse_intern(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var_parseargs /* var parseargs: Bool */;
val* var /* : Array[String] */;
val* var_rest /* var rest: Array[String] */;
short int var1 /* : Bool */;
short int var_ /* var : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_str /* var str: String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
short int var7 /* : Bool */;
val* var8 /* : Array[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : SequenceRead[Char] */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var21 /* : Bool */;
short int var_next_called /* var next_called: Bool */;
long var_i /* var i: Int */;
long var22 /* : Int */;
long var_23 /* var : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : SequenceRead[Char] */;
val* var36 /* : nullable Object */;
val* var37 /* : String */;
char var38 /* : Char */;
val* var39 /* : String */;
val* var_short_opt /* var short_opt: String */;
val* var40 /* : HashMap[String, Option] */;
short int var41 /* : Bool */;
val* var42 /* : HashMap[String, Option] */;
val* var43 /* : nullable Object */;
val* var_option /* var option: Option */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
long var47 /* : Int */;
short int var48 /* : Bool */;
val* var49 /* : HashMap[String, Option] */;
short int var50 /* : Bool */;
val* var51 /* : HashMap[String, Option] */;
val* var52 /* : nullable Object */;
val* var_opt /* var opt: Option */;
val* var53 /* : nullable Object */;
short int var54 /* : Bool */;
val* var55 /* : Array[nullable Object] */;
val* var57 /* : Array[Option] */;
val* var_58 /* var : Array[Option] */;
val* var59 /* : Iterator[nullable Object] */;
val* var_60 /* var : ArrayIterator[Option] */;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_opt63 /* var opt: Option */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var_66 /* var : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : Array[String] */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
val* var80 /* : Array[String] */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
val* var85 /* : String */;
val* var86 /* : String */;
var_it = p0;
var_parseargs = 1;
{
((void(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__build]))(self); /* build on <self:OptionContext>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__rest]))(self); /* rest on <self:OptionContext>*/
}
var_rest = var;
for(;;) {
var_ = var_parseargs;
if (var_parseargs){
{
var2 = ((short int(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_it); /* is_ok on <var_it:Iterator[String]>*/
}
var1 = var2;
} else {
var1 = var_;
}
if (var1){
{
var3 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
var_str = var3;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "--";
var6 = standard___standard__NativeString___to_s_with_length(var5, 2l);
var4 = var6;
varonce = var4;
}
{
var7 = ((short int(*)(val* self, val* p0))(var_str->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_str, var4); /* == on <var_str:String>*/
}
if (var7){
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
{
var8 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__array__Iterator__to_a]))(var_it); /* to_a on <var_it:Iterator[String]>*/
}
{
((void(*)(val* self, val* p0))(var_rest->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_rest, var8); /* add_all on <var_rest:Array[String]>*/
}
var_parseargs = 0;
} else {
{
var10 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var12 = (val*)((long)('-')<<2|2);
var11 = ((long(*)(val* self, val* p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of]))(var10, var12); /* last_index_of on <var10:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Int#== (var11,0l) on <var11:Int> */
var15 = var11 == 0l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_16 = var13;
if (var13){
{
var17 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline kernel#Int#> (var17,2l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var20 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var21 = var17 > 2l;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var9 = var18;
} else {
var9 = var_16;
}
if (var9){
var_next_called = 0;
var_i = 1l;
{
var22 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_23 = var22;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_23) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_23:Int> isa OTHER */
/* <var_23:Int> isa OTHER */
var26 = 1; /* easy <var_23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var30 = var_i < var_23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "-";
var34 = standard___standard__NativeString___to_s_with_length(var33, 1l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var36 = ((val*(*)(val* self, long p0))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var35, var_i); /* [] on <var35:SequenceRead[Char]>*/
}
var38 = (char)((long)(var36)>>2);
var37 = standard__string___Char___Object__to_s(var38);
{
var39 = ((val*(*)(val* self, val* p0))(var32->class->vft[COLOR_standard__string__String___43d]))(var32, var37); /* + on <var32:String>*/
}
var_short_opt = var39;
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__optmap]))(self); /* optmap on <self:OptionContext>*/
}
{
var41 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var40, var_short_opt); /* has_key on <var40:HashMap[String, Option]>*/
}
if (var41){
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__optmap]))(self); /* optmap on <self:OptionContext>*/
}
{
var43 = ((val*(*)(val* self, val* p0))(var42->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var42, var_short_opt); /* [] on <var42:HashMap[String, Option]>*/
}
var_option = var43;
/* <var_option:Option> isa OptionParameter */
cltype45 = type_opts__OptionParameter.color;
idtype46 = type_opts__OptionParameter.id;
if(cltype45 >= var_option->type->table_size) {
var44 = 0;
} else {
var44 = var_option->type->type_table[cltype45] == idtype46;
}
if (var44){
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
var_next_called = 1;
} else {
}
{
((void(*)(val* self, val* p0))(var_option->class->vft[COLOR_opts__Option__read_param]))(var_option, var_it); /* read_param on <var_option:Option>*/
}
} else {
}
var47 = standard___standard__Int___Discrete__successor(var_i, 1l);
var_i = var47;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var48 = !var_next_called;
if (var48){
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
} else {
}
} else {
{
var49 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__optmap]))(self); /* optmap on <self:OptionContext>*/
}
{
var50 = ((short int(*)(val* self, val* p0))(var49->class->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var49, var_str); /* has_key on <var49:HashMap[String, Option]>*/
}
if (var50){
{
var51 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__optmap]))(self); /* optmap on <self:OptionContext>*/
}
{
var52 = ((val*(*)(val* self, val* p0))(var51->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var51, var_str); /* [] on <var51:HashMap[String, Option]>*/
}
var_opt = var52;
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
{
((void(*)(val* self, val* p0))(var_opt->class->vft[COLOR_opts__Option__read_param]))(var_opt, var_it); /* read_param on <var_opt:Option>*/
}
} else {
{
var53 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
((void(*)(val* self, val* p0))(var_rest->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_rest, var53); /* add on <var_rest:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
{
var54 = ((short int(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__options_before_rest]))(self); /* options_before_rest on <self:OptionContext>*/
}
if (var54){
{
var55 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__array__Iterator__to_a]))(var_it); /* to_a on <var_it:Iterator[String]>*/
}
{
((void(*)(val* self, val* p0))(var_rest->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_rest, var55); /* add_all on <var_rest:Array[String]>*/
}
var_parseargs = 0;
} else {
}
}
}
}
} else {
goto BREAK_label56;
}
}
BREAK_label56: (void)0;
{
var57 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__options]))(self); /* options on <self:OptionContext>*/
}
var_58 = var57;
{
var59 = ((val*(*)(val* self))(var_58->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_58); /* iterator on <var_58:Array[Option]>*/
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
var_opt63 = var62;
{
var65 = ((short int(*)(val* self))(var_opt63->class->vft[COLOR_opts__Option__mandatory]))(var_opt63); /* mandatory on <var_opt63:Option>*/
}
var_66 = var65;
if (var65){
{
var67 = ((short int(*)(val* self))(var_opt63->class->vft[COLOR_opts__Option__read]))(var_opt63); /* read on <var_opt63:Option>*/
}
var68 = !var67;
var64 = var68;
} else {
var64 = var_66;
}
if (var64){
{
var69 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__errors]))(self); /* errors on <self:OptionContext>*/
}
if (unlikely(varonce70==NULL)) {
var71 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "Mandatory option ";
var75 = standard___standard__NativeString___to_s_with_length(var74, 17l);
var73 = var75;
varonce72 = var73;
}
((struct instance_standard__NativeArray*)var71)->values[0]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = " not found.";
var79 = standard___standard__NativeString___to_s_with_length(var78, 11l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var71)->values[2]=var77;
} else {
var71 = varonce70;
varonce70 = NULL;
}
{
var80 = ((val*(*)(val* self))(var_opt63->class->vft[COLOR_opts__Option__names]))(var_opt63); /* names on <var_opt63:Option>*/
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = ", ";
var84 = standard___standard__NativeString___to_s_with_length(var83, 2l);
var82 = var84;
varonce81 = var82;
}
{
var85 = ((val*(*)(val* self, val* p0))(var80->class->vft[COLOR_standard__string__Collection__join]))(var80, var82); /* join on <var80:Array[String]>*/
}
((struct instance_standard__NativeArray*)var71)->values[1]=var85;
{
var86 = ((val*(*)(val* self))(var71->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var69, var86); /* add on <var69:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_60); /* next on <var_60:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label87;
}
}
BREAK_label87: (void)0;
{
((void(*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_60); /* finish on <var_60:ArrayIterator[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#build for (self: OptionContext) */
void opts___opts__OptionContext___build(val* self) {
val* var /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : ArrayIterator[Option] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var5 /* : Array[String] */;
val* var_6 /* var : Array[String] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_n /* var n: String */;
val* var11 /* : HashMap[String, Option] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__options]))(self); /* options on <self:OptionContext>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Option]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:ArrayIterator[Option]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:ArrayIterator[Option]>*/
}
var_o = var4;
{
var5 = ((val*(*)(val* self))(var_o->class->vft[COLOR_opts__Option__names]))(var_o); /* names on <var_o:Option>*/
}
var_6 = var5;
{
var7 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_6); /* iterator on <var_6:Array[String]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:ArrayIterator[String]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:ArrayIterator[String]>*/
}
var_n = var10;
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__optmap]))(self); /* optmap on <self:OptionContext>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var11->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var11, var_n, var_o); /* []= on <var11:HashMap[String, Option]>*/
}
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:ArrayIterator[String]>*/
}
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label12;
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:ArrayIterator[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#get_errors for (self: OptionContext): Array[String] */
val* opts___opts__OptionContext___get_errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_errors /* var errors: Array[String] */;
val* var2 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[Option] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var7 /* : Array[String] */;
val* var_8 /* var : Array[String] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[String] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_e /* var e: String */;
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_errors = var1;
{
((void(*)(val* self, val* p0))(var_errors->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_errors, var_errors); /* add_all on <var_errors:Array[String]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_opts__OptionContext__options]))(self); /* options on <self:OptionContext>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Option]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[Option]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[Option]>*/
}
var_o = var6;
{
var7 = ((val*(*)(val* self))(var_o->class->vft[COLOR_opts__Option__errors]))(var_o); /* errors on <var_o:Option>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[String]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[String]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[String]>*/
}
var_e = var12;
{
((void(*)(val* self, val* p0))(var_errors->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_errors, var_e); /* add on <var_errors:Array[String]>*/
}
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[String]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label13;
}
}
BREAK_label13: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[Option]>*/
}
var = var_errors;
goto RET_LABEL;
RET_LABEL:;
return var;
}
