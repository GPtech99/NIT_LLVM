#include "nit__frontend.sep.0.h"
/* method frontend#ToolContext#dummy for (self: ToolContext): Bool */
short int nit__frontend___ToolContext___dummy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__frontend__ToolContext___dummy].s; /* _dummy on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method frontend#ToolContext#dummy= for (self: ToolContext, Bool) */
void nit__frontend___ToolContext___dummy_61d(val* self, short int p0) {
self->attrs[COLOR_nit__frontend__ToolContext___dummy].s = p0; /* _dummy on <self:ToolContext> */
RET_LABEL:;
}
/* method frontend#ToolContext#do_dummy for (self: ToolContext): Bool */
short int nit__frontend___ToolContext___do_dummy(val* self) {
short int var /* : Bool */;
val* var1 /* : POSet[Phase] */;
val* var2 /* : Phase */;
val* var3 /* : Phase */;
val* var4 /* : POSet[Phase] */;
val* var5 /* : Phase */;
val* var6 /* : Phase */;
val* var7 /* : POSet[Phase] */;
val* var8 /* : Phase */;
val* var9 /* : Phase */;
val* var10 /* : POSet[Phase] */;
val* var11 /* : Phase */;
val* var12 /* : Phase */;
val* var13 /* : POSet[Phase] */;
val* var14 /* : Phase */;
val* var15 /* : Phase */;
val* var16 /* : POSet[Phase] */;
val* var17 /* : Phase */;
val* var18 /* : Phase */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases]))(self); /* phases on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ToolContext__modelize_class_phase]))(self); /* modelize_class_phase on <self:ToolContext>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__no_warning__ToolContext__no_warning_phase]))(self); /* no_warning_phase on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_poset__POSet__add_edge]))(var1, var2, var3); /* add_edge on <var1:POSet[Phase]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases]))(self); /* phases on <self:ToolContext>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__simple_misc_analysis__ToolContext__simple_misc_analysis_phase]))(self); /* simple_misc_analysis_phase on <self:ToolContext>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_property__ToolContext__modelize_property_phase]))(self); /* modelize_property_phase on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var4->class->vft[COLOR_poset__POSet__add_edge]))(var4, var5, var6); /* add_edge on <var4:POSet[Phase]>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases]))(self); /* phases on <self:ToolContext>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__scope__ToolContext__scope_phase]))(self); /* scope_phase on <self:ToolContext>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__simple_misc_analysis__ToolContext__simple_misc_analysis_phase]))(self); /* simple_misc_analysis_phase on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var7->class->vft[COLOR_poset__POSet__add_edge]))(var7, var8, var9); /* add_edge on <var7:POSet[Phase]>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases]))(self); /* phases on <self:ToolContext>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__literal__ToolContext__literal_phase]))(self); /* literal_phase on <self:ToolContext>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__serialization_phase__ToolContext__serialization_phase_pre_model]))(self); /* serialization_phase_pre_model on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var10->class->vft[COLOR_poset__POSet__add_edge]))(var10, var11, var12); /* add_edge on <var10:POSet[Phase]>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases]))(self); /* phases on <self:ToolContext>*/
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ToolContext__modelize_class_phase]))(self); /* modelize_class_phase on <self:ToolContext>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__serialization_phase__ToolContext__serialization_phase_pre_model]))(self); /* serialization_phase_pre_model on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var13->class->vft[COLOR_poset__POSet__add_edge]))(var13, var14, var15); /* add_edge on <var13:POSet[Phase]>*/
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__phase__ToolContext__phases]))(self); /* phases on <self:ToolContext>*/
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__modelize_class__ToolContext__modelize_class_phase]))(self); /* modelize_class_phase on <self:ToolContext>*/
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parallelization_phase__ToolContext__parallelization_phase]))(self); /* parallelization_phase on <self:ToolContext>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var16->class->vft[COLOR_poset__POSet__add_edge]))(var16, var17, var18); /* add_edge on <var16:POSet[Phase]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
