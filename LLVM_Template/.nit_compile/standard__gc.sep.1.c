#include "standard__gc.sep.0.h"
/* method gc#Sys#force_garbage_collection for (self: Sys) */
void standard__gc___Sys___force_garbage_collection(val* self) {
nit_gcollect();
RET_LABEL:;
}
/* method gc#Finalizable#finalize for (self: Finalizable) */
void standard___standard__Finalizable___finalize(val* self) {
RET_LABEL:;
}
/* method gc#FinalizableOnce#finalized for (self: FinalizableOnce): Bool */
short int standard___standard__FinalizableOnce___finalized(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__gc__FinalizableOnce___finalized].s; /* _finalized on <self:FinalizableOnce> */
var = var1;
RET_LABEL:;
return var;
}
/* method gc#FinalizableOnce#finalized= for (self: FinalizableOnce, Bool) */
void standard___standard__FinalizableOnce___finalized_61d(val* self, short int p0) {
self->attrs[COLOR_standard__gc__FinalizableOnce___finalized].s = p0; /* _finalized on <self:FinalizableOnce> */
RET_LABEL:;
}
/* method gc#FinalizableOnce#finalize for (self: FinalizableOnce) */
void standard___standard__FinalizableOnce___Finalizable__finalize(val* self) {
short int var /* : Bool */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_standard__gc__FinalizableOnce__finalized]))(self); /* finalized on <self:FinalizableOnce>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__gc__FinalizableOnce__finalize_once]))(self); /* finalize_once on <self:FinalizableOnce>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_standard__gc__FinalizableOnce__finalized_61d]))(self, 1); /* finalized= on <self:FinalizableOnce>*/
}
RET_LABEL:;
}
/* method gc#FinalizableOnce#finalize_once for (self: FinalizableOnce) */
void standard___standard__FinalizableOnce___finalize_once(val* self) {
RET_LABEL:;
}
