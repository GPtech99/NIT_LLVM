#include "nit__uml_base.sep.0.h"
/* method uml_base#ToolContext#opt_privacy for (self: ToolContext): OptionBool */
val* nit__uml_base___ToolContext___opt_privacy(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__uml_base__ToolContext___opt_privacy].val; /* _opt_privacy on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_privacy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_base, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method uml_base#ToolContext#opt_privacy= for (self: ToolContext, OptionBool) */
void nit__uml_base___ToolContext___opt_privacy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__uml_base__ToolContext___opt_privacy].val = p0; /* _opt_privacy on <self:ToolContext> */
RET_LABEL:;
}
/* method uml_base#ToolContext#private_gen for (self: ToolContext): Bool */
short int nit__uml_base___ToolContext___private_gen(val* self) {
short int var /* : Bool */;
val* var1 /* : OptionBool */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__uml_base__ToolContext__opt_privacy]))(self); /* opt_privacy on <self:ToolContext>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_opts__Option__value]))(var1); /* value on <var1:OptionBool>*/
}
var3 = (short int)((long)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method uml_base#ToolContext#init for (self: ToolContext) */
void nit__uml_base___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionBool */;
val* var2 /* : Array[Option] */;
val* var3 /* : NativeArray[Option] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__toolcontext__ToolContext__option_context]))(self); /* option_context on <self:ToolContext>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__uml_base__ToolContext__opt_privacy]))(self); /* opt_privacy on <self:ToolContext>*/
}
var2 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var2 = array_instance Array[Option] */
var3 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var3)->values[0] = (val*) var1;
{
((void(*)(val* self, val* p0, long p1))(var2->class->vft[COLOR_standard__array__Array__with_native]))(var2, var3, 1l); /* with_native on <var2:Array[Option]>*/
}
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var2); /* add_option on <var:OptionContext>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nit__uml_base___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method uml_base#UMLModel#model for (self: UMLModel): Model */
val* nit___nit__UMLModel___model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__uml_base__UMLModel___model].val; /* _model on <self:UMLModel> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_base, 35);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method uml_base#UMLModel#model= for (self: UMLModel, Model) */
void nit___nit__UMLModel___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__uml_base__UMLModel___model].val = p0; /* _model on <self:UMLModel> */
RET_LABEL:;
}
/* method uml_base#UMLModel#mainmodule for (self: UMLModel): MModule */
val* nit___nit__UMLModel___mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__uml_base__UMLModel___mainmodule].val; /* _mainmodule on <self:UMLModel> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_base, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method uml_base#UMLModel#mainmodule= for (self: UMLModel, MModule) */
void nit___nit__UMLModel___mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__uml_base__UMLModel___mainmodule].val = p0; /* _mainmodule on <self:UMLModel> */
RET_LABEL:;
}
/* method uml_base#UMLModel#ctx for (self: UMLModel): ToolContext */
val* nit___nit__UMLModel___ctx(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__uml_base__UMLModel___ctx].val; /* _ctx on <self:UMLModel> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ctx");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__uml_base, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method uml_base#UMLModel#ctx= for (self: UMLModel, ToolContext) */
void nit___nit__UMLModel___ctx_61d(val* self, val* p0) {
self->attrs[COLOR_nit__uml_base__UMLModel___ctx].val = p0; /* _ctx on <self:UMLModel> */
RET_LABEL:;
}
/* method uml_base#UMLModel#init for (self: UMLModel) */
void nit___nit__UMLModel___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__UMLModel___standard__kernel__Object__init]))(self); /* init on <self:UMLModel>*/
}
RET_LABEL:;
}
