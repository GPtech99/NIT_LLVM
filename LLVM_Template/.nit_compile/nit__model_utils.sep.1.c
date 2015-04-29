#include "nit__model_utils.sep.0.h"
/* method model_utils#MConcern#booster_rank for (self: MConcern): Int */
long nit__model_utils___MConcern___booster_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__model_utils__MConcern___booster_rank].l; /* _booster_rank on <self:MConcern> */
var = var1;
RET_LABEL:;
return var;
}
/* method model_utils#MConcern#booster_rank= for (self: MConcern, Int) */
void nit__model_utils___MConcern___booster_rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__model_utils__MConcern___booster_rank].l = p0; /* _booster_rank on <self:MConcern> */
RET_LABEL:;
}
/* method model_utils#MConcern#concern_rank for (self: MConcern): Int */
long nit__model_utils___MConcern___concern_rank(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "concern_rank", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_utils, 30);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model_utils#MProject#concern_rank for (self: MProject): Int */
long nit__model_utils___MProject___MConcern__concern_rank(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_max /* var max: Int */;
val* var5 /* : POSet[MGroup] */;
val* var_ /* var : POSet[MGroup] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MGroup] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mgroup /* var mgroup: MGroup */;
long var10 /* : Int */;
long var_mmax /* var mmax: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
var1 = self->attrs[COLOR_nit__model_utils__MProject__lazy_32d_concern_rank].s; /* lazy _concern_rank on <self:MProject> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model_utils__MProject___concern_rank].l; /* _concern_rank on <self:MProject> */
} else {
{
var_max = 0l;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MProject__mgroups]))(self); /* mgroups on <self:MProject>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:POSet[MGroup]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MGroup]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MGroup]>*/
}
var_mgroup = var9;
{
var10 = ((long(*)(val* self))(var_mgroup->class->vft[COLOR_nit__model_utils__MConcern__concern_rank]))(var_mgroup); /* concern_rank on <var_mgroup:MGroup>*/
}
var_mmax = var10;
{
{ /* Inline kernel#Int#> (var_mmax,var_max) on <var_mmax:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var13 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var14 = var_mmax > var_max;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var_max = var_mmax;
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MGroup]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MGroup]>*/
}
{
{ /* Inline kernel#Int#+ (var_max,1l) on <var_max:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var21 = var_max + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var3 = var15;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model_utils__MProject___concern_rank].l = var3; /* _concern_rank on <self:MProject> */
var2 = var3;
self->attrs[COLOR_nit__model_utils__MProject__lazy_32d_concern_rank].s = 1; /* lazy _concern_rank on <self:MProject> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method model_utils#MProject#concern_rank= for (self: MProject, Int) */
void nit__model_utils___MProject___concern_rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__model_utils__MProject___concern_rank].l = p0; /* _concern_rank on <self:MProject> */
self->attrs[COLOR_nit__model_utils__MProject__lazy_32d_concern_rank].s = 1; /* lazy _concern_rank on <self:MProject> */
RET_LABEL:;
}
/* method model_utils#MGroup#in_nesting_intro_mclasses for (self: MGroup, MVisibility): Set[MClass] */
val* nit__model_utils___MGroup___in_nesting_intro_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MClass] */;
val* var_res /* var res: HashSet[MClass] */;
val* var2 /* : POSetElement[MGroup] */;
val* var3 /* : Collection[nullable Object] */;
val* var_lst /* var lst: Collection[MGroup] */;
val* var4 /* : Array[MModule] */;
val* var_ /* var : Array[MModule] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[MModule] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : Set[MClass] */;
val* var_10 /* var : Collection[MGroup] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[MGroup] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mgrp /* var mgrp: MGroup */;
val* var15 /* : Set[MClass] */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__in_nesting]))(self); /* in_nesting on <self:MGroup>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__direct_smallers]))(var2); /* direct_smallers on <var2:POSetElement[MGroup]>*/
}
var_lst = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MGroup__mmodules]))(self); /* mmodules on <self:MGroup>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:ArrayIterator[MModule]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:ArrayIterator[MModule]>*/
}
var_mmodule = var8;
{
var9 = ((val*(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__model_utils__MModule__filter_intro_mclasses]))(var_mmodule, var_min_visibility); /* filter_intro_mclasses on <var_mmodule:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var9); /* add_all on <var_res:HashSet[MClass]>*/
}
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:ArrayIterator[MModule]>*/
}
var_10 = var_lst;
{
var11 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_10); /* iterator on <var_10:Collection[MGroup]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[MGroup]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[MGroup]>*/
}
var_mgrp = var14;
{
var15 = ((val*(*)(val* self, val* p0))(var_mgrp->class->vft[COLOR_nit__model_utils__MGroup__in_nesting_intro_mclasses]))(var_mgrp, var_min_visibility); /* in_nesting_intro_mclasses on <var_mgrp:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var15); /* add_all on <var_res:HashSet[MClass]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[MGroup]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MGroup#in_nesting_redef_mclasses for (self: MGroup, MVisibility): Set[MClass] */
val* nit__model_utils___MGroup___in_nesting_redef_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MClass] */;
val* var_res /* var res: HashSet[MClass] */;
val* var2 /* : POSetElement[MGroup] */;
val* var3 /* : Collection[nullable Object] */;
val* var_lst /* var lst: Collection[MGroup] */;
val* var4 /* : Array[MModule] */;
val* var_ /* var : Array[MModule] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[MModule] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : Set[MClass] */;
val* var_10 /* var : Collection[MGroup] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[MGroup] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mgrp /* var mgrp: MGroup */;
val* var15 /* : Set[MClass] */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__in_nesting]))(self); /* in_nesting on <self:MGroup>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__direct_smallers]))(var2); /* direct_smallers on <var2:POSetElement[MGroup]>*/
}
var_lst = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MGroup__mmodules]))(self); /* mmodules on <self:MGroup>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:ArrayIterator[MModule]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:ArrayIterator[MModule]>*/
}
var_mmodule = var8;
{
var9 = ((val*(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__model_utils__MModule__filter_redef_mclasses]))(var_mmodule, var_min_visibility); /* filter_redef_mclasses on <var_mmodule:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var9); /* add_all on <var_res:HashSet[MClass]>*/
}
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:ArrayIterator[MModule]>*/
}
var_10 = var_lst;
{
var11 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_10); /* iterator on <var_10:Collection[MGroup]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[MGroup]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[MGroup]>*/
}
var_mgrp = var14;
{
var15 = ((val*(*)(val* self, val* p0))(var_mgrp->class->vft[COLOR_nit__model_utils__MGroup__in_nesting_redef_mclasses]))(var_mgrp, var_min_visibility); /* in_nesting_redef_mclasses on <var_mgrp:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var15); /* add_all on <var_res:HashSet[MClass]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[MGroup]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MGroup#in_nesting_intro_mclassdefs for (self: MGroup, MVisibility): Set[MClassDef] */
val* nit__model_utils___MGroup___in_nesting_intro_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MClassDef] */;
val* var_res /* var res: HashSet[MClassDef] */;
val* var2 /* : POSetElement[MGroup] */;
val* var3 /* : Collection[nullable Object] */;
val* var_lst /* var lst: Collection[MGroup] */;
val* var4 /* : Array[MModule] */;
val* var_ /* var : Array[MModule] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[MModule] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : Set[MClassDef] */;
val* var_10 /* var : Collection[MGroup] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[MGroup] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mgrp /* var mgrp: MGroup */;
val* var15 /* : Set[MClassDef] */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClassDef]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__in_nesting]))(self); /* in_nesting on <self:MGroup>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__direct_smallers]))(var2); /* direct_smallers on <var2:POSetElement[MGroup]>*/
}
var_lst = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MGroup__mmodules]))(self); /* mmodules on <self:MGroup>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:ArrayIterator[MModule]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:ArrayIterator[MModule]>*/
}
var_mmodule = var8;
{
var9 = ((val*(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__model_utils__MModule__intro_mclassdefs]))(var_mmodule, var_min_visibility); /* intro_mclassdefs on <var_mmodule:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var9); /* add_all on <var_res:HashSet[MClassDef]>*/
}
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:ArrayIterator[MModule]>*/
}
var_10 = var_lst;
{
var11 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_10); /* iterator on <var_10:Collection[MGroup]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[MGroup]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[MGroup]>*/
}
var_mgrp = var14;
{
var15 = ((val*(*)(val* self, val* p0))(var_mgrp->class->vft[COLOR_nit__model_utils__MGroup__in_nesting_intro_mclassdefs]))(var_mgrp, var_min_visibility); /* in_nesting_intro_mclassdefs on <var_mgrp:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var15); /* add_all on <var_res:HashSet[MClassDef]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[MGroup]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MGroup#in_nesting_redef_mclassdefs for (self: MGroup, MVisibility): Set[MClassDef] */
val* nit__model_utils___MGroup___in_nesting_redef_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MClassDef] */;
val* var_res /* var res: HashSet[MClassDef] */;
val* var2 /* : POSetElement[MGroup] */;
val* var3 /* : Collection[nullable Object] */;
val* var_lst /* var lst: Collection[MGroup] */;
val* var4 /* : Array[MModule] */;
val* var_ /* var : Array[MModule] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[MModule] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : Set[MClassDef] */;
val* var_10 /* var : Collection[MGroup] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[MGroup] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mgrp /* var mgrp: MGroup */;
val* var15 /* : Set[MClassDef] */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClassDef]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__in_nesting]))(self); /* in_nesting on <self:MGroup>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__direct_smallers]))(var2); /* direct_smallers on <var2:POSetElement[MGroup]>*/
}
var_lst = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MGroup__mmodules]))(self); /* mmodules on <self:MGroup>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MModule]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:ArrayIterator[MModule]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:ArrayIterator[MModule]>*/
}
var_mmodule = var8;
{
var9 = ((val*(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_nit__model_utils__MModule__redef_mclassdefs]))(var_mmodule, var_min_visibility); /* redef_mclassdefs on <var_mmodule:MModule>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var9); /* add_all on <var_res:HashSet[MClassDef]>*/
}
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:ArrayIterator[MModule]>*/
}
var_10 = var_lst;
{
var11 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_10); /* iterator on <var_10:Collection[MGroup]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[MGroup]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[MGroup]>*/
}
var_mgrp = var14;
{
var15 = ((val*(*)(val* self, val* p0))(var_mgrp->class->vft[COLOR_nit__model_utils__MGroup__in_nesting_redef_mclassdefs]))(var_mgrp, var_min_visibility); /* in_nesting_redef_mclassdefs on <var_mgrp:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var15); /* add_all on <var_res:HashSet[MClassDef]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[MGroup]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MGroup#collect_mmodules for (self: MGroup): Set[MModule] */
val* nit__model_utils___MGroup___collect_mmodules(val* self) {
val* var /* : Set[MModule] */;
val* var1 /* : HashSet[MModule] */;
val* var_res /* var res: HashSet[MModule] */;
val* var2 /* : Array[MModule] */;
val* var3 /* : POSetElement[MGroup] */;
val* var4 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MGroup] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[MGroup] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mgroup /* var mgroup: MGroup */;
val* var9 /* : Set[MModule] */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MModule);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MModule]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MGroup__mmodules]))(self); /* mmodules on <self:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var2); /* add_all on <var_res:HashSet[MModule]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mproject__MGroup__in_nesting]))(self); /* in_nesting on <self:MGroup>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_poset__POSetElement__direct_smallers]))(var3); /* direct_smallers on <var3:POSetElement[MGroup]>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MGroup]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[MGroup]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[MGroup]>*/
}
var_mgroup = var8;
{
var9 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__model_utils__MGroup__collect_mmodules]))(var_mgroup); /* collect_mmodules on <var_mgroup:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_res, var9); /* add_all on <var_res:HashSet[MModule]>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[MGroup]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MGroup#concern_rank for (self: MGroup): Int */
long nit__model_utils___MGroup___MConcern__concern_rank(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_max /* var max: Int */;
val* var5 /* : Set[MModule] */;
val* var_ /* var : Set[MModule] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MModule] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
long var10 /* : Int */;
long var_mmax /* var mmax: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
var1 = self->attrs[COLOR_nit__model_utils__MGroup__lazy_32d_concern_rank].s; /* lazy _concern_rank on <self:MGroup> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model_utils__MGroup___concern_rank].l; /* _concern_rank on <self:MGroup> */
} else {
{
var_max = 0l;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_utils__MGroup__collect_mmodules]))(self); /* collect_mmodules on <self:MGroup>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MModule]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MModule]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MModule]>*/
}
var_mmodule = var9;
{
var10 = ((long(*)(val* self))(var_mmodule->class->vft[COLOR_nit__model_utils__MConcern__concern_rank]))(var_mmodule); /* concern_rank on <var_mmodule:MModule>*/
}
var_mmax = var10;
{
{ /* Inline kernel#Int#> (var_mmax,var_max) on <var_mmax:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var13 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var14 = var_mmax > var_max;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var_max = var_mmax;
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MModule]>*/
}
{
{ /* Inline kernel#Int#+ (var_max,1l) on <var_max:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var21 = var_max + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var3 = var15;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model_utils__MGroup___concern_rank].l = var3; /* _concern_rank on <self:MGroup> */
var2 = var3;
self->attrs[COLOR_nit__model_utils__MGroup__lazy_32d_concern_rank].s = 1; /* lazy _concern_rank on <self:MGroup> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method model_utils#MGroup#concern_rank= for (self: MGroup, Int) */
void nit__model_utils___MGroup___concern_rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__model_utils__MGroup___concern_rank].l = p0; /* _concern_rank on <self:MGroup> */
self->attrs[COLOR_nit__model_utils__MGroup__lazy_32d_concern_rank].s = 1; /* lazy _concern_rank on <self:MGroup> */
RET_LABEL:;
}
/* method model_utils#MModule#intro_mclassdefs for (self: MModule, MVisibility): Set[MClassDef] */
val* nit__model_utils___MModule___intro_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MClassDef] */;
val* var_res /* var res: HashSet[MClassDef] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClass */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClassDef]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__mclassdefs]))(self); /* mclassdefs on <self:MModule>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((short int(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__is_intro]))(var_mclassdef); /* is_intro on <var_mclassdef:MClassDef>*/
}
var8 = !var7;
if (var8){
goto BREAK_label;
} else {
}
{
var9 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__model__MClass__visibility]))(var9); /* visibility on <var9:MClass>*/
}
{
var11 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Comparable___60d]))(var10, var_min_visibility); /* < on <var10:MVisibility>*/
}
if (var11){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_mclassdef); /* add on <var_res:HashSet[MClassDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label12;
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MModule#redef_mclassdefs for (self: MModule, MVisibility): Set[MClassDef] */
val* nit__model_utils___MModule___redef_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MClassDef] */;
val* var_res /* var res: HashSet[MClassDef] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var7 /* : Bool */;
val* var8 /* : MClass */;
val* var9 /* : MVisibility */;
short int var10 /* : Bool */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClassDef]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__mclassdefs]))(self); /* mclassdefs on <self:MModule>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((short int(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__is_intro]))(var_mclassdef); /* is_intro on <var_mclassdef:MClassDef>*/
}
if (var7){
goto BREAK_label;
} else {
}
{
var8 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_mclassdef); /* mclass on <var_mclassdef:MClassDef>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__model__MClass__visibility]))(var8); /* visibility on <var8:MClass>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Comparable___60d]))(var9, var_min_visibility); /* < on <var9:MVisibility>*/
}
if (var10){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_mclassdef); /* add on <var_res:HashSet[MClassDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label11;
}
}
BREAK_label11: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MModule#filter_intro_mclasses for (self: MModule, MVisibility): Set[MClass] */
val* nit__model_utils___MModule___filter_intro_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MClass] */;
val* var_res /* var res: HashSet[MClass] */;
val* var2 /* : Array[MClass] */;
val* var_ /* var : Array[MClass] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClass] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var7 /* : MVisibility */;
short int var8 /* : Bool */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__intro_mclasses]))(self); /* intro_mclasses on <self:MModule>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClass]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClass]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClass]>*/
}
var_mclass = var6;
{
var7 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_nit__model__MClass__visibility]))(var_mclass); /* visibility on <var_mclass:MClass>*/
}
{
var8 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Comparable___60d]))(var7, var_min_visibility); /* < on <var7:MVisibility>*/
}
if (var8){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_mclass); /* add on <var_res:HashSet[MClass]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label9;
}
}
BREAK_label9: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MModule#redef_mclasses for (self: MModule): Set[MClass] */
val* nit__model_utils___MModule___redef_mclasses(val* self) {
val* var /* : Set[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var_mclasses /* var mclasses: HashSet[MClass] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_c /* var c: MClassDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClass */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_mclasses = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__mclassdefs]))(self); /* mclassdefs on <self:MModule>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_c = var6;
{
var7 = ((short int(*)(val* self))(var_c->class->vft[COLOR_nit__model__MClassDef__is_intro]))(var_c); /* is_intro on <var_c:MClassDef>*/
}
var8 = !var7;
if (var8){
{
var9 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_c); /* mclass on <var_c:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_mclasses->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mclasses, var9); /* add on <var_mclasses:HashSet[MClass]>*/
}
} else {
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_mclasses;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MModule#filter_redef_mclasses for (self: MModule, MVisibility): Set[MClass] */
val* nit__model_utils___MModule___filter_redef_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MClass] */;
val* var_mclasses /* var mclasses: HashSet[MClass] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_c /* var c: MClassDef */;
val* var7 /* : MClass */;
val* var8 /* : MVisibility */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClass */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_mclasses = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MModule__mclassdefs]))(self); /* mclassdefs on <self:MModule>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_c = var6;
{
var7 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_c); /* mclass on <var_c:MClassDef>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__model__MClass__visibility]))(var7); /* visibility on <var7:MClass>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Comparable___60d]))(var8, var_min_visibility); /* < on <var8:MVisibility>*/
}
if (var9){
goto BREAK_label;
} else {
}
{
var10 = ((short int(*)(val* self))(var_c->class->vft[COLOR_nit__model__MClassDef__is_intro]))(var_c); /* is_intro on <var_c:MClassDef>*/
}
var11 = !var10;
if (var11){
{
var12 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_c); /* mclass on <var_c:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_mclasses->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mclasses, var12); /* add on <var_mclasses:HashSet[MClass]>*/
}
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label13;
}
}
BREAK_label13: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_mclasses;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MModule#imported_mclasses for (self: MModule): Set[MClass] */
val* nit__model_utils___MModule___imported_mclasses(val* self) {
val* var /* : Set[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var_mclasses /* var mclasses: HashSet[MClass] */;
val* var2 /* : POSetElement[MModule] */;
val* var3 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[MModule] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_m /* var m: MModule */;
short int var8 /* : Bool */;
val* var9 /* : Array[MClassDef] */;
val* var_10 /* var : Array[MClassDef] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[MClassDef] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_c /* var c: MClassDef */;
val* var15 /* : MClass */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_mclasses = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(self); /* in_importation on <self:MModule>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__greaters]))(var2); /* greaters on <var2:POSetElement[MModule]>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[MModule]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[MModule]>*/
}
var_m = var7;
{
var8 = ((short int(*)(val* self, val* p0))(var_m->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_m, self); /* == on <var_m:MModule>*/
}
if (var8){
goto BREAK_label;
} else {
}
{
var9 = ((val*(*)(val* self))(var_m->class->vft[COLOR_nit__model__MModule__mclassdefs]))(var_m); /* mclassdefs on <var_m:MModule>*/
}
var_10 = var9;
{
var11 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_10); /* iterator on <var_10:Array[MClassDef]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:ArrayIterator[MClassDef]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:ArrayIterator[MClassDef]>*/
}
var_c = var14;
{
var15 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_c); /* mclass on <var_c:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_mclasses->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_mclasses, var15); /* add on <var_mclasses:HashSet[MClass]>*/
}
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))(var_12->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:ArrayIterator[MClassDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[MModule]>*/
}
} else {
goto BREAK_label17;
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[MModule]>*/
}
var = var_mclasses;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MModule#concern_rank for (self: MModule): Int */
long nit__model_utils___MModule___MConcern__concern_rank(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_max /* var max: Int */;
val* var5 /* : POSetElement[MModule] */;
val* var6 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[MModule] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_p /* var p: MModule */;
long var11 /* : Int */;
long var_pmax /* var pmax: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
var1 = self->attrs[COLOR_nit__model_utils__MModule__lazy_32d_concern_rank].s; /* lazy _concern_rank on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model_utils__MModule___concern_rank].l; /* _concern_rank on <self:MModule> */
} else {
{
var_max = 0l;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__in_importation]))(self); /* in_importation on <self:MModule>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var5); /* direct_greaters on <var5:POSetElement[MModule]>*/
}
var_ = var6;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[MModule]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[MModule]>*/
}
var_p = var10;
{
var11 = ((long(*)(val* self))(var_p->class->vft[COLOR_nit__model_utils__MConcern__concern_rank]))(var_p); /* concern_rank on <var_p:MModule>*/
}
var_pmax = var11;
{
{ /* Inline kernel#Int#> (var_pmax,var_max) on <var_pmax:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var14 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 425);
fatal_exit(1);
}
var15 = var_pmax > var_max;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var_max = var_pmax;
} else {
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[MModule]>*/
}
{
{ /* Inline kernel#Int#+ (var_max,1l) on <var_max:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var22 = var_max + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var3 = var16;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model_utils__MModule___concern_rank].l = var3; /* _concern_rank on <self:MModule> */
var2 = var3;
self->attrs[COLOR_nit__model_utils__MModule__lazy_32d_concern_rank].s = 1; /* lazy _concern_rank on <self:MModule> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method model_utils#MModule#concern_rank= for (self: MModule, Int) */
void nit__model_utils___MModule___concern_rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__model_utils__MModule___concern_rank].l = p0; /* _concern_rank on <self:MModule> */
self->attrs[COLOR_nit__model_utils__MModule__lazy_32d_concern_rank].s = 1; /* lazy _concern_rank on <self:MModule> */
RET_LABEL:;
}
/* method model_utils#MModule#nested_mmodules for (self: MModule): Array[MModule] */
val* nit__model_utils___MModule___nested_mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var2 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : nullable MModule */;
short int var7 /* : Bool */;
val* var8 /* : Array[MModule] */;
val* var_9 /* var : Array[MModule] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MModule] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
short int var14 /* : Bool */;
val* var16 /* : POSetElement[MGroup] */;
val* var17 /* : Collection[nullable Object] */;
val* var_18 /* var : Collection[MGroup] */;
val* var19 /* : Iterator[nullable Object] */;
val* var_20 /* var : Iterator[MGroup] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_nested /* var nested: MGroup */;
val* var23 /* : nullable MModule */;
val* var_default /* var default: nullable MModule */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var1 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[MModule]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__mmodule__MModule__mgroup]))(self); /* mgroup on <self:MModule>*/
}
var_mgroup = var2;
if (var_mgroup == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, ((val*)NULL)); /* == on <var_mgroup:nullable MGroup>*/
var4 = var5;
}
var_ = var4;
if (var4){
var3 = var_;
} else {
{
var6 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mmodule__MGroup__default_mmodule]))(var_mgroup); /* default_mmodule on <var_mgroup:nullable MGroup(MGroup)>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard__kernel__Object___33d_61d]))(self, var6); /* != on <self:MModule>*/
}
var3 = var7;
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
{
var8 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mmodule__MGroup__mmodules]))(var_mgroup); /* mmodules on <var_mgroup:nullable MGroup(MGroup)>*/
}
var_9 = var8;
{
var10 = ((val*(*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_9); /* iterator on <var_9:Array[MModule]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:ArrayIterator[MModule]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:ArrayIterator[MModule]>*/
}
var_mmodule = var13;
{
var14 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, self); /* == on <var_mmodule:MModule>*/
}
if (var14){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_mmodule); /* add on <var_res:Array[MModule]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label15;
}
}
BREAK_label15: (void)0;
{
((void(*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:ArrayIterator[MModule]>*/
}
{
var16 = ((val*(*)(val* self))(var_mgroup->class->vft[COLOR_nit__mproject__MGroup__in_nesting]))(var_mgroup); /* in_nesting on <var_mgroup:nullable MGroup(MGroup)>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_poset__POSetElement__direct_smallers]))(var16); /* direct_smallers on <var16:POSetElement[MGroup]>*/
}
var_18 = var17;
{
var19 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_18); /* iterator on <var_18:Collection[MGroup]>*/
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:Iterator[MGroup]>*/
}
if (var21){
{
var22 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:Iterator[MGroup]>*/
}
var_nested = var22;
{
var23 = ((val*(*)(val* self))(var_nested->class->vft[COLOR_nit__mmodule__MGroup__default_mmodule]))(var_nested); /* default_mmodule on <var_nested:MGroup>*/
}
var_default = var23;
if (var_default == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))(var_default->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_default, ((val*)NULL)); /* == on <var_default:nullable MModule>*/
var24 = var25;
}
if (var24){
goto BREAK_label26;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_default); /* add on <var_res:Array[MModule]>*/
}
BREAK_label26: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:Iterator[MGroup]>*/
}
} else {
goto BREAK_label27;
}
}
BREAK_label27: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#parents for (self: MClass): Set[MClass] */
val* nit__model_utils___MClass___parents(val* self) {
val* var /* : Set[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var_ret /* var ret: HashSet[MClass] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : Array[MClassType] */;
val* var_8 /* var : Array[MClassType] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MClassType] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var13 /* : MClass */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_ret = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__supertypes]))(var_mclassdef); /* supertypes on <var_mclassdef:MClassDef>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[MClassType]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MClassType]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MClassType]>*/
}
var_mclasstype = var12;
{
var13 = ((val*(*)(val* self))(var_mclasstype->class->vft[COLOR_nit__model__MClassType__mclass]))(var_mclasstype); /* mclass on <var_mclasstype:MClassType>*/
}
{
((void(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_ret, var13); /* add on <var_ret:HashSet[MClass]>*/
}
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MClassType]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label14;
}
}
BREAK_label14: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#ancestors for (self: MClass): Set[MClass] */
val* nit__model_utils___MClass___ancestors(val* self) {
val* var /* : Set[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var_lst /* var lst: HashSet[MClass] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : nullable POSetElement[MClassDef] */;
val* var8 /* : Collection[nullable Object] */;
val* var_9 /* var : Collection[MClassDef] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[MClassDef] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_super_mclassdef /* var super_mclassdef: MClassDef */;
short int var14 /* : Bool */;
val* var15 /* : MClass */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_lst = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(var_mclassdef); /* in_hierarchy on <var_mclassdef:MClassDef>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_utils, 210);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_poset__POSetElement__greaters]))(var7); /* greaters on <var7:nullable POSetElement[MClassDef]>*/
}
var_9 = var8;
{
var10 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_9); /* iterator on <var_9:Collection[MClassDef]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[MClassDef]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[MClassDef]>*/
}
var_super_mclassdef = var13;
{
var14 = ((short int(*)(val* self, val* p0))(var_super_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_super_mclassdef, var_mclassdef); /* == on <var_super_mclassdef:MClassDef>*/
}
if (var14){
goto BREAK_label;
} else {
}
{
var15 = ((val*(*)(val* self))(var_super_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_super_mclassdef); /* mclass on <var_super_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_lst->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_lst, var15); /* add on <var_lst:HashSet[MClass]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[MClassDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label17;
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_lst;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#children for (self: MClass): Set[MClass] */
val* nit__model_utils___MClass___children(val* self) {
val* var /* : Set[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var_lst /* var lst: HashSet[MClass] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : nullable POSetElement[MClassDef] */;
val* var8 /* : Collection[nullable Object] */;
val* var_9 /* var : Collection[MClassDef] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[MClassDef] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_sub_mclassdef /* var sub_mclassdef: MClassDef */;
short int var14 /* : Bool */;
val* var15 /* : MClass */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_lst = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(var_mclassdef); /* in_hierarchy on <var_mclassdef:MClassDef>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_utils, 222);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_poset__POSetElement__direct_smallers]))(var7); /* direct_smallers on <var7:nullable POSetElement[MClassDef]>*/
}
var_9 = var8;
{
var10 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_9); /* iterator on <var_9:Collection[MClassDef]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[MClassDef]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[MClassDef]>*/
}
var_sub_mclassdef = var13;
{
var14 = ((short int(*)(val* self, val* p0))(var_sub_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sub_mclassdef, var_mclassdef); /* == on <var_sub_mclassdef:MClassDef>*/
}
if (var14){
goto BREAK_label;
} else {
}
{
var15 = ((val*(*)(val* self))(var_sub_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_sub_mclassdef); /* mclass on <var_sub_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_lst->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_lst, var15); /* add on <var_lst:HashSet[MClass]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[MClassDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label17;
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_lst;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#descendants for (self: MClass): Set[MClass] */
val* nit__model_utils___MClass___descendants(val* self) {
val* var /* : Set[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var_lst /* var lst: HashSet[MClass] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : nullable POSetElement[MClassDef] */;
val* var8 /* : Collection[nullable Object] */;
val* var_9 /* var : Collection[MClassDef] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[MClassDef] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_sub_mclassdef /* var sub_mclassdef: MClassDef */;
short int var14 /* : Bool */;
val* var15 /* : MClass */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MClass]>*/
}
var_lst = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__in_hierarchy]))(var_mclassdef); /* in_hierarchy on <var_mclassdef:MClassDef>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_utils, 234);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_poset__POSetElement__smallers]))(var7); /* smallers on <var7:nullable POSetElement[MClassDef]>*/
}
var_9 = var8;
{
var10 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_9); /* iterator on <var_9:Collection[MClassDef]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[MClassDef]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[MClassDef]>*/
}
var_sub_mclassdef = var13;
{
var14 = ((short int(*)(val* self, val* p0))(var_sub_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sub_mclassdef, var_mclassdef); /* == on <var_sub_mclassdef:MClassDef>*/
}
if (var14){
goto BREAK_label;
} else {
}
{
var15 = ((val*(*)(val* self))(var_sub_mclassdef->class->vft[COLOR_nit__model__MClassDef__mclass]))(var_sub_mclassdef); /* mclass on <var_sub_mclassdef:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var_lst->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_lst, var15); /* add on <var_lst:HashSet[MClass]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[MClassDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label17;
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_lst;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#constructors for (self: MClass): Set[MMethod] */
val* nit__model_utils___MClass___constructors(val* self) {
val* var /* : Set[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
val* var_res /* var res: HashSet[MMethod] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : Array[MPropDef] */;
val* var_8 /* var : Array[MPropDef] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MPropDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var14 /* : MProperty */;
short int var15 /* : Bool */;
val* var16 /* : MProperty */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MMethod);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MMethod]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var_mclassdef); /* mpropdefs on <var_mclassdef:MClassDef>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[MPropDef]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MPropDef]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var12;
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var13 = 0;
} else {
var13 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (var13){
{
var14 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef(MMethodDef)>*/
}
{
var15 = ((short int(*)(val* self))(var14->class->vft[COLOR_nit__model__MMethod__is_init]))(var14); /* is_init on <var14:MProperty(MMethod)>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var16); /* add on <var_res:HashSet[MMethod]>*/
}
} else {
}
} else {
}
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MPropDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label17;
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#intro_methods for (self: MClass): Set[MMethod] */
val* nit__model_utils___MClass___intro_methods(val* self) {
val* var /* : Set[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
val* var_res /* var res: HashSet[MMethod] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : Array[MPropDef] */;
val* var_8 /* var : Array[MPropDef] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MPropDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : MProperty */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : MProperty */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MMethod);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MMethod]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var_mclassdef); /* mpropdefs on <var_mclassdef:MClassDef>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[MPropDef]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MPropDef]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var12;
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var13 = 0;
} else {
var13 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (var13){
{
var15 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MPropDef(MMethodDef)>*/
}
var_16 = var15;
if (var15){
{
var17 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef(MMethodDef)>*/
}
{
var18 = ((short int(*)(val* self))(var17->class->vft[COLOR_nit__model__MMethod__is_init]))(var17); /* is_init on <var17:MProperty(MMethod)>*/
}
var19 = !var18;
var14 = var19;
} else {
var14 = var_16;
}
if (var14){
{
var20 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var20); /* add on <var_res:HashSet[MMethod]>*/
}
} else {
}
} else {
}
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MPropDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label21;
}
}
BREAK_label21: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#intro_mproperties for (self: MClass, MVisibility): Set[MProperty] */
val* nit__model_utils___MClass___intro_mproperties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MProperty] */;
val* var_set /* var set: HashSet[MProperty] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : Array[MProperty] */;
val* var_8 /* var : Array[MProperty] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MProperty] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
val* var13 /* : MVisibility */;
short int var14 /* : Bool */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MProperty);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MProperty]>*/
}
var_set = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__intro_mproperties]))(var_mclassdef); /* intro_mproperties on <var_mclassdef:MClassDef>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[MProperty]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MProperty]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MProperty]>*/
}
var_mprop = var12;
{
var13 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MProperty__visibility]))(var_mprop); /* visibility on <var_mprop:MProperty>*/
}
{
var14 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Comparable___60d]))(var13, var_min_visibility); /* < on <var13:MVisibility>*/
}
if (var14){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_set, var_mprop); /* add on <var_set:HashSet[MProperty]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label15;
}
}
BREAK_label15: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MProperty]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#intro_mpropdefs for (self: MClass, MVisibility): Set[MPropDef] */
val* nit__model_utils___MClass___intro_mpropdefs(val* self, val* p0) {
val* var /* : Set[MPropDef] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MPropDef] */;
val* var_set /* var set: HashSet[MPropDef] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : Array[MPropDef] */;
val* var_8 /* var : Array[MPropDef] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MPropDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MProperty */;
val* var16 /* : MVisibility */;
short int var17 /* : Bool */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MPropDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MPropDef]>*/
}
var_set = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var_mclassdef); /* mpropdefs on <var_mclassdef:MClassDef>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[MPropDef]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MPropDef]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var12;
{
var13 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MPropDef>*/
}
var14 = !var13;
if (var14){
goto BREAK_label;
} else {
}
{
var15 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_nit__model__MProperty__visibility]))(var15); /* visibility on <var15:MProperty>*/
}
{
var17 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Comparable___60d]))(var16, var_min_visibility); /* < on <var16:MVisibility>*/
}
if (var17){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_set, var_mpropdef); /* add on <var_set:HashSet[MPropDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label18;
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MPropDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label19;
}
}
BREAK_label19: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#redef_mproperties for (self: MClass, MVisibility): Set[MProperty] */
val* nit__model_utils___MClass___redef_mproperties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MProperty] */;
val* var_set /* var set: HashSet[MProperty] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : Array[MPropDef] */;
val* var_8 /* var : Array[MPropDef] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MPropDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var13 /* : MProperty */;
val* var14 /* : MVisibility */;
short int var15 /* : Bool */;
val* var16 /* : MProperty */;
val* var17 /* : MClassDef */;
val* var18 /* : MClass */;
short int var19 /* : Bool */;
val* var20 /* : MProperty */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MProperty);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MProperty]>*/
}
var_set = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var_mclassdef); /* mpropdefs on <var_mclassdef:MClassDef>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[MPropDef]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MPropDef]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var12;
{
var13 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_nit__model__MProperty__visibility]))(var13); /* visibility on <var13:MProperty>*/
}
{
var15 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__kernel__Comparable___60d]))(var14, var_min_visibility); /* < on <var14:MVisibility>*/
}
if (var15){
goto BREAK_label;
} else {
}
{
var16 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__model__MProperty__intro_mclassdef]))(var16); /* intro_mclassdef on <var16:MProperty>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nit__model__MClassDef__mclass]))(var17); /* mclass on <var17:MClassDef>*/
}
{
var19 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var18, self); /* != on <var18:MClass>*/
}
if (var19){
{
var20 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_set, var20); /* add on <var_set:HashSet[MProperty]>*/
}
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label21;
}
}
BREAK_label21: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MPropDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label22;
}
}
BREAK_label22: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#redef_mpropdefs for (self: MClass, MVisibility): Set[MPropDef] */
val* nit__model_utils___MClass___redef_mpropdefs(val* self, val* p0) {
val* var /* : Set[MPropDef] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MPropDef] */;
val* var_set /* var set: HashSet[MPropDef] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : Array[MPropDef] */;
val* var_8 /* var : Array[MPropDef] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MPropDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var13 /* : Bool */;
val* var14 /* : MProperty */;
val* var15 /* : MVisibility */;
short int var16 /* : Bool */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MPropDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MPropDef]>*/
}
var_set = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var_mclassdef); /* mpropdefs on <var_mclassdef:MClassDef>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[MPropDef]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MPropDef]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var12;
{
var13 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MPropDef>*/
}
if (var13){
goto BREAK_label;
} else {
}
{
var14 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_nit__model__MProperty__visibility]))(var14); /* visibility on <var14:MProperty>*/
}
{
var16 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Comparable___60d]))(var15, var_min_visibility); /* < on <var15:MVisibility>*/
}
if (var16){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_set, var_mpropdef); /* add on <var_set:HashSet[MPropDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label17;
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MPropDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label18;
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#inherited_mproperties for (self: MClass, MModule, MVisibility): Set[MProperty] */
val* nit__model_utils___MClass___inherited_mproperties(val* self, val* p0, val* p1) {
val* var /* : Set[MProperty] */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MProperty] */;
val* var_set /* var set: HashSet[MProperty] */;
val* var2 /* : POSetElement[MClass] */;
val* var3 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MClass] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[MClass] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
val* var8 /* : Set[MProperty] */;
val* var9 /* : Set[MProperty] */;
var_mainmodule = p0;
var_min_visibility = p1;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MProperty);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MProperty]>*/
}
var_set = var1;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MClass__in_hierarchy]))(self, var_mainmodule); /* in_hierarchy on <self:MClass>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var2); /* direct_greaters on <var2:POSetElement[MClass]>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MClass]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[MClass]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[MClass]>*/
}
var_parent = var7;
{
var8 = ((val*(*)(val* self, val* p0))(var_parent->class->vft[COLOR_nit__model_utils__MClass__intro_mproperties]))(var_parent, var_min_visibility); /* intro_mproperties on <var_parent:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_set, var8); /* add_all on <var_set:HashSet[MProperty]>*/
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(var_parent->class->vft[COLOR_nit__model_utils__MClass__inherited_mproperties]))(var_parent, var_mainmodule, var_min_visibility); /* inherited_mproperties on <var_parent:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_set, var9); /* add_all on <var_set:HashSet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[MClass]>*/
}
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#local_mproperties for (self: MClass, MVisibility): Set[MProperty] */
val* nit__model_utils___MClass___local_mproperties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MProperty] */;
val* var_set /* var set: HashSet[MProperty] */;
val* var2 /* : Set[MProperty] */;
val* var3 /* : Set[MProperty] */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MProperty);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MProperty]>*/
}
var_set = var1;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model_utils__MClass__intro_mproperties]))(self, var_min_visibility); /* intro_mproperties on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_set, var2); /* add_all on <var_set:HashSet[MProperty]>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model_utils__MClass__redef_mproperties]))(self, var_min_visibility); /* redef_mproperties on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_set, var3); /* add_all on <var_set:HashSet[MProperty]>*/
}
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#all_mproperties for (self: MClass, MModule, MVisibility): Set[MProperty] */
val* nit__model_utils___MClass___all_mproperties(val* self, val* p0, val* p1) {
val* var /* : Set[MProperty] */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MProperty] */;
val* var_set /* var set: HashSet[MProperty] */;
val* var2 /* : Set[MProperty] */;
val* var3 /* : Set[MProperty] */;
var_mainmodule = p0;
var_min_visibility = p1;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MProperty);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MProperty]>*/
}
var_set = var1;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model_utils__MClass__local_mproperties]))(self, var_min_visibility); /* local_mproperties on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_set, var2); /* add_all on <var_set:HashSet[MProperty]>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model_utils__MClass__inherited_mproperties]))(self, var_mainmodule, var_min_visibility); /* inherited_mproperties on <self:MClass>*/
}
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(var_set, var3); /* add_all on <var_set:HashSet[MProperty]>*/
}
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#all_mattributes for (self: MClass, MModule, MVisibility): Set[MAttribute] */
val* nit__model_utils___MClass___all_mattributes(val* self, val* p0, val* p1) {
val* var /* : Set[MAttribute] */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MAttribute] */;
val* var_set /* var set: HashSet[MAttribute] */;
val* var2 /* : Set[MProperty] */;
val* var_ /* var : Set[MProperty] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[MProperty] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var7 /* : Bool */;
int cltype;
int idtype;
var_mainmodule = p0;
var_min_visibility = p1;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MAttribute);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MAttribute]>*/
}
var_set = var1;
{
var2 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model_utils__MClass__all_mproperties]))(self, var_mainmodule, var_min_visibility); /* all_mproperties on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MProperty]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[MProperty]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[MProperty]>*/
}
var_mprop = var6;
/* <var_mprop:MProperty> isa MAttribute */
cltype = type_nit__MAttribute.color;
idtype = type_nit__MAttribute.id;
if(cltype >= var_mprop->type->table_size) {
var7 = 0;
} else {
var7 = var_mprop->type->type_table[cltype] == idtype;
}
if (var7){
{
((void(*)(val* self, val* p0))(var_set->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_set, var_mprop); /* add on <var_set:HashSet[MAttribute]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[MProperty]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[MProperty]>*/
}
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#redef_methods for (self: MClass): Set[MMethod] */
val* nit__model_utils___MClass___redef_methods(val* self) {
val* var /* : Set[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
val* var_res /* var res: HashSet[MMethod] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : Array[MPropDef] */;
val* var_8 /* var : Array[MPropDef] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MPropDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MProperty */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : MProperty */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MMethod);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MMethod]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var_mclassdef); /* mpropdefs on <var_mclassdef:MClassDef>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[MPropDef]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MPropDef]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var12;
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var13 = 0;
} else {
var13 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (var13){
{
var15 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MPropDef(MMethodDef)>*/
}
var16 = !var15;
var_17 = var16;
if (var16){
{
var18 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef(MMethodDef)>*/
}
{
var19 = ((short int(*)(val* self))(var18->class->vft[COLOR_nit__model__MMethod__is_init]))(var18); /* is_init on <var18:MProperty(MMethod)>*/
}
var20 = !var19;
var14 = var20;
} else {
var14 = var_17;
}
if (var14){
{
var21 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef(MMethodDef)>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var21); /* add on <var_res:HashSet[MMethod]>*/
}
} else {
}
} else {
}
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MPropDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label22;
}
}
BREAK_label22: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#inherited_methods for (self: MClass): Set[MMethod] */
val* nit__model_utils___MClass___inherited_methods(val* self) {
val* var /* : Set[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
val* var_res /* var res: HashSet[MMethod] */;
val* var2 /* : Set[MClass] */;
val* var_ /* var : Set[MClass] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[MClass] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_s /* var s: MClass */;
val* var7 /* : Set[MMethod] */;
val* var_8 /* var : Set[MMethod] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : Iterator[MMethod] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_m /* var m: MMethod */;
short int var13 /* : Bool */;
val* var14 /* : Set[MMethod] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : Set[MMethod] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MMethod);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MMethod]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_utils__MClass__ancestors]))(self); /* ancestors on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MClass]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[MClass]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[MClass]>*/
}
var_s = var6;
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nit__model_utils__MClass__intro_methods]))(var_s); /* intro_methods on <var_s:MClass>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Set[MMethod]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:Iterator[MMethod]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:Iterator[MMethod]>*/
}
var_m = var12;
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_utils__MClass__intro_methods]))(self); /* intro_methods on <self:MClass>*/
}
{
var15 = ((short int(*)(val* self, val* p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var14, var_m); /* has on <var14:Set[MMethod]>*/
}
var16 = !var15;
var_17 = var16;
if (var16){
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_utils__MClass__redef_methods]))(self); /* redef_methods on <self:MClass>*/
}
{
var19 = ((short int(*)(val* self, val* p0))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var18, var_m); /* has on <var18:Set[MMethod]>*/
}
var20 = !var19;
var13 = var20;
} else {
var13 = var_17;
}
if (var13){
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_m); /* add on <var_res:HashSet[MMethod]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:Iterator[MMethod]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:Iterator[MMethod]>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[MClass]>*/
}
} else {
goto BREAK_label21;
}
}
BREAK_label21: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#virtual_types for (self: MClass): Set[MVirtualTypeProp] */
val* nit__model_utils___MClass___virtual_types(val* self) {
val* var /* : Set[MVirtualTypeProp] */;
val* var1 /* : HashSet[MVirtualTypeProp] */;
val* var_res /* var res: HashSet[MVirtualTypeProp] */;
val* var2 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MClassDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : Array[MPropDef] */;
val* var_8 /* var : Array[MPropDef] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MPropDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var14 /* : MProperty */;
val* var16 /* : Set[MClass] */;
val* var_17 /* var : Set[MClass] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[MClass] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_ancestor /* var ancestor: MClass */;
val* var22 /* : Array[MClassDef] */;
val* var_23 /* var : Array[MClassDef] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : ArrayIterator[MClassDef] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_mclassdef28 /* var mclassdef: MClassDef */;
val* var29 /* : Array[MPropDef] */;
val* var_30 /* var : Array[MPropDef] */;
val* var31 /* : Iterator[nullable Object] */;
val* var_32 /* var : ArrayIterator[MPropDef] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_mpropdef35 /* var mpropdef: MPropDef */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : MProperty */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MVirtualTypeProp);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MVirtualTypeProp]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mclassdefs]))(self); /* mclassdefs on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MClassDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MClassDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MClassDef]>*/
}
var_mclassdef = var6;
{
var7 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var_mclassdef); /* mpropdefs on <var_mclassdef:MClassDef>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[MPropDef]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:ArrayIterator[MPropDef]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var12;
/* <var_mpropdef:MPropDef> isa MVirtualTypeDef */
cltype = type_nit__MVirtualTypeDef.color;
idtype = type_nit__MVirtualTypeDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var13 = 0;
} else {
var13 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (var13){
{
var14 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef(MVirtualTypeDef)>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var14); /* add on <var_res:HashSet[MVirtualTypeProp]>*/
}
} else {
}
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:ArrayIterator[MPropDef]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label15;
}
}
BREAK_label15: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MClassDef]>*/
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_utils__MClass__ancestors]))(self); /* ancestors on <self:MClass>*/
}
var_17 = var16;
{
var18 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_17); /* iterator on <var_17:Set[MClass]>*/
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:Iterator[MClass]>*/
}
if (var20){
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:Iterator[MClass]>*/
}
var_ancestor = var21;
{
var22 = ((val*(*)(val* self))(var_ancestor->class->vft[COLOR_nit__model__MClass__mclassdefs]))(var_ancestor); /* mclassdefs on <var_ancestor:MClass>*/
}
var_23 = var22;
{
var24 = ((val*(*)(val* self))(var_23->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_23); /* iterator on <var_23:Array[MClassDef]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:ArrayIterator[MClassDef]>*/
}
if (var26){
{
var27 = ((val*(*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:ArrayIterator[MClassDef]>*/
}
var_mclassdef28 = var27;
{
var29 = ((val*(*)(val* self))(var_mclassdef28->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(var_mclassdef28); /* mpropdefs on <var_mclassdef28:MClassDef>*/
}
var_30 = var29;
{
var31 = ((val*(*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_30); /* iterator on <var_30:Array[MPropDef]>*/
}
var_32 = var31;
for(;;) {
{
var33 = ((short int(*)(val* self))(var_32->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_32); /* is_ok on <var_32:ArrayIterator[MPropDef]>*/
}
if (var33){
{
var34 = ((val*(*)(val* self))(var_32->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_32); /* item on <var_32:ArrayIterator[MPropDef]>*/
}
var_mpropdef35 = var34;
/* <var_mpropdef35:MPropDef> isa MVirtualTypeDef */
cltype37 = type_nit__MVirtualTypeDef.color;
idtype38 = type_nit__MVirtualTypeDef.id;
if(cltype37 >= var_mpropdef35->type->table_size) {
var36 = 0;
} else {
var36 = var_mpropdef35->type->type_table[cltype37] == idtype38;
}
if (var36){
{
var39 = ((val*(*)(val* self))(var_mpropdef35->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef35); /* mproperty on <var_mpropdef35:MPropDef(MVirtualTypeDef)>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var39); /* add on <var_res:HashSet[MVirtualTypeProp]>*/
}
} else {
}
{
((void(*)(val* self))(var_32->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_32); /* next on <var_32:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label40;
}
}
BREAK_label40: (void)0;
{
((void(*)(val* self))(var_32->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_32); /* finish on <var_32:ArrayIterator[MPropDef]>*/
}
{
((void(*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label41;
}
}
BREAK_label41: (void)0;
{
((void(*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:ArrayIterator[MClassDef]>*/
}
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:Iterator[MClass]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:Iterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#parameter_types for (self: MClass): Map[String, MType] */
val* nit__model_utils___MClass___parameter_types(val* self) {
val* var /* : Map[String, MType] */;
val* var1 /* : HashMap[String, MType] */;
val* var_res /* var res: HashMap[String, MType] */;
val* var2 /* : Array[MParameterType] */;
val* var_ /* var : Array[MParameterType] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MParameterType] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_p /* var p: MParameterType */;
val* var7 /* : String */;
var1 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__nit__MType);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashMap[String, MType]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__mparameters]))(self); /* mparameters on <self:MClass>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MParameterType]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MParameterType]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MParameterType]>*/
}
var_p = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__model_base__MEntity__name]))(var_p); /* name on <var_p:MParameterType>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var_res, var7, var_p); /* []= on <var_res:HashMap[String, MType]>*/
}
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MParameterType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MParameterType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#is_class for (self: MClass): Bool */
short int nit__model_utils___MClass___is_class(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : MClassKind */;
val* var3 /* : Sys */;
val* var4 /* : MClassKind */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : MClassKind */;
val* var7 /* : Sys */;
val* var8 /* : MClassKind */;
short int var9 /* : Bool */;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__kind]))(self); /* kind on <self:MClass>*/
}
var3 = glob_sys;
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_nit__model__Sys__concrete_kind]))(var3); /* concrete_kind on <var3:Sys>*/
}
{
var5 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var4); /* == on <var2:MClassKind>*/
}
var_ = var5;
if (var5){
var1 = var_;
} else {
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__kind]))(self); /* kind on <self:MClass>*/
}
var7 = glob_sys;
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__model__Sys__abstract_kind]))(var7); /* abstract_kind on <var7:Sys>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var8); /* == on <var6:MClassKind>*/
}
var1 = var9;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#is_interface for (self: MClass): Bool */
short int nit__model_utils___MClass___is_interface(val* self) {
short int var /* : Bool */;
val* var1 /* : MClassKind */;
val* var2 /* : Sys */;
val* var3 /* : MClassKind */;
short int var4 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__kind]))(self); /* kind on <self:MClass>*/
}
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__Sys__interface_kind]))(var2); /* interface_kind on <var2:Sys>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var3); /* == on <var1:MClassKind>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#is_enum for (self: MClass): Bool */
short int nit__model_utils___MClass___is_enum(val* self) {
short int var /* : Bool */;
val* var1 /* : MClassKind */;
val* var2 /* : Sys */;
val* var3 /* : MClassKind */;
short int var4 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__kind]))(self); /* kind on <self:MClass>*/
}
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__Sys__enum_kind]))(var2); /* enum_kind on <var2:Sys>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var3); /* == on <var1:MClassKind>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClass#is_abstract for (self: MClass): Bool */
short int nit__model_utils___MClass___is_abstract(val* self) {
short int var /* : Bool */;
val* var1 /* : MClassKind */;
val* var2 /* : Sys */;
val* var3 /* : MClassKind */;
short int var4 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClass__kind]))(self); /* kind on <self:MClass>*/
}
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nit__model__Sys__abstract_kind]))(var2); /* abstract_kind on <var2:Sys>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var3); /* == on <var1:MClassKind>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MAttribute#is_nullable for (self: MAttribute): Bool */
short int nit__model_utils___MAttribute___is_nullable(val* self) {
short int var /* : Bool */;
val* var1 /* : MPropDef */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MProperty__intro]))(self); /* intro on <self:MAttribute>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MAttributeDef__static_mtype]))(var1); /* static_mtype on <var1:MPropDef(MAttributeDef)>*/
}
/* <var2:nullable MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(var2 == NULL) {
var3 = 0;
} else {
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClassDef#modifiers for (self: MClassDef): Array[String] */
val* nit__model_utils___MClassDef___modifiers(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : MClass */;
val* var8 /* : MVisibility */;
val* var9 /* : String */;
val* var10 /* : MClass */;
val* var11 /* : MClassKind */;
val* var12 /* : String */;
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_res = var1;
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__is_intro]))(self); /* is_intro on <self:MClassDef>*/
}
var3 = !var2;
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "redef";
var6 = standard___standard__NativeString___to_s_with_length(var5, 5l);
var4 = var6;
varonce = var4;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var4); /* add on <var_res:Array[String]>*/
}
} else {
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__model__MClass__visibility]))(var7); /* visibility on <var7:MClass>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__Object__to_s]))(var8); /* to_s on <var8:MVisibility>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var9); /* add on <var_res:Array[String]>*/
}
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mclass]))(self); /* mclass on <self:MClassDef>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nit__model__MClass__kind]))(var10); /* kind on <var10:MClass>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11); /* to_s on <var11:MClassKind>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var12); /* add on <var_res:Array[String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClassDef#collect_mpropdefs for (self: MClassDef, MVisibility): Set[MPropDef] */
val* nit__model_utils___MClassDef___collect_mpropdefs(val* self, val* p0) {
val* var /* : Set[MPropDef] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MPropDef] */;
val* var_res /* var res: HashSet[MPropDef] */;
val* var2 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MPropDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var7 /* : MProperty */;
val* var8 /* : MVisibility */;
short int var9 /* : Bool */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MPropDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MPropDef]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(self); /* mpropdefs on <self:MClassDef>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MPropDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MPropDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var6;
{
var7 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__model__MProperty__visibility]))(var7); /* visibility on <var7:MProperty>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Comparable___60d]))(var8, var_min_visibility); /* < on <var8:MVisibility>*/
}
if (var9){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_mpropdef); /* add on <var_res:HashSet[MPropDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label10;
}
}
BREAK_label10: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MPropDef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClassDef#collect_intro_mpropdefs for (self: MClassDef, MVisibility): Set[MPropDef] */
val* nit__model_utils___MClassDef___collect_intro_mpropdefs(val* self, val* p0) {
val* var /* : Set[MPropDef] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MPropDef] */;
val* var_res /* var res: HashSet[MPropDef] */;
val* var2 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MPropDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MProperty */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MPropDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MPropDef]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(self); /* mpropdefs on <self:MClassDef>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MPropDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MPropDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var6;
{
var7 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MPropDef>*/
}
var8 = !var7;
if (var8){
goto BREAK_label;
} else {
}
{
var9 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__model__MProperty__visibility]))(var9); /* visibility on <var9:MProperty>*/
}
{
var11 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Comparable___60d]))(var10, var_min_visibility); /* < on <var10:MVisibility>*/
}
if (var11){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_mpropdef); /* add on <var_res:HashSet[MPropDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label12;
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MPropDef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MClassDef#collect_redef_mpropdefs for (self: MClassDef, MVisibility): Set[MPropDef] */
val* nit__model_utils___MClassDef___collect_redef_mpropdefs(val* self, val* p0) {
val* var /* : Set[MPropDef] */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : HashSet[MPropDef] */;
val* var_res /* var res: HashSet[MPropDef] */;
val* var2 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MPropDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var7 /* : Bool */;
val* var8 /* : MProperty */;
val* var9 /* : MVisibility */;
short int var10 /* : Bool */;
var_min_visibility = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MPropDef);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSet[MPropDef]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MClassDef__mpropdefs]))(self); /* mpropdefs on <self:MClassDef>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[MPropDef]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:ArrayIterator[MPropDef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:ArrayIterator[MPropDef]>*/
}
var_mpropdef = var6;
{
var7 = ((short int(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__is_intro]))(var_mpropdef); /* is_intro on <var_mpropdef:MPropDef>*/
}
if (var7){
goto BREAK_label;
} else {
}
{
var8 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mpropdef); /* mproperty on <var_mpropdef:MPropDef>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__model__MProperty__visibility]))(var8); /* visibility on <var8:MProperty>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Comparable___60d]))(var9, var_min_visibility); /* < on <var9:MVisibility>*/
}
if (var10){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var_mpropdef); /* add on <var_res:HashSet[MPropDef]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label11;
}
}
BREAK_label11: (void)0;
{
((void(*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:ArrayIterator[MPropDef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MPropDef#modifiers for (self: MPropDef): Array[String] */
val* nit__model_utils___MPropDef___modifiers(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : MProperty */;
val* var8 /* : MVisibility */;
val* var9 /* : String */;
val* var_mprop /* var mprop: MPropDef */;
short int var10 /* : Bool */;
int cltype;
int idtype;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
short int var23 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : MProperty */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_res = var1;
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__is_intro]))(self); /* is_intro on <self:MPropDef>*/
}
var3 = !var2;
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "redef";
var6 = standard___standard__NativeString___to_s_with_length(var5, 5l);
var4 = var6;
varonce = var4;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var4); /* add on <var_res:Array[String]>*/
}
} else {
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model__MPropDef__mproperty]))(self); /* mproperty on <self:MPropDef>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nit__model__MProperty__visibility]))(var7); /* visibility on <var7:MProperty>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__Object__to_s]))(var8); /* to_s on <var8:MVisibility>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var9); /* add on <var_res:Array[String]>*/
}
}
var_mprop = self;
/* <var_mprop:MPropDef> isa MVirtualTypeDef */
cltype = type_nit__MVirtualTypeDef.color;
idtype = type_nit__MVirtualTypeDef.id;
if(cltype >= var_mprop->type->table_size) {
var10 = 0;
} else {
var10 = var_mprop->type->type_table[cltype] == idtype;
}
if (var10){
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "type";
var14 = standard___standard__NativeString___to_s_with_length(var13, 4l);
var12 = var14;
varonce11 = var12;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var12); /* add on <var_res:Array[String]>*/
}
} else {
/* <var_mprop:MPropDef> isa MMethodDef */
cltype16 = type_nit__MMethodDef.color;
idtype17 = type_nit__MMethodDef.id;
if(cltype16 >= var_mprop->type->table_size) {
var15 = 0;
} else {
var15 = var_mprop->type->type_table[cltype16] == idtype17;
}
if (var15){
{
var18 = ((short int(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MMethodDef__is_abstract]))(var_mprop); /* is_abstract on <var_mprop:MPropDef(MMethodDef)>*/
}
if (var18){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "abstract";
var22 = standard___standard__NativeString___to_s_with_length(var21, 8l);
var20 = var22;
varonce19 = var20;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var20); /* add on <var_res:Array[String]>*/
}
} else {
{
var23 = ((short int(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MMethodDef__is_intern]))(var_mprop); /* is_intern on <var_mprop:MPropDef(MMethodDef)>*/
}
if (var23){
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "intern";
var27 = standard___standard__NativeString___to_s_with_length(var26, 6l);
var25 = var27;
varonce24 = var25;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var25); /* add on <var_res:Array[String]>*/
}
} else {
}
}
{
var28 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_nit__model__MPropDef__mproperty]))(var_mprop); /* mproperty on <var_mprop:MPropDef(MMethodDef)>*/
}
{
var29 = ((short int(*)(val* self))(var28->class->vft[COLOR_nit__model__MMethod__is_init]))(var28); /* is_init on <var28:MProperty(MMethod)>*/
}
if (var29){
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "init";
var33 = standard___standard__NativeString___to_s_with_length(var32, 4l);
var31 = var33;
varonce30 = var31;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var31); /* add on <var_res:Array[String]>*/
}
} else {
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "fun";
var37 = standard___standard__NativeString___to_s_with_length(var36, 3l);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_res, var35); /* add on <var_res:Array[String]>*/
}
}
} else {
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MEntityNameSorter#compare for (self: MEntityNameSorter, MEntity, MEntity): Int */
long nit___nit__MEntityNameSorter___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_a /* var a: MEntity */;
val* var_b /* var b: MEntity */;
val* var7 /* : String */;
val* var8 /* : String */;
long var9 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:MEntity> isa COMPARED */
/* <p0:MEntity> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_utils, 509);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:MEntity> isa COMPARED */
/* <p1:MEntity> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_utils, 509);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nit__model_base__MEntity__name]))(var_a); /* name on <var_a:MEntity>*/
}
{
var8 = ((val*(*)(val* self))(var_b->class->vft[COLOR_nit__model_base__MEntity__name]))(var_b); /* name on <var_b:MEntity>*/
}
{
var9 = ((long(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Comparable___60d_61d_62d]))(var7, var8); /* <=> on <var7:String>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_utils#MConcernRankSorter#compare for (self: MConcernRankSorter, MConcern, MConcern): Int */
long nit___nit__MConcernRankSorter___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_a /* var a: MConcern */;
val* var_b /* var b: MConcern */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : String */;
val* var13 /* : String */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var33 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:MConcern> isa COMPARED */
/* <p0:MConcern> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_utils, 527);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:MConcern> isa COMPARED */
/* <p1:MConcern> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_utils, 527);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((long(*)(val* self))(var_a->class->vft[COLOR_nit__model_utils__MConcern__concern_rank]))(var_a); /* concern_rank on <var_a:MConcern>*/
}
{
var8 = ((long(*)(val* self))(var_b->class->vft[COLOR_nit__model_utils__MConcern__concern_rank]))(var_b); /* concern_rank on <var_b:MConcern>*/
}
{
{ /* Inline kernel#Int#== (var7,var8) on <var7:Int> */
var11 = var7 == var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nit__model_base__MEntity__name]))(var_a); /* name on <var_a:MConcern>*/
}
{
var13 = ((val*(*)(val* self))(var_b->class->vft[COLOR_nit__model_base__MEntity__name]))(var_b); /* name on <var_b:MConcern>*/
}
{
var14 = ((long(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Comparable___60d_61d_62d]))(var12, var13); /* <=> on <var12:String>*/
}
var = var14;
goto RET_LABEL;
} else {
}
{
var15 = ((long(*)(val* self))(var_a->class->vft[COLOR_nit__model_utils__MConcern__concern_rank]))(var_a); /* concern_rank on <var_a:MConcern>*/
}
{
var16 = ((long(*)(val* self))(var_a->class->vft[COLOR_nit__model_utils__MConcern__booster_rank]))(var_a); /* booster_rank on <var_a:MConcern>*/
}
{
{ /* Inline kernel#Int#+ (var15,var16) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var23 = var15 + var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
var24 = ((long(*)(val* self))(var_b->class->vft[COLOR_nit__model_utils__MConcern__concern_rank]))(var_b); /* concern_rank on <var_b:MConcern>*/
}
{
var25 = ((long(*)(val* self))(var_b->class->vft[COLOR_nit__model_utils__MConcern__booster_rank]))(var_b); /* booster_rank on <var_b:MConcern>*/
}
{
{ /* Inline kernel#Int#+ (var24,var25) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 426);
fatal_exit(1);
}
var32 = var24 + var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var33 = standard___standard__Int___Comparable___60d_61d_62d(var17, var26);
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
