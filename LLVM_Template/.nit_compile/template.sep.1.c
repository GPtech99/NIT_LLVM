#include "template.sep.0.h"
/* method template#Template#rendering for (self: Template) */
void template___template__Template___rendering(val* self) {
RET_LABEL:;
}
/* method template#Template#add for (self: Template, Writable) */
void template___template__Template___add(val* self, val* p0) {
val* var_element /* var element: Writable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Array[Writable] */;
var_element = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_template__Template__is_frozen]))(self); /* is_frozen on <self:Template>*/
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_template, 110);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_template__Template__content]))(self); /* content on <self:Template>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var2, var_element); /* add on <var2:Array[Writable]>*/
}
RET_LABEL:;
}
/* method template#Template#addn for (self: Template, Writable) */
void template___template__Template___addn(val* self, val* p0) {
val* var_element /* var element: Writable */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
var_element = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__add]))(self, var_element); /* add on <self:Template>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "\n";
var2 = standard___standard__NativeString___to_s_with_length(var1, 1l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__add]))(self, var); /* add on <self:Template>*/
}
RET_LABEL:;
}
/* method template#Template#add_all for (self: Template, Collection[Writable]) */
void template___template__Template___add_all(val* self, val* p0) {
val* var_elements /* var elements: Collection[Writable] */;
val* var /* : Array[Writable] */;
var_elements = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_template__Template__content]))(self); /* content on <self:Template>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var, var_elements); /* add_all on <var:Array[Writable]>*/
}
RET_LABEL:;
}
/* method template#Template#add_list for (self: Template, Collection[Writable], Writable, Writable) */
void template___template__Template___add_list(val* self, val* p0, val* p1, val* p2) {
val* var_elements /* var elements: Collection[Writable] */;
val* var_sep /* var sep: Writable */;
val* var_last_sep /* var last_sep: Writable */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var_last /* var last: Int */;
long var_i /* var i: Int */;
val* var_ /* var : Collection[Writable] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[Writable] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: Writable */;
val* var9 /* : Array[Writable] */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
val* var17 /* : Array[Writable] */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : Array[Writable] */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
var_elements = p0;
var_sep = p1;
var_last_sep = p2;
{
var = ((long(*)(val* self))((((long)var_elements&3)?class_info[((long)var_elements&3)]:var_elements->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_elements); /* length on <var_elements:Collection[Writable]>*/
}
{
{ /* Inline kernel#Int#- (var,2l) on <var:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var3 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 429);
fatal_exit(1);
}
var4 = var - 2l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_last = var1;
var_i = 0l;
var_ = var_elements;
{
var5 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Writable]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[Writable]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[Writable]>*/
}
var_e = var8;
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_template__Template__content]))(self); /* content on <self:Template>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var9, var_e); /* add on <var9:Array[Writable]>*/
}
{
{ /* Inline kernel#Int#< (var_i,var_last) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_last:Int> isa OTHER */
/* <var_last:Int> isa OTHER */
var12 = 1; /* easy <var_last:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 423);
fatal_exit(1);
}
var16 = var_i < var_last;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_template__Template__content]))(self); /* content on <self:Template>*/
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var17, var_sep); /* add on <var17:Array[Writable]>*/
}
} else {
{
{ /* Inline kernel#Int#== (var_i,var_last) on <var_i:Int> */
var20 = var_i == var_last;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_template__Template__content]))(self); /* content on <self:Template>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var21, var_last_sep); /* add on <var21:Array[Writable]>*/
}
} else {
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var28 = var_i + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[Writable]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[Writable]>*/
}
RET_LABEL:;
}
/* method template#Template#is_frozen for (self: Template): Bool */
short int template___template__Template___is_frozen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___is_frozen].s; /* _is_frozen on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_frozen= for (self: Template, Bool) */
void template___template__Template___is_frozen_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___is_frozen].s = p0; /* _is_frozen on <self:Template> */
RET_LABEL:;
}
/* method template#Template#freeze for (self: Template) */
void template___template__Template___freeze(val* self) {
short int var /* : Bool */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_template__Template__is_frozen]))(self); /* is_frozen on <self:Template>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_template__Template__is_frozen_61d]))(self, 1); /* is_frozen= on <self:Template>*/
}
RET_LABEL:;
}
/* method template#Template#new_sub for (self: Template): Template */
val* template___template__Template___new_sub(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
val* var_res /* var res: Template */;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_res = var1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_template__Template__add]))(self, var_res); /* add on <self:Template>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method template#Template#content for (self: Template): Array[Writable] */
val* template___template__Template___content(val* self) {
val* var /* : Array[Writable] */;
val* var1 /* : Array[Writable] */;
var1 = self->attrs[COLOR_template__Template___content].val; /* _content on <self:Template> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_template, 183);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#content= for (self: Template, Array[Writable]) */
void template___template__Template___content_61d(val* self, val* p0) {
self->attrs[COLOR_template__Template___content].val = p0; /* _content on <self:Template> */
RET_LABEL:;
}
/* method template#Template#render_done for (self: Template): Bool */
short int template___template__Template___render_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___render_done].s; /* _render_done on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#render_done= for (self: Template, Bool) */
void template___template__Template___render_done_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___render_done].s = p0; /* _render_done on <self:Template> */
RET_LABEL:;
}
/* method template#Template#force_render for (self: Template) */
void template___template__Template___force_render(val* self) {
short int var /* : Bool */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_template__Template__render_done]))(self); /* render_done on <self:Template>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_template__Template__render_done_61d]))(self, 1); /* render_done= on <self:Template>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_template__Template__rendering]))(self); /* rendering on <self:Template>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_template__Template__freeze]))(self); /* freeze on <self:Template>*/
}
RET_LABEL:;
}
/* method template#Template#write_to for (self: Template, Writer) */
void template___template__Template___standard__stream__Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Array[Writable] */;
val* var_ /* var : Array[Writable] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[Writable] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: Writable */;
var_stream = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_template__Template__is_writing]))(self); /* is_writing on <self:Template>*/
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_template, 205);
fatal_exit(1);
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_template__Template__is_writing_61d]))(self, 1); /* is_writing= on <self:Template>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_template__Template__force_render]))(self); /* force_render on <self:Template>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_template__Template__content]))(self); /* content on <self:Template>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Writable]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[Writable]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[Writable]>*/
}
var_e = var6;
{
((void(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__stream__Writable__write_to]))(var_e, var_stream); /* write_to on <var_e:Writable>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[Writable]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[Writable]>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_template__Template__is_writing_61d]))(self, 0); /* is_writing= on <self:Template>*/
}
RET_LABEL:;
}
/* method template#Template#is_writing for (self: Template): Bool */
short int template___template__Template___is_writing(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___is_writing].s; /* _is_writing on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_writing= for (self: Template, Bool) */
void template___template__Template___is_writing_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___is_writing].s = p0; /* _is_writing on <self:Template> */
RET_LABEL:;
}
